// Declaration-only full xNVSE runtime representation, GameForms.h:1016-1022,1540-1549,2301-2325.
// Requires the reviewed ModelLoader form declarations. No bodies or globals.
#ifndef FNV_MODELLOADER_ACTIVATOR_DECLARATIONS_H
#define FNV_MODELLOADER_ACTIVATOR_DECLARATIONS_H
class TESWaterForm;
class BGSTalkingActivator;
class TESBoundAnimObject : public TESBoundObject
{
  public:
    TESBoundAnimObject();
    ~TESBoundAnimObject();
};
class BGSOpenCloseForm
{
  public:
    virtual void Unk_00(unsigned long arg0, unsigned long arg1);
    virtual void Unk_01(unsigned long arg0, unsigned long arg1);
    virtual bool Unk_02(void);
    BGSOpenCloseForm();
    ~BGSOpenCloseForm();
};
class TESObjectACTI : public TESBoundAnimObject
{
  public:
    TESObjectACTI();
    ~TESObjectACTI();
    TESFullName fullName;
    TESModelTextureSwap modelTextureSwap;
    TESScriptableForm scriptable;
    BGSDestructibleObjectForm destructible;
    BGSOpenCloseForm openClose;
    TESSound* loopingSound;
    TESSound* activationSound;
    TESSound* radioTemplate;
    TESWaterForm* waterType;
    BGSTalkingActivator* radioStation;
    String activationPrompt;
    void SetActivateSound(TESSound* sound);
};
typedef char modelloader_acti_base_size[1];
typedef char modelloader_acti_openclose_size[1];
typedef char modelloader_acti_size[1];
typedef char modelloader_acti_offset_0[1];
typedef char modelloader_acti_offset_1[1];
typedef char modelloader_acti_offset_2[1];
typedef char modelloader_acti_offset_3[1];
typedef char modelloader_acti_offset_4[1];
typedef char modelloader_acti_offset_5[1];
typedef char modelloader_acti_offset_6[1];
typedef char modelloader_acti_offset_7[1];
typedef char modelloader_acti_offset_8[1];
typedef char modelloader_acti_offset_9[1];
typedef char modelloader_acti_offset_10[1];
#endif
