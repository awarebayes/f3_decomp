#include <string.h>
#include <string.h>
#include <string.h>
// src/f3staging/f3blk_005a0000_o2.cpp - Fallout 3 STAGING unit (f3_staging_units.py, 3 Nov 2026) for functions with no New Vegas counterpart
// (128 KB address window, o2 code style). Not a real source path: move functions to their real units once identified.

#include "../../include/layout_support.h"
#include "../../include/fnv_asm_helpers.h"

// @f3 0x005a6400 (community match, verified in this file)
namespace f3m_005a6400 {
struct Owner5a64 {int unk00; int unk04; int unk08; int unk0C; int unk10; int unk14; int unk18; int unk1C; signed char unk20;bool FUN_005a6400();};
bool Owner5a64::FUN_005a6400(){bool result=false;switch(unk20){case 18:case 19:case 20:case 21:case 22:case 23:case 24:case 25:case 27:case 28:case 29:case 31:case 32:case 33:case 34:case 35:case 36:result=true;break;}return result;}
}   // namespace f3m_005a6400
