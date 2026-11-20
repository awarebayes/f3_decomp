#include "f3_common.h"
// src/staging/blk_00dc0000_o2_welding.cpp - staging unit created 2026-10-31 for 0x00ddf070 (flag review): in hkpmeshweldingutility.cpp
// the SSE helper methods of NormalVector (used by 0x00ddd620) make VC9 drop the private register convention of static functions
// compiled after them; this function takes name in eax and stringTable in ebx, so it gets a file without them. The declarations
// below are copied from hkpmeshweldingutility.cpp.

struct S_00ddecf0_Heap;
struct S_00ddecf0_Router
{
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    S_00ddecf0_Heap* m_pStreamAllocator;
    S_00ddecf0_Heap& heap()
    {
        return *m_pStreamAllocator;
    }
};
S_00ddecf0_Router* FUN_00c85750();
void __cdecl ResizeAudioStream(void* heap, void* arr, int elemSize) throw();

extern const char DAT_010d8038[];

struct S00ddf070_StringPtr
{
    const char* m_pcText;
    S00ddf070_StringPtr* FUN_00cb0b80(const char* s) throw();
    S00ddf070_StringPtr* FUN_00cb0bd0(const S00ddf070_StringPtr& other) throw();
    void FUN_00cb0c00() throw();
    const char* cString() const
    {
        return (const char*)((unsigned int)m_pcText & ~1u);
    }
};
struct S00ddf070_StringArray
{
    S00ddf070_StringPtr* m_data;
    int m_iElementCount;
    int m_iCapacityState;
    __forceinline S00ddf070_StringPtr& back()
    {
        return m_data[m_iElementCount - 1];
    }
};
struct S00ddf070_Node;
struct S00ddf070_NodeArray
{
    S00ddf070_Node** m_data;
    int m_iElementCount;
    int m_iCapacityState;
    __forceinline S00ddf070_Node*& operator[](int i)
    {
        return m_data[i];
    }
    __forceinline int GetLogicalSize() const
    {
        return m_iElementCount;
    }
};
struct S00ddf070_Node
{
    float m_uiFilterValue[8];
    unsigned short m_uiItemCount[8];
    S00ddf070_NodeArray m_children;
    int unk3c;
    double m_dValue;
    int unk48;
    const char* m_name;
    int unk50;
    int unk54;
    S00ddf070_Node* FUN_00e0d000(S00ddf070_Node* parent, const char* name, int type) throw();
};
struct S00ddf070_Heap
{
    virtual void v00();
    virtual void* AllocateMemoryBlock(int numBytes) throw();
};

int __cdecl FUN_00cb0fa0(const char* a, const char* b) throw();

// Finds or creates a child node by name, appends the name to the string pool if new, and accumulates value, count, and two counters on the node.
// @f3 0x00a64f60 (community match, verified in this file)
#include <windows.h>

struct S_00a64f60r_FreeElem
{
    S_00a64f60r_FreeElem* m_next;
};

struct S_00a64f60r_FreeList
{
    S_00a64f60r_FreeElem* m_head;
    int m_numElem;
};

struct S_00a64f60r_ThreadMemory
{
    int unk00;
    int unk04;
    int unk08;
    int unk0C;
    int unk10;
    int unk14;
    int unk18;
    int unk1C;
    int unk20;
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    S_00a64f60r_FreeList m_free_list[8];

    static DWORD s_tlsIndex;

    void* onRowEmpty(int row, int memClass) throw();

    static S_00a64f60r_ThreadMemory& getInstance() throw()
    {
        return *static_cast<S_00a64f60r_ThreadMemory*>(TlsGetValue(s_tlsIndex));
    }

    __forceinline void* allocateChunk(int row, int memClass) throw()
    {
        S_00a64f60r_FreeList& fl = m_free_list[row];
        S_00a64f60r_FreeElem* n = fl.m_head;
        if (n)
        {
            fl.m_numElem--;
            fl.m_head = n->m_next;
            return n;
        }
        return onRowEmpty(row, memClass);
    }
};

struct S_00a64f60r_ArrayUtil
{
    static void __cdecl _reserve(void* array, int numElem, int sizeElem) throw();
    static void __cdecl _reserveMore(void* array, int sizeElem) throw();
};

