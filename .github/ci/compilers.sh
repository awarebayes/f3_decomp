#!/bin/bash
# Download Visual C++ 2005 SP1 (cl 14.00.50727.762) from Microsoft and unpack it for tools/msvc.py with
# tools/get_vs2005.py, as README.md describes under "Compilers without Windows". The download is checked against its
# SHA-256 first.
#
# usage: compilers.sh vs2005 DEST          -> DEST/vs2005/VC and DEST/vs2005/SDK
#        compilers.sh vs2005 DEST --iso F  -> the same from an image already downloaded (still checked)
#        compilers.sh --digest DIR         -> one SHA-256 over every file under DIR (paths and contents)
set -euo pipefail
digest() { (cd "$1" && find . -type f -print0 | LC_ALL=C sort -z | xargs -0 sha256sum) | sha256sum | cut -c1-64; }
if [ "$1" = --digest ]; then digest "$2"; exit; fi
name=$1; dest=$(realpath -m "$2"); R="$dest/$name"; ISO=${4:-}
[ "$name" = vs2005 ] || { echo "usage: compilers.sh vs2005 DEST [--iso FILE]"; exit 2; }
TOOLS=$(cd "$(dirname "$0")/../../tools" && pwd)
work=$(mktemp -d); trap 'rm -rf "$work"' EXIT
URL=https://download.microsoft.com/download/4/2/6/42684501-9ec5-43dd-9dfe-c8c9dfa6a66f/6.1.6000.16384.10.WindowsSDK_Vista_Feb2007Update_rtm.DVD.Rel.iso
SHA=f544c8ec782921a64ffed4b41206aa3d6e16d0cf47c78a5bc26308ae0c2251ea
if [ -z "$ISO" ]; then curl -fsSL --retry 5 --retry-delay 10 -o "$work/dl.iso" "$URL"; ISO=$work/dl.iso; fi
echo "$SHA  $ISO" | sha256sum -c --quiet
# Ubuntu's 7-Zip (the 7zip package, tested); GitHub's runners also carry another build earlier on PATH
PATH=/usr/bin:$PATH python3 -I "$TOOLS/get_vs2005.py" "$ISO" "$R" >/dev/null
# the compiler's own runtime (msvcr80 and friends) as the private assembly cl.exe asks for, from the same image
SEVENZIP=$(command -v /usr/bin/7z || command -v 7z)
"$SEVENZIP" x -y -o"$work/crt" "$ISO" "Setup/WinSDK-WinSDK_BIN_VC8_Runtime_X86_CRT-common.0.cab" >/dev/null
"$SEVENZIP" x -y -o"$work/crt/x" "$work/crt/Setup/WinSDK-WinSDK_BIN_VC8_Runtime_X86_CRT-common.0.cab" >/dev/null
A="$R/VC/bin/Microsoft.VC80.CRT"; mkdir -p "$A"
for d in msvcr80 msvcp80 msvcm80; do cp "$work"/crt/x/nosxs_$d.dll.* "$A/$d.dll"; done
printf '<?xml version="1.0" encoding="UTF-8" standalone="yes"?>\n<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">\n<assemblyIdentity type="win32" name="Microsoft.VC80.CRT" version="8.0.50608.0" processorArchitecture="x86" publicKeyToken="1fc8b3b9a1e18e3b"/>\n<file name="msvcr80.dll"/><file name="msvcp80.dll"/><file name="msvcm80.dll"/>\n</assembly>\n' > "$A/Microsoft.VC80.CRT.manifest"
echo "$name: $(digest "$R")"
