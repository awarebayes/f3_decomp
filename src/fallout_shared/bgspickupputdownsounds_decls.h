// fallout_shared/bgspickupputdownsounds_decls.h: declares TESIcon, TESSound, BGSCameraPath
#ifndef FNV_BGSPICKUPDOWNSOUNDS_DECLS_H
#define FNV_BGSPICKUPDOWNSOUNDS_DECLS_H
#include "f3_common.h"
#include "TESForm.h"
#include "TESTexture.h"
class TESIcon : public TESTexture
{
  public:
    TESIcon();
};
class TESSound : public TESForm
{
};
class BGSCameraPath
{
  public:
    int HasNameForWarning();
};
TESForm* GetFormByID(unsigned int formID);
int Warning(const char* format, ...);
#endif
