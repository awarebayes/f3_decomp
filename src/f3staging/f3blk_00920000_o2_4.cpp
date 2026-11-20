// src/f3staging/f3blk_00920000_o2.cpp - Fallout 3 STAGING unit (f3_staging_units.py, 3 Nov 2026) for functions with no New Vegas counterpart
// (128 KB address window, o2 code style). Not a real source path: move functions to their real units once identified.

#include "../../include/layout_support.h"

// @f3 0x009366b0 (community match, verified in this file)
namespace f3m_009366b0 {
namespace n9366b0 {
struct TypeInfo {
    int FUN_009b0760();
};
struct Member {
    const char* name;
    TypeInfo* FUN_0093d890();
};
struct Klass {
    int FUN_009b0630();
    Member* FUN_009b0650(int index);
};
struct Pair {
    void* data;
    Klass* klass;
    Pair() {}
};
struct FieldDesc {
    int unk00;
    int unk04;
    int unk08;
    int unk0c;
    short unk10;
    unsigned short unk12;
};
struct Acc {
    void* unk00;
    int unk04;
    Acc() {}
    Pair FUN_0093d810();
    Acc FUN_0093d7a0(const char* name);
    FieldDesc* FUN_0093d790();
};
}

static __declspec(noinline) short FUN_009366b0(n9366b0::Acc* acc)
{
    n9366b0::Klass* klass = acc->FUN_0093d810().klass;
    n9366b0::Member* last = klass->FUN_009b0650(klass->FUN_009b0630() - 1);
    const char* name = last->name;
    unsigned short offset = acc->FUN_0093d7a0(name).FUN_0093d790()->unk12;
    return offset + last->FUN_0093d890()->FUN_009b0760();
}

namespace n9366b0 {
Acc* volatile g_acc;
short volatile g_out;
void caller_of_FUN_009366b0()
{
    g_out = FUN_009366b0(g_acc);
}
}
}   // namespace f3m_009366b0
