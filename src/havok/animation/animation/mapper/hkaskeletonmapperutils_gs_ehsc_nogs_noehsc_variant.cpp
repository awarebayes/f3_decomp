#include "f3_common.h"
// src/havok/animation/animation/mapper/hkaskeletonmapperutils_gs_ehsc_nogs_noehsc_variant.cpp - flag-variant unit created 2026-10-27 by flag_proofs.py: contributor code for these functions matched byte for
// byte only under /MT /O2 /GS- /EHs-c- /Gy (unit src/havok/animation/animation/mapper/hkaskeletonmapperutils.cpp lists /MT /O2 /GS /EHsc /Gy). Declarations copied from that unit's skeleton; move the functions
// to their real unit once identified.

// src/havok/animation/animation/mapper/hkaskeletonmapperutils.cpp - unit created 2026-10-16 from the whole-binary attribution (360 source path: d:/projects/fallout/code/havok/source/animation/animation/mapper/hkaskeletonmapperutils.cpp).
// Functions are listed by their @fnv annotations; compile flags inferred from the PC code.
struct CE5F90QsTransform
{
    float m_vTranslation[4];
    float m_rotation[4];
    float m_vScale[4];
};
void __cdecl FUN_00ce5a70(CE5F90QsTransform* out, const CE5F90QsTransform* a, const CE5F90QsTransform* b, int mode,
                          float weightA, float weightB);
void __cdecl FUN_00ce5f90(CE5F90QsTransform* out, const CE5F90QsTransform* poseA, short boneA,
                          const CE5F90QsTransform* poseB, short boneB, int mode, float weightA, float weightB);

extern "C" void _ReadBarrier();
struct hkStringPtr
{
    const char* m_pcText;
};
struct hkaBone
{
    hkStringPtr m_name;
    char m_bLockTranslation;
};
template <typename T> struct hkArray
{
    T* m_data;
    int m_iElementCount;
    int m_iCapacityState;
    int GetLogicalSize() const
    {
        return m_iElementCount;
    }
    T& operator[](int i)
    {
        return m_data[i];
    }
    const T& operator[](int i) const
    {
        return m_data[i];
    }
};
struct hkReferencedObject
{
    virtual ~hkReferencedObject();
    unsigned short memSizeAndFlags;
    unsigned short referenceCount;
};
struct hkaSkeleton : hkReferencedObject
{
    hkStringPtr m_name;
    hkArray<short> m_kParentIndices;
    hkArray<hkaBone> m_kBones;
};
struct __declspec(align(16)) MapperQsTransform
{
    float translation[4];
    float rotation[4];
    float scale[4];
};
struct hkaSkeletonMapperDataSimpleMapping
{
    short m_sBoneA;
    short m_sBoneB;
    MapperQsTransform transform;
};
struct hkaSkeletonMapperData
{
    hkaSkeleton* m_pSkeletonA;
    hkaSkeleton* m_pSkeletonB;
    hkArray<hkaSkeletonMapperDataSimpleMapping> m_kSimpleMappings;
};
struct hkOstream : hkReferencedObject
{
    void* m_pStreamWriter;
    hkOstream(char* buf, int bufLen);
    virtual ~hkOstream();
    hkOstream& operator<<(const char* str);
    hkOstream& operator<<(const hkStringPtr& str);
};
struct hkError
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void message(int kind, int id, const char* text, const char* file, int line);
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void beginSection(int id, const char* name);
    virtual void endSection();
};
extern hkError* DAT_01268360;
// @f3 0x00964aa0 (community match, verified in this file)
extern const char DAT_00e7c488[];
extern const char DAT_00e7c4ac[];
extern const char DAT_00e7c4b8[];
extern const char DAT_00e7c4d8[];
extern const char DAT_00e7c4fc[];
extern const char DAT_00e7c534[];

struct SkeletonView964
{
    hkStringPtr m_name;
    short* m_parentIndices;
    int m_numParentIndices;
    hkArray<hkaBone*> m_kBones;
};

extern hkError* DAT_010f3364;

int __cdecl FUN_00ce5840(hkaSkeletonMapperData* mapping)
{
    int i = 0;
    int count = mapping->m_kSimpleMappings.GetLogicalSize();
    SkeletonView964* skelA = (SkeletonView964*)mapping->m_pSkeletonA;
    int numBonesA = skelA->m_kBones.GetLogicalSize();
    SkeletonView964* skelB = (SkeletonView964*)mapping->m_pSkeletonB;
    int numBonesB = skelB->m_kBones.GetLogicalSize();
    int rootA = numBonesA;

    int rootB = numBonesB;
    if (count > 0)
    {
        do
        {
            hkaSkeletonMapperDataSimpleMapping* current = &mapping->m_kSimpleMappings[i];
            if (current->m_sBoneA < rootA)
            {
                const int candidateB = current->m_sBoneB;
                if (candidateB < rootB)
                {
                    rootB = candidateB;
                    rootA = current->m_sBoneA;
                    goto found;
                }
                else
                {
                    char buf[512];
                    hkOstream os(buf, 512);
                    os << DAT_00e7c4fc;
                    DAT_010f3364->message(1, 0xabba782a, buf, DAT_00e7c4d8, 0x23e);
                    return 1;
                }
            }
        } while (++i < count);
    }
found:
    if (rootA == skelA->m_kBones.GetLogicalSize())
    {
        char buf[512];
        hkOstream os(buf, 512);
        os << DAT_00e7c534;
        DAT_010f3364->message(1, 0xabba782a, buf, DAT_00e7c4d8, 0x247);
        return 1;
    }
    DAT_010f3364->beginSection(0x87e5654e, DAT_00e7c4b8);
    {
        char buf[512];
        hkOstream os(buf, 512);
        os << DAT_00e7c488 << skelA->m_name.m_pcText << DAT_00e7c4ac << skelA->m_kBones.m_data[rootA]->m_name.m_pcText;
        DAT_010f3364->message(0, -1, buf, DAT_00e7c4d8, 0x24f);
    }
    for (int i = 0; i < skelA->m_kBones.GetLogicalSize(); ++i)
    {
        skelA->m_kBones[i]->m_bLockTranslation = (i > rootA);
    }
    {
        char buf[512];
        hkOstream os(buf, 512);
        os << DAT_00e7c488 << skelB->m_name.m_pcText << DAT_00e7c4ac << skelB->m_kBones.m_data[rootB]->m_name.m_pcText;
        DAT_010f3364->message(0, -1, buf, DAT_00e7c4d8, 0x258);
    }
    for (int i = 0; i < skelB->m_kBones.GetLogicalSize(); ++i)
    {
        skelB->m_kBones[i]->m_bLockTranslation = (i > rootB);
    }
    DAT_010f3364->endSection();
    return 0;
}

