// src/havok/physics/collide/agent/convexagent/spheresphere/hkpspheresphereagent_gs_nogs_variant_rtm_variant.cpp - RTM variant unit created 2026-11-01 by rtm_route.py: community reworks of src/havok/physics/collide/agent/convexagent/spheresphere/hkpspheresphereagent_gs_nogs_variant.cpp that match byte for byte only
// with VC9 RTM (cl 15.00.21022.08, the compiler the game was built with). Declarations copied from that unit's skeleton.

#include "f3_common.h"
// src/havok/physics/collide/agent/convexagent/spheresphere/hkpspheresphereagent_gs_nogs_variant.cpp - flag-variant unit created 2026-10-27 by flag_proofs.py: contributor code for these functions matched byte for
// byte only under /MT /O2 /GS- /EHsc /Gy (unit src/havok/physics/collide/agent/convexagent/spheresphere/hkpspheresphereagent.cpp lists /MT /O2 /GS /EHsc /Gy). Declarations copied from that unit's skeleton; move the functions
// to their real unit once identified.
// src/havok/physics/collide/agent/convexagent/spheresphere/hkpspheresphereagent.cpp - unit created 2026-10-16 from the whole-binary attribution (360 source path: d:/projects/fallout/code/havok/source/physics/collide/agent/convexagent/spheresphere/hkpspheresphereagent.cpp).
// Functions are listed by their @fnv annotations; compile flags inferred from the PC code.
extern "C" void __cdecl FUN_00d3f6a0(void* a, void* b, void* c, void* d);
void __stdcall FUN_00d3fcc0(void* a, void* c, void* b, void* d);
struct S_00d3f660_Owner
{
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void Release(unsigned short id, void* arg);
};
struct S_00d3f660
{
    virtual ~S_00d3f660();
    int unk4;
    S_00d3f660_Owner* unk8;
    unsigned short unkC;
    void ReleaseAndDelete(void* arg);
};

#include <xmmintrin.h>
#include <windows.h>
unsigned __int64 __cdecl __rdtsc(void);
extern "C" void _ReadWriteBarrier(void);

// ---------------------------------------------------------------------------
// stand-ins for the game's types
// ---------------------------------------------------------------------------

struct S_00d3f780_Node
{  // the shape/node referenced by the bodies
    int unk00;
    int unk04;
    int unk08;
    int unk0C;
    float unk10;
    float radius() const
    {
        return unk10;
    }  // radius
};

struct S_00d3f780_Xf
{  // the placement referenced by the bodies
    int unk00;
    int unk04;
    int unk08;
    int unk0C;
    float unk10;
    float unk14;
    float unk18;
    float unk1C;
    float unk20;
    float unk24;
    float unk28;
    float unk2C;
    __m128 unk30;  // position
};

struct S_00d3f780_In
{
    S_00d3f780_Node* unk00;
    int unk04;
    S_00d3f780_Xf* unk08;
};

struct S_00d3f780_C
{
    int unk00;
    int unk04;
    float unk08;
};

struct S_00d3f780_Out
{                  // one contact record (0x30 bytes)
    __m128 unk00;  // contact point
    __m128 unk10;
    unsigned int unk20;  // owner id
};

struct S_00d3f780_D
{
    S_00d3f780_Out* unk00;
    void* unk04;
};

// the profiling scope the game pushes around every measured block
struct S_00d3f780_Scope
{
    int unk00;
    char* unk04;
    char* unk08;
    char* unk0C;
};

struct S_00d3f780_Rec
{
    const void* vtbl;
    unsigned int time;
    unsigned int unk08;
};

struct S_00d3f780_Owner
{
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual unsigned short v3(S_00d3f780_In* a, S_00d3f780_In* b, S_00d3f780_C* c, S_00d3f780_D* d, int e,
                              S_00d3f780_Out* f);
    virtual void v4();
    virtual void Release(unsigned short id, void* arg);
};

struct S_00d3f780_Obj
{
    void* vptr;
    int unk4;
    S_00d3f780_Owner* unk8;
    unsigned short unkC;
    void FUN_00d3f780(S_00d3f780_In* a, S_00d3f780_In* b, S_00d3f780_C* c, S_00d3f780_D* d);
};

// ---------------------------------------------------------------------------
// the game's globals
// ---------------------------------------------------------------------------

extern DWORD DAT_0126835c;
extern "C" __declspec(dllimport) void* __stdcall TlsGetValue(unsigned long dwTlsIndex);
extern const __m128 DAT_01268370;
extern "C" double __cdecl sqrt(double);

