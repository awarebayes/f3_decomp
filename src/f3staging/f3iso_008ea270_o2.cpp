#include <new>
// src/f3staging/f3iso_008ea270_o2.cpp - Fallout 3 ISOLATED unit (20 Nov 2026) for 0x008ea270 alone: its verified match did not fit its
// original file. Make the match self-contained here (own types and helpers). Not a real source path.

#include "../../include/layout_support.h"
#include "../../include/fnv_asm_helpers.h"

// @f3 0x008ea270 (community match, verified in this file)
namespace f3m_008ea270 {
struct __declspec(align(16)) Vec { float x,y,z,w; void FUN_008d2a00(const void*,const void*); };
struct Proxy { void FUN_0091dd70(const Vec*); };
struct Body { char pad[8]; char* frame; };
struct Motion { char p0[8]; Proxy* proxy; char pC[0x400-12]; char direction[0x24]; Body* body;
    void FUN_0092ac40(); void FUN_008ea270(const Vec*);
};
void Motion::FUN_008ea270(const Vec* value) {
    char* frame=body?body->frame:0;
    Vec rotated; rotated.FUN_008d2a00(frame+0xa0,direction);
    Vec sum; sum.x=value->x+rotated.x;sum.y=value->y+rotated.y;sum.z=value->z+rotated.z;sum.w=value->w+rotated.w;
    Proxy* p=proxy;
    if(p) FUN_0092ac40();
    p->FUN_0091dd70(&sum);
    FUN_0092ac40();
}
}   // namespace f3m_008ea270
