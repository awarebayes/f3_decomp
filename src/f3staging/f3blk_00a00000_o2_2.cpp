// src/f3staging/f3blk_00a00000_o2.cpp - Fallout 3 STAGING unit (f3_staging_units.py, 3 Nov 2026) for functions with no New Vegas counterpart
// (128 KB address window, o2 code style). Not a real source path: move functions to their real units once identified.

#include "../../include/layout_support.h"

// @f3 0x00a02bf0 (community match, verified in this file)
namespace f3m_00a02bf0 {
// 0x00a02bf0: per body of a keyframed ragdoll hierarchy, the desired world transform from the parent's desired
// transform and the local pose, blended toward the parent's actual rigid body by the control data's hierarchy gain,
// then moved to the body's centre of mass. x87 build of the Havok math (hkVector4 with four float lanes).
// Compiled with /MT /O2 /GS /EHsc /Gy (the pack lists /Od; the target is optimised code with an aligned frame).
// The function is static: VC8 passes its first argument in ecx and the caller pops the rest (the only caller is
// 0x00a033a0, which loads the local pose into ecx and pushes body, palette, key frame and work array).
// The vector helpers follow the spellings of this unit's matched candidates (0x00a00ec0, 0x008efe30).
// Marked "Guess" below: parentheses and a named reference that emit no code; they set the x87 operand order.
namespace f3m_00a02bf0 {

typedef float hkReal;
typedef hkReal hkSimdReal;
typedef hkReal hkSimdRealParameter;

class hkQuaternion;

class hkVector4
{
public:
    __forceinline void operator=(const hkVector4& v) { x = v.x; y = v.y; z = v.z; w = v.w; }
    __forceinline hkReal& operator()(int i) { return (&x)[i]; }
    __forceinline const hkReal& operator()(int i) const { return (&x)[i]; }
    __forceinline void set(hkReal a, hkReal b, hkReal c, hkReal d) { x = a; y = b; z = c; w = d; }
    __forceinline void setAll(hkReal a) { x = a; y = a; z = a; w = a; }
    __forceinline void add4(const hkVector4& v) { x += v.x; y += v.y; z += v.z; w += v.w; }
    // Guess: the parentheses on three lanes set the x87 operand order of later adds (no code of their own).
    __forceinline void setAdd4(const hkVector4& a, const hkVector4& b) { x = (a.x + b.x); y = (a.y + b.y); z = (a.z + b.z); w = a.w + b.w; }
    __forceinline void setMul4(const hkVector4& a, const hkVector4& b) { x = a.x * b.x; y = a.y * b.y; z = a.z * b.z; w = a.w * b.w; }
    __forceinline void setMul4(hkSimdRealParameter rs, const hkVector4& a) { hkReal r = rs; x = r * a.x; y = r * a.y; z = r * a.z; w = r * a.w; }
    __forceinline void addMul4(hkSimdRealParameter rs, const hkVector4& a) { hkReal r = rs; x += r * a.x; y += r * a.y; z += r * a.z; w += r * a.w; }
    __forceinline void setInterpolate4(const hkVector4& a, const hkVector4& b, hkSimdRealParameter t)
    {
        hkReal s = (1.0f - t);   // Guess: parentheses (numbering only)
        x = s * a.x + t * b.x;
        y = s * a.y + t * b.y;
        z = s * a.z + t * b.z;
        w = s * a.w + t * b.w;
    }
    __forceinline void setCross(const hkVector4& v1, const hkVector4& v2)
    {
        const hkReal nx = v1(1) * v2(2) - v1(2) * v2(1);
        const hkReal ny = v1(2) * v2(0) - v1(0) * v2(2);
        const hkReal nz = (v1(0) * v2(1)) - v1(1) * v2(0);   // Guess: parentheses (numbering only)
        set(nx, ny, nz, 0.0f);
    }
    __forceinline hkSimdReal dot3(const hkVector4& a) const { return (x * a.x) + (y * a.y) + (z * a.z); }
    __forceinline void setRotatedDir(const hkQuaternion& quat, const hkVector4& direction);

