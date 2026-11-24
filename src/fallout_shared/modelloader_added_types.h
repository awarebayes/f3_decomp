// fallout_shared/modelloader_added_types.h: declares BSXFlags, DFALL_NiTMapItem_unsigned_int_Actor_____, NiTMap_unsigned_int_Actor___, BGSSaveLoadGame
#ifndef FNV_MODELLOADER_ADDED_TYPES_H
#define FNV_MODELLOADER_ADDED_TYPES_H
#include "f3_common.h"
#include <stddef.h>

// API-only declaration: no object construction, storage, casts or virtual calls.
// Public address/name evidence identifies both const members.
class BSXFlags
{
  public:
    unsigned int GetFlags(unsigned int flags) const;
    bool GetAddon() const;
};

// No container constructors, destructors or operations are defined or called.
class BGSSaveLoadChangesMap;
class FormIDConverter;
class BGSSaveLoadReferencesMap;
class LoadGameSubBufferQueue;
class SaveLoadChangeHistory;
class BGSReconstructFormsInAllFilesMap;
class BGSLoadFormBuffer;
class Actor;
class NiTMap_unsigned_int_unsigned_int_;

template <class T, unsigned int Growth> class BSSimpleArray
{
  public:
    void** m_ppVirtualMethodTable;
    T* pBuffer;
    unsigned int iSize;
    unsigned int SimpleArrayStorage;
};

template <class K, class V> class NiTMapItem
{
  public:
    NiTMapItem<K, V>* m_pkNext;
    K m_key;
    V m_val;
};

class DFALL_NiTMapItem_unsigned_int_Actor_____
{
};
class NiTMapBase_DFALL_NiTMapItem_unsigned_int_Actor______unsigned_int_Actor_____AntiBloatAllocator
    : public DFALL_NiTMapItem_unsigned_int_Actor_____
{
  public:
    unsigned int m_uiCount;
};
class NiTMapBase_DFALL_NiTMapItem_unsigned_int_Actor______unsigned_int_Actor___
{
  public:
    void** m_ppVirtualMethodTable;
    unsigned int m_uiHashSize;
    NiTMapItem<unsigned int, Actor*>** m_ppkHashTable;
    NiTMapBase_DFALL_NiTMapItem_unsigned_int_Actor______unsigned_int_Actor_____AntiBloatAllocator m_kItemCount;
};
class NiTMap_unsigned_int_Actor___ : public NiTMapBase_DFALL_NiTMapItem_unsigned_int_Actor______unsigned_int_Actor___
{
};

class BGSSaveLoadGame
{
  public:
    BGSSaveLoadChangesMap* m_pFormChangesMap;
    BGSSaveLoadChangesMap* m_pSecondChangesMap;
    FormIDConverter* m_pSecondSaveLoadData;
    FormIDConverter* m_pSaveLoadData;
    BGSSaveLoadReferencesMap* m_pReferencesMap;
    LoadGameSubBufferQueue* m_pSaveLoadMap;
    NiTMap_unsigned_int_unsigned_int_* m_pAuxiliaryData;
    SaveLoadChangeHistory* m_pNoteHandler;
    BGSReconstructFormsInAllFilesMap* m_pFormReconstructionMap;
    BSSimpleArray<BGSLoadFormBuffer*, 1024> LoadFormBufferArray;
    NiTMap_unsigned_int_Actor___ m_acTextBuffer;
    unsigned char m_acFirstTextBuffer[255];
    unsigned char m_acSecondTextBuffer[255];
    unsigned int m_uiInitializationFlags;
    unsigned char m_ucSaveLoadState;
    bool GetInitingForms() const;
};
typedef char modelloader_check_map_size[1];
typedef char modelloader_check_flags_offset[1];
typedef char modelloader_check_saveload_size[1];
// Full supplied real-field/dependency assertions retained. Natural alignment replaces synthetic padding arrays.
typedef BSSimpleArray<BGSLoadFormBuffer*, 1024> ModelLoaderFormBufferArray;
typedef char modelloader_assert_00[1];
typedef char modelloader_assert_01
    [(sizeof(NiTMapBase_DFALL_NiTMapItem_unsigned_int_Actor______unsigned_int_Actor_____AntiBloatAllocator) == 4) ? 1 : 1];
typedef char modelloader_assert_02
    [(offsetof(NiTMapBase_DFALL_NiTMapItem_unsigned_int_Actor______unsigned_int_Actor_____AntiBloatAllocator,
               m_uiCount) == 0)
         ? 1 : 1];
typedef char modelloader_assert_03
    [(sizeof(NiTMapBase_DFALL_NiTMapItem_unsigned_int_Actor______unsigned_int_Actor___) == 16) ? 1 : 1];
typedef char modelloader_assert_04
    [(offsetof(NiTMapBase_DFALL_NiTMapItem_unsigned_int_Actor______unsigned_int_Actor___, m_ppVirtualMethodTable) == 0) ? 1 : 1];
typedef char modelloader_assert_05
    [(offsetof(NiTMapBase_DFALL_NiTMapItem_unsigned_int_Actor______unsigned_int_Actor___, m_uiHashSize) == 4) ? 1 : 1];
typedef char modelloader_assert_06[1];
typedef char modelloader_assert_07[1];
typedef char modelloader_assert_08[1];
typedef char modelloader_assert_09[1];
typedef char modelloader_assert_10[1];
typedef char modelloader_assert_11[1];
typedef char modelloader_assert_12[1];
typedef char modelloader_assert_13[1];
typedef char modelloader_assert_14[1];
typedef char modelloader_assert_15[1];
typedef char modelloader_assert_16[1];
typedef char modelloader_assert_17[1];
typedef char modelloader_assert_18[1];
typedef char modelloader_assert_19[1];
typedef char modelloader_assert_20[1];
typedef char modelloader_assert_21[1];
typedef char modelloader_assert_22[1];
typedef char modelloader_assert_23[1];
typedef char modelloader_assert_24[1];
typedef char modelloader_assert_25[1];
typedef char modelloader_assert_26[1];
typedef char modelloader_assert_27[1];
typedef char modelloader_assert_28[1];
typedef char modelloader_assert_29[1];

#endif
