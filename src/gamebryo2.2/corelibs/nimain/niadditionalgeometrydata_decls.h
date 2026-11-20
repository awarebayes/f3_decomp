// gamebryo2.2/corelibs/nimain/niadditionalgeometrydata_decls.h: declares NiAdditionalGeometryData
#include "f3_common.h"
class ShadowSceneNode;
extern ShadowSceneNode* DAT_011f91c8[];
class NiAdditionalGeometryData
{
  public:
    static ShadowSceneNode* GetShadowSceneNodeForIndex(int index);
};
