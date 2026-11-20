#!/usr/bin/env python3
"""Run the Microsoft Visual C++ compiler this project is built with: Visual C++ 2005 SP1 (cl 14.00.50727.762), the
compiler Fallout 3 was built with.

usage: python3 tools/msvc.py [--compiler vs2005] [--tool cl|link|lib|dumpbin|undname] <MSVC arguments>

F3_MSVC_ROOT is a folder holding VC/ (bin, include, lib) and SDK/ (Include, Lib), as tools/get_vs2005.py unpacks it
from Microsoft's free "Windows SDK for Windows Vista Update (Feb 2007)" image (see README.md; the files are Microsoft's
and are not in this repository).

On Windows the compiler runs directly. Elsewhere it runs under Wine, in the prefix F3_MSVC_PREFIX, created on first
use. Absolute paths in the arguments are converted to Wine paths.
"""
import argparse
import os
from pathlib import Path
import subprocess
import sys
import tempfile

ROOTS = {'vs2005': 'F3_MSVC_ROOT'}
WINDOWS = os.name == 'nt'


def compiler_root(name='vs2005'):
    variable = ROOTS[name]
    if not os.environ.get(variable):
        raise SystemExit('msvc.py: set %s to the folder holding VC/ and SDK/ for Visual C++ 2005 SP1' % variable)
    root = Path(os.environ[variable])
    if not (root / 'VC/bin/cl.exe').exists():
        raise SystemExit('msvc.py: %s=%s has no VC/bin/cl.exe' % (variable, root))
    return root


def windows_path(path):
    return 'Z:' + str(Path(path).resolve()).replace('/', '\\')


def run(tool, compiler, arguments):
    root = compiler_root(compiler)
    if WINDOWS:
        env = os.environ.copy()
        env.update(INCLUDE=';'.join(str(p) for p in [root / 'VC/include', root / 'SDK/Include']),
                   LIB=';'.join(str(p) for p in [root / 'VC/lib', root / 'SDK/Lib']),
                   PATH=str(root / 'VC/bin') + os.pathsep + env.get('PATH', ''))
        return subprocess.run([str(root / 'VC/bin' / (tool + '.exe'))] + arguments, env=env,
                              stdin=subprocess.DEVNULL).returncode
    prefix = os.environ.get('F3_MSVC_PREFIX')
    if not prefix:
        raise SystemExit('msvc.py: set F3_MSVC_PREFIX to a folder for the Wine prefix (created on first use)')
    env = os.environ.copy()
    env.update(WINEPREFIX=str(Path(prefix).resolve()), WINEDEBUG='-all', WINEPATH=windows_path(root / 'VC/bin'),
               INCLUDE=';'.join(windows_path(p) for p in [root / 'VC/include', root / 'SDK/Include']),
               LIB=';'.join(windows_path(p) for p in [root / 'VC/lib', root / 'SDK/Lib']))
    converted = []
    for arg in arguments:
        for option in ['/LIBPATH:', '/OUT:', '/DEF:', '/IMPLIB:', '/PDB:', '/MAP:', '/Fo', '/Fe', '/I']:
            if arg.lower().startswith(option.lower()) and arg[len(option):].startswith('/'):
                converted.append(arg[:len(option)] + windows_path(arg[len(option):]))
                break
        else:
            converted.append(windows_path(arg) if Path(arg).is_absolute() and Path(arg).exists() else arg)
    # Start the Wine server detached from our output first: its background services inherit the starting process's
    # descriptors and would otherwise keep a caller's pipe open forever.
    quiet = dict(env=env, stdin=subprocess.DEVNULL, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    if subprocess.run(['wineserver', '-p'], **quiet).returncode == 2:
        subprocess.run(['wine', 'cmd', '/c', 'exit'], start_new_session=True, **quiet)
        subprocess.run(['wineserver', '-p'], **quiet)
    with tempfile.TemporaryFile() as output:
        code = subprocess.run(['wine', str(root / 'VC/bin' / (tool + '.exe'))] + converted, env=env,
                              stdin=subprocess.DEVNULL, stdout=output, stderr=subprocess.STDOUT).returncode
        output.seek(0)
        sys.stdout.buffer.write(output.read())
        sys.stdout.flush()
    return code


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--tool', default='cl', choices=['cl', 'link', 'lib', 'dumpbin', 'undname'])
    parser.add_argument('--compiler', default='vs2005', choices=sorted(ROOTS))
    options, arguments = parser.parse_known_args()
    raise SystemExit(run(options.tool, options.compiler, arguments))
