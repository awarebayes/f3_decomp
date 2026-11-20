#include <new>
// src/f3staging/f3iso_00a4b2c0_o2.cpp - Fallout 3 ISOLATED unit (19 Nov 2026) for 0x00a4b2c0 alone: its original passes arguments in registers to
// a static helper of its own file, which only works without other code (16-byte-aligned locals) in the unit. Write the helper
// static in your candidate. Not a real source path.

#include "../../include/layout_support.h"
#include "../../include/fnv_asm_helpers.h"

// @f3 0x00a4b2c0 (community match, verified in this file)
extern const char DAT_00e866bc[];
extern const char DAT_00e866cc[];
extern const char DAT_00e866d8[];
extern const char DAT_00e866e4[];
extern const char DAT_00e866f4[];
namespace f3m_00a4b2c0 {
struct Output {
    void FUN_00943710(const char*);
    void FUN_009439c0(const char*,unsigned int);
};
void* __cdecl FUN_00a4c6e0(void*);
void __cdecl FUN_00943960(Output*,const char*,...);
int __cdecl FUN_009233f0(const char* s);
static __declspec(noinline) int FUN_00a4b160(Output* out, const char* const* strings, int numStrings)
{
    for (int i = 0; i < numStrings; ++i)
    {
        const char* start = strings[i];
        if (start)
        {
            const char* cur = start;
            while (*cur)
            {
                char c = *cur;
                if (c > 0x14 && c < 0x7f)
                {
                    switch (c)
                    {
                    case '"': case '&': case '\'': case '<': case '>':
                    {
                        out->FUN_009439c0(start, cur - start);
                        start = cur + 1;
                        const char* entities[] = { "<&lt;", ">&gt;", "&&amp;", "\"&quot;", "'&apos;", 0 };
                        for (int k = 0; entities[k]; ++k)
                        {
                            if (entities[k][0] == c)
                            {
                                const char* rep = entities[k] + 1;
                                out->FUN_009439c0(rep, FUN_009233f0(rep));
                                break;
                            }
                        }
                        break;
                    }
                    }
                }
                else
                {
                    out->FUN_009439c0(start, cur - start);
                    FUN_00943960(out, "&#%u;", (unsigned char)*cur);
                    start = cur + 1;
                }
                ++cur;
            }
            out->FUN_009439c0(start, cur - start);
        }
        else
        {
            out->FUN_00943710("&#9216;");
        }
    }
    return 0;
}
struct Resolver {
    virtual void v00();
    virtual unsigned int Resolve(unsigned int,char*,unsigned int);
};
struct Context {int unk00,unk04,unk08,unk0c,unk10,unk14,unk18,unk1c,unk20;Resolver* unk24;};
static __declspec(noinline) void FUN_00a4b2c0(int type,void* data,unsigned int output,Context* context)
{
    Output* out=(Output*)output;
    switch(type) {
    case 1: out->FUN_00943710(*(char*)FUN_00a4c6e0(data)?"true":"false"); break;
    case 2: FUN_00943960(out,DAT_00e866f4,*(signed char*)FUN_00a4c6e0(data)); break;
    case 3: FUN_00943960(out,"%i",*(signed char*)FUN_00a4c6e0(data)); break;
    case 4: FUN_00943960(out,"%u",*(unsigned char*)FUN_00a4c6e0(data)); break;
    case 5: FUN_00943960(out,"%i",*(short*)FUN_00a4c6e0(data)); break;
    case 6: FUN_00943960(out,"%u",*(unsigned short*)FUN_00a4c6e0(data)); break;
    case 7: FUN_00943960(out,"%i",*(int*)FUN_00a4c6e0(data)); break;
    case 8: FUN_00943960(out,"%u",*(unsigned int*)FUN_00a4c6e0(data)); break;
    case 9: FUN_00943960(out,"%I64i",*(__int64*)FUN_00a4c6e0(data)); break;
    case 10: FUN_00943960(out,"%I64u",*(unsigned __int64*)FUN_00a4c6e0(data)); break;
    case 30: FUN_00943960(out,"%u",*(unsigned int*)FUN_00a4c6e0(data)); break;
    case 11: FUN_00943960(out,"%f",*(float*)FUN_00a4c6e0(data)); break;
    case 12: case 13: {float* f=(float*)data; FUN_00943960(out,DAT_00e866e4,f[0],f[1],f[2],f[3]); break;}
    case 14: case 15: {float* f=(float*)data;
        FUN_00943960(out,DAT_00e866d8,f[0],f[1],f[2]);
        FUN_00943960(out,DAT_00e866d8,f[4],f[5],f[6]);
        FUN_00943960(out,DAT_00e866d8,f[8],f[9],f[10]); break;}
    case 16: {float* f=(float*)data;
        FUN_00943960(out,DAT_00e866d8,f[0],f[1],f[2]);
        FUN_00943960(out,DAT_00e866e4,f[4],f[5],f[6],f[7]);
        FUN_00943960(out,DAT_00e866d8,f[8],f[9],f[10]); break;}
    case 17: {float* f=(float*)data;
        FUN_00943960(out,DAT_00e866e4,f[0],f[1],f[2],f[3]);
        FUN_00943960(out,DAT_00e866e4,f[4],f[5],f[6],f[7]);
        FUN_00943960(out,DAT_00e866e4,f[8],f[9],f[10],f[11]);
        FUN_00943960(out,DAT_00e866e4,f[12],f[13],f[14],f[15]);break;}
    case 18: {float* f=(float*)data;
        FUN_00943960(out,DAT_00e866d8,f[0],f[1],f[2]);
        FUN_00943960(out,DAT_00e866d8,f[4],f[5],f[6]);
        FUN_00943960(out,DAT_00e866d8,f[8],f[9],f[10]);
        FUN_00943960(out,DAT_00e866d8,f[12],f[13],f[14]); break;}
    case 20: {unsigned int tbuf[64]; char* text = (char*)tbuf; unsigned int id=*(unsigned int*)FUN_00a4c6e0(data);
        unsigned int len=context->unk24->Resolve(id,text,256);out->FUN_009439c0(text,len);break;}
    case 29: FUN_00943960(out,DAT_00e866cc);FUN_00a4b160(out,(const char* const*)data,1);FUN_00943960(out,DAT_00e866bc);break;
    }
}
volatile int inputType;Output* volatile inputOut;void* volatile inputData;Context* volatile inputContext;
void call_format(){FUN_00a4b2c0(inputType,inputData,(unsigned int)inputOut,inputContext);}
}   // namespace f3m_00a4b2c0
