// src/f3staging/f3blk_00c60000_o2.cpp - Fallout 3 STAGING unit (f3_staging_units.py, 3 Nov 2026) for functions with no New Vegas counterpart
// (128 KB address window, o2 code style). Not a real source path: move functions to their real units once identified.

#include "../../include/layout_support.h"
#include "../../include/fnv_asm_helpers.h"

// @f3 0x00c67fa0 (community match, verified in this file)
extern unsigned int DAT_010773fc;
namespace f3m_00c67fa0 {
void __cdecl FUN_00c67fa0() {
    unsigned int flags = *(volatile unsigned int*)&DAT_010773fc;
    DAT_010773fc = flags & ~1u;
}
}   // namespace f3m_00c67fa0

// @f3 0x00c67fae (community match, verified in this file)
extern unsigned int DAT_010773fc;
namespace f3m_00c67fae {
// Candidate 1 for 0x00c67fae (claim clm_6cba6a227bbb408eb9a1)
// Clearing bit 1 of the process-wide flag word. The volatile read is what keeps this a
// load/modify/store through a register instead of a single memory AND, which is the shape the
// neighbouring decompiled function in this unit already uses for the same global.

void FUN_00c67fae()
{
    unsigned int flags = *(volatile unsigned int*)&DAT_010773fc;
    DAT_010773fc = flags & ~2u;
}
}   // namespace f3m_00c67fae
