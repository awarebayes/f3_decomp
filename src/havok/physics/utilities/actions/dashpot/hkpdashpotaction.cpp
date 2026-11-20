#include "f3_common.h"
// src/havok/physics/utilities/actions/dashpot/hkpdashpotaction.cpp - unit created 2026-10-16 from the whole-binary attribution (360 source path: d:/projects/fallout/code/havok/source/physics/utilities/actions/dashpot/hkpdashpotaction.cpp).
// Functions are listed by their @fnv annotations; compile flags inferred from the PC code.

#include "havok/hkpDashpotAction.h"

#include <xmmintrin.h>
extern float DAT_0101e2bc;
extern float DAT_01013ea4;
extern int DAT_010d0994;
struct FUN_00cf4d80_shell
{
    void FUN_00cf4d80(int entityA, int entityB, int name);
};
struct FUN_00d4d980_Class : hkpDashpotAction
{
    FUN_00d4d980_Class* FUN_00d4d980(int entityA, int entityB, int name);
};
// Calls FUN_00cf4d80, sets m_fSpringStrength and m_fMotorDamping from globals, sets the vtable pointer, zeroes both m_kPoint entries and returns this.
// @f3 0x009da570 (community match, verified in this file)
extern float FUN_00dbe8fc;
extern float FUN_00db75c8;
extern int FUN_00e80268;
struct DashBaseCall7
{
    void FUN_00979e40(int entityA, int entityB, int name);
};
FUN_00d4d980_Class* FUN_00d4d980_Class::FUN_00d4d980(int entityA, int entityB, int name)
{
    reinterpret_cast<DashBaseCall7*>(this)->FUN_00979e40(entityA, entityB, name);
    m_fSpringStrength = FUN_00dbe8fc;
    *reinterpret_cast<int**>(this) = &FUN_00e80268;
    m_fMotorDamping = FUN_00db75c8;
    m_kPoint[0].w = 0.0f;
    m_kPoint[0].z = 0.0f;
    m_kPoint[0].y = 0.0f;
    m_kPoint[0].x = 0.0f;
    m_kPoint[1].w = 0.0f;
    m_kPoint[1].z = 0.0f;
    m_kPoint[1].y = 0.0f;
    m_kPoint[1].x = 0.0f;
    return this;
}


// FUN_00d4d9d0 - hkpDashpotAction clone-style factory (Havok)

__declspec(dllimport) void* __stdcall TlsGetValue(unsigned long dwTlsIndex);

unsigned long g_tlsIdx = 0;

__declspec(noinline) void* FUN_00c85750()
{
    unsigned long idx = g_tlsIdx;
    return TlsGetValue(idx);
}

class DashHeap1
{
  public:
    virtual void unk00();
    virtual void* allocate(int size);
};

struct DashRouter1
{
    void* u00;
    void* u04;
    void* u08;
    void* u0c;
    DashHeap1* u10;
};

class FUN_00d4d980_class
{
  public:
    void* FUN_00d4d980(hkpEntity* entityA, hkpEntity* entityB, hkUlong userData);
};

__declspec(noinline) void* FUN_00d4d980_class::FUN_00d4d980(hkpEntity* entityA, hkpEntity* entityB, hkUlong userData)
{
    return this;
}

class hkpDashpotActionX : public hkpDashpotAction
{
  public:
    hkpAction* FUN_00d4d9d0(const hkArray<hkpEntity*>& newEntities, const hkArray<hkpEntity*>& removedEntities);
};

// Clones the dashpot action when exactly two entities are added and none removed, copying points, spring strength, damping, and contact impulse.
// @fnv 0x00d4d9d0
hkpAction* hkpDashpotActionX::FUN_00d4d9d0(const hkArray<hkpEntity*>& newEntities,
                                           const hkArray<hkpEntity*>& removedEntities)
{
    if (newEntities.m_iElementCount != 2)
        return 0;
    if (removedEntities.m_iElementCount != 0)
        return 0;

    DashRouter1* router = (DashRouter1*)FUN_00c85750();
    hkpDashpotAction* pDashpot = (hkpDashpotAction*)router->u10->allocate(0x60);
    pDashpot->m_usMemSizeAndFlags = 0x60;
    pDashpot = (hkpDashpotAction*)((FUN_00d4d980_class*)pDashpot)
                   ->FUN_00d4d980(newEntities.m_data[0], newEntities.m_data[1], m_ulUserData);

    *(__m128*)&pDashpot->m_kPoint[0] = *(__m128*)&m_kPoint[0];
    *(__m128*)&pDashpot->m_kPoint[1] = *(__m128*)&m_kPoint[1];
    pDashpot->m_fSpringStrength = m_fSpringStrength;
    pDashpot->m_fMotorDamping = m_fMotorDamping;
    *(__m128*)&pDashpot->m_fContactImpulse = *(__m128*)&m_fContactImpulse;
    return pDashpot;
}
