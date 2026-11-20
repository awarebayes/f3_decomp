// bshavok/bhkcollisionobject_decls.h: declares BGSBodyPart, NiShader
#ifndef BHKCOLLISIONOBJECT_DECLS_H
#define BHKCOLLISIONOBJECT_DECLS_H
#include "f3_common.h"
class NiRTTI;
class NiProperty;
class SkyShaderProperty;
class NiAVObject;
class BGSBodyPart
{
  public:
    const char* GetPartName();
};
class NiNode;
void* DynamicCastByRTTI(void*, NiNode*);
class NiShader
{
  public:
    static NiAVObject* DynamicCast(NiAVObject*);
};
#endif
