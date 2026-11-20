#include <string.h>
#include <string.h>
#include <string.h>
// src/f3staging/f3blk_005a0000_o2.cpp - Fallout 3 STAGING unit (f3_staging_units.py, 3 Nov 2026) for functions with no New Vegas counterpart
// (128 KB address window, o2 code style). Not a real source path: move functions to their real units once identified.

#include "../../include/layout_support.h"
#include "../../include/fnv_asm_helpers.h"

// @f3 0x005adce0 (community match, verified in this file)
extern int DAT_00f66bfc;
extern int DAT_00f66c08;
extern int DAT_00f66c14;
extern int DAT_00f66c20;
namespace f3m_005adce0 {

int FUN_005adce0(int aIndex)
{
    switch (aIndex)
    {
    case 0:
        return 0;
    case 1:
        return DAT_00f66bfc;
    case 2:
        return DAT_00f66c08;
    case 3:
        return DAT_00f66c14;
    case 4:
        return DAT_00f66c20;
    }
    return 100;
}
}   // namespace f3m_005adce0
