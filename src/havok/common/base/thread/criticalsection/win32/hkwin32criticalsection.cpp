// src/havok/common/base/thread/criticalsection/win32/hkwin32criticalsection.cpp - unit created 2026-10-16 from the whole-binary attribution (360 source path: d:/projects/fallout/code/havok/source/common/base/thread/criticalsection/win32/hkwin32criticalsection.cpp).
// Functions are listed by their @fnv annotations; compile flags inferred from the PC code.

#include <windows.h>
struct FUN_00cf6da0_cls
{
    CRITICAL_SECTION m_00;
    FUN_00cf6da0_cls* FUN_00cf6da0(DWORD spinCount);
};

// @f3 0x0058dd10 (community match, verified in this file)
#include <windows.h>
namespace f3m_0058dd10 {
extern "C" void __cdecl FUN_0042f0d0(void*);
extern "C" void __cdecl FUN_004320f0(void*);
extern "C" void __stdcall FUN_00c01f76(void*, unsigned long, int, void (__cdecl*)(void*), void*);
struct X { CRITICAL_SECTION m_00; X* FUN_0058dd10(); };
X* X::FUN_0058dd10()
{
    FUN_00c01f76(this, 0x18, 2, FUN_004320f0, (void*)FUN_0042f0d0);
    return this;
}
}   // namespace f3m_0058dd10

