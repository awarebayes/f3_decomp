#include <windows.h>
// src/f3staging/f3blk_00a40000_od.cpp - Fallout 3 STAGING unit (f3_staging_units.py, 3 Nov 2026) for functions with no New Vegas counterpart
// (128 KB address window, od code style). Not a real source path: move functions to their real units once identified.

#include "../../include/layout_support.h"

// @f3 0x00a411b0 (community match, verified in this file)
namespace f3m_00a411b0 {
// hk4dGskCalcPointVelocity (Havok 5.5.0, hkpContinuousGsk.cpp): a file-local function, so /O2 gives it
// a register calling convention chosen from this file. Layouts follow the Havok 5.5 headers (FPU build).
namespace f3h_00a411b0 {

typedef float hkReal;
typedef float hkTime;

class __declspec(align(16)) hkVector4
{
public:
    hkReal x;
    hkReal y;
    hkReal z;
    hkReal w;

    __forceinline hkReal& operator()(int i) { return (&x)[i]; }
    __forceinline const hkReal& operator()(int i) const { return (&x)[i]; }

    __forceinline void set(hkReal a, hkReal b, hkReal c, hkReal d) { x = a; y = b; z = c; w = d; }
    __forceinline void add4(const hkVector4& v) { x += v.x; y += v.y; z += v.z; w += v.w; }
    __forceinline void sub4(const hkVector4& v) { x -= v.x; y -= v.y; z -= v.z; w -= v.w; }
    __forceinline void setSub4(const hkVector4& v0, const hkVector4& v1)
    {
        x = v0.x - v1.x;
        y = v0.y - v1.y;
        z = v0.z - v1.z;
        w = v0.w - v1.w;
    }
    __forceinline void setNeg4(const hkVector4& v) { x = -v.x; y = -v.y; z = -v.z; w = -v.w; }
    __forceinline void setCross(const hkVector4& v1, const hkVector4& v2)
    {
        const hkReal nx = v1(1) * v2(2) - v1(2) * v2(1);
        const hkReal ny = v1(2) * v2(0) - v1(0) * v2(2);
        const hkReal nz = v1(0) * v2(1) - v1(1) * v2(0);
        this->set(nx, ny, nz, 0.0f);
    }
    __forceinline void setInterpolate4(const hkVector4& v0, const hkVector4& v1, hkReal rt)
    {
        hkReal t = hkReal(rt);
        hkReal s = 1.0f - t;
        hkVector4& d = *this;
        d(0) = s * v0(0) + t * v1(0);
        d(1) = s * v0(1) + t * v1(1);
        d(2) = s * v0(2) + t * v1(2);
        d(3) = s * v0(3) + t * v1(3);
    }
    __forceinline hkReal dot3(const hkVector4& a) const { return (x * a.x) + (y * a.y) + (z * a.z); }
};

class hkTransform
{
public:
    hkVector4 m_rotation[3];
    hkVector4 m_translation;
};

class hkSweptTransform
{
public:
    __forceinline hkReal getInterpolationValue(hkTime t) const
    {
        hkReal dt = (t - getBaseTime()) * getInvDeltaTime();
        return dt;
    }
    __forceinline hkTime getBaseTime() const { return m_centerOfMass0(3); }
    __forceinline hkReal getInvDeltaTime() const { return m_centerOfMass1(3); }

    hkVector4 m_centerOfMass0;
    hkVector4 m_centerOfMass1;
    hkVector4 m_rotation0;
    hkVector4 m_rotation1;
    hkVector4 m_centerOfMassLocal;
};

class hkMotionState
{
public:
    __forceinline const hkSweptTransform& getSweptTransform() const { return m_sweptTransform; }

    hkTransform m_transform;
    hkSweptTransform m_sweptTransform;
    hkVector4 m_deltaAngle;
    hkReal m_objectRadius;
    hkReal m_linearDamping;
    hkReal m_angularDamping;
};

static hkReal FUN_00a411b0(const hkMotionState* msA, const hkMotionState* msB,
                           const hkVector4& separatingPoint, const hkVector4& separatingNormal,
                           const hkVector4& linearTimInfo, const hkVector4* deltaAngles, hkTime t)
{
    hkVector4 relVel;
    relVel.setNeg4(linearTimInfo);
    {
        const hkReal relT = msA->getSweptTransform().getInterpolationValue(t);
        hkVector4 massCenter;
        massCenter.setInterpolate4(msA->getSweptTransform().m_centerOfMass0, msA->getSweptTransform().m_centerOfMass1, relT);
        hkVector4 relPos;
        relPos.setSub4(separatingPoint, massCenter);
        hkVector4 arm;
        arm.setCross(deltaAngles[0], relPos);
        relVel.add4(arm);
    }
    {
        const hkReal relT = msB->getSweptTransform().getInterpolationValue(t);
        hkVector4 massCenter;
        massCenter.setInterpolate4(msB->getSweptTransform().m_centerOfMass0, msB->getSweptTransform().m_centerOfMass1, relT);
        hkVector4 relPos;
        relPos.setSub4(separatingPoint, massCenter);
        hkVector4 arm;
        arm.setCross(deltaAngles[1], relPos);
        relVel.sub4(arm);
    }
    const hkReal separatingVelocity = relVel.dot3(separatingNormal);
    return separatingVelocity;
}

// One of the file's callers (the real ones are the 4D GSK step functions in the same file).
float hk4dGskCallerStandIn(const hkMotionState* msA, const hkMotionState* msB, const hkVector4* points,
                           const hkVector4& normal, const hkVector4& lin, const hkVector4* deltaAngles, hkTime t)
{
    return FUN_00a411b0(msA, msB, points[0], normal, lin, deltaAngles, t)
         + FUN_00a411b0(msA, msB, points[1], normal, lin, deltaAngles, t);
}

} // namespace f3h_00a411b0
}   // namespace f3m_00a411b0

