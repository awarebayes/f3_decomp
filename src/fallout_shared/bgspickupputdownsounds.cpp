// fallout_shared/bgspickupputdownsounds.cpp: TESIcon, BGSPickupPutdownSounds (8 functions)
#include "f3_common.h"
#include "bgspickupputdownsounds_decls.h"
#include "bgspickupputdownsounds_types_BGSPickupPutdownSounds.h"

// @f3 0x00593340 (community match, verified in this file)
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long* value);
extern volatile long g_liveObjectCount;
extern const int FUN_00db7764[];   // TESIcon vftable
extern const int FUN_00dfc184[];   // TESTexture vftable (the base ctor's store)

template <class T> BSStringT<T>::BSStringT()
{
}

TESIcon::TESIcon()
{
    *(int*)((char*)this + 4) = 0;
    InterlockedIncrement(&g_liveObjectCount);
    *(const int**)this = FUN_00dfc184;
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0xc) = 0;
}


// Resolves the pickup and putdown sound form IDs to TESSound objects, warning when either sound cannot be found.
// @fnv 0x0047b6a0
void BGSPickupPutdownSounds::InitItem(TESForm* owner)
{
    struct InitData
    {
        unsigned int formID;
        TESFile* file;
    } initData;

    initData.formID = (unsigned int)m_pPickupSound;
    initData.file = owner ? owner->GetFile(-1) : 0;

    if (initData.formID)
    {
        TESForm::RemapFormIDForFile(initData.formID, initData.file);
        m_pPickupSound = dynamic_cast<TESSound*>(GetFormByID(initData.formID));
        if (!m_pPickupSound)
        {
            if (owner)
            {
                if (reinterpret_cast<BGSCameraPath*>(owner)->HasNameForWarning())
                    Warning("MASTERFILE: Unable to find pickup sound (%08X) for owner object \"%s\".", initData.formID,
                            owner->GetName());
                else
                    Warning("MASTERFILE: Unable to find pickup sound  (%08X) for owner object (%08X).", initData.formID,
                            owner->GetFormID());
            }
            else
            {
                Warning("MASTERFILE: Unable to find pickup sound  (%08X) for unknown owner.", initData.formID);
            }
        }
    }

    initData.formID = (unsigned int)m_pPutdownSound;
    if (initData.formID)
    {
        TESForm::RemapFormIDForFile(initData.formID, initData.file);
        m_pPutdownSound = dynamic_cast<TESSound*>(GetFormByID(initData.formID));
        if (!m_pPutdownSound)
        {
            if (owner)
            {
                if (reinterpret_cast<BGSCameraPath*>(owner)->HasNameForWarning())
                    Warning("MASTERFILE: Unable to find putdown sound (%08X) for owner object \"%s\".", initData.formID,
                            owner->GetName());
                else
                    Warning("MASTERFILE: Unable to find putdown sound  (%08X) for owner object (%08X).",
                            initData.formID, owner->GetFormID());
            }
            else
            {
                Warning("MASTERFILE: Unable to find putdown sound  (%08X) for unknown owner.", initData.formID);
            }
        }
    }
}

extern int DAT_0101abd8;
void __fastcall FUN_0047b540(void* pThis);

// Initialises the BaseFormComponent base, installs the vtable from DAT_0101abd8, calls FUN_0047b540, and returns pThis.
// @fnv 0x0047b4f0
void* __fastcall FUN_0047b4f0(BaseFormComponent* apComponent)
{
    apComponent->BaseFormComponent::BaseFormComponent();
    *(int**)apComponent = &DAT_0101abd8;
    FUN_0047b540(apComponent);
    return apComponent;
}

