#include "f3_common.h"
// src/havok/physics/utilities/constraint/chain/hkpconstraintchainutil.cpp - unit created 2026-10-16 from the whole-binary attribution (360 source path: d:/projects/fallout/code/havok/source/physics/utilities/constraint/chain/hkpconstraintchainutil.cpp).
// Functions are listed by their @fnv annotations; compile flags inferred from the PC code.

struct CallTarget_00e5c370
{
    int InsertAndDelete(int, int, int, int, int);
};
struct SearchObject
{
    int FUN_00e5c420(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3);
};
// @fnv 0x00e5c420
int SearchObject::FUN_00e5c420(unsigned int auiParam0, unsigned int auiParam1, unsigned int auiParam2,
                               unsigned int auiParam3)
{
    unsigned int callResult0 =
        (unsigned int)((CallTarget_00e5c370*)this)
            ->InsertAndDelete((int)auiParam0, (int)auiParam1, (int)0u, (int)auiParam2, (int)auiParam3);
    return (int)callResult0;
}

namespace fnv_00e5c440 {
struct CallTarget_00e5c420
{
    int FUN_00e5c420(int, int, int, int);
};
struct SearchObject
{
    int FUN_00e5c440(unsigned int arg0, unsigned int arg1, unsigned int arg2);
};
// @fnv 0x00e5c440
int SearchObject::FUN_00e5c440(unsigned int arg0, unsigned int arg1, unsigned int arg2)
{
    unsigned int callResult0 =
        (unsigned int)((CallTarget_00e5c420*)this)->FUN_00e5c420((int)arg0, (int)arg1, (int)arg2, (int)1u);
    return (int)callResult0;
}
}  // namespace fnv_00e5c440

struct AudioAllocator
{
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
};

struct AudioHolder
{
    int unk00;
    int unk04;
    int unk08;
    int unk0c;
    AudioAllocator* m_pAllocator;
};

AudioHolder* __cdecl FUN_00c85750() throw();

struct DispatchTarget
{
    void CallWithFlag(void* aValue, int aZero, void* aOut);
};

struct OutObject
{
    void FUN_00c90510();
};

struct FUN_00e5c460_cls
{
    int unk00;
    int unk04;
    int unk08;
    int unk0c;
    int unk10;
    int unk14;
    int unk18;
    int unk1c;
    int unk20;
    int unk24;
    int unk28;
    int unk2c;
    int unk30;
    int unk34;
    DispatchTarget m_38;

    void FUN_00e5c460(OutObject* a1);
};

// Gets an AudioHolder, passes its allocator to m_38.CallWithFlag, then calls FUN_00c90510 on a1.
// @fnv 0x00e5c460
void FUN_00e5c460_cls::FUN_00e5c460(OutObject* pOutObject)
{
    AudioHolder* pHolder = FUN_00c85750();
    void* pValue = pHolder->m_pAllocator;
    m_38.CallWithFlag(pValue, 0, &pOutObject);
    pOutObject->FUN_00c90510();
}

#include <xmmintrin.h>
__declspec(align(16)) struct XfOut_cls
{
    unsigned int m_00;
    unsigned int m_04;
    unsigned int m_08;
    unsigned int m_0c;
};

struct FUN_00c7f690_cls
{
    void FUN_00c7f690(const __m128* m, const __m128* v);
};

struct XfSub_cls
{
    void Push(XfOut_cls* a, XfOut_cls* b);
};

struct XfScene_cls
{
    int unk00;
    int unk04;
    int unk08;
    XfSub_cls* m_0c;
    int unk10;
    int unk14;
    int unk18;
    int unk1c;
    int unk20;
    int unk24;
    int unk28;
    int unk2c;
    int unk30;
    int unk34;
    char** m_38;
    int m_3c;
    void AddReferencedObject(XfScene_cls* other);
};

static char* XfSelectRec(char* rec)
{
    if (rec[0x18] == 1)
    {
        return rec + (signed char)rec[0x10];
    }
    return 0;
}