// @f3 0x00a5b150 (community match, verified in this file)
#include <math.h>
extern unsigned long DAT_010f3170;
extern float DAT_00f7ad9c;
namespace f3m_00a5b150 {
// Closest version: extent and frame exact, 3 of 5 0x100-byte regions exact under
// /MT /O2 /GS- /EHs-c- /Gy. The dot term order below is deliberate: it reproduces
// the original's per-term operand loads.
extern "C" void* (__stdcall* const DAT_00fdf044)(unsigned long);
struct ZMemory {void FUN_008f6d90(void*,int,int); static __forceinline ZMemory& getInstance(){return *(ZMemory*)DAT_00fdf044(DAT_010f3170);}};
struct ZScalar {float value; __forceinline ZScalar(float f):value(f){} __forceinline ZScalar operator*(const ZScalar& b)const{return ZScalar(value*b.value);} };
struct __declspec(align(16)) ZV {
 float x,y,z,w;
 __forceinline ZV() {}
 __forceinline ZV(float a,float b,float c,float d):x(a),y(b),z(c),w(d){}
 __forceinline void set(const ZV& v) {x=v.x;y=v.y;z=v.z;w=v.w;}
 __forceinline void mul(const float& s){ZScalar f(s);x=(f*ZScalar(x)).value;y=(f*ZScalar(y)).value;z=(f*ZScalar(z)).value;w=(f*ZScalar(w)).value;}
 __forceinline float dot3(const ZV& v)const{return v.x*x+v.y*y+v.z*z;}
 __forceinline void normalize() { float s=x*x+y*y+z*z; float inv; if(s!=0.0f) inv=1.0f/(float)sqrt(s); else inv=0.0f; mul(inv); }
};
struct ZArray;
void __cdecl FUN_00901f10(ZArray*,int);
struct ZArray {
 ZV* data;int size,capacity;
 __forceinline int getCapacity() const {return capacity&0x3fffffff;}
 __forceinline void append(const ZV& v) {if(size==(capacity&0x3fffffff))FUN_00901f10(this,16); ZV* dst=&data[size++];dst->set(v);}
};
struct ZTemp:ZArray {
 __forceinline ZTemp(){data=0;size=0;capacity=0x80000000;}
 __forceinline ~ZTemp(){if((capacity&0x80000000)==0){ZMemory::getInstance().FUN_008f6d90(data,getCapacity()*16,23);}}
};
struct ZInput {const ZV* data;int count,stride;};
struct ZSupportBase {virtual ~ZSupportBase();
 virtual void slot1();
 virtual void slot2();
 virtual void slot3();
 virtual void slot4();
 virtual void slot5();
 virtual void slot6();
 virtual void slot7();
 virtual void slot8();
 virtual void slot9();
 virtual void slot10();
 virtual void slot11();
 virtual void support(const ZV&,ZV&);
};
struct ZSupport:ZSupportBase { ZSupport(const ZInput&,ZTemp&,float);virtual ~ZSupport();
int unk04; int unk08; int unk0C; int unk10; int unk14; int unk18; int unk1C; int unk20; int unk24; int unk28; int unk2C; int unk30; int unk34; int unk38; int unk3C; int unk40; int unk44; int unk48; int unk4C; int unk50; int unk54; int unk58; int unk5C;
};
void __cdecl FUN_00a5b150(const ZV* vertices,int count,ZArray* planes,ZArray* points) {
 ZV dirs[13]={ZV(1,0,0,0),ZV(0,1,0,0),ZV(0,0,1,0),ZV(0,1,1,0),ZV(1,0,1,0),ZV(1,1,0,0),ZV(0,1,-1,0),ZV(1,0,-1,0),ZV(1,-1,0,0),ZV(1,1,1,0),ZV(1,1,-1,0),ZV(1,-1,-1,0),ZV(1,-1,1,0)};
 for(int i=0;i<13;++i) dirs[i].normalize();
 ZTemp buffer;
 ZInput input;input.count=count;input.data=vertices;input.stride=16;
 ZSupport shape(input,buffer,DAT_00f7ad9c);
 for(int i=0;i<13;++i) {
  const ZV& dir=dirs[i];
  ZV normal=dir;
  ZV point;
  ((ZSupportBase*)&shape)->support(normal,point);
  points->append(point);
  float d=normal.x*point.x+point.y*normal.y+point.z*normal.z;
  normal.w=-d;
  planes->append(normal);
  normal.x=-dir.x;normal.y=-dir.y;normal.z=-dir.z;normal.w=-dir.w;
  ((ZSupportBase*)&shape)->support(normal,point);
  points->append(point);
  d=normal.dot3(point);
  normal.w=-d;
  planes->append(normal);
 }
}
}   // namespace f3m_00a5b150