    __declspec(align(16)) hkReal x;
    hkReal y;
    hkReal z;
    hkReal w;
};

class hkQuaternion
{
public:
    __forceinline const hkVector4& getImag() const { return m_vec; }
    __forceinline hkReal getReal() const { return m_vec(3); }
    void FUN_008d3290(const hkQuaternion& q0, const hkQuaternion& q1);              // setMul
    void FUN_009243a0(const hkQuaternion& q0, const hkQuaternion& q1, hkReal t);    // setSlerp

    hkVector4 m_vec;
};

__forceinline void hkVector4::setRotatedDir(const hkQuaternion& quat, const hkVector4& direction)
{
    hkReal qreal = quat.m_vec(3);
    hkReal q2minus1 = qreal * qreal - 0.5f;
    hkVector4 ret;
    ret.setMul4(q2minus1, direction);
    hkReal imagDotDir = quat.getImag().dot3(direction);
    ret.addMul4(imagDotDir, quat.getImag());
    hkVector4 imagCrossDir;
    imagCrossDir.setCross(quat.getImag(), direction);
    ret.addMul4(qreal, imagCrossDir);
    setAdd4(ret, ret);
}

// hkQuaternion::setMul: a plain inline that VC8 leaves out of line (the target calls the shared copy). Its body
// must be visible: the composed transform's scale then folds 1 * scale as the target does at +0x4ca.
inline void hkQuaternion::FUN_008d3290(const hkQuaternion& q0, const hkQuaternion& q1)
{
    hkVector4 vec;
    vec.setCross(q0.getImag(), q1.getImag());
    vec.addMul4(q0.getReal(), q1.getImag());
    vec.addMul4(q1.getReal(), q0.getImag());
    const hkReal w = q0.getReal() * q1.getReal() - q0.getImag().dot3(q1.getImag());
    m_vec = vec;
    m_vec(3) = w;
}

class hkQsTransform
{
public:
    __forceinline hkQsTransform() {}
    __forceinline hkQsTransform(const hkVector4& translation, const hkQuaternion& rotation)
        : m_translation(translation), m_rotation(rotation)
    {
        m_scale.setAll(1.0f);
    }
    __forceinline void setMul(const hkQsTransform& t1, const hkQsTransform& t2)
    {
        hkVector4 temp;
        temp.setRotatedDir(t1.m_rotation, t2.m_translation);
        m_translation.setAdd4(t1.m_translation, temp);
        m_rotation.FUN_008d3290(t1.m_rotation, t2.m_rotation);
        m_scale.setMul4(t1.m_scale, t2.m_scale);
    }

    hkVector4 m_translation;
    hkQuaternion m_rotation;
    hkVector4 m_scale;
};

struct MotionState
{
    hkVector4 m_rotationCol0;
    hkVector4 m_rotationCol1;
    hkVector4 m_rotationCol2;
    hkVector4 m_translation;
    hkVector4 m_centerOfMass0;
    hkVector4 m_centerOfMass1;
    hkQuaternion m_rotation0;
    hkQuaternion m_rotation1;
    hkVector4 m_centerOfMassLocal;
};

class RigidBody
{
public:
    __forceinline const hkVector4& getPosition() const { return m_motionState.m_translation; }
    __forceinline const hkQuaternion& getRotation() const { return m_motionState.m_rotation1; }
    __forceinline const hkVector4& getCenterOfMassLocal() const { return m_motionState.m_centerOfMassLocal; }