// @f3 0x00a90f60 (community match, verified in this file)
struct FUN_008d2970_cls
{
    void FUN_008d2970(const __m128* m, const __m128* v);
};
void FUN_00e5b3a0(XfScene_cls* a1, XfScene_cls* a2, const __m128* a3)
{
    XfSub_cls* sub = a1->m_0c;
    char** arr = *reinterpret_cast<char***>(reinterpret_cast<char*>(a1) + 0x2c);
    int count = *reinterpret_cast<int*>(reinterpret_cast<char*>(a1) + 0x30);
    char* p1 = XfSelectRec(arr[count - 1] + 0x10);
    char* p2 = XfSelectRec((char*)a2 + 0x10);
    XfOut_cls outs[2];
    ((FUN_008d2970_cls*)&outs[0])->FUN_008d2970((const __m128*)(p1 + 0xe0), a3);
    ((FUN_008d2970_cls*)&outs[1])->FUN_008d2970((const __m128*)(p2 + 0xe0), a3);
    sub->Push(&outs[0], &outs[1]);
    a1->AddReferencedObject(a2);
}


namespace fnv_00e5b440 {
struct __declspec(align(16)) FUN_00c7f690_cls
{
    int unk00;
    int unk04;
    int unk08;
    int unk0c;
    void FUN_00c7f690(const __m128* m, const __m128* v);
};

struct __declspec(align(16)) RelativeOrientationData
{
    int unk00;
    int unk04;
    int unk08;
    int unk0c;
    int unk10;
    int unk14;
    int unk18;
    int unk1c;
    int argument4;
    int argument5;
    int argument6;
    void FUN_00c74ac0(char* a, char* b);
};

struct Callee
{
    int unk00;
    void FUN_00e3b850(void* p1, void* p2, void* p3, int a4, int a5, int a6);
};

struct Owner
{
    int unk00;
    int unk04;
    int unk08;
    Callee* m_0c;
    int unk10;
    int unk14;
    int unk18;
    int unk1c;
    int unk20;
    int unk24;
    int unk28;
    int unk2c;
    int unk30;
    int unk34;
    void** m_38;
    int m_3c;
    void AddReferencedObject(char* a);
};

// Computes relative orientation between two objects and applies it via a Callee, then adds a reference to a2.
// @fnv 0x00e5b440
void ApplyRelativeOrientation(Owner* a1, char* a2, const __m128* a3, int a4, int a5, int a6)
{
    Callee* pCallee = a1->m_0c;
    char* e1;
    char* e2;
    {
        char* p = (char*)a1->m_38[a1->m_3c - 1] + 0x10;
        e1 = (*(unsigned char*)(p + 0x18) == 1) ? p + (signed char)p[0x10] : 0;
    }
    {
        char* p = a2 + 0x10;
        e2 = (*(unsigned char*)(p + 0x18) == 1) ? p + (signed char)p[0x10] : 0;
    }
    // The two transformed points form one adjacent pair consumed by the callback.
    struct LocalPoints
    {
        FUN_00c7f690_cls first;
        FUN_00c7f690_cls second;
    } points;
    points.first.FUN_00c7f690((const __m128*)(e1 + 0xf0), a3);
    points.second.FUN_00c7f690((const __m128*)(e2 + 0xf0), a3);
    // Helper writes the quaternion at offset 0; original also stores arguments at 0x20/24/28.
    RelativeOrientationData relativeOrientation;
    relativeOrientation.FUN_00c74ac0(e2 + 0x160, e1 + 0x160);
    relativeOrientation.argument4 = a4;
    relativeOrientation.argument5 = a5;
    relativeOrientation.argument6 = a6;
    pCallee->FUN_00e3b850(&points.first, &points.second, (void*)&relativeOrientation, a4, a5, a6);
    a1->AddReferencedObject(a2);
}
}  // namespace fnv_00e5b440

// FUN_00e5b8f0: __cdecl, 317 bytes
// Two 16-byte keys are filled by FUN_00e5ad40; the sorted-list tail is compared against
// the owner's keys; the matching branch hands a 32-byte pair to a sub-object or holder.

struct __declspec(align(16)) Tmp16
{
    unsigned int m_00;
    unsigned int m_04;
    unsigned int m_08;
    unsigned int m_0c;
};

