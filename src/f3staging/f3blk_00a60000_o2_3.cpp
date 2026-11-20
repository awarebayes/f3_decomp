#include <windows.h>
#include <windows.h>
// src/f3staging/f3blk_00a60000_o2.cpp - Fallout 3 STAGING unit (f3_staging_units.py, 3 Nov 2026) for functions with no New Vegas counterpart
// (128 KB address window, o2 code style). Not a real source path: move functions to their real units once identified.

#include "../../include/layout_support.h"

// @f3 0x00a6b1f0 (community match, verified in this file)
namespace f3m_00a6b1f0 {
// 0x00a6b1f0 (633 B): display plane, write the four corner points of the plane
// quad: centre plus or minus the extent along the in-plane axis and along the
// cross product of the normal with that axis.
// The pack lists /Od, but the original is optimised (aligned esp frame, every
// vector helper inlined): this source matches under /MT /O2 /GS /EHsc /Gy.
// The add and subtract helpers use the indexed element accessors; the multiply
// and cross helpers use the named members. With named members in the add helper
// one lane of the first corner (y, at 0x14d) starts from the other operand.
namespace f3m_00a6b1f0 {

struct __declspec(align(16)) hkVector4
{
    float x, y, z, w;
    void set(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
    void operator=(const hkVector4& v) { x = v.x; y = v.y; z = v.z; w = v.w; }
    void setMul4(const hkVector4& a, const hkVector4& b) { x = a.x * b.x; y = a.y * b.y; z = a.z * b.z; w = a.w * b.w; }
    float& operator()(int i) { return (&x)[i]; }
    const float& operator()(int i) const { return (&x)[i]; }
    void setAdd4(const hkVector4& a, const hkVector4& b) { (*this)(0) = a(0) + b(0); (*this)(1) = a(1) + b(1); (*this)(2) = a(2) + b(2); (*this)(3) = a(3) + b(3); }
    void setSub4(const hkVector4& a, const hkVector4& b) { (*this)(0) = a(0) - b(0); (*this)(1) = a(1) - b(1); (*this)(2) = a(2) - b(2); (*this)(3) = a(3) - b(3); }
    void setCross(const hkVector4& v1, const hkVector4& v2)
    {
        x = v1.y * v2.z - v1.z * v2.y;
        y = v1.z * v2.x - v1.x * v2.z;
        z = v1.x * v2.y - v1.y * v2.x;
        w = 0.0f;
    }
};
struct hkDisplayPlane
{
    void* vtbl; unsigned short m_memSizeAndFlags; short m_referenceCount; int m_type; int pad0c;
    hkVector4 m_rotation0, m_rotation1, m_rotation2, m_translation; void* m_geometry; int pad54, pad58, pad5c;
    hkVector4 m_normal;
    hkVector4 m_center;
    hkVector4 m_perpToNormal;
    hkVector4 m_extent;
    void FUN_00a6b1f0(hkVector4* out);
};
void hkDisplayPlane::FUN_00a6b1f0(hkVector4* out)
{
    const hkVector4& p = m_perpToNormal;
    hkVector4 cross;
    cross.setCross(m_normal, p);
    out[0] = m_center;
    out[1] = m_center;
    out[2] = m_center;
    out[3] = m_center;
    hkVector4 t0;
    t0.setMul4(m_extent, cross);
    hkVector4 t1;
    t1.setMul4(m_extent, p);
    out[0].setAdd4(t0, out[0]); out[0].setAdd4(out[0], t1);
    out[1].setAdd4(t0, out[1]); out[1].setSub4(out[1], t1);
    out[2].setSub4(out[2], t0); out[2].setAdd4(out[2], t1);
    out[3].setSub4(out[3], t0); out[3].setSub4(out[3], t1);
}

} // namespace f3m_00a6b1f0
}   // namespace f3m_00a6b1f0
