// gamebryo2.2/corelibs/nisystem/console/nifile_console.h: declares NiBinaryStream, NiFile
#ifndef FNV_ASTRA_NIFILE_H
#define FNV_ASTRA_NIFILE_H
#include "f3_common.h"
#include <stddef.h>
struct _iobuf;
typedef _iobuf FILE;
class NiBinaryStream
{
  public:
    typedef unsigned int(__cdecl* READFUNC)(NiBinaryStream*, void*, unsigned int, unsigned int*, unsigned int);
    typedef unsigned int(__cdecl* WRITEFUNC)(NiBinaryStream*, const void*, unsigned int, unsigned int*, unsigned int);
    virtual ~NiBinaryStream();
    unsigned int m_uiStreamFlags;
    READFUNC m_pfnRead;
    WRITEFUNC m_pfnWrite;
    unsigned int GetLine(char* buffer, unsigned int maxChars);
};
class NiFile : public NiBinaryStream
{
  public:
    enum OpenMode
    {
        READ_ONLY = 0,
        WRITE_ONLY = 1,
        APPEND_ONLY = 2
    };
    unsigned int m_uiBufferAllocSize;
    unsigned int m_uiBufferReadSize;
    unsigned int m_uiPos;
    unsigned int m_uiTotalFileSize;
    char* m_pBuffer;
    FILE* m_pFile;
    OpenMode m_eMode;
    bool m_bGood;
    virtual ~NiFile();

  protected:
    bool Flush();
    static unsigned int __cdecl WriteBytesToFile(const void*, unsigned int, unsigned int, FILE*);
};
extern "C" int __cdecl fclose(FILE*);
void __cdecl NiFree(void*);
typedef char check_NiBinaryStream_size[1];
typedef char check_NiFile_size[1];
typedef char check_NiFile_buffer[1];
typedef char check_NiFile_file[1];
typedef char check_NiFile_mode[1];
typedef char check_NiFile_good[1];
#endif
