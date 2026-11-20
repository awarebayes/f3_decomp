#include "f3_common.h"
// src/havok/physics/utilities/constraint/chain/hkppoweredchainmapper_decl_variant.cpp - declaration variant unit created 2026-10-26 by decl_variants.py for paused function 0x00e3a440: the skeleton of src/havok/physics/utilities/constraint/chain/hkppoweredchainmapper.cpp
// with declarations corrected to what the original code does (hkpPoweredChainMapper.h: hkpPoweredChainMapper += void FUN_00e3a440(int linkIndex, int motorIndex, class hkpConstraintMotor* motor);; hkReferencedObject.h: hkReferencedObject += void RetainReference() const; void removeReference() const;). Move the function to its real unit once
// that unit declares it this way.

// src/havok/physics/utilities/constraint/chain/hkppoweredchainmapper.cpp - unit created 2026-10-16 from the whole-binary attribution (360 source path: d:/projects/fallout/code/havok/source/physics/utilities/constraint/chain/hkppoweredchainmapper.cpp).
// Functions are listed by their @fnv annotations; compile flags inferred from the PC code.
#include "havok/hkpPoweredChainMapper_decl_hkppoweredchainmapper.h"

class hkpConstraintMotor : public hkReferencedObject
{
};
struct __declspec(align(16)) ChainConstraintInfo
{
    hkVector4 pivotInA;
    hkVector4 pivotInB;
    hkQuaternion rotationA;
    hkQuaternion rotationB;
    hkpConstraintMotor* motors[3];
    hkBool switchBodies;
};
class hkpPoweredChainData : public hkReferencedObject
{
  public:
    int unk08, unk0c, unk10, unk14;
    ChainConstraintInfo* infos;
};
class hkpPoweredChainMapperLinkInfo
{
  public:
    int firstTarget;
    int targetCount;
    void* user;
};
class hkpPoweredChainMapperTarget
{
  public:
    hkpPoweredChainData* chainData;
    int infoIndex;
};
// @f3 0x00a6f940 (community match, verified in this file)
void hkReferencedObject::removeReference() const
{
    hkReferencedObject* self = const_cast<hkReferencedObject*>(this);
    if (self->m_usMemSizeAndFlags != 0) {
        if (--self->m_sReferenceCount == 0) {
            delete self;
        }
    }
}

void hkReferencedObject::RetainReference() const
{
    hkReferencedObject* self = const_cast<hkReferencedObject*>(this);
    if (self->m_usMemSizeAndFlags != 0) {
        ++self->m_sReferenceCount;
    }
}

void hkpPoweredChainMapper::FUN_00e3a440(int linkIndex, int motorIndex, hkpConstraintMotor* motor)
{
    const hkpPoweredChainMapperLinkInfo& link = m_ppLinks.m_data[linkIndex];
    for (int i = 0; i < link.targetCount; ++i) {
        hkpPoweredChainMapperTarget& target = m_kTargets.m_data[link.firstTarget + i];
        hkpPoweredChainData* chain = target.chainData;
        hkpConstraintMotor* old = chain->infos[target.infoIndex].motors[motorIndex];
        if (old) {
            old->removeReference();
        }
        chain->infos[target.infoIndex].motors[motorIndex] = motor;
        if (motor) {
            motor->RetainReference();
        }
    }
}