// ---------------------------------------------------------------------------
// sphere against sphere: reports the contact to the owner and keeps the
// contact id in the object
// ---------------------------------------------------------------------------

// @f3 0x009c9910 (community match, verified in this file)
#include <windows.h>
#include <math.h>
struct Vec_9c9910 { __declspec(align(16)) float x; float y,z,w;
 void SetAddMul(const Vec_9c9910& a,float s,const Vec_9c9910& b) {x=a.x*s+b.x;y=static_cast<const volatile float&>(a.y)*s+b.y;z=static_cast<const volatile float&>(a.z)*s+b.z;w=a.w*s+b.w;}
};
extern unsigned long DAT_0116913c;
extern const char DAT_00e7f30c[], DAT_00e32798[];
extern const Vec_9c9910 DAT_010f3370;
unsigned __int64 __cdecl __rdtsc(void);
extern "C" void _ReadWriteBarrier(void);
void S_00d3f780_Obj::FUN_00d3f780(S_00d3f780_In* a,S_00d3f780_In* b,S_00d3f780_C* c,S_00d3f780_D* d) {
 volatile unsigned int tick;
 float inv=1.0f;
 {
  S_00d3f780_Scope* s=static_cast<S_00d3f780_Scope*>(TlsGetValue(DAT_0116913c));
  S_00d3f780_Rec* r=reinterpret_cast<S_00d3f780_Rec*>(s->unk04);
  if(s->unk04<s->unk0C) {r->vtbl=DAT_00e7f30c; _ReadWriteBarrier(); tick=(unsigned int)__rdtsc(); r->time=tick; s->unk04=reinterpret_cast<char*>(r+1);}
 }
 S_00d3f780_Node* shapeA=a->unk00;
 S_00d3f780_Node* shapeB=b->unk00;
 const Vec_9c9910* pa=reinterpret_cast<const Vec_9c9910*>(&a->unk08->unk30);
 const Vec_9c9910* pb=reinterpret_cast<const Vec_9c9910*>(&b->unk08->unk30);
 Vec_9c9910 diff;
 diff.x=pa->x-pb->x; diff.y=pa->y-pb->y; diff.z=pa->z-pb->z; diff.w=pa->w-pb->w;
 float dist2=diff.x*diff.x+diff.y*diff.y+diff.z*diff.z;
 float rsum=shapeA->radius()+shapeB->unk10+*reinterpret_cast<const float*>(&c->unk04);
 if(dist2<rsum*rsum) {
  S_00d3f780_Out* out=d->unk00;
  Vec_9c9910& position = reinterpret_cast<Vec_9c9910&>(out->unk00);
  Vec_9c9910& normal = reinterpret_cast<Vec_9c9910&>(out->unk10);
  float depth;
  if(dist2>0.0f) {
   float len=(float)sqrt((double)dist2); inv=1.0f/len;
   normal.x=diff.x*inv; normal.y=diff.y*inv; normal.z=diff.z*inv; normal.w=diff.w*inv;
   depth=dist2*inv-(shapeA->radius()+shapeB->radius());
  } else {
   normal.x=DAT_010f3370.x; normal.y=DAT_010f3370.y; normal.z=DAT_010f3370.z; normal.w=DAT_010f3370.w;
   depth=-(shapeA->radius()+shapeB->radius());
  }
  float rb=shapeB->radius();
  position.SetAddMul(normal,rb,*pb);
  normal.w=depth;
  if(unkC==0xffff) unkC=unk8->v3(a,b,c,d,0,out);
  if(unkC!=0xffff) {out->unk20=unkC; ++d->unk00;}
 } else if(unkC!=0xffff) {unk8->Release(unkC,d->unk04); unkC=0xffff;}
{
  S_00d3f780_Scope* s=static_cast<S_00d3f780_Scope*>(TlsGetValue(DAT_0116913c));
  S_00d3f780_Rec* r=reinterpret_cast<S_00d3f780_Rec*>(s->unk04);
  if(s->unk04<s->unk0C) {r->vtbl=DAT_00e32798; _ReadWriteBarrier(); tick=(unsigned int)__rdtsc(); r->time=tick; s->unk04=reinterpret_cast<char*>(r+1);}
 }
}


