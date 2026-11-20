#include "f3_common.h"
// src/havok/common/base/math/matrix/hkmatrix6.cpp - unit created 2026-10-16 from the whole-binary attribution (360 source path: d:/projects/fallout/code/havok/source/common/base/math/matrix/hkmatrix6.cpp).
// Functions are listed by their @fnv annotations; compile flags inferred from the PC code.

typedef union __declspec(intrin_type) __declspec(align(16)) __m128
{
    float m128_f32[4];
    unsigned __int64 m128_u64[2];
    short m128_i16[8];
    int m128_i32[4];
    __int64 m128_i64[2];
    unsigned short m128_u16[8];
    unsigned int m128_u32[4];
} __m128;

extern "C" __m128 _mm_add_ps(__m128 a, __m128 b);

struct hkVector4
{
    __m128 m_vComponents;
    void add4(const hkVector4& v)
    {
        m_vComponents = _mm_add_ps(m_vComponents, v.m_vComponents);
    }
};

struct hkMatrix3
{
    hkVector4 m_kColumn0;
    hkVector4 m_kColumn1;
    hkVector4 m_kColumn2;
    void add(const hkMatrix3& a)
    {
        m_kColumn0.add4(a.m_kColumn0);
        m_kColumn1.add4(a.m_kColumn1);
        m_kColumn2.add4(a.m_kColumn2);
    }
};

struct FUN_00e29290_Block
{
    hkMatrix3 f0;
    hkMatrix3 f1;
    hkMatrix3 f2;
    hkVector4 f3;
    hkVector4 f4;
    hkVector4 f5;
};

// Adds each matrix and vector of b into the corresponding member of a.
// @fnv 0x00e29290
extern "C" void __cdecl FUN_00e29290(FUN_00e29290_Block* pDst, const FUN_00e29290_Block* pSrc)
{
    pDst->f0.add(pSrc->f0);
    pDst->f1.add(pSrc->f1);
    pDst->f2.add(pSrc->f2);
    pDst->f3.add4(pSrc->f3);
    pDst->f4.add4(pSrc->f4);
    pDst->f5.add4(pSrc->f5);
}

struct E29250Matrix3
{
    float m_kColumn0[4];
    float m_kColumn1[4];
    float m_kColumn2[4];

    void SetFromMatrix(const E29250Matrix3& s);
};

struct E29250Matrix6
{
    E29250Matrix3 m_iUnknownValue2[2][2];
};

// @fnv 0x00e29250
void __cdecl FUN_00e29250(E29250Matrix6& out, const E29250Matrix6& in)
{
    out.m_iUnknownValue2[0][0].SetFromMatrix(in.m_iUnknownValue2[0][0]);
    out.m_iUnknownValue2[0][1].SetFromMatrix(in.m_iUnknownValue2[1][0]);
    out.m_iUnknownValue2[1][0].SetFromMatrix(in.m_iUnknownValue2[0][1]);
    out.m_iUnknownValue2[1][1].SetFromMatrix(in.m_iUnknownValue2[1][1]);
}

extern "C" __m128 _mm_mul_ps(__m128 a, __m128 b);
extern "C" __m128 _mm_shuffle_ps(__m128 a, __m128 b, int imm8);
extern "C" __m128 _mm_load_ps(const float* p);
extern "C" void _mm_store_ps(float* p, __m128 a);
// @fnv 0x00e29510
void FUN_00e29510(__m128* out, const __m128* aMatrix, const __m128* aVectors)
{
    __m128 v0 = aVectors[0];
    __m128 a = _mm_mul_ps(_mm_shuffle_ps(v0, v0, 0x55), aMatrix[1]);
    a = _mm_add_ps(a, _mm_mul_ps(_mm_shuffle_ps(v0, v0, 0x00), aMatrix[0]));
    a = _mm_add_ps(a, _mm_mul_ps(_mm_shuffle_ps(v0, v0, 0xaa), aMatrix[2]));
    __m128 v2 = aVectors[1];
    __m128 b = _mm_mul_ps(_mm_shuffle_ps(v2, v2, 0x55), aMatrix[4]);
    b = _mm_add_ps(b, _mm_mul_ps(_mm_shuffle_ps(v2, v2, 0x00), aMatrix[3]));
    b = _mm_add_ps(b, _mm_mul_ps(_mm_shuffle_ps(v2, v2, 0xaa), aMatrix[5]));
    _mm_store_ps((float*)out, b);
    __m128 w0 = aVectors[0];
    __m128 d = _mm_mul_ps(_mm_shuffle_ps(w0, w0, 0x55), aMatrix[7]);
    d = _mm_add_ps(d, _mm_mul_ps(_mm_shuffle_ps(w0, w0, 0x00), aMatrix[6]));
    d = _mm_add_ps(d, _mm_mul_ps(_mm_shuffle_ps(w0, w0, 0xaa), aMatrix[8]));
    __m128 w2 = aVectors[1];
    __m128 e = _mm_mul_ps(_mm_shuffle_ps(w2, w2, 0x55), aMatrix[10]);
    e = _mm_add_ps(e, _mm_mul_ps(_mm_shuffle_ps(w2, w2, 0x00), aMatrix[9]));
    e = _mm_add_ps(e, _mm_mul_ps(_mm_shuffle_ps(w2, w2, 0xaa), aMatrix[11]));
    _mm_store_ps((float*)out, _mm_add_ps(_mm_load_ps((float*)out), a));
    hkVector4* dest = reinterpret_cast<hkVector4*>(out);
    dest[1].m_vComponents = e;
    hkVector4 extra;
    extra.m_vComponents = d;
    dest[1].add4(extra);
}

