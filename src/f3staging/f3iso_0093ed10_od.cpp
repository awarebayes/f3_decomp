#include <new>
// src/f3staging/f3iso_0093ed10_od.cpp - Fallout 3 ISOLATED unit (20 Nov 2026) for 0x0093ed10 alone: its verified match did not fit its
// original file. Make the match self-contained here (own types and helpers). Not a real source path.

#include "../../include/layout_support.h"
#include "../../include/fnv_asm_helpers.h"

// @f3 0x0093ed10 (community match, verified in this file)
extern unsigned long DAT_010f3170;
namespace f3m_0093ed10 {
extern "C" __declspec(dllimport) void* __stdcall TlsGetValue(unsigned long);

struct hkThreadMemory
{
    void* FUN_008f6d30(int bytes, int memoryClass);
    void FUN_008f6d90(void* pointer, int bytes, int memoryClass);

    static hkThreadMemory& getInstance()
    {
        return *static_cast<hkThreadMemory*>(TlsGetValue(DAT_010f3170));
    }
};

extern void __cdecl FUN_00901e90(void* array, int capacity, int elementBytes);
extern int __cdecl FUN_009233f0(const char* text);
extern void __cdecl FUN_009234e0(void* dest, const void* source, int size);

template<class T>
struct hkArray
{
    T* m_data;
    int m_size;
    int m_capacityAndFlags;

    __forceinline hkArray(int size, const T& fill)
        : m_data(static_cast<T*>(hkThreadMemory::getInstance().FUN_008f6d30(size * sizeof(T), 23))),
          m_size(size), m_capacityAndFlags(size)
    {
        for (int i = 0; i < size; ++i)
            m_data[i] = fill;
    }

    __forceinline ~hkArray()
    {
        if (!(m_capacityAndFlags & 0x80000000))
            hkThreadMemory::getInstance().FUN_008f6d90(m_data, getCapacity() * sizeof(T), 23);
    }

    __forceinline int getCapacity() const { return m_capacityAndFlags & 0x3fffffff; }
    __forceinline int getSize() const { return m_size; }
    __forceinline T& operator[](int i) { return m_data[i]; }
    __forceinline const T* begin() const { return m_data; }
    __forceinline T* begin() { return m_data; }

    __forceinline void setSize(int size)
    {
        int capacity = getCapacity();
        if (capacity < size)
        {
            int doubled = 2 * capacity;
            FUN_00901e90(this, size < doubled ? doubled : size, sizeof(T));
        }
        m_size = size;
    }
};

struct hkString
{
    hkArray<char> m_string;

    __forceinline hkString() : m_string(1, 0) {}
    __forceinline const char* cString() const { return m_string.begin(); }
    __forceinline void setLength(int length) { m_string.setSize(length + 1); }

    __forceinline hkString& operator=(const char* text)
    {
        if (text && *text)
        {
            int length = FUN_009233f0(text);
            setLength(length);
            FUN_009234e0(m_string.begin(), text, length + 1);
        }
        else
        {
            setLength(0);
            m_string[0] = 0;
        }
        return *this;
    }

    void FUN_009236d0(const char* format, ...);
    hkString& FUN_00923830(const hkString& suffix);
    hkString& FUN_00923890(const char* suffix);
    hkString FUN_00923c20(const char* suffix) const;
};

struct hkClassMember
{
    enum Type
    {
        TYPE_VOID, TYPE_BOOL, TYPE_CHAR, TYPE_INT8, TYPE_UINT8, TYPE_INT16, TYPE_UINT16,
        TYPE_INT32, TYPE_UINT32, TYPE_INT64, TYPE_UINT64, TYPE_REAL, TYPE_VECTOR4,
        TYPE_QUATERNION, TYPE_MATRIX3, TYPE_ROTATION, TYPE_QSTRANSFORM, TYPE_MATRIX4,
        TYPE_TRANSFORM, TYPE_ZERO, TYPE_POINTER, TYPE_FUNCTIONPOINTER, TYPE_ARRAY,
        TYPE_INPLACEARRAY, TYPE_ENUM, TYPE_STRUCT, TYPE_SIMPLEARRAY, TYPE_HOMOGENEOUSARRAY,
        TYPE_VARIANT, TYPE_CSTRING, TYPE_ULONG, TYPE_FLAGS
    };
    const char* m_name;
    const class hkClass* m_class;
    const class hkClassEnum* m_enum;
    unsigned char m_type;
    unsigned char m_subtype;
    short m_cArraySize;
    unsigned short m_flags;
    unsigned short m_offset;
    const class hkCustomAttributes* m_attributes;

