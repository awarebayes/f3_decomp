#include <new>
// src/f3staging/f3iso_00a6f510_o2.cpp - Fallout 3 ISOLATED unit (20 Nov 2026) for 0x00a6f510 alone: its served file contradicted the
// function (declarations, stand-in bodies, pragmas). Write your own types and helpers in the candidate. Not a real source path.

#include "../../include/layout_support.h"
#include "../../include/fnv_asm_helpers.h"

// @f3 0x00a6f510 (community match, verified in this file)
#include <new>
namespace f3m_00a6f510 {

class hkpConstraintData;
class hkpConstraintQueryIn;
class hkpConstraintQueryOut;

struct hkFinishLoadedObjectFlag
{
    int m_finishing;
};

struct hkpConstraintAtom
{
    unsigned short m_type;
};

struct hkpBridgeConstraintAtom : hkpConstraintAtom
{
    typedef void (__cdecl *BuildJacobian)(const hkpConstraintData*,
                                         const hkpConstraintQueryIn&,
                                         hkpConstraintQueryOut&);

    BuildJacobian m_buildJacobianFunc;
    const hkpConstraintData* m_constraintData;

    void init(const hkpConstraintData* data) throw();
    explicit hkpBridgeConstraintAtom(hkFinishLoadedObjectFlag flag) throw()
    {
        if (flag.m_finishing)
            init(m_constraintData);
    }
};

void __cdecl FUN_00a6f510(void* storage)
{
    hkFinishLoadedObjectFlag flag;
    flag.m_finishing = 1;
    new (storage) hkpBridgeConstraintAtom(flag);
}
}   // namespace f3m_00a6f510
