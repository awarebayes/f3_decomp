#!/usr/bin/env python3
"""Unpack the Visual C++ 2005 SP1 compiler (cl 14.00.50727.762) that built Fallout 3, from Microsoft's free
"Windows SDK for Windows Vista Update (Feb 2007)" DVD image, into a folder f3check can use (VC/ and SDK/). Nothing is
installed; Windows, Linux and macOS work the same way. Needs Python 3 and 7-Zip (7z, 7zz or 7za on PATH).

  ISO: https://download.microsoft.com/download/4/2/6/42684501-9ec5-43dd-9dfe-c8c9dfa6a66f/6.1.6000.16384.10.WindowsSDK_Vista_Feb2007Update_rtm.DVD.Rel.iso
       (1,237,436,416 bytes, SHA-1 5d28463daaa755450d697c850dd622d1f8b580ae)
  python3 get_vs2005.py <the .iso> <output folder>      then set F3_MSVC_ROOT to the output folder

It reads the installer databases (.msi) to give every file its real name and place, and copies only the x86 compiler,
its C/C++ headers and libraries, and the Vista SDK headers and x86 libraries (about 250 MB)."""
import os, shutil, struct, subprocess, sys, tempfile

COMPILER = ['WinSDKCompiler-x86.msi', 'WinSDKCompiler-x86.cab', 'WinSDKCompiler-WinSDKCompiler_VC8CppHeaders-common.0.cab',
            'WinSDKCompiler-WinSDKCompiler_X86_VC8CppCompiler-common.0.cab', 'WinSDKCompiler-WinSDKCompiler_X86_VC8CppCompiler-common.1.cab',
            'WinSDKCompiler-WinSDKCompiler_X86_VC8CppCompiler-x86.0.cab', 'WinSDKCompiler-WinSDKCompiler_X86_VC8CppLibraries-common.0.cab',
            'WinSDKCompiler-WinSDKCompiler_X86_VC8CppLibraries-common.1.cab', 'WinSDKCompiler-WinSDKCompiler_X86_VC8CppLibraries-common.2.cab']
SDK = ['WinSDKBuild-x86.msi', 'WinSDKBuild-x86.cab', 'WinSDKBuild-SDK_Core_BLD_Common-common.0.cab',
       'WinSDKBuild-SDK_Core_BLD_Common-common.1.cab', 'WinSDKBuild-SDK_Core_BLD_Common-common.2.cab',
       'WinSDKBuild-SDK_Core_BLD_Common-x86.0.cab', 'WinSDKBuild-WinSDKBuild_VistaHeaders-common.0.cab',
       'WinSDKBuild-WinSDKBuild_VistaLibs_X86-common.0.cab', 'WinSDKBuild-WinSDKBuild_VistaLibs_X86-x86.0.cab']


def sevenzip():
    for n in ('7z', '7zz', '7za', r'C:\Program Files\7-Zip\7z.exe'):
        if shutil.which(n) or os.path.isfile(n): return shutil.which(n) or n
    sys.exit('7-Zip not found: install it (Windows: 7-zip.org; macOS: brew install sevenzip; Linux: p7zip-full) and run again')


def run7(*args):
    r = subprocess.run([sevenzip(), *args], capture_output=True, text=True)
    if r.returncode: sys.exit('7-Zip failed: %s\n%s' % (' '.join(args[:3]), (r.stdout + r.stderr)[-600:]))


