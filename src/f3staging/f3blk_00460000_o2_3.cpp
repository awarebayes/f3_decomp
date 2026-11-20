#include <new>
#include <windows.h>
#include <stdio.h>
// src/f3staging/f3blk_00460000_o2.cpp - Fallout 3 STAGING unit (f3_staging_units.py, 3 Nov 2026) for functions with no New Vegas counterpart
// (128 KB address window, o2 code style). Not a real source path: move functions to their real units once identified.

#include "../../include/layout_support.h"
#include "../../include/fnv_asm_helpers.h"

// @f3 0x00475d90 (community match, verified in this file)
namespace f3m_00475d90 {
struct Entry475d90 {
    const char* pName;
    int unk04;
    int unk08;
};

int __cdecl FUN_00475a70(unsigned char a_ucFormType);
void __cdecl FUN_00887da0(const char* a_pFormat, ...);

extern const char* DAT_00f4e5c8[];
extern Entry475d90 DAT_00f4a74c[];
extern const char* DAT_00f4c7a8;
extern const char* DAT_00f4c7ac;
extern const char* DAT_00f4c7b0;
extern const char* DAT_00f4c7b4;
extern const char* DAT_00f4c7b8;
extern const char* DAT_00f4c7bc;
extern const char* DAT_00f4c7c0;
extern const char* DAT_00f4c7c4;
extern const char* DAT_00f4c7c8;
extern const char* DAT_00f4c7cc;
extern const char* DAT_00f4c7d0;
extern const char* DAT_00f4c7d4;
extern const char* DAT_00f4c7d8;
extern const char* DAT_00f4c7dc;
extern const char* DAT_00f4c7e0;
extern const char* DAT_00f4c7e4;
extern const char* DAT_00f4c7e8;
extern const char* DAT_00f4c7ec;
extern const char* DAT_00f4c7f0;
extern const char* DAT_00f4c7f4;
extern const char* DAT_00f4c7f8;
extern const char* DAT_00f4c7fc;
extern const char* DAT_00f4c800;
extern const char* DAT_00f4c804;
extern const char* DAT_00f4c808;
extern const char* DAT_00f4c80c;
extern const char* DAT_00f4c810;

const char* __cdecl FUN_00475d90(unsigned char a_ucFormType) {
    int iIndex = FUN_00475a70(a_ucFormType);
    if (iIndex >= 0)
        return DAT_00f4e5c8[iIndex];

    switch (a_ucFormType) {
    case 12: return DAT_00f4c7a8;
    case 7: return DAT_00f4c7ac;
    case 17: return DAT_00f4c7b0;
    case 69: return DAT_00f4c7b4;
    case 57: return DAT_00f4c7b8;
    case 8: return DAT_00f4c7bc;
    case 13: return DAT_00f4c7c0;
    case 6: return DAT_00f4c7c4;
    case 55: return DAT_00f4c7c8;
    case 3: return DAT_00f4c7cc;
    case 16: return DAT_00f4c7d0;
    case 65: return DAT_00f4c7d4;
    case 54: return DAT_00f4c7d8;
    case 53: return DAT_00f4c7dc;
    case 15: return DAT_00f4c7e0;
    case 71: return DAT_00f4c7e4;
    case 9: return DAT_00f4c7e8;
    case 10: return DAT_00f4c7ec;
    case 11: return DAT_00f4c7f0;
    case 58: return DAT_00f4c7f4;
    case 72: return DAT_00f4c7f8;
    case 73: return DAT_00f4c7fc;
    case 49: return DAT_00f4c800;
    case 83: return DAT_00f4c804;
    case 84: return DAT_00f4c808;
    case 14: return DAT_00f4c80c;
    case 102: return DAT_00f4c810;
    }

    if (a_ucFormType >= 0x67) {
        FUN_00887da0("FORMS: Invalid FormID sent to FormIDToString().\r\n", DAT_00f4a74c[a_ucFormType].pName);
        a_ucFormType = 0;
    }
    return DAT_00f4a74c[a_ucFormType].pName;
}
}   // namespace f3m_00475d90
