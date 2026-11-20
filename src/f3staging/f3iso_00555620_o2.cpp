#include <new>
// src/f3staging/f3iso_00555620_o2.cpp - Fallout 3 ISOLATED unit (20 Nov 2026) for 0x00555620 alone: its served file contradicted the
// function (declarations, stand-in bodies, pragmas). Write your own types and helpers in the candidate. Not a real source path.

#include "../../include/layout_support.h"
#include "../../include/fnv_asm_helpers.h"

// @f3 0x00555620 (community match, verified in this file)
extern unsigned char DAT_00f4a940;
namespace f3m_00555620 {

class TESFile
{
public:
    bool FUN_00449ac0(int first, int second);
    bool FUN_00448f60(unsigned int fileOffset);
    unsigned int FUN_00448cc0();
    unsigned int currentFormId() const
    {
        return *reinterpret_cast<const unsigned int*>(reinterpret_cast<const char*>(this) + 0x24c);
    }
};

class TESNPC
{
public:
    bool FUN_00555620(TESFile* file) const;
    unsigned int savedRecordOffset() const
    {
        return *reinterpret_cast<const unsigned int*>(reinterpret_cast<const char*>(this) + 0x1c8);
    }
    unsigned int formId() const
    {
        return *reinterpret_cast<const unsigned int*>(reinterpret_cast<const char*>(this) + 0xc);
    }
};

bool TESNPC::FUN_00555620(TESFile* file) const
{
    if (file && savedRecordOffset() && file->FUN_00449ac0(0, 0)
        && file->FUN_00448f60(savedRecordOffset()) && file->FUN_00448cc0() == DAT_00f4a940
        && file->currentFormId() == formId())
        return true;
    return false;
}
}   // namespace f3m_00555620