def msi_paths(streams):
    """File key -> install path, from the File, Component and Directory tables of an .msi unpacked by 7-Zip."""
    rd = lambda n: open(os.path.join(streams, n), 'rb').read()
    pool, data = rd('!_StringPool'), rd('!_StringData')
    big = bool(struct.unpack_from('<I', pool, 0)[0] & 0x80000000)
    strs, o, i = [None], 0, 4
    while i < len(pool):
        ln, rc = struct.unpack_from('<HH', pool, i); i += 4
        if ln == 0 and rc != 0: ln, = struct.unpack_from('<I', pool, i); i += 4
        strs.append(data[o:o + ln].decode('cp1252', 'replace')); o += ln
    sw = 3 if big else 2
    def table(name, cols):
        raw = rd('!' + name); w = sum(sw if k == 's' else 2 if k == 'i2' else 4 for _, k in cols)
        n = len(raw) // w; rows = [dict() for _ in range(n)]; off = 0
        for cname, k in cols:
            sz = sw if k == 's' else 2 if k == 'i2' else 4
            for r in range(n):
                v = int.from_bytes(raw[off + r * sz: off + (r + 1) * sz], 'little')
                rows[r][cname] = (strs[v] if v else None) if k == 's' else ((v - (0x8000 if sz == 2 else 0x80000000)) if v else None)
            off += n * sz
        return rows
    schema = {}
    for r in table('_Columns', [('Table', 's'), ('Number', 'i2'), ('Name', 's'), ('Type', 'i2')]):
        t = (r['Type'] + 0x8000) & 0x7fff if r['Type'] is not None else 0
        schema.setdefault(r['Table'], []).append((r['Number'], r['Name'], 's' if t & 0x800 else ('i4' if (t & 0xff) == 4 else 'i2')))
    load = lambda t: table(t, [(n, k) for _, n, k in sorted(schema[t])])
    comps = {c['Component']: c for c in load('Component')}; dirs = {d['Directory']: d for d in load('Directory')}
    def dpath(d):
        p = []
        while d and d in dirs:
            e = dirs[d]; nm = (e['DefaultDir'] or '').split(':')[-1].split('|')[-1]
            if nm not in ('.', 'SourceDir', 'SOURCEDIR', ''): p.append(nm)
            if e['Directory_Parent'] == d: break
            d = e['Directory_Parent']
        return '/'.join(reversed(p))
    return {f['File']: dpath(comps[f['Component_']]['Directory_']) + '/' + f['FileName'].split('|')[-1] for f in load('File') if f['Component_'] in comps}


def place(rel, sdk):
    """Where a file goes in the output: the compiler's VC/ tree as is; the SDK's Include and x86 Lib under SDK/."""
    parts = rel.split('/'); low = [p.lower() for p in parts]
    if not sdk:
        return '/'.join(parts[low.index('vc'):]) if 'vc' in low else None
    for k in ('include', 'lib'):
        if k in low:
            rest = parts[low.index(k) + 1:]
            if k == 'lib' and rest and rest[0].lower() in ('x64', 'ia64', 'amd64'): return None
            return '/'.join(['SDK', 'Include' if k == 'include' else 'Lib'] + rest)
    return None


def main(iso, out):
    out = os.path.abspath(out); os.makedirs(out, exist_ok=True)
    with tempfile.TemporaryDirectory() as t:
        run7('e', '-y', '-o' + t, iso, *['Setup/' + f for f in COMPILER + SDK])
        missing = [f for f in COMPILER + SDK if not os.path.isfile(os.path.join(t, f))]
        if missing: sys.exit('not the expected SDK image: %s missing' % missing[:3])
        n = 0
        for msi, cabs, sdk in (('WinSDKCompiler-x86.msi', COMPILER[1:], False), ('WinSDKBuild-x86.msi', SDK[1:], True)):
            streams = os.path.join(t, msi + '.d'); run7('x', '-y', '-o' + streams, os.path.join(t, msi))
            paths = msi_paths(streams)
            for cab in cabs:
                cd = os.path.join(t, cab + '.d'); run7('x', '-y', '-o' + cd, os.path.join(t, cab))
                for key in os.listdir(cd):
                    rel = paths.get(key); dest = place(rel, sdk) if rel else None
                    if not dest: continue
                    d = os.path.join(out, *dest.split('/')); os.makedirs(os.path.dirname(d), exist_ok=True)
                    shutil.copyfile(os.path.join(cd, key), d); n += 1
    # the compiler looks for bin/, include/ and lib/ in lower case on case-sensitive file systems
    vc = os.path.join(out, 'VC')
    for name in os.listdir(vc):
        if name.lower() != name and not os.path.exists(os.path.join(vc, name.lower())): os.rename(os.path.join(vc, name), os.path.join(vc, name.lower()))
    need = ['VC/bin/cl.exe', 'VC/bin/c1xx.dll', 'VC/bin/c2.dll', 'VC/bin/mspdb80.dll', 'VC/include/stdio.h', 'VC/lib/libcmt.lib', 'SDK/Include/windows.h', 'SDK/Lib/kernel32.lib']
    have = {os.path.relpath(os.path.join(d, f), out).replace(os.sep, '/').lower() for d, _, fs in os.walk(out) for f in fs}
    bad = [p for p in need if p.lower() not in have]   # Windows and Wine look files up without regard to case
    if bad: sys.exit('unpacked %d files, but these are missing: %s' % (n, bad))
    print('unpacked %d files into %s; set F3_MSVC_ROOT=%s' % (n, out, out))


if __name__ == '__main__':
    if len(sys.argv) != 3: sys.exit(__doc__)
    main(*sys.argv[1:])