struct __declspec(align(16)) Pair32
{
    Tmp16 lo;
    Tmp16 hi;
};

static void CopyTmp16(Tmp16* dst, const Tmp16* src)
{
    _mm_store_ps(reinterpret_cast<float*>(dst), _mm_load_ps(reinterpret_cast<const float*>(src)));
}

struct KeyOwnerA
{
    unsigned int unk00;
    unsigned int unk04;
    unsigned int unk08;
    unsigned int unk0c;
    unsigned int unk10;
    unsigned int m_14;
    unsigned int m_18;
};

struct Sub18
{
    void FUN_00e5c440(AudioAllocator* a, int b, Pair32* c);
};

struct OwnerC
{
    unsigned int unk00;
    unsigned int unk04;
    unsigned int unk08;
    unsigned int unk0c;
    unsigned int unk10;
    unsigned int unk14;
    Sub18 m_18;
    void Push(Tmp16* a, Tmp16* b);
};

struct ListB
{
    unsigned int unk00;
    unsigned int unk04;
    unsigned int unk08;
    unsigned int unk0C;
    unsigned int unk10;
    unsigned int unk14;
    unsigned int unk18;
    unsigned int unk1C;
    unsigned int unk20;
    unsigned int unk24;
    unsigned int unk28;
    unsigned int unk2C;
    unsigned int unk30;
    unsigned int unk34;
    unsigned int* m_38;
    unsigned int m_3c;
    void AddReferencedObject(unsigned int key);
    void FUN_00e5c460(unsigned int key);
};

int FUN_00e5ad40(KeyOwnerA* a, Tmp16* p, Tmp16* q);

// Returns 1 if FUN_00e5ad40 is nonzero or no key matches; else matches a1's m_14/m_18 to a2's list ends, calls a3 helpers, updates a2 and returns 0.
// @f3 0x00a91590 (community match, verified in this file)
struct S_00a91590_Vec;
struct S_00a91590_Pair;

struct S_00a91590_Entity
{
    int unk00;
};

struct S_00a91590_Obj : S_00a91590_Entity
{
    void FUN_009316e0();
};

struct S_00a91590_ObjArray
{
    S_00a91590_Entity** m_data;
    int m_size;
    int m_capacityAndFlags;
    void FUN_009b2b40(int index, S_00a91590_Entity* const& obj);
};

struct S_00a91590_Key
{
    unsigned int unk00;
    unsigned int unk04;
    unsigned int unk08;
    unsigned int unk0c;
    unsigned int unk10;
    S_00a91590_Obj* m_14;
    S_00a91590_Obj* m_18;
};

struct S_00a91590_PairList
{
    void FUN_00a923c0(int index, S_00a91590_Pair* pair);
};

struct S_00a91590_Owner
{
    unsigned int unk00;
    unsigned int unk04;
    unsigned int unk08;
    unsigned int unk0c;
    unsigned int unk10;
    unsigned int unk14;
    S_00a91590_PairList m_18;
    void FUN_009e15b0(S_00a91590_Vec* a, S_00a91590_Vec* b);
};

struct S_00a91590_List
{
    unsigned int unk00;
    unsigned int unk04;
    unsigned int unk08;
    unsigned int unk0C;
    unsigned int unk10;
    unsigned int unk14;
    unsigned int unk18;
    unsigned int unk1C;
    unsigned int unk20;
    unsigned int unk24;
    unsigned int unk28;
    S_00a91590_ObjArray m_2c;
    void FUN_00a50b70(S_00a91590_Obj* obj);
    void FUN_00a923a0(S_00a91590_Obj* obj);
};

struct __declspec(align(16)) S_00a91590_Vec
{
    float x, y, z, w;
    void operator=(const S_00a91590_Vec& v)
    {
        x = v.x;
        y = v.y;
        z = v.z;
        w = v.w;
    }
};

struct __declspec(align(16)) S_00a91590_Pair
{
    S_00a91590_Vec lo;
    S_00a91590_Vec hi;
};

int FUN_00a908d0(S_00a91590_Key* a, S_00a91590_Vec* lo, S_00a91590_Vec* hi);

