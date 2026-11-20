// src/gamebryo2.2/corelibs/nicollision/niboxcapsuleintersector.cpp - unit created 2026-10-16 from the whole-binary attribution (360 source path: d:/_fallout3/platforms/common/code/gamebryo2.2/corelibs/nicollision/niboxcapsuleintersector.cpp).
// Functions are listed by their @fnv annotations; compile flags inferred from the PC code.

struct Vector3
{
    float x, y, z;
    Vector3()
    {}
    Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z)
    {}
    Vector3 operator*(float s) const
    {
        return Vector3(x * s, y * s, z * s);
    }
    Vector3& operator+=(const Vector3& pt)
    {
        x += pt.x;
        y += pt.y;
        z += pt.z;
        return *this;
    }
};

struct Struct60
{
    Vector3 pos;
    int unk0C, unk10, unk14, unk18, unk1C, unk20, unk24, unk28, unk2C, unk30, unk34, unk38;
};

struct Struct24
{
    Vector3 min;
    int unk0C, unk10, unk14;
};

struct Struct38
{
    int unk00;
    Struct60 data;
};

struct Struct3C
{
    int unk00, unk04, unk08, unk0C, unk10, unk14, unk18, unk1C;
    Struct24 bounds;
};

float sub_eb50f0(Struct24* b, Struct60* t, float* res, int* u1, int* u2, int* u3);

struct TestClass
{
    int unk00, unk04, unk08, unk0C, unk10, unk14, unk18, unk1C, unk20, unk24, unk28, unk2C, unk30, unk34;
    Struct38* unk38;
    Struct3C* unk3c;
    float unk40;
    int unk44;
    int unk48;
    int unk4c;

    float FUN_00eb38f0(const Vector3& a1, const Vector3& a2, float a3);
};

// Scales both points by a3, offsets copies of unk38->data and unk3c->bounds, calls sub_eb50f0 and returns its result times unk40 minus 1.0.
// @fnv 0x00eb38f0
float TestClass::FUN_00eb38f0(const Vector3& a1, const Vector3& a2, float afScale)
{
    Vector3 vOffset = a1 * afScale;

    Struct60 dataCopy = unk38->data;
    dataCopy.pos += vOffset;

    Struct24 boundsCopy = unk3c->bounds;

    vOffset = a2 * afScale;
    boundsCopy.min += vOffset;

    float res;
    return sub_eb50f0(&boundsCopy, &dataCopy, &res, &unk44, &unk48, &unk4c) * unk40 - 1.0;
}

struct V3
{
    float x, y, z;
};

struct Inner
{
    float pad0;
    V3 a, b, c, d;
    float lx, ly, lz;
    V3* Compute(const V3* p, int sx, int sy, int sz, V3 diff);
};

struct FUN_00eb3a00_cls
{
    int unk00, unk04, unk08, unk0c, unk10, unk14, unk18;
    float s0;
    V3 pos;
    V3 out;
    Inner* volatile in;
    int unk3c, unk40;
    float k0, k1, k2;

    void FUN_00eb3a00(const V3* a, const V3* b);
};

inline void Accumulate(V3& result, const V3& v)
{
    float x = v.x;
    result.x += x;
    result.y += v.y;
    float z = result.z;
    result.z = z + v.z;
}

inline void Scale(V3& result, const V3& v, float s)
{
    result.x = s * v.x;
    result.y = s * v.y;
    result.z = s * v.z;
}

// Sets pos from *a scaled by s0 plus in->a, b, c, and d weighted by k0, k1, and k2, then stores in->Compute's result in out.
// @f3 0x00816790 (community match, verified in this file)
extern "C" void _ReadWriteBarrier();
static __forceinline void Acc1(V3& result, const V3& v) { result.x += v.x; float& r0 = result.y; const float& v0 = v.y; float& r1 = r0; const float& v1 = v0; float& r2 = r1; const float& v2 = v1; float& r3 = r2; const float& v3 = v2; r3 = v3 + r3; result.z += v.z; }
static __forceinline void Acc2(V3& result, const V3& v) { result.x += v.x; float& s0 = result.y;  (void)s0; float& r0 = result.y; const float& v0 = v.y; float& r1 = r0; const float& v1 = v0; r1 = v1 + r1; result.z += v.z; }
static __forceinline void Acc3(V3& result, const V3& v) { result.x += v.x; float& s0 = result.y;  (void)s0; float& r0 = result.y; const float& v0 = v.y; float& r1 = r0; const float& v1 = v0; r1 = v1 + r1; result.z += v.z; }
void FUN_00eb3a00_cls::FUN_00eb3a00(const V3* a, const V3* b)
{
    V3 scaled;
    Scale(scaled, *a, s0);
    Inner* first = in;
    V3 position;
    position.x = first->a.x + scaled.x;
    position.y = first->a.y + scaled.y;
    position.z = first->a.z + scaled.z;
    pos = position;
    _ReadWriteBarrier();
    Scale(scaled, first->b, k0);
    Acc1(pos, scaled);
    Inner* inner = in;
    int signX = k0 == -inner->lx ? -1 : k0 == inner->lx ? 1 : 0;
    Scale(scaled, inner->c, k1);
    Acc2(pos, scaled);
    inner = in;
    int signY = k1 == -inner->ly ? -1 : k1 == inner->ly ? 1 : 0;
    Scale(scaled, inner->d, k2);
    Acc3(pos, scaled);
    inner = in;
    int signZ = k2 == -inner->lz ? -1 : k2 == inner->lz ? 1 : 0;
    position.x = b->x - a->x;
    position.y = b->y - a->y;
    position.z = b->z - a->z;
    out = *inner->Compute(&position, signX, signY, signZ, position);
}