#include <xmmintrin.h>
#include <math.h>
namespace fnv_00d3f980 {
#include <xmmintrin.h>
#include <math.h>
extern "C" __declspec(dllimport) void* __stdcall TlsGetValue(unsigned long);
extern "C" unsigned __int64 __rdtsc();
extern "C" void _ReadWriteBarrier();
extern unsigned int DAT_0126835c;
extern char DAT_010cf1a4[];
extern char DAT_010c41f8[];
extern __m128 DAT_01268370;
struct Shape
{
    void* vtable;
    int unk04;
    int unk08;
    int unk0c;
    float radius;
    float getRadius() const
    {
        return radius;
    }
};
struct Transform
{
    __m128 rotation0, rotation1, rotation2, position;
};
struct Body
{
    Shape* shape;
    int shapeKey;
    Transform* transform;
    const Body* parent;
};
struct Input
{
    int unk00;
    int unk04;
    float tolerance;
};
union ScalarScratch
{
    struct
    {
        float squaredDistance, distance, radiusB, radiusA;
    } collision;
    struct
    {
        volatile unsigned int beginStamp, endStamp;
    } profiling;
};
struct Point
{
    __m128 position;
    __m128 normal;
    const Body* a;
    const Body* b;
};
struct Collector
{
    virtual void v0();
    virtual void AddContactPoint(const Point&);
};
struct Event
{
    const char* tag;
    unsigned int time;
    unsigned int timeHigh;
};
struct Monitor
{
    void* vtable;
    Event* current;
    Event* begin;
    Event* end;
};
// @fnv 0x00d3f980
void __stdcall FUN_00d3f980(const Body* a, const Body* b, const Input* input, Collector* collector)
{
    ScalarScratch scratch;
    {
        Monitor* stream = (Monitor*)TlsGetValue(DAT_0126835c);
        Event* p = stream->current;
        if (p < stream->end)
        {
            p->tag = DAT_010cf1a4;
            _ReadWriteBarrier();
            scratch.profiling.beginStamp = (unsigned int)__rdtsc();
            p->time = scratch.profiling.beginStamp;
            stream->current = p + 1;
        }
    }
    const Shape* shapeA = a->shape;
    const Shape* shapeB = b->shape;
    const __m128& posB = b->transform->position;
    Point point;
    point.a = a;
    point.b = b;
    __m128 diff = _mm_sub_ps(a->transform->position, posB);
    scratch.collision.distance = shapeB->getRadius() + shapeA->radius + input->tolerance;
    __m128 sq = _mm_mul_ps(diff, diff);
    __m128 add1 = _mm_add_ss(_mm_shuffle_ps(sq, sq, 0x55), sq);
    __m128 distSqM = _mm_add_ss(_mm_shuffle_ps(sq, sq, 0xaa), add1);
    _mm_store_ss(&scratch.collision.squaredDistance, distSqM);
    if (scratch.collision.squaredDistance < scratch.collision.distance * scratch.collision.distance)
    {
        __m128 normal;
        if (scratch.collision.squaredDistance > 0.0f)
        {
            volatile float& rootValue = scratch.collision.distance;
            rootValue = sqrt((double)scratch.collision.squaredDistance);
            scratch.collision.distance = 1.0f / rootValue;

            normal = _mm_mul_ps(_mm_load1_ps(&scratch.collision.distance), diff);
            scratch.collision.distance = scratch.collision.distance * scratch.collision.squaredDistance;
        }
        else
        {
            scratch.collision.distance = 0.0f;
            normal = _mm_shuffle_ps(DAT_01268370, _mm_unpackhi_ps(DAT_01268370, point.normal), 0xc4);
        }
        point.normal = normal;
        scratch.collision.radiusA = shapeA->radius;
        scratch.collision.radiusB = shapeB->getRadius();
        scratch.collision.squaredDistance = shapeB->getRadius();
        __m128 scale = _mm_load_ss(&scratch.collision.squaredDistance);
        __m128 scaleCopy = scale;
        __m128 radiusBroadcast = _mm_shuffle_ps(scaleCopy, scale, 0);
        point.position = _mm_add_ps(_mm_mul_ps(radiusBroadcast, normal), posB);
        point.normal.m128_f32[3] = scratch.collision.distance - (scratch.collision.radiusA + scratch.collision.radiusB);
        collector->AddContactPoint(point);
    }
    {
        Monitor* stream = (Monitor*)TlsGetValue(DAT_0126835c);
        Event* p = stream->current;
        if (p < stream->end)
        {
            p->tag = DAT_010c41f8;
            _ReadWriteBarrier();
            scratch.profiling.endStamp = (unsigned int)__rdtsc();
            p->time = scratch.profiling.endStamp;
            stream->current = p + 1;
        }
    }
}
}  // namespace fnv_00d3f980
