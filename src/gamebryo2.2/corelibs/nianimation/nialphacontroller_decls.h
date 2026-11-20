// gamebryo2.2/corelibs/nianimation/nialphacontroller_decls.h: declares NiTransformController, NiAlphaController
#include "f3_common.h"
class CloningProcess;
class NiTransformController
{
  public:
    void CopyMemberData(NiTransformController*, CloningProcess&);
};
class NiAlphaController
{
  public:
    void CopyMemberData(NiAlphaController*, CloningProcess&);
};
