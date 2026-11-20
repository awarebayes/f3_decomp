#include <new>
// src/f3staging/f3iso_009ce380_od.cpp - Fallout 3 ISOLATED unit (20 Nov 2026) for 0x009ce380 alone: its verified match did not fit its
// original file. Make the match self-contained here (own types and helpers). Not a real source path.

#include "../../include/layout_support.h"
#include "../../include/fnv_asm_helpers.h"

// @f3 0x009ce380 (community match, verified in this file)
#include <math.h>
namespace f3m_009ce380 {
namespace Bounds009ce380 {
// void hkCollectionBvTreeAgent3_calcAabbs(struct hkpAgent3ProcessInput const &,class hkpShapeContainer const *,class hkpCdBody const *,unsigned int const *,int,struct hk1AxisSweep::AabbInt *)  (?hkCollectionBvTreeAgent3_calcAabbs@@YAXABUhkpAgent3ProcessInput@@PBVhkpShapeContainer@@PBVhkpCdBody@@PBIHPIAUAabbInt@hk1AxisSweep@@@Z; Havok 5.5.0 hkpInternal.lib / hkpCollectionCollectionAgent3.obj)
// reduced by hktrim.py from hk_src.cpp; compile: cl -c -Ox -Ob1 -Oi -Ot -GF -MT -GS- -Z7 -TP -X
typedef float  hkReal;
typedef signed char		hkInt8;
typedef signed short	hkInt16;
typedef unsigned char	hkUchar;
typedef unsigned char	hkUint8;
typedef unsigned short	hkUint16;
typedef unsigned int	hkUint32;
	typedef unsigned long __w64 hkUlong;
typedef hkReal hkTime;
class hkClass;
typedef int hkBool32;

class hkBool
{
	private:
		char m_bool;
};

class hkUFloat8
{
public:
	enum { MAX_VALUE = 256 };
public:
	hkUint8 m_value;
};

template<typename ENUM, typename STORAGE>
class hkEnum
{
	private:
		STORAGE m_storage;
};

template <typename TYPE>
class hkPadSpu
{
	public:
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

class hkBaseObject
{
	public:
		static const struct hkInternalClassMember Members[]; struct DefaultStruct;
		__forceinline virtual ~hkBaseObject() {}
};

class hkStatisticsCollector;

class hkReferencedObject : public hkBaseObject
{
	public:
		                class MustEndWithSemiColon;
		static const struct hkInternalClassMember Members[]; struct DefaultStruct;
		virtual ~hkReferencedObject() { }
        virtual void calcStatistics( hkStatisticsCollector* collector ) const;
        virtual void calcContentStatistics( hkStatisticsCollector* collector,const hkClass* cls ) const;
	public:
		enum
		{
			MASK_MEMSIZE = 0x7fff
		};
		hkUint16 m_memSizeAndFlags;
		mutable hkInt16 m_referenceCount;
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

namespace hkMath
{
	inline hkReal __cdecl sqrt(hkReal r) { return ::sqrtf(r); }
}

struct Storage_hkQuadReal0000 { static const hkQuadReal value; };
struct Storage_g_vZero { static hkVector4 value; };
class hkTransform;

class hkVector4
{
	public:
		                class MustEndWithSemiColon;
		__forceinline void setAll(hkReal x);
		__forceinline void add4(const hkVector4& a);
		__forceinline void setAdd4(const hkVector4& a, const hkVector4& b);
		__forceinline void setSub4(const hkVector4& a, const hkVector4& b);
		__forceinline void mul4(const hkVector4& a);
		__forceinline void mul4(hkSimdRealParameter a);
		__forceinline void addMul4(hkSimdRealParameter r, const hkVector4& a);
		__forceinline void setInterpolate4( const hkVector4& a, const hkVector4& b, hkSimdRealParameter t);
		__forceinline void setMin4(const hkVector4& a, const hkVector4& b);
		__forceinline void setMax4(const hkVector4& a, const hkVector4& b);
		__forceinline void _setTransformedPos(const hkTransform& a, const hkVector4& b);
		__forceinline hkSimdReal length3() const;
		__forceinline hkReal& operator() (int i);
		__forceinline const hkReal& operator() (int i) const;
		__forceinline hkSimdReal getSimdAt(int i) const;
		__forceinline static const hkVector4& __cdecl getZero();
	private:
		__declspec(align(16)) hkReal x;
		hkReal y;
		hkReal z;
		hkReal w;
};

class hkQuaternion
{
	public:
		                class MustEndWithSemiColon;
	public:
		hkVector4 m_vec;
};

class hkMatrix3
{
	public:
		                class MustEndWithSemiColon;
		__forceinline const hkVector4& getColumn(int i) const;
		__forceinline const hkReal& operator() (int row, int col) const;
	protected:
		hkVector4 m_col0;
		hkVector4 m_col1;
		hkVector4 m_col2;
};

class __declspec(align(16)) hkRotation : public hkMatrix3
{
	public:
		                class MustEndWithSemiColon;
};

class hkTransform
{
	public:
		                class MustEndWithSemiColon;
		__forceinline const hkReal& operator() (int row, int column) const;
		__forceinline const hkVector4& getTranslation() const;
	private:
		hkRotation m_rotation;
		hkVector4 m_translation;
};

class hkSweptTransform
{
	public:
		static const struct hkInternalClassMember Members[]; struct DefaultStruct;
		                class MustEndWithSemiColon;
	public:
		hkVector4 m_centerOfMass0;
		hkVector4 m_centerOfMass1;
		hkQuaternion m_rotation0;
		hkQuaternion m_rotation1;
		hkVector4 m_centerOfMassLocal;
};

inline hkReal& hkVector4::operator() (int i)
{
	return (&x)[i];
}

inline const hkReal& hkVector4::operator() (int i) const
{
	return (&x)[i];
}

inline hkSimdReal hkVector4::getSimdAt(int i) const
{
	return (&x)[i];
}

inline void hkVector4::setAll(hkReal a)
{
	x = a;
	y = a;
	z = a;
	w = a;
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

inline void hkVector4::setSub4(const hkVector4& v0, const hkVector4& v1)
{
	x = v0.x - v1.x;
	y = v0.y - v1.y;
	z = v0.z - v1.z;
	w = v0.w - v1.w;
}

inline void hkVector4::mul4(const hkVector4& a)
{
	x *= a.x;
	y *= a.y;
	z *= a.z;
	w *= a.w;
}

inline void hkVector4::mul4(hkSimdRealParameter rs)
{
	hkReal s = hkReal(rs);
	x *= s;
	y *= s;
	z *= s;
	w *= s;
}

inline void hkVector4::addMul4(hkSimdRealParameter rs, const hkVector4& a)
{
	hkReal r = hkReal(rs);
	x += r * a.x;
	y += r * a.y;
	z += r * a.z;
	w += r * a.w;
}

inline void hkVector4::setInterpolate4(const hkVector4& v0, const hkVector4& v1, hkSimdRealParameter rt)
{
	hkReal t = hkReal(rt);
	hkReal s = 1.0f - t;
	hkVector4& d = *this;
	d(0) = s * v0(0) + t * v1(0);
	d(1) = s * v0(1) + t * v1(1);
	d(2) = s * v0(2) + t * v1(2);
	d(3) = s * v0(3) + t * v1(3);
}

	inline void hkVector4::setMin4(const hkVector4& a, const hkVector4& b)
	{
		x = a.x < b.x ? a.x : b.x;
		y = a.y < b.y ? a.y : b.y;
		z = a.z < b.z ? a.z : b.z;
		w = a.w < b.w ? a.w : b.w;
	}

	inline void hkVector4::setMax4(const hkVector4& a, const hkVector4& b)
	{
		x = a.x > b.x ? a.x : b.x;
		y = a.y > b.y ? a.y : b.y;
		z = a.z > b.z ? a.z : b.z;
		w = a.w > b.w ? a.w : b.w;
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

	inline hkSimdReal hkVector4::length3() const
	{
		return hkMath::sqrt((x * x) + ( y * y ) + ( z * z ));
	}

inline const hkVector4& __cdecl hkVector4::getZero()
{
	const hkVector4& zero = *reinterpret_cast<const hkVector4*>(&Storage_hkQuadReal0000::value);
	return zero;
}

inline const hkVector4& hkMatrix3::getColumn(int x) const
{
	return (&m_col0)[x];
}

inline const hkReal& hkMatrix3::operator() (int r, int c) const
{
	return getColumn(c)(r);
}

const hkVector4& hkTransform::getTranslation() const
{
	return m_translation;
}

inline const hkReal& hkTransform::operator() (int r, int c) const
{
	return m_rotation(r,c);
}

class hkAabb
{
	public:
		                class MustEndWithSemiColon;
		static const struct hkInternalClassMember Members[]; struct DefaultStruct;
	public:
		hkVector4 m_min;
		hkVector4 m_max;
};

struct hkAabbUint32
{
	                class MustEndWithSemiColon;
	static const struct hkInternalClassMember Members[]; struct DefaultStruct;
	__declspec(align(16)) hkUint32 m_min[3];
	hkUchar m_expansionMin[3];
	hkUchar m_expansionShift;
	hkUint32 m_max[3];
	hkUchar m_expansionMax[3];
	hkUchar m_sortIndex;
};

class hkSphere
{
	public:
		                class MustEndWithSemiColon;
		static const struct hkInternalClassMember Members[]; struct DefaultStruct;
	protected:
		hkVector4 m_pos;
};

class hkpCdVertex: public hkVector4
{
	public:
		                class MustEndWithSemiColon;
};

enum hkpShapeType
{
	HK_SHAPE_INVALID = 0,
	HK_SHAPE_CONVEX,
	HK_FIRST_SHAPE_TYPE = HK_SHAPE_CONVEX,
	HK_SHAPE_SPHERE,
	HK_SHAPE_CYLINDER,
	HK_SHAPE_TRIANGLE,
	HK_SHAPE_BOX,
	HK_SHAPE_CAPSULE,
	HK_SHAPE_CONVEX_VERTICES,
	HK_SHAPE_COLLECTION,
	HK_SHAPE_BV_TREE,
	HK_SHAPE_LIST,
	HK_SHAPE_MOPP,
	HK_SHAPE_CONVEX_TRANSLATE,
	HK_SHAPE_CONVEX_TRANSFORM,
	HK_SHAPE_SAMPLED_HEIGHT_FIELD,
	HK_SHAPE_EXTENDED_MESH,
	HK_SHAPE_USER_SPU_COLLECTION_0,
	HK_SHAPE_MAX_ID_SPU = HK_SHAPE_USER_SPU_COLLECTION_0,
	HK_SHAPE_PACKED_CONVEX_VERTICES,
	HK_SHAPE_MOPP_EMBEDDED,
	HK_SHAPE_CONVEX_PIECE,
	HK_SHAPE_MULTI_SPHERE,
	HK_SHAPE_CONVEX_LIST,
	HK_SHAPE_TRIANGLE_COLLECTION,
	HK_SHAPE_MULTI_RAY,
	HK_SHAPE_HEIGHT_FIELD,
	HK_SHAPE_SPHERE_REP,
	HK_SHAPE_BV,
	HK_SHAPE_PLANE,
	HK_SHAPE_TRANSFORM,
	HK_SHAPE_PHANTOM_CALLBACK,
	HK_SHAPE_USER0,
	HK_SHAPE_USER1,
	HK_SHAPE_USER2,
	HK_SHAPE_MAX_ID,
	HK_SHAPE_ALL = -1
};

class hkpCollisionDispatcher;
struct hkpShapeRayCastInput;
struct hkpShapeRayCastOutput;
class hkpRayHitCollector;
class hkpCdBody;
class hkpShapeContainer;
enum {  HK_SHAPE_BUFFER_ALIGNMENT = 16,	HK_SHAPE_BUFFER_SIZE = 256 };
typedef __declspec(align(16)) char ShapeBuffer[HK_SHAPE_BUFFER_SIZE];
typedef hkUint16 hkpVertexId;
typedef hkUint32 hkpShapeKey;
class hkpConvexShape;

class hkpShape : public hkReferencedObject
{
	public:
		static const struct hkInternalClassMember Members[]; struct DefaultStruct;
		                class MustEndWithSemiColon;
		__forceinline void getAabb( const hkTransform& localToWorld, hkReal tolerance, hkAabb& out ) const;
		virtual hkReal getMaximumProjection( const hkVector4& direction ) const;
		virtual void castRayWithCollector( const hkpShapeRayCastInput& input, const hkpCdBody& cdBody, hkpRayHitCollector& collector ) const = 0;
		virtual const hkpShapeContainer* getContainer() const { return 0; }
		struct CalcSizeForSpuInput
		{
			                class MustEndWithSemiColon;
			bool m_midphaseAgent3Registered;
			bool m_isFixedOrKeyframed;
		};
		virtual int calcSizeForSpu(const CalcSizeForSpuInput& input, int spuBufferSizeLeft) const;
	protected:
		virtual void getAabbImpl(  const hkTransform& localToWorld, hkReal tolerance, hkAabb& out ) const = 0;
		virtual hkBool castRayImpl(  const hkpShapeRayCastInput& input, hkpShapeRayCastOutput& output ) const = 0;
	public:
			typedef void (__cdecl *GetSupportingVertexFunc)        (const void* thisObj, hkVector4Parameter direction, hkpCdVertex &supportVertex );
			typedef void (__cdecl *ConvertVertexIdsToVerticesFunc)	(const void* thisObj, const hkpVertexId* ids, int numIds, class hkpCdVertex* verticesOut );
			typedef int (__cdecl *WeldContactPointFunc)	(const void* thisObj, hkpVertexId* featurePoints, hkUint8& numFeaturePoints, hkVector4& contactPointWs, const hkTransform* thisObjTransform, const hkpConvexShape* collidingShape, const hkTransform* collidingTransform, hkVector4& separatingNormalInOut );
			typedef void (__cdecl *GetCentreFunc)	(const void* thisObj, hkVector4& centreOut );
			typedef int  (__cdecl *GetNumCollisionSpheresFunc)		(const void* thisObj );
			typedef const hkSphere* (__cdecl *GetCollisionSpheresFunc)(const void* thisObj, hkSphere* sphereBuffer );
			typedef void (__cdecl *GetAabbFunc)					(const void* thisObj, const hkTransform& localToWorld, hkReal tolerance, hkAabb& out );
			typedef hkBool (__cdecl *CastRayFunc) (const void* thisObj, const hkpShapeRayCastInput& input, hkpShapeRayCastOutput& output );
			typedef const hkpShape* (__cdecl *GetChildShapeFunc) (const void* thisObj, hkpShapeKey key, ShapeBuffer& buffer );
			typedef hkUint32 (__cdecl *GetCollisionFilterInfoFunc) (const void* thisObj, hkpShapeKey key );
			struct ShapeFuncs
			{
				                class MustEndWithSemiColon;
				hkPadSpu<GetSupportingVertexFunc>			m_getSupportingVertexFunc;
				hkPadSpu<ConvertVertexIdsToVerticesFunc>	m_convertVertexIdsToVertices;
				hkPadSpu<WeldContactPointFunc>				m_weldContactPointFunc;
				hkPadSpu<GetCentreFunc>						m_getCentreFunc;
				hkPadSpu<GetNumCollisionSpheresFunc>		m_getNumCollisionSpheresFunc;
				hkPadSpu<GetCollisionSpheresFunc>			m_getCollisionSpheresFunc;
				hkPadSpu<GetAabbFunc>						m_getAabbFunc;
				hkPadSpu<CastRayFunc>						m_castRay;
				hkPadSpu<GetChildShapeFunc>					m_getChildShapeFunc;
				hkPadSpu<GetCollisionFilterInfoFunc>		m_getCollisionFilterInfoFunc;
			};
			struct ShapeFuncs2
			{
				                class MustEndWithSemiColon;
				__declspec(align(64)) GetSupportingVertexFunc m_getSupportingVertexFunc;
				ConvertVertexIdsToVerticesFunc		m_convertVertexIdsToVertices;
				WeldContactPointFunc				m_weldContactPointFunc;
				GetCentreFunc						m_getCentreFunc;
				GetNumCollisionSpheresFunc			m_getNumCollisionSpheresFunc;
				GetCollisionSpheresFunc				m_getCollisionSpheresFunc;
				GetAabbFunc							m_getAabbFunc;
				CastRayFunc							m_castRay;
				GetChildShapeFunc					m_getChildShapeFunc;
				GetCollisionFilterInfoFunc			m_getCollisionFilterInfoFunc;
			};
	public:
		hkUlong m_userData;
	public:
		hkEnum< hkpShapeType, hkUint32> m_type;
};

void hkpShape::getAabb( const hkTransform& localToWorld, hkReal tolerance, hkAabb& out ) const
{
	getAabbImpl( localToWorld, tolerance, out );
}

class hkMotionState;
class hkpCollidable;

class hkpCdBody
{
	public:
		                class MustEndWithSemiColon;
		static const struct hkInternalClassMember Members[]; struct DefaultStruct;
		friend class hkpCollidable;
		__forceinline const hkTransform& getTransform() const;
		__forceinline const hkpCollidable* getRootCollidable() const;
	public:
		__forceinline const hkMotionState* getMotionState() const;
	public:
		const hkpShape*       m_shape;
		hkpShapeKey           m_shapeKey;
		const void* m_motion;
		const hkpCdBody*		 m_parent;
};

const hkTransform& hkpCdBody::getTransform() const
{
	return *static_cast<const hkTransform*>(m_motion);
}

const hkMotionState* hkpCdBody::getMotionState() const
{
	return static_cast<const hkMotionState*>(m_motion);
}

const hkpCollidable* hkpCdBody::getRootCollidable() const
{
	const hkpCdBody* body = this;
	while( body->m_parent )
	{
		body = body->m_parent;
	}
	return reinterpret_cast<const hkpCollidable*>(body);
}

struct hkpProcessCollisionInput;
class hkpContactMgr;

struct hkpAgent3Input
{
	                class MustEndWithSemiColon;
	hkPadSpu<const hkpCdBody*> m_bodyA;
	hkPadSpu<const hkpCdBody*> m_bodyB;
	hkPadSpu<const hkpProcessCollisionInput*> m_input;
	hkPadSpu<hkpContactMgr*>	m_contactMgr;
	hkTransform		m_aTb;
};

struct hkpAgent3ProcessInput : public hkpAgent3Input
{
	                class MustEndWithSemiColon;
	hkPadSpu<hkReal>          m_distAtT1;
	hkPadSpu<int>		m_offsetPpuSectorMinusSpuSector;
	hkVector4       m_linearTimInfo;
};

struct hkpCollisionQualityInfo
{
	                class MustEndWithSemiColon;
	__declspec(align(16)) hkReal m_keepContact;
	hkReal m_create4dContact;
	hkReal m_createContact;
	hkReal m_manifoldTimDistance;
	hkPadSpu<hkBool32>		m_useContinuousPhysics;
	hkReal m_minSeparation;
	hkReal m_minExtraSeparation;
	hkReal m_minSafeDeltaTime;
	hkReal m_minAbsoluteSafeDeltaTime;
	hkReal m_toiSeparation;
	hkReal m_toiExtraSeparation;
	hkReal m_toiAccuracy;
	hkReal m_maxContraintViolation;
	hkReal m_minToiDeltaTime;
	hkUint16	m_constraintPriority;
	hkBool m_enableToiWeldRejection;
};

class hkpShapeCollectionFilter;
class hkpConvexListFilter;
struct hkpCollisionAgentConfig;

struct hkpCollisionInput
{
		                class MustEndWithSemiColon;
	public:
		hkPadSpu<hkpCollisionDispatcher*> m_dispatcher;
		hkPadSpu<hkReal> m_tolerance;
		hkPadSpu<const hkpShapeCollectionFilter*> m_filter;
		hkPadSpu<const hkpConvexListFilter*> m_convexListFilter;
		mutable hkPadSpu<hkBool32> m_createPredictiveAgents;
		struct Aabb32Info
		{
			                class MustEndWithSemiColon;
			hkVector4 m_bitOffsetLow;
			hkVector4 m_bitOffsetHigh;
			hkVector4 m_bitScale;
		};
		Aabb32Info m_aabb32Info;
};

class hkpBroadPhaseHandle
{
	public:
		static const struct hkInternalClassMember Members[]; struct DefaultStruct;
		                class MustEndWithSemiColon;
		hkUint32 m_id;
};

class hkpTypedBroadPhaseHandle : public hkpBroadPhaseHandle
{
	public:
		static const struct hkInternalClassMember Members[]; struct DefaultStruct;
		                class MustEndWithSemiColon;
	protected:
		enum { OFFSET_INVALID = 127 };
		friend class hkpBroadPhaseBorder;
		hkInt8 m_type;
		hkInt8 m_ownerOffset;
	public:
		hkUint16 m_objectQualityType;
		hkUint32 m_collisionFilterInfo;
};

class hkpCollidable : public hkpCdBody
{
	public:
		static const struct hkInternalClassMember Members[]; struct DefaultStruct;
		                class MustEndWithSemiColon;
	public:
		struct BoundingVolumeData
		{
				static const struct hkInternalClassMember Members[]; struct DefaultStruct;
				                class MustEndWithSemiColon;
			public:
				hkUint32		m_min[3];
				hkUint8			m_expansionMin[3];
				hkUint8			m_expansionShift;
				hkUint32		m_max[3];
				hkUint8			m_expansionMax[3];
				hkUint8			m_padding;
				hkUint16		m_numChildShapeAabbs;
				hkAabbUint32*	m_childShapeAabbs;
		};
		enum ForceCollideOntoPpuReasons
		{
			FORCE_PPU_USER_REQUEST = 1,
			FORCE_PPU_SHAPE_REQUEST = 2,
			FORCE_PPU_MODIFIER_REQUEST = 4,
		};
	protected:
		hkInt8 m_ownerOffset;
	public:
		hkUint8   m_forceCollideOntoPpu;
		hkUint16 m_shapeSizeOnSpu;
		class hkpTypedBroadPhaseHandle m_broadPhaseHandle;
	public:
		struct BoundingVolumeData m_boundingVolumeData;
		hkReal m_allowedPenetrationDepth;
};

class hkMotionState
{
	public:
		static const struct hkInternalClassMember Members[]; struct DefaultStruct;
		                class MustEndWithSemiColon;
		inline const hkSweptTransform& getSweptTransform() const;
	protected:
		hkTransform m_transform;
		class hkSweptTransform m_sweptTransform;
	public:
		hkVector4 m_deltaAngle;
		hkReal m_objectRadius;
		hkReal	m_linearDamping;
		hkReal	m_angularDamping;
		hkUFloat8 m_maxLinearVelocity;
		hkUFloat8 m_maxAngularVelocity;
		hkUint8	m_deactivationClass;
};

const hkSweptTransform& hkMotionState::getSweptTransform() const
{
	return m_sweptTransform;
}

class hkStepInfo
{
	public:
		                class MustEndWithSemiColon;
	public:
		__declspec(align(16)) hkPadSpu<hkTime> m_startTime;
		hkPadSpu<hkTime> m_endTime;
		hkPadSpu<hkReal> m_deltaTime;
		hkPadSpu<hkReal> m_invDeltaTime;
};

struct hkpProcessCollisionInput : public hkpCollisionInput
{
		                class MustEndWithSemiColon;
	public:
		hkStepInfo m_stepInfo;
		mutable hkPadSpu<hkpCollisionQualityInfo*> m_collisionQualityInfo;
		void*	m_dynamicsInfo;
		bool m_enableDeprecatedWelding;
		hkpCollisionAgentConfig* m_config;
};

class hkpShapeContainer
{
	public:
		static const struct hkInternalClassMember Members[]; struct DefaultStruct;
		enum {  HK_SHAPE_BUFFER_ALIGNMENT = 16,	HK_SHAPE_BUFFER_SIZE = 512 };
		typedef __declspec(align(16)) char ShapeBuffer[HK_SHAPE_BUFFER_SIZE];
		virtual ~hkpShapeContainer() { }
		virtual int getNumChildShapes() const;
		virtual hkpShapeKey getFirstKey() const = 0;
		virtual hkpShapeKey getNextKey( hkpShapeKey oldKey ) const = 0;
		virtual hkUint32 getCollisionFilterInfo( hkpShapeKey key ) const;
		virtual const hkpShape* getChildShape( hkpShapeKey key, ShapeBuffer& buffer ) const = 0;
		virtual hkBool32 isChildEnabled( hkpShapeKey key ) const { return true; }
		virtual bool isWeldingEnabled() const { return true; }
};

class hkpAabbUtil
{
	public:
		struct OffsetAabbInput
		{
			                class MustEndWithSemiColon;
			hkPadSpu<const hkMotionState*> m_motionState;
			hkTransform m_transforms[4];
			hkPadSpu<int> m_numTransforms;
			hkTransform m_startTransform;
			hkTransform m_endTransformInv;
		};
		static void __cdecl initOffsetAabbInput(const hkMotionState* motionstate, OffsetAabbInput& input);
		static void __cdecl sweepOffsetAabb(const OffsetAabbInput& input, const hkAabb& aabbIn, hkAabb& aabbOut);
};

__forceinline void __cdecl hkpAabbUtil::sweepOffsetAabb(const hkpAabbUtil::OffsetAabbInput& input, const hkAabb& aabbIn, hkAabb& aabbOut)
{
	hkSimdReal half(0.5f);
	hkVector4 aabbHalfSize; aabbHalfSize.setSub4(aabbIn.m_max, aabbIn.m_min);  aabbHalfSize.mul4(half);
	hkVector4 aabbCenter; aabbCenter.setInterpolate4(aabbIn.m_max, aabbIn.m_min, half);
	hkVector4 arm; arm._setTransformedPos(input.m_endTransformInv, aabbCenter);
	hkVector4 min = aabbCenter;
	hkVector4 max = aabbCenter;
	{
		hkVector4 p; p._setTransformedPos(input.m_startTransform, arm);
		min.setMin4(min, p);
		max.setMax4(max, p);
	}
	const hkVector4 centerOfMassLocal = input.m_motionState->getSweptTransform().m_centerOfMassLocal;
	for (int i = 0; i < input.m_numTransforms; i++)
	{
		hkVector4 extendedArm;
		extendedArm.setSub4(arm, centerOfMassLocal);
		extendedArm.mul4(input.m_transforms[i].getTranslation().getSimdAt(3));
		extendedArm.add4(centerOfMassLocal);
		hkVector4 p; p._setTransformedPos(input.m_transforms[i], extendedArm);
		min.setMin4(min, p);
		max.setMax4(max, p);
	}
	{
		hkSimdReal r = aabbHalfSize.length3();
		hkVector4 radius; radius.setAll(r);
		aabbHalfSize.addMul4(input.m_motionState->m_deltaAngle.getSimdAt(3), radius);
		aabbHalfSize.setMin4(radius, aabbHalfSize);
	}
	aabbOut.m_min.setSub4(min, aabbHalfSize);
	aabbOut.m_max.setAdd4(max, aabbHalfSize);
	aabbOut.m_min.setMin4(aabbIn.m_min, aabbOut.m_min);
	aabbOut.m_max.setMax4(aabbIn.m_max, aabbOut.m_max);
}

class hk1AxisSweep
{
	public:
		struct AabbInt : public hkAabbUint32
		{
			                class MustEndWithSemiColon;
			hkpShapeKey& getShapeKey() { return m_min[3]; }
		};
};

namespace hkVector4Util
{
	__forceinline void __cdecl convertToUint32WithClip( const hkVector4& in, const hkVector4& offset, const hkVector4& scale, const hkVector4& min, const hkVector4& max, hkUint32* out);
	__forceinline void __cdecl convertAabbToUint32( const hkAabb& aabb, const hkVector4& offsetLow, const hkVector4& offsetHigh, const hkVector4& scale, hkAabbUint32& aabbOut );
	struct Storage_hkAabbUint32MaxVal { static __declspec(align(16)) float value[4]; };
}

inline void __cdecl hkVector4Util::convertToUint32WithClip( const hkVector4& in, const hkVector4& offset, const hkVector4& scale, const hkVector4& min, const hkVector4& max, hkUint32* out)
{
	hkVector4 x;
	x.setAdd4(in,offset);
	x.mul4(scale);
	x.setMin4(x,max);
	x.setMax4(x,min);
	out[0] = static_cast<hkUint32>(fnv_FloatToInt(x(0)));
	out[1] = static_cast<hkUint32>(fnv_FloatToInt(x(1)));
	out[2] = static_cast<hkUint32>(fnv_FloatToInt(x(2)));
	out[3] = static_cast<hkUint32>(fnv_FloatToInt(x(3)));
}

inline void __cdecl hkVector4Util::convertAabbToUint32( const hkAabb& aabb, const hkVector4& offsetLow, const hkVector4& offsetHigh, const hkVector4& scale, hkAabbUint32& aabbOut )
{
	hkVector4 maxVal = (*reinterpret_cast<const hkVector4*>(&hkVector4Util::Storage_hkAabbUint32MaxVal::value));
	hkVector4Util::convertToUint32WithClip( aabb.m_min, offsetLow,  scale, Storage_g_vZero::value, maxVal, aabbOut.m_min );
	hkVector4Util::convertToUint32WithClip( aabb.m_max, offsetHigh, scale, Storage_g_vZero::value, maxVal, aabbOut.m_max );
}


}
void __cdecl FUN_009ce380( const Bounds009ce380::hkpAgent3ProcessInput& input, const Bounds009ce380::hkpShapeContainer* container, const Bounds009ce380::hkpCdBody* cdBody, const Bounds009ce380::hkpShapeKey* hitList, int numHits, Bounds009ce380::hk1AxisSweep::AabbInt* __restrict aabbsOut )
{
    using namespace Bounds009ce380;

	hkpAabbUtil::OffsetAabbInput sweepInput;
	const int useContinuousPhysics = input.m_input->m_collisionQualityInfo->m_useContinuousPhysics.val();
	if ( useContinuousPhysics )
	{
		hkpAabbUtil::initOffsetAabbInput( cdBody->getRootCollidable()->getMotionState(), sweepInput );
	}
	char shapeBuffer[512];
	for ( int i = 0; i < numHits; i++ )
	{
		hkpShapeKey key = hitList[i];
		const hkpShape* child = container->getChildShape( key, shapeBuffer );
		hkAabb aabb;
		child->getAabb( cdBody->getTransform(), input.m_input->m_tolerance, aabb );
		if ( useContinuousPhysics )
		{
			hkpAabbUtil::sweepOffsetAabb( sweepInput, aabb, aabb );
		}
		hkVector4Util::convertAabbToUint32( aabb, input.m_input->m_aabb32Info.m_bitOffsetLow, input.m_input->m_aabb32Info.m_bitOffsetHigh, input.m_input->m_aabb32Info.m_bitScale, aabbsOut[i] );
		aabbsOut[i].getShapeKey() = key;
	}
}
}   // namespace f3m_009ce380
