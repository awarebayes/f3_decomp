#include <math.h>
// src/f3staging/f3blk_009e0000_od.cpp - Fallout 3 STAGING unit (f3_staging_units.py, 3 Nov 2026) for functions with no New Vegas counterpart
// (128 KB address window, od code style). Not a real source path: move functions to their real units once identified.

#include "../../include/layout_support.h"

// @f3 0x009fccc0 (community match, verified in this file)
extern "C" float hkTransformIdentity[];
extern "C" const unsigned char _modulo3Table[];
namespace f3m_009fccc0 {
// FUN_009fccc0: Havok hkSolverBuildJacobianFromAtomsNotContact (x87 build): the atom loop with every atom builder inlined.
// Reuses the Havok declarations that this file already provides for FUN_009fac30 (ragdoll motor atom), and adds the
// inline members and solver types that the atom builders use. Statement order, named locals and helper forms follow the
// unoptimised build of the same library function; where this game's older Havok differs (ball socket call, stabilized
// cone tail, accumulator copy as a call) the form follows the game's code.
// Two things here are not known to be the original's text:
// - hkpVelocityAccumulatorCopy (mass changer only) is a stand-in: see its comment.
// - the parentheses in the two angle-wrap loop conditions of the angular motor builder. They add no instruction; the
//   original has two more float expression values at that point than the plain spelling gives, and which spelling
//   made them is not known.

namespace JacobianMath {


typedef float  hkReal;
typedef signed char		hkInt8;
typedef signed short	hkInt16;
typedef unsigned char	hkUint8;
typedef unsigned short	hkUint16;
typedef unsigned int	hkUint32;
typedef unsigned long __w64 hkUlong;
enum hkResult
{
	HK_SUCCESS = 0,
	HK_FAILURE = 1
};
typedef size_t hk_size_t;
typedef hkReal hkTime;
template <typename TYPE>
__forceinline TYPE* __cdecl hkAddByteOffset( TYPE* base, hkUlong offset )
{
	return reinterpret_cast<TYPE*>( reinterpret_cast<char*>(base) + offset );
}
typedef int hkBool32;
class hkBool
{
	public:
		inline hkBool()
		{
		}
		inline hkBool(bool b)
		{
			m_bool = static_cast<char>(b);
		}
		inline operator bool() const
		{
			return m_bool != 0;
		}
		inline hkBool& operator=(bool e)
		{
			m_bool = static_cast<char>(e);
			return *this;
		}
		inline hkBool operator==(bool e) const
		{
			return static_cast<int>(m_bool) == static_cast<int>(e);
		}
		inline hkBool operator!=(bool e) const
		{
			return static_cast<int>(m_bool) != static_cast<int>(e);
		}
	private:
		char m_bool;
};
class hkHalf
{
    public:
	    inline hkHalf(){   }
	    inline hkHalf(const float& f)
	    {
		    int t = ((const int*)&f)[0];
		    m_value = hkInt16(t>>16);
	    }
	    inline hkHalf& operator=(const float& f)
	    {
		    int t = ((const int*)&f)[0];
		    m_value = hkInt16(t>>16);
		    return *this;
	    }
	    inline operator float() const
	    {
		    union
		    {
			    int i;
			    float f;
		    } u;
		    u.i = (m_value <<16);
		    return u.f;
	    }
    private:
	    hkInt16 m_value;
};
template<typename ENUM, typename STORAGE>
class hkEnum
{
	public:
		hkEnum()
		{
		}
		hkEnum(ENUM e)
		{
			m_storage = static_cast<STORAGE>(e);
		}
		operator ENUM() const
		{
			return static_cast<ENUM>(m_storage);
		}
		void operator=(ENUM e)
		{
			m_storage = static_cast<STORAGE>(e);
		}
		hkBool operator==(ENUM e) const
		{
			return m_storage == static_cast<STORAGE>(e);
		}
		hkBool operator!=(ENUM e) const
		{
			return m_storage != static_cast<STORAGE>(e);
		}
	private:
		STORAGE m_storage;
};
template <typename TYPE>
class hkPadSpu
{
	public:
		__forceinline hkPadSpu() {}
		__forceinline hkPadSpu(TYPE e)
			: m_storage( e )
		{
		}
		__forceinline void operator=(TYPE e)
		{
			m_storage = e;
		}
		__forceinline TYPE val() const
		{
			return m_storage;
		}
		__forceinline TYPE operator->() const
		{
			return m_storage;
		}
		__forceinline operator TYPE() const
		{
			return val();
		}
	private:
		TYPE m_storage;
};
enum HK_MEMORY_CLASS {
	HK_MEMORY_CLASS_ROOT,
	HK_MEMORY_CLASS_BASE,
	HK_MEMORY_CLASS_COLLIDE,
	HK_MEMORY_CLASS_CONSTRAINT_SOLVER,
	HK_MEMORY_CLASS_DYNAMICS,
	HK_MEMORY_CLASS_EXPORT,
	HK_MEMORY_CLASS_SERIALIZE,
	HK_MEMORY_CLASS_GEOMETRY,
	HK_MEMORY_CLASS_DISPLAY,
	HK_MEMORY_CLASS_MATH,
	HK_MEMORY_CLASS_SCENE_DATA,
	HK_MEMORY_CLASS_VEHICLE,
	HK_MEMORY_CLASS_DESTRUCTION,
	HK_MEMORY_CLASS_UTILITIES,
	HK_MEMORY_CLASS_ANIMATION,
	HK_MEMORY_CLASS_BEHAVIOR,
	HK_MEMORY_CLASS_CLOTH,
	HK_MEMORY_CLASS_TOOLS,
	HK_MEMORY_CLASS_DEMO_FRAMEWORK,
	HK_MEMORY_CLASS_DEMO,
	HK_MEMORY_CLASS_USER,
	HK_MEMORY_CLASS_BASE_CLASS,
	HK_MEMORY_CLASS_STRING,
	HK_MEMORY_CLASS_ARRAY,
	HK_MEMORY_CLASS_SINGLETON,
	HK_MEMORY_CLASS_SCRATCHPAD,
	HK_MEMORY_CLASS_STREAM,
	HK_MEMORY_CLASS_MONITOR,
	HK_MEMORY_CLASS_MAP,
	HK_MEMORY_CLASS_TREE,
	HK_MEMORY_CLASS_HKCLASS,
	HK_MEMORY_CLASS_AGENT,
	HK_MEMORY_CLASS_ALGORITHM,
	HK_MEMORY_CLASS_BROAD_PHASE,
	HK_MEMORY_CLASS_CONTACT,
	HK_MEMORY_CLASS_DISPATCH,
	HK_MEMORY_CLASS_MANIFOLD,
	HK_MEMORY_CLASS_SHAPE,
	HK_MEMORY_CLASS_COLLIDABLE,
	HK_MEMORY_CLASS_CDINFO,
	HK_MEMORY_CLASS_MOPP,
	HK_MEMORY_CLASS_ACTION,
	HK_MEMORY_CLASS_DYNCOLLIDE,
	HK_MEMORY_CLASS_DEACTIVATOR,
	HK_MEMORY_CLASS_CONSTRAINT,
	HK_MEMORY_CLASS_ENTITY,
	HK_MEMORY_CLASS_MOTION,
	HK_MEMORY_CLASS_WORLD,
	HK_MEMORY_CLASS_RIGID_BODY,
	HK_MEMORY_CLASS_PHANTOM,
	HK_MEMORY_CLASS_SIMISLAND,
	HK_MEMORY_CLASS_CAMERA,
	HK_MEMORY_CLASS_CHARACTER,
	HK_MEMORY_CLASS_VDB,
	HK_MEMORY_CLASS_INERTIA,
	HK_MEMORY_CLASS_ANIM_UNCOMPRESSED,
	HK_MEMORY_CLASS_ANIM_COMPRESSED,
	HK_MEMORY_CLASS_ANIM_DATA,
	HK_MEMORY_CLASS_ANIM_MOTION,
	HK_MEMORY_CLASS_ANIM_RIG,
	HK_MEMORY_CLASS_ANIM_CONTROL,
	HK_MEMORY_CLASS_ANIM_RUNTIME,
	HK_MEMORY_CLASS_ANIM_CACHE,
	HK_MEMORY_CLASS_BEHAVIOR_RUNTIME,
	HK_MEMORY_CLASS_BEHAVIOR_DEMOS,
	HK_MEMORY_CLASS_CLOTH_RUNTIME,
	HK_MEMORY_CLASS_CLOTH_DATA,
	HK_MEMORY_CLASS_USER_1,
	HK_MEMORY_CLASS_USER_2,
	HK_MEMORY_CLASS_USER_3,
	HK_MEMORY_CLASS_USER_4,
	HK_MEMORY_CLASS_PRE_ALLOCATED,
HK_MEMORY_CLASS_MAX };
class hkMemory;
extern void* (__cdecl *hkSystemMalloc)(int size, int align);
extern void (__cdecl *hkSystemFree) (void* p);
class hkThreadMemory
{
	public:
		hkThreadMemory( hkMemory* mainMemoryManager, int maxNumElemsOnFreeList = 16);
		void* allocateChunk( int nbytes, HK_MEMORY_CLASS cl );
		void deallocateChunk(void*, int nbytes, HK_MEMORY_CLASS );
		void* allocate( int nbytes, HK_MEMORY_CLASS cl );
		void deallocate(void*);
		__forceinline void* allocateChunkConstSize( int nbytes, HK_MEMORY_CLASS cl );
		__forceinline void deallocateChunkConstSize(void* p, int nbytes, HK_MEMORY_CLASS cl );
		__forceinline void* allocateStack(int nbytes);
		__forceinline void shrinkAllocatedStack(void* ptr, int newSize);
		__forceinline void deallocateStack(void* p);
		virtual void* alignedAllocate(int alignment, int nbytes, HK_MEMORY_CLASS cl);
		virtual void  alignedDeallocate(void* ptr);
		virtual void setStackArea(void* buf, int nbytes);
		static inline hkThreadMemory* __cdecl getInstancePtr();
		static inline hkThreadMemory& __cdecl getInstance();
		static void __cdecl replaceInstance(hkThreadMemory* m);
		void addReference();
		void removeReference();
		virtual void releaseCachedMemory();
		__forceinline virtual ~hkThreadMemory(){ releaseCachedMemory(); }
	protected:
		virtual void* onStackOverflow(int nbytes);
		virtual void onStackUnderflow(void* p);
	public:
		enum
		{
			PAGE_ALIGN  = 64,
			MEMORY_MAX_SMALL_ROW  = 13,
			MEMORY_MAX_ALL_ROW = (MEMORY_MAX_SMALL_ROW+4),
			MEMORY_MAX_SIZE_SMALL_BLOCK  = 512,
			MEMORY_MAX_SIZE_LARGE_BLOCK = 8192,
			MEMORY_LARGE_BLOCK_RSHIFT_BITS = 10,
			MEMORY_SYSTEM_PAGE_SIZE = 8192,
			MEMORY_MAGIC_NUMBER = 0x3425234
		};
		struct Stack
		{
			Stack()
				:	m_current(0),
					m_prev(0),
					m_base((char*)-1),
					m_end(0)
			{
			}
			__declspec(align(16)) char* m_current;
			Stack* m_prev;
			char* m_base;
			char* m_end;
			int getFreeBytes() { return int(m_end - m_current)-16; }
		};
		__forceinline Stack& __cdecl getStack();
		__forceinline int getRow(int nbytes) const;
		static __forceinline int __cdecl constSizeToRow( int size );
		__forceinline int rowToSize( int row ) const;
	protected:
		enum { BATCH_SIZE=4 };
		void* onRowEmpty(int row);
		void onRowFull(int row, void* p);
		void clearRow(int rowIndex);
	public:
		hkMemory* m_memory;
		int m_referenceCount;
		Stack m_stack;
		int m_stackSize;
		int m_maxNumElemsOnFreeList;
		struct FreeList
		{
			enum { MAX_FREELIST=0x0fffffff };
			FreeList() : m_head(0), m_numElem(0) {}
			void put( void* p )
			{
				m_numElem += 1;
				FreeElem* fl = static_cast<FreeElem*>(p);
				fl->m_next = m_head;
				m_head = fl;
			}
			void* get()
			{
				if(void* p = m_head)
				{
					m_numElem -= 1;
					m_head = m_head->m_next;
					return p;
				}
				return 0;
			}
			struct FreeElem	{ FreeElem* m_next; };
			FreeElem* m_head;
			int m_numElem;
		};
		FreeList m_free_list[MEMORY_MAX_ALL_ROW];
		int m_row_to_size_lut[MEMORY_MAX_ALL_ROW];
		char m_small_size_to_row_lut[MEMORY_MAX_SIZE_SMALL_BLOCK+1];
		int m_large_size_to_row_lut[ (MEMORY_MAX_SIZE_LARGE_BLOCK >> MEMORY_LARGE_BLOCK_RSHIFT_BITS) ];
};
class hkFinishLoadedObjectFlag
{
	public:
		hkFinishLoadedObjectFlag() : m_finishing(0) {}
		int m_finishing;
	private:
};
typedef hkReal hkSimdReal;
typedef hkReal hkSimdRealParameter;
class hkVector4;
typedef const hkVector4& hkVector4Parameter;
struct hkQuadReal
{
	__declspec(align(16)) hkReal x;
	hkReal y;
	hkReal z;
	hkReal w;
};
class hkVector4Comparison;
extern "C" {
double  __cdecl sqrt(     double _X);
inline float x64_local_sqrtf(     float _X)
        {return ((float)sqrt((double)_X)); }
}
extern "C"
{
hkReal __cdecl hkMath_atan2fApproximation( hkReal x, hkReal y );
}
namespace hkMath
{
inline hkReal __cdecl sqrt(hkReal r) { return sqrtf(r); }
}
class hkQuaternion;
class hkMatrix3;
class hkRotation;
class hkTransform;
class hkQsTransform;
class hkVector4
{
	public:
		__forceinline void operator= ( const hkVector4& v );
		__forceinline void operator= ( const hkQuadReal& v );
		__forceinline void set(hkReal x, hkReal y, hkReal z, hkReal w=0);
		__forceinline void setAll(hkReal x);
		__forceinline void setAll3(hkReal x);
		__forceinline void setZero4();
		__forceinline void setInt24W( int value );
		__forceinline int getInt24W( ) const ;
		__forceinline void storeUncached( void* dest) const;
		__forceinline void add4(const hkVector4& a);
		__forceinline void add3clobberW(const hkVector4& a);
		__forceinline void setAdd4(const hkVector4& a, const hkVector4& b);
		__forceinline void sub4(const hkVector4& a);
		__forceinline void sub3clobberW(const hkVector4& a);
		__forceinline void setSub4(const hkVector4& a, const hkVector4& b);
		__forceinline void mul4(const hkVector4& a);
		__forceinline void setMul4(hkVector4Parameter a, hkVector4Parameter b);
		__forceinline void mul4(hkSimdRealParameter a);
		__forceinline void setMul4(hkSimdRealParameter r, const hkVector4& a);
		__forceinline void addMul4(hkSimdRealParameter r, const hkVector4& a);
		__forceinline void addMul4(hkVector4Parameter a, hkVector4Parameter b);
		__forceinline void subMul4(hkSimdRealParameter r, const hkVector4& a);
		__forceinline void subMul4(hkVector4Parameter a, hkVector4Parameter b);
		__forceinline void setAddMul4(const hkVector4& a, const hkVector4& b, hkSimdRealParameter r);
		__forceinline void setAddMul4(const hkVector4& a, const hkVector4& x, const hkVector4& y);
		__forceinline void setCross( const hkVector4& a, const hkVector4& b );
		__forceinline void setInterpolate4( const hkVector4& a, const hkVector4& b, hkSimdRealParameter t);
		__forceinline hkBool32 equals3(const hkVector4 &a, hkReal epsilon = 1e-3f ) const;
		__forceinline hkBool32 equals4(const hkVector4 &a, hkReal epsilon = 1e-3f ) const;
		__forceinline hkVector4Comparison compareLessThan4(hkVector4Parameter a) const;
		__forceinline hkVector4Comparison compareEqual4(hkVector4Parameter a) const;
		__forceinline hkVector4Comparison compareLessThanEqual4(hkVector4Parameter a) const;
		__forceinline hkVector4Comparison compareLessThanZero4() const;
		__forceinline hkVector4Comparison compareGreaterThan4(hkVector4Parameter a) const;
		__forceinline hkVector4Comparison compareGreaterThanEqual4(hkVector4Parameter a) const;
		__forceinline hkBool32 allLessThan3(hkVector4Parameter a) const;
		__forceinline hkBool32 allLessThan4(hkVector4Parameter a) const;
		__forceinline void select32( hkVector4Parameter a, hkVector4Parameter b, const hkVector4Comparison& comp);
		__forceinline void setNeg3(const hkVector4& v);
		__forceinline void setNeg4(const hkVector4& v);
		__forceinline void setNeg4If( int cond );
		__forceinline void setAbs4(const hkVector4& v);
		__forceinline void setMin4(const hkVector4& a, const hkVector4& b);
		__forceinline void setMax4(const hkVector4& a, const hkVector4& b);
		void setMul3(const hkMatrix3& a, const hkVector4& b );
		void setRotatedDir(const hkRotation& a, const hkVector4& b);
		void setRotatedInverseDir(const hkRotation& a, const hkVector4& b);
		__forceinline void setRotatedDir(const hkQuaternion& q, const hkVector4& b);
		__forceinline void setRotatedInverseDir(const hkQuaternion& q, const hkVector4& b);
		void setTransformedPos(const hkTransform& a, const hkVector4& b);
		void setTransformedInversePos(const hkTransform& a, const hkVector4& b);
		void setTransformedPos(const hkQsTransform& a, const hkVector4& b);
		void setTransformedInversePos(const hkQsTransform& a, const hkVector4& b);
		__forceinline void _setMul3(const hkMatrix3& a, const hkVector4& b );
		void _setMul4(const hkMatrix3& a, const hkVector4& b );
		__forceinline void _setMul4xyz1(const hkTransform& a, const hkVector4& b );
		__forceinline void _setRotatedDir(const hkRotation& a, const hkVector4& b);
		__forceinline void _setRotatedInverseDir(const hkRotation& a, const hkVector4& b);
		__forceinline void _setTransformedPos(const hkTransform& a, const hkVector4& b);
		__forceinline void _setTransformedInversePos(const hkTransform& a, const hkVector4& b);
		__forceinline void _setTransformedPos(const hkQsTransform& a, const hkVector4& b);
		__forceinline void _setTransformedInversePos(const hkQsTransform& a, const hkVector4& b);
		__forceinline hkSimdReal dot3(const hkVector4& a) const;
		__forceinline hkReal dot3fpu(const hkVector4& a) const;
		__forceinline hkSimdReal dot4(const hkVector4& a) const;
		__forceinline hkSimdReal dot4xyz1(const hkVector4& a) const;
		__forceinline hkSimdReal horizontalAdd3() const;
		__forceinline hkSimdReal horizontalAdd4() const;
		__forceinline hkSimdReal length3() const;
		__forceinline hkSimdReal lengthSquared3() const;
		__forceinline hkSimdReal lengthInverse3() const;
		__forceinline hkSimdReal distanceTo3( hkVector4Parameter p ) const;
		__forceinline hkSimdReal length4() const;
		__forceinline hkSimdReal lengthSquared4() const;
		__forceinline hkSimdReal lengthInverse4() const;
		__forceinline void normalize3();
		__forceinline hkSimdReal normalizeWithLength3();
		__forceinline void normalize4();
		__forceinline hkSimdReal normalizeWithLength4();
		__forceinline void fastNormalize3();
		__forceinline hkSimdReal fastNormalizeWithLength3();
		__forceinline void fastNormalize3NonZero();
		__forceinline hkResult normalize3IfNotZero ();
		__forceinline hkReal& operator() (int i);
		__forceinline const hkReal& operator() (int i) const;
		__forceinline void setXYZW(const hkVector4& xyz, const hkVector4& w);
		__forceinline void setW(const hkVector4& v);
		__forceinline void setXYZ(const hkVector4& v);
		__forceinline void setXYZ0(const hkVector4& xyz);
		__forceinline void setReciprocal4(const hkVector4& v);
		__forceinline void setReciprocal3(const hkVector4& v);
		__forceinline void setSqrtInverse4(const hkVector4& v);
		__forceinline hkSimdReal getSimdAt(int i) const;
		__forceinline void broadcast(int i);
		__forceinline void setBroadcast(hkVector4Parameter v, int i);
		__forceinline void setBroadcast3clobberW(hkVector4Parameter v, int i);
		__forceinline	int getMajorAxis() const;
		__forceinline hkQuadReal& getQuad();
		__forceinline const hkQuadReal& getQuad() const;
		hkBool isOk3() const;
		hkBool isOk4() const;
		hkBool isNormalized3(hkReal eps = 1e-4f) const;
		hkBool isNormalized4(hkReal eps = 1e-4f) const;
		__forceinline void zeroElement( int i );
		__forceinline static const hkVector4& __cdecl getZero();
		void load3(const hkReal* p);
		void load4(const hkReal* p);
		void load4a(const hkReal* p);
		void store3(hkReal* p) const;
		void store4(hkReal* p) const;
		void store4a(hkReal* p) const;
	private:
		__declspec(align(16)) hkReal x;
		hkReal y;
		hkReal z;
		hkReal w;
};
class hkMatrix3
{
	public:
		__forceinline hkMatrix3() {}
		__forceinline hkMatrix3( const hkMatrix3& other );
		__forceinline hkVector4& getColumn(int i);
		__forceinline const hkVector4& getColumn(int i) const;
		__forceinline void getRow( int row, hkVector4& r) const;
		__forceinline hkReal& operator() (int row, int col);
		__forceinline const hkReal& operator() (int row, int col) const;
		__forceinline void setRows( const hkVector4& r0, const hkVector4& r1, const hkVector4& r2);
		__forceinline void getRows( hkVector4& r0, hkVector4& r1, hkVector4& r2) const;
		__forceinline void setCols( const hkVector4& r0, const hkVector4& r1, const hkVector4& r2);
		__forceinline void getCols( hkVector4& r0, hkVector4& r1, hkVector4& r2) const;
		__forceinline void setZero();
		__forceinline void setDiagonal( hkReal m00, hkReal m11, hkReal m22 );
		__forceinline void setIdentity();
		static const hkMatrix3& __cdecl getIdentity();
		hkBool isApproximatelyEqual( const hkMatrix3& m, hkReal epsilon=1e-3f ) const;
		void setCrossSkewSymmetric( const hkVector4& r );
		hkResult invert(hkReal epsilon);
		void invertSymmetric();
		__forceinline void _invertSymmetric();
		void transpose();
		void setTranspose( const hkMatrix3& s );
		__forceinline void _setTranspose( const hkMatrix3& s );
		void setMul( const hkMatrix3& a, const hkMatrix3& b );
		__forceinline void _setMul( const hkMatrix3& a, const hkMatrix3& b );
		void setMulInverse( const hkMatrix3& a, const hkRotation& b );
		void setMul( hkSimdRealParameter scale, const hkMatrix3& a );
		__forceinline void _setMul( hkSimdRealParameter scale, const hkMatrix3& a );
		void addMul( hkSimdRealParameter scale, const hkMatrix3& a );
		void changeBasis(const hkRotation& t);
		void add( const hkMatrix3& a );
		__forceinline void _add( const hkMatrix3& a );
		void sub( const hkMatrix3& a );
		__forceinline void _sub( const hkMatrix3& a );
		void mul( const hkMatrix3& a);
		void mul( hkSimdRealParameter scale );
		inline void operator= ( const hkMatrix3& a );
		hkBool isOk() const;
	protected:
		hkVector4 m_col0;
		hkVector4 m_col1;
		hkVector4 m_col2;
};
extern "C"
{
void hkMatrix3_setMulMat3Mat3( hkMatrix3* thisMatrix, const hkMatrix3& aTb, const hkMatrix3& bTc );
}
class __declspec(align(16)) hkRotation : public hkMatrix3
{
	public:
		void set(const hkQuaternion& q);
		void setAxisAngle(const hkVector4& axis, hkReal angle);
		hkBool isOrthonormal( hkReal epsilon = 1e-3f ) const;
		void renormalize();
};
class hkTransform
{
	public:
		__forceinline hkTransform() { }
		__forceinline hkTransform(const hkRotation& r, const hkVector4& t);
		__forceinline hkTransform(const hkTransform& r);
		__forceinline hkTransform(const hkQuaternion& q, const hkVector4& t);
		__forceinline hkReal& operator() (int row, int column);
		__forceinline const hkReal& operator() (int row, int column) const;
		__forceinline void set(const hkQuaternion& q, const hkVector4& t);
		__forceinline void setIdentity();
		__forceinline static const hkTransform& __cdecl getIdentity();
		hkBool isApproximatelyEqual( const hkTransform& t, hkReal epsilon=1e-3f ) const;
		__forceinline hkVector4& getTranslation();
		__forceinline const hkVector4& getTranslation() const;
		__forceinline void setTranslation(const hkVector4& t);
		__forceinline hkRotation& getRotation();
		__forceinline const hkRotation& getRotation() const;
		__forceinline void setRotation(const hkRotation& rotation);
		__forceinline void setRotation(const hkQuaternion& quatRotation);
		void setInverse( const hkTransform &t );
		void setMul( const hkTransform &t1, const hkTransform &t2 );
		void setMul( const hkQsTransform &t1, const hkTransform &t2 );
		void setMulInverseMul( const hkTransform& bTa, const hkTransform &bTc );
		void setMulEq( const hkTransform& b );
		void get4x4ColumnMajor(hkReal* p) const;
		void set4x4ColumnMajor(const hkReal* p);
		__forceinline void setRows4( const hkVector4& r0, const hkVector4& r1, const hkVector4& r2, const hkVector4& r3);
		void setMulMulInverse( const hkTransform &a, const hkTransform &b );
		hkBool isOk() const;
		__forceinline hkVector4& getColumn(int i);
		__forceinline const hkVector4& getColumn(int i) const;
	private:
		hkRotation m_rotation;
		hkVector4 m_translation;
};
inline hkReal& hkVector4::operator() (int i)
{
	; ;
	return (&x)[i];
}
inline const hkReal& hkVector4::operator() (int i) const
{
	; ;
	return (&x)[i];
}
inline void hkVector4::operator= (const hkVector4& v)
{
	x = v.x;
	y = v.y;
	z = v.z;
	w = v.w;
}
inline void hkVector4::set(hkReal a, hkReal b, hkReal c, hkReal d)
{
	x = a;
	y = b;
	z = c;
	w = d;
}
inline void hkVector4::add4(const hkVector4& v)
{
	x += v.x;
	y += v.y;
	z += v.z;
	w += v.w;
}
inline void hkVector4::setAdd4(const hkVector4& v0, const hkVector4& v1)
{
	x = v0.x + v1.x;
	y = v0.y + v1.y;
	z = v0.z + v1.z;
	w = v0.w + v1.w;
}
inline void hkVector4::mul4(const hkVector4& a)
{
	x *= a.x;
	y *= a.y;
	z *= a.z;
	w *= a.w;
}
inline void hkVector4::setMul4(const hkVector4& a, const hkVector4& b)
{
	x = a.x * b.x;
	y = a.y * b.y;
	z = a.z * b.z;
	w = a.w * b.w;
}
inline void hkVector4::mul4(hkSimdRealParameter rs)
{
	hkReal s = hkReal(rs);
	x *= s;
	y *= s;
	z *= s;
	w *= s;
}
inline void hkVector4::setCross(const hkVector4& v1, const hkVector4& v2)
	{
		const hkReal nx = v1(1)*v2(2) - v1(2)*v2(1);
		const hkReal ny = v1(2)*v2(0) - v1(0)*v2(2);
		const hkReal nz = v1(0)*v2(1) - v1(1)*v2(0);
		this->set( nx, ny, nz , 0.0f );
	}
inline void hkVector4::setNeg4(const hkVector4& v)
{
	x = -v.x;
	y = -v.y;
	z = -v.z;
	w = -v.w;
}
inline void hkVector4::_setMul3( const hkMatrix3& r, const hkVector4& v )
	{
		hkReal v0 = v(0);
		hkReal v1 = v(1);
		hkReal v2 = v(2);
		hkVector4& t = *this;
		t(0) = r(0,0)*v0 + r(0,1)*v1 + r(0,2)*v2;
		t(1) = r(1,0)*v0 + r(1,1)*v1 + r(1,2)*v2;
		t(2) = r(2,0)*v0 + r(2,1)*v1 + r(2,2)*v2;
		t(3) = 0;
	}
inline void hkVector4::_setRotatedDir(const hkRotation& r, const hkVector4& v)
	{
		_setMul3(r,v);
	}
inline hkSimdReal hkVector4::dot3(const hkVector4& a) const
{
	return (x * a.x) + ( y * a.y ) + ( z * a.z );
}
inline hkSimdReal hkVector4::horizontalAdd3() const
{
	return x+y+z;
}
inline hkSimdReal hkVector4::length3() const
	{
		return hkMath::sqrt((x * x) + ( y * y ) + ( z * z ));
	}
inline hkVector4& hkMatrix3::getColumn(int x)
{
	return (&m_col0)[x];
}
inline const hkVector4& hkMatrix3::getColumn(int x) const
{
	return (&m_col0)[x];
}
inline const hkReal& hkMatrix3::operator() (int r, int c) const
{
	return getColumn(c)(r);
}
inline void hkMatrix3::_setMul( const hkMatrix3& aTb, const hkMatrix3& bTc )
{
	hkMatrix3_setMulMat3Mat3( this, aTb, bTc );
}
const hkVector4& hkTransform::getColumn(int x) const
{
	return m_rotation.getColumn(x);
}
const hkRotation& hkTransform::getRotation() const
{
	return m_rotation;
}
class hkpSolverResults
{
	public:
		inline hkReal getImpulseApplied() const;
		inline hkpSolverResults();
		inline void init();
	public:
		hkReal m_impulseApplied;
		hkReal m_internalSolverData;
};
inline void hkpSolverResults::init()
{
	m_impulseApplied = 0.0f;
	m_internalSolverData = 0.0f;
}
inline hkpSolverResults::hkpSolverResults()
{
	init();
}
struct hkpSolverInfo
{
	enum DeactivationClass
	{
		DEACTIVATION_CLASS_INVALID,
		DEACTIVATION_CLASS_OFF,
		DEACTIVATION_CLASS_LOW,
		DEACTIVATION_CLASS_MEDIUM,
		DEACTIVATION_CLASS_HIGH,
		DEACTIVATION_CLASS_AGGRESSIVE,
		DEACTIVATION_CLASSES_END
	};
	struct DeactivationInfo
	{
		float m_linearVelocityThresholdInv;
		float m_angularVelocityThresholdInv;
		float m_slowObjectVelocityMultiplier;
		float m_relativeSleepVelocityThreshold;
		float m_maxDistSqrd[2];
		hkHalf m_maxRotSqrd[2];
	};
	__declspec(align(16)) float m_one;
	float		m_tau;
	float		m_damping;
	float		m_frictionTau;
	hkVector4	m_globalAccelerationPerSubStep;
	hkVector4	m_globalAccelerationPerStep;
	hkVector4	m_integrateVelocityFactor;
	hkVector4	m_invIntegrateVelocityFactor;
	float		m_dampDivTau;
	float		m_tauDivDamp;
	float		m_dampDivFrictionTau;
	float		m_frictionTauDivDamp;
	inline void setTauAndDamping( float tau, float damping )
	{
		m_tau = tau;
		m_frictionTau = 0.5f * tau;
		m_damping = damping;
		m_dampDivTau = damping / tau;
		m_dampDivFrictionTau = damping / m_frictionTau;
		m_tauDivDamp = tau/damping;
		m_frictionTauDivDamp = m_frictionTau/damping;
		m_integrateVelocityFactor.setAll3( m_tauDivDamp );
		m_invIntegrateVelocityFactor.setAll3( m_dampDivTau );
	}
	float		m_contactRestingVelocity;
	DeactivationInfo m_deactivationInfo[ DEACTIVATION_CLASSES_END ];
	float		m_deltaTime;
	float		m_invDeltaTime;
	int			m_numSteps;
	int  		m_numMicroSteps;
	float		m_invNumMicroSteps;
	float		m_invNumSteps;
	hkBool		m_forceCoherentConstraintOrderingInSolver;
	inline void incrementDeactivationFlags()
	{
		m_deactivationIntegrateCounter++;
		if (((m_deactivationIntegrateCounter+4) & 7) == 0)
		{
			m_deactivationNumInactiveFramesSelectFlag[0] ^= 0x01;
		}
		if ((m_deactivationIntegrateCounter & 7) == 0)
		{
			m_deactivationNumInactiveFramesSelectFlag[0] ^= 0x02;
		}
		if ((m_deactivationIntegrateCounter & 15) == 0)
		{
			m_deactivationNumInactiveFramesSelectFlag[1] = 1 - m_deactivationNumInactiveFramesSelectFlag[1];
			m_deactivationIntegrateCounter = 0;
		}
	}
	hkUint8			m_deactivationNumInactiveFramesSelectFlag[2];
	hkUint8			m_deactivationIntegrateCounter;
};
struct hkp1dMotorSolverInfo
{
    hkReal				m_maxImpulsePerSubstep;
    hkReal				m_minImpulsePerSubstep;
    hkReal				m_velocity;
    hkReal				m_tau;
    hkReal				m_damping;
};
struct hkpConstraintInfo
{
	int m_maxSizeOfSchema;
	int m_sizeOfSchemas;
	int m_numSolverResults;
	int m_numSolverElemTemps;
	inline void clear( ) { m_maxSizeOfSchema = 0; m_sizeOfSchemas = 0; m_numSolverResults = 0; m_numSolverElemTemps = 0; }
	inline void addHeader( ) { m_sizeOfSchemas += 16; }
	inline void add( int schemaSize, int numSolverResults, int numSolverTempElems ) { m_sizeOfSchemas += schemaSize; m_numSolverResults += numSolverResults; m_numSolverElemTemps += numSolverTempElems; }
	inline void add( const hkpConstraintInfo& other);
	inline void sub( const hkpConstraintInfo& other);
	inline void merge( const hkpConstraintInfo& other);
};
struct hkpConstraintAtom
{
		static const struct hkInternalClassMember Members[]; struct DefaultStruct;
	public:
		enum AtomType
		{
			TYPE_INVALID = 0,
			TYPE_BRIDGE,
			TYPE_SET_LOCAL_TRANSFORMS,
			TYPE_SET_LOCAL_TRANSLATIONS,
			TYPE_SET_LOCAL_ROTATIONS,
			TYPE_BALL_SOCKET,
			TYPE_STIFF_SPRING,
			TYPE_LIN,
			TYPE_LIN_SOFT,
			TYPE_LIN_LIMIT,
			TYPE_LIN_FRICTION,
			TYPE_LIN_MOTOR,
			TYPE_2D_ANG,
			TYPE_ANG,
			TYPE_ANG_LIMIT,
			TYPE_TWIST_LIMIT,
			TYPE_CONE_LIMIT,
			TYPE_ANG_FRICTION,
			TYPE_ANG_MOTOR,
			TYPE_RAGDOLL_MOTOR,
			TYPE_PULLEY,
			TYPE_OVERWRITE_PIVOT,
			TYPE_CONTACT,
			TYPE_MODIFIER_SOFT_CONTACT,
			TYPE_MODIFIER_MASS_CHANGER,
			TYPE_MODIFIER_VISCOUS_SURFACE,
			TYPE_MODIFIER_MOVING_SURFACE,
			TYPE_MODIFIER_IGNORE_CONSTRAINT,
			TYPE_MAX
		};
		enum CallbackRequest
		{
			CALLBACK_REQUEST_NONE = 0,
			CALLBACK_REQUEST_NEW_CONTACT_POINT = 1,
			CALLBACK_REQUEST_SETUP_PPU_ONLY = 2,
			CALLBACK_REQUEST_SETUP_CALLBACK = 4
		};
	public:
		__forceinline enum AtomType getType() const { return m_type; }
		__forceinline int isModifierType() const { return m_type >= TYPE_MODIFIER_SOFT_CONTACT; }
	protected:
		hkpConstraintAtom(enum AtomType type) : m_type(type) {}
	private:
		hkpConstraintAtom();
	public:
		hkEnum<AtomType,hkUint16> m_type;
		hkpConstraintAtom(hkFinishLoadedObjectFlag f) {}
};
struct hkpRagdollMotorConstraintAtom : public hkpConstraintAtom
{
	static const struct hkInternalClassMember Members[]; struct DefaultStruct;
	hkpRagdollMotorConstraintAtom() : hkpConstraintAtom(TYPE_RAGDOLL_MOTOR) { m_isEnabled = true; m_initializedOffset = 0; m_previousTargetAnglesOffset = 0; }
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>(this+1) ); }
	__forceinline int numSolverResults() const    { return 3; }
	__forceinline void addToConstraintInfo(hkpConstraintInfo& infoOut) const { infoOut.add( 3 * 64, 3, (1+2) * 3 ); }
	hkBool m_isEnabled;
	hkInt16 m_initializedOffset;
	hkInt16 m_previousTargetAnglesOffset;
	hkMatrix3 m_targetFrameAinB;
	class hkpConstraintMotor* m_motors[3];
	hkpRagdollMotorConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}
};
class hkStepInfo
{
	public:
		hkStepInfo(){}
		void set( hkTime startTime, hkTime endTime)
		{
			m_startTime = startTime;
			m_endTime   = endTime;
			m_deltaTime = endTime - startTime;
			m_invDeltaTime = m_deltaTime == 0.0f ? 0.0f : 1.0f / m_deltaTime;
		}
		hkStepInfo( hkTime startTime, hkTime endTime)
		{
			set( startTime, endTime );
		}
	public:
		__declspec(align(16)) hkPadSpu<hkTime> m_startTime;
		hkPadSpu<hkTime> m_endTime;
		hkPadSpu<hkReal> m_deltaTime;
		hkPadSpu<hkReal> m_invDeltaTime;
};
class hkpVelocityAccumulator;
class hkpConstraintQueryStepInfo
{
	public:
		__declspec(align(16)) hkPadSpu<float> m_substepDeltaTime;
		hkPadSpu<float>		m_microStepDeltaTime;
		hkPadSpu<float>		m_substepInvDeltaTime;
		hkPadSpu<float>		m_frameDeltaTime;
		hkPadSpu<float>		m_frameInvDeltaTime;
		hkPadSpu<float>		m_invNumSteps;
		hkPadSpu<float>		m_invNumStepsTimesMicroSteps;
		hkPadSpu<float>		m_rhsFactor;
		hkPadSpu<float>		m_virtMassFactor;
		hkPadSpu<float> m_frictionRhsFactor;
};
class hkpConstraintQueryIn: public hkpConstraintQueryStepInfo
{
	public:
		__forceinline void* __cdecl operator new(hk_size_t nbytes) { ; return hkThreadMemory::getInstance().allocateChunkConstSize(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete(void* p) { if (p) hkThreadMemory::getInstance().deallocateChunkConstSize(p, sizeof(hkpConstraintQueryIn), HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void* __cdecl operator new[](hk_size_t nbytes) { return hkThreadMemory::getInstance().allocate(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete[](void* p) { hkThreadMemory::getInstance().deallocate(p); } __forceinline void* __cdecl operator new(hk_size_t n, void* p){ ; return p; } __forceinline void* __cdecl operator new[](hk_size_t, void* p){ return p; } __forceinline void __cdecl operator delete(void*, void*) { } __forceinline void __cdecl operator delete[](void*, void*) { } class MustEndWithSemiColon;
		hkpConstraintQueryIn() { }
		__declspec(align(16)) hkPadSpu<const hkpVelocityAccumulator*> m_bodyA;
		hkPadSpu<const hkpVelocityAccumulator*>	m_bodyB;
		hkPadSpu<const hkTransform*>	m_transformA;
		hkPadSpu<const hkTransform*>	m_transformB;
		hkPadSpu<hkReal> m_tau;
		hkPadSpu<hkReal> m_damping;
		hkPadSpu<class hkpConstraintInstance*>	m_constraintInstance;
		hkPadSpu<void*>	m_constraintRuntime;
		hkPadSpu<hkUint32> m_accumulatorAIndex;
		hkPadSpu<hkUint32> m_accumulatorBIndex;
		hkPadSpu<void*> m_constraintRuntimeInMainMemory;
		inline void set( const hkpSolverInfo& si, const hkStepInfo& stepInfo )
		{
			m_substepDeltaTime    = si.m_deltaTime;
			m_microStepDeltaTime  = si.m_deltaTime * si.m_invNumMicroSteps;
			m_substepInvDeltaTime = si.m_invDeltaTime;
			m_invNumSteps		  = si.m_invNumSteps;
			m_invNumStepsTimesMicroSteps	  = si.m_invNumSteps * si.m_invNumMicroSteps;
			m_tau			      = si.m_tau;
			m_damping		      = si.m_damping;
			m_rhsFactor			  = si.m_tauDivDamp * si.m_invDeltaTime;
			m_virtMassFactor      = si.m_damping;
			m_frictionRhsFactor   = si.m_frictionTauDivDamp * si.m_invDeltaTime;
			m_frameDeltaTime      = stepInfo.m_deltaTime;
			m_frameInvDeltaTime   = stepInfo.m_invDeltaTime;
		}
};
class hkpJacobianSchema;
class  hkpConstraintQueryOut
{
	public:
		__forceinline void* __cdecl operator new(hk_size_t nbytes) { ; return hkThreadMemory::getInstance().allocateChunkConstSize(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete(void* p) { if (p) hkThreadMemory::getInstance().deallocateChunkConstSize(p, sizeof(hkpConstraintQueryOut), HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void* __cdecl operator new[](hk_size_t nbytes) { return hkThreadMemory::getInstance().allocate(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete[](void* p) { hkThreadMemory::getInstance().deallocate(p); } __forceinline void* __cdecl operator new(hk_size_t n, void* p){ ; return p; } __forceinline void* __cdecl operator new[](hk_size_t, void* p){ return p; } __forceinline void __cdecl operator delete(void*, void*) { } __forceinline void __cdecl operator delete[](void*, void*) { } class MustEndWithSemiColon;
		hkPadSpu<hkpJacobianSchema*> m_jacobianSchemas;
};
class hkpVelocityAccumulator
{
	public:
		__forceinline void* __cdecl operator new(hk_size_t nbytes) { ; return hkThreadMemory::getInstance().allocateChunkConstSize(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete(void* p) { if (p) hkThreadMemory::getInstance().deallocateChunkConstSize(p, sizeof(hkpVelocityAccumulator), HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void* __cdecl operator new[](hk_size_t nbytes) { return hkThreadMemory::getInstance().allocate(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete[](void* p) { hkThreadMemory::getInstance().deallocate(p); } __forceinline void* __cdecl operator new(hk_size_t n, void* p){ ; return p; } __forceinline void* __cdecl operator new[](hk_size_t, void* p){ return p; } __forceinline void __cdecl operator delete(void*, void*) { } __forceinline void __cdecl operator delete[](void*, void*) { } class MustEndWithSemiColon;
	    enum hkpAccumulatorType
	    {
		    HK_RIGID_BODY,
		HK_KEYFRAMED_RIGID_BODY,
		HK_NO_GRAVITY_RIGID_BODY,
		HK_END
	};
	hkEnum<hkpAccumulatorType,hkUint8> m_type;
	hkBool m_matrixIsIdentity;
	hkUint32 m_deactivationClass;
	hkVector4 m_linearVel;
	hkVector4 m_angularVel;
	hkVector4 m_invMasses;
	hkVector4& getCenterOfMassInWorld() { return m_scratch0; }
	const hkVector4& getCenterOfMassInWorld() const { return m_scratch0; }
	hkRotation& getCoreFromWorldMatrix() { return reinterpret_cast<hkRotation&>(m_scratch1); }
	const hkRotation& getCoreFromWorldMatrix() const { return reinterpret_cast<const hkRotation&>(m_scratch1); }
	hkVector4& getSumLinearVel() { return m_scratch0; }
	hkVector4& getSumAngularVel() { return m_scratch1; }
	const hkVector4& getSumLinearVel() const { return m_scratch0; }
	const hkVector4& getSumAngularVel() const { return m_scratch1; }
public:
	hkVector4 m_scratch0;
	hkVector4 m_scratch1;
	hkVector4 m_scratch2;
	hkVector4 m_scratch3;
public:
	__forceinline void setFixed()
	{
		m_type = hkpVelocityAccumulator::HK_KEYFRAMED_RIGID_BODY;
		m_matrixIsIdentity = true;
		this->m_invMasses.setZero4();
		this->m_linearVel.setZero4();
		this->m_angularVel.setZero4();
		this->getCenterOfMassInWorld().setZero4();
		this->getCoreFromWorldMatrix().setZero();
	}
};
class hkp1dBilateralConstraintStatus
{
	public:
		__forceinline void* __cdecl operator new(hk_size_t nbytes) { ; return hkThreadMemory::getInstance().allocateChunkConstSize(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete(void* p) { if (p) hkThreadMemory::getInstance().deallocateChunkConstSize(p, sizeof(hkp1dBilateralConstraintStatus), HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void* __cdecl operator new[](hk_size_t nbytes) { return hkThreadMemory::getInstance().allocate(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete[](void* p) { hkThreadMemory::getInstance().deallocate(p); } __forceinline void* __cdecl operator new(hk_size_t n, void* p){ ; return p; } __forceinline void* __cdecl operator new[](hk_size_t, void* p){ return p; } __forceinline void __cdecl operator delete(void*, void*) { } __forceinline void __cdecl operator delete[](void*, void*) { } class MustEndWithSemiColon;
	    hkPadSpu<hkReal>			m_virtualMass;
};
class hkp1dConstraintMotorInfo
{
	public:
		__forceinline void* __cdecl operator new(hk_size_t nbytes) { ; return hkThreadMemory::getInstance().allocateChunkConstSize(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete(void* p) { if (p) hkThreadMemory::getInstance().deallocateChunkConstSize(p, sizeof(hkp1dConstraintMotorInfo), HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void* __cdecl operator new[](hk_size_t nbytes) { return hkThreadMemory::getInstance().allocate(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete[](void* p) { hkThreadMemory::getInstance().deallocate(p); } __forceinline void* __cdecl operator new(hk_size_t n, void* p){ ; return p; } __forceinline void* __cdecl operator new[](hk_size_t, void* p){ return p; } __forceinline void __cdecl operator delete(void*, void*) { } __forceinline void __cdecl operator delete[](void*, void*) { } class MustEndWithSemiColon;
	    hkPadSpu<hkReal>				m_targetPosition;
	    hkPadSpu<hkReal>				m_targetVelocity;
	    hkPadSpu<hkReal>				m_maxForce;
	    hkPadSpu<hkReal>				m_minForce;
	    hkPadSpu<hkReal>				m_tau;
	    hkPadSpu<hkReal>				m_damping;
};
class hkpConstraintMotorInput: public hkp1dBilateralConstraintStatus
{
	public:
		__forceinline void* __cdecl operator new(hk_size_t nbytes) { ; return hkThreadMemory::getInstance().allocateChunkConstSize(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete(void* p) { if (p) hkThreadMemory::getInstance().deallocateChunkConstSize(p, sizeof(hkpConstraintMotorInput), HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void* __cdecl operator new[](hk_size_t nbytes) { return hkThreadMemory::getInstance().allocate(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete[](void* p) { hkThreadMemory::getInstance().deallocate(p); } __forceinline void* __cdecl operator new(hk_size_t n, void* p){ ; return p; } __forceinline void* __cdecl operator new[](hk_size_t, void* p){ return p; } __forceinline void __cdecl operator delete(void*, void*) { } __forceinline void __cdecl operator delete[](void*, void*) { } class MustEndWithSemiColon;
	    hkPadSpu<const class hkpConstraintQueryStepInfo*> m_stepInfo;
	    class hkpSolverResults m_lastResults;
	    hkPadSpu<hkReal> m_deltaTarget;
	    hkPadSpu<hkReal> m_positionError;
};
class hkpConstraintMotorOutput: public hkp1dConstraintMotorInfo
{
	public:
		__forceinline void* __cdecl operator new(hk_size_t nbytes) { ; return hkThreadMemory::getInstance().allocateChunkConstSize(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete(void* p) { if (p) hkThreadMemory::getInstance().deallocateChunkConstSize(p, sizeof(hkpConstraintMotorOutput), HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void* __cdecl operator new[](hk_size_t nbytes) { return hkThreadMemory::getInstance().allocate(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete[](void* p) { hkThreadMemory::getInstance().deallocate(p); } __forceinline void* __cdecl operator new(hk_size_t n, void* p){ ; return p; } __forceinline void* __cdecl operator new[](hk_size_t, void* p){ return p; } __forceinline void __cdecl operator delete(void*, void*) { } __forceinline void __cdecl operator delete[](void*, void*) { } class MustEndWithSemiColon;
};
extern "C"
{
void __cdecl hkCalcMotorData(const hkpConstraintMotor* someMotor, const hkpConstraintMotorInput* input, hkpConstraintMotorOutput* output);
}
__forceinline void __cdecl hkInternalConstraintUtils_inlineCalcRelativeAngle(
	const hkVector4& twistAxisAinWorld, const hkVector4& twistAxisBinWorld,
	const hkVector4& planeAxisAinWorld, const hkVector4& planeAxisBinWorld,
	hkVector4& axisOut, hkPadSpu<hkReal>& angleOut, hkPadSpu<hkReal>& tauMaxOut )
{
	hkVector4 twist_axis_ws;
	twist_axis_ws.setAdd4( twistAxisBinWorld , twistAxisAinWorld );
	const hkReal twist_axis_ws_length3 = twist_axis_ws.length3();
	if (twist_axis_ws_length3>1e-16f)
	{
		tauMaxOut = twist_axis_ws_length3 * 0.5f;
		twist_axis_ws.mul4(1.0f / twist_axis_ws_length3);
	}
	else
	{
		tauMaxOut = 0.0f;
		twist_axis_ws = twistAxisBinWorld;
	}
	hkRotation m_ws_us;
	{
		hkVector4& c0 = m_ws_us.getColumn(0);
		hkVector4& c1 = m_ws_us.getColumn(1);
		hkVector4& c2 = m_ws_us.getColumn(2);
		c0 = twist_axis_ws;
		c1.setCross(twist_axis_ws, planeAxisBinWorld);
		c2.setCross(c1, c0);
	}
	hkReal d1 = m_ws_us.getColumn(1).dot3( planeAxisAinWorld );
	hkReal d2 = m_ws_us.getColumn(2).dot3( planeAxisAinWorld );
	hkReal currentTwistAngle  = hkMath_atan2fApproximation( d1, d2);
	angleOut = currentTwistAngle;
	axisOut = twist_axis_ws;
}
namespace hkVector4Util
{
__forceinline void __cdecl reserveRegisters( hkUint32 registerMask );
__forceinline void __cdecl releaseRegisters( hkUint32 registerMask );
}
__forceinline void __cdecl hkVector4Util::reserveRegisters( hkUint32 registerMask )
{
}
__forceinline void __cdecl hkVector4Util::releaseRegisters( hkUint32 registerMask )
{
}
class hkpJacobianSchema
{
	public:
		enum SchemaType
		{
			SCHEMA_TYPE_END = 0,
			SCHEMA_TYPE_HEADER,
			SCHEMA_TYPE_GOTO,
			SCHEMA_TYPE_SHIFT_SOLVER_RESULTS_POINTER,
			SCHEMA_TYPE_SIMPLE_BEGIN,
			SCHEMA_TYPE_1D_BILATERAL,
			SCHEMA_TYPE_1D_BILATERAL_USER_TAU,
			SCHEMA_TYPE_1D_LINEAR_LIMITS,
			SCHEMA_TYPE_1D_FRICTION,
			SCHEMA_TYPE_1D_LINEAR_MOTOR,
			SCHEMA_TYPE_1D_PULLEY,
			SCHEMA_TYPE_1D_ANGULAR,
			SCHEMA_TYPE_1D_ANGULAR_LIMITS,
			SCHEMA_TYPE_1D_ANGULAR_FRICTION,
			SCHEMA_TYPE_1D_ANGULAR_MOTOR,
			SCHEMA_TYPE_SINGLE_CONTACT,
			SCHEMA_TYPE_SINGLE_CONTACT_WITH_ACCESSOR_CHECK,
			SCHEMA_TYPE_SINGLE_LIMIT_CONTACT,
			SCHEMA_TYPE_SINGLE_LIMIT_CONTACT_WITH_ACCESSOR_CHECK,
			SCHEMA_TYPE_PAIR_CONTACT,
			SCHEMA_TYPE_PAIR_CONTACT_WITH_ACCESSOR_CHECK,
			SCHEMA_TYPE_2D_FRICTION,
			SCHEMA_TYPE_3D_FRICTION,
			SCHEMA_TYPE_SET_MASS,
			SCHEMA_TYPE_ADD_VELOCITY,
			SCHEMA_TYPE_SIMPLE_END,
			SCHEMA_TYPE_STIFF_SPRING_CHAIN,
			SCHEMA_TYPE_BALL_SOCKET_CHAIN,
			SCHEMA_TYPE_POWERED_CHAIN,
			SCHEMA_TYPE_MAX
		};
		static __forceinline void __cdecl setType( hkpJacobianSchema* schema, hkEnum<SchemaType, hkInt8> type )
		{
			*reinterpret_cast<hkReal*>( schema ) += 1.192092896e-07f;
			*reinterpret_cast<hkEnum<SchemaType, hkInt8>*>( schema ) = type;
		}
};
class hkpJacobianShiftSolverResultsPointerSchema
{
	public:
		__forceinline void* __cdecl operator new(hk_size_t nbytes) { ; return hkThreadMemory::getInstance().allocateChunkConstSize(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete(void* p) { if (p) hkThreadMemory::getInstance().deallocateChunkConstSize(p, sizeof(hkpJacobianShiftSolverResultsPointerSchema), HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void* __cdecl operator new[](hk_size_t nbytes) { return hkThreadMemory::getInstance().allocate(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete[](void* p) { hkThreadMemory::getInstance().deallocate(p); } __forceinline void* __cdecl operator new(hk_size_t n, void* p){ ; return p; } __forceinline void* __cdecl operator new[](hk_size_t, void* p){ return p; } __forceinline void __cdecl operator delete(void*, void*) { } __forceinline void __cdecl operator delete[](void*, void*) { } class MustEndWithSemiColon;
		__forceinline void initShiftSolverResultsPointer( hkUint8 numSolverResultsToSkip )
		{
			hkpJacobianSchema::setType( reinterpret_cast<hkpJacobianSchema*>( this ), hkpJacobianSchema::SCHEMA_TYPE_SHIFT_SOLVER_RESULTS_POINTER );
			m_numSolverResultsToSkip = numSolverResultsToSkip;
		}
		__forceinline int getNumSolverResults() const { return m_numSolverResultsToSkip; }
	private:
		unsigned m_padding_1;
		hkUint8 m_numSolverResultsToSkip;
		unsigned m_padding2[2];
};
class hkp2AngJacobian
{
	public:
		__forceinline void* __cdecl operator new(hk_size_t nbytes) { ; return hkThreadMemory::getInstance().allocateChunkConstSize(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete(void* p) { if (p) hkThreadMemory::getInstance().deallocateChunkConstSize(p, sizeof(hkp2AngJacobian), HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void* __cdecl operator new[](hk_size_t nbytes) { return hkThreadMemory::getInstance().allocate(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete[](void* p) { hkThreadMemory::getInstance().deallocate(p); } __forceinline void* __cdecl operator new(hk_size_t n, void* p){ ; return p; } __forceinline void* __cdecl operator new[](hk_size_t, void* p){ return p; } __forceinline void __cdecl operator delete(void*, void*) { } __forceinline void __cdecl operator delete[](void*, void*) { } class MustEndWithSemiColon;
		hkVector4 m_angular[2];
		inline hkReal getInvJacDiag() const { return m_angular[0](3); }
		inline void setInvJacDiag( hkReal v ) { m_angular[0](3) = v; }
		inline void setAngularRhs( hkReal v ) { m_angular[1](3) = v; }
		inline hkReal getAngularRhs() const { return m_angular[1](3); }
		hkReal getAngularDiag( const hkpVelocityAccumulator& mA, const hkpVelocityAccumulator& mB ) const;
};
class hkpJacobian1dAngularMotorSchema
{
	public:
		__forceinline void* __cdecl operator new(hk_size_t nbytes) { ; return hkThreadMemory::getInstance().allocateChunkConstSize(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete(void* p) { if (p) hkThreadMemory::getInstance().deallocateChunkConstSize(p, sizeof(hkpJacobian1dAngularMotorSchema), HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void* __cdecl operator new[](hk_size_t nbytes) { return hkThreadMemory::getInstance().allocate(static_cast<int>(nbytes),HK_MEMORY_CLASS_CONSTRAINT_SOLVER); } __forceinline void __cdecl operator delete[](void* p) { hkThreadMemory::getInstance().deallocate(p); } __forceinline void* __cdecl operator new(hk_size_t n, void* p){ ; return p; } __forceinline void* __cdecl operator new[](hk_size_t, void* p){ return p; } __forceinline void __cdecl operator delete(void*, void*) { } __forceinline void __cdecl operator delete[](void*, void*) { } class MustEndWithSemiColon;
		__forceinline hkp1dMotorSolverInfo& init1dAngularMotor( const hkp2AngJacobian& jac )
		{
			hkpJacobianSchema::setType( reinterpret_cast<hkpJacobianSchema*>( this ), hkpJacobianSchema::SCHEMA_TYPE_1D_ANGULAR_MOTOR );
			return m_motorSolverInfo;
		}
		hkp2AngJacobian m_jac;
		hkp1dMotorSolverInfo m_motorSolverInfo;
		hkReal m_padding[3];
};
__forceinline hkReal hkp2AngJacobian::getAngularDiag( const hkpVelocityAccumulator& mA, const hkpVelocityAccumulator& mB ) const
{
	const hkp2AngJacobian& jac = *this;
	hkVector4 ang0; ang0.setMul4( jac.m_angular[0], jac.m_angular[0] );
	hkVector4 ang1; ang1.setMul4( jac.m_angular[1], jac.m_angular[1] );
	ang0.mul4( mA.m_invMasses );
	ang1.mul4( mB.m_invMasses );
	ang0.add4( ang1 );
	const hkReal eps = 1.192092896e-07f;
	const hkReal dot = ang0.horizontalAdd3();
	return dot + eps;
}
namespace hkJacobianBuilder
{
__forceinline void __cdecl buildAngularBegin( const hkpVelocityAccumulator* opaA, const hkpVelocityAccumulator* opaB, const hkVector4& direction, hkReal virtMassFactor, hkp2AngJacobian& jac )
	{
		hkVector4Util::reserveRegisters( 0xf0000000 );
		if ( opaA->m_matrixIsIdentity )
		{
			jac.m_angular[0] = direction;
		}
		else
		{
			jac.m_angular[0]._setRotatedDir( opaA->getCoreFromWorldMatrix(), direction );
		}
		if ( opaB->m_matrixIsIdentity )
		{
			jac.m_angular[1].setNeg4( direction );
		}
		else
		{
			hkVector4 negDir; negDir.setNeg4( direction );
			jac.m_angular[1]._setRotatedDir( opaB->getCoreFromWorldMatrix(), negDir );
		}
		hkReal diag = jac.getAngularDiag( *opaA, *opaB );
		jac.setInvJacDiag( virtMassFactor / diag );
	}
__forceinline void __cdecl buildAngularEnd( hkp2AngJacobian& jac, hkReal rhs, hkReal rhsFactor )
	{
		jac.setAngularRhs( rhs * rhsFactor );
		hkVector4Util::releaseRegisters( 0xf0000000 );
	}
}
static __forceinline void __cdecl _hk1dAngularVelocityMotorBeginJacobian( const hkVector4& directionOfConstraint, const hkpConstraintQueryIn &in, hkp2AngJacobian& jac, hkp1dBilateralConstraintStatus& statusOut )
{
	hkJacobianBuilder::buildAngularBegin( in.m_bodyA, in.m_bodyB, directionOfConstraint, 1.0f, jac );
	statusOut.m_virtualMass = jac.getInvJacDiag();
}
__forceinline void __cdecl _hk1dAngularVelocityMotorCommitJacobian( hkp1dConstraintMotorInfo& info, const hkpConstraintQueryIn &in, hkp2AngJacobian& jac, hkpConstraintQueryOut& out )
{
	hkJacobianBuilder::buildAngularEnd( jac, info.m_targetPosition, in.m_substepInvDeltaTime );
	hkpJacobian1dAngularMotorSchema* schema = static_cast<hkpJacobian1dAngularMotorSchema*>( static_cast<void*>( out.m_jacobianSchemas.val() ) );
	hkp1dMotorSolverInfo& motorInfo = schema->init1dAngularMotor( jac );
	motorInfo.m_maxImpulsePerSubstep = info.m_maxForce * in.m_microStepDeltaTime;
	motorInfo.m_minImpulsePerSubstep = info.m_minForce * in.m_microStepDeltaTime;
	motorInfo.m_velocity = info.m_targetVelocity;
	motorInfo.m_tau = info.m_tau;
	motorInfo.m_damping = info.m_damping;
	out.m_jacobianSchemas = reinterpret_cast<hkpJacobianSchema*>( schema + 1 );
}
static __forceinline void __cdecl hkSkipSolverResults( hkUint8 numSolverResultsToSkip, hkpConstraintQueryOut& out )
{
	hkpJacobianShiftSolverResultsPointerSchema* schema = reinterpret_cast<hkpJacobianShiftSolverResultsPointerSchema*>( out.m_jacobianSchemas.val() );
	schema->initShiftSolverResultsPointer( numSolverResultsToSkip );
	out.m_jacobianSchemas = reinterpret_cast<hkpJacobianSchema*>( schema + 1 );
}


inline hkVector4& hkTransform::getTranslation() { return m_translation; }
inline const hkVector4& hkTransform::getTranslation() const { return m_translation; }
inline hkRotation& hkTransform::getRotation() { return m_rotation; }
inline hkVector4& hkTransform::getColumn(int i) { return m_rotation.getColumn(i); }

inline const hkTransform& __cdecl hkTransform::getIdentity() { return reinterpret_cast<const hkTransform&>(hkTransformIdentity); }

inline hkTransform::hkTransform(const hkTransform& t)
{
	const hkVector4 r0 = t.m_rotation.getColumn(0);
	const hkVector4 r1 = t.m_rotation.getColumn(1);
	const hkVector4 r2 = t.m_rotation.getColumn(2);
	const hkVector4 r3 = t.m_rotation.getColumn(3);
	m_rotation.getColumn(0) = r0;
	m_rotation.getColumn(1) = r1;
	m_rotation.getColumn(2) = r2;
	m_rotation.getColumn(3) = r3;
}

inline hkMatrix3::hkMatrix3( const hkMatrix3& other )
{
	m_col0 = other.m_col0;
	m_col1 = other.m_col1;
	m_col2 = other.m_col2;
}

inline void hkVector4::setSub4(const hkVector4& v0, const hkVector4& v1)
{
	x = v0.x - v1.x;
	y = v0.y - v1.y;
	z = v0.z - v1.z;
	w = v0.w - v1.w;
}

inline void hkVector4::setMul4(hkSimdRealParameter rs, const hkVector4& a)
{
	hkReal r = hkReal(rs);
	x = r * a.x;
	y = r * a.y;
	z = r * a.z;
	w = r * a.w;
}

inline void hkVector4::subMul4(hkSimdRealParameter rs, const hkVector4& a)
{
	hkReal r = hkReal(rs);
	x -= r * a.x;
	y -= r * a.y;
	z -= r * a.z;
	w -= r * a.w;
}

inline void hkVector4::setAddMul4(const hkVector4& a, const hkVector4& b, hkSimdRealParameter r)
{
	x = a.x + r * b.x;
	y = a.y + r * b.y;
	z = a.z + r * b.z;
	w = a.w + r * b.w;
}

inline void hkVector4::setNeg3(const hkVector4& v)
{
	x = -v.x;
	y = -v.y;
	z = -v.z;
	w = v.w;
}

inline void hkVector4::setZero4()
{
	x = y = z = w = 0;
}

inline hkSimdReal hkVector4::lengthSquared3() const
{
	return this->dot3(*this);
}

namespace hkMath
{
	inline hkReal __cdecl sqrtInverse(hkReal r) { return 1.0f / hkMath::sqrt(r); }
}

inline hkSimdReal hkVector4::lengthInverse3() const
{
	hkReal l2 = (x*x) + (y*y) + (z*z);
	return l2 ? hkMath::sqrtInverse(l2) : 0;
}

inline void hkVector4::normalize3()
{
	this->mul4( this->lengthInverse3() );
}

inline hkSimdReal hkVector4::normalizeWithLength3()
{
	hkReal len = this->length3();
	this->mul4( (1.0f)/len );
	return len;
}

inline const hkReal& hkTransform::operator() (int r, int c) const
{
	return m_rotation(r,c);
}

namespace hkJacobianBuilder
{
	__forceinline void __cdecl initBuilder( const hkpVelocityAccumulator* mA, const hkpVelocityAccumulator* mB, hkReal f ) {}
}

inline void hkVector4::_setTransformedPos(const hkTransform& t, const hkVector4& v)
{
	hkReal v0 = v(0);
	hkReal v1 = v(1);
	hkReal v2 = v(2);
	hkVector4& d = *this;
	d(0) = t(0,0)*v0 + t(0,1)*v1 + t(0,2)*v2 + t(0,3);
	d(1) = t(1,0)*v0 + t(1,1)*v1 + t(1,2)*v2 + t(1,3);
	d(2) = t(2,0)*v0 + t(2,1)*v1 + t(2,2)*v2 + t(2,3);
	d(3) = 0;
}

}

namespace JacobianAtoms {

using namespace JacobianMath;



namespace hkMath
{
	template <typename T> inline T __cdecl min2( T x, T y ) { return x < y ? x : y; }
	template <typename T> inline T __cdecl max2( T x, T y ) { return x > y ? x : y; }
}

template <typename TYPE>
__forceinline TYPE __cdecl hkAddByteOffsetCpuPtr( TYPE base, hkUlong offset )
{
	return reinterpret_cast<TYPE>( reinterpret_cast<char*>(base) + offset );
}

template <typename TYPE>
__forceinline const TYPE* __cdecl hkAddByteOffsetConst( const TYPE* base, hkUlong offset )
{
	return reinterpret_cast<const TYPE*>( reinterpret_cast<const char*>(base) + offset );
}

namespace hkVector4Util
{
	__forceinline void __cdecl checkRegisters( hkUint32 registerMask ) {}
	__forceinline void __cdecl rotatePoints( const hkMatrix3& t, const hkVector4* vectorsIn, int numVectors, hkVector4* vectorsOut )
	{
		checkRegisters( 0x70000000 );
		hkMatrix3 unaliased = t;
		int i = numVectors - 1;
		do
		{
			vectorsOut[i]._setMul3( unaliased, vectorsIn[i] );
		} while( --i >= 0 );
	}

	__forceinline void __cdecl setMul( const hkMatrix3& aTb, const hkMatrix3& bTc, hkMatrix3& aTcOut )
	{
		rotatePoints( aTb, &bTc.getColumn(0), 3, &aTcOut.getColumn(0) );
	}
}

// ---------------------------------------------------------------- atoms

typedef void (__cdecl *hkConstraintAtomBuildJacobianFunc) ( const void* data, const hkpConstraintQueryIn& in, hkpConstraintQueryOut& out );

struct hkpBridgeConstraintAtom : public hkpConstraintAtom
{
	hkConstraintAtomBuildJacobianFunc m_buildJacobianFunc;
	class hkpConstraintData* m_constraintData;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 100000; }
};

struct hkpSetLocalTransformsConstraintAtom : public hkpConstraintAtom
{
	__declspec(align(16)) hkTransform m_transformA;
	hkTransform m_transformB;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 0; }
};

struct hkpSetLocalTranslationsConstraintAtom : public hkpConstraintAtom
{
	__declspec(align(16)) hkVector4 m_translationA;
	hkVector4 m_translationB;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 0; }
};

struct hkpSetLocalRotationsConstraintAtom : public hkpConstraintAtom
{
	__declspec(align(16)) hkRotation m_rotationA;
	hkRotation m_rotationB;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 0; }
};

struct hkpBallSocketConstraintAtom : public hkpConstraintAtom
{
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 3; }
};

struct hkpStiffSpringConstraintAtom : public hkpConstraintAtom
{
	hkReal m_length;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 1; }
};

struct hkpLinConstraintAtom : public hkpConstraintAtom
{
	hkUint8 m_axisIndex;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 1; }
};

struct hkpLinSoftConstraintAtom : public hkpConstraintAtom
{
	hkUint8 m_axisIndex;
	hkReal m_tau;
	hkReal m_damping;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 1; }
};

struct hkpLinLimitConstraintAtom : public hkpConstraintAtom
{
	hkUint8 m_axisIndex;
	hkReal m_min;
	hkReal m_max;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 1; }
};

struct hkpLinFrictionConstraintAtom : public hkpConstraintAtom
{
	hkUint8 m_isEnabled;
	hkUint8 m_frictionAxis;
	hkReal m_maxFrictionForce;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 1; }
};

struct hkpLinMotorConstraintAtom : public hkpConstraintAtom
{
	hkBool m_isEnabled;
	hkUint8 m_motorAxis;
	hkInt16 m_initializedOffset;
	hkInt16 m_previousTargetPositionOffset;
	hkReal m_targetPosition;
	class hkpConstraintMotor* m_motor;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 1; }
};

struct hkp2dAngConstraintAtom : public hkpConstraintAtom
{
	hkUint8 m_freeRotationAxis;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 2; }
};

struct hkpAngConstraintAtom : public hkpConstraintAtom
{
	hkUint8 m_firstConstrainedAxis;
	hkUint8 m_numConstrainedAxes;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return m_numConstrainedAxes; }
};

struct hkpAngFrictionConstraintAtom : public hkpConstraintAtom
{
	hkUint8 m_isEnabled;
	hkUint8 m_firstFrictionAxis;
	hkUint8 m_numFrictionAxes;
	hkReal m_maxFrictionTorque;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return m_numFrictionAxes; }
};

struct hkpModifierConstraintAtom : public hkpConstraintAtom
{
	__declspec(align(16)) hkUint16 m_modifierAtomSize;
	hkUint16 m_childSize;
	hkpConstraintAtom* m_child;
	hkUint32 m_pad[2];
};

struct hkpSoftContactModifierConstraintAtom : public hkpModifierConstraintAtom
{
	hkReal m_tau;
	hkReal m_maxAcceleration;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 0; }
};

struct hkpMassChangerModifierConstraintAtom : public hkpModifierConstraintAtom
{
	hkReal m_factorA;
	hkReal m_factorB;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 0; }
};

struct hkpViscousSurfaceModifierConstraintAtom : public hkpModifierConstraintAtom
{
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 0; }
};

struct hkpMovingSurfaceModifierConstraintAtom : public hkpModifierConstraintAtom
{
	hkVector4 m_velocity;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 0; }
};

struct hkpIgnoreModifierConstraintAtom : public hkpModifierConstraintAtom
{
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 0; }
};

class hkContactPoint
{
	public:
		inline hkReal getDistance() const { return m_separatingNormal(3); }
		inline const hkVector4& getSeparatingNormal() const { return m_separatingNormal; }
		hkVector4 m_position;
		hkVector4 m_separatingNormal;
};

class hkpContactPointProperties : public hkpSolverResults
{
	public:
		hkUint32 m_userData;
		hkUint32 m_material;
		hkReal m_maxImpulse;
};

struct hkpSimpleContactConstraintDataInfo
{
	__declspec(align(16)) hkUint16 m_flags;
	hkUint16 m_index;
	hkUint32 m_data[7];
};

struct hkpSimpleContactConstraintAtom : public hkpConstraintAtom
{
	inline hkContactPoint* getContactPoints() const { return const_cast<hkContactPoint*>( reinterpret_cast<const hkContactPoint*>( this+1 ) ); }
	inline hkpContactPointProperties* getContactPointPropertiesStream() const { return reinterpret_cast<hkpContactPointProperties*>( hkAddByteOffset( getContactPoints(), sizeof(hkContactPoint) * m_numReservedContactPoints ) ); }
	hkUint16 m_sizeOfAllAtoms;
	hkUint16 m_numContactPoints;
	hkUint16 m_numReservedContactPoints;
	hkUint8 m_numUserDatasForBodyA;
	hkUint8 m_numUserDatasForBodyB;
	hkUint8 m_contactPointPropertiesStriding;
	hkUint16 m_maxNumContactPoints;
	hkpSimpleContactConstraintDataInfo m_info;
};

// ---------------------------------------------------------------- solver infos and external builders

class hkp1dLinearBilateralConstraintInfo
{
	public:
		hkp1dLinearBilateralConstraintInfo() {}
		hkVector4 m_pivotA;
		hkVector4 m_pivotB;
		hkVector4 m_constrainedDofW;
};

class hkp1dLinearBilateralUserTauConstraintInfo : public hkp1dLinearBilateralConstraintInfo
{
	public:
		hkp1dLinearBilateralUserTauConstraintInfo() {}
		hkPadSpu<hkReal> m_tau;
		hkPadSpu<hkReal> m_damping;
};

class hkp1dLinearLimitInfo : public hkp1dLinearBilateralConstraintInfo
{
	public:
		hkp1dLinearLimitInfo() {}
		hkPadSpu<hkReal> m_min;
		hkPadSpu<hkReal> m_max;
};

class hkp1dLinearFrictionInfo
{
	public:
		hkp1dLinearFrictionInfo() {}
		hkVector4 m_pivot;
		hkVector4 m_constrainedDofW;
		hkPadSpu<hkReal> m_maxFrictionForce;
		hkPadSpu<hkpSolverResults*> m_lastSolverResults;
};

class hkp1dAngularBilateralConstraintInfo
{
	public:
		hkp1dAngularBilateralConstraintInfo() {}
		hkVector4 m_zeroErrorAxisAinW;
		hkVector4 m_constrainedDofW;
		hkVector4 m_perpZeroErrorAxisBinW;
};

class hkp1dAngularFrictionInfo
{
	public:
		hkp1dAngularFrictionInfo() {}
		hkPadSpu<const hkVector4*> m_constrainedDofW;
		hkPadSpu<hkpSolverResults*> m_lastSolverResults;
		hkPadSpu<hkReal> m_maxFrictionTorque;
		hkPadSpu<int> m_numFriction;
};

extern "C" {
void __cdecl hk1dLinearBilateralConstraintBuildJacobian( const hkp1dLinearBilateralConstraintInfo& info, const hkpConstraintQueryIn &in, hkpConstraintQueryOut &out );
void __cdecl hk1dLinearBilateralConstraintBuildJacobianWithCustomRhs( const hkp1dLinearBilateralConstraintInfo& info, const hkpConstraintQueryIn &in, hkpConstraintQueryOut &out, hkReal customRhs );
void __cdecl hk1dLinearBilateralConstraintUserTauBuildJacobian( const hkp1dLinearBilateralUserTauConstraintInfo& info, const hkpConstraintQueryIn &in, hkpConstraintQueryOut &out );
void __cdecl hk1dLinearLimitBuildJacobian( const hkp1dLinearLimitInfo& info, const hkpConstraintQueryIn &in, hkpConstraintQueryOut &out );
void __cdecl hk1dLinearFrictionBuildJacobian( const hkp1dLinearFrictionInfo& info, const hkpConstraintQueryIn &in, hkpConstraintQueryOut &out );
void __cdecl hk1dAngularBilateralConstraintBuildJacobian( const hkp1dAngularBilateralConstraintInfo& info, const hkpConstraintQueryIn &in, hkpConstraintQueryOut &out );
void __cdecl hk1dAngularFrictionBuildJacobian( const hkp1dAngularFrictionInfo& info, const hkpConstraintQueryIn &in, hkpConstraintQueryOut &out );
void __cdecl hk1dLinearVelocityMotorBeginJacobian( const hkVector4& directionOfConstraint, const hkVector4& pivot, const hkpConstraintQueryIn &in, class hkp2Lin2AngJacobian* jac, hkpConstraintMotorInput& statusOut );
void __cdecl hk1dLinearVelocityMotorCommitJacobian( hkp1dConstraintMotorInfo& info, const hkpConstraintQueryIn &in, class hkp2Lin2AngJacobian* jac, hkpConstraintQueryOut& out );
void __cdecl hkSimpleContactConstraintDataBuildJacobian( const hkpConstraintAtom* atom, const hkpConstraintQueryIn &in, hkBool writeHeaderSchema, hkpConstraintQueryOut &out );
void __cdecl hkSimpleContactConstraintDataAddALittleSurfaceViscosity( hkpSimpleContactConstraintDataInfo* info );
void __cdecl hkSetInvMassBuildJacobian( const hkVector4& invMassA, const hkVector4& invMassB, hkpConstraintQueryOut &out );
}
// The add-velocity schema and its writer (FUN_00a4e3c0). The writer is not inlined in this build; its body is visible
// to the caller, which is why the moving surface case knows that the velocity it passes does not escape.
class hkpJacobianAddVelocitySchema
{
	public:
		__forceinline void initAddVelocity( const hkVector4& velocity, int accumulatorIndex )
		{
			m_velocity = velocity;
			m_accumulatorIndex = accumulatorIndex;
			hkpJacobianSchema::setType( reinterpret_cast<hkpJacobianSchema*>( this ), hkpJacobianSchema::SCHEMA_TYPE_ADD_VELOCITY );
		}
		hkVector4 m_velocity;
		int m_accumulatorIndex;
		int m_padding[3];
};

__declspec(noinline) inline void __cdecl hkAddVelocityBuildJacobian( const hkVector4& deltaVel, int bodyIndex, hkpConstraintQueryOut &out )
{
	hkpJacobianAddVelocitySchema* schema = reinterpret_cast<hkpJacobianAddVelocitySchema*>( out.m_jacobianSchemas.val() );
	schema->initAddVelocity( deltaVel, bodyIndex );
	out.m_jacobianSchemas = reinterpret_cast<hkpJacobianSchema*>( schema + 1 );
}
extern "C" {
void __cdecl hkSolverBuildJacobianFromAtomsNotContact( const hkpConstraintAtom* atoms, int sizeOfAllAtoms, const hkpConstraintQueryIn &in, hkpConstraintQueryOut &out );
}

// ---------------------------------------------------------------- schema helpers

class hkpJacobianHeaderSchema
{
	public:
		__forceinline void initHeader( class hkpConstraintInstance* instance, int bodyAIndex, int bodyBIndex, hkpSolverResults* sr, int solverResultStriding )
		{
			hkpJacobianSchema::setType( reinterpret_cast<hkpJacobianSchema*>( this ), hkpJacobianSchema::SCHEMA_TYPE_HEADER );
			m_bodyAIndex = hkUint16(bodyAIndex);
			m_bodyBIndex = hkUint16(bodyBIndex);
			m_solverResultsBase = sr;
			m_constraintInstance = instance;
			m_solverResultStriding = hkUint8(solverResultStriding);
		}
		hkUint8 m_type;
		hkUint8 m_solverResultStriding;
		hkUint16 m_padding;
		hkUint16 m_bodyAIndex;
		hkUint16 m_bodyBIndex;
		hkpSolverResults* m_solverResultsBase;
		class hkpConstraintInstance* m_constraintInstance;
};

// FUN_009fc3a0: header writer (in arrives in ecx, out in edx when it stays a call).
static inline void __cdecl hkInitHeader( const hkpConstraintQueryIn& in, hkpSolverResults* results, int resultStriding, hkpConstraintQueryOut& out )
{
	hkpJacobianHeaderSchema* hs = reinterpret_cast<hkpJacobianHeaderSchema*>( out.m_jacobianSchemas.val() );
	hs->initHeader( in.m_constraintInstance, in.m_accumulatorAIndex, in.m_accumulatorBIndex, results, resultStriding );
	out.m_jacobianSchemas = reinterpret_cast<hkpJacobianSchema*>( hs + 1 );
}

static __forceinline void __cdecl _hkBeginConstraints( const hkpConstraintQueryIn& in, hkpConstraintQueryOut& out, hkpSolverResults* sr, int solverResultStriding )
{
	hkpJacobianHeaderSchema* hs = reinterpret_cast<hkpJacobianHeaderSchema*>( out.m_jacobianSchemas.val() );
	hs->initHeader( in.m_constraintInstance, in.m_accumulatorAIndex, in.m_accumulatorBIndex, sr, solverResultStriding );
	out.m_jacobianSchemas = reinterpret_cast<hkpJacobianSchema*>( hs + 1 );
}

static __forceinline void __cdecl hkBeginConstraints( const hkpConstraintQueryIn& in, hkpConstraintQueryOut& out, hkpSolverResults* sr, int solverResultStriding )
{
	_hkBeginConstraints( in, out, sr, solverResultStriding );
	hkJacobianBuilder::initBuilder( in.m_bodyA, in.m_bodyB, in.m_substepInvDeltaTime );
}

// Stand-in, used by the mass changer only: in this build copy-constructing a velocity accumulator is an out-of-line
// call (FUN_00a00c20), which needs a vector class with a user-written copy constructor. The pack's vector class has
// none, so its accumulator is copied inline. Assignment (FUN_00a00cf0, moving surface) needs no stand-in: it is the
// compiler-generated operator of the pack's own class.
struct hkpVelocityAccumulatorCopy
{
	hkpVelocityAccumulatorCopy() {}
	hkpVelocityAccumulatorCopy( const hkpVelocityAccumulator& other );
	hkpVelocityAccumulator m_accumulator;
};

static __forceinline void __cdecl hkUndoBeginConstraints( hkpConstraintQueryOut& out )
{
	out.m_jacobianSchemas = hkAddByteOffset( out.m_jacobianSchemas.val(), -int(sizeof(hkpJacobianHeaderSchema)) );
}


// _modulo3Table holds byte offsets of the columns (0, 16, 32, 0, 16, 32), not column indices.

// ---------------------------------------------------------------- atom builders

static __forceinline void __cdecl callBridgeFromAtom( const hkpBridgeConstraintAtom& atom, const hkpConstraintQueryIn& in, hkTransform& baseA, hkTransform& baseB, hkpConstraintQueryOut& out )
{
	hkUndoBeginConstraints( out );
	atom.m_buildJacobianFunc( atom.m_constraintData, in, out );
}

static __forceinline void __cdecl setLocalTransform( const hkTransform& baseIn, const hkTransform& transform, hkTransform& baseOut )
{
	hkVector4Util::rotatePoints( baseIn.getRotation(), &transform.getColumn(0), 4, &baseOut.getColumn(0) );
	baseOut.getTranslation().add4( baseIn.getTranslation() );
}

static __forceinline void __cdecl setLocalTransformsFromAtom( const hkpSetLocalTransformsConstraintAtom& atom, const hkpConstraintQueryIn& in, hkTransform& baseA, hkTransform& baseB, const hkpConstraintQueryOut& noOut )
{
	setLocalTransform( *in.m_transformA.val(), atom.m_transformA, baseA );
	setLocalTransform( *in.m_transformB.val(), atom.m_transformB, baseB );
}

static __forceinline void __cdecl setLocalTranslationsFromAtom( const hkpSetLocalTranslationsConstraintAtom& atom, const hkpConstraintQueryIn& in, hkTransform& baseA, hkTransform& baseB, const hkpConstraintQueryOut& noOut )
{
	baseA.getTranslation()._setTransformedPos( *in.m_transformA.val(), atom.m_translationA );
	baseB.getTranslation()._setTransformedPos( *in.m_transformB.val(), atom.m_translationB );
}

static __forceinline void __cdecl setLocalRotationsFromAtom( const hkpSetLocalRotationsConstraintAtom& atom, const hkpConstraintQueryIn& in, hkTransform& baseA, hkTransform& baseB, const hkpConstraintQueryOut& noOut )
{
	hkVector4Util::rotatePoints( in.m_transformA->getRotation(), &atom.m_rotationA.getColumn(0), 4, &baseA.getColumn(0) );
	hkVector4Util::rotatePoints( in.m_transformB->getRotation(), &atom.m_rotationB.getColumn(0), 4, &baseB.getColumn(0) );
}

void __cdecl buildJacobianFromBallSocketAtom( const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out );

static __forceinline void __cdecl buildJacobianFromStiffSpringAtom( const hkpStiffSpringConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	hkp1dLinearBilateralConstraintInfo bp;
	bp.m_pivotA = baseA.getTranslation();
	bp.m_pivotB = baseB.getTranslation();
	hkVector4 sepDist; sepDist.setSub4( bp.m_pivotA, bp.m_pivotB );
	hkReal distance = sepDist.normalizeWithLength3();
	if ( distance > 0.0f )
	{
		bp.m_constrainedDofW = sepDist;
	}
	else
	{
		bp.m_constrainedDofW = hkTransform::getIdentity().getColumn(0);
		distance = 0.0f;
	}
	hkReal customRhs = atom.m_length - distance;
	hk1dLinearBilateralConstraintBuildJacobianWithCustomRhs( bp, in, out, customRhs );
}

static __forceinline void __cdecl buildJacobianFromLinAtom( const hkpLinConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	hkp1dLinearBilateralConstraintInfo bp;
	bp.m_pivotA = baseA.getTranslation();
	bp.m_pivotB = baseB.getTranslation();
	bp.m_constrainedDofW = baseB.getRotation().getColumn( atom.m_axisIndex );
	hk1dLinearBilateralConstraintBuildJacobian( bp, in, out );
}

static __forceinline void __cdecl buildJacobianFromLinSoftAtom( const hkpLinSoftConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	hkp1dLinearBilateralUserTauConstraintInfo bp;
	bp.m_pivotA = baseA.getTranslation();
	bp.m_pivotB = baseB.getTranslation();
	bp.m_constrainedDofW = baseB.getRotation().getColumn( atom.m_axisIndex );
	bp.m_tau = atom.m_tau;
	bp.m_damping = atom.m_damping;
	hk1dLinearBilateralConstraintUserTauBuildJacobian( bp, in, out );
}

static __forceinline void __cdecl buildJacobianFromLinLimitAtom( const hkpLinLimitConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	hkp1dLinearLimitInfo bpLim;
	bpLim.m_pivotA = baseA.getTranslation();
	bpLim.m_pivotB = baseB.getTranslation();
	bpLim.m_min = atom.m_min;
	bpLim.m_max = atom.m_max;
	bpLim.m_constrainedDofW = baseB.getRotation().getColumn( atom.m_axisIndex );
	hk1dLinearLimitBuildJacobian( bpLim, in, out );
}

static __forceinline void __cdecl buildJacobianFromLinFrictionAtom( const hkpLinFrictionConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	if ( atom.m_isEnabled && atom.m_maxFrictionForce > 0.0f )
	{
		hkp1dLinearFrictionInfo lfi;
		lfi.m_pivot = baseA.getTranslation();
		lfi.m_constrainedDofW = baseB.getRotation().getColumn( atom.m_frictionAxis );
		lfi.m_maxFrictionForce = atom.m_maxFrictionForce;
		lfi.m_lastSolverResults = static_cast<hkpSolverResults*>( in.m_constraintRuntime.val() );
		hk1dLinearFrictionBuildJacobian( lfi, in, out );
	}
	else
	{
		hkSkipSolverResults( 1, out );
	}
}

static __forceinline void __cdecl buildJacobianFromLinMotorAtom( const hkpLinMotorConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	hkUint8* initialized = static_cast<hkUint8*>( hkAddByteOffset( in.m_constraintRuntime.val(), atom.m_initializedOffset ) );
	hkReal* previousTargetPosition = static_cast<hkReal*>( hkAddByteOffset( in.m_constraintRuntime.val(), atom.m_previousTargetPositionOffset ) );
	if ( atom.m_isEnabled && atom.m_motor )
	{
		hkpConstraintMotor* motor = atom.m_motor;
		if ( !*initialized )
		{
			*previousTargetPosition = atom.m_targetPosition;
		}
		class hkp2Lin2AngJacobian* jac = reinterpret_cast<class hkp2Lin2AngJacobian*>( out.m_jacobianSchemas.val() );
		hkpConstraintMotorInput motorIn;
		hk1dLinearVelocityMotorBeginJacobian( baseB.getRotation().getColumn( atom.m_motorAxis ), baseA.getTranslation(), in, jac, motorIn );
		hkVector4 pivotDiff; pivotDiff.setSub4( baseA.getTranslation(), baseB.getTranslation() );
		motorIn.m_stepInfo = &in;
		motorIn.m_lastResults = static_cast<hkpSolverResults*>( in.m_constraintRuntime.val() )[0];
		motorIn.m_deltaTarget = atom.m_targetPosition - *previousTargetPosition;
		motorIn.m_positionError = *previousTargetPosition - pivotDiff.dot3( baseB.getRotation().getColumn( atom.m_motorAxis ) );
		hkpConstraintMotorOutput motorOut;
		hkCalcMotorData( motor, &motorIn, &motorOut );
		hk1dLinearVelocityMotorCommitJacobian( motorOut, in, jac, out );
		if ( *previousTargetPosition != atom.m_targetPosition || !*initialized )
		{
			*previousTargetPosition = atom.m_targetPosition;
			*initialized = 1;
		}
	}
	else
	{
		hkSkipSolverResults( 1, out );
	}
}

static __forceinline void __cdecl buildJacobianFrom2dAngAtom( const hkp2dAngConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	int freeAxis = atom.m_freeRotationAxis;
	int otherAxis0 = _modulo3Table[atom.m_freeRotationAxis + 1];
	int otherAxis1 = _modulo3Table[atom.m_freeRotationAxis + 2];
	hkp1dAngularBilateralConstraintInfo bp;
	bp.m_zeroErrorAxisAinW = baseA.getRotation().getColumn( freeAxis );
	bp.m_perpZeroErrorAxisBinW = *hkAddByteOffsetConst( &baseB.getRotation().getColumn(0), otherAxis0 );
	bp.m_constrainedDofW = *hkAddByteOffsetConst( &baseB.getRotation().getColumn(0), otherAxis1 );
	hk1dAngularBilateralConstraintBuildJacobian( bp, in, out );
	bp.m_perpZeroErrorAxisBinW = *hkAddByteOffsetConst( &baseB.getRotation().getColumn(0), otherAxis1 );
	bp.m_constrainedDofW.setNeg4( *hkAddByteOffsetConst( &baseB.getRotation().getColumn(0), otherAxis0 ) );
	hk1dAngularBilateralConstraintBuildJacobian( bp, in, out );
}

static __forceinline void __cdecl buildJacobianFromAngAtom( const hkpAngConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	for ( int i = atom.m_firstConstrainedAxis; i < atom.m_firstConstrainedAxis + atom.m_numConstrainedAxes; i++ )
	{
		hkp1dAngularBilateralConstraintInfo bp;
		bp.m_constrainedDofW = *hkAddByteOffsetConst( &baseA.getRotation().getColumn(0), _modulo3Table[i] );
		bp.m_zeroErrorAxisAinW = *hkAddByteOffsetConst( &baseA.getRotation().getColumn(0), _modulo3Table[i + 1] );
		bp.m_perpZeroErrorAxisBinW = *hkAddByteOffsetConst( &baseB.getRotation().getColumn(0), _modulo3Table[i + 2] );
		hk1dAngularBilateralConstraintBuildJacobian( bp, in, out );
	}
}

static __forceinline void __cdecl buildJacobianFromAngFrictionAtom( const hkpAngFrictionConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	if ( atom.m_isEnabled && atom.m_maxFrictionTorque != 0.0f )
	{
		hkp1dAngularFrictionInfo afi;
		afi.m_constrainedDofW = &baseA.getRotation().getColumn( atom.m_firstFrictionAxis );
		afi.m_maxFrictionTorque = atom.m_maxFrictionTorque;
		afi.m_numFriction = atom.m_numFrictionAxes;
		afi.m_lastSolverResults = static_cast<hkpSolverResults*>( in.m_constraintRuntime.val() );
		hk1dAngularFrictionBuildJacobian( afi, in, out );
	}
	else
	{
		hkSkipSolverResults( atom.m_numFrictionAxes, out );
	}
}

static __forceinline void __cdecl hkSolverBuildJacobianFromAtoms( const hkpConstraintAtom* atoms, int sizeOfAllAtoms, const hkpConstraintQueryIn &in, hkpConstraintQueryOut &out )
{
	if ( atoms->m_type == hkpConstraintAtom::TYPE_CONTACT )
	{
		const hkpSimpleContactConstraintAtom* contactAtom = static_cast<const hkpSimpleContactConstraintAtom*>( atoms );
		hkBool writeHeaderSchema = true;
		hkSimpleContactConstraintDataBuildJacobian( contactAtom, in, writeHeaderSchema, out );
	}
	else
	{
		hkSolverBuildJacobianFromAtomsNotContact( atoms, sizeOfAllAtoms, in, out );
	}
}

static __forceinline void __cdecl buildJacobianFromSoftContactModifier( const hkpSoftContactModifierConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	hkUndoBeginConstraints( out );
	hkpConstraintQueryIn modifiedIn;
	hkReal tau = atom.m_tau;
	modifiedIn = in;
	modifiedIn.m_virtMassFactor = in.m_virtMassFactor * tau;
	modifiedIn.m_tau = in.m_tau * tau;
	modifiedIn.m_damping = in.m_damping * tau;
	const hkpConstraintAtom* child = atom.m_child;
	while ( child->isModifierType() )
	{
		const hkpModifierConstraintAtom* modifier = static_cast<const hkpModifierConstraintAtom*>( child );
		child = modifier->m_child;
	}
	const hkpSimpleContactConstraintAtom* contactAtom = static_cast<const hkpSimpleContactConstraintAtom*>( child );
	int numContactPoints = contactAtom->m_numContactPoints;
	hkContactPoint* cp = contactAtom->getContactPoints();
	hkpContactPointProperties* cpp = contactAtom->getContactPointPropertiesStream();
	int striding = contactAtom->m_contactPointPropertiesStriding;
	for ( int i = 0; i < numContactPoints; i++ )
	{
		hkReal distance = cp[i].getDistance();
		hkReal currentMaxImpulse = cpp->m_maxImpulse;
		hkReal microStepDeltaTime = in.m_microStepDeltaTime.val();
		hkReal substepDeltaTime = in.m_substepDeltaTime.val();
		hkReal maxImpulse = atom.m_maxAcceleration * microStepDeltaTime * substepDeltaTime / atom.m_tau;
		if ( currentMaxImpulse > distance + maxImpulse )
		{
			cpp->m_maxImpulse = distance + maxImpulse;
		}
		cpp = hkAddByteOffset( cpp, striding );
	}
	hkSolverBuildJacobianFromAtoms( atom.m_child, atom.m_childSize, modifiedIn, out );
}

static __forceinline void __cdecl buildJacobianFromMassChangerModifier( const hkpMassChangerModifierConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	hkReal factorA = atom.m_factorA;
	hkReal factorB = atom.m_factorB;
	hkpConstraintQueryIn modifiedIn = in;
	const hkpConstraintAtom* child = atom.m_child;
	int childSize = atom.m_childSize;
	hkUndoBeginConstraints( out );
	hkInitHeader( modifiedIn, 0, 0, out );
	hkVector4 invMassesA = in.m_bodyA->m_invMasses;
	hkVector4 invMassesB = in.m_bodyB->m_invMasses;
	hkpVelocityAccumulatorCopy accA( *in.m_bodyA );
	hkpVelocityAccumulatorCopy accB( *in.m_bodyB );
	modifiedIn.m_bodyA = &accA.m_accumulator;
	modifiedIn.m_bodyB = &accB.m_accumulator;
	hkVector4 newInvMassesA; newInvMassesA.setMul4( factorA, invMassesA );
	hkVector4 newInvMassesB; newInvMassesB.setMul4( factorB, invMassesB );
	accA.m_accumulator.m_invMasses.mul4( factorA );
	accB.m_accumulator.m_invMasses.mul4( factorB );
	hkSetInvMassBuildJacobian( newInvMassesA, newInvMassesB, out );
	hkSolverBuildJacobianFromAtoms( child, childSize, modifiedIn, out );
	hkSetInvMassBuildJacobian( invMassesA, invMassesB, out );
}

static __forceinline void __cdecl buildJacobianFromViscousSurfaceModifier( const hkpViscousSurfaceModifierConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	hkUndoBeginConstraints( out );
	hkpConstraintQueryIn modifiedIn = in;
	const hkpConstraintAtom* child = atom.m_child;
	while ( child->isModifierType() )
	{
		const hkpModifierConstraintAtom* modifier = static_cast<const hkpModifierConstraintAtom*>( child );
		child = modifier->m_child;
	}
	hkpSimpleContactConstraintAtom* contactAtom = const_cast<hkpSimpleContactConstraintAtom*>( static_cast<const hkpSimpleContactConstraintAtom*>( child ) );
	hkSimpleContactConstraintDataAddALittleSurfaceViscosity( &contactAtom->m_info );
	hkSolverBuildJacobianFromAtoms( atom.m_child, atom.m_childSize, modifiedIn, out );
}

static __forceinline void __cdecl buildJacobianFromMovingSurfaceModifier( const hkpMovingSurfaceModifierConstraintAtom& atom, hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	hkVector4 velocity = atom.m_velocity;
	hkpConstraintQueryIn originalIn = in;
	const hkpConstraintAtom* child = atom.m_child;
	const hkpSimpleContactConstraintAtom* contactAtom = static_cast<const hkpSimpleContactConstraintAtom*>( child );
	hkUndoBeginConstraints( out );
	hkpContactPointProperties* cpp = contactAtom->getContactPointPropertiesStream();
	int striding = contactAtom->m_contactPointPropertiesStriding;
	hkpSolverResults* sr = cpp;
	hkInitHeader( in, sr, striding, out );
	hkBool bodyAIsFixed = ( in.m_accumulatorAIndex == 0 );
	hkpVelocityAccumulator acc;
	if ( !bodyAIsFixed )
	{
		acc = *in.m_bodyA;
		in.m_bodyA = &acc;
	}
	else
	{
		acc = *in.m_bodyB;
		in.m_bodyB = &acc;
		velocity.setNeg3( velocity );
	}
	const hkVector4 normal = contactAtom->getContactPoints()->getSeparatingNormal();
	hkSimdReal dot = normal.dot3( velocity );
	hkVector4 deltaVel; deltaVel = velocity;
	deltaVel.subMul4( dot, normal );
	deltaVel.setNeg4( deltaVel );
	hkAddVelocityBuildJacobian( deltaVel, bodyAIsFixed, out );
	acc.m_linearVel.add4( deltaVel );
	hkBool writeHeaderSchema = false;
	const hkpSimpleContactConstraintAtom* childContactAtom = static_cast<const hkpSimpleContactConstraintAtom*>( child );
	hkSimpleContactConstraintDataBuildJacobian( childContactAtom, originalIn, writeHeaderSchema, out );
	deltaVel.setNeg4( deltaVel );
	hkAddVelocityBuildJacobian( deltaVel, bodyAIsFixed, out );
}

static __forceinline void __cdecl buildJacobianFromIgnoreModifier( const hkpIgnoreModifierConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	hkUndoBeginConstraints( out );
}

struct hkpAngLimitConstraintAtom : public hkpConstraintAtom
{
	hkUint8 m_isEnabled;
	hkUint8 m_limitAxis;
	hkReal m_minAngle;
	hkReal m_maxAngle;
	hkReal m_angularLimitsTauFactor;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 1; }
};

struct hkpTwistLimitConstraintAtom : public hkpConstraintAtom
{
	hkUint8 m_isEnabled;
	hkUint8 m_twistAxis;
	hkUint8 m_refAxis;
	hkReal m_minAngle;
	hkReal m_maxAngle;
	hkReal m_angularLimitsTauFactor;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 1; }
};

struct hkpConeLimitConstraintAtom : public hkpConstraintAtom
{
	enum MeasurementMode { ZERO_WHEN_VECTORS_ALIGNED = 0, ZERO_WHEN_VECTORS_PERPENDICULAR = 1 };
	hkUint8 m_isEnabled;
	hkUint8 m_twistAxisInA;
	hkUint8 m_refAxisInB;
	hkEnum<MeasurementMode, hkUint8> m_angleMeasurementMode;
	hkUint8 m_memOffsetToAngleOffset;
	hkReal m_minAngle;
	hkReal m_maxAngle;
	hkReal m_angularLimitsTauFactor;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 1; }
};

struct hkpAngMotorConstraintAtom : public hkpConstraintAtom
{
	hkBool m_isEnabled;
	hkUint8 m_motorAxis;
	hkInt16 m_initializedOffset;
	hkInt16 m_previousTargetAngleOffset;
	hkInt16 m_correspondingAngLimitSolverResultOffset;
	hkReal m_targetAngle;
	class hkpConstraintMotor* m_motor;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 1; }
};

class hkp1dAngularLimitInfo
{
	public:
		hkp1dAngularLimitInfo() {}
		hkVector4 m_constrainedDofW;
		hkPadSpu<hkReal> m_min;
		hkPadSpu<hkReal> m_max;
		hkPadSpu<hkReal> m_computedAngle;
		hkPadSpu<hkReal> m_tau;
};

class hkpJacobian1dAngularLimitsSchema
{
	public:
		__forceinline void init1dAngularLimits( const hkp2AngJacobian& jac, hkReal lowerLimit, hkReal upperLimit, hkReal tau )
		{
			m_lowerLimit = lowerLimit;
			m_upperLimit = upperLimit;
			m_tau = tau;
			hkpJacobianSchema::setType( reinterpret_cast<hkpJacobianSchema*>( this ), hkpJacobianSchema::SCHEMA_TYPE_1D_ANGULAR_LIMITS );
		}
		hkp2AngJacobian m_jac;
		hkReal m_lowerLimit;
		hkReal m_upperLimit;
		hkReal m_tau;
		hkReal m_padding;
};

static __forceinline void __cdecl hk1dAngularLimitBuildJacobian( const hkp1dAngularLimitInfo& info, const hkpConstraintQueryIn &in, hkpConstraintQueryOut &out )
{
	hkp2AngJacobian* jac = reinterpret_cast<hkp2AngJacobian*>( out.m_jacobianSchemas.val() );
	hkReal tau = info.m_tau;
	hkJacobianBuilder::buildAngularBegin( in.m_bodyA, in.m_bodyB, info.m_constrainedDofW, tau, *jac );
	hkReal f = -in.m_substepInvDeltaTime;
	hkReal lowerLimit = info.m_min * f * tau;
	hkReal upperLimit = info.m_max * f * tau;
	hkReal rhs = f * info.m_computedAngle;
	hkJacobianBuilder::buildAngularEnd( *jac, rhs, 1.0f );
	hkpJacobian1dAngularLimitsSchema* schema = reinterpret_cast<hkpJacobian1dAngularLimitsSchema*>( out.m_jacobianSchemas.val() );
	out.m_jacobianSchemas = reinterpret_cast<hkpJacobianSchema*>( schema + 1 );
	schema->init1dAngularLimits( *jac, lowerLimit, upperLimit, tau );
}

static __forceinline hkResult __cdecl buildJacobianFromAngLimitAtom( const hkpAngLimitConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkp1dAngularLimitInfo& ali, hkpConstraintQueryOut& out )
{
	if ( atom.m_isEnabled )
	{
		const int limitAxis = atom.m_limitAxis;
		const int perpZeroAxis1 = _modulo3Table[atom.m_limitAxis + 1];
		const int perpZeroAxis2 = _modulo3Table[atom.m_limitAxis + 2];
		ali.m_tau = in.m_tau * atom.m_angularLimitsTauFactor;
		ali.m_constrainedDofW = baseA.getRotation().getColumn( limitAxis );
		hkVector4 zeroErrorAxisAinW; zeroErrorAxisAinW = *hkAddByteOffsetConst( &baseA.getRotation().getColumn(0), perpZeroAxis1 );
		hkVector4 negZeroErrorAxisBinW; negZeroErrorAxisBinW = *hkAddByteOffsetConst( &baseB.getRotation().getColumn(0), perpZeroAxis2 );
		hkVector4 constraintDofInB; constraintDofInB = baseB.getRotation().getColumn( limitAxis );
		ali.m_min = atom.m_minAngle;
		ali.m_max = atom.m_maxAngle;
		hkVector4 cosCheck; cosCheck.setCross( negZeroErrorAxisBinW, constraintDofInB );
		hkReal cosx = cosCheck.dot3( zeroErrorAxisAinW );
		ali.m_computedAngle = hkMath_atan2fApproximation( negZeroErrorAxisBinW.dot3( zeroErrorAxisAinW ), cosx );
		{
			hkReal lastAngle = static_cast<hkpSolverResults*>( in.m_constraintRuntime.val() )->m_internalSolverData * -1.0f;
			while ( lastAngle - ali.m_computedAngle > 3.14159265358979f )
			{
				ali.m_computedAngle = ali.m_computedAngle + 2.0f * 3.14159265358979f;
			}
			while ( ali.m_computedAngle - lastAngle > 3.14159265358979f )
			{
				ali.m_computedAngle = ali.m_computedAngle - 2.0f * 3.14159265358979f;
			}
		}
		return HK_SUCCESS;
	}
	else
	{
		return HK_FAILURE;
	}
}

static __forceinline hkResult __cdecl bulidJacobianFromTwistLimitAtom( const hkpTwistLimitConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkp1dAngularLimitInfo& ali, hkpConstraintQueryOut& out )
{
	ali.m_constrainedDofW = baseA.getRotation().getColumn( atom.m_twistAxis );
	ali.m_min = atom.m_minAngle;
	ali.m_max = atom.m_maxAngle;
	hkPadSpu<hkReal> tauMax;
	hkInternalConstraintUtils_inlineCalcRelativeAngle( baseA.getRotation().getColumn( atom.m_twistAxis ), baseB.getRotation().getColumn( atom.m_twistAxis ),
		baseA.getRotation().getColumn( atom.m_refAxis ), baseB.getRotation().getColumn( atom.m_refAxis ),
		ali.m_constrainedDofW, ali.m_computedAngle, tauMax );
	ali.m_tau = in.m_tau * atom.m_angularLimitsTauFactor * tauMax * tauMax;
	return HK_SUCCESS;
}

static __forceinline hkResult __cdecl buildJacobianFromConeLimitAtom( const hkpConeLimitConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkp1dAngularLimitInfo& ali, hkpConstraintQueryOut& out )
{
	static const hkReal flipSignOrNot[2] = { 1.0f, -1.0f };
	static const hkReal shiftResultOrNot[2] = { 0.0f, 1.57079632679f };
	const hkVector4& twistAxisAinWorld = baseA.getRotation().getColumn( atom.m_twistAxisInA );
	const hkVector4& refAxisBinWorld = baseB.getRotation().getColumn( atom.m_refAxisInB );
	hkVector4 constraintV; constraintV.setCross( twistAxisAinWorld, refAxisBinWorld );
	hkReal lenSqrd = constraintV.lengthSquared3();
	if ( lenSqrd < 1.192092896e-07f )
	{
		return HK_FAILURE;
	}
	hkReal sinAngle = JacobianMath::hkMath::sqrt( lenSqrd );
	hkReal cosAngle = twistAxisAinWorld.dot3( refAxisBinWorld );
	hkReal angle = hkMath_atan2fApproximation( sinAngle, cosAngle ) * flipSignOrNot[atom.m_angleMeasurementMode] + shiftResultOrNot[atom.m_angleMeasurementMode];
	hkReal flipAxis = flipSignOrNot[1 - atom.m_angleMeasurementMode];
	ali.m_tau = in.m_tau * atom.m_angularLimitsTauFactor;
	constraintV.mul4( JacobianMath::hkMath::sqrtInverse( lenSqrd ) );
	ali.m_constrainedDofW.setMul4( flipAxis, constraintV );
	ali.m_computedAngle = angle;
	ali.m_min = atom.m_minAngle;
	ali.m_max = atom.m_maxAngle;
	return HK_SUCCESS;
}

static __forceinline hkResult __cdecl buildJacobianFromStabilizedConeLimitAtom( const hkpConeLimitConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkp1dAngularLimitInfo& ali, hkpConstraintQueryOut& out )
{
	hkResult result = buildJacobianFromConeLimitAtom( atom, in, baseA, baseB, ali, out );
	if ( result == HK_SUCCESS && atom.m_memOffsetToAngleOffset > 1 )
	{
		hkReal coneAngleOffset = *static_cast<hkReal*>( hkAddByteOffset( in.m_constraintRuntime.val(), atom.m_memOffsetToAngleOffset ) );
		hkReal estimatedAngle = -static_cast<hkpSolverResults*>( in.m_constraintRuntime.val() )->m_internalSolverData;
		hkReal angle = ali.m_computedAngle - coneAngleOffset;
		const hkReal relaxationFactor = 0.5f;
		const hkReal offsetFactor = 0.05f;
		const hkReal secondOrderError = estimatedAngle - angle;
		hkReal distanceOffsetRelaxation = in.m_frameDeltaTime * relaxationFactor;
		const hkReal maxDiff = hkMath::max2( coneAngleOffset * offsetFactor, distanceOffsetRelaxation );
		coneAngleOffset = coneAngleOffset - maxDiff;
		angle = angle + maxDiff;
		const hkReal limitFactor = 0.5f;
		if ( -secondOrderError > hkReal( ( maxDiff * 2.0f + distanceOffsetRelaxation ) * limitFactor ) && estimatedAngle != 0.0f )
		{
			coneAngleOffset = coneAngleOffset - secondOrderError;
			angle = angle + secondOrderError;
		}
		coneAngleOffset = hkMath::max2( coneAngleOffset, 1.192092896e-07f );
		*static_cast<hkReal*>( hkAddByteOffset( in.m_constraintRuntime.val(), atom.m_memOffsetToAngleOffset ) ) = coneAngleOffset;
		ali.m_computedAngle = angle;
	}
	return result;
}

// The motor commit helper as the library's unoptimised build shows it: the right hand side is one product of the two padded values.
static __forceinline void __cdecl hk1dAngularVelocityMotorCommitJacobianInline( hkp1dConstraintMotorInfo& info, const hkpConstraintQueryIn &in, hkp2AngJacobian& jac, hkpConstraintQueryOut& out )
{
	hkReal rhs = info.m_targetPosition * in.m_substepInvDeltaTime;
	jac.setAngularRhs( rhs );
	hkpJacobian1dAngularMotorSchema* schema = static_cast<hkpJacobian1dAngularMotorSchema*>( static_cast<void*>( out.m_jacobianSchemas.val() ) );
	hkp1dMotorSolverInfo& motorInfo = schema->init1dAngularMotor( jac );
	motorInfo.m_maxImpulsePerSubstep = info.m_maxForce * in.m_microStepDeltaTime;
	motorInfo.m_minImpulsePerSubstep = info.m_minForce * in.m_microStepDeltaTime;
	motorInfo.m_velocity = info.m_targetVelocity;
	motorInfo.m_tau = info.m_tau;
	motorInfo.m_damping = info.m_damping;
	out.m_jacobianSchemas = reinterpret_cast<hkpJacobianSchema*>( schema + 1 );
}

static __forceinline void __cdecl buildJacobianFromAngMotorAtom( const hkpAngMotorConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	hkUint8* initialized = static_cast<hkUint8*>( hkAddByteOffset( in.m_constraintRuntime.val(), atom.m_initializedOffset ) );
	hkReal* previousTargetAngle = static_cast<hkReal*>( hkAddByteOffset( in.m_constraintRuntime.val(), atom.m_previousTargetAngleOffset ) );
	if ( atom.m_motor && atom.m_isEnabled )
	{
		hkpConstraintMotor* motor = atom.m_motor;
		const int axis = atom.m_motorAxis;
		const int perpAxis1 = _modulo3Table[atom.m_motorAxis + 1];
		const int perpAxis2 = _modulo3Table[atom.m_motorAxis + 2];
		const hkVector4& perpA = *hkAddByteOffsetConst( &baseA.getRotation().getColumn(0), perpAxis1 );
		const hkVector4& perpB = *hkAddByteOffsetConst( &baseB.getRotation().getColumn(0), perpAxis2 );
		hkReal sinx = perpB.dot3( perpA );
		hkVector4 cosCheck; cosCheck.setCross( perpB, baseB.getRotation().getColumn( axis ) );
		hkReal cosx = cosCheck.dot3( perpA );
		hkReal computedAngle = hkMath_atan2fApproximation( sinx, cosx );
		if ( atom.m_correspondingAngLimitSolverResultOffset )
		{
			hkReal lastAngle = static_cast<hkpSolverResults*>( hkAddByteOffset( in.m_constraintRuntime.val(), atom.m_correspondingAngLimitSolverResultOffset ) )->m_internalSolverData * -1.0f;
			while ( (lastAngle - computedAngle) > 3.14159265358979f )
			{
				computedAngle = computedAngle + 2.0f * 3.14159265358979f;
			}
			while ( (computedAngle - lastAngle) > 3.14159265358979f )
			{
				computedAngle = computedAngle - 2.0f * 3.14159265358979f;
			}
		}
		if ( !*initialized )
		{
			*previousTargetAngle = computedAngle;
		}
		hkpConstraintMotorInput motorIn;
		hkp2AngJacobian* jac = reinterpret_cast<hkp2AngJacobian*>( out.m_jacobianSchemas.val() );
		_hk1dAngularVelocityMotorBeginJacobian( baseA.getRotation().getColumn( atom.m_motorAxis ), in, *jac, motorIn );
		motorIn.m_stepInfo = &in;
		motorIn.m_lastResults = static_cast<hkpSolverResults*>( in.m_constraintRuntime.val() )[0];
		motorIn.m_deltaTarget = atom.m_targetAngle - *previousTargetAngle;
		motorIn.m_positionError = *previousTargetAngle - computedAngle;
		hkpConstraintMotorOutput motorOut;
		hkCalcMotorData( motor, &motorIn, &motorOut );
		hk1dAngularVelocityMotorCommitJacobianInline( motorOut, in, *jac, out );
		if ( *previousTargetAngle != atom.m_targetAngle || !*initialized )
		{
			*previousTargetAngle = atom.m_targetAngle;
			*initialized = 1;
		}
	}
	else
	{
		hkSkipSolverResults( 1, out );
	}
}

static __forceinline void __cdecl buildJacobianFromRagdollMotorAtom( const hkpRagdollMotorConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	hkUint8* initialized = static_cast<hkUint8*>( hkAddByteOffset( in.m_constraintRuntime.val(), atom.m_initializedOffset ) );
	hkReal* previousTargetAngles = static_cast<hkReal*>( hkAddByteOffset( in.m_constraintRuntime.val(), atom.m_previousTargetAnglesOffset ) );
	if ( atom.m_isEnabled )
	{
		hkMatrix3 targetFrameW;
		targetFrameW._setMul( in.m_transformB->getRotation(), atom.m_targetFrameAinB );
		hkpConstraintMotorInput motorIn;
		motorIn.m_stepInfo = &in;
		const int twistAxisIndex[3] = { 0, 1, 2 };
		const int planeAxisIndex[3] = { 1, 0, 0 };
		for ( int i = 0; i < 3; i++ )
		{
			if ( atom.m_motors[i] )
			{
				hkpConstraintMotor* motor = atom.m_motors[i];
				hkVector4 axis;
				hkPadSpu<hkReal> currentAngle;
				hkPadSpu<hkReal> targetAngle;
				hkPadSpu<hkReal> tauMax;
				hkInternalConstraintUtils_inlineCalcRelativeAngle( baseA.getColumn( twistAxisIndex[i] ), baseB.getColumn( twistAxisIndex[i] ), baseA.getColumn( planeAxisIndex[i] ), baseB.getColumn( planeAxisIndex[i] ), axis, currentAngle, tauMax );
				hkInternalConstraintUtils_inlineCalcRelativeAngle( targetFrameW.getColumn( twistAxisIndex[i] ), baseB.getColumn( twistAxisIndex[i] ), targetFrameW.getColumn( planeAxisIndex[i] ), baseB.getColumn( planeAxisIndex[i] ), axis, targetAngle, tauMax );
				if ( !initialized[i] )
				{
					previousTargetAngles[i] = currentAngle;
					initialized[i] = 1;
				}
				hkp2AngJacobian* jac = reinterpret_cast<hkp2AngJacobian*>( out.m_jacobianSchemas.val() );
				_hk1dAngularVelocityMotorBeginJacobian( axis, in, *jac, motorIn );
				motorIn.m_lastResults = static_cast<hkpSolverResults*>( in.m_constraintRuntime.val() )[i];
				motorIn.m_deltaTarget = targetAngle - previousTargetAngles[i];
				motorIn.m_positionError = previousTargetAngles[i] - currentAngle;
				hkpConstraintMotorOutput motorOut;
				hkCalcMotorData( motor, &motorIn, &motorOut );
				hk1dAngularVelocityMotorCommitJacobianInline( motorOut, in, *jac, out );
				if ( previousTargetAngles[i] != targetAngle )
				{
					previousTargetAngles[i] = targetAngle;
				}
			}
			else
			{
				hkSkipSolverResults( 1, out );
			}
		}
	}
	else
	{
		hkSkipSolverResults( 3, out );
	}
}


struct hkpPulleyConstraintAtom : public hkpConstraintAtom
{
	__declspec(align(16)) hkVector4 m_fixedPivotAinWorld;
	hkVector4 m_fixedPivotBinWorld;
	hkReal m_ropeLength;
	hkReal m_leverageOnBodyB;
	__forceinline hkpConstraintAtom* next() const { return const_cast<hkpConstraintAtom*>( static_cast<const hkpConstraintAtom*>( static_cast<const void*>(this+1) ) ); }
	__forceinline int numSolverResults() const { return 1; }
};

struct hkpPulleyConstraintInfo
{
	hkVector4 m_positionA;
	hkVector4 m_positionB;
	hkVector4 m_pulleyPivotA;
	hkVector4 m_pulleyPivotB;
	hkPadSpu<hkReal> m_ropeLength;
	hkPadSpu<hkReal> m_leverageOnBodyB;
};

class hkp2Lin2AngJacobian
{
	public:
		hkVector4 m_linear[2];
		hkVector4 m_angular[2];
		inline void setRHS( hkReal v ) { m_linear[0](3) = v; }
		inline void setInvJacDiag( hkReal v ) { m_angular[0](3) = v; }
		__forceinline hkReal getDiag( const hkpVelocityAccumulator& mA, const hkpVelocityAccumulator& mB, hkReal leverageRatio ) const
		{
			const hkp2Lin2AngJacobian& jac = *this;
			hkVector4 ang0; ang0.setMul4( jac.m_angular[0], jac.m_angular[0] );
			hkVector4 ang1; ang1.setMul4( jac.m_angular[1], jac.m_angular[1] );
			ang0.mul4( mA.m_invMasses );
			ang1.mul4( mB.m_invMasses );
			leverageRatio = leverageRatio * leverageRatio;
			ang0.add4( ang1 );
			hkReal lin = mA.m_invMasses(3) + mB.m_invMasses(3) * leverageRatio + 1.1920928955078125e-07;
			return ang0.horizontalAdd3() + lin;
		}
};

class hkpJacobian1dPulleySchema
{
	public:
		__forceinline void init1dPulleySchema( const hkp2Lin2AngJacobian& jac )
		{
			hkpJacobianSchema::setType( reinterpret_cast<hkpJacobianSchema*>( this ), hkpJacobianSchema::SCHEMA_TYPE_1D_PULLEY );
		}
		hkp2Lin2AngJacobian m_jac;
};

namespace hkJacobianBuilder2
{
	struct build2LinearAndRhsInfo
	{
		const hkpVelocityAccumulator* m_accumA;
		const hkpVelocityAccumulator* m_accumB;
		__declspec(align(16)) hkVector4 m_pivotA;
		hkVector4 m_pivotB;
		hkVector4 m_linearA;
		hkVector4 m_linearB;
		hkVector4 m_pulleyPivotA;
		hkVector4 m_pulleyPivotB;
		hkReal m_ropeLength;
		hkReal m_leverageRatio;
		hkReal m_rhsFactor;
		hkReal m_virtMassFactor;
	};

	__forceinline void __cdecl build2LinearAndRhs( const build2LinearAndRhsInfo& info, hkp2Lin2AngJacobian& jac )
	{
		hkVector4 direction1; direction1.setMul4( info.m_leverageRatio, info.m_linearB );
		jac.m_linear[0] = info.m_linearA;
		jac.m_linear[1] = direction1;
		hkVector4 massCenterRelative0; massCenterRelative0.setSub4( info.m_pivotA, info.m_accumA->getCenterOfMassInWorld() );
		hkVector4 massCenterRelative1; massCenterRelative1.setSub4( info.m_pivotB, info.m_accumB->getCenterOfMassInWorld() );
		hkVector4 cross0; cross0.setCross( massCenterRelative0, info.m_linearA );
		if ( info.m_accumA->m_matrixIsIdentity )
		{
			jac.m_angular[0] = cross0;
		}
		else
		{
			jac.m_angular[0]._setRotatedDir( info.m_accumA->getCoreFromWorldMatrix(), cross0 );
		}
		hkVector4 cross1; cross1.setCross( direction1, massCenterRelative1 );
		if ( info.m_accumB->m_matrixIsIdentity )
		{
			jac.m_angular[1] = cross1;
		}
		else
		{
			jac.m_angular[1]._setRotatedDir( info.m_accumB->getCoreFromWorldMatrix(), cross1 );
		}
		hkReal diag = jac.getDiag( *info.m_accumA, *info.m_accumB, info.m_leverageRatio );
		jac.setInvJacDiag( info.m_virtMassFactor / diag );
		hkVector4 diff; diff.setSub4( info.m_pulleyPivotA, info.m_pivotA );
		hkVector4 diff2; diff2.setSub4( info.m_pivotB, info.m_pulleyPivotB );
		hkReal error = diff.length3();
		error += diff2.length3() * info.m_leverageRatio;
		error -= info.m_ropeLength;
		hkReal rhs = error * info.m_rhsFactor;
		jac.setRHS( rhs );
	}
}

static __forceinline void __cdecl hkPulleyConstraintBuildJacobian( const hkpPulleyConstraintInfo& pulleyInput, const hkpConstraintQueryIn &in, hkpConstraintQueryOut &out )
{
	const hkpVelocityAccumulator* bodyA = in.m_bodyA;
	const hkpVelocityAccumulator* bodyB = in.m_bodyB;
	hkp2Lin2AngJacobian* jac = reinterpret_cast<hkp2Lin2AngJacobian*>( out.m_jacobianSchemas.val() );
	hkJacobianBuilder2::build2LinearAndRhsInfo info;
	info.m_linearA.setSub4( pulleyInput.m_pulleyPivotA, pulleyInput.m_positionA );
	info.m_linearB.setSub4( pulleyInput.m_positionB, pulleyInput.m_pulleyPivotB );
	if ( info.m_linearA.lengthSquared3() > 1.192092896e-07f )
	{
		info.m_linearA.normalize3();
	}
	else
	{
		info.m_linearA = hkTransform::getIdentity().getColumn(0);
	}
	if ( info.m_linearB.lengthSquared3() > 1.192092896e-07f )
	{
		info.m_linearB.normalize3();
	}
	else
	{
		info.m_linearB.setNeg4( hkTransform::getIdentity().getColumn(0) );
	}
	info.m_accumA = bodyA;
	info.m_accumB = bodyB;
	info.m_pivotA = pulleyInput.m_positionA;
	info.m_pivotB = pulleyInput.m_positionB;
	info.m_pulleyPivotA = pulleyInput.m_pulleyPivotA;
	info.m_pulleyPivotB = pulleyInput.m_pulleyPivotB;
	info.m_ropeLength = pulleyInput.m_ropeLength;
	info.m_leverageRatio = pulleyInput.m_leverageOnBodyB;
	info.m_rhsFactor = in.m_substepInvDeltaTime;
	info.m_virtMassFactor = in.m_virtMassFactor;
	hkJacobianBuilder2::build2LinearAndRhs( info, *jac );
	hkpJacobian1dPulleySchema* schema = reinterpret_cast<hkpJacobian1dPulleySchema*>( out.m_jacobianSchemas.val() );
	out.m_jacobianSchemas = reinterpret_cast<hkpJacobianSchema*>( schema + 1 );
	schema->init1dPulleySchema( *jac );
}

static __forceinline void __cdecl buildJacobianFromPulleyAtom( const hkpPulleyConstraintAtom& atom, const hkpConstraintQueryIn& in, const hkTransform& baseA, const hkTransform& baseB, hkpConstraintQueryOut& out )
{
	hkpPulleyConstraintInfo info;
	info.m_positionA = baseA.getTranslation();
	info.m_positionB = baseB.getTranslation();
	info.m_pulleyPivotA = atom.m_fixedPivotAinWorld;
	info.m_pulleyPivotB = atom.m_fixedPivotBinWorld;
	info.m_ropeLength = atom.m_ropeLength;
	info.m_leverageOnBodyB = atom.m_leverageOnBodyB;
	hkPulleyConstraintBuildJacobian( info, in, out );
}

// ---------------------------------------------------------------- the atom loop

void __cdecl FUN_009fccc0( const hkpConstraintAtom* atoms, int sizeOfAllAtoms, const hkpConstraintQueryIn &tmpIn, hkpConstraintQueryOut &out )
{
	const hkpConstraintAtom* currentAtom = atoms;
	hkpConstraintQueryIn in = tmpIn;
	const hkpConstraintAtom* atomsEnd = hkAddByteOffsetConst( currentAtom, sizeOfAllAtoms );
	hkTransform baseA = *in.m_transformA.val();
	hkTransform baseB = *in.m_transformB.val();
	__declspec(align(16)) char angularLimitInfoBuffer[sizeof(hkp1dAngularLimitInfo)];
	hkp1dAngularLimitInfo& angularLimitInfo = reinterpret_cast<hkp1dAngularLimitInfo&>( angularLimitInfoBuffer );

	hkpSolverResults* solverResults = static_cast<hkpSolverResults*>( in.m_constraintRuntime.val() );
	hkBeginConstraints( in, out, solverResults, sizeof(hkpSolverResults) );

	while ( currentAtom < atomsEnd )
	{
nextAtom:
		switch ( currentAtom->m_type )
		{
			case hkpConstraintAtom::TYPE_INVALID:
			{
				currentAtom = reinterpret_cast<const hkpConstraintAtom*>( (hkUlong(currentAtom) + 15) & ~hkUlong(15) );
				goto nextAtom;
			}
			case hkpConstraintAtom::TYPE_BRIDGE:
			{
				const hkpBridgeConstraintAtom* atom = static_cast<const hkpBridgeConstraintAtom*>( currentAtom );
				callBridgeFromAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_SET_LOCAL_TRANSFORMS:
			{
				const hkpSetLocalTransformsConstraintAtom* atom = static_cast<const hkpSetLocalTransformsConstraintAtom*>( currentAtom );
				setLocalTransformsFromAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_SET_LOCAL_TRANSLATIONS:
			{
				const hkpSetLocalTranslationsConstraintAtom* atom = static_cast<const hkpSetLocalTranslationsConstraintAtom*>( currentAtom );
				setLocalTranslationsFromAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_SET_LOCAL_ROTATIONS:
			{
				const hkpSetLocalRotationsConstraintAtom* atom = static_cast<const hkpSetLocalRotationsConstraintAtom*>( currentAtom );
				setLocalRotationsFromAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_BALL_SOCKET:
			{
				const hkpBallSocketConstraintAtom* atom = static_cast<const hkpBallSocketConstraintAtom*>( currentAtom );
				buildJacobianFromBallSocketAtom( in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_STIFF_SPRING:
			{
				const hkpStiffSpringConstraintAtom* atom = static_cast<const hkpStiffSpringConstraintAtom*>( currentAtom );
				buildJacobianFromStiffSpringAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_LIN:
			{
				const hkpLinConstraintAtom* atom = static_cast<const hkpLinConstraintAtom*>( currentAtom );
				buildJacobianFromLinAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_LIN_SOFT:
			{
				const hkpLinSoftConstraintAtom* atom = static_cast<const hkpLinSoftConstraintAtom*>( currentAtom );
				buildJacobianFromLinSoftAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_LIN_LIMIT:
			{
				const hkpLinLimitConstraintAtom* atom = static_cast<const hkpLinLimitConstraintAtom*>( currentAtom );
				buildJacobianFromLinLimitAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_LIN_FRICTION:
			{
				const hkpLinFrictionConstraintAtom* atom = static_cast<const hkpLinFrictionConstraintAtom*>( currentAtom );
				buildJacobianFromLinFrictionAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_LIN_MOTOR:
			{
				const hkpLinMotorConstraintAtom* atom = static_cast<const hkpLinMotorConstraintAtom*>( currentAtom );
				buildJacobianFromLinMotorAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_2D_ANG:
			{
				const hkp2dAngConstraintAtom* atom = static_cast<const hkp2dAngConstraintAtom*>( currentAtom );
				buildJacobianFrom2dAngAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_ANG:
			{
				const hkpAngConstraintAtom* atom = static_cast<const hkpAngConstraintAtom*>( currentAtom );
				buildJacobianFromAngAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_ANG_LIMIT:
			{
				const hkpAngLimitConstraintAtom* atom = static_cast<const hkpAngLimitConstraintAtom*>( currentAtom );
				hkResult result = buildJacobianFromAngLimitAtom( *atom, in, baseA, baseB, angularLimitInfo, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				if ( result == HK_SUCCESS ) goto doAngularLimit;
				goto doSkipSolverResults;
			}
			case hkpConstraintAtom::TYPE_CONE_LIMIT:
			{
				const hkpConeLimitConstraintAtom* atom = static_cast<const hkpConeLimitConstraintAtom*>( currentAtom );
				hkResult result = buildJacobianFromStabilizedConeLimitAtom( *atom, in, baseA, baseB, angularLimitInfo, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				if ( result == HK_SUCCESS ) goto doAngularLimit;
				goto doSkipSolverResults;
			}
			case hkpConstraintAtom::TYPE_TWIST_LIMIT:
			{
				const hkpTwistLimitConstraintAtom* atom = static_cast<const hkpTwistLimitConstraintAtom*>( currentAtom );
				hkResult result = bulidJacobianFromTwistLimitAtom( *atom, in, baseA, baseB, angularLimitInfo, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				if ( result == HK_SUCCESS ) goto doAngularLimit;
				goto doSkipSolverResults;
			}
			case hkpConstraintAtom::TYPE_ANG_FRICTION:
			{
				const hkpAngFrictionConstraintAtom* atom = static_cast<const hkpAngFrictionConstraintAtom*>( currentAtom );
				buildJacobianFromAngFrictionAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_ANG_MOTOR:
			{
				const hkpAngMotorConstraintAtom* atom = static_cast<const hkpAngMotorConstraintAtom*>( currentAtom );
				buildJacobianFromAngMotorAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_RAGDOLL_MOTOR:
			{
				const hkpRagdollMotorConstraintAtom* atom = static_cast<const hkpRagdollMotorConstraintAtom*>( currentAtom );
				buildJacobianFromRagdollMotorAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_PULLEY:
			{
				const hkpPulleyConstraintAtom* atom = static_cast<const hkpPulleyConstraintAtom*>( currentAtom );
				buildJacobianFromPulleyAtom( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_MODIFIER_SOFT_CONTACT:
			{
				const hkpSoftContactModifierConstraintAtom* atom = static_cast<const hkpSoftContactModifierConstraintAtom*>( currentAtom );
				buildJacobianFromSoftContactModifier( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_MODIFIER_VISCOUS_SURFACE:
			{
				const hkpViscousSurfaceModifierConstraintAtom* atom = static_cast<const hkpViscousSurfaceModifierConstraintAtom*>( currentAtom );
				buildJacobianFromViscousSurfaceModifier( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_MODIFIER_MASS_CHANGER:
			{
				const hkpMassChangerModifierConstraintAtom* atom = static_cast<const hkpMassChangerModifierConstraintAtom*>( currentAtom );
				buildJacobianFromMassChangerModifier( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_MODIFIER_MOVING_SURFACE:
			{
				const hkpMovingSurfaceModifierConstraintAtom* atom = static_cast<const hkpMovingSurfaceModifierConstraintAtom*>( currentAtom );
				buildJacobianFromMovingSurfaceModifier( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			case hkpConstraintAtom::TYPE_MODIFIER_IGNORE_CONSTRAINT:
			{
				const hkpIgnoreModifierConstraintAtom* atom = static_cast<const hkpIgnoreModifierConstraintAtom*>( currentAtom );
				buildJacobianFromIgnoreModifier( *atom, in, baseA, baseB, out );
				currentAtom = atom->next();
				hkUlong sizeRuntime = atom->numSolverResults() * sizeof(hkpSolverResults);
				in.m_constraintRuntime = hkAddByteOffset( in.m_constraintRuntime.val(), sizeRuntime );
				in.m_constraintRuntimeInMainMemory = hkAddByteOffsetCpuPtr( in.m_constraintRuntimeInMainMemory.val(), sizeRuntime );
				break;
			}
			default:
				break;
doAngularLimit:
				hk1dAngularLimitBuildJacobian( angularLimitInfo, in, out );
				break;
doSkipSolverResults:
				hkSkipSolverResults( 1, out );
		}
	}
}

}

}   // namespace f3m_009fccc0