__forceinline void AddVector(__m128& dst, const __m128& src)
{
    dst = _mm_add_ps(dst, src);
}
__forceinline __m128 AddValues(__m128 dst, __m128 src)
{
    return _mm_add_ps(dst, src);
}
__forceinline void AddPointers(__m128* dst, const __m128* src)
{
    *dst = _mm_add_ps(_mm_load_ps((float*)dst), _mm_load_ps((const float*)src));
}

struct LocalMatrix
{
    union
    {
        __m128 col0;
        float values0[4];
    };
    union
    {
        __m128 col1;
        float values1[4];
    };
    union
    {
        __m128 col2;
        float values2[4];
    };
};
struct PodPointer
{
    void* p;
};
struct WrappedPointer
{
    void* p;
    WrappedPointer(void* q) : p(q)
    {}
};
extern "C" void __cdecl FUN_00cd5530(void* out, const void* a,
                                     const void*

                                         b);

// @f3 0x00a98480 (community match, verified in this file)
inline void AddScalar(float& out, float const volatile& value) { out = value + out; }
void __cdecl FUN_0096cd80(void* out, const void* a,
                          const void* b);

void __cdecl FUN_00e29470(void* dest, WrappedPointer src, WrappedPointer rhs)
{
    float* source = (float*)src.p;
    float* right = (float*)rhs.p;
    float* output = (float*)dest + 6;
    __declspec(align(16)) float temporary[12];
    int outerCount = 2;

    do {
        float* currentRight = right;
        int innerCount = 2;

        do {
            FUN_0096cd80(temporary, *(float* volatile*)&source, currentRight);
            float* first = output - 6;
            FUN_0096cd80(first, source + 12, currentRight + 24);

            first[0] += temporary[0];
            AddScalar(output[-5],temporary[1]);
            output[-4] = output[-4] + temporary[2];
            output[-3] = *(volatile float*)&output[-3] + temporary[3];
            output[-2] = output[-2] + temporary[4];
            output[-1] = output[-1] + temporary[5];
            output[0] = output[0] + temporary[6];
            AddScalar(output[1],temporary[7]);
            AddScalar(output[2],temporary[8]);
            AddScalar(output[3],temporary[9]);
            output[4] = *(volatile float*)&output[4] + temporary[10];
            output[5] = output[5] + temporary[11];

            currentRight += 12;
            output += 12;
        } while (--innerCount != 0);

        source += 24;
    } while (--outerCount != 0);
}


extern "C" __m128 _mm_sub_ps(__m128 a, __m128 b);
__forceinline void subtract(__m128& a, const __m128& b)
{
    a = _mm_sub_ps(a, b);
}
__forceinline void subtractGroup(__m128* d, const __m128* s)
{
    subtract(d[0], s[0]);
    subtract(d[1], s[1]);
    subtract(d[2], s[2]);
}
// Subtracts 12 __m128 values from source into destination, using subtractGroup for the first two triplets and individual subtract calls for the remaining six.
// @fnv 0x00e29380
void __cdecl FUN_00e29380(__m128* destination, const __m128* source)
{
    subtractGroup(destination + 0, source + 0);
    subtractGroup(destination + 3, source + 3);
    subtract(destination[6], source[6]);
    subtract(destination[7], source[7]);
    subtract(destination[8], source[8]);
    subtract(destination[9], source[9]);
    subtract(destination[10], source[10]);
    subtract(destination[11], source[11]);
}