struct S_00a64f60r_StringUtil
{
    static int __cdecl strLen(const char* s) throw();
    static void __cdecl memCpy(void* dst, const void* src, int n) throw();
};

struct S_00a64f60r_CharArray
{
    char* m_data;
    int m_size;
    int m_capacityAndFlags;

    S_00a64f60r_CharArray() throw() : m_data(0), m_size(0), m_capacityAndFlags(0x80000000)
    {}
    int getCapacity() const throw()
    {
        return m_capacityAndFlags & 0x3fffffff;
    }
    __forceinline void reserve(int n) throw()
    {
        const int capacity = getCapacity();
        if (capacity < n)
        {
            int cap2 = 2 * capacity;
            int newSize = (n < cap2) ? cap2 : n;
            S_00a64f60r_ArrayUtil::_reserve(this, newSize, sizeof(char));
        }
    }
    __forceinline void setSize(int n) throw()
    {
        reserve(n);
        m_size = n;
    }
};

struct S_00a64f60r_String
{
    S_00a64f60r_CharArray m_string;

    __forceinline S_00a64f60r_String(const char* s) throw()
    {
        m_string.setSize(S_00a64f60r_StringUtil::strLen(s) + 1);
        S_00a64f60r_StringUtil::memCpy(m_string.m_data, s, m_string.m_size);
    }
    const char* cString() const throw()
    {
        return m_string.m_data;
    }
    static void* operator new(unsigned int) throw()
    {
        return S_00a64f60r_ThreadMemory::getInstance().allocateChunk(2, 0x16);
    }
    static void operator delete(void*) throw()
    {}
};

struct S_00a64f60r_StringArray
{
    S_00a64f60r_String** m_data;
    int m_iElementCount;
    int m_iCapacityState;

    int getCapacity() const throw()
    {
        return m_iCapacityState & 0x3fffffff;
    }
    __forceinline void pushBack(S_00a64f60r_String* s) throw()
    {
        if (m_iElementCount == getCapacity())
        {
            S_00a64f60r_ArrayUtil::_reserveMore(this, sizeof(S_00a64f60r_String*));
        }
        m_data[m_iElementCount] = s;
        m_iElementCount++;
    }
    __forceinline S_00a64f60r_String*& back() throw()
    {
        return m_data[m_iElementCount - 1];
    }
};

static __declspec(noinline) S00ddf070_Node* FUN_00ddf070(S00ddf070_Node* parent, const char* name, int value, int count,
                                                         S00ddf070_StringArray* strings)
{
    if (count == 0)
        count = value;
    if (!name)
        name = DAT_010d8038;

    S00ddf070_Node* node = 0;
    for (int idx = 0; parent && idx < parent->m_children.GetLogicalSize(); idx++)
    {
        if (FUN_00cb0fa0(parent->m_children[idx]->m_name, name) == 0)
        {
            node = parent->m_children[idx];
            break;
        }
    }
    if (!node)
    {
        if (strings && name)
        {
            S_00a64f60r_StringArray* arr = (S_00a64f60r_StringArray*)strings;
            arr->pushBack(new S_00a64f60r_String(name));
            name = arr->back()->cString();
        }
        void* pMem = S_00a64f60r_ThreadMemory::getInstance().allocateChunk(6, 0x1b);
        node = pMem ? ((S00ddf070_Node*)pMem)->FUN_00e0d000(parent, name, 1) : 0;
    }
    node->m_uiFilterValue[0] += (float)value;
    node->m_uiFilterValue[1] += (float)count;
    node->m_uiItemCount[0] += 1;
    node->m_uiItemCount[1] += 1;
    return node;
}

S00ddf070_Node* S00ddf070_RefR(S00ddf070_Node* p, const char* n, int v, int c, S00ddf070_StringArray* s)
{
    return FUN_00ddf070(p, n, v, c, s);
}


S00ddf070_StringArray* volatile g00ddf070_strings;
S00ddf070_Node* volatile g00ddf070_parent;
const char* volatile g00ddf070_name;
volatile int g00ddf070_v;
S00ddf070_Node* volatile g00ddf070_out;
void S00ddf070_Caller()
{
    g00ddf070_out = FUN_00ddf070(g00ddf070_parent, g00ddf070_name, g00ddf070_v, g00ddf070_v, g00ddf070_strings);
}
