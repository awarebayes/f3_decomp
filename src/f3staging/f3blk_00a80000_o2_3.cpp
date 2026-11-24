#include <windows.h>
// src/f3staging/f3blk_00a80000_o2.cpp - Fallout 3 STAGING unit (f3_staging_units.py, 3 Nov 2026) for functions with no New Vegas counterpart
// (128 KB address window, o2 code style). Not a real source path: move functions to their real units once identified.

#include "../../include/layout_support.h"

// @f3 0x00a81960 (community match, verified in this file)
#include <windows.h>
extern const char DAT_00e883e4[];
extern const char DAT_00e883ec[];
extern const char DAT_00e883f8[];
extern const char DAT_00e88410[];
extern const char DAT_00e88414[];
extern unsigned long DAT_010f3170;
namespace f3m_00a81960 {
namespace za81960 {
struct Heap { void* FUN_008f6d30(int,int) throw(); void FUN_008f6d90(void*,unsigned,int) throw(); };

inline Heap* GetHeap() { return (Heap*)TlsGetValue(DAT_010f3170); }
int __cdecl FUN_009233f0(const char*);
void __cdecl FUN_009234e0(void*,const void*,int);
int __cdecl FUN_009232f0(const char*,const char*,int);
void __cdecl FUN_00901e90(void*,int,int);
void __cdecl FUN_00901f10(void*,int);
int __cdecl FUN_00a80ba0(char*,const char*);
struct CharArray {
 __forceinline const int getSize() const {return size;}