int FUN_00e5b8f0(KeyOwnerA* a1, ListB* a2, OwnerC* a3, ...)
{
    S_00a91590_Vec lo;
    S_00a91590_Vec hi;
    S_00a91590_Key* k1 = reinterpret_cast<S_00a91590_Key*>(a1);
    S_00a91590_List* k2 = reinterpret_cast<S_00a91590_List*>(a2);
    S_00a91590_Owner* k3 = reinterpret_cast<S_00a91590_Owner*>(a3);
    S_00a91590_ObjArray& list = k2->m_2c;

    if (FUN_00a908d0(k1, &lo, &hi) != 0)
    {
        return 1;
    }
    if (list.m_size == 0)
    {
        k2->FUN_00a50b70(k1->m_14);
    }
    S_00a91590_Entity* last = list.m_data[list.m_size - 1];
    if (last == k1->m_14)
    {
        k3->FUN_009e15b0(&lo, &hi);
        k2->FUN_00a50b70(k1->m_18);
        return 0;
    }
    if (last == k1->m_18)
    {
        k3->FUN_009e15b0(&hi, &lo);
        k2->FUN_00a50b70(k1->m_14);
        return 0;
    }
    if (list.m_data[0] == k1->m_14)
    {
        S_00a91590_Pair p;
        p.lo = hi;
        p.hi = lo;
        k3->m_18.FUN_00a923c0(0, &p);
        S_00a91590_Obj* obj = k1->m_18;
        list.FUN_009b2b40(0, obj);
        obj->FUN_009316e0();
        return 0;
    }
    if (list.m_data[0] == k1->m_18)
    {
        S_00a91590_Pair p;
        p.lo = lo;
        p.hi = hi;
        k3->m_18.FUN_00a923c0(0, &p);
        k2->FUN_00a923a0(k1->m_14);
        return 0;
    }
    return 1;
}


inline void* operator new(unsigned int, void* p)
{
    return p;
}
inline void operator delete(void*, void*)
{}

struct S_00e5c370_Alloc;
struct __declspec(align(16)) S_00e5c370_Vec
{
    float x, y, z, w;
};
struct S_00e5c370_Elem
{
    S_00e5c370_Vec a;
    S_00e5c370_Vec b;
    S_00e5c370_Elem(const S_00e5c370_Elem& o)
    {
        reinterpret_cast<__m128&>(a) = reinterpret_cast<const __m128&>(o.a);
        reinterpret_cast<__m128&>(b) = reinterpret_cast<const __m128&>(o.b);
    }
};
void __cdecl FUN_00c908c0(S_00e5c370_Alloc& alloc, void* arr, int numElem, int sizeElem);
void __cdecl FUN_00d2cc70(void* dst, const void* src, int nbytes);

template <typename T> struct S_00e5c370_ArrayBase
{
    T* m_data;
    int m_iElementCount;
    int m_iCapacityState;
    int getCapacity() const
    {
        return m_iCapacityState & 0x3fffffff;
    }
    __forceinline void GrowArrayCapacity(S_00e5c370_Alloc& a, int n)
    {
        const int cap = getCapacity();
        if (cap < n)
        {
            int cap2 = 2 * cap;
            int newSize = (n < cap2) ? cap2 : n;
            FUN_00c908c0(a, this, newSize, sizeof(T));
        }
    }
    // Removes numdel elements at index, inserts numtoinsert elements from p, and shifts the remaining elements to keep the array contiguous.
// @fnv 0x00e5c370
    void InsertAndDelete(S_00e5c370_Alloc& alloc, int index, int numdel, const T* apElements, int numtoinsert)
    {
        int newsize = m_iElementCount + numtoinsert - numdel;
        int numtomove = m_iElementCount - index - numdel;
        if (newsize > getCapacity())
            GrowArrayCapacity(alloc, newsize);
        FUN_00d2cc70(m_data + index + numtoinsert, m_data + index + numdel, numtomove * sizeof(T));
        T* dst = m_data + index;
        for (int i = 0; i < numtoinsert; i++)
            new (dst + i) T(apElements[i]);
        m_iElementCount = newsize;
    }
};
template struct S_00e5c370_ArrayBase<S_00e5c370_Elem>;