    int unk00; int unk04; int unk08; int unk0c; int unk10; int unk14; int unk18; int unk1c;
    int unk20; int unk24; int unk28; int unk2c; int unk30; int unk34; int unk38; int unk3c;
    int unk40; int unk44; int unk48; int unk4c; int unk50; int unk54; int unk58; int unk5c;
    int unk60; int unk64; int unk68; int unk6c; int unk70; int unk74; int unk78; int unk7c;
    int unk80; int unk84; int unk88; int unk8c; int unk90; int unk94; int unk98; int unk9c;
    int unka0; int unka4; int unka8; int unkac; int unkb0; int unkb4; int unkb8; int unkbc;
    int unkc0; int unkc4; int unkc8; int unkcc; int unkd0; int unkd4; int unkd8; int unkdc;
    MotionState m_motionState;   // +0xe0
};

struct BodyData
{
    int m_numBodies;
    RigidBody** m_bodies;
    const short* m_parentIndices;
    const int* m_controlDataIndices;
};

struct ControlData
{
    hkReal m_hierarchyGain;
    hkReal m_velocityDamping;
    hkReal m_accelerationGain;
    hkReal m_velocityGain;
    hkReal m_positionGain;
    hkReal m_positionMaxLinearVelocity;
    hkReal m_positionMaxAngularVelocity;
    hkReal m_snapGain;
    hkReal m_snapMaxLinearVelocity;
    hkReal m_snapMaxAngularVelocity;
    hkReal m_snapMaxLinearDistance;
    hkReal m_snapMaxAngularDistance;
};

struct WorkElem
{
    hkQsTransform m_body;        // at the centre of mass
    hkQsTransform m_desired;     // hierarchy only
};

struct KeyFrameData
{
    hkQsTransform m_worldFromModel;
    const hkQsTransform* m_desiredPoseLocalSpace;
};

extern hkVector4 DAT_01092a50;   // zero vector

}
using namespace f3m_00a02bf0;

static __declspec(noinline) void FUN_00a02bf0(const hkQsTransform* desiredPoseLocalSpace, const BodyData& body,
                                              const ControlData* controlPalette, const hkQsTransform& worldFromModel,
                                              WorkElem* work)
{
    for (int i = 0; i < body.m_numBodies; i++)
    {
        const int parentId = body.m_parentIndices[i];
        const hkQsTransform& parentDesired = (parentId >= 0) ? work[parentId].m_desired : worldFromModel;
        work[i].m_desired.setMul(parentDesired, desiredPoseLocalSpace[i]);

        hkQuaternion rotation = work[i].m_desired.m_rotation;
        hkVector4 position = work[i].m_desired.m_translation;

        const ControlData& control = body.m_controlDataIndices ? controlPalette[body.m_controlDataIndices[i]] : controlPalette[0];
        const hkReal gain = control.m_hierarchyGain;
        if (gain > 0.0f && parentId >= 0)
        {
            const RigidBody* parent = body.m_bodies[parentId];
            hkQsTransform parentActual(parent->getPosition(), parent->getRotation());
            hkQsTransform desired;
            const hkQsTransform& local = desiredPoseLocalSpace[i];
            desired.setMul(parentActual, local);
            rotation.FUN_009243a0(rotation, desired.m_rotation, gain);
            // Guess: blending through a reference makes position.add4(com) below load position first in y/z/w.
            hkVector4& p = position;
            p.setInterpolate4(p, desired.m_translation, gain);
        }

        hkVector4 com;
        com.setRotatedDir(rotation, body.m_bodies[i]->getCenterOfMassLocal());
        position.add4(com);

        work[i].m_body.m_translation = position;
        work[i].m_body.m_rotation = rotation;
        work[i].m_body.m_scale = DAT_01092a50;
    }
}

// Stand-in for the caller 0x00a033a0, which passes the desired local pose in ecx.
void applyKeyFrameStandIn(const KeyFrameData& keyFrame, const BodyData& body, const ControlData* controlPalette, WorkElem* work)
{
    FUN_00a02bf0(keyFrame.m_desiredPoseLocalSpace, body, controlPalette, keyFrame.m_worldFromModel, work);
}
}   // namespace f3m_00a02bf0