    inline const char* getName() const { return m_name; }
    inline Type getType() const { return static_cast<Type>(m_type); }
    inline Type getSubType() const { return static_cast<Type>(m_subtype); }

    struct TypeProperties
    {
        unsigned char type;
        const char* name;
        short size;
        short alignment;
    };
    static const TypeProperties& FUN_0093d880(Type type);
};

class hkBool
{
public:
    inline operator bool() const { return m_bool != 0; }
private:
    char m_bool;
};

struct hkTypedUnion
{
    int m_type;
    union Storage
    {
        int signedValue;
        unsigned __int64 uint64Value;
        float float4[4];
        float float12[12];
        float float16[16];
    };
    __declspec(align(16)) Storage m_elem;
    hkTypedUnion() : m_type(hkClassMember::TYPE_VOID) {}
};

class hkClass
{
public:
    int FUN_009b06a0() const;
    const hkClassMember& FUN_009b06b0(int i) const;
    const char* FUN_009b0490() const;
    int FUN_009b0710(const char* name) const;
    int FUN_009b0910(int memberIndex, hkTypedUnion& value) const;
};

static void FUN_0093e980(hkClassMember::Type type, hkClassMember::Type subType, hkString& outputString)
{
    typedef hkClassMember M;
    outputString = "";
    if ((type >= M::TYPE_BOOL && type <= M::TYPE_TRANSFORM) || type == M::TYPE_ULONG)
    {
        if (type == M::TYPE_BOOL || (type >= M::TYPE_VECTOR4 && type <= M::TYPE_TRANSFORM))
            outputString = "_";
        outputString.FUN_00923890(M::FUN_0093d880(type).name);
    }
    else if (type == M::TYPE_ENUM || type == M::TYPE_FLAGS)
    {
        outputString = M::FUN_0093d880(subType).name;
    }
}

// The linker folded the scalar lookupMember specializations onto this address.
template<class T> const T& __cdecl FUN_00a4c6e0(const void* address)
{
    return *static_cast<const T*>(address);
}

static void FUN_0093e650(const hkTypedUnion& value, hkClassMember::Type type,
                         hkClassMember::Type subType, hkString& outputString)
{
    typedef hkClassMember M;
    const void* valueAddress = &value.m_elem;
    switch (type)
    {
    case M::TYPE_BOOL:
        outputString = FUN_00a4c6e0<hkBool>(valueAddress) ? "true" : "false";
        break;
    case M::TYPE_CHAR:
        outputString.FUN_009236d0("'%c'", FUN_00a4c6e0<char>(valueAddress));
        break;
    case M::TYPE_INT8:
    {
        int i = FUN_00a4c6e0<signed char>(valueAddress);
        outputString.FUN_009236d0("%i", i);
        break;
    }
    case M::TYPE_UINT8:
        outputString.FUN_009236d0("%u", FUN_00a4c6e0<unsigned char>(valueAddress));
        break;
    case M::TYPE_INT16:
        outputString.FUN_009236d0("%i", FUN_00a4c6e0<short>(valueAddress));
        break;
    case M::TYPE_UINT16:
        outputString.FUN_009236d0("%u", FUN_00a4c6e0<unsigned short>(valueAddress));
        break;
    case M::TYPE_INT32:
        outputString.FUN_009236d0("%i", FUN_00a4c6e0<int>(valueAddress));
        break;
    case M::TYPE_UINT32:
        outputString.FUN_009236d0("%u", FUN_00a4c6e0<unsigned>(valueAddress));
        break;
    case M::TYPE_INT64:
        outputString.FUN_009236d0("%I64i", FUN_00a4c6e0<__int64>(valueAddress));
        break;
    case M::TYPE_UINT64:
        outputString.FUN_009236d0("%I64u", FUN_00a4c6e0<unsigned __int64>(valueAddress));
        break;
    case M::TYPE_ULONG:
        outputString.FUN_009236d0("%u", FUN_00a4c6e0<unsigned long>(valueAddress));
        break;
    case M::TYPE_REAL:
        outputString.FUN_009236d0("%ff", FUN_00a4c6e0<float>(valueAddress));
        break;
    case M::TYPE_VECTOR4:
    case M::TYPE_QUATERNION:
    {
        const float* r = value.m_elem.float4;
        outputString.FUN_009236d0("{%ff, %ff, %ff, %ff}", r[0], r[1], r[2], r[3]);
        break;
    }
    case M::TYPE_MATRIX3:
    case M::TYPE_ROTATION:
    case M::TYPE_QSTRANSFORM:
    {
        const float* r = value.m_elem.float12;
        outputString.FUN_009236d0("{%ff, %ff, %ff, %ff, %ff, %ff, %ff, %ff, %ff, %ff, %ff, %ff}",
                                  r[0], r[1], r[2], r[3], r[4], r[5], r[6], r[7], r[8], r[9], r[10], r[11]);
        break;
    }
    case M::TYPE_MATRIX4:
    case M::TYPE_TRANSFORM:
    {
        const float* r = value.m_elem.float16;
        outputString.FUN_009236d0("{%ff, %ff, %ff, %ff, %ff, %ff, %ff, %ff, %ff, %ff, %ff, %ff, %ff, %ff, %ff, %ff}",
                                  r[0], r[1], r[2], r[3], r[4], r[5], r[6], r[7],
                                  r[8], r[9], r[10], r[11], r[12], r[13], r[14], r[15]);
        break;
    }
    case M::TYPE_ENUM:
    case M::TYPE_FLAGS:
        FUN_0093e650(value, subType, M::TYPE_VOID, outputString);
        break;
    }
}

void __cdecl FUN_0093ed10(const hkClass& klass, hkArray<int>& memIdxWithDefault, hkString& outputString)
{
    outputString = "\tnamespace\r\n\t{\r\n";
    hkString buffer;
    int defaultIdx = 0;
    hkString membersList;
    for (int i = 0; i < memIdxWithDefault.getSize(); ++i)
    {
        const hkClassMember& mem = klass.FUN_009b06b0(memIdxWithDefault[i]);
        hkString memType;
        FUN_0093e980(mem.getType(), mem.getSubType(), memType);
        buffer.FUN_009236d0("\t\t\t%s m_%s;\r\n", memType.cString(), mem.getName());
        membersList.FUN_00923830(buffer);
    }
    buffer.FUN_009236d0("\t\tstruct %s_DefaultStruct\r\n\t\t{\r\n\t\t\tint s_defaultOffsets[%d];\r\n"
        "\t\t\ttypedef hkInt8 _hkBool;\r\n\t\t\ttypedef hkReal _hkVector4[4];\r\n"
        "\t\t\ttypedef hkReal _hkQuaternion[4];\r\n\t\t\ttypedef hkReal _hkMatrix3[12];\r\n"
        "\t\t\ttypedef hkReal _hkRotation[12];\r\n\t\t\ttypedef hkReal _hkQsTransform[12];\r\n"
        "\t\t\ttypedef hkReal _hkMatrix4[16];\r\n\t\t\ttypedef hkReal _hkTransform[16];\r\n%s\t\t};\r\n",
        klass.FUN_009b0490(), klass.FUN_009b06a0(), membersList.cString());
    outputString.FUN_00923830(buffer);
    hkString defaultOffsetsList;
    hkString defaultValuesList;
    for (int i = 0; i < klass.FUN_009b06a0(); ++i)
    {
        if (defaultIdx < memIdxWithDefault.getSize() && memIdxWithDefault[defaultIdx] == i)
        {
            const hkClassMember& mem = klass.FUN_009b06b0(i);
            buffer.FUN_009236d0("HK_OFFSET_OF(%s_DefaultStruct,m_%s)", klass.FUN_009b0490(), mem.getName());
            defaultOffsetsList.FUN_00923830(buffer.FUN_00923c20(","));
            hkTypedUnion val;
            klass.FUN_009b0910(klass.FUN_009b0710(mem.getName()), val);
            FUN_0093e650(val, mem.getType(), mem.getSubType(), buffer);
            defaultValuesList.FUN_00923830(buffer.FUN_00923c20(","));
            ++defaultIdx;
        }
        else
            defaultOffsetsList.FUN_00923890("-1,");
    }
    buffer.FUN_009236d0("\t\tconst %s_DefaultStruct %s_Default =\r\n\t\t{\r\n\t\t\t{%s},\r\n\t\t\t%s\r\n\t\t};\r\n",
                        klass.FUN_009b0490(), klass.FUN_009b0490(), defaultOffsetsList.cString(), defaultValuesList.cString());
    outputString.FUN_00923830(buffer);
    outputString.FUN_00923890("\t}\r\n");
}


}   // namespace f3m_0093ed10
