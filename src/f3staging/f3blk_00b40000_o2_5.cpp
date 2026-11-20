// src/f3staging/f3blk_00b40000_o2.cpp - Fallout 3 STAGING unit (f3_staging_units.py, 3 Nov 2026) for functions with no New Vegas counterpart
// (128 KB address window, o2 code style). Not a real source path: move functions to their real units once identified.

#include "../../include/layout_support.h"
#include "../../include/fnv_asm_helpers.h"

// @f3 0x00b53970 (community match, verified in this file)
extern unsigned int DAT_0116efd4;
namespace f3m_00b53970 {
namespace event_dispatch_1591 {
struct Event { unsigned int unk00,unk04,unk08,payload0C; };
struct Shader {
    virtual void slot000();
    virtual void slot004();
    virtual void slot008();
    virtual void slot00C();
    virtual void slot010();
    virtual void slot014();
    virtual void slot018();
    virtual void slot01C();
    virtual void slot020();
    virtual void slot024();
    virtual void slot028();
    virtual void slot02C();
    virtual void slot030();
    virtual void slot034();
    virtual void slot038();
    virtual void slot03C();
    virtual void slot040();
    virtual void slot044();
    virtual void slot048();
    virtual void slot04C();
    virtual void slot050();
    virtual void slot054();
    virtual void slot058();
    virtual void slot05C();
    virtual void slot060();
    virtual void slot064();
    virtual void slot068();
    virtual void slot06C();
    virtual void slot070();
    virtual void slot074();
    virtual void slot078();
    virtual void slot07C();
    virtual void slot080();
    virtual void slot084();
    virtual void slot088();
    virtual void slot08C();
    virtual void slot090();
    virtual void slot094();
    virtual void slot098();
    virtual void slot09C();
    virtual void slot0A0();
    virtual void slot0A4();
    virtual void slot0A8();
    virtual void slot0AC();
    virtual void slot0B0();
    virtual void slot0B4();
    virtual void slot0B8();
    virtual void slot0BC();
    virtual void slot0C0();
    virtual void slot0C4();
    virtual void slot0C8();
    virtual void slot0CC();
    virtual void slot0D0();
    virtual void slot0D4();
    virtual void slot0D8();
    virtual void slot0DC();
    virtual void slot0E0();
    virtual void slot0E4();
    virtual void slot0E8();
    virtual void slot0EC();
    virtual void slot0F0();
    virtual void slot0F4();
    virtual void slot0F8();
    virtual void slot0FC();
    virtual void slot100();
    virtual void slot104();
    virtual void Update108();
    void FUN_00afea40(unsigned int payload, unsigned int slot, bool enabled);
    void FUN_00afea80(unsigned int payload, unsigned int slot, bool enabled);
    void FUN_00afeb90(unsigned int payload, unsigned int first, unsigned int second, bool enabled);
    void FUN_00affb80(Event* event);
    void FUN_00b53970(Event* event);
};
void Shader::FUN_00b53970(Event* event) {
    unsigned int payload=event->payload0C;
    switch (DAT_0116efd4) {
    case 219:
    case 222:
    case 228:
    case 231:
    case 237:
    case 240:
    case 246:
    case 249:
        FUN_00afea40(payload,0,false);
        FUN_00afea80(payload,1,false);
        FUN_00afeb90(payload,3,0,true);
        break;
    case 197:
    case 200:
    case 204:
    case 207:
    case 211:
    case 214:
    case 256:
    case 263:
    case 269:
    case 275:
    case 280:
    case 286:
    case 291:
    case 297:
        FUN_00afea40(payload,0,false);
        FUN_00afea80(payload,1,false);
        FUN_00afea40(payload,2,true);
        FUN_00afea80(payload,3,true);
        FUN_00afeb90(payload,4,0,true);
        break;
    case 307:
    case 310:
    case 319:
    case 322:
        FUN_00afea80(payload,0,false);
        FUN_00afeb90(payload,4,0,true);
        break;
    default:
        FUN_00affb80(event);
        return;
    }
    Update108();
}
}
}   // namespace f3m_00b53970
