#include <new>
// src/f3staging/f3iso_00be0550_o2.cpp - Fallout 3 ISOLATED unit (20 Nov 2026) for 0x00be0550 alone: its served file contradicted the
// function (declarations, stand-in bodies, pragmas). Write your own types and helpers in the candidate. Not a real source path.

#include "../../include/layout_support.h"
#include "../../include/fnv_asm_helpers.h"

// @f3 0x00be0550 (community match, verified in this file)
struct AudioHeap { void FUN_0086ba60(void*); };
extern AudioHeap DAT_01090a78;
namespace f3m_00be1400 {
namespace f3m_00be1400_ns {
void __cdecl FUN_00c01e8b();
struct Elem { int a, b, c; };
Elem* CopyElems(Elem* first, Elem* last, Elem* dest);
struct Vec;
struct IterBase {
    IterBase() : cont(0) {}
    const Vec* cont;
};
struct CIter : IterBase {
    CIter(Elem* p, const Vec* v);
    CIter& operator+=(int n);
    Elem* ptr;
};
struct Iter : CIter {
    Iter(Elem* p, const Vec* v) : CIter(p, v) {}
    Iter& operator+=(int n) { *(CIter*)this += n; return *this; }
    Iter operator+(int n) const { Iter tmp = *this; return (tmp += n); }
};
struct Vec {
    int alloc;
    Elem* first;
    Elem* last;
    Elem* finish;
    unsigned int size() const { return first == 0 ? 0 : (unsigned int)(last - first); }
    Iter begin() { return (Iter(first, this)); }
    Iter end() { return (Iter(last, this)); }
    __declspec(noinline) void FUN_00be0550(Iter where, unsigned int count, const Elem& val);
};
}}
#include <vector>

namespace AudioVectorInsert695 {
typedef f3m_00be1400::f3m_00be1400_ns::Elem Elem;
struct Storage : std::vector<Elem>
{
    using std::vector<Elem>::_Alval;
    using std::vector<Elem>::_Myfirst;
    using std::vector<Elem>::_Mylast;
    using std::vector<Elem>::_Myend;
    using std::vector<Elem>::_Umove;
    using std::vector<Elem>::_Ufill;
    using std::vector<Elem>::_Destroy;
    using std::vector<Elem>::_Xlen;
};
}

void f3m_00be1400::f3m_00be1400_ns::Vec::FUN_00be0550(
    Iter where, unsigned count, const Elem& value)
{
    AudioVectorInsert695::Storage* v = reinterpret_cast<AudioVectorInsert695::Storage*>(this);
    Elem copy = value;
    unsigned capacity = v->capacity();
    if (count == 0)
        return;
    else if (v->max_size() - v->size() < count)
        v->_Xlen();
    else if (capacity < v->size() + count) {
        capacity = v->max_size() - capacity / 2 < capacity ? 0 : capacity + capacity / 2;
        if (capacity < v->size() + count)
            capacity = v->size() + count;
        Elem* storage = v->_Alval.allocate(capacity);
        Elem* current = storage;
        try {
            current = v->_Umove(v->_Myfirst, where.ptr, storage);
            current = v->_Ufill(current, count, copy);
            v->_Umove(where.ptr, v->_Mylast, current);
        } catch (...) {
            v->_Destroy(storage, current);
            DAT_01090a78.FUN_0086ba60(storage);
            throw;
        }
        count += v->size();
        if (v->_Myfirst != 0) {
            v->_Destroy(v->_Myfirst, v->_Mylast);
            DAT_01090a78.FUN_0086ba60(v->_Myfirst);
        }
        v->_Myend = storage + capacity;
        v->_Mylast = storage + count;
        v->_Myfirst = storage;
    } else if ((unsigned)(v->_Mylast - where.ptr) < count) {
        v->_Umove(where.ptr, v->_Mylast, where.ptr + count);
        try {
            v->_Ufill(v->_Mylast, count - (v->_Mylast - where.ptr), copy);
        } catch (...) {
            v->_Destroy(where.ptr + count, v->_Mylast + count);
            throw;
        }
        v->_Mylast += count;
        std::fill(where.ptr, v->_Mylast - count, copy);
    } else {
        Elem* oldEnd = v->_Mylast;
        v->_Mylast = v->_Umove(oldEnd - count, oldEnd, v->_Mylast);
        stdext::_Unchecked_move_backward(where.ptr, oldEnd - count, oldEnd);
        std::fill(where.ptr, where.ptr + count, copy);
    }
}