 char* data; int size,capacity;
 CharArray():data(0),size(0),capacity(0x80000000) {}
 __forceinline int getCapacity() const {return capacity&0x3fffffff;}
 __forceinline ~CharArray() throw() { if(!(capacity&0x80000000))GetHeap()->FUN_008f6d90(data,getCapacity(),0x17); }
 __forceinline void reserve(int n) { int cap=capacity&0x3fffffff;if(cap<n){int c2=cap*2;FUN_00901e90(this,n<c2?c2:n,1);} }
 __forceinline void setSize(int n) {reserve(n);size=n;}
 __forceinline char& operator[](int i) {return data[i];}
 __forceinline void push(const char& c) {if(size==(capacity&0x3fffffff))FUN_00901f10(this,1);data[size++]=c;}
 void FUN_00a821d0(int,const char*,int);
};
struct String:CharArray {
 __forceinline ~String() {}
 __forceinline String() {
  data=(char*)GetHeap()->FUN_008f6d30(1,0x17);
  size=1;capacity=1;data[0]=0;
 }
 __forceinline String(const char* s) {if(s){int n=FUN_009233f0(s)+1;setSize(n);FUN_009234e0(data,s,n);}else {setSize(1);data[0]=0;}}
 __forceinline String(const char* s,int len) {
  setSize(len+1);FUN_009234e0(data,s,len);data[len]=0;
 }
 __forceinline String& operator=(const String& other) {
  int n=other.size;setSize(n);FUN_009234e0(data,other.data,n);return *this;
 }
 __forceinline void assign(const char* s) {if(s){int len=FUN_009233f0(s);setSize(len+1);FUN_009234e0(data,s,len+1);}else {setSize(1);data[0]=0;}}
};
struct Attribute {
 String name,value;
 Attribute() {}
 Attribute(const Attribute& other) throw();
 __forceinline ~Attribute() {}
 void* operator new(size_t,void* p) {return p;}
 void operator delete(void*,void*) {}
};
// Raw storage releases only the backing allocation. Object destruction is
// owned by AttrArray or explicitly performed during its copy-based growth.
struct RawAttrArray {
 Attribute* data;int size,capacity;
 RawAttrArray():data(0),size(0),capacity(0x80000000) {}
 __forceinline int getCapacity() const {return capacity&0x3fffffff;}
 __forceinline ~RawAttrArray() throw() {
  if(!(capacity&0x80000000))GetHeap()->FUN_008f6d90(data,getCapacity()*sizeof(Attribute),0x17);
 }
 __forceinline void reserve(int n) {
  if(getCapacity()<n){int doubled=2*getCapacity();FUN_00901e90(this,n<doubled?doubled:n,sizeof(Attribute));}
 }
 __declspec(noinline) void FUN_00929ad0(RawAttrArray& other) {
  Attribute* p=data;data=other.data;other.data=p;
  int n=size;size=other.size;other.size=n;
  int c=capacity;capacity=other.capacity;other.capacity=c;
 }
 __declspec(noinline) void FUN_00a82280(RawAttrArray* other) {
  FUN_00929ad0(*other);
 }
};
struct AttrArray:RawAttrArray {
 __forceinline ~AttrArray() throw() {int n=size;for(int i=0;i<n;i++)data[i].~Attribute();}
 static __forceinline void construct(Attribute* dst,int n,const Attribute* src) {
  for(int i=0;i<n;i++)new (&dst[i]) Attribute(src[i]);
 }
 static __forceinline void destruct(Attribute* p,int n) {
  for(int i=0;i<n;i++)p[i].~Attribute();
 }
 __forceinline void reserve(int n) {
  int cap=getCapacity();
  if(n>cap){
   int doubled=2*cap;
   int newSize=n<doubled?doubled:n;
   int oldSize=size;
   RawAttrArray old;
   old.FUN_00a82280(this);
   RawAttrArray::reserve(newSize);
   construct(data,oldSize,old.data);
   size=oldSize;
   destruct(old.data,old.size);
  }
 }
 __forceinline void pushBack(const Attribute& value) {
  int n=size;
  if(n==getCapacity())reserve(n?n*2:1);
  Attribute* slot=data+n;
  size=n+1;
  new (slot) Attribute(value);
 }
};
struct Token {
 virtual void v0();unsigned short memorySize,refs;int kind;
 static __forceinline void* operator new(size_t n) throw(){Token* p=(Token*)GetHeap()->FUN_008f6d30(n,1);p->memorySize=(unsigned short)n;return p;}
};
struct FUN_00a82310:Token {String text; FUN_00a82310(const char*,int) throw();};
struct FUN_00a82290:Token {String name; FUN_00a82290(const String&) throw();};
struct FUN_00a824f0:Token {String name; AttrArray attrs; FUN_00a824f0(const String&) throw();};
struct Stream {
 virtual void v00();virtual void v04();virtual void v08();virtual void v0c();
 virtual int Read(char*,int);virtual void Skip(int);virtual void v18();virtual void Begin(int);virtual void Reset();
};
struct Bool {char value;Bool(){}Bool(bool b):value(b){} operator bool() const {return value!=0;} };
struct Reader {
 int unk00,unk04;Stream* stream;
 __forceinline Reader(Stream* s){FUN_00a4a110(s);}
 __forceinline ~Reader(){FUN_00a49be0();}
 void FUN_00a4a110(Stream*);void FUN_00a49be0();Bool FUN_00a49c20();
};
static __declspec(noinline) void FUN_00a80f00(int count,Stream* stream,char* buffer,int capacity,CharArray* out) {
 for(;;){int i=0;for(;i<count;i++)if(buffer[i]=='>')break;
 if(out)out->FUN_00a821d0(out->size,buffer,i);
 if(i!=count){stream->Reset();stream->Skip(i+1);return;}
 stream->Begin(capacity);count=stream->Read(buffer,capacity);if(!count)return;}
}
static __declspec(noinline) void FUN_00a80f70(int count,Stream* stream,char* buffer,int capacity,CharArray* out) {
 for(;;){int i=0;for(;i<count;i++)if(buffer[i]=='<')break;
 out->FUN_00a821d0(out->size,buffer,i);
 if(i!=count){stream->Reset();stream->Skip(i);return;}
 stream->Begin(capacity);count=stream->Read(buffer,capacity);if(!count)return;}
}
static __declspec(noinline) void FUN_00a80dd0(int count,Stream* stream,char* buffer,int capacity) {
 const char end[]="-->";int matched=0;
 for(;;){int i=0;for(;i<count;i++){char c=buffer[i];if(c==end[matched]){++matched;if(!end[matched])break;}else if(c!='-')matched=0;}
 if(i!=count){stream->Reset();stream->Skip(i+1);return;}
 stream->Begin(capacity);count=stream->Read(buffer,capacity);if(!count)return;}
}
static __declspec(noinline) char* FUN_00a80db0(char* s) {while(*s==' '||*s=='\t'||*s=='\n'||*s=='\r')++s;return s;}
inline bool IsAttributeSpace(char c) {return c==' '||c=='\t'||c=='\n'||c=='\r';}
static __declspec(noinline) int FUN_00a81460(char* text,AttrArray* out) {
 char* p=FUN_00a80db0(text);
 while(*p){
  {
   Attribute attr;
   char* start=p;
   while(!IsAttributeSpace(*p)&&*p!='='){
    if(*p++==0)return 1;
   }
   attr.name=String(start,(int)(p-start));
   p=FUN_00a80db0(p);
   if(*p!='=')return 1;
   p=FUN_00a80db0(p+1);
   if(*p!='"')return 1;
   ++p;
   start=p;
   while(*p!='"'){
    if(*p++==0)return 1;
   }
   attr.value=String(start,(int)(p-start));
   out->pushBack(attr);
   ++p;
  }
  p=FUN_00a80db0(p);
 }
 return 0;
}
void __cdecl FUN_009236d0(void*,const char*,...);
struct TokenArray {Token** data;int size;int capacity; __forceinline int getSize() const {return size;} __forceinline Token*& back() {return data[size-1];} __forceinline void popBack() {--size;}};
struct Parser {
 virtual void v00();virtual void v04();virtual void v08();virtual void v0c();virtual void Enqueue(Token*);
 int unk04;TokenArray pending;String error;
 int FUN_00a81960(Token** out,Stream* input);
};
int Parser::FUN_00a81960(Token** out,Stream* input) {
 Reader reader(input);
 if(pending.getSize()){*out=pending.back();pending.popBack();return 0;}
 *out=0; if(!reader.FUN_00a49c20()){error.assign(DAT_00e88414);return 1;}
 CharArray text;
 Stream* stream=reader.stream;
 char buffer[32];
 int cursor;
 stream->Begin(32);int count=stream->Read(buffer,32);
 while(count) {
   if(buffer[0]=='<') {
     if(count<2)break;
     if(buffer[1]=='?') {FUN_00a80f00(count,stream,buffer,32,0);}
     else if(count>=4&&!FUN_009232f0(DAT_00e88410,buffer+1,3)){FUN_00a80dd0(count,stream,buffer,32);}
     else if(text.getSize()) {
       stream->Reset();cursor=0;for(;cursor<text.getSize();cursor++){char c=text.data[cursor];if(c!=' '&&c!='\t'&&c!='\n'&&c!='\r')break;}
       if(cursor==text.getSize()){text.size=0;}
       else {text.push(0);char* textData=text.data;int len=FUN_00a80ba0(textData,textData);*out=new FUN_00a82310(textData,len);return 0;}
     } else {
       CharArray tag;FUN_00a80f00(count,stream,buffer,32,&tag);
       if(!tag.getSize()){FUN_009236d0(&error,DAT_00e883ec);return 1;}
       tag.push(0);int len=FUN_00a80ba0(tag.data,tag.data);
       if(len==-1){FUN_009236d0(&error,DAT_00e883e4);return 1;}
       tag.size=len;
       if(tag[1]=='/') {String name(tag.data+2);*out=new FUN_00a82290(name);return 0;}
       bool closed=tag[len-1]=='/';if(closed){tag[len-1]=0;--tag.size;}
       cursor=0;for(;cursor<tag.getSize();cursor++)if(tag[cursor]==' ')break;
       AttrArray attributes;
       if(cursor!=tag.getSize()){FUN_00a81460(tag.data+cursor,&attributes);tag[cursor]=0;tag.size=cursor;}
       char* name=tag.data+1;
       FUN_00a824f0* node=new FUN_00a824f0(String(name));
       node->attrs.FUN_00a82280(&attributes);
       if(closed)Enqueue(new FUN_00a82290(String(name)));
       *out=node;return 0;
     }
   } else {FUN_00a80f70(count,stream,buffer,32,&text);}
   stream->Begin(32);count=stream->Read(buffer,32);
 }
 FUN_009236d0(&error,DAT_00e883f8);return 1;
}
}


}   // namespace f3m_00a81960
