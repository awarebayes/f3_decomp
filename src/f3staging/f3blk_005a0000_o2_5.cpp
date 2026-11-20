#include <windows.h>
#include <string.h>
#include <string.h>
// src/f3staging/f3blk_005a0000_o2.cpp - Fallout 3 STAGING unit (f3_staging_units.py, 3 Nov 2026) for functions with no New Vegas counterpart
// (128 KB address window, o2 code style). Not a real source path: move functions to their real units once identified.

#include "../../include/layout_support.h"
#include "../../include/fnv_asm_helpers.h"

// @f3 0x005a4080 (community match, verified in this file)
namespace f3m_005a4080 {
struct CodexTagValue { int FUN_005acce0(); };
enum CodexSelectionType { CodexSelectionNone=0 };
struct CodexSelection {
    int unk00;
    int unk04;
    int unk08;
    int unk0C;
    int unk10;
    int unk14;
    int unk18;
    int unk1C;
    signed char type;
    char unk21;
    char unk22;
    char unk23;
    int unk24;
    int unk28;
    CodexTagValue* selected;
    CodexTagValue* FUN_005a4020();
    CodexTagValue* FUN_005a4080();
    CodexSelectionType GetType() { return (CodexSelectionType)type; }
};
CodexTagValue* CodexSelection::FUN_005a4080() {
    switch(GetType()) {
    case 0: case 12: case 17: case 28: return selected;
    case 2: case 3: case 8: case 16: {
        CodexTagValue* value=FUN_005a4020();
        if (value && value->FUN_005acce0()==7) return selected;
        return FUN_005a4020();
    }
    default: return 0;
    }
}
}   // namespace f3m_005a4080