struct BGSMenuIcon;
struct BGSMessageIcon;
struct BGSTextureSet;
struct BipedAnim;
struct NiAVObject;
struct NiPoint3;
struct Script;
struct TESBoundObject;
struct TESModel;
struct TESModelTextureSwap;
struct TESObject;
struct TESFormList;
struct TESObjectREFR;
struct FileEntryList;
struct TESWaterForm;
struct DistantTreeTextureInfo;
struct blob12
{
    char b[12];
};
struct BGSClipRoundsForm : public BaseFormComponent
{
    virtual void InitializeComponent();
    virtual void ClearComponent();
    void Save();
    virtual void BaseFormRecord(BaseFormComponent*);
    virtual bool IsEqualToBase(BaseFormComponent*);
    static int GetClipRounds(TESForm*);
    int GetClipRounds();
    void SetFormClipRounds(int);
    void* __vecDelDtor(unsigned int);
    unsigned char m_ucClipRounds;
    char _pad_5[3];
};
typedef char _sizecheck_BGSClipRoundsForm[1];
struct TESFullName : public BaseFormComponent
{
    virtual void InitializeComponent();
    virtual void ClearComponent();
    void Save();
    virtual void BaseFormRecord(BaseFormComponent*);
    virtual bool IsEqualToBase(BaseFormComponent*);
    static unsigned int GetFullNameLength(TESForm*);
    unsigned int GetFullNameLength();
    static char* GetFullName(TESForm*);
    char* GetFullName();
    void SetFullName(char*);
    static void LoadFullNameChunk(TESFullName*, TESFile*);
    void* GetFullNameString();
    void* __vecDelDtor(unsigned int);
    char m_kName[8];
};
typedef char _sizecheck_TESFullName[1];
struct TESScriptableForm : public BaseFormComponent
{
    virtual void InitializeComponent();
    virtual void ClearComponent();
    void Save();
    virtual void BaseFormRecord(BaseFormComponent*);
    virtual bool IsEqualToBase(BaseFormComponent*);
    void InitItem(TESForm*);
    static Script* GetScriptForForm(TESForm*);
    Script* GetScriptForForm();
    static char* GetFormScriptEditorID(TESForm*);
    char* GetFormScriptEditorID();
    static void SetFormScript(TESForm*, Script*);
    void SetFormScript(Script*);
    Script* m_pFormScript;
    bool m_bHasScript;
    char _pad_9[3];
};
typedef char _sizecheck_TESScriptableForm[1];
struct TESWeightForm : public BaseFormComponent
{
    virtual void InitializeComponent();
    virtual void ClearComponent();
    void Save();
    virtual void BaseFormRecord(BaseFormComponent*);
    virtual bool IsEqualToBase(BaseFormComponent*);
    static float GetWeightForForm(TESForm*, bool);
    float GetWeightForForm();
    void SetFormWeight(float);
    void* __vecDelDtor(unsigned int);
    float fWeight;
};
typedef char _sizecheck_TESWeightForm[1];
struct BGSEquipType : public BaseFormComponent
{
    virtual void InitializeComponent();
    virtual void ClearComponent();
    void Save();
    virtual void BaseFormRecord(BaseFormComponent*);
    virtual bool IsEqualToBase(BaseFormComponent*);
    static int GetEquipType(TESForm*);
    int GetEquipType();
    void SetEquipType(int);
    static BGSMenuIcon* GetEquipTypeIcon(int);
    static char* GetEquipTypeName(int);
    static void GenerateDefaultMenuIcons();
    int m_eEquipType;
};
typedef char _sizecheck_BGSEquipType[1];
struct FUN_0047b540_shell : public BGSClipRoundsForm
{
    void FUN_0047b540();
};

// @fnv 0x0047b540
void FUN_0047b540_shell::FUN_0047b540()
{
    *(int*)((char*)this + 4) = 0;
    *(int*)((char*)this + 8) = 0;
}

struct TESObjectREFR
{
    void SetFlags(unsigned int);
};
struct TESRaceForm
{
    void Initialize(unsigned int);
};
struct ArrSI
{
    unsigned int GetFlags();
};
struct CombatNode
{
    unsigned int FUN_00726070();
};
struct FUN_0047b5d0_cls
{
    void FUN_0047b5d0(BaseFormComponent* component);
};
// If component casts to BGSPickupPutdownSounds, initializes this as TESRaceForm from its FUN_00726070 result and sets TESObjectREFR flags from its GetFlags.
// @fnv 0x0047b5d0
void FUN_0047b5d0_cls::FUN_0047b5d0(BaseFormComponent* component)
{
    BGSPickupPutdownSounds* source = dynamic_cast<BGSPickupPutdownSounds*>(component);
    if (!source)
        return;
    ((TESRaceForm*)this)->Initialize(((CombatNode*)source)->FUN_00726070());
    ((TESObjectREFR*)this)->SetFlags(((ArrSI*)source)->GetFlags());
}

namespace fnv_0047b560 {
struct ArrSI
{
    unsigned int GetFlags();
};
struct ItemList
{
    void* GetItem();
};
extern "C" void __cdecl FUN_00485910(int, int);
struct FUN_0047b560_shell : public TESForm
{
    void LogFormIDs();
};
// @fnv 0x0047b560
void FUN_0047b560_shell::LogFormIDs()
{
    if (((ItemList*)this)->GetItem())
    {
        unsigned int id = ((TESForm*)((ItemList*)this)->GetItem())->GetFormID();
        FUN_00485910(0x4d414e59, id);
    }
    if (((ArrSI*)this)->GetFlags())
    {
        unsigned int id = ((TESForm*)((ArrSI*)this)->GetFlags())->GetFormID();
        FUN_00485910(0x4d414e5a, id);
    }
}
}  // namespace fnv_0047b560

namespace fnv_0047b630 {
struct ArrSI
{
    unsigned int GetFlags();
};

struct FUN_0047b630_shell
{
    unsigned int FUN_00726070();
    bool IsSamePickupPutdownSounds(BaseFormComponent* component);
};

// Casts component to BGSPickupPutdownSounds and returns false only if its FUN_00726070 result and GetFlags both match this object's.
// @fnv 0x0047b630
bool FUN_0047b630_shell::IsSamePickupPutdownSounds(BaseFormComponent* component)
{
    BGSPickupPutdownSounds* pickup = dynamic_cast<BGSPickupPutdownSounds*>(component);
    if (pickup == 0)
        return true;
    if (FUN_00726070() != reinterpret_cast<FUN_0047b630_shell*>(pickup)->FUN_00726070() ||
        reinterpret_cast<ArrSI*>(this)->GetFlags() != reinterpret_cast<ArrSI*>(pickup)->GetFlags())
        return true;
    return false;
}
}  // namespace fnv_0047b630

extern int DAT_0101abd8;

struct FUN_0047b520_shell : TESForm
{
    void FUN_0047b520();
};

// @fnv 0x0047b520
void FUN_0047b520_shell::FUN_0047b520()
{
    *(int**)this = &DAT_0101abd8;
    TESForm::ClearData();
}
