#include <new>
// src/f3staging/f3iso_00934e80_o2.cpp - Fallout 3 ISOLATED unit (19 Nov 2026) for 0x00934e80 alone: its original passes arguments in registers to
// a static helper of its own file, which only works without other code (16-byte-aligned locals) in the unit. Write the helper
// static in your candidate. Not a real source path.

#include "../../include/layout_support.h"
#include "../../include/fnv_asm_helpers.h"

// @f3 0x00934e80 (community match, verified in this file)
namespace f3m_00934e80 {
namespace subpart_migration {
struct Klass {
    int FUN_009b0760() const;
};

struct Variant {
    void* object;
    const Klass* klass;
};

struct Tracker;

struct ClassView {
    Variant variant;
    ClassView() {}
    const Klass& getClass() const { return *variant.klass; }
};

struct MemberView {
    struct SimpleArray {
        void* data;
        int size;
    };
    void* address;
    const void* member;

    MemberView(const Variant& object, const char* memberName);
    SimpleArray& FUN_0093d760(int index) const;
    ClassView FUN_0093d810() const;
};

typedef void (__cdecl *ConvertElement)(Variant&, Variant&, Tracker&);

void __cdecl FUN_00934e00(Variant&, Variant&, Tracker&);
void __cdecl FUN_00934d80(Variant&, Variant&, Tracker&);

static void FUN_00934e80(const MemberView& oldMember, const MemberView& newMember,
                         Tracker& tracker, ConvertElement convert)
{
    MemberView::SimpleArray& oldArray = oldMember.FUN_0093d760(0);
    MemberView::SimpleArray& newArray = newMember.FUN_0093d760(0);

    Variant oldElement = { 0, &oldMember.FUN_0093d810().getClass() };
    Variant newElement = { 0, &newMember.FUN_0093d810().getClass() };
    int oldStride = oldElement.klass->FUN_009b0760();
    int newStride = newElement.klass->FUN_009b0760();
    for (int index = 0; index < oldArray.size; ++index) {
        oldElement.object = static_cast<char*>(oldArray.data) + index * oldStride;
        newElement.object = static_cast<char*>(newArray.data) + index * newStride;
        convert(oldElement, newElement, tracker);
    }
}

void __cdecl FUN_00934f50(Variant& oldObject, Variant& newObject, Tracker& tracker)
{
    FUN_00934e80(MemberView(oldObject, "trianglesSubparts"),
                 MemberView(newObject, "trianglesSubparts"), tracker, FUN_00934e00);
    FUN_00934e80(MemberView(oldObject, "shapesSubparts"),
                 MemberView(newObject, "shapesSubparts"), tracker, FUN_00934d80);
}
}
}   // namespace f3m_00934e80
