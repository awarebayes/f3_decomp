#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
// src/f3staging/f3blk_00ca0000_o2.cpp - Fallout 3 STAGING unit (f3_staging_units.py, 3 Nov 2026) for functions with no New Vegas counterpart
// (128 KB address window, o2 code style). Not a real source path: move functions to their real units once identified.

#include "../../include/layout_support.h"
#include "../../include/fnv_asm_helpers.h"

// @f3 0x00ca0690 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0690 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e3d0;
void __cdecl FUN_00d8ac70();

void __cdecl FUN_00ca0690()
{
    DAT_00f5e3d0.Setting::Setting();
    atexit(FUN_00d8ac70);
}
}

// @f3 0x00ca0570 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0570 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e3ac;
void __cdecl FUN_00d8ac40();

void __cdecl FUN_00ca0570()
{
    DAT_00f5e3ac.Setting::Setting();
    atexit(FUN_00d8ac40);
}
}

// @f3 0x00ca08d0 (community match, verified in this file)
namespace f3m_00ca08d0 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0xf5e418 (vtable, value 1.0, name "fDispTargetFactionMult") is statically initialised;
// only the registration part of its constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e418;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8acd0();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca08d0()
{
    f3m_00ca08d0::DAT_00f5e418.f3m_00ca08d0::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca08d0::FUN_00d8acd0);
}

// @f3 0x00ca0030 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0030 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e304;
void __cdecl FUN_00d8ab60();

void __cdecl FUN_00ca0030()
{
    DAT_00f5e304.Setting::Setting();
    atexit(FUN_00d8ab60);
}
}

// @f3 0x00ca0090 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0090 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e310;
void __cdecl FUN_00d8ab70();

void __cdecl FUN_00ca0090()
{
    DAT_00f5e310.Setting::Setting();
    atexit(FUN_00d8ab70);
}
}

// @f3 0x00ca00f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca00f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e31c;
void __cdecl FUN_00d8ab80();

void __cdecl FUN_00ca00f0()
{
    DAT_00f5e31c.Setting::Setting();
    atexit(FUN_00d8ab80);
}
}

// @f3 0x00ca0150 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0150 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e328;
void __cdecl FUN_00d8ab90();

void __cdecl FUN_00ca0150()
{
    DAT_00f5e328.Setting::Setting();
    atexit(FUN_00d8ab90);
}
}

// @f3 0x00ca0f30 (community match, verified in this file)
namespace f3m_00ca0f30 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e4e4 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e4e4;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8ade0();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca0f30()
{
    f3m_00ca0f30::DAT_00f5e4e4.f3m_00ca0f30::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca0f30::FUN_00d8ade0);
}

// @f3 0x00ca01b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca01b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e334;
void __cdecl FUN_00d8aba0();

void __cdecl FUN_00ca01b0()
{
    DAT_00f5e334.Setting::Setting();
    atexit(FUN_00d8aba0);
}
}

// @f3 0x00ca0ed0 (community match, verified in this file)
namespace f3m_00ca0ed0 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e4d8 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e4d8;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8add0();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca0ed0()
{
    f3m_00ca0ed0::DAT_00f5e4d8.f3m_00ca0ed0::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca0ed0::FUN_00d8add0);
}

// @f3 0x00ca0210 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0210 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e340;
void __cdecl FUN_00d8abb0();

void __cdecl FUN_00ca0210()
{
    DAT_00f5e340.Setting::Setting();
    atexit(FUN_00d8abb0);
}
}

// @f3 0x00ca0e70 (community match, verified in this file)
namespace f3m_00ca0e70 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e4cc is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e4cc;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8adc0();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca0e70()
{
    f3m_00ca0e70::DAT_00f5e4cc.f3m_00ca0e70::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca0e70::FUN_00d8adc0);
}

// @f3 0x00ca0270 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0270 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e34c;
void __cdecl FUN_00d8abc0();

void __cdecl FUN_00ca0270()
{
    DAT_00f5e34c.Setting::Setting();
    atexit(FUN_00d8abc0);
}
}

// @f3 0x00ca0e10 (community match, verified in this file)
namespace f3m_00ca0e10 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e4c0 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e4c0;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8adb0();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca0e10()
{
    f3m_00ca0e10::DAT_00f5e4c0.f3m_00ca0e10::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca0e10::FUN_00d8adb0);
}

// @f3 0x00ca02d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca02d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e358;
void __cdecl FUN_00d8abd0();

void __cdecl FUN_00ca02d0()
{
    DAT_00f5e358.Setting::Setting();
    atexit(FUN_00d8abd0);
}
}

// @f3 0x00ca0db0 (community match, verified in this file)
namespace f3m_00ca0db0 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e4b4 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e4b4;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8ada0();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca0db0()
{
    f3m_00ca0db0::DAT_00f5e4b4.f3m_00ca0db0::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca0db0::FUN_00d8ada0);
}

// @f3 0x00ca0330 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0330 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e364;
void __cdecl FUN_00d8abe0();

void __cdecl FUN_00ca0330()
{
    DAT_00f5e364.Setting::Setting();
    atexit(FUN_00d8abe0);
}
}

// @f3 0x00ca0d50 (community match, verified in this file)
namespace f3m_00ca0d50 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e4a8 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e4a8;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8ad90();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca0d50()
{
    f3m_00ca0d50::DAT_00f5e4a8.f3m_00ca0d50::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca0d50::FUN_00d8ad90);
}

// @f3 0x00ca0390 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0390 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e370;
void __cdecl FUN_00d8abf0();

void __cdecl FUN_00ca0390()
{
    DAT_00f5e370.Setting::Setting();
    atexit(FUN_00d8abf0);
}
}

// @f3 0x00ca0cf0 (community match, verified in this file)
namespace f3m_00ca0cf0 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e49c is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e49c;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8ad80();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca0cf0()
{
    f3m_00ca0cf0::DAT_00f5e49c.f3m_00ca0cf0::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca0cf0::FUN_00d8ad80);
}

// @f3 0x00ca03f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca03f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e37c;
void __cdecl FUN_00d8ac00();

void __cdecl FUN_00ca03f0()
{
    DAT_00f5e37c.Setting::Setting();
    atexit(FUN_00d8ac00);
}
}

// @f3 0x00ca0c90 (community match, verified in this file)
namespace f3m_00ca0c90 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e490 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e490;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8ad70();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca0c90()
{
    f3m_00ca0c90::DAT_00f5e490.f3m_00ca0c90::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca0c90::FUN_00d8ad70);
}

// @f3 0x00ca0450 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0450 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e388;
void __cdecl FUN_00d8ac10();

void __cdecl FUN_00ca0450()
{
    DAT_00f5e388.Setting::Setting();
    atexit(FUN_00d8ac10);
}
}

// @f3 0x00ca0bd0 (community match, verified in this file)
namespace f3m_00ca0bd0 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e478 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e478;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8ad50();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca0bd0()
{
    f3m_00ca0bd0::DAT_00f5e478.f3m_00ca0bd0::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca0bd0::FUN_00d8ad50);
}

// @f3 0x00ca04b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca04b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e394;
void __cdecl FUN_00d8ac20();

void __cdecl FUN_00ca04b0()
{
    DAT_00f5e394.Setting::Setting();
    atexit(FUN_00d8ac20);
}
}

// @f3 0x00ca0b70 (community match, verified in this file)
namespace f3m_00ca0b70 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e46c is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e46c;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8ad40();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca0b70()
{
    f3m_00ca0b70::DAT_00f5e46c.f3m_00ca0b70::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca0b70::FUN_00d8ad40);
}

// @f3 0x00ca0510 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0510 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e3a0;
void __cdecl FUN_00d8ac30();

void __cdecl FUN_00ca0510()
{
    DAT_00f5e3a0.Setting::Setting();
    atexit(FUN_00d8ac30);
}
}

// @f3 0x00ca0b10 (community match, verified in this file)
namespace f3m_00ca0b10 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e460 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e460;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8ad30();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca0b10()
{
    f3m_00ca0b10::DAT_00f5e460.f3m_00ca0b10::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca0b10::FUN_00d8ad30);
}

// @f3 0x00ca05d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca05d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e3b8;
void __cdecl FUN_00d8ac50();

void __cdecl FUN_00ca05d0()
{
    DAT_00f5e3b8.Setting::Setting();
    atexit(FUN_00d8ac50);
}
}

// @f3 0x00ca0630 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0630 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e3c4;
void __cdecl FUN_00d8ac60();

void __cdecl FUN_00ca0630()
{
    DAT_00f5e3c4.Setting::Setting();
    atexit(FUN_00d8ac60);
}
}

// @f3 0x00ca0ab0 (community match, verified in this file)
namespace f3m_00ca0ab0 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e454 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e454;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8ad20();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca0ab0()
{
    f3m_00ca0ab0::DAT_00f5e454.f3m_00ca0ab0::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca0ab0::FUN_00d8ad20);
}

// @f3 0x00ca06f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca06f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e3dc;
void __cdecl FUN_00d8ac80();

void __cdecl FUN_00ca06f0()
{
    DAT_00f5e3dc.Setting::Setting();
    atexit(FUN_00d8ac80);
}
}

// @f3 0x00ca0a50 (community match, verified in this file)
namespace f3m_00ca0a50 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e448 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e448;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8ad10();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca0a50()
{
    f3m_00ca0a50::DAT_00f5e448.f3m_00ca0a50::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca0a50::FUN_00d8ad10);
}

// @f3 0x00ca0750 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0750 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e3e8;
void __cdecl FUN_00d8ac90();

void __cdecl FUN_00ca0750()
{
    DAT_00f5e3e8.Setting::Setting();
    atexit(FUN_00d8ac90);
}
}

// @f3 0x00ca09f0 (community match, verified in this file)
namespace f3m_00ca09f0 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e43c is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e43c;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8ad00();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca09f0()
{
    f3m_00ca09f0::DAT_00f5e43c.f3m_00ca09f0::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca09f0::FUN_00d8ad00);
}

// @f3 0x00ca07b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca07b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e3f4;
void __cdecl FUN_00d8aca0();

void __cdecl FUN_00ca07b0()
{
    DAT_00f5e3f4.Setting::Setting();
    atexit(FUN_00d8aca0);
}
}

// @f3 0x00ca0990 (community match, verified in this file)
namespace f3m_00ca0990 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e430 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e430;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8acf0();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca0990()
{
    f3m_00ca0990::DAT_00f5e430.f3m_00ca0990::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca0990::FUN_00d8acf0);
}

// @f3 0x00ca0810 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0810 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e400;
void __cdecl FUN_00d8acb0();

void __cdecl FUN_00ca0810()
{
    DAT_00f5e400.Setting::Setting();
    atexit(FUN_00d8acb0);
}
}

// @f3 0x00ca0930 (community match, verified in this file)
namespace f3m_00ca0930 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e424 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e424;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8ace0();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca0930()
{
    f3m_00ca0930::DAT_00f5e424.f3m_00ca0930::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca0930::FUN_00d8ace0);
}

// @f3 0x00ca0870 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0870 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e40c;
void __cdecl FUN_00d8acc0();

void __cdecl FUN_00ca0870()
{
    DAT_00f5e40c.Setting::Setting();
    atexit(FUN_00d8acc0);
}
}

// @f3 0x00ca0c30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca0c30 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e484;
void __cdecl FUN_00d8ad60();

void __cdecl FUN_00ca0c30()
{
    DAT_00f5e484.Setting::Setting();
    atexit(FUN_00d8ad60);
}
}

// @f3 0x00caf780 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caf780 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f602d8;
void __cdecl FUN_00d8d450();

void __cdecl FUN_00caf780()
{
    DAT_00f602d8.Setting::Setting();
    atexit(FUN_00d8d450);
}
}

// @f3 0x00cbd930 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbd930 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61f4c;
void __cdecl FUN_00d8f9e0();

void __cdecl FUN_00cbd930()
{
    DAT_00f61f4c.Setting::Setting();
    atexit(FUN_00d8f9e0);
}
}

// @f3 0x00cbe590 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbe590 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f620d8;
void __cdecl FUN_00d8fbf0();

void __cdecl FUN_00cbe590()
{
    DAT_00f620d8.Setting::Setting();
    atexit(FUN_00d8fbf0);
}
}

// @f3 0x00ca5130 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca5130 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ed24;
void __cdecl FUN_00d8b8e0();

void __cdecl FUN_00ca5130()
{
    DAT_00f5ed24.Setting::Setting();
    atexit(FUN_00d8b8e0);
}
}

// @f3 0x00ca6b70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6b70 {
    struct Setting;
    struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
    extern Manager* DAT_010701a8;
    void FUN_00403080();
    struct Cleanup {
        void FUN_00403170();
        __forceinline ~Cleanup() { FUN_00403170(); }
    };
    struct Setting : Cleanup {
        __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
    };
    extern Setting DAT_00f5e424;
    void __cdecl FUN_00d8bd40();
    void FUN_00c00d1f(int a);

    void __cdecl FUN_00ca6b70()
    {
        DAT_00f5e424.Setting::Setting();
        atexit(FUN_00d8bd40);
    }
}

// @f3 0x00cae5e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cae5e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f600a4;
void __cdecl FUN_00d8d160();

void __cdecl FUN_00cae5e0()
{
    DAT_00f600a4.Setting::Setting();
    atexit(FUN_00d8d160);
}
}

// @f3 0x00ca1350 (community match, verified in this file)
namespace f3m_00ca1350 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e568;
void __cdecl FUN_00d8ae90();

void __cdecl FUN_00ca1350()
{
    DAT_00f5e568.Setting::Setting();
    atexit(FUN_00d8ae90);
}
}

// @f3 0x00caa2c0 (community match, verified in this file)
namespace f3m_00caa2c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f840;
void __cdecl FUN_00d8c630();

void __cdecl FUN_00caa2c0()
{
    DAT_00f5f840.Setting::Setting();
    atexit(FUN_00d8c630);
}
}

// @f3 0x00cb6550 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb6550 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f610d0;
void __cdecl FUN_00d8e690();

void __cdecl FUN_00cb6550()
{
    DAT_00f610d0.Setting::Setting();
    atexit(FUN_00d8e690);
}
}

// @f3 0x00ca4d10 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca4d10 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eca0;
void __cdecl FUN_00d8b830();

void __cdecl FUN_00ca4d10()
{
    DAT_00f5eca0.Setting::Setting();
    atexit(FUN_00d8b830);
}
}

// @f3 0x00cbad50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbad50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f619d0;
void __cdecl FUN_00d8f290();

void __cdecl FUN_00cbad50()
{
    DAT_00f619d0.Setting::Setting();
    atexit(FUN_00d8f290);
}
}

// @f3 0x00cb50c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb50c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60e00;
void __cdecl FUN_00d8e330();

void __cdecl FUN_00cb50c0()
{
    DAT_00f60e00.Setting::Setting();
    atexit(FUN_00d8e330);
}
}

// @f3 0x00cad8c0 (community match, verified in this file)
namespace f3m_00cad8c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ff00;
void __cdecl FUN_00d8cf30();

void __cdecl FUN_00cad8c0()
{
    DAT_00f5ff00.Setting::Setting();
    atexit(FUN_00d8cf30);
}
}

// @f3 0x00cbb890 (community match, verified in this file)
namespace f3m_00cbb890 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61b38;
void __cdecl FUN_00d8f470();

void __cdecl FUN_00cbb890()
{
    DAT_00f61b38.Setting::Setting();
    atexit(FUN_00d8f470);
}
}

// @f3 0x00cbc010 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbc010 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61c28;
void __cdecl FUN_00d8f5b0();

void __cdecl FUN_00cbc010()
{
    DAT_00f61c28.Setting::Setting();
    atexit(FUN_00d8f5b0);
}
}

// @f3 0x00cb6010 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb6010 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61028;
void __cdecl FUN_00d8e5b0();

void __cdecl FUN_00cb6010()
{
    DAT_00f61028.Setting::Setting();
    atexit(FUN_00d8e5b0);
}
}

// @f3 0x00cbf670 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbf670 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f622f4;
void __cdecl FUN_00d8fec0();

void __cdecl FUN_00cbf670()
{
    DAT_00f622f4.Setting::Setting();
    atexit(FUN_00d8fec0);
}
}

// @f3 0x00cb99d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb99d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61760;
void __cdecl FUN_00d8ef50();

void __cdecl FUN_00cb99d0()
{
    DAT_00f61760.Setting::Setting();
    atexit(FUN_00d8ef50);
}
}

// @f3 0x00ca1fb0 (community match, verified in this file)
namespace f3m_00ca1fb0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e6f4;
void __cdecl FUN_00d8b0a0();

void __cdecl FUN_00ca1fb0()
{
    DAT_00f5e6f4.Setting::Setting();
    atexit(FUN_00d8b0a0);
}
}

// @f3 0x00cbc550 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbc550 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61cd0;
void __cdecl FUN_00d8f690();

void __cdecl FUN_00cbc550()
{
    DAT_00f61cd0.Setting::Setting();
    atexit(FUN_00d8f690);
}
}

// @f3 0x00cafd80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cafd80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60398;
void __cdecl FUN_00d8d550();

void __cdecl FUN_00cafd80()
{
    DAT_00f60398.Setting::Setting();
    atexit(FUN_00d8d550);
}
}

// @f3 0x00cb9d90 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb9d90 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f617d8;
void __cdecl FUN_00d8eff0();

void __cdecl FUN_00cb9d90()
{
    DAT_00f617d8.Setting::Setting();
    atexit(FUN_00d8eff0);
}
}

// @f3 0x00ca6f90 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca6f90 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f130;
void __cdecl FUN_00d8bdf0();

void __cdecl FUN_00ca6f90()
{
    DAT_00f5f130.Setting::Setting();
    atexit(FUN_00d8bdf0);
}
}

// @f3 0x00ca6d50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca6d50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f0e8;
void __cdecl FUN_00d8bd90();

void __cdecl FUN_00ca6d50()
{
    DAT_00f5f0e8.Setting::Setting();
    atexit(FUN_00d8bd90);
}
}

// @f3 0x00ca1d10 (community match, verified in this file)
#include <stdlib.h>
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e6a0;
void __cdecl FUN_00d8b030();

void __cdecl FUN_00ca1d10()
{
    DAT_00f5e6a0.Setting::Setting();
    atexit(FUN_00d8b030);
}

// @f3 0x00ca1170 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1170 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e52c;
void __cdecl FUN_00d8ae40();

void __cdecl FUN_00ca1170()
{
    DAT_00f5e52c.Setting::Setting();
    atexit(FUN_00d8ae40);
}
}

// @f3 0x00ca2610 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2610 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e7c0;
void __cdecl FUN_00d8b1b0();

void __cdecl FUN_00ca2610()
{
    DAT_00f5e7c0.Setting::Setting();
    atexit(FUN_00d8b1b0);
}
}

// @f3 0x00cb5f50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb5f50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61010;
void __cdecl FUN_00d8e590();

void __cdecl FUN_00cb5f50()
{
    DAT_00f61010.Setting::Setting();
    atexit(FUN_00d8e590);
}
}

// @f3 0x00ca4bf0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca4bf0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ec7c;
void __cdecl FUN_00d8b800();

void __cdecl FUN_00ca4bf0()
{
    DAT_00f5ec7c.Setting::Setting();
    atexit(FUN_00d8b800);
}
}

// @f3 0x00cba690 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cba690 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f618f8;
void __cdecl FUN_00d8f170();

void __cdecl FUN_00cba690()
{
    DAT_00f618f8.Setting::Setting();
    atexit(FUN_00d8f170);
}
}

// @f3 0x00cbf010 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbf010 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62228;
void __cdecl FUN_00d8fdb0();
}

void __cdecl FUN_00cbf010()
{
    f3m_00cbf010::DAT_00f62228.f3m_00cbf010::Setting::Setting();
    atexit(f3m_00cbf010::FUN_00d8fdb0);
}

// @f3 0x00ca7500 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca7500 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f288;
void __cdecl FUN_00d8be90();

void __cdecl FUN_00ca7500()
{
    DAT_00f5f288.Setting::Setting();
    atexit(FUN_00d8be90);
}
}

// @f3 0x00cb4400 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb4400 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60c68;
void __cdecl FUN_00d8e110();

void __cdecl FUN_00cb4400()
{
    DAT_00f60c68.Setting::Setting();
    atexit(FUN_00d8e110);
}
}

// @f3 0x00ca5a90 (community match, verified in this file)
namespace f3m_00ca5a90 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ee50;
void __cdecl FUN_00d8ba70();

void __cdecl FUN_00ca5a90()
{
    DAT_00f5ee50.Setting::Setting();
    atexit(FUN_00d8ba70);
}
}   // namespace f3m_00ca5a90

// @f3 0x00caae00 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caae00 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f9a8;
void __cdecl FUN_00d8c810();

void __cdecl FUN_00caae00()
{
    DAT_00f5f9a8.Setting::Setting();
    atexit(FUN_00d8c810);
}
}

// @f3 0x00cb0e60 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb0e60 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f605b4;
void __cdecl FUN_00d8d820();

void __cdecl FUN_00cb0e60()
{
    DAT_00f605b4.Setting::Setting();
    atexit(FUN_00d8d820);
}
}

// @f3 0x00cbba10 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbba10 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61b68;
void __cdecl FUN_00d8f4b0();

void __cdecl FUN_00cbba10()
{
    DAT_00f61b68.Setting::Setting();
    atexit(FUN_00d8f4b0);
}
}

// @f3 0x00cbd810 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbd810 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61f28;
void __cdecl FUN_00d8f9b0();

void __cdecl FUN_00cbd810()
{
    DAT_00f61f28.Setting::Setting();
    atexit(FUN_00d8f9b0);
}
}

// @f3 0x00cb1b20 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb1b20 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6074c;
void __cdecl FUN_00d8da40();

void __cdecl FUN_00cb1b20()
{
    DAT_00f6074c.Setting::Setting();
    atexit(FUN_00d8da40);
}
}

// @f3 0x00ca6450 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca6450 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5efc8;
void __cdecl FUN_00d8bc10();

void __cdecl FUN_00ca6450()
{
    DAT_00f5efc8.Setting::Setting();
    atexit(FUN_00d8bc10);
}
}

// @f3 0x00cbd570 (community match, verified in this file)
namespace f3m_00cbd570 {

struct RegistrySetting;
struct Manager { virtual void v00(); virtual void Register(RegistrySetting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct RegistrySetting : Cleanup {
    __forceinline RegistrySetting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern RegistrySetting DAT_00f61ed4;
void __cdecl FUN_00d8f940();

void __cdecl FUN_00cbd570()
{
    DAT_00f61ed4.RegistrySetting::RegistrySetting();
    atexit(FUN_00d8f940);
}
}   // namespace f3m_00cbd570

// @f3 0x00ca2790 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2790 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e7f0;
void __cdecl FUN_00d8b1f0();

void __cdecl FUN_00ca2790()
{
    DAT_00f5e7f0.Setting::Setting();
    atexit(FUN_00d8b1f0);
}
}

// @f3 0x00cb0620 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb0620 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f604ac;
void __cdecl FUN_00d8d6c0();
}

void __cdecl FUN_00cb0620()
{
    f3m_00cb0620::DAT_00f604ac.f3m_00cb0620::Setting::Setting();
    atexit(f3m_00cb0620::FUN_00d8d6c0);
}

// @f3 0x00cb6970 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb6970 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61154;
void __cdecl FUN_00d8e740();

void __cdecl FUN_00cb6970()
{
    DAT_00f61154.Setting::Setting();
    atexit(FUN_00d8e740);
}
}

// @f3 0x00caee20 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caee20 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f601ac;
void __cdecl FUN_00d8d2c0();

void __cdecl FUN_00caee20()
{
    DAT_00f601ac.Setting::Setting();
    atexit(FUN_00d8d2c0);
}
}

// @f3 0x00ca27f0 (community match, verified in this file)
namespace f3m_00ca27f0 {

struct RegistrySetting;
struct Manager { virtual void v00(); virtual void Register(RegistrySetting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct RegistrySetting : Cleanup {
    __forceinline RegistrySetting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern RegistrySetting DAT_00f5e7fc;
void __cdecl FUN_00d8b200();

void __cdecl FUN_00ca27f0()
{
    DAT_00f5e7fc.RegistrySetting::RegistrySetting();
    atexit(FUN_00d8b200);
}
}   // namespace f3m_00ca27f0

// @f3 0x00ca6ab0 (community match, verified in this file)
namespace f3m_00ca6ab0 {

struct RegistrySetting;
struct Manager { virtual void v00(); virtual void Register(RegistrySetting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct RegistrySetting : Cleanup {
    __forceinline RegistrySetting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern RegistrySetting DAT_00f5f094;
void __cdecl FUN_00d8bd20();

void __cdecl FUN_00ca6ab0()
{
    DAT_00f5f094.RegistrySetting::RegistrySetting();
    atexit(FUN_00d8bd20);
}
}   // namespace f3m_00ca6ab0

// @f3 0x00cb97f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb97f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61724;
void __cdecl FUN_00d8ef00();

void __cdecl FUN_00cb97f0()
{
    DAT_00f61724.Setting::Setting();
    atexit(FUN_00d8ef00);
}
}

// @f3 0x00cbf1f0 (community match, verified in this file)
namespace f3m_00cbf1f0 {

struct RegistrySetting;
struct Manager { virtual void v00(); virtual void Register(RegistrySetting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct RegistrySetting : Cleanup {
    __forceinline RegistrySetting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern RegistrySetting DAT_00f62264;
void __cdecl FUN_00d8fe00();

void __cdecl FUN_00cbf1f0()
{
    DAT_00f62264.RegistrySetting::RegistrySetting();
    atexit(FUN_00d8fe00);
}
}   // namespace f3m_00cbf1f0

// @f3 0x00ca12f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca12f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e55c;
void __cdecl FUN_00d8ae80();

void __cdecl FUN_00ca12f0()
{
    DAT_00f5e55c.Setting::Setting();
    atexit(FUN_00d8ae80);
}
}

// @f3 0x00cb02c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb02c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60440;
void __cdecl FUN_00d8d630();

void __cdecl FUN_00cb02c0()
{
    DAT_00f60440.Setting::Setting();
    atexit(FUN_00d8d630);
}
}

// @f3 0x00ca40b0 (community match, verified in this file)
namespace f3m_00ca40b0 {

struct RegistrySetting;
struct Manager { virtual void v00(); virtual void Register(RegistrySetting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct RegistrySetting : Cleanup {
    __forceinline RegistrySetting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern RegistrySetting DAT_00f5eb14;
void __cdecl FUN_00d8b620();

void __cdecl FUN_00ca40b0()
{
    DAT_00f5eb14.RegistrySetting::RegistrySetting();
    atexit(FUN_00d8b620);
}
}   // namespace f3m_00ca40b0

// @f3 0x00cb6af0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb6af0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61184;
void __cdecl FUN_00d8e780();

void __cdecl FUN_00cb6af0()
{
    DAT_00f61184.Setting::Setting();
    atexit(FUN_00d8e780);
}
}

// @f3 0x00cbf730 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbf730 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6230c;
void __cdecl FUN_00d8fee0();

void __cdecl FUN_00cbf730()
{
    DAT_00f6230c.Setting::Setting();
    atexit(FUN_00d8fee0);
}
}

// @f3 0x00cb9550 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb9550 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f616d0;
void __cdecl FUN_00d8ee90();

void __cdecl FUN_00cb9550()
{
    DAT_00f616d0.Setting::Setting();
    atexit(FUN_00d8ee90);
}
}

// @f3 0x00cb07a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb07a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f604dc;
void __cdecl FUN_00d8d700();

void __cdecl FUN_00cb07a0()
{
    DAT_00f604dc.Setting::Setting();
    atexit(FUN_00d8d700);
}
}

// @f3 0x00cb6370 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb6370 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61094;
void __cdecl FUN_00d8e640();
}

void __cdecl FUN_00cb6370()
{
    f3m_00cb6370::DAT_00f61094.f3m_00cb6370::Setting::Setting();
    atexit(f3m_00cb6370::FUN_00d8e640);
}

// @f3 0x00cac7e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cac7e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fce4;
void __cdecl FUN_00d8cc60();

void __cdecl FUN_00cac7e0()
{
    DAT_00f5fce4.Setting::Setting();
    atexit(FUN_00d8cc60);
}
}

// @f3 0x00ca5df0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca5df0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eebc;
void __cdecl FUN_00d8bb00();

void __cdecl FUN_00ca5df0()
{
    DAT_00f5eebc.Setting::Setting();
    atexit(FUN_00d8bb00);
}
}

// @f3 0x00ca5670 (community match, verified in this file)
namespace f3m_00ca5670 {

struct Manager2 { virtual void v00(); virtual void Register(void* setting); };
extern Manager2* DAT_010701a8;
void __cdecl FUN_00403080();
struct Cleanup2 { void FUN_00403170(); __forceinline ~Cleanup2() { FUN_00403170(); } };
struct Setting2 : Cleanup2 { __forceinline Setting2() { FUN_00403080(); DAT_010701a8->Register(this); } };
extern Setting2 DAT_00f5edcc;
void __cdecl FUN_00d8b9c0();

void FUN_00ca5670()
{
    DAT_00f5edcc.Setting2::Setting2();
    atexit(FUN_00d8b9c0);
}
}   // namespace f3m_00ca5670

// @f3 0x00cbed70 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbed70 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f621d4;
void __cdecl FUN_00d8fd40();

void __cdecl FUN_00cbed70()
{
    DAT_00f621d4.Setting::Setting();
    atexit(FUN_00d8fd40);
}
}

// @f3 0x00cbc850 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbc850 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61d30;
void __cdecl FUN_00d8f710();

void __cdecl FUN_00cbc850()
{
    DAT_00f61d30.Setting::Setting();
    atexit(FUN_00d8f710);
}
}

// @f3 0x00ca5490 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca5490 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ed90;
void __cdecl FUN_00d8b970();

void __cdecl FUN_00ca5490()
{
    DAT_00f5ed90.Setting::Setting();
    atexit(FUN_00d8b970);
}
}

// @f3 0x00ca1590 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1590 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e5b0;
void __cdecl FUN_00d8aef0();

void __cdecl FUN_00ca1590()
{
    DAT_00f5e5b0.Setting::Setting();
    atexit(FUN_00d8aef0);
}
}

// @f3 0x00cabca0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cabca0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fb7c;
void __cdecl FUN_00d8ca80();

void __cdecl FUN_00cabca0()
{
    DAT_00f5fb7c.Setting::Setting();
    atexit(FUN_00d8ca80);
}
}

// @f3 0x00cbceb0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbceb0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61dfc;
void __cdecl FUN_00d8f820();

void __cdecl FUN_00cbceb0()
{
    DAT_00f61dfc.Setting::Setting();
    atexit(FUN_00d8f820);
}
}

// @f3 0x00ca8760 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca8760 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5f4d4;
void __cdecl FUN_00403080();
void __cdecl FUN_00d8c1a0();
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}
void __cdecl FUN_00ca8760()
{
    f3m_00ca8760::DAT_00f5f4d4.f3m_00ca8760::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca8760::FUN_00d8c1a0);
}

// @f3 0x00cb2300 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb2300 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60848;
void __cdecl FUN_00d8db90();

void __cdecl FUN_00cb2300()
{
    DAT_00f60848.Setting::Setting();
    atexit(FUN_00d8db90);
}
}

// @f3 0x00ca6570 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca6570 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5efec;
void __cdecl FUN_00d8bc40();

void __cdecl FUN_00ca6570()
{
    DAT_00f5efec.Setting::Setting();
    atexit(FUN_00d8bc40);
}
}

// @f3 0x00cb5240 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb5240 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60e30;
void __cdecl FUN_00d8e370();

void __cdecl FUN_00cb5240()
{
    DAT_00f60e30.Setting::Setting();
    atexit(FUN_00d8e370);
}
}

// @f3 0x00cb5960 (community match, verified in this file)
namespace f3m_00cb5960 {

struct Manager2 { virtual void v00(); virtual void Register(void* setting); };
extern Manager2* DAT_010701a8;
void __cdecl FUN_00403080();
struct Cleanup2 { void FUN_00403170(); __forceinline ~Cleanup2() { FUN_00403170(); } };
struct Setting2 : Cleanup2 { __forceinline Setting2() { FUN_00403080(); DAT_010701a8->Register(this); } };
extern Setting2 DAT_00f60f14;
void __cdecl FUN_00d8e4a0();

void FUN_00cb5960()
{
    DAT_00f60f14.Setting2::Setting2();
    atexit(FUN_00d8e4a0);
}
}   // namespace f3m_00cb5960

// @f3 0x00cb1700 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb1700 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f606c8;
void __cdecl FUN_00d8d990();

void __cdecl FUN_00cb1700()
{
    DAT_00f606c8.Setting::Setting();
    atexit(FUN_00d8d990);
}
}

// @f3 0x00cbaf30 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbaf30 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61a0c;
void __cdecl FUN_00d8f2e0();

void __cdecl FUN_00cbaf30()
{
    DAT_00f61a0c.Setting::Setting();
    atexit(FUN_00d8f2e0);
}
}

// @f3 0x00ca19b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca19b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e634;
void __cdecl FUN_00d8afa0();

void __cdecl FUN_00ca19b0()
{
    DAT_00f5e634.Setting::Setting();
    atexit(FUN_00d8afa0);
}
}

// @f3 0x00ca7e60 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca7e60 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f3b4;
void __cdecl FUN_00d8c020();

void __cdecl FUN_00ca7e60()
{
    DAT_00f5f3b4.Setting::Setting();
    atexit(FUN_00d8c020);
}
}

// @f3 0x00cb7030 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb7030 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6122c;
void __cdecl FUN_00d8e860();

void __cdecl FUN_00cb7030()
{
    DAT_00f6122c.Setting::Setting();
    atexit(FUN_00d8e860);
}
}

// @f3 0x00ca72f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca72f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f19c;
void __cdecl FUN_00d8be80();

void __cdecl FUN_00ca72f0()
{
    DAT_00f5f19c.Setting::Setting();
    atexit(FUN_00d8be80);
}
}

// @f3 0x00ca3570 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca3570 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e9ac;
void __cdecl FUN_00d8b440();

void __cdecl FUN_00ca3570()
{
    DAT_00f5e9ac.Setting::Setting();
    atexit(FUN_00d8b440);
}
}

// @f3 0x00ca5730 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca5730 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ede4;
void __cdecl FUN_00d8b9e0();

void __cdecl FUN_00ca5730()
{
    DAT_00f5ede4.Setting::Setting();
    atexit(FUN_00d8b9e0);
}
}

// @f3 0x00ca4cb0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca4cb0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ec94;
void __cdecl FUN_00d8b820();

void __cdecl FUN_00ca4cb0()
{
    DAT_00f5ec94.Setting::Setting();
    atexit(FUN_00d8b820);
}
}

// @f3 0x00ca18f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca18f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e61c;
void __cdecl FUN_00d8af80();

void __cdecl FUN_00ca18f0()
{
    DAT_00f5e61c.Setting::Setting();
    atexit(FUN_00d8af80);
}
}

// @f3 0x00cbb350 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbb350 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61a90;
void __cdecl FUN_00d8f390();

void __cdecl FUN_00cbb350()
{
    DAT_00f61a90.Setting::Setting();
    atexit(FUN_00d8f390);
}
}

// @f3 0x00ca8a60 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca8a60 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f534;
void __cdecl FUN_00d8c220();

void __cdecl FUN_00ca8a60()
{
    DAT_00f5f534.Setting::Setting();
    atexit(FUN_00d8c220);
}
}

// @f3 0x00ca51f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca51f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ed3c;
void __cdecl FUN_00d8b900();

void __cdecl FUN_00ca51f0()
{
    DAT_00f5ed3c.Setting::Setting();
    atexit(FUN_00d8b900);
}
}

// @f3 0x00ca5f70 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca5f70 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eeec;
void __cdecl FUN_00d8bb40();

void __cdecl FUN_00ca5f70()
{
    DAT_00f5eeec.Setting::Setting();
    atexit(FUN_00d8bb40);
}
}

// @f3 0x00cacea0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cacea0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fdbc;
void __cdecl FUN_00d8cd80();

void __cdecl FUN_00cacea0()
{
    DAT_00f5fdbc.Setting::Setting();
    atexit(FUN_00d8cd80);
}
}

// @f3 0x00cab100 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cab100 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fa08;
void __cdecl FUN_00d8c890();

void __cdecl FUN_00cab100()
{
    DAT_00f5fa08.Setting::Setting();
    atexit(FUN_00d8c890);
}
}

// @f3 0x00cb9070 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb9070 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61634;
void __cdecl FUN_00d8edc0();

void __cdecl FUN_00cb9070()
{
    DAT_00f61634.Setting::Setting();
    atexit(FUN_00d8edc0);
}
}

// @f3 0x00cb8170 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb8170 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61454;
void __cdecl FUN_00d8eb40();

void __cdecl FUN_00cb8170()
{
    DAT_00f61454.Setting::Setting();
    atexit(FUN_00d8eb40);
}
}

// @f3 0x00ca7230 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca7230 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f184;
void __cdecl FUN_00d8be60();

void __cdecl FUN_00ca7230()
{
    DAT_00f5f184.Setting::Setting();
    atexit(FUN_00d8be60);
}
}

// @f3 0x00cbf490 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbf490 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f622b8;
void __cdecl FUN_00d8fe70();

void __cdecl FUN_00cbf490()
{
    DAT_00f622b8.Setting::Setting();
    atexit(FUN_00d8fe70);
}
}

// @f3 0x00cba1b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cba1b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6185c;
void __cdecl FUN_00d8f0a0();

void __cdecl FUN_00cba1b0()
{
    DAT_00f6185c.Setting::Setting();
    atexit(FUN_00d8f0a0);
}
}

// @f3 0x00cb1520 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb1520 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6068c;
void __cdecl FUN_00d8d940();

void __cdecl FUN_00cb1520()
{
    DAT_00f6068c.Setting::Setting();
    atexit(FUN_00d8d940);
}
}

// @f3 0x00cae580 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cae580 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60098;
void __cdecl FUN_00d8d150();

void __cdecl FUN_00cae580()
{
    DAT_00f60098.Setting::Setting();
    atexit(FUN_00d8d150);
}
}

// @f3 0x00cbc4f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbc4f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61cc4;
void __cdecl FUN_00d8f680();

void __cdecl FUN_00cbc4f0()
{
    DAT_00f61cc4.Setting::Setting();
    atexit(FUN_00d8f680);
}
}

// @f3 0x00cbbf50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbbf50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61c10;
void __cdecl FUN_00d8f590();

void __cdecl FUN_00cbbf50()
{
    DAT_00f61c10.Setting::Setting();
    atexit(FUN_00d8f590);
}
}

// @f3 0x00cbe650 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbe650 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f620f0;
void __cdecl FUN_00d8fc10();

void __cdecl FUN_00cbe650()
{
    DAT_00f620f0.Setting::Setting();
    atexit(FUN_00d8fc10);
}
}

// @f3 0x00cae160 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cae160 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60014;
void __cdecl FUN_00d8d0a0();

void __cdecl FUN_00cae160()
{
    DAT_00f60014.Setting::Setting();
    atexit(FUN_00d8d0a0);
}
}

// @f3 0x00cac780 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cac780 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fcd8;
void __cdecl FUN_00d8cc50();

void __cdecl FUN_00cac780()
{
    DAT_00f5fcd8.Setting::Setting();
    atexit(FUN_00d8cc50);
}
}

// @f3 0x00cb6b50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb6b50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61190;
void __cdecl FUN_00d8e790();

void __cdecl FUN_00cb6b50()
{
    DAT_00f61190.Setting::Setting();
    atexit(FUN_00d8e790);
}
}

// @f3 0x00cbf6d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbf6d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62300;
void __cdecl FUN_00d8fed0();

void __cdecl FUN_00cbf6d0()
{
    DAT_00f62300.Setting::Setting();
    atexit(FUN_00d8fed0);
}
}

// @f3 0x00cb3ec0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb3ec0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60bc0;
void __cdecl FUN_00d8e030();

void __cdecl FUN_00cb3ec0()
{
    DAT_00f60bc0.Setting::Setting();
    atexit(FUN_00d8e030);
}
}

// @f3 0x00ca5310 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca5310 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ed60;
void __cdecl FUN_00d8b930();

void __cdecl FUN_00ca5310()
{
    DAT_00f5ed60.Setting::Setting();
    atexit(FUN_00d8b930);
}
}

// @f3 0x00cacfc0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cacfc0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fde0;
void __cdecl FUN_00d8cdb0();

void __cdecl FUN_00cacfc0()
{
    DAT_00f5fde0.Setting::Setting();
    atexit(FUN_00d8cdb0);
}
}

// @f3 0x00cad500 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cad500 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fe88;
void __cdecl FUN_00d8ce90();

void __cdecl FUN_00cad500()
{
    DAT_00f5fe88.Setting::Setting();
    atexit(FUN_00d8ce90);
}
}

// @f3 0x00ca4650 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca4650 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ebc8;
void __cdecl FUN_00d8b710();

void __cdecl FUN_00ca4650()
{
    DAT_00f5ebc8.Setting::Setting();
    atexit(FUN_00d8b710);
}
}

// @f3 0x00cb1820 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb1820 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f606ec;
void __cdecl FUN_00d8d9c0();

void __cdecl FUN_00cb1820()
{
    DAT_00f606ec.Setting::Setting();
    atexit(FUN_00d8d9c0);
}
}

// @f3 0x00ca9f60 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca9f60 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f7d4;
void __cdecl FUN_00d8c5a0();

void __cdecl FUN_00ca9f60()
{
    DAT_00f5f7d4.Setting::Setting();
    atexit(FUN_00d8c5a0);
}
}

// @f3 0x00cbde70 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbde70 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61ff4;
void __cdecl FUN_00d8fac0();

void __cdecl FUN_00cbde70()
{
    DAT_00f61ff4.Setting::Setting();
    atexit(FUN_00d8fac0);
}
}

// @f3 0x00cb2120 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb2120 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6080c;
void __cdecl FUN_00d8db40();

void __cdecl FUN_00cb2120()
{
    DAT_00f6080c.Setting::Setting();
    atexit(FUN_00d8db40);
}
}

// @f3 0x00cb8110 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb8110 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61448;
void __cdecl FUN_00d8eb30();

void __cdecl FUN_00cb8110()
{
    DAT_00f61448.Setting::Setting();
    atexit(FUN_00d8eb30);
}
}

// @f3 0x00caec40 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caec40 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60170;
void __cdecl FUN_00d8d270();

void __cdecl FUN_00caec40()
{
    DAT_00f60170.Setting::Setting();
    atexit(FUN_00d8d270);
}
}

// @f3 0x00ca4ef0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca4ef0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ecdc;
void __cdecl FUN_00d8b880();

void __cdecl FUN_00ca4ef0()
{
    DAT_00f5ecdc.Setting::Setting();
    atexit(FUN_00d8b880);
}
}

// @f3 0x00cae3a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cae3a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6005c;
void __cdecl FUN_00d8d100();

void __cdecl FUN_00cae3a0()
{
    DAT_00f6005c.Setting::Setting();
    atexit(FUN_00d8d100);
}
}

// @f3 0x00cb6670 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb6670 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f610f4;
void __cdecl FUN_00d8e6c0();

void __cdecl FUN_00cb6670()
{
    DAT_00f610f4.Setting::Setting();
    atexit(FUN_00d8e6c0);
}
}

// @f3 0x00cb0a40 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb0a40 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60530;
void __cdecl FUN_00d8d770();

void __cdecl FUN_00cb0a40()
{
    DAT_00f60530.Setting::Setting();
    atexit(FUN_00d8d770);
}
}

// @f3 0x00caabc0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caabc0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f960;
void __cdecl FUN_00d8c7b0();

void __cdecl FUN_00caabc0()
{
    DAT_00f5f960.Setting::Setting();
    atexit(FUN_00d8c7b0);
}
}

// @f3 0x00cb6850 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb6850 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61130;
void __cdecl FUN_00d8e710();

void __cdecl FUN_00cb6850()
{
    DAT_00f61130.Setting::Setting();
    atexit(FUN_00d8e710);
}
}

// @f3 0x00ca3630 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca3630 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e9c4;
void __cdecl FUN_00d8b460();

void __cdecl FUN_00ca3630()
{
    DAT_00f5e9c4.Setting::Setting();
    atexit(FUN_00d8b460);
}
}

// @f3 0x00cbcaf0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbcaf0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61d84;
void __cdecl FUN_00d8f780();

void __cdecl FUN_00cbcaf0()
{
    DAT_00f61d84.Setting::Setting();
    atexit(FUN_00d8f780);
}
}

// @f3 0x00cb3320 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb3320 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60a4c;
void __cdecl FUN_00d8de40();

void __cdecl FUN_00cb3320()
{
    DAT_00f60a4c.Setting::Setting();
    atexit(FUN_00d8de40);
}
}

// @f3 0x00cb4040 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb4040 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60bf0;
void __cdecl FUN_00d8e070();

void __cdecl FUN_00cb4040()
{
    DAT_00f60bf0.Setting::Setting();
    atexit(FUN_00d8e070);
}
}

// @f3 0x00ca6f30 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca6f30 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f124;
void __cdecl FUN_00d8bde0();

void __cdecl FUN_00ca6f30()
{
    DAT_00f5f124.Setting::Setting();
    atexit(FUN_00d8bde0);
}
}

// @f3 0x00cb4580 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb4580 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60c98;
void __cdecl FUN_00d8e150();

void __cdecl FUN_00cb4580()
{
    DAT_00f60c98.Setting::Setting();
    atexit(FUN_00d8e150);
}
}

// @f3 0x00ca0ff0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca0ff0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e4fc;
void __cdecl FUN_00d8ae00();

void __cdecl FUN_00ca0ff0()
{
    DAT_00f5e4fc.Setting::Setting();
    atexit(FUN_00d8ae00);
}
}

// @f3 0x00cae040 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cae040 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fff0;
void __cdecl FUN_00d8d070();

void __cdecl FUN_00cae040()
{
    DAT_00f5fff0.Setting::Setting();
    atexit(FUN_00d8d070);
}
}

// @f3 0x00cadc80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cadc80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ff78;
void __cdecl FUN_00d8cfd0();

void __cdecl FUN_00cadc80()
{
    DAT_00f5ff78.Setting::Setting();
    atexit(FUN_00d8cfd0);
}
}

// @f3 0x00cbc8b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbc8b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61d3c;
void __cdecl FUN_00d8f720();

void __cdecl FUN_00cbc8b0()
{
    DAT_00f61d3c.Setting::Setting();
    atexit(FUN_00d8f720);
}
}

// @f3 0x00ca5610 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca5610 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5edc0;
void __cdecl FUN_00d8b9b0();

void __cdecl FUN_00ca5610()
{
    DAT_00f5edc0.Setting::Setting();
    atexit(FUN_00d8b9b0);
}
}

// @f3 0x00cba630 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cba630 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f618ec;
void __cdecl FUN_00d8f160();

void __cdecl FUN_00cba630()
{
    DAT_00f618ec.Setting::Setting();
    atexit(FUN_00d8f160);
}
}

// @f3 0x00cab6a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cab6a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fabc;
void __cdecl FUN_00d8c980();

void __cdecl FUN_00cab6a0()
{
    DAT_00f5fabc.Setting::Setting();
    atexit(FUN_00d8c980);
}
}

// @f3 0x00cacde0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cacde0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fda4;
void __cdecl FUN_00d8cd60();

void __cdecl FUN_00cacde0()
{
    DAT_00f5fda4.Setting::Setting();
    atexit(FUN_00d8cd60);
}
}

// @f3 0x00cb0fe0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb0fe0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f605e4;
void __cdecl FUN_00d8d860();

void __cdecl FUN_00cb0fe0()
{
    DAT_00f605e4.Setting::Setting();
    atexit(FUN_00d8d860);
}
}

// @f3 0x00cbbcb0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbbcb0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61bbc;
void __cdecl FUN_00d8f520();

void __cdecl FUN_00cbbcb0()
{
    DAT_00f61bbc.Setting::Setting();
    atexit(FUN_00d8f520);
}
}

// @f3 0x00ca4290 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca4290 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eb50;
void __cdecl FUN_00d8b670();

void __cdecl FUN_00ca4290()
{
    DAT_00f5eb50.Setting::Setting();
    atexit(FUN_00d8b670);
}
}

// @f3 0x00cb6e50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb6e50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f611f0;
void __cdecl FUN_00d8e810();

void __cdecl FUN_00cb6e50()
{
    DAT_00f611f0.Setting::Setting();
    atexit(FUN_00d8e810);
}
}

// @f3 0x00cb10a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb10a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f605fc;
void __cdecl FUN_00d8d880();

void __cdecl FUN_00cb10a0()
{
    DAT_00f605fc.Setting::Setting();
    atexit(FUN_00d8d880);
}
}

// @f3 0x00cb37a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb37a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60adc;
void __cdecl FUN_00d8df00();

void __cdecl FUN_00cb37a0()
{
    DAT_00f60adc.Setting::Setting();
    atexit(FUN_00d8df00);
}
}

// @f3 0x00cbbd10 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbbd10 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61bc8;
void __cdecl FUN_00d8f530();

void __cdecl FUN_00cbbd10()
{
    DAT_00f61bc8.Setting::Setting();
    atexit(FUN_00d8f530);
}
}

// @f3 0x00cac660 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cac660 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fcb4;
void __cdecl FUN_00d8cc20();

void __cdecl FUN_00cac660()
{
    DAT_00f5fcb4.Setting::Setting();
    atexit(FUN_00d8cc20);
}
}

// @f3 0x00cbdab0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbdab0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61f7c;
void __cdecl FUN_00d8fa20();

void __cdecl FUN_00cbdab0()
{
    DAT_00f61f7c.Setting::Setting();
    atexit(FUN_00d8fa20);
}
}

// @f3 0x00cb3f80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb3f80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60bd8;
void __cdecl FUN_00d8e050();

void __cdecl FUN_00cb3f80()
{
    DAT_00f60bd8.Setting::Setting();
    atexit(FUN_00d8e050);
}
}

// @f3 0x00cb5180 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb5180 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60e18;
void __cdecl FUN_00d8e350();

void __cdecl FUN_00cb5180()
{
    DAT_00f60e18.Setting::Setting();
    atexit(FUN_00d8e350);
}
}

// @f3 0x00ca33f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca33f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e97c;
void __cdecl FUN_00d8b400();

void __cdecl FUN_00ca33f0()
{
    DAT_00f5e97c.Setting::Setting();
    atexit(FUN_00d8b400);
}
}

// @f3 0x00caf060 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caf060 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f601f4;
void __cdecl FUN_00d8d320();

void __cdecl FUN_00caf060()
{
    DAT_00f601f4.Setting::Setting();
    atexit(FUN_00d8d320);
}
}

// @f3 0x00cbcf10 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbcf10 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61e08;
void __cdecl FUN_00d8f830();

void __cdecl FUN_00cbcf10()
{
    DAT_00f61e08.Setting::Setting();
    atexit(FUN_00d8f830);
}
}

// @f3 0x00cac420 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cac420 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fc6c;
void __cdecl FUN_00d8cbc0();

void __cdecl FUN_00cac420()
{
    DAT_00f5fc6c.Setting::Setting();
    atexit(FUN_00d8cbc0);
}
}

// @f3 0x00cb5fb0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb5fb0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6101c;
void __cdecl FUN_00d8e5a0();

void __cdecl FUN_00cb5fb0()
{
    DAT_00f6101c.Setting::Setting();
    atexit(FUN_00d8e5a0);
}
}

// @f3 0x00cb59c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb59c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60f20;
void __cdecl FUN_00d8e4b0();

void __cdecl FUN_00cb59c0()
{
    DAT_00f60f20.Setting::Setting();
    atexit(FUN_00d8e4b0);
}
}

// @f3 0x00cba210 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cba210 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61868;
void __cdecl FUN_00d8f0b0();

void __cdecl FUN_00cba210()
{
    DAT_00f61868.Setting::Setting();
    atexit(FUN_00d8f0b0);
}
}

// @f3 0x00cab280 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cab280 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fa38;
void __cdecl FUN_00d8c8d0();

void __cdecl FUN_00cab280()
{
    DAT_00f5fa38.Setting::Setting();
    atexit(FUN_00d8c8d0);
}
}

// @f3 0x00ca8400 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca8400 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f468;
void __cdecl FUN_00d8c110();

void __cdecl FUN_00ca8400()
{
    DAT_00f5f468.Setting::Setting();
    atexit(FUN_00d8c110);
}
}

// @f3 0x00cbb7d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbb7d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61b20;
void __cdecl FUN_00d8f450();

void __cdecl FUN_00cbb7d0()
{
    DAT_00f61b20.Setting::Setting();
    atexit(FUN_00d8f450);
}
}

// @f3 0x00ca8520 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca8520 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f48c;
void __cdecl FUN_00d8c140();

void __cdecl FUN_00ca8520()
{
    DAT_00f5f48c.Setting::Setting();
    atexit(FUN_00d8c140);
}
}

// @f3 0x00cb03e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb03e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60464;
void __cdecl FUN_00d8d660();

void __cdecl FUN_00cb03e0()
{
    DAT_00f60464.Setting::Setting();
    atexit(FUN_00d8d660);
}
}

// @f3 0x00ca1110 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1110 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e520;
void __cdecl FUN_00d8ae30();

void __cdecl FUN_00ca1110()
{
    DAT_00f5e520.Setting::Setting();
    atexit(FUN_00d8ae30);
}
}

// @f3 0x00caac20 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caac20 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f96c;
void __cdecl FUN_00d8c7c0();

void __cdecl FUN_00caac20()
{
    DAT_00f5f96c.Setting::Setting();
    atexit(FUN_00d8c7c0);
}
}

// @f3 0x00ca15f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca15f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e5bc;
void __cdecl FUN_00d8af00();

void __cdecl FUN_00ca15f0()
{
    DAT_00f5e5bc.Setting::Setting();
    atexit(FUN_00d8af00);
}
}

// @f3 0x00cb2840 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb2840 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f608f0;
void __cdecl FUN_00d8dc70();

void __cdecl FUN_00cb2840()
{
    DAT_00f608f0.Setting::Setting();
    atexit(FUN_00d8dc70);
}
}

// @f3 0x00cb04a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb04a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6047c;
void __cdecl FUN_00d8d680();

void __cdecl FUN_00cb04a0()
{
    DAT_00f6047c.Setting::Setting();
    atexit(FUN_00d8d680);
}
}

// @f3 0x00caff60 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caff60 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f603d4;
void __cdecl FUN_00d8d5a0();

void __cdecl FUN_00caff60()
{
    DAT_00f603d4.Setting::Setting();
    atexit(FUN_00d8d5a0);
}
}

// @f3 0x00cb8ef0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb8ef0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61604;
void __cdecl FUN_00d8ed80();

void __cdecl FUN_00cb8ef0()
{
    DAT_00f61604.Setting::Setting();
    atexit(FUN_00d8ed80);
}
}

// @f3 0x00cb77b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb77b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6131c;
void __cdecl FUN_00d8e9a0();

void __cdecl FUN_00cb77b0()
{
    DAT_00f6131c.Setting::Setting();
    atexit(FUN_00d8e9a0);
}
}

// @f3 0x00ca3f30 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca3f30 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eae4;
void __cdecl FUN_00d8b5e0();

void __cdecl FUN_00ca3f30()
{
    DAT_00f5eae4.Setting::Setting();
    atexit(FUN_00d8b5e0);
}
}

// @f3 0x00cb8ad0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb8ad0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61580;
void __cdecl FUN_00d8ecd0();

void __cdecl FUN_00cb8ad0()
{
    DAT_00f61580.Setting::Setting();
    atexit(FUN_00d8ecd0);
}
}

// @f3 0x00cb4100 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb4100 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60c08;
void __cdecl FUN_00d8e090();

void __cdecl FUN_00cb4100()
{
    DAT_00f60c08.Setting::Setting();
    atexit(FUN_00d8e090);
}
}

// @f3 0x00cb7570 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb7570 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f612d4;
void __cdecl FUN_00d8e940();

void __cdecl FUN_00cb7570()
{
    DAT_00f612d4.Setting::Setting();
    atexit(FUN_00d8e940);
}
}

// @f3 0x00cbdb70 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbdb70 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61f94;
void __cdecl FUN_00d8fa40();

void __cdecl FUN_00cbdb70()
{
    DAT_00f61f94.Setting::Setting();
    atexit(FUN_00d8fa40);
}
}

// @f3 0x00cbb9b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbb9b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61b5c;
void __cdecl FUN_00d8f4a0();

void __cdecl FUN_00cbb9b0()
{
    DAT_00f61b5c.Setting::Setting();
    atexit(FUN_00d8f4a0);
}
}

// @f3 0x00ca65d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca65d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eff8;
void __cdecl FUN_00d8bc50();

void __cdecl FUN_00ca65d0()
{
    DAT_00f5eff8.Setting::Setting();
    atexit(FUN_00d8bc50);
}
}

// @f3 0x00cba750 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cba750 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61910;
void __cdecl FUN_00d8f190();

void __cdecl FUN_00cba750()
{
    DAT_00f61910.Setting::Setting();
    atexit(FUN_00d8f190);
}
}

// @f3 0x00caba00 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caba00 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fb28;
void __cdecl FUN_00d8ca10();

void __cdecl FUN_00caba00()
{
    DAT_00f5fb28.Setting::Setting();
    atexit(FUN_00d8ca10);
}
}

// @f3 0x00cb8710 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb8710 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61508;
void __cdecl FUN_00d8ec30();

void __cdecl FUN_00cb8710()
{
    DAT_00f61508.Setting::Setting();
    atexit(FUN_00d8ec30);
}
}

// @f3 0x00cbbc50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbbc50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61bb0;
void __cdecl FUN_00d8f510();

void __cdecl FUN_00cbbc50()
{
    DAT_00f61bb0.Setting::Setting();
    atexit(FUN_00d8f510);
}
}

// @f3 0x00ca2730 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2730 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e7e4;
void __cdecl FUN_00d8b1e0();

void __cdecl FUN_00ca2730()
{
    DAT_00f5e7e4.Setting::Setting();
    atexit(FUN_00d8b1e0);
}
}

// @f3 0x00ca2d30 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2d30 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e8a4;
void __cdecl FUN_00d8b2e0();

void __cdecl FUN_00ca2d30()
{
    DAT_00f5e8a4.Setting::Setting();
    atexit(FUN_00d8b2e0);
}
}

// @f3 0x00ca2b50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2b50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e868;
void __cdecl FUN_00d8b290();

void __cdecl FUN_00ca2b50()
{
    DAT_00f5e868.Setting::Setting();
    atexit(FUN_00d8b290);
}
}

// @f3 0x00ca3150 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca3150 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e928;
void __cdecl FUN_00d8b390();

void __cdecl FUN_00ca3150()
{
    DAT_00f5e928.Setting::Setting();
    atexit(FUN_00d8b390);
}
}

// @f3 0x00ca3ff0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca3ff0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eafc;
void __cdecl FUN_00d8b600();

void __cdecl FUN_00ca3ff0()
{
    DAT_00f5eafc.Setting::Setting();
    atexit(FUN_00d8b600);
}
}

// @f3 0x00caa320 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caa320 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f84c;
void __cdecl FUN_00d8c640();

void __cdecl FUN_00caa320()
{
    DAT_00f5f84c.Setting::Setting();
    atexit(FUN_00d8c640);
}
}

// @f3 0x00cae820 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cae820 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f600ec;
void __cdecl FUN_00d8d1c0();

void __cdecl FUN_00cae820()
{
    DAT_00f600ec.Setting::Setting();
    atexit(FUN_00d8d1c0);
}
}

// @f3 0x00ca9060 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca9060 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f5f4;
void __cdecl FUN_00d8c320();

void __cdecl FUN_00ca9060()
{
    DAT_00f5f5f4.Setting::Setting();
    atexit(FUN_00d8c320);
}
}

// @f3 0x00cb63d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb63d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f610a0;
void __cdecl FUN_00d8e650();

void __cdecl FUN_00cb63d0()
{
    DAT_00f610a0.Setting::Setting();
    atexit(FUN_00d8e650);
}
}

// @f3 0x00cad5c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cad5c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fea0;
void __cdecl FUN_00d8ceb0();

void __cdecl FUN_00cad5c0()
{
    DAT_00f5fea0.Setting::Setting();
    atexit(FUN_00d8ceb0);
}
}

// @f3 0x00cb40a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb40a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60bfc;
void __cdecl FUN_00d8e080();

void __cdecl FUN_00cb40a0()
{
    DAT_00f60bfc.Setting::Setting();
    atexit(FUN_00d8e080);
}
}

// @f3 0x00cb2960 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb2960 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60914;
void __cdecl FUN_00d8dca0();

void __cdecl FUN_00cb2960()
{
    DAT_00f60914.Setting::Setting();
    atexit(FUN_00d8dca0);
}
}

// @f3 0x00caa0e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caa0e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f804;
void __cdecl FUN_00d8c5e0();

void __cdecl FUN_00caa0e0()
{
    DAT_00f5f804.Setting::Setting();
    atexit(FUN_00d8c5e0);
}
}

// @f3 0x00ca1890 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1890 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e610;
void __cdecl FUN_00d8af70();

void __cdecl FUN_00ca1890()
{
    DAT_00f5e610.Setting::Setting();
    atexit(FUN_00d8af70);
}
}

// @f3 0x00cb5d20 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb5d20 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60f8c;
void __cdecl FUN_00d8e540();

void __cdecl FUN_00cb5d20()
{
    DAT_00f60f8c.Setting::Setting();
    atexit(FUN_00d8e540);
}
}

// @f3 0x00ca3db0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca3db0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eab4;
void __cdecl FUN_00d8b5a0();

void __cdecl FUN_00ca3db0()
{
    DAT_00f5eab4.Setting::Setting();
    atexit(FUN_00d8b5a0);
}
}

// @f3 0x00cacf00 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cacf00 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fdc8;
void __cdecl FUN_00d8cd90();

void __cdecl FUN_00cacf00()
{
    DAT_00f5fdc8.Setting::Setting();
    atexit(FUN_00d8cd90);
}
}

// @f3 0x00caee80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caee80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f601b8;
void __cdecl FUN_00d8d2d0();

void __cdecl FUN_00caee80()
{
    DAT_00f601b8.Setting::Setting();
    atexit(FUN_00d8d2d0);
}
}

// @f3 0x00ca0f90 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca0f90 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e4f0;
void __cdecl FUN_00d8adf0();

void __cdecl FUN_00ca0f90()
{
    DAT_00f5e4f0.Setting::Setting();
    atexit(FUN_00d8adf0);
}
}

// @f3 0x00ca2af0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2af0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e85c;
void __cdecl FUN_00d8b280();

void __cdecl FUN_00ca2af0()
{
    DAT_00f5e85c.Setting::Setting();
    atexit(FUN_00d8b280);
}
}

// @f3 0x00ca41d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca41d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eb38;
void __cdecl FUN_00d8b650();

void __cdecl FUN_00ca41d0()
{
    DAT_00f5eb38.Setting::Setting();
    atexit(FUN_00d8b650);
}
}

// @f3 0x00caebe0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caebe0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60164;
void __cdecl FUN_00d8d260();

void __cdecl FUN_00caebe0()
{
    DAT_00f60164.Setting::Setting();
    atexit(FUN_00d8d260);
}
}

// @f3 0x00cb08c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb08c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60500;
void __cdecl FUN_00d8d730();

void __cdecl FUN_00cb08c0()
{
    DAT_00f60500.Setting::Setting();
    atexit(FUN_00d8d730);
}
}

// @f3 0x00cac2a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cac2a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fc3c;
void __cdecl FUN_00d8cb80();

void __cdecl FUN_00cac2a0()
{
    DAT_00f5fc3c.Setting::Setting();
    atexit(FUN_00d8cb80);
}
}

// @f3 0x00cbc9d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbc9d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61d60;
void __cdecl FUN_00d8f750();

void __cdecl FUN_00cbc9d0()
{
    DAT_00f61d60.Setting::Setting();
    atexit(FUN_00d8f750);
}
}

// @f3 0x00cbaed0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbaed0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61a00;
void __cdecl FUN_00d8f2d0();

void __cdecl FUN_00cbaed0()
{
    DAT_00f61a00.Setting::Setting();
    atexit(FUN_00d8f2d0);
}
}

// @f3 0x00cabdc0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cabdc0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fba0;
void __cdecl FUN_00d8cab0();

void __cdecl FUN_00cabdc0()
{
    DAT_00f5fba0.Setting::Setting();
    atexit(FUN_00d8cab0);
}
}

// @f3 0x00caf7e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caf7e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f602e4;
void __cdecl FUN_00d8d460();

void __cdecl FUN_00caf7e0()
{
    DAT_00f602e4.Setting::Setting();
    atexit(FUN_00d8d460);
}
}

// @f3 0x00cad1a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cad1a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fe1c;
void __cdecl FUN_00d8ce00();

void __cdecl FUN_00cad1a0()
{
    DAT_00f5fe1c.Setting::Setting();
    atexit(FUN_00d8ce00);
}
}

// @f3 0x00cbe110 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbe110 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62048;
void __cdecl FUN_00d8fb30();

void __cdecl FUN_00cbe110()
{
    DAT_00f62048.Setting::Setting();
    atexit(FUN_00d8fb30);
}
}

// @f3 0x00cbcd90 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbcd90 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61dd8;
void __cdecl FUN_00d8f7f0();

void __cdecl FUN_00cbcd90()
{
    DAT_00f61dd8.Setting::Setting();
    atexit(FUN_00d8f7f0);
}
}

// @f3 0x00cbb170 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbb170 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61a54;
void __cdecl FUN_00d8f340();

void __cdecl FUN_00cbb170()
{
    DAT_00f61a54.Setting::Setting();
    atexit(FUN_00d8f340);
}
}

// @f3 0x00cba2d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cba2d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61880;
void __cdecl FUN_00d8f0d0();

void __cdecl FUN_00cba2d0()
{
    DAT_00f61880.Setting::Setting();
    atexit(FUN_00d8f0d0);
}
}

// @f3 0x00cb5000 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb5000 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60de8;
void __cdecl FUN_00d8e310();

void __cdecl FUN_00cb5000()
{
    DAT_00f60de8.Setting::Setting();
    atexit(FUN_00d8e310);
}
}

// @f3 0x00cb87d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb87d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61520;
void __cdecl FUN_00d8ec50();

void __cdecl FUN_00cb87d0()
{
    DAT_00f61520.Setting::Setting();
    atexit(FUN_00d8ec50);
}
}

// @f3 0x00cb7990 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb7990 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61358;
void __cdecl FUN_00d8e9f0();

void __cdecl FUN_00cb7990()
{
    DAT_00f61358.Setting::Setting();
    atexit(FUN_00d8e9f0);
}
}

// @f3 0x00cbe3b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbe3b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6209c;
void __cdecl FUN_00d8fba0();

void __cdecl FUN_00cbe3b0()
{
    DAT_00f6209c.Setting::Setting();
    atexit(FUN_00d8fba0);
}
}

// @f3 0x00cab880 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cab880 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5faf8;
void __cdecl FUN_00d8c9d0();

void __cdecl FUN_00cab880()
{
    DAT_00f5faf8.Setting::Setting();
    atexit(FUN_00d8c9d0);
}
}

// @f3 0x00cacae0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cacae0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fd44;
void __cdecl FUN_00d8cce0();

void __cdecl FUN_00cacae0()
{
    DAT_00f5fd44.Setting::Setting();
    atexit(FUN_00d8cce0);
}
}

// @f3 0x00cbdc30 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbdc30 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61fac;
void __cdecl FUN_00d8fa60();

void __cdecl FUN_00cbdc30()
{
    DAT_00f61fac.Setting::Setting();
    atexit(FUN_00d8fa60);
}
}

// @f3 0x00cb9bb0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb9bb0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6179c;
void __cdecl FUN_00d8efa0();

void __cdecl FUN_00cb9bb0()
{
    DAT_00f6179c.Setting::Setting();
    atexit(FUN_00d8efa0);
}
}

// @f3 0x00cb23c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb23c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60860;
void __cdecl FUN_00d8dbb0();

void __cdecl FUN_00cb23c0()
{
    DAT_00f60860.Setting::Setting();
    atexit(FUN_00d8dbb0);
}
}

// @f3 0x00cac540 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cac540 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fc90;
void __cdecl FUN_00d8cbf0();

void __cdecl FUN_00cac540()
{
    DAT_00f5fc90.Setting::Setting();
    atexit(FUN_00d8cbf0);
}
}

// @f3 0x00cb0c80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb0c80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60578;
void __cdecl FUN_00d8d7d0();

void __cdecl FUN_00cb0c80()
{
    DAT_00f60578.Setting::Setting();
    atexit(FUN_00d8d7d0);
}
}

// @f3 0x00ca4fb0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca4fb0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ecf4;
void __cdecl FUN_00d8b8a0();

void __cdecl FUN_00ca4fb0()
{
    DAT_00f5ecf4.Setting::Setting();
    atexit(FUN_00d8b8a0);
}
}

// @f3 0x00cb11c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb11c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60620;
void __cdecl FUN_00d8d8b0();

void __cdecl FUN_00cb11c0()
{
    DAT_00f60620.Setting::Setting();
    atexit(FUN_00d8d8b0);
}
}

// @f3 0x00cabac0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cabac0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fb40;
void __cdecl FUN_00d8ca30();

void __cdecl FUN_00cabac0()
{
    DAT_00f5fb40.Setting::Setting();
    atexit(FUN_00d8ca30);
}
}

// @f3 0x00cb2000 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb2000 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f607e8;
void __cdecl FUN_00d8db10();

void __cdecl FUN_00cb2000()
{
    DAT_00f607e8.Setting::Setting();
    atexit(FUN_00d8db10);
}
}

// @f3 0x00cafde0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cafde0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f603a4;
void __cdecl FUN_00d8d560();

void __cdecl FUN_00cafde0()
{
    DAT_00f603a4.Setting::Setting();
    atexit(FUN_00d8d560);
}
}

// @f3 0x00cad320 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cad320 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fe4c;
void __cdecl FUN_00d8ce40();

void __cdecl FUN_00cad320()
{
    DAT_00f5fe4c.Setting::Setting();
    atexit(FUN_00d8ce40);
}
}

// @f3 0x00cb6f10 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb6f10 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61208;
void __cdecl FUN_00d8e830();

void __cdecl FUN_00cb6f10()
{
    DAT_00f61208.Setting::Setting();
    atexit(FUN_00d8e830);
}
}

// @f3 0x00cacb40 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cacb40 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fd50;
void __cdecl FUN_00d8ccf0();

void __cdecl FUN_00cacb40()
{
    DAT_00f5fd50.Setting::Setting();
    atexit(FUN_00d8ccf0);
}
}

// @f3 0x00ca9900 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca9900 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f708;
void __cdecl FUN_00d8c490();

void __cdecl FUN_00ca9900()
{
    DAT_00f5f708.Setting::Setting();
    atexit(FUN_00d8c490);
}
}

// @f3 0x00cbdcf0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbdcf0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61fc4;
void __cdecl FUN_00d8fa80();

void __cdecl FUN_00cbdcf0()
{
    DAT_00f61fc4.Setting::Setting();
    atexit(FUN_00d8fa80);
}
}

// @f3 0x00ca5910 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca5910 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ee20;
void __cdecl FUN_00d8ba30();

void __cdecl FUN_00ca5910()
{
    DAT_00f5ee20.Setting::Setting();
    atexit(FUN_00d8ba30);
}
}

// @f3 0x00cbc130 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbc130 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61c4c;
void __cdecl FUN_00d8f5e0();

void __cdecl FUN_00cbc130()
{
    DAT_00f61c4c.Setting::Setting();
    atexit(FUN_00d8f5e0);
}
}

// @f3 0x00cbe4d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbe4d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f620c0;
void __cdecl FUN_00d8fbd0();

void __cdecl FUN_00cbe4d0()
{
    DAT_00f620c0.Setting::Setting();
    atexit(FUN_00d8fbd0);
}
}

// @f3 0x00ca1e30 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1e30 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e6c4;
void __cdecl FUN_00d8b060();

void __cdecl FUN_00ca1e30()
{
    DAT_00f5e6c4.Setting::Setting();
    atexit(FUN_00d8b060);
}
}

// @f3 0x00cb1b80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb1b80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60758;
void __cdecl FUN_00d8da50();

void __cdecl FUN_00cb1b80()
{
    DAT_00f60758.Setting::Setting();
    atexit(FUN_00d8da50);
}
}

// @f3 0x00cbbdd0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbbdd0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61be0;
void __cdecl FUN_00d8f550();

void __cdecl FUN_00cbbdd0()
{
    DAT_00f61be0.Setting::Setting();
    atexit(FUN_00d8f550);
}
}

// @f3 0x00cb28a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb28a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f608fc;
void __cdecl FUN_00d8dc80();

void __cdecl FUN_00cb28a0()
{
    DAT_00f608fc.Setting::Setting();
    atexit(FUN_00d8dc80);
}
}

// @f3 0x00ca52b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca52b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ed54;
void __cdecl FUN_00d8b920();

void __cdecl FUN_00ca52b0()
{
    DAT_00f5ed54.Setting::Setting();
    atexit(FUN_00d8b920);
}
}

// @f3 0x00cb9fd0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb9fd0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61820;
void __cdecl FUN_00d8f050();

void __cdecl FUN_00cb9fd0()
{
    DAT_00f61820.Setting::Setting();
    atexit(FUN_00d8f050);
}
}

// @f3 0x00cb49a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb49a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60d1c;
void __cdecl FUN_00d8e200();

void __cdecl FUN_00cb49a0()
{
    DAT_00f60d1c.Setting::Setting();
    atexit(FUN_00d8e200);
}
}

// @f3 0x00ca9660 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca9660 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f6b4;
void __cdecl FUN_00d8c420();

void __cdecl FUN_00ca9660()
{
    DAT_00f5f6b4.Setting::Setting();
    atexit(FUN_00d8c420);
}
}

// @f3 0x00cbc3d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbc3d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61ca0;
void __cdecl FUN_00d8f650();

void __cdecl FUN_00cbc3d0()
{
    DAT_00f61ca0.Setting::Setting();
    atexit(FUN_00d8f650);
}
}

// @f3 0x00cbb830 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbb830 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61b2c;
void __cdecl FUN_00d8f460();

void __cdecl FUN_00cbb830()
{
    DAT_00f61b2c.Setting::Setting();
    atexit(FUN_00d8f460);
}
}

// @f3 0x00caa7a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caa7a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f8dc;
void __cdecl FUN_00d8c700();

void __cdecl FUN_00caa7a0()
{
    DAT_00f5f8dc.Setting::Setting();
    atexit(FUN_00d8c700);
}
}

// @f3 0x00cbb770 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbb770 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61b14;
void __cdecl FUN_00d8f440();

void __cdecl FUN_00cbb770()
{
    DAT_00f61b14.Setting::Setting();
    atexit(FUN_00d8f440);
}
}

// @f3 0x00cbd150 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbd150 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61e50;
void __cdecl FUN_00d8f890();

void __cdecl FUN_00cbd150()
{
    DAT_00f61e50.Setting::Setting();
    atexit(FUN_00d8f890);
}
}

// @f3 0x00ca7c20 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca7c20 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f36c;
void __cdecl FUN_00d8bfc0();

void __cdecl FUN_00ca7c20()
{
    DAT_00f5f36c.Setting::Setting();
    atexit(FUN_00d8bfc0);
}
}

// @f3 0x00ca1650 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1650 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e5c8;
void __cdecl FUN_00d8af10();

void __cdecl FUN_00ca1650()
{
    DAT_00f5e5c8.Setting::Setting();
    atexit(FUN_00d8af10);
}
}

// @f3 0x00cbb470 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbb470 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61ab4;
void __cdecl FUN_00d8f3c0();

void __cdecl FUN_00cbb470()
{
    DAT_00f61ab4.Setting::Setting();
    atexit(FUN_00d8f3c0);
}
}

// @f3 0x00cb4340 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb4340 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60c50;
void __cdecl FUN_00d8e0f0();

void __cdecl FUN_00cb4340()
{
    DAT_00f60c50.Setting::Setting();
    atexit(FUN_00d8e0f0);
}
}

// @f3 0x00cbc370 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbc370 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61c94;
void __cdecl FUN_00d8f640();

void __cdecl FUN_00cbc370()
{
    DAT_00f61c94.Setting::Setting();
    atexit(FUN_00d8f640);
}
}

// @f3 0x00cbd450 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbd450 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61eb0;
void __cdecl FUN_00d8f910();

void __cdecl FUN_00cbd450()
{
    DAT_00f61eb0.Setting::Setting();
    atexit(FUN_00d8f910);
}
}

// @f3 0x00cbf430 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbf430 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f622ac;
void __cdecl FUN_00d8fe60();

void __cdecl FUN_00cbf430()
{
    DAT_00f622ac.Setting::Setting();
    atexit(FUN_00d8fe60);
}
}

// @f3 0x00cbb710 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbb710 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61b08;
void __cdecl FUN_00d8f430();

void __cdecl FUN_00cbb710()
{
    DAT_00f61b08.Setting::Setting();
    atexit(FUN_00d8f430);
}
}

// @f3 0x00cb81d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb81d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61460;
void __cdecl FUN_00d8eb50();

void __cdecl FUN_00cb81d0()
{
    DAT_00f61460.Setting::Setting();
    atexit(FUN_00d8eb50);
}
}

// @f3 0x00ca9ea0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca9ea0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f7bc;
void __cdecl FUN_00d8c580();

void __cdecl FUN_00ca9ea0()
{
    DAT_00f5f7bc.Setting::Setting();
    atexit(FUN_00d8c580);
}
}

// @f3 0x00cbfd30 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbfd30 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f623cc;
void __cdecl FUN_00d8ffe0();

void __cdecl FUN_00cbfd30()
{
    DAT_00f623cc.Setting::Setting();
    atexit(FUN_00d8ffe0);
}
}

// @f3 0x00cbde10 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbde10 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61fe8;
void __cdecl FUN_00d8fab0();

void __cdecl FUN_00cbde10()
{
    DAT_00f61fe8.Setting::Setting();
    atexit(FUN_00d8fab0);
}
}

// @f3 0x00cb0f80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb0f80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f605d8;
void __cdecl FUN_00d8d850();

void __cdecl FUN_00cb0f80()
{
    DAT_00f605d8.Setting::Setting();
    atexit(FUN_00d8d850);
}
}

// @f3 0x00cba090 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cba090 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61838;
void __cdecl FUN_00d8f070();

void __cdecl FUN_00cba090()
{
    DAT_00f61838.Setting::Setting();
    atexit(FUN_00d8f070);
}
}

// @f3 0x00ca1830 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1830 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e604;
void __cdecl FUN_00d8af60();

void __cdecl FUN_00ca1830()
{
    DAT_00f5e604.Setting::Setting();
    atexit(FUN_00d8af60);
}
}

// @f3 0x00ca9000 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca9000 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f5e8;
void __cdecl FUN_00d8c310();

void __cdecl FUN_00ca9000()
{
    DAT_00f5f5e8.Setting::Setting();
    atexit(FUN_00d8c310);
}
}

// @f3 0x00cbe5f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbe5f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f620e4;
void __cdecl FUN_00d8fc00();

void __cdecl FUN_00cbe5f0()
{
    DAT_00f620e4.Setting::Setting();
    atexit(FUN_00d8fc00);
}
}

// @f3 0x00cba150 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cba150 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61850;
void __cdecl FUN_00d8f090();

void __cdecl FUN_00cba150()
{
    DAT_00f61850.Setting::Setting();
    atexit(FUN_00d8f090);
}
}

// @f3 0x00ca1b90 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1b90 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e670;
void __cdecl FUN_00d8aff0();

void __cdecl FUN_00ca1b90()
{
    DAT_00f5e670.Setting::Setting();
    atexit(FUN_00d8aff0);
}
}

// @f3 0x00cabf40 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cabf40 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fbd0;
void __cdecl FUN_00d8caf0();

void __cdecl FUN_00cabf40()
{
    DAT_00f5fbd0.Setting::Setting();
    atexit(FUN_00d8caf0);
}
}

// @f3 0x00cac0c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cac0c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fc00;
void __cdecl FUN_00d8cb30();

void __cdecl FUN_00cac0c0()
{
    DAT_00f5fc00.Setting::Setting();
    atexit(FUN_00d8cb30);
}
}

// @f3 0x00ca8ca0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca8ca0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f57c;
void __cdecl FUN_00d8c280();

void __cdecl FUN_00ca8ca0()
{
    DAT_00f5f57c.Setting::Setting();
    atexit(FUN_00d8c280);
}
}

// @f3 0x00cb3fe0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb3fe0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60be4;
void __cdecl FUN_00d8e060();

void __cdecl FUN_00cb3fe0()
{
    DAT_00f60be4.Setting::Setting();
    atexit(FUN_00d8e060);
}
}

// @f3 0x00cb1880 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb1880 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f606f8;
void __cdecl FUN_00d8d9d0();

void __cdecl FUN_00cb1880()
{
    DAT_00f606f8.Setting::Setting();
    atexit(FUN_00d8d9d0);
}
}

// @f3 0x00cb7ab0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb7ab0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6137c;
void __cdecl FUN_00d8ea20();

void __cdecl FUN_00cb7ab0()
{
    DAT_00f6137c.Setting::Setting();
    atexit(FUN_00d8ea20);
}
}

// @f3 0x00cb8cb0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb8cb0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f615bc;
void __cdecl FUN_00d8ed20();

void __cdecl FUN_00cb8cb0()
{
    DAT_00f615bc.Setting::Setting();
    atexit(FUN_00d8ed20);
}
}

// @f3 0x00cb7750 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb7750 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61310;
void __cdecl FUN_00d8e990();

void __cdecl FUN_00cb7750()
{
    DAT_00f61310.Setting::Setting();
    atexit(FUN_00d8e990);
}
}

// @f3 0x00ca9240 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca9240 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f630;
void __cdecl FUN_00d8c370();

void __cdecl FUN_00ca9240()
{
    DAT_00f5f630.Setting::Setting();
    atexit(FUN_00d8c370);
}
}

// @f3 0x00ca5f10 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca5f10 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eee0;
void __cdecl FUN_00d8bb30();

void __cdecl FUN_00ca5f10()
{
    DAT_00f5eee0.Setting::Setting();
    atexit(FUN_00d8bb30);
}
}

// @f3 0x00ca5d30 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca5d30 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eea4;
void __cdecl FUN_00d8bae0();

void __cdecl FUN_00ca5d30()
{
    DAT_00f5eea4.Setting::Setting();
    atexit(FUN_00d8bae0);
}
}

// @f3 0x00cb1c40 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb1c40 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60770;
void __cdecl FUN_00d8da70();

void __cdecl FUN_00cb1c40()
{
    DAT_00f60770.Setting::Setting();
    atexit(FUN_00d8da70);
}
}

// @f3 0x00ca9c60 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca9c60 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f774;
void __cdecl FUN_00d8c520();

void __cdecl FUN_00ca9c60()
{
    DAT_00f5f774.Setting::Setting();
    atexit(FUN_00d8c520);
}
}

// @f3 0x00cb71b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb71b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6125c;
void __cdecl FUN_00d8e8a0();

void __cdecl FUN_00cb71b0()
{
    DAT_00f6125c.Setting::Setting();
    atexit(FUN_00d8e8a0);
}
}

// @f3 0x00cb6790 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb6790 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61118;
void __cdecl FUN_00d8e6f0();

void __cdecl FUN_00cb6790()
{
    DAT_00f61118.Setting::Setting();
    atexit(FUN_00d8e6f0);
}
}

// @f3 0x00ca5b50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca5b50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ee68;
void __cdecl FUN_00d8ba90();

void __cdecl FUN_00ca5b50()
{
    DAT_00f5ee68.Setting::Setting();
    atexit(FUN_00d8ba90);
}
}

// @f3 0x00cb84d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb84d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f614c0;
void __cdecl FUN_00d8ebd0();

void __cdecl FUN_00cb84d0()
{
    DAT_00f614c0.Setting::Setting();
    atexit(FUN_00d8ebd0);
}
}

// @f3 0x00ca1230 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1230 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e544;
void __cdecl FUN_00d8ae60();

void __cdecl FUN_00ca1230()
{
    DAT_00f5e544.Setting::Setting();
    atexit(FUN_00d8ae60);
}
}

// @f3 0x00cad560 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cad560 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fe94;
void __cdecl FUN_00d8cea0();

void __cdecl FUN_00cad560()
{
    DAT_00f5fe94.Setting::Setting();
    atexit(FUN_00d8cea0);
}
}

// @f3 0x00cb17c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb17c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f606e0;
void __cdecl FUN_00d8d9b0();

void __cdecl FUN_00cb17c0()
{
    DAT_00f606e0.Setting::Setting();
    atexit(FUN_00d8d9b0);
}
}

// @f3 0x00cadaa0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cadaa0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ff3c;
void __cdecl FUN_00d8cf80();

void __cdecl FUN_00cadaa0()
{
    DAT_00f5ff3c.Setting::Setting();
    atexit(FUN_00d8cf80);
}
}

// @f3 0x00cab0a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cab0a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f9fc;
void __cdecl FUN_00d8c880();

void __cdecl FUN_00cab0a0()
{
    DAT_00f5f9fc.Setting::Setting();
    atexit(FUN_00d8c880);
}
}

// @f3 0x00cabb20 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cabb20 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fb4c;
void __cdecl FUN_00d8ca40();

void __cdecl FUN_00cabb20()
{
    DAT_00f5fb4c.Setting::Setting();
    atexit(FUN_00d8ca40);
}
}

// @f3 0x00cafea0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cafea0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f603bc;
void __cdecl FUN_00d8d580();

void __cdecl FUN_00cafea0()
{
    DAT_00f603bc.Setting::Setting();
    atexit(FUN_00d8d580);
}
}

// @f3 0x00cb53c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb53c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60e60;
void __cdecl FUN_00d8e3b0();

void __cdecl FUN_00cb53c0()
{
    DAT_00f60e60.Setting::Setting();
    atexit(FUN_00d8e3b0);
}
}

// @f3 0x00ca3c30 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca3c30 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ea84;
void __cdecl FUN_00d8b560();

void __cdecl FUN_00ca3c30()
{
    DAT_00f5ea84.Setting::Setting();
    atexit(FUN_00d8b560);
}
}

// @f3 0x00cb32c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb32c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60a40;
void __cdecl FUN_00d8de30();

void __cdecl FUN_00cb32c0()
{
    DAT_00f60a40.Setting::Setting();
    atexit(FUN_00d8de30);
}
}

// @f3 0x00ca8100 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca8100 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f408;
void __cdecl FUN_00d8c090();

void __cdecl FUN_00ca8100()
{
    DAT_00f5f408.Setting::Setting();
    atexit(FUN_00d8c090);
}
}

// @f3 0x00ca9ae0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca9ae0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f744;
void __cdecl FUN_00d8c4e0();

void __cdecl FUN_00ca9ae0()
{
    DAT_00f5f744.Setting::Setting();
    atexit(FUN_00d8c4e0);
}
}

// @f3 0x00cbb410 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbb410 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61aa8;
void __cdecl FUN_00d8f3b0();

void __cdecl FUN_00cbb410()
{
    DAT_00f61aa8.Setting::Setting();
    atexit(FUN_00d8f3b0);
}
}

// @f3 0x00cb72d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb72d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61280;
void __cdecl FUN_00d8e8d0();

void __cdecl FUN_00cb72d0()
{
    DAT_00f61280.Setting::Setting();
    atexit(FUN_00d8e8d0);
}
}

// @f3 0x00cb6730 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb6730 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6110c;
void __cdecl FUN_00d8e6e0();

void __cdecl FUN_00cb6730()
{
    DAT_00f6110c.Setting::Setting();
    atexit(FUN_00d8e6e0);
}
}

// @f3 0x00cae7c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cae7c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f600e0;
void __cdecl FUN_00d8d1b0();

void __cdecl FUN_00cae7c0()
{
    DAT_00f600e0.Setting::Setting();
    atexit(FUN_00d8d1b0);
}
}

// @f3 0x00cbfa90 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbfa90 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62378;
void __cdecl FUN_00d8ff70();

void __cdecl FUN_00cbfa90()
{
    DAT_00f62378.Setting::Setting();
    atexit(FUN_00d8ff70);
}
}

// @f3 0x00cb0680 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb0680 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f604b8;
void __cdecl FUN_00d8d6d0();

void __cdecl FUN_00cb0680()
{
    DAT_00f604b8.Setting::Setting();
    atexit(FUN_00d8d6d0);
}
}

// @f3 0x00cb92b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb92b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6167c;
void __cdecl FUN_00d8ee20();

void __cdecl FUN_00cb92b0()
{
    DAT_00f6167c.Setting::Setting();
    atexit(FUN_00d8ee20);
}
}

// @f3 0x00cabfa0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cabfa0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fbdc;
void __cdecl FUN_00d8cb00();

void __cdecl FUN_00cabfa0()
{
    DAT_00f5fbdc.Setting::Setting();
    atexit(FUN_00d8cb00);
}
}

// @f3 0x00ca4590 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca4590 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ebb0;
void __cdecl FUN_00d8b6f0();

void __cdecl FUN_00ca4590()
{
    DAT_00f5ebb0.Setting::Setting();
    atexit(FUN_00d8b6f0);
}
}

// @f3 0x00cbda50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbda50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61f70;
void __cdecl FUN_00d8fa10();

void __cdecl FUN_00cbda50()
{
    DAT_00f61f70.Setting::Setting();
    atexit(FUN_00d8fa10);
}
}

// @f3 0x00ca1e90 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1e90 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e6d0;
void __cdecl FUN_00d8b070();

void __cdecl FUN_00ca1e90()
{
    DAT_00f5e6d0.Setting::Setting();
    atexit(FUN_00d8b070);
}
}

// @f3 0x00ca8f40 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca8f40 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f5d0;
void __cdecl FUN_00d8c2f0();

void __cdecl FUN_00ca8f40()
{
    DAT_00f5f5d0.Setting::Setting();
    atexit(FUN_00d8c2f0);
}
}

// @f3 0x00ca16b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca16b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e5d4;
void __cdecl FUN_00d8af20();

void __cdecl FUN_00ca16b0()
{
    DAT_00f5e5d4.Setting::Setting();
    atexit(FUN_00d8af20);
}
}

// @f3 0x00caab00 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caab00 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f948;
void __cdecl FUN_00d8c790();

void __cdecl FUN_00caab00()
{
    DAT_00f5f948.Setting::Setting();
    atexit(FUN_00d8c790);
}
}

// @f3 0x00cb3c20 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb3c20 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60b6c;
void __cdecl FUN_00d8dfc0();

void __cdecl FUN_00cb3c20()
{
    DAT_00f60b6c.Setting::Setting();
    atexit(FUN_00d8dfc0);
}
}

// @f3 0x00ca6750 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca6750 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f028;
void __cdecl FUN_00d8bc90();

void __cdecl FUN_00ca6750()
{
    DAT_00f5f028.Setting::Setting();
    atexit(FUN_00d8bc90);
}
}

// @f3 0x00cbc0d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbc0d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61c40;
void __cdecl FUN_00d8f5d0();

void __cdecl FUN_00cbc0d0()
{
    DAT_00f61c40.Setting::Setting();
    atexit(FUN_00d8f5d0);
}
}

// @f3 0x00cae2e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cae2e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60044;
void __cdecl FUN_00d8d0e0();

void __cdecl FUN_00cae2e0()
{
    DAT_00f60044.Setting::Setting();
    atexit(FUN_00d8d0e0);
}
}

// @f3 0x00cac5a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cac5a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fc9c;
void __cdecl FUN_00d8cc00();

void __cdecl FUN_00cac5a0()
{
    DAT_00f5fc9c.Setting::Setting();
    atexit(FUN_00d8cc00);
}
}

// @f3 0x00cbba70 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbba70 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61b74;
void __cdecl FUN_00d8f4c0();

void __cdecl FUN_00cbba70()
{
    DAT_00f61b74.Setting::Setting();
    atexit(FUN_00d8f4c0);
}
}

// @f3 0x00caf2a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caf2a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6023c;
void __cdecl FUN_00d8d380();

void __cdecl FUN_00caf2a0()
{
    DAT_00f6023c.Setting::Setting();
    atexit(FUN_00d8d380);
}
}

// @f3 0x00cbd750 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbd750 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61f10;
void __cdecl FUN_00d8f990();

void __cdecl FUN_00cbd750()
{
    DAT_00f61f10.Setting::Setting();
    atexit(FUN_00d8f990);
}
}

// @f3 0x00ca85e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca85e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f4a4;
void __cdecl FUN_00d8c160();

void __cdecl FUN_00ca85e0()
{
    DAT_00f5f4a4.Setting::Setting();
    atexit(FUN_00d8c160);
}
}

// @f3 0x00cb1280 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb1280 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60638;
void __cdecl FUN_00d8d8d0();

void __cdecl FUN_00cb1280()
{
    DAT_00f60638.Setting::Setting();
    atexit(FUN_00d8d8d0);
}
}

// @f3 0x00ca7c80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca7c80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f378;
void __cdecl FUN_00d8bfd0();

void __cdecl FUN_00ca7c80()
{
    DAT_00f5f378.Setting::Setting();
    atexit(FUN_00d8bfd0);
}
}

// @f3 0x00ca91e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca91e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f624;
void __cdecl FUN_00d8c360();

void __cdecl FUN_00ca91e0()
{
    DAT_00f5f624.Setting::Setting();
    atexit(FUN_00d8c360);
}
}

// @f3 0x00ca9fc0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca9fc0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f7e0;
void __cdecl FUN_00d8c5b0();

void __cdecl FUN_00ca9fc0()
{
    DAT_00f5f7e0.Setting::Setting();
    atexit(FUN_00d8c5b0);
}
}

// @f3 0x00cb98b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb98b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6173c;
void __cdecl FUN_00d8ef20();

void __cdecl FUN_00cb98b0()
{
    DAT_00f6173c.Setting::Setting();
    atexit(FUN_00d8ef20);
}
}

// @f3 0x00cb67f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb67f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61124;
void __cdecl FUN_00d8e700();

void __cdecl FUN_00cb67f0()
{
    DAT_00f61124.Setting::Setting();
    atexit(FUN_00d8e700);
}
}

// @f3 0x00cbec50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbec50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f621b0;
void __cdecl FUN_00d8fd10();

void __cdecl FUN_00cbec50()
{
    DAT_00f621b0.Setting::Setting();
    atexit(FUN_00d8fd10);
}
}

// @f3 0x00cbdf90 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbdf90 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62018;
void __cdecl FUN_00d8faf0();

void __cdecl FUN_00cbdf90()
{
    DAT_00f62018.Setting::Setting();
    atexit(FUN_00d8faf0);
}
}

// @f3 0x00cac300 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cac300 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fc48;
void __cdecl FUN_00d8cb90();

void __cdecl FUN_00cac300()
{
    DAT_00f5fc48.Setting::Setting();
    atexit(FUN_00d8cb90);
}
}

// @f3 0x00cb3e60 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb3e60 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60bb4;
void __cdecl FUN_00d8e020();

void __cdecl FUN_00cb3e60()
{
    DAT_00f60bb4.Setting::Setting();
    atexit(FUN_00d8e020);
}
}

// @f3 0x00ca3030 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca3030 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e904;
void __cdecl FUN_00d8b360();

void __cdecl FUN_00ca3030()
{
    DAT_00f5e904.Setting::Setting();
    atexit(FUN_00d8b360);
}
}

// @f3 0x00cb7810 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb7810 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61328;
void __cdecl FUN_00d8e9b0();

void __cdecl FUN_00cb7810()
{
    DAT_00f61328.Setting::Setting();
    atexit(FUN_00d8e9b0);
}
}

// @f3 0x00cbe470 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbe470 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f620b4;
void __cdecl FUN_00d8fbc0();

void __cdecl FUN_00cbe470()
{
    DAT_00f620b4.Setting::Setting();
    atexit(FUN_00d8fbc0);
}
}

// @f3 0x00cb5660 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb5660 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60eb4;
void __cdecl FUN_00d8e420();

void __cdecl FUN_00cb5660()
{
    DAT_00f60eb4.Setting::Setting();
    atexit(FUN_00d8e420);
}
}

// @f3 0x00ca8be0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca8be0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f564;
void __cdecl FUN_00d8c260();

void __cdecl FUN_00ca8be0()
{
    DAT_00f5f564.Setting::Setting();
    atexit(FUN_00d8c260);
}
}

// @f3 0x00cb8290 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb8290 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61478;
void __cdecl FUN_00d8eb70();

void __cdecl FUN_00cb8290()
{
    DAT_00f61478.Setting::Setting();
    atexit(FUN_00d8eb70);
}
}

// @f3 0x00ca8640 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca8640 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f4b0;
void __cdecl FUN_00d8c170();

void __cdecl FUN_00ca8640()
{
    DAT_00f5f4b0.Setting::Setting();
    atexit(FUN_00d8c170);
}
}

// @f3 0x00cbf8b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbf8b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6233c;
void __cdecl FUN_00d8ff20();

void __cdecl FUN_00cbf8b0()
{
    DAT_00f6233c.Setting::Setting();
    atexit(FUN_00d8ff20);
}
}

// @f3 0x00cbe9b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbe9b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6215c;
void __cdecl FUN_00d8fca0();

void __cdecl FUN_00cbe9b0()
{
    DAT_00f6215c.Setting::Setting();
    atexit(FUN_00d8fca0);
}
}

// @f3 0x00cb5480 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb5480 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60e78;
void __cdecl FUN_00d8e3d0();

void __cdecl FUN_00cb5480()
{
    DAT_00f60e78.Setting::Setting();
    atexit(FUN_00d8e3d0);
}
}

// @f3 0x00ca63f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca63f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5efbc;
void __cdecl FUN_00d8bc00();

void __cdecl FUN_00ca63f0()
{
    DAT_00f5efbc.Setting::Setting();
    atexit(FUN_00d8bc00);
}
}

// @f3 0x00cb0140 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb0140 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60410;
void __cdecl FUN_00d8d5f0();

void __cdecl FUN_00cb0140()
{
    DAT_00f60410.Setting::Setting();
    atexit(FUN_00d8d5f0);
}
}

// @f3 0x00caada0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caada0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f99c;
void __cdecl FUN_00d8c800();

void __cdecl FUN_00caada0()
{
    DAT_00f5f99c.Setting::Setting();
    atexit(FUN_00d8c800);
}
}

// @f3 0x00cad260 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cad260 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fe34;
void __cdecl FUN_00d8ce20();

void __cdecl FUN_00cad260()
{
    DAT_00f5fe34.Setting::Setting();
    atexit(FUN_00d8ce20);
}
}

// @f3 0x00ca9300 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca9300 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f648;
void __cdecl FUN_00d8c390();

void __cdecl FUN_00ca9300()
{
    DAT_00f5f648.Setting::Setting();
    atexit(FUN_00d8c390);
}
}

// @f3 0x00cae400 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cae400 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60068;
void __cdecl FUN_00d8d110();

void __cdecl FUN_00cae400()
{
    DAT_00f60068.Setting::Setting();
    atexit(FUN_00d8d110);
}
}

// @f3 0x00cbcd30 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbcd30 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61dcc;
void __cdecl FUN_00d8f7e0();

void __cdecl FUN_00cbcd30()
{
    DAT_00f61dcc.Setting::Setting();
    atexit(FUN_00d8f7e0);
}
}

// @f3 0x00cb3d40 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb3d40 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60b90;
void __cdecl FUN_00d8dff0();

void __cdecl FUN_00cb3d40()
{
    DAT_00f60b90.Setting::Setting();
    atexit(FUN_00d8dff0);
}
}

// @f3 0x00ca30f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca30f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e91c;
void __cdecl FUN_00d8b380();

void __cdecl FUN_00ca30f0()
{
    DAT_00f5e91c.Setting::Setting();
    atexit(FUN_00d8b380);
}
}

// @f3 0x00cb7270 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb7270 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61274;
void __cdecl FUN_00d8e8c0();

void __cdecl FUN_00cb7270()
{
    DAT_00f61274.Setting::Setting();
    atexit(FUN_00d8e8c0);
}
}

// @f3 0x00cb06e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb06e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f604c4;
void __cdecl FUN_00d8d6e0();

void __cdecl FUN_00cb06e0()
{
    DAT_00f604c4.Setting::Setting();
    atexit(FUN_00d8d6e0);
}
}

// @f3 0x00cb8b30 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb8b30 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6158c;
void __cdecl FUN_00d8ece0();

void __cdecl FUN_00cb8b30()
{
    DAT_00f6158c.Setting::Setting();
    atexit(FUN_00d8ece0);
}
}

// @f3 0x00ca6bd0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca6bd0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f0b8;
void __cdecl FUN_00d8bd50();

void __cdecl FUN_00ca6bd0()
{
    DAT_00f5f0b8.Setting::Setting();
    atexit(FUN_00d8bd50);
}
}

// @f3 0x00ca1470 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1470 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e58c;
void __cdecl FUN_00d8aec0();

void __cdecl FUN_00ca1470()
{
    DAT_00f5e58c.Setting::Setting();
    atexit(FUN_00d8aec0);
}
}

// @f3 0x00cbc190 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbc190 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61c58;
void __cdecl FUN_00d8f5f0();

void __cdecl FUN_00cbc190()
{
    DAT_00f61c58.Setting::Setting();
    atexit(FUN_00d8f5f0);
}
}

// @f3 0x00ca94e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca94e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f684;
void __cdecl FUN_00d8c3e0();

void __cdecl FUN_00ca94e0()
{
    DAT_00f5f684.Setting::Setting();
    atexit(FUN_00d8c3e0);
}
}

// @f3 0x00ca81c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca81c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f420;
void __cdecl FUN_00d8c0b0();

void __cdecl FUN_00ca81c0()
{
    DAT_00f5f420.Setting::Setting();
    atexit(FUN_00d8c0b0);
}
}

// @f3 0x00cbffd0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbffd0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62420;
void __cdecl FUN_00d90050();

void __cdecl FUN_00cbffd0()
{
    DAT_00f62420.Setting::Setting();
    atexit(FUN_00d90050);
}
}

// @f3 0x00cbf310 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbf310 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62288;
void __cdecl FUN_00d8fe30();

void __cdecl FUN_00cbf310()
{
    DAT_00f62288.Setting::Setting();
    atexit(FUN_00d8fe30);
}
}

// @f3 0x00cb91f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb91f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61664;
void __cdecl FUN_00d8ee00();

void __cdecl FUN_00cb91f0()
{
    DAT_00f61664.Setting::Setting();
    atexit(FUN_00d8ee00);
}
}

// @f3 0x00ca2e50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2e50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e8c8;
void __cdecl FUN_00d8b310();

void __cdecl FUN_00ca2e50()
{
    DAT_00f5e8c8.Setting::Setting();
    atexit(FUN_00d8b310);
}
}

// @f3 0x00ca9c00 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca9c00 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f768;
void __cdecl FUN_00d8c510();

void __cdecl FUN_00ca9c00()
{
    DAT_00f5f768.Setting::Setting();
    atexit(FUN_00d8c510);
}
}

// @f3 0x00ca3b70 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca3b70 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ea6c;
void __cdecl FUN_00d8b540();

void __cdecl FUN_00ca3b70()
{
    DAT_00f5ea6c.Setting::Setting();
    atexit(FUN_00d8b540);
}
}

// @f3 0x00ca6a50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca6a50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f088;
void __cdecl FUN_00d8bd10();

void __cdecl FUN_00ca6a50()
{
    DAT_00f5f088.Setting::Setting();
    atexit(FUN_00d8bd10);
}
}

// @f3 0x00cbe2f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbe2f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62084;
void __cdecl FUN_00d8fb80();

void __cdecl FUN_00cbe2f0()
{
    DAT_00f62084.Setting::Setting();
    atexit(FUN_00d8fb80);
}
}

// @f3 0x00cba030 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cba030 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6182c;
void __cdecl FUN_00d8f060();

void __cdecl FUN_00cba030()
{
    DAT_00f6182c.Setting::Setting();
    atexit(FUN_00d8f060);
}
}

// @f3 0x00ca8220 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca8220 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f42c;
void __cdecl FUN_00d8c0c0();

void __cdecl FUN_00ca8220()
{
    DAT_00f5f42c.Setting::Setting();
    atexit(FUN_00d8c0c0);
}
}

// @f3 0x00ca8b80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca8b80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f558;
void __cdecl FUN_00d8c250();

void __cdecl FUN_00ca8b80()
{
    DAT_00f5f558.Setting::Setting();
    atexit(FUN_00d8c250);
}
}

// @f3 0x00ca6990 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca6990 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f070;
void __cdecl FUN_00d8bcf0();

void __cdecl FUN_00ca6990()
{
    DAT_00f5f070.Setting::Setting();
    atexit(FUN_00d8bcf0);
}
}

// @f3 0x00ca2010 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2010 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e700;
void __cdecl FUN_00d8b0b0();

void __cdecl FUN_00ca2010()
{
    DAT_00f5e700.Setting::Setting();
    atexit(FUN_00d8b0b0);
}
}

// @f3 0x00cb2660 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb2660 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f608b4;
void __cdecl FUN_00d8dc20();

void __cdecl FUN_00cb2660()
{
    DAT_00f608b4.Setting::Setting();
    atexit(FUN_00d8dc20);
}
}

// @f3 0x00cbfc70 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbfc70 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f623b4;
void __cdecl FUN_00d8ffc0();

void __cdecl FUN_00cbfc70()
{
    DAT_00f623b4.Setting::Setting();
    atexit(FUN_00d8ffc0);
}
}

// @f3 0x00ca6cf0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca6cf0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f0dc;
void __cdecl FUN_00d8bd80();

void __cdecl FUN_00ca6cf0()
{
    DAT_00f5f0dc.Setting::Setting();
    atexit(FUN_00d8bd80);
}
}

// @f3 0x00cadce0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cadce0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ff84;
void __cdecl FUN_00d8cfe0();

void __cdecl FUN_00cadce0()
{
    DAT_00f5ff84.Setting::Setting();
    atexit(FUN_00d8cfe0);
}
}

// @f3 0x00cb8fb0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb8fb0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6161c;
void __cdecl FUN_00d8eda0();

void __cdecl FUN_00cb8fb0()
{
    DAT_00f6161c.Setting::Setting();
    atexit(FUN_00d8eda0);
}
}

// @f3 0x00caa500 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caa500 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f888;
void __cdecl FUN_00d8c690();

void __cdecl FUN_00caa500()
{
    DAT_00f5f888.Setting::Setting();
    atexit(FUN_00d8c690);
}
}

// @f3 0x00cae8e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cae8e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60104;
void __cdecl FUN_00d8d1e0();

void __cdecl FUN_00cae8e0()
{
    DAT_00f60104.Setting::Setting();
    atexit(FUN_00d8d1e0);
}
}

// @f3 0x00cb8770 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb8770 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61514;
void __cdecl FUN_00d8ec40();

void __cdecl FUN_00cb8770()
{
    DAT_00f61514.Setting::Setting();
    atexit(FUN_00d8ec40);
}
}

// @f3 0x00ca7f80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca7f80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f3d8;
void __cdecl FUN_00d8c050();

void __cdecl FUN_00ca7f80()
{
    DAT_00f5f3d8.Setting::Setting();
    atexit(FUN_00d8c050);
}
}

// @f3 0x00cbb4d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbb4d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61ac0;
void __cdecl FUN_00d8f3d0();

void __cdecl FUN_00cbb4d0()
{
    DAT_00f61ac0.Setting::Setting();
    atexit(FUN_00d8f3d0);
}
}

// @f3 0x00cb7a50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb7a50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61370;
void __cdecl FUN_00d8ea10();

void __cdecl FUN_00cb7a50()
{
    DAT_00f61370.Setting::Setting();
    atexit(FUN_00d8ea10);
}
}

// @f3 0x00cacc60 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cacc60 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fd74;
void __cdecl FUN_00d8cd20();

void __cdecl FUN_00cacc60()
{
    DAT_00f5fd74.Setting::Setting();
    atexit(FUN_00d8cd20);
}
}

// @f3 0x00cb2240 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb2240 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60830;
void __cdecl FUN_00d8db70();

void __cdecl FUN_00cb2240()
{
    DAT_00f60830.Setting::Setting();
    atexit(FUN_00d8db70);
}
}

// @f3 0x00caedc0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caedc0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f601a0;
void __cdecl FUN_00d8d2b0();

void __cdecl FUN_00caedc0()
{
    DAT_00f601a0.Setting::Setting();
    atexit(FUN_00d8d2b0);
}
}

// @f3 0x00ca4110 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca4110 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eb20;
void __cdecl FUN_00d8b630();

void __cdecl FUN_00ca4110()
{
    DAT_00f5eb20.Setting::Setting();
    atexit(FUN_00d8b630);
}
}

// @f3 0x00caf720 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caf720 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f602cc;
void __cdecl FUN_00d8d440();

void __cdecl FUN_00caf720()
{
    DAT_00f602cc.Setting::Setting();
    atexit(FUN_00d8d440);
}
}

// @f3 0x00cba870 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cba870 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61934;
void __cdecl FUN_00d8f1c0();

void __cdecl FUN_00cba870()
{
    DAT_00f61934.Setting::Setting();
    atexit(FUN_00d8f1c0);
}
}

// @f3 0x00cad740 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cad740 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fed0;
void __cdecl FUN_00d8cef0();

void __cdecl FUN_00cad740()
{
    DAT_00f5fed0.Setting::Setting();
    atexit(FUN_00d8cef0);
}
}

// @f3 0x00cabd00 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cabd00 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fb88;
void __cdecl FUN_00d8ca90();

void __cdecl FUN_00cabd00()
{
    DAT_00f5fb88.Setting::Setting();
    atexit(FUN_00d8ca90);
}
}

// @f3 0x00cb4b80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb4b80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60d58;
void __cdecl FUN_00d8e250();

void __cdecl FUN_00cb4b80()
{
    DAT_00f60d58.Setting::Setting();
    atexit(FUN_00d8e250);
}
}

// @f3 0x00cab160 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cab160 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fa14;
void __cdecl FUN_00d8c8a0();

void __cdecl FUN_00cab160()
{
    DAT_00f5fa14.Setting::Setting();
    atexit(FUN_00d8c8a0);
}
}

// @f3 0x00ca2550 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2550 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e7a8;
void __cdecl FUN_00d8b190();

void __cdecl FUN_00ca2550()
{
    DAT_00f5e7a8.Setting::Setting();
    atexit(FUN_00d8b190);
}
}

// @f3 0x00cab580 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cab580 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fa98;
void __cdecl FUN_00d8c950();

void __cdecl FUN_00cab580()
{
    DAT_00f5fa98.Setting::Setting();
    atexit(FUN_00d8c950);
}
}

// @f3 0x00ca2f70 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2f70 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e8ec;
void __cdecl FUN_00d8b340();

void __cdecl FUN_00ca2f70()
{
    DAT_00f5e8ec.Setting::Setting();
    atexit(FUN_00d8b340);
}
}

// @f3 0x00ca9a80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca9a80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f738;
void __cdecl FUN_00d8c4d0();

void __cdecl FUN_00ca9a80()
{
    DAT_00f5f738.Setting::Setting();
    atexit(FUN_00d8c4d0);
}
}

// @f3 0x00ca1530 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1530 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e5a4;
void __cdecl FUN_00d8aee0();

void __cdecl FUN_00ca1530()
{
    DAT_00f5e5a4.Setting::Setting();
    atexit(FUN_00d8aee0);
}
}

// @f3 0x00cad680 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cad680 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5feb8;
void __cdecl FUN_00d8ced0();

void __cdecl FUN_00cad680()
{
    DAT_00f5feb8.Setting::Setting();
    atexit(FUN_00d8ced0);
}
}

// @f3 0x00cb5e40 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb5e40 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60fb0;
void __cdecl FUN_00d8e570();

void __cdecl FUN_00cb5e40()
{
    DAT_00f60fb0.Setting::Setting();
    atexit(FUN_00d8e570);
}
}

// @f3 0x00cab700 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cab700 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fac8;
void __cdecl FUN_00d8c990();

void __cdecl FUN_00cab700()
{
    DAT_00f5fac8.Setting::Setting();
    atexit(FUN_00d8c990);
}
}

// @f3 0x00cbff10 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbff10 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62408;
void __cdecl FUN_00d90030();

void __cdecl FUN_00cbff10()
{
    DAT_00f62408.Setting::Setting();
    atexit(FUN_00d90030);
}
}

// @f3 0x00ca1d70 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1d70 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e6ac;
void __cdecl FUN_00d8b040();

void __cdecl FUN_00ca1d70()
{
    DAT_00f5e6ac.Setting::Setting();
    atexit(FUN_00d8b040);
}
}

// @f3 0x00ca9f00 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca9f00 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f7c8;
void __cdecl FUN_00d8c590();

void __cdecl FUN_00ca9f00()
{
    DAT_00f5f7c8.Setting::Setting();
    atexit(FUN_00d8c590);
}
}

// @f3 0x00cbebf0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbebf0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f621a4;
void __cdecl FUN_00d8fd00();

void __cdecl FUN_00cbebf0()
{
    DAT_00f621a4.Setting::Setting();
    atexit(FUN_00d8fd00);
}
}

// @f3 0x00cb0800 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb0800 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f604e8;
void __cdecl FUN_00d8d710();

void __cdecl FUN_00cb0800()
{
    DAT_00f604e8.Setting::Setting();
    atexit(FUN_00d8d710);
}
}

// @f3 0x00cb00e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb00e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60404;
void __cdecl FUN_00d8d5e0();

void __cdecl FUN_00cb00e0()
{
    DAT_00f60404.Setting::Setting();
    atexit(FUN_00d8d5e0);
}
}

// @f3 0x00cbef50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbef50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62210;
void __cdecl FUN_00d8fd90();

void __cdecl FUN_00cbef50()
{
    DAT_00f62210.Setting::Setting();
    atexit(FUN_00d8fd90);
}
}

// @f3 0x00ca4770 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca4770 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ebec;
void __cdecl FUN_00d8b740();

void __cdecl FUN_00ca4770()
{
    DAT_00f5ebec.Setting::Setting();
    atexit(FUN_00d8b740);
}
}

// @f3 0x00cb3b60 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb3b60 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60b54;
void __cdecl FUN_00d8dfa0();

void __cdecl FUN_00cb3b60()
{
    DAT_00f60b54.Setting::Setting();
    atexit(FUN_00d8dfa0);
}
}

// @f3 0x00ca2670 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2670 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e7cc;
void __cdecl FUN_00d8b1c0();

void __cdecl FUN_00ca2670()
{
    DAT_00f5e7cc.Setting::Setting();
    atexit(FUN_00d8b1c0);
}
}

// @f3 0x00ca7da0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca7da0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f39c;
void __cdecl FUN_00d8c000();

void __cdecl FUN_00ca7da0()
{
    DAT_00f5f39c.Setting::Setting();
    atexit(FUN_00d8c000);
}
}

// @f3 0x00cb5de0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb5de0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60fa4;
void __cdecl FUN_00d8e560();

void __cdecl FUN_00cb5de0()
{
    DAT_00f60fa4.Setting::Setting();
    atexit(FUN_00d8e560);
}
}

// @f3 0x00cacba0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cacba0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fd5c;
void __cdecl FUN_00d8cd00();

void __cdecl FUN_00cacba0()
{
    DAT_00f5fd5c.Setting::Setting();
    atexit(FUN_00d8cd00);
}
}

// @f3 0x00cb1100 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb1100 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60608;
void __cdecl FUN_00d8d890();

void __cdecl FUN_00cb1100()
{
    DAT_00f60608.Setting::Setting();
    atexit(FUN_00d8d890);
}
}

// @f3 0x00cae520 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cae520 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6008c;
void __cdecl FUN_00d8d140();

void __cdecl FUN_00cae520()
{
    DAT_00f6008c.Setting::Setting();
    atexit(FUN_00d8d140);
}
}

// @f3 0x00cb1be0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb1be0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60764;
void __cdecl FUN_00d8da60();

void __cdecl FUN_00cb1be0()
{
    DAT_00f60764.Setting::Setting();
    atexit(FUN_00d8da60);
}
}

// @f3 0x00ca49b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca49b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ec34;
void __cdecl FUN_00d8b7a0();

void __cdecl FUN_00ca49b0()
{
    DAT_00f5ec34.Setting::Setting();
    atexit(FUN_00d8b7a0);
}
}

// @f3 0x00cb7bd0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb7bd0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f613a0;
void __cdecl FUN_00d8ea50();

void __cdecl FUN_00cb7bd0()
{
    DAT_00f613a0.Setting::Setting();
    atexit(FUN_00d8ea50);
}
}

// @f3 0x00ca4c50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca4c50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ec88;
void __cdecl FUN_00d8b810();

void __cdecl FUN_00ca4c50()
{
    DAT_00f5ec88.Setting::Setting();
    atexit(FUN_00d8b810);
}
}

// @f3 0x00ca43b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca43b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eb74;
void __cdecl FUN_00d8b6a0();

void __cdecl FUN_00ca43b0()
{
    DAT_00f5eb74.Setting::Setting();
    atexit(FUN_00d8b6a0);
}
}

// @f3 0x00cb5060 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb5060 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60df4;
void __cdecl FUN_00d8e320();

void __cdecl FUN_00cb5060()
{
    DAT_00f60df4.Setting::Setting();
    atexit(FUN_00d8e320);
}
}

// @f3 0x00ca1770 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1770 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e5ec;
void __cdecl FUN_00d8af40();

void __cdecl FUN_00ca1770()
{
    DAT_00f5e5ec.Setting::Setting();
    atexit(FUN_00d8af40);
}
}

// @f3 0x00cb4e20 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb4e20 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60dac;
void __cdecl FUN_00d8e2c0();

void __cdecl FUN_00cb4e20()
{
    DAT_00f60dac.Setting::Setting();
    atexit(FUN_00d8e2c0);
}
}

// @f3 0x00ca93c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca93c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f660;
void __cdecl FUN_00d8c3b0();

void __cdecl FUN_00ca93c0()
{
    DAT_00f5f660.Setting::Setting();
    atexit(FUN_00d8c3b0);
}
}

// @f3 0x00caa6e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caa6e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f8c4;
void __cdecl FUN_00d8c6e0();

void __cdecl FUN_00caa6e0()
{
    DAT_00f5f8c4.Setting::Setting();
    atexit(FUN_00d8c6e0);
}
}

// @f3 0x00cbd330 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbd330 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61e8c;
void __cdecl FUN_00d8f8e0();

void __cdecl FUN_00cbd330()
{
    DAT_00f61e8c.Setting::Setting();
    atexit(FUN_00d8f8e0);
}
}

// @f3 0x00cb0e00 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb0e00 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f605a8;
void __cdecl FUN_00d8d810();

void __cdecl FUN_00cb0e00()
{
    DAT_00f605a8.Setting::Setting();
    atexit(FUN_00d8d810);
}
}

// @f3 0x00cb7870 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb7870 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61334;
void __cdecl FUN_00d8e9c0();

void __cdecl FUN_00cb7870()
{
    DAT_00f61334.Setting::Setting();
    atexit(FUN_00d8e9c0);
}
}

// @f3 0x00cb66d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb66d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61100;
void __cdecl FUN_00d8e6d0();

void __cdecl FUN_00cb66d0()
{
    DAT_00f61100.Setting::Setting();
    atexit(FUN_00d8e6d0);
}
}

// @f3 0x00cb3800 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb3800 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60ae8;
void __cdecl FUN_00d8df10();

void __cdecl FUN_00cb3800()
{
    DAT_00f60ae8.Setting::Setting();
    atexit(FUN_00d8df10);
}
}

// @f3 0x00ca6330 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca6330 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5efa4;
void __cdecl FUN_00d8bbe0();

void __cdecl FUN_00ca6330()
{
    DAT_00f5efa4.Setting::Setting();
    atexit(FUN_00d8bbe0);
}
}

// @f3 0x00cbe8f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbe8f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62144;
void __cdecl FUN_00d8fc80();

void __cdecl FUN_00cbe8f0()
{
    DAT_00f62144.Setting::Setting();
    atexit(FUN_00d8fc80);
}
}

// @f3 0x00ca4530 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca4530 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eba4;
void __cdecl FUN_00d8b6e0();

void __cdecl FUN_00ca4530()
{
    DAT_00f5eba4.Setting::Setting();
    atexit(FUN_00d8b6e0);
}
}

// @f3 0x00cbf850 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbf850 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62330;
void __cdecl FUN_00d8ff10();

void __cdecl FUN_00cbf850()
{
    DAT_00f62330.Setting::Setting();
    atexit(FUN_00d8ff10);
}
}

// @f3 0x00ca5c10 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca5c10 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ee80;
void __cdecl FUN_00d8bab0();

void __cdecl FUN_00ca5c10()
{
    DAT_00f5ee80.Setting::Setting();
    atexit(FUN_00d8bab0);
}
}

// @f3 0x00ca28b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca28b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e814;
void __cdecl FUN_00d8b220();

void __cdecl FUN_00ca28b0()
{
    DAT_00f5e814.Setting::Setting();
    atexit(FUN_00d8b220);
}
}

// @f3 0x00cb5600 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb5600 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60ea8;
void __cdecl FUN_00d8e410();

void __cdecl FUN_00cb5600()
{
    DAT_00f60ea8.Setting::Setting();
    atexit(FUN_00d8e410);
}
}

// @f3 0x00cb47c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb47c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60ce0;
void __cdecl FUN_00d8e1b0();

void __cdecl FUN_00cb47c0()
{
    DAT_00f60ce0.Setting::Setting();
    atexit(FUN_00d8e1b0);
}
}

// @f3 0x00cb2600 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb2600 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f608a8;
void __cdecl FUN_00d8dc10();

void __cdecl FUN_00cb2600()
{
    DAT_00f608a8.Setting::Setting();
    atexit(FUN_00d8dc10);
}
}

// @f3 0x00ca5010 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca5010 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ed00;
void __cdecl FUN_00d8b8b0();

void __cdecl FUN_00ca5010()
{
    DAT_00f5ed00.Setting::Setting();
    atexit(FUN_00d8b8b0);
}
}

// @f3 0x00cb1160 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb1160 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60614;
void __cdecl FUN_00d8d8a0();

void __cdecl FUN_00cb1160()
{
    DAT_00f60614.Setting::Setting();
    atexit(FUN_00d8d8a0);
}
}

// @f3 0x00cacd20 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cacd20 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fd8c;
void __cdecl FUN_00d8cd40();

void __cdecl FUN_00cacd20()
{
    DAT_00f5fd8c.Setting::Setting();
    atexit(FUN_00d8cd40);
}
}

// @f3 0x00cabc40 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cabc40 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fb70;
void __cdecl FUN_00d8ca70();

void __cdecl FUN_00cabc40()
{
    DAT_00f5fb70.Setting::Setting();
    atexit(FUN_00d8ca70);
}
}

// @f3 0x00cb0440 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb0440 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60470;
void __cdecl FUN_00d8d670();

void __cdecl FUN_00cb0440()
{
    DAT_00f60470.Setting::Setting();
    atexit(FUN_00d8d670);
}
}

// @f3 0x00cbf4f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbf4f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f622c4;
void __cdecl FUN_00d8fe80();

void __cdecl FUN_00cbf4f0()
{
    DAT_00f622c4.Setting::Setting();
    atexit(FUN_00d8fe80);
}
}

// @f3 0x00cade60 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cade60 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ffb4;
void __cdecl FUN_00d8d020();

void __cdecl FUN_00cade60()
{
    DAT_00f5ffb4.Setting::Setting();
    atexit(FUN_00d8d020);
}
}

// @f3 0x00cafae0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cafae0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60344;
void __cdecl FUN_00d8d4e0();

void __cdecl FUN_00cafae0()
{
    DAT_00f60344.Setting::Setting();
    atexit(FUN_00d8d4e0);
}
}

// @f3 0x00cab5e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cab5e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5faa4;
void __cdecl FUN_00d8c960();

void __cdecl FUN_00cab5e0()
{
    DAT_00f5faa4.Setting::Setting();
    atexit(FUN_00d8c960);
}
}

// @f3 0x00ca5c70 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca5c70 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ee8c;
void __cdecl FUN_00d8bac0();

void __cdecl FUN_00ca5c70()
{
    DAT_00f5ee8c.Setting::Setting();
    atexit(FUN_00d8bac0);
}
}

// @f3 0x00cb2540 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb2540 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60890;
void __cdecl FUN_00d8dbf0();

void __cdecl FUN_00cb2540()
{
    DAT_00f60890.Setting::Setting();
    atexit(FUN_00d8dbf0);
}
}

// @f3 0x00cab460 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cab460 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fa74;
void __cdecl FUN_00d8c920();

void __cdecl FUN_00cab460()
{
    DAT_00f5fa74.Setting::Setting();
    atexit(FUN_00d8c920);
}
}

// @f3 0x00cbc250 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbc250 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61c70;
void __cdecl FUN_00d8f610();

void __cdecl FUN_00cbc250()
{
    DAT_00f61c70.Setting::Setting();
    atexit(FUN_00d8f610);
}
}

// @f3 0x00cba390 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cba390 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61898;
void __cdecl FUN_00d8f0f0();

void __cdecl FUN_00cba390()
{
    DAT_00f61898.Setting::Setting();
    atexit(FUN_00d8f0f0);
}
}

// @f3 0x00cbd990 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbd990 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61f58;
void __cdecl FUN_00d8f9f0();

void __cdecl FUN_00cbd990()
{
    DAT_00f61f58.Setting::Setting();
    atexit(FUN_00d8f9f0);
}
}

// @f3 0x00cb9370 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb9370 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61694;
void __cdecl FUN_00d8ee40();

void __cdecl FUN_00cb9370()
{
    DAT_00f61694.Setting::Setting();
    atexit(FUN_00d8ee40);
}
}

// @f3 0x00cb9670 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb9670 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f616f4;
void __cdecl FUN_00d8eec0();

void __cdecl FUN_00cb9670()
{
    DAT_00f616f4.Setting::Setting();
    atexit(FUN_00d8eec0);
}
}

// @f3 0x00cbf610 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbf610 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f622e8;
void __cdecl FUN_00d8feb0();

void __cdecl FUN_00cbf610()
{
    DAT_00f622e8.Setting::Setting();
    atexit(FUN_00d8feb0);
}
}

// @f3 0x00cb1dc0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb1dc0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f607a0;
void __cdecl FUN_00d8dab0();

void __cdecl FUN_00cb1dc0()
{
    DAT_00f607a0.Setting::Setting();
    atexit(FUN_00d8dab0);
}
}

// @f3 0x00cb22a0 (community match, verified in this file)
namespace f3m_00cb22a0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6083c;
void __cdecl FUN_00d8db80();

void __cdecl FUN_00cb22a0()
{
    DAT_00f6083c.Setting::Setting();
    atexit(FUN_00d8db80);
}
}   // namespace f3m_00cb22a0

// @f3 0x00cb83b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb83b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6149c;
void __cdecl FUN_00d8eba0();

void __cdecl FUN_00cb83b0()
{
    DAT_00f6149c.Setting::Setting();
    atexit(FUN_00d8eba0);
}
}

// @f3 0x00cb2d80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb2d80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60998;
void __cdecl FUN_00d8dd50();

void __cdecl FUN_00cb2d80()
{
    DAT_00f60998.Setting::Setting();
    atexit(FUN_00d8dd50);
}
}

// @f3 0x00cb3440 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb3440 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60a70;
void __cdecl FUN_00d8de70();

void __cdecl FUN_00cb3440()
{
    DAT_00f60a70.Setting::Setting();
    atexit(FUN_00d8de70);
}
}

// @f3 0x00ca3990 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca3990 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ea30;
void __cdecl FUN_00d8b4f0();

void __cdecl FUN_00ca3990()
{
    DAT_00f5ea30.Setting::Setting();
    atexit(FUN_00d8b4f0);
}
}

// @f3 0x00cbdf30 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbdf30 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6200c;
void __cdecl FUN_00d8fae0();

void __cdecl FUN_00cbdf30()
{
    DAT_00f6200c.Setting::Setting();
    atexit(FUN_00d8fae0);
}
}

// @f3 0x00cabe80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cabe80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fbb8;
void __cdecl FUN_00d8cad0();

void __cdecl FUN_00cabe80()
{
    DAT_00f5fbb8.Setting::Setting();
    atexit(FUN_00d8cad0);
}
}

// @f3 0x00ca78c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca78c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f300;
void __cdecl FUN_00d8bf30();

void __cdecl FUN_00ca78c0()
{
    DAT_00f5f300.Setting::Setting();
    atexit(FUN_00d8bf30);
}
}

// @f3 0x00caefa0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caefa0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f601dc;
void __cdecl FUN_00d8d300();

void __cdecl FUN_00caefa0()
{
    DAT_00f601dc.Setting::Setting();
    atexit(FUN_00d8d300);
}
}

// @f3 0x00caeac0 (community match, verified in this file)
namespace f3m_00caeac0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60140;
void __cdecl FUN_00d8d230();

void __cdecl FUN_00caeac0()
{
    DAT_00f60140.Setting::Setting();
    atexit(FUN_00d8d230);
}
}   // namespace f3m_00caeac0

// @f3 0x00ca95a0 (community match, verified in this file)
namespace f3m_00ca95a0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f69c;
void __cdecl FUN_00d8c400();

void __cdecl FUN_00ca95a0()
{
    DAT_00f5f69c.Setting::Setting();
    atexit(FUN_00d8c400);
}
}   // namespace f3m_00ca95a0

// @f3 0x00caca80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caca80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fd38;
void __cdecl FUN_00d8ccd0();
}
void __cdecl FUN_00caca80()
{
    f3m_00caca80::DAT_00f5fd38.f3m_00caca80::Setting::Setting();
    atexit(f3m_00caca80::FUN_00d8ccd0);
}

// @f3 0x00ca8dc0 (community match, verified in this file)
namespace f3m_00ca8dc0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f5a0;
void __cdecl FUN_00d8c2b0();

void __cdecl FUN_00ca8dc0()
{
    DAT_00f5f5a0.Setting::Setting();
    atexit(FUN_00d8c2b0);
}
}   // namespace f3m_00ca8dc0

// @f3 0x00ca3c90 (community match, verified in this file)
namespace f3m_00ca3c90 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ea90;
void __cdecl FUN_00d8b570();

void __cdecl FUN_00ca3c90()
{
    DAT_00f5ea90.Setting::Setting();
    atexit(FUN_00d8b570);
}
}   // namespace f3m_00ca3c90

// @f3 0x00cb0b00 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_cb0b00 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60548;
void __cdecl FUN_00d8d790();

void __cdecl FUN_00cb0b00()
{
    DAT_00f60548.Setting::Setting();
    atexit(FUN_00d8d790);
}
}

// @f3 0x00cb58a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb58a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60efc;
void __cdecl FUN_00d8e480();
void __cdecl FUN_00cb58a0()
{
    DAT_00f60efc.Setting::Setting();
    atexit(FUN_00d8e480);
}
}

// @f3 0x00ca2d90 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2d90 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e8b0;
void __cdecl FUN_00d8b2f0();
}

void __cdecl FUN_00ca2d90()
{
    f3m_00ca2d90::DAT_00f5e8b0.f3m_00ca2d90::Setting::Setting();
    atexit(f3m_00ca2d90::FUN_00d8b2f0);
}

// @f3 0x00ca7050 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca7050 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f148;
void __cdecl FUN_00d8be10();
}

void __cdecl FUN_00ca7050()
{
    f3m_00ca7050::DAT_00f5f148.f3m_00ca7050::Setting::Setting();
    atexit(f3m_00ca7050::FUN_00d8be10);
}

// @f3 0x00cbe290 (community match, verified in this file)
namespace f3m_00cbe290 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62078;
void __cdecl FUN_00d8fb70();

void __cdecl FUN_00cbe290()
{
    DAT_00f62078.Setting::Setting();
    atexit(FUN_00d8fb70);
}
}   // namespace f3m_00cbe290

// @f3 0x00ca7bc0 (community match, verified in this file)
namespace f3m_00ca7bc0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f360;
void __cdecl FUN_00d8bfb0();

void __cdecl FUN_00ca7bc0()
{
    DAT_00f5f360.Setting::Setting();
    atexit(FUN_00d8bfb0);
}
}   // namespace f3m_00ca7bc0

// @f3 0x00cac1e0 (community match, verified in this file)
namespace f3m_00cac1e0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fc24;
void __cdecl FUN_00d8cb60();

void __cdecl FUN_00cac1e0()
{
    DAT_00f5fc24.Setting::Setting();
    atexit(FUN_00d8cb60);
}
}   // namespace f3m_00cac1e0

// @f3 0x00ca7b60 (community match, verified in this file)
namespace f3m_00ca7b60 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f354;
void __cdecl FUN_00d8bfa0();

void __cdecl FUN_00ca7b60()
{
    DAT_00f5f354.Setting::Setting();
    atexit(FUN_00d8bfa0);
}
}   // namespace f3m_00ca7b60

// @f3 0x00cb2c60 (community match, verified in this file)
namespace f3m_00cb2c60 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60974;
void __cdecl FUN_00d8dd20();

void __cdecl FUN_00cb2c60()
{
    DAT_00f60974.Setting::Setting();
    atexit(FUN_00d8dd20);
}
}   // namespace f3m_00cb2c60

// @f3 0x00caf300 (community match, verified in this file)
namespace f3m_00caf300 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60248;
void __cdecl FUN_00d8d390();

void __cdecl FUN_00caf300()
{
    DAT_00f60248.Setting::Setting();
    atexit(FUN_00d8d390);
}
}   // namespace f3m_00caf300

// @f3 0x00cbd1b0 (community match, verified in this file)
namespace f3m_00cbd1b0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61e5c;
void __cdecl FUN_00d8f8a0();

void __cdecl FUN_00cbd1b0()
{
    DAT_00f61e5c.Setting::Setting();
    atexit(FUN_00d8f8a0);
}
}   // namespace f3m_00cbd1b0

// @f3 0x00ca6090 (community match, verified in this file)
namespace f3m_00ca6090 {
struct Manager { virtual void v00(); virtual void Register(void* setting); };
extern Manager* DAT_010701a8;

void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ef10;

void FUN_00d8bb70();
void FUN_00c00d1f(void (*fn)()) throw();

void __cdecl FUN_00ca6090()
{
    DAT_00f5ef10.Setting::Setting();
    atexit(FUN_00d8bb70);
}
}   // namespace f3m_00ca6090

// @f3 0x00cadda0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cadda0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ff9c;
void __cdecl FUN_00d8d000();

void __cdecl FUN_00cadda0()
{
    DAT_00f5ff9c.Setting::Setting();
    atexit(FUN_00d8d000);
}
}

// @f3 0x00cb0260 (community match, verified in this file)
namespace f3m_00cb0260 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60434;
void __cdecl FUN_00d8d620();

void __cdecl FUN_00cb0260()
{
    DAT_00f60434.Setting::Setting();
    atexit(FUN_00d8d620);
}
}   // namespace f3m_00cb0260

// @f3 0x00cb20c0 (community match, verified in this file)
namespace f3m_00cb20c0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60800;
void __cdecl FUN_00d8db30();

void __cdecl FUN_00cb20c0()
{
    DAT_00f60800.Setting::Setting();
    atexit(FUN_00d8db30);
}
}   // namespace f3m_00cb20c0

// @f3 0x00cbae70 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbae70 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f619f4;
void __cdecl FUN_00d8f2c0();
}

void __cdecl FUN_00cbae70()
{
    f3m_00cbae70::DAT_00f619f4.f3m_00cbae70::Setting::Setting();
    atexit(f3m_00cbae70::FUN_00d8f2c0);
}

// @f3 0x00cb1fa0 (community match, verified in this file)
namespace f3m_00cb1fa0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f607dc;
void __cdecl FUN_00d8db00();

void __cdecl FUN_00cb1fa0()
{
    DAT_00f607dc.Setting::Setting();
    atexit(FUN_00d8db00);
}
}   // namespace f3m_00cb1fa0

// @f3 0x00cb2f00 (community match, verified in this file)
namespace f3m_00cb2f00 {


struct Manager { virtual void v00(); virtual void Register(void* s); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup { void FUN_00403170(); ~Cleanup(); };
struct Setting : Cleanup { __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); } };
extern Setting DAT_00f609c8;
void __cdecl FUN_00d8dd90();

void __cdecl FUN_00cb2f00()
{
    DAT_00f609c8.Setting::Setting();
    atexit(FUN_00d8dd90);
}
}   // namespace f3m_00cb2f00

// @f3 0x00cbfb50 (community match, verified in this file)
namespace f3m_00cbfb50 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62390;
void __cdecl FUN_00d8ff90();

void __cdecl FUN_00cbfb50()
{
    DAT_00f62390.Setting::Setting();
    atexit(FUN_00d8ff90);
}
}   // namespace f3m_00cbfb50

// @f3 0x00ca3930 (community match, verified in this file)
extern Setting DAT_00f5ea24;
namespace f3m_00ca3930 {
void __cdecl FUN_00d8b4e0();

void __cdecl FUN_00ca3930()
{
    DAT_00f5ea24.Setting::Setting();
    atexit(FUN_00d8b4e0);
}
}   // namespace f3m_00ca3930

// @f3 0x00cb4160 (community match, verified in this file)
namespace f3m_00cb4160 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60c14;
void __cdecl FUN_00d8e0a0();

void __cdecl FUN_00cb4160()
{
    DAT_00f60c14.Setting::Setting();
    atexit(FUN_00d8e0a0);
}
}   // namespace f3m_00cb4160

// @f3 0x00ca58b0 (community match, verified in this file)
namespace f3m_00ca58b0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ee14;
void __cdecl FUN_00d8ba20();

void __cdecl FUN_00ca58b0()
{
    DAT_00f5ee14.Setting::Setting();
    atexit(FUN_00d8ba20);
}
}   // namespace f3m_00ca58b0

// @f3 0x00cb3200 (community match, verified in this file)
namespace f3m_00cb3200 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60a28;
void __cdecl FUN_00d8de10();

void __cdecl FUN_00cb3200()
{
    DAT_00f60a28.Setting::Setting();
    atexit(FUN_00d8de10);
}
}   // namespace f3m_00cb3200

// @f3 0x00caa200 (community match, verified in this file)
namespace f3m_00caa200 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f828;
void __cdecl FUN_00d8c610();

void __cdecl FUN_00caa200()
{
    DAT_00f5f828.Setting::Setting();
    atexit(FUN_00d8c610);
}
}   // namespace f3m_00caa200

// @f3 0x00cb64f0 (community match, verified in this file)
namespace f3m_00cb64f0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f610c4;
void __cdecl FUN_00d8e680();

void __cdecl FUN_00cb64f0()
{
    DAT_00f610c4.Setting::Setting();
    atexit(FUN_00d8e680);
}
}   // namespace f3m_00cb64f0

// @f3 0x00ca1a10 (community match, verified in this file)
namespace f3m_00ca1a10 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e640;
void __cdecl FUN_00d8afb0();

void __cdecl FUN_00ca1a10()
{
    DAT_00f5e640.Setting::Setting();
    atexit(FUN_00d8afb0);
}
}   // namespace f3m_00ca1a10

// @f3 0x00cb86b0 (community match, verified in this file)
namespace f3m_00cb86b0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f614fc;
void __cdecl FUN_00d8ec20();

void __cdecl FUN_00cb86b0()
{
    DAT_00f614fc.Setting::Setting();
    atexit(FUN_00d8ec20);
}
}   // namespace f3m_00cb86b0

// @f3 0x00ca7920 (community match, verified in this file)
namespace f3m_00ca7920 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f30c;
void __cdecl FUN_00d8bf40();

void __cdecl FUN_00ca7920()
{
    DAT_00f5f30c.Setting::Setting();
    atexit(FUN_00d8bf40);
}
}   // namespace f3m_00ca7920

// @f3 0x00cbb050 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbb050 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61a30;
void __cdecl FUN_00d8f310();

void __cdecl FUN_00cbb050()
{
    DAT_00f61a30.Setting::Setting();
    atexit(FUN_00d8f310);
}
}

// @f3 0x00ca9120 (community match, verified in this file)
namespace f3m_00ca9120 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f60c;
void __cdecl FUN_00d8c340();

void __cdecl FUN_00ca9120()
{
    DAT_00f5f60c.Setting::Setting();
    atexit(FUN_00d8c340);
}
}   // namespace f3m_00ca9120

// @f3 0x00cb6910 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb6910 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61148;
void __cdecl FUN_00d8e730();

void __cdecl FUN_00cb6910()
{
    DAT_00f61148.Setting::Setting();
    atexit(FUN_00d8e730);
}
}

// @f3 0x00cb8230 (community match, verified in this file)
namespace f3m_00cb8230 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6146c;
void __cdecl FUN_00d8eb60();

void __cdecl FUN_00cb8230()
{
    DAT_00f6146c.Setting::Setting();
    atexit(FUN_00d8eb60);
}
}   // namespace f3m_00cb8230

// @f3 0x00ca60f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca60f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ef1c;
void __cdecl FUN_00d8bb80();
}

void __cdecl FUN_00ca60f0()
{
    f3m_00ca60f0::DAT_00f5ef1c.f3m_00ca60f0::Setting::Setting();
    atexit(f3m_00ca60f0::FUN_00d8bb80);
}

// @f3 0x00cb89b0 (community match, verified in this file)
namespace f3m_00cb89b0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6155c;
void __cdecl FUN_00d8eca0();

void __cdecl FUN_00cb89b0()
{
    DAT_00f6155c.Setting::Setting();
    atexit(FUN_00d8eca0);
}
}   // namespace f3m_00cb89b0

// @f3 0x00ca2bb0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2bb0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e874;
void __cdecl FUN_00d8b2a0();

void __cdecl FUN_00ca2bb0()
{
    DAT_00f5e874.Setting::Setting();
    atexit(FUN_00d8b2a0);
}
}

// @f3 0x00ca50d0 (community match, verified in this file)
namespace f3m_00ca50d0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ed18;
void __cdecl FUN_00d8b8d0();

void __cdecl FUN_00ca50d0()
{
    DAT_00f5ed18.Setting::Setting();
    atexit(FUN_00d8b8d0);
}
}   // namespace f3m_00ca50d0

// @f3 0x00ca4b30 (community match, verified in this file)
namespace f3m_00ca4b30 {
struct Manager { virtual void v00(); virtual void Register(void* setting); };
extern Manager* DAT_010701a8;

void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ec64;

void FUN_00d8b7e0();
void FUN_00c00d1f(void (*fn)()) throw();

void __cdecl FUN_00ca4b30()
{
    DAT_00f5ec64.Setting::Setting();
    atexit(FUN_00d8b7e0);
}
}   // namespace f3m_00ca4b30

// @f3 0x00cba8d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cba8d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61940;
void __cdecl FUN_00d8f1d0();
}
void __cdecl FUN_00cba8d0()
{
    f3m_00cba8d0::DAT_00f61940.f3m_00cba8d0::Setting::Setting();
    atexit(f3m_00cba8d0::FUN_00d8f1d0);
}

// @f3 0x00cb7090 (community match, verified in this file)
namespace f3m_00cb7090 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61238;
void __cdecl FUN_00d8e870();

void __cdecl FUN_00cb7090()
{
    DAT_00f61238.Setting::Setting();
    atexit(FUN_00d8e870);
}
}   // namespace f3m_00cb7090

// @f3 0x00cb5120 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb5120 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60e0c;
void __cdecl FUN_00d8e340();

void __cdecl FUN_00cb5120()
{
    DAT_00f60e0c.Setting::Setting();
    atexit(FUN_00d8e340);
}
}

// @f3 0x00cb5c00 (community match, verified in this file)
namespace f3m_00cb5c00 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60f68;
void __cdecl FUN_00d8e510();

void __cdecl FUN_00cb5c00()
{
    DAT_00f60f68.Setting::Setting();
    atexit(FUN_00d8e510);
}
}   // namespace f3m_00cb5c00

// @f3 0x00ca92a0 (community match, verified in this file)
namespace f3m_00ca92a0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f63c;
void __cdecl FUN_00d8c380();

void __cdecl FUN_00ca92a0()
{
    DAT_00f5f63c.Setting::Setting();
    atexit(FUN_00d8c380);
}
}   // namespace f3m_00ca92a0

// @f3 0x00cbc6d0 (community match, verified in this file)
namespace f3m_00cbc6d0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61d00;
void __cdecl FUN_00d8f6d0();

void __cdecl FUN_00cbc6d0()
{
    DAT_00f61d00.Setting::Setting();
    atexit(FUN_00d8f6d0);
}
}   // namespace f3m_00cbc6d0

// @f3 0x00cb5a20 (community match, verified in this file)
namespace f3m_00cb5a20 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60f2c;
void __cdecl FUN_00d8e4c0();

void __cdecl FUN_00cb5a20()
{
    DAT_00f60f2c.Setting::Setting();
    atexit(FUN_00d8e4c0);
}
}   // namespace f3m_00cb5a20

// @f3 0x00ca75c0 (community match, verified in this file)
namespace f3m_00ca75c0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f2a0;
void __cdecl FUN_00d8beb0();

void __cdecl FUN_00ca75c0()
{
    DAT_00f5f2a0.Setting::Setting();
    atexit(FUN_00d8beb0);
}
}   // namespace f3m_00ca75c0

// @f3 0x00ca4e90 (community match, verified in this file)
namespace f3m_00ca4e90 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ecd0;
void __cdecl FUN_00d8b870();

void __cdecl FUN_00ca4e90()
{
    DAT_00f5ecd0.Setting::Setting();
    atexit(FUN_00d8b870);
}
}   // namespace f3m_00ca4e90

// @f3 0x00ca21f0 (community match, verified in this file)
namespace f3m_00ca21f0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e73c;
void __cdecl FUN_00d8b100();

void __cdecl FUN_00ca21f0()
{
    DAT_00f5e73c.Setting::Setting();
    atexit(FUN_00d8b100);
}
}   // namespace f3m_00ca21f0

// @f3 0x00cbd0f0 (community match, verified in this file)
namespace f3m_00cbd0f0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61e44;
void __cdecl FUN_00d8f880();

void __cdecl FUN_00cbd0f0()
{
    DAT_00f61e44.Setting::Setting();
    atexit(FUN_00d8f880);
}
}   // namespace f3m_00cbd0f0

// @f3 0x00cb35c0 (community match, verified in this file)
namespace f3m_00cb35c0 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60aa0;
void __cdecl FUN_00d8deb0();

void __cdecl FUN_00cb35c0()
{
    DAT_00f60aa0.Setting::Setting();
    atexit(FUN_00d8deb0);
}
}   // namespace f3m_00cb35c0

// @f3 0x00cbc490 (community match, verified in this file)
namespace f3m_00cbc490 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61cb8;
void __cdecl FUN_00d8f670();

void __cdecl FUN_00cbc490()
{
    DAT_00f61cb8.Setting::Setting();
    atexit(FUN_00d8f670);
}
}   // namespace f3m_00cbc490

// @f3 0x00ca5190 (community match, verified in this file)
namespace f3m_00ca5190 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ed30;
void __cdecl FUN_00d8b8f0();

void __cdecl FUN_00ca5190()
{
    DAT_00f5ed30.Setting::Setting();
    atexit(FUN_00d8b8f0);
}
}   // namespace f3m_00ca5190

// @f3 0x00cb9850 (community match, verified in this file)
namespace f3m_00cb9850 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61730;
void __cdecl FUN_00d8ef10();

void __cdecl FUN_00cb9850()
{
    DAT_00f61730.Setting::Setting();
    atexit(FUN_00d8ef10);
}
}   // namespace f3m_00cb9850

// @f3 0x00cbc670 (community match, verified in this file)
namespace f3m_00cbc670 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61cf4;
void __cdecl FUN_00d8f6c0();

void __cdecl FUN_00cbc670()
{
    DAT_00f61cf4.Setting::Setting();
    atexit(FUN_00d8f6c0);
}
}   // namespace f3m_00cbc670

// @f3 0x00cafa80 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cafa80 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60338;
void __cdecl FUN_00d8d4d0();
}

void __cdecl FUN_00cafa80()
{
    using namespace f3m_00cafa80;
    DAT_00f60338.Setting::Setting();
    atexit(FUN_00d8d4d0);
}

// @f3 0x00cba930 (community match, verified in this file)
extern Manager* DAT_010701a8;
extern Setting DAT_00f6194c;
namespace f3m_00cba930 {
struct Manager;
struct Setting;

void __cdecl FUN_00403080();


void FUN_00c00d1f(void (*fn)()) throw();
void __cdecl FUN_00d8f1e0();

void __cdecl FUN_00cba930()
{
    DAT_00f6194c.Setting::Setting();
    FUN_00c00d1f(FUN_00d8f1e0);
}
}   // namespace f3m_00cba930

// @f3 0x00cb0f20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0f20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f605cc;
void __cdecl FUN_00d8d840();
}

void __cdecl FUN_00cb0f20()
{
    using namespace f3m_00cb0f20;
    DAT_00f605cc.Setting::Setting();
    atexit(FUN_00d8d840);
}

// @f3 0x00cb7330 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7330 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6128c;
void __cdecl FUN_00d8e8e0();
}

void __cdecl FUN_00cb7330()
{
    using namespace f3m_00cb7330;
    DAT_00f6128c.Setting::Setting();
    atexit(FUN_00d8e8e0);
}

// @f3 0x00cba9f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cba9f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61964;
void __cdecl FUN_00d8f200();
}

void __cdecl FUN_00cba9f0()
{
    using namespace f3m_00cba9f0;
    DAT_00f61964.Setting::Setting();
    atexit(FUN_00d8f200);
}

// @f3 0x00ca9de0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9de0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f7a4;
void __cdecl FUN_00d8c560();
}

void __cdecl FUN_00ca9de0()
{
    using namespace f3m_00ca9de0;
    DAT_00f5f7a4.Setting::Setting();
    atexit(FUN_00d8c560);
}

// @f3 0x00cb4220 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4220 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60c2c;
void __cdecl FUN_00d8e0c0();
}

void __cdecl FUN_00cb4220()
{
    using namespace f3m_00cb4220;
    DAT_00f60c2c.Setting::Setting();
    atexit(FUN_00d8e0c0);
}

// @f3 0x00cbf0d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbf0d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62240;
void __cdecl FUN_00d8fdd0();
}

void __cdecl FUN_00cbf0d0()
{
    using namespace f3m_00cbf0d0;
    DAT_00f62240.Setting::Setting();
    atexit(FUN_00d8fdd0);
}

// @f3 0x00caa260 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa260 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f834;
void __cdecl FUN_00d8c620();
}

void __cdecl FUN_00caa260()
{
    using namespace f3m_00caa260;
    DAT_00f5f834.Setting::Setting();
    atexit(FUN_00d8c620);
}

// @f3 0x00cb9d30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9d30 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f617cc;
void __cdecl FUN_00d8efe0();
}

void __cdecl FUN_00cb9d30()
{
    using namespace f3m_00cb9d30;
    DAT_00f617cc.Setting::Setting();
    atexit(FUN_00d8efe0);
}

// @f3 0x00caf240 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf240 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60230;
void __cdecl FUN_00d8d370();
}

void __cdecl FUN_00caf240()
{
    using namespace f3m_00caf240;
    DAT_00f60230.Setting::Setting();
    atexit(FUN_00d8d370);
}

// @f3 0x00ca7ce0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7ce0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f384;
void __cdecl FUN_00d8bfe0();
}

void __cdecl FUN_00ca7ce0()
{
    using namespace f3m_00ca7ce0;
    DAT_00f5f384.Setting::Setting();
    atexit(FUN_00d8bfe0);
}

// @f3 0x00cb6c10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6c10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f611a8;
void __cdecl FUN_00d8e7b0();
}

void __cdecl FUN_00cb6c10()
{
    using namespace f3m_00cb6c10;
    DAT_00f611a8.Setting::Setting();
    atexit(FUN_00d8e7b0);
}

// @f3 0x00ca9840 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9840 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f6f0;
void __cdecl FUN_00d8c470();
}

void __cdecl FUN_00ca9840()
{
    using namespace f3m_00ca9840;
    DAT_00f5f6f0.Setting::Setting();
    atexit(FUN_00d8c470);
}

// @f3 0x00cb94f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb94f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f616c4;
void __cdecl FUN_00d8ee80();
}

void __cdecl FUN_00cb94f0()
{
    using namespace f3m_00cb94f0;
    DAT_00f616c4.Setting::Setting();
    atexit(FUN_00d8ee80);
}

// @f3 0x00cacf60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cacf60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fdd4;
void __cdecl FUN_00d8cda0();
}

void __cdecl FUN_00cacf60()
{
    using namespace f3m_00cacf60;
    DAT_00f5fdd4.Setting::Setting();
    atexit(FUN_00d8cda0);
}

// @f3 0x00ca68d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca68d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f058;
void __cdecl FUN_00d8bcd0();
}

void __cdecl FUN_00ca68d0()
{
    using namespace f3m_00ca68d0;
    DAT_00f5f058.Setting::Setting();
    atexit(FUN_00d8bcd0);
}

// @f3 0x00cbcbb0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbcbb0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61d9c;
void __cdecl FUN_00d8f7a0();
}

void __cdecl FUN_00cbcbb0()
{
    using namespace f3m_00cbcbb0;
    DAT_00f61d9c.Setting::Setting();
    atexit(FUN_00d8f7a0);
}

// @f3 0x00ca86a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca86a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f4bc;
void __cdecl FUN_00d8c180();
}

void __cdecl FUN_00ca86a0()
{
    using namespace f3m_00ca86a0;
    DAT_00f5f4bc.Setting::Setting();
    atexit(FUN_00d8c180);
}

// @f3 0x00ca83a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca83a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f45c;
void __cdecl FUN_00d8c100();
}

void __cdecl FUN_00ca83a0()
{
    using namespace f3m_00ca83a0;
    DAT_00f5f45c.Setting::Setting();
    atexit(FUN_00d8c100);
}

// @f3 0x00cbb8f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbb8f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61b44;
void __cdecl FUN_00d8f480();
}

void __cdecl FUN_00cbb8f0()
{
    using namespace f3m_00cbb8f0;
    DAT_00f61b44.Setting::Setting();
    atexit(FUN_00d8f480);
}

// @f3 0x00cbfeb0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbfeb0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f623fc;
void __cdecl FUN_00d90020();
}

void __cdecl FUN_00cbfeb0()
{
    using namespace f3m_00cbfeb0;
    DAT_00f623fc.Setting::Setting();
    atexit(FUN_00d90020);
}

// @f3 0x00cb2480 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2480 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60878;
void __cdecl FUN_00d8dbd0();
}

void __cdecl FUN_00cb2480()
{
    using namespace f3m_00cb2480;
    DAT_00f60878.Setting::Setting();
    atexit(FUN_00d8dbd0);
}

// @f3 0x00cbb6b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbb6b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61afc;
void __cdecl FUN_00d8f420();
}

void __cdecl FUN_00cbb6b0()
{
    using namespace f3m_00cbb6b0;
    DAT_00f61afc.Setting::Setting();
    atexit(FUN_00d8f420);
}

// @f3 0x00cbb3b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbb3b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61a9c;
void __cdecl FUN_00d8f3a0();
}

void __cdecl FUN_00cbb3b0()
{
    using namespace f3m_00cbb3b0;
    DAT_00f61a9c.Setting::Setting();
    atexit(FUN_00d8f3a0);
}

// @f3 0x00ca7fe0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7fe0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f3e4;
void __cdecl FUN_00d8c060();
}

void __cdecl FUN_00ca7fe0()
{
    using namespace f3m_00ca7fe0;
    DAT_00f5f3e4.Setting::Setting();
    atexit(FUN_00d8c060);
}

// @f3 0x00cac240 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cac240 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fc30;
void __cdecl FUN_00d8cb70();
}

void __cdecl FUN_00cac240()
{
    using namespace f3m_00cac240;
    DAT_00f5fc30.Setting::Setting();
    atexit(FUN_00d8cb70);
}

// @f3 0x00ca9960 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9960 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f714;
void __cdecl FUN_00d8c4a0();
}

void __cdecl FUN_00ca9960()
{
    using namespace f3m_00ca9960;
    DAT_00f5f714.Setting::Setting();
    atexit(FUN_00d8c4a0);
}

// @f3 0x00cb0020 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0020 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f603ec;
void __cdecl FUN_00d8d5c0();
}

void __cdecl FUN_00cb0020()
{
    using namespace f3m_00cb0020;
    DAT_00f603ec.Setting::Setting();
    atexit(FUN_00d8d5c0);
}

// @f3 0x00cbb650 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbb650 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61af0;
void __cdecl FUN_00d8f410();
}

void __cdecl FUN_00cbb650()
{
    using namespace f3m_00cbb650;
    DAT_00f61af0.Setting::Setting();
    atexit(FUN_00d8f410);
}

// @f3 0x00ca3bd0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3bd0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ea78;
void __cdecl FUN_00d8b550();
}

void __cdecl FUN_00ca3bd0()
{
    using namespace f3m_00ca3bd0;
    DAT_00f5ea78.Setting::Setting();
    atexit(FUN_00d8b550);
}

// @f3 0x00cb3620 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3620 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60aac;
void __cdecl FUN_00d8dec0();
}

void __cdecl FUN_00cb3620()
{
    using namespace f3m_00cb3620;
    DAT_00f60aac.Setting::Setting();
    atexit(FUN_00d8dec0);
}

// @f3 0x00cb7150 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7150 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61250;
void __cdecl FUN_00d8e890();
}

void __cdecl FUN_00cb7150()
{
    using namespace f3m_00cb7150;
    DAT_00f61250.Setting::Setting();
    atexit(FUN_00d8e890);
}

// @f3 0x00cb1ac0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1ac0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60740;
void __cdecl FUN_00d8da30();
}

void __cdecl FUN_00cb1ac0()
{
    using namespace f3m_00cb1ac0;
    DAT_00f60740.Setting::Setting();
    atexit(FUN_00d8da30);
}

// @f3 0x00ca26d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca26d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e7d8;
void __cdecl FUN_00d8b1d0();
}

void __cdecl FUN_00ca26d0()
{
    using namespace f3m_00ca26d0;
    DAT_00f5e7d8.Setting::Setting();
    atexit(FUN_00d8b1d0);
}

// @f3 0x00cac060 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cac060 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fbf4;
void __cdecl FUN_00d8cb20();
}

void __cdecl FUN_00cac060()
{
    using namespace f3m_00cac060;
    DAT_00f5fbf4.Setting::Setting();
    atexit(FUN_00d8cb20);
}

// @f3 0x00cbcfd0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbcfd0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61e20;
void __cdecl FUN_00d8f850();
}

void __cdecl FUN_00cbcfd0()
{
    using namespace f3m_00cbcfd0;
    DAT_00f61e20.Setting::Setting();
    atexit(FUN_00d8f850);
}

// @f3 0x00cb51e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb51e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60e24;
void __cdecl FUN_00d8e360();
}

void __cdecl FUN_00cb51e0()
{
    using namespace f3m_00cb51e0;
    DAT_00f60e24.Setting::Setting();
    atexit(FUN_00d8e360);
}

// @f3 0x00cb3a40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3a40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60b30;
void __cdecl FUN_00d8df70();
}

void __cdecl FUN_00cb3a40()
{
    using namespace f3m_00cb3a40;
    DAT_00f60b30.Setting::Setting();
    atexit(FUN_00d8df70);
}

// @f3 0x00ca5cd0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca5cd0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ee98;
void __cdecl FUN_00d8bad0();
}

void __cdecl FUN_00ca5cd0()
{
    using namespace f3m_00ca5cd0;
    DAT_00f5ee98.Setting::Setting();
    atexit(FUN_00d8bad0);
}

// @f3 0x00cac600 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cac600 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fca8;
void __cdecl FUN_00d8cc10();
}

void __cdecl FUN_00cac600()
{
    using namespace f3m_00cac600;
    DAT_00f5fca8.Setting::Setting();
    atexit(FUN_00d8cc10);
}

// @f3 0x00cb0b60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0b60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60554;
void __cdecl FUN_00d8d7a0();
}

void __cdecl FUN_00cb0b60()
{
    using namespace f3m_00cb0b60;
    DAT_00f60554.Setting::Setting();
    atexit(FUN_00d8d7a0);
}

// @f3 0x00cb7210 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7210 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61268;
void __cdecl FUN_00d8e8b0();
}

void __cdecl FUN_00cb7210()
{
    using namespace f3m_00cb7210;
    DAT_00f61268.Setting::Setting();
    atexit(FUN_00d8e8b0);
}

// @f3 0x00ca2970 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2970 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e82c;
void __cdecl FUN_00d8b240();
}

void __cdecl FUN_00ca2970()
{
    f3m_00ca2970::DAT_00f5e82c.Setting::Setting();
    atexit(f3m_00ca2970::FUN_00d8b240);
}

// @f3 0x00cb1640 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1640 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f606b0;
void __cdecl FUN_00d8d970();
}

void __cdecl FUN_00cb1640()
{
    f3m_00cb1640::DAT_00f606b0.Setting::Setting();
    atexit(f3m_00cb1640::FUN_00d8d970);
}

// @f3 0x00cae220 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cae220 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6002c;
void __cdecl FUN_00d8d0c0();
}

void __cdecl FUN_00cae220()
{
    f3m_00cae220::DAT_00f6002c.Setting::Setting();
    atexit(f3m_00cae220::FUN_00d8d0c0);
}

// @f3 0x00cbacf0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbacf0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f619c4;
void __cdecl FUN_00d8f280();
}

void __cdecl FUN_00cbacf0()
{
    f3m_00cbacf0::DAT_00f619c4.Setting::Setting();
    atexit(f3m_00cbacf0::FUN_00d8f280);
}

// @f3 0x00cae640 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cae640 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f600b0;
void __cdecl FUN_00d8d170();
}

void __cdecl FUN_00cae640()
{
    f3m_00cae640::DAT_00f600b0.Setting::Setting();
    atexit(f3m_00cae640::FUN_00d8d170);
}

// @f3 0x00cb95b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb95b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f616dc;
void __cdecl FUN_00d8eea0();
}

void __cdecl FUN_00cb95b0()
{
    f3m_00cb95b0::DAT_00f616dc.Setting::Setting();
    atexit(f3m_00cb95b0::FUN_00d8eea0);
}

// @f3 0x00caafe0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caafe0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f9e4;
void __cdecl FUN_00d8c860();
}

void __cdecl FUN_00caafe0()
{
    f3m_00caafe0::DAT_00f5f9e4.Setting::Setting();
    atexit(f3m_00caafe0::FUN_00d8c860);
}

// @f3 0x00ca6c30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6c30 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f0c4;
void __cdecl FUN_00d8bd60();
}

void __cdecl FUN_00ca6c30()
{
    f3m_00ca6c30::DAT_00f5f0c4.Setting::Setting();
    atexit(f3m_00ca6c30::FUN_00d8bd60);
}

// @f3 0x00cb2420 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2420 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6086c;
void __cdecl FUN_00d8dbc0();
}

void __cdecl FUN_00cb2420()
{
    f3m_00cb2420::DAT_00f6086c.Setting::Setting();
    atexit(f3m_00cb2420::FUN_00d8dbc0);
}

// @f3 0x00cafd20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cafd20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6038c;
void __cdecl FUN_00d8d540();
}

void __cdecl FUN_00cafd20()
{
    f3m_00cafd20::DAT_00f6038c.Setting::Setting();
    atexit(f3m_00cafd20::FUN_00d8d540);
}

// @f3 0x00cbfe50 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbfe50 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f623f0;
void __cdecl FUN_00d90010();
}

void __cdecl FUN_00cbfe50()
{
    f3m_00cbfe50::DAT_00f623f0.Setting::Setting();
    atexit(f3m_00cbfe50::FUN_00d90010);
}

// @f3 0x00cbd3f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd3f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61ea4;
void __cdecl FUN_00d8f900();
}

void __cdecl FUN_00cbd3f0()
{
    f3m_00cbd3f0::DAT_00f61ea4.Setting::Setting();
    atexit(f3m_00cbd3f0::FUN_00d8f900);
}

// @f3 0x00cab340 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cab340 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fa50;
void __cdecl FUN_00d8c8f0();
}

void __cdecl FUN_00cab340()
{
    f3m_00cab340::DAT_00f5fa50.Setting::Setting();
    atexit(f3m_00cab340::FUN_00d8c8f0);
}

// @f3 0x00cb7cf0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7cf0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f613c4;
void __cdecl FUN_00d8ea80();
}

void __cdecl FUN_00cb7cf0()
{
    f3m_00cb7cf0::DAT_00f613c4.Setting::Setting();
    atexit(f3m_00cb7cf0::FUN_00d8ea80);
}

// @f3 0x00cb5c60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb5c60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60f74;
void __cdecl FUN_00d8e520();
}

void __cdecl FUN_00cb5c60()
{
    f3m_00cb5c60::DAT_00f60f74.Setting::Setting();
    atexit(f3m_00cb5c60::FUN_00d8e520);
}

// @f3 0x00ca7800 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7800 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f2e8;
void __cdecl FUN_00d8bf10();
}

void __cdecl FUN_00ca7800()
{
    f3m_00ca7800::DAT_00f5f2e8.Setting::Setting();
    atexit(f3m_00ca7800::FUN_00d8bf10);
}

// @f3 0x00cb5720 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb5720 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60ecc;
void __cdecl FUN_00d8e440();
}

void __cdecl FUN_00cb5720()
{
    f3m_00cb5720::DAT_00f60ecc.Setting::Setting();
    atexit(f3m_00cb5720::FUN_00d8e440);
}

// @f3 0x00cb69d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb69d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61160;
void __cdecl FUN_00d8e750();
}

void __cdecl FUN_00cb69d0()
{
    f3m_00cb69d0::DAT_00f61160.Setting::Setting();
    atexit(f3m_00cb69d0::FUN_00d8e750);
}

// @f3 0x00cb8bf0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8bf0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f615a4;
void __cdecl FUN_00d8ed00();
}

void __cdecl FUN_00cb8bf0()
{
    f3m_00cb8bf0::DAT_00f615a4.Setting::Setting();
    atexit(f3m_00cb8bf0::FUN_00d8ed00);
}

// @f3 0x00ca2850 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2850 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e808;
void __cdecl FUN_00d8b210();
}

void __cdecl FUN_00ca2850()
{
    f3m_00ca2850::DAT_00f5e808.Setting::Setting();
    atexit(f3m_00ca2850::FUN_00d8b210);
}

// @f3 0x00cb3380 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3380 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60a58;
void __cdecl FUN_00d8de50();
}

void __cdecl FUN_00cb3380()
{
    f3m_00cb3380::DAT_00f60a58.Setting::Setting();
    atexit(f3m_00cb3380::FUN_00d8de50);
}

// @f3 0x00cb5ba0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb5ba0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60f5c;
void __cdecl FUN_00d8e500();
}

void __cdecl FUN_00cb5ba0()
{
    f3m_00cb5ba0::DAT_00f60f5c.Setting::Setting();
    atexit(f3m_00cb5ba0::FUN_00d8e500);
}

// @f3 0x00cb8350 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8350 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61490;
void __cdecl FUN_00d8eb90();
}

void __cdecl FUN_00cb8350()
{
    f3m_00cb8350::DAT_00f61490.Setting::Setting();
    atexit(f3m_00cb8350::FUN_00d8eb90);
}

// @f3 0x00cb1a00 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1a00 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60728;
void __cdecl FUN_00d8da10();
}

void __cdecl FUN_00cb1a00()
{
    f3m_00cb1a00::DAT_00f60728.Setting::Setting();
    atexit(f3m_00cb1a00::FUN_00d8da10);
}

// @f3 0x00cb0ec0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0ec0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f605c0;
void __cdecl FUN_00d8d830();
}

void __cdecl FUN_00cb0ec0()
{
    f3m_00cb0ec0::DAT_00f605c0.Setting::Setting();
    atexit(f3m_00cb0ec0::FUN_00d8d830);
}

// @f3 0x00cb8950 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8950 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61550;
void __cdecl FUN_00d8ec90();
}

void __cdecl FUN_00cb8950()
{
    f3m_00cb8950::DAT_00f61550.Setting::Setting();
    atexit(f3m_00cb8950::FUN_00d8ec90);
}

// @f3 0x00cb3ce0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3ce0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60b84;
void __cdecl FUN_00d8dfe0();
}

void __cdecl FUN_00cb3ce0()
{
    f3m_00cb3ce0::DAT_00f60b84.Setting::Setting();
    atexit(f3m_00cb3ce0::FUN_00d8dfe0);
}

// @f3 0x00caffc0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caffc0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f603e0;
void __cdecl FUN_00d8d5b0();
}

void __cdecl FUN_00caffc0()
{
    f3m_00caffc0::DAT_00f603e0.Setting::Setting();
    atexit(f3m_00caffc0::FUN_00d8d5b0);
}

// @f3 0x00cb3740 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3740 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60ad0;
void __cdecl FUN_00d8def0();
}

void __cdecl FUN_00cb3740()
{
    f3m_00cb3740::DAT_00f60ad0.Setting::Setting();
    atexit(f3m_00cb3740::FUN_00d8def0);
}

// @f3 0x00cbd270 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd270 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61e74;
void __cdecl FUN_00d8f8c0();
}

void __cdecl FUN_00cbd270()
{
    f3m_00cbd270::DAT_00f61e74.Setting::Setting();
    atexit(f3m_00cbd270::FUN_00d8f8c0);
}

// @f3 0x00cbeb90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbeb90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62198;
void __cdecl FUN_00d8fcf0();
}

void __cdecl FUN_00cbeb90()
{
    f3m_00cbeb90::DAT_00f62198.Setting::Setting();
    atexit(f3m_00cbeb90::FUN_00d8fcf0);
}

// @f3 0x00ca3e70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3e70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5eacc;
void __cdecl FUN_00d8b5c0();
}

void __cdecl FUN_00ca3e70()
{
    f3m_00ca3e70::DAT_00f5eacc.Setting::Setting();
    atexit(f3m_00ca3e70::FUN_00d8b5c0);
}

// @f3 0x00cb3da0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3da0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60b9c;
void __cdecl FUN_00d8e000();
}

void __cdecl FUN_00cb3da0()
{
    f3m_00cb3da0::DAT_00f60b9c.Setting::Setting();
    atexit(f3m_00cb3da0::FUN_00d8e000);
}

// @f3 0x00cbaa50 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbaa50 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61970;
void __cdecl FUN_00d8f210();
}

void __cdecl FUN_00cbaa50()
{
    f3m_00cbaa50::DAT_00f61970.Setting::Setting();
    atexit(f3m_00cbaa50::FUN_00d8f210);
}

// @f3 0x00caef40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caef40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f601d0;
void __cdecl FUN_00d8d2f0();
}

void __cdecl FUN_00caef40()
{
    f3m_00caef40::DAT_00f601d0.Setting::Setting();
    atexit(f3m_00caef40::FUN_00d8d2f0);
}

// @f3 0x00caa740 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa740 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f8d0;
void __cdecl FUN_00d8c6f0();
}

void __cdecl FUN_00caa740()
{
    f3m_00caa740::DAT_00f5f8d0.Setting::Setting();
    atexit(f3m_00caa740::FUN_00d8c6f0);
}

// @f3 0x00cbb230 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbb230 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61a6c;
void __cdecl FUN_00d8f360();
}

void __cdecl FUN_00cbb230()
{
    f3m_00cbb230::DAT_00f61a6c.Setting::Setting();
    atexit(f3m_00cbb230::FUN_00d8f360);
}

// @f3 0x00cb4460 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4460 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60c74;
void __cdecl FUN_00d8e120();
}

void __cdecl FUN_00cb4460()
{
    f3m_00cb4460::DAT_00f60c74.Setting::Setting();
    atexit(f3m_00cb4460::FUN_00d8e120);
}

// @f3 0x00cb90d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb90d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61640;
void __cdecl FUN_00d8edd0();
}

void __cdecl FUN_00cb90d0()
{
    f3m_00cb90d0::DAT_00f61640.Setting::Setting();
    atexit(f3m_00cb90d0::FUN_00d8edd0);
}

// @f3 0x00cbd630 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd630 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61eec;
void __cdecl FUN_00d8f960();
}

void __cdecl FUN_00cbd630()
{
    f3m_00cbd630::DAT_00f61eec.Setting::Setting();
    atexit(f3m_00cbd630::FUN_00d8f960);
}

// @f3 0x00ca3f90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3f90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5eaf0;
void __cdecl FUN_00d8b5f0();
}

void __cdecl FUN_00ca3f90()
{
    f3m_00ca3f90::DAT_00f5eaf0.Setting::Setting();
    atexit(f3m_00ca3f90::FUN_00d8b5f0);
}

// @f3 0x00ca4a70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca4a70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ec4c;
void __cdecl FUN_00d8b7c0();
}

void __cdecl FUN_00ca4a70()
{
    f3m_00ca4a70::DAT_00f5ec4c.Setting::Setting();
    atexit(f3m_00ca4a70::FUN_00d8b7c0);
}

// @f3 0x00cb5780 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb5780 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60ed8;
void __cdecl FUN_00d8e450();
}

void __cdecl FUN_00cb5780()
{
    f3m_00cb5780::DAT_00f60ed8.Setting::Setting();
    atexit(f3m_00cb5780::FUN_00d8e450);
}

// @f3 0x00cb2360 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2360 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60854;
void __cdecl FUN_00d8dba0();
}

void __cdecl FUN_00cb2360()
{
    f3m_00cb2360::DAT_00f60854.Setting::Setting();
    atexit(f3m_00cb2360::FUN_00d8dba0);
}

// @f3 0x00cbbd70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbbd70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61bd4;
void __cdecl FUN_00d8f540();
}

void __cdecl FUN_00cbbd70()
{
    f3m_00cbbd70::DAT_00f61bd4.Setting::Setting();
    atexit(f3m_00cbbd70::FUN_00d8f540);
}

// @f3 0x00cad6e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cad6e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fec4;
void __cdecl FUN_00d8cee0();
}

void __cdecl FUN_00cad6e0()
{
    f3m_00cad6e0::DAT_00f5fec4.Setting::Setting();
    atexit(f3m_00cad6e0::FUN_00d8cee0);
}

// @f3 0x00ca80a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca80a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f3fc;
void __cdecl FUN_00d8c080();
}

void __cdecl FUN_00ca80a0()
{
    f3m_00ca80a0::DAT_00f5f3fc.Setting::Setting();
    atexit(f3m_00ca80a0::FUN_00d8c080);
}

// @f3 0x00ca6810 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6810 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f040;
void __cdecl FUN_00d8bcb0();
}

void __cdecl FUN_00ca6810()
{
    f3m_00ca6810::DAT_00f5f040.Setting::Setting();
    atexit(f3m_00ca6810::FUN_00d8bcb0);
}

// @f3 0x00cad9e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cad9e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ff24;
void __cdecl FUN_00d8cf60();
}

void __cdecl FUN_00cad9e0()
{
    f3m_00cad9e0::DAT_00f5ff24.Setting::Setting();
    atexit(f3m_00cad9e0::FUN_00d8cf60);
}

// @f3 0x00caeb80 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caeb80 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60158;
void __cdecl FUN_00d8d250();
}

void __cdecl FUN_00caeb80()
{
    f3m_00caeb80::DAT_00f60158.Setting::Setting();
    atexit(f3m_00caeb80::FUN_00d8d250);
}

// @f3 0x00cbd870 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd870 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61f34;
void __cdecl FUN_00d8f9c0();
}

void __cdecl FUN_00cbd870()
{
    f3m_00cbd870::DAT_00f61f34.Setting::Setting();
    atexit(f3m_00cbd870::FUN_00d8f9c0);
}

// @f3 0x00cb2720 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2720 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f608cc;
void __cdecl FUN_00d8dc40();
}

void __cdecl FUN_00cb2720()
{
    f3m_00cb2720::DAT_00f608cc.Setting::Setting();
    atexit(f3m_00cb2720::FUN_00d8dc40);
}

// @f3 0x00caa380 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa380 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f858;
void __cdecl FUN_00d8c650();
}

void __cdecl FUN_00caa380()
{
    f3m_00caa380::DAT_00f5f858.Setting::Setting();
    atexit(f3m_00caa380::FUN_00d8c650);
}

// @f3 0x00cad3e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cad3e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fe64;
void __cdecl FUN_00d8ce60();
}

void __cdecl FUN_00cad3e0()
{
    f3m_00cad3e0::DAT_00f5fe64.Setting::Setting();
    atexit(f3m_00cad3e0::FUN_00d8ce60);
}

// @f3 0x00ca8a00 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8a00 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f528;
void __cdecl FUN_00d8c210();
}

void __cdecl FUN_00ca8a00()
{
    f3m_00ca8a00::DAT_00f5f528.Setting::Setting();
    atexit(f3m_00ca8a00::FUN_00d8c210);
}

// @f3 0x00ca3750 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3750 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e9e8;
void __cdecl FUN_00d8b490();
}

void __cdecl FUN_00ca3750()
{
    f3m_00ca3750::DAT_00f5e9e8.Setting::Setting();
    atexit(f3m_00ca3750::FUN_00d8b490);
}

// @f3 0x00cbd030 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd030 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61e2c;
void __cdecl FUN_00d8f860();
}

void __cdecl FUN_00cbd030()
{
    f3m_00cbd030::DAT_00f61e2c.Setting::Setting();
    atexit(f3m_00cbd030::FUN_00d8f860);
}

// @f3 0x00cb2b40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2b40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60950;
void __cdecl FUN_00d8dcf0();
}

void __cdecl FUN_00cb2b40()
{
    f3m_00cb2b40::DAT_00f60950.Setting::Setting();
    atexit(f3m_00cb2b40::FUN_00d8dcf0);
}

// @f3 0x00caaa40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caaa40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f930;
void __cdecl FUN_00d8c770();
}

void __cdecl FUN_00caaa40()
{
    f3m_00caaa40::DAT_00f5f930.Setting::Setting();
    atexit(f3m_00caaa40::FUN_00d8c770);
}

// @f3 0x00cbb2f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbb2f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61a84;
void __cdecl FUN_00d8f380();
}

void __cdecl FUN_00cbb2f0()
{
    f3m_00cbb2f0::DAT_00f61a84.Setting::Setting();
    atexit(f3m_00cbb2f0::FUN_00d8f380);
}

// @f3 0x00caa800 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa800 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f8e8;
void __cdecl FUN_00d8c710();
}

void __cdecl FUN_00caa800()
{
    f3m_00caa800::DAT_00f5f8e8.Setting::Setting();
    atexit(f3m_00caa800::FUN_00d8c710);
}

// @f3 0x00cb12e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb12e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60644;
void __cdecl FUN_00d8d8e0();
}

void __cdecl FUN_00cb12e0()
{
    f3m_00cb12e0::DAT_00f60644.Setting::Setting();
    atexit(f3m_00cb12e0::FUN_00d8d8e0);
}

// @f3 0x00cb05c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb05c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f604a0;
void __cdecl FUN_00d8d6b0();
}

void __cdecl FUN_00cb05c0()
{
    f3m_00cb05c0::DAT_00f604a0.Setting::Setting();
    atexit(f3m_00cb05c0::FUN_00d8d6b0);
}

// @f3 0x00cbd4b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd4b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61ebc;
void __cdecl FUN_00d8f920();
}

void __cdecl FUN_00cbd4b0()
{
    f3m_00cbd4b0::DAT_00f61ebc.Setting::Setting();
    atexit(f3m_00cbd4b0::FUN_00d8f920);
}

// @f3 0x00cb1220 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1220 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6062c;
void __cdecl FUN_00d8d8c0();
}

void __cdecl FUN_00cb1220()
{
    f3m_00cb1220::DAT_00f6062c.Setting::Setting();
    atexit(f3m_00cb1220::FUN_00d8d8c0);
}

// @f3 0x00cb6310 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6310 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61088;
void __cdecl FUN_00d8e630();
}

void __cdecl FUN_00cb6310()
{
    f3m_00cb6310::DAT_00f61088.Setting::Setting();
    atexit(f3m_00cb6310::FUN_00d8e630);
}

// @f3 0x00cb26c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb26c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f608c0;
void __cdecl FUN_00d8dc30();
}

void __cdecl FUN_00cb26c0()
{
    f3m_00cb26c0::DAT_00f608c0.Setting::Setting();
    atexit(f3m_00cb26c0::FUN_00d8dc30);
}

// @f3 0x00cb7e70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7e70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f613f4;
void __cdecl FUN_00d8eac0();
}

void __cdecl FUN_00cb7e70()
{
    f3m_00cb7e70::DAT_00f613f4.Setting::Setting();
    atexit(f3m_00cb7e70::FUN_00d8eac0);
}

// @f3 0x00caa3e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa3e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f864;
void __cdecl FUN_00d8c660();
}

void __cdecl FUN_00caa3e0()
{
    f3m_00caa3e0::DAT_00f5f864.Setting::Setting();
    atexit(f3m_00caa3e0::FUN_00d8c660);
}

// @f3 0x00ca13b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca13b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e574;
void __cdecl FUN_00d8aea0();
}

void __cdecl FUN_00ca13b0()
{
    f3m_00ca13b0::DAT_00f5e574.Setting::Setting();
    atexit(f3m_00ca13b0::FUN_00d8aea0);
}

// @f3 0x00cb8590 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8590 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f614d8;
void __cdecl FUN_00d8ebf0();
}

void __cdecl FUN_00cb8590()
{
    f3m_00cb8590::DAT_00f614d8.Setting::Setting();
    atexit(f3m_00cb8590::FUN_00d8ebf0);
}

// @f3 0x00cb0500 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0500 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60488;
void __cdecl FUN_00d8d690();
}

void __cdecl FUN_00cb0500()
{
    f3m_00cb0500::DAT_00f60488.Setting::Setting();
    atexit(f3m_00cb0500::FUN_00d8d690);
}

// @f3 0x00ca4b90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca4b90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ec70;
void __cdecl FUN_00d8b7f0();
}

void __cdecl FUN_00ca4b90()
{
    f3m_00ca4b90::DAT_00f5ec70.Setting::Setting();
    atexit(f3m_00ca4b90::FUN_00d8b7f0);
}

// @f3 0x00cb34a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb34a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60a7c;
void __cdecl FUN_00d8de80();
}

void __cdecl FUN_00cb34a0()
{
    f3m_00cb34a0::DAT_00f60a7c.Setting::Setting();
    atexit(f3m_00cb34a0::FUN_00d8de80);
}

// @f3 0x00caa4a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa4a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f87c;
void __cdecl FUN_00d8c680();
}

void __cdecl FUN_00caa4a0()
{
    f3m_00caa4a0::DAT_00f5f87c.Setting::Setting();
    atexit(f3m_00caa4a0::FUN_00d8c680);
}

// @f3 0x00cb8830 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8830 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6152c;
void __cdecl FUN_00d8ec60();
}

void __cdecl FUN_00cb8830()
{
    f3m_00cb8830::DAT_00f6152c.Setting::Setting();
    atexit(f3m_00cb8830::FUN_00d8ec60);
}

// @f3 0x00cbcdf0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbcdf0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61de4;
void __cdecl FUN_00d8f800();
}

void __cdecl FUN_00cbcdf0()
{
    f3m_00cbcdf0::DAT_00f61de4.Setting::Setting();
    atexit(f3m_00cbcdf0::FUN_00d8f800);
}

// @f3 0x00cb96d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb96d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61700;
void __cdecl FUN_00d8eed0();
}

void __cdecl FUN_00cb96d0()
{
    f3m_00cb96d0::DAT_00f61700.Setting::Setting();
    atexit(f3m_00cb96d0::FUN_00d8eed0);
}

// @f3 0x00cbf5b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbf5b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f622dc;
void __cdecl FUN_00d8fea0();
}

void __cdecl FUN_00cbf5b0()
{
    f3m_00cbf5b0::DAT_00f622dc.Setting::Setting();
    atexit(f3m_00cbf5b0::FUN_00d8fea0);
}

// @f3 0x00cab760 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cab760 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fad4;
void __cdecl FUN_00d8c9a0();
}

void __cdecl FUN_00cab760()
{
    f3m_00cab760::DAT_00f5fad4.Setting::Setting();
    atexit(f3m_00cab760::FUN_00d8c9a0);
}

// @f3 0x00ca82e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca82e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f444;
void __cdecl FUN_00d8c0e0();
}

void __cdecl FUN_00ca82e0()
{
    f3m_00ca82e0::DAT_00f5f444.Setting::Setting();
    atexit(f3m_00ca82e0::FUN_00d8c0e0);
}

// @f3 0x00cbc7f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbc7f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61d24;
void __cdecl FUN_00d8f700();
}

void __cdecl FUN_00cbc7f0()
{
    f3m_00cbc7f0::DAT_00f61d24.Setting::Setting();
    atexit(f3m_00cbc7f0::FUN_00d8f700);
}

// @f3 0x00cace40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cace40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fdb0;
void __cdecl FUN_00d8cd70();
}

void __cdecl FUN_00cace40()
{
    f3m_00cace40::DAT_00f5fdb0.Setting::Setting();
    atexit(f3m_00cace40::FUN_00d8cd70);
}

// @f3 0x00cbdd50 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbdd50 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61fd0;
void __cdecl FUN_00d8fa90();
}

void __cdecl FUN_00cbdd50()
{
    f3m_00cbdd50::DAT_00f61fd0.Setting::Setting();
    atexit(f3m_00cbdd50::FUN_00d8fa90);
}

// @f3 0x00cac360 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cac360 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fc54;
void __cdecl FUN_00d8cba0();
}

void __cdecl FUN_00cac360()
{
    f3m_00cac360::DAT_00f5fc54.Setting::Setting();
    atexit(f3m_00cac360::FUN_00d8cba0);
}

// @f3 0x00ca6510 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6510 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5efe0;
void __cdecl FUN_00d8bc30();
}

void __cdecl FUN_00ca6510()
{
    f3m_00ca6510::DAT_00f5efe0.Setting::Setting();
    atexit(f3m_00ca6510::FUN_00d8bc30);
}

// @f3 0x00cb24e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb24e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60884;
void __cdecl FUN_00d8dbe0();
}

void __cdecl FUN_00cb24e0()
{
    f3m_00cb24e0::DAT_00f60884.Setting::Setting();
    atexit(f3m_00cb24e0::FUN_00d8dbe0);
}

// @f3 0x00ca2910 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2910 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e820;
void __cdecl FUN_00d8b230();
}

void __cdecl FUN_00ca2910()
{
    f3m_00ca2910::DAT_00f5e820.Setting::Setting();
    atexit(f3m_00ca2910::FUN_00d8b230);
}

// @f3 0x00cad4a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cad4a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fe7c;
void __cdecl FUN_00d8ce80();
}

void __cdecl FUN_00cad4a0()
{
    f3m_00cad4a0::DAT_00f5fe7c.Setting::Setting();
    atexit(f3m_00cad4a0::FUN_00d8ce80);
}

// @f3 0x00ca6e70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6e70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f10c;
void __cdecl FUN_00d8bdc0();
}

void __cdecl FUN_00ca6e70()
{
    f3m_00ca6e70::DAT_00f5f10c.Setting::Setting();
    atexit(f3m_00ca6e70::FUN_00d8bdc0);
}

// @f3 0x00cb2e40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2e40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f609b0;
void __cdecl FUN_00d8dd70();
}

void __cdecl FUN_00cb2e40()
{
    f3m_00cb2e40::DAT_00f609b0.Setting::Setting();
    atexit(f3m_00cb2e40::FUN_00d8dd70);
}

// @f3 0x00cbd9f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd9f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61f64;
void __cdecl FUN_00d8fa00();
}

void __cdecl FUN_00cbd9f0()
{
    f3m_00cbd9f0::DAT_00f61f64.Setting::Setting();
    atexit(f3m_00cbd9f0::FUN_00d8fa00);
}

// @f3 0x00cbc430 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbc430 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61cac;
void __cdecl FUN_00d8f660();
}

void __cdecl FUN_00cbc430()
{
    f3m_00cbc430::DAT_00f61cac.Setting::Setting();
    atexit(f3m_00cbc430::FUN_00d8f660);
}

// @f3 0x00cbfa30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbfa30 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6236c;
void __cdecl FUN_00d8ff60();
}

void __cdecl FUN_00cbfa30()
{
    f3m_00cbfa30::DAT_00f6236c.Setting::Setting();
    atexit(f3m_00cbfa30::FUN_00d8ff60);
}

// @f3 0x00ca1bf0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca1bf0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e67c;
void __cdecl FUN_00d8b000();
}

void __cdecl FUN_00ca1bf0()
{
    f3m_00ca1bf0::DAT_00f5e67c.Setting::Setting();
    atexit(f3m_00ca1bf0::FUN_00d8b000);
}

// @f3 0x00cb6610 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6610 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f610e8;
void __cdecl FUN_00d8e6b0();
}

void __cdecl FUN_00cb6610()
{
    f3m_00cb6610::DAT_00f610e8.Setting::Setting();
    atexit(f3m_00cb6610::FUN_00d8e6b0);
}

// @f3 0x00cb88f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb88f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61544;
void __cdecl FUN_00d8ec80();
}

void __cdecl FUN_00cb88f0()
{
    f3m_00cb88f0::DAT_00f61544.Setting::Setting();
    atexit(f3m_00cb88f0::FUN_00d8ec80);
}

// @f3 0x00cb5360 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb5360 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60e54;
void __cdecl FUN_00d8e3a0();
}

void __cdecl FUN_00cb5360()
{
    f3m_00cb5360::DAT_00f60e54.Setting::Setting();
    atexit(f3m_00cb5360::FUN_00d8e3a0);
}

// @f3 0x00cb5300 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb5300 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60e48;
void __cdecl FUN_00d8e390();
}

void __cdecl FUN_00cb5300()
{
    f3m_00cb5300::DAT_00f60e48.Setting::Setting();
    atexit(f3m_00cb5300::FUN_00d8e390);
}

// @f3 0x00ca7d40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7d40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f390;
void __cdecl FUN_00d8bff0();
}

void __cdecl FUN_00ca7d40()
{
    f3m_00ca7d40::DAT_00f5f390.Setting::Setting();
    atexit(f3m_00ca7d40::FUN_00d8bff0);
}

// @f3 0x00ca10b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca10b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e514;
void __cdecl FUN_00d8ae20();
}

void __cdecl FUN_00ca10b0()
{
    f3m_00ca10b0::DAT_00f5e514.Setting::Setting();
    atexit(f3m_00ca10b0::FUN_00d8ae20);
}

// @f3 0x00cb9df0 (community match, verified in this file)
extern Setting DAT_00f617e4;
namespace f3m_00cb9df0 {

void FUN_00d8f000();
void FUN_00c00d1f(void (*fn)()) throw();

void __cdecl FUN_00cb9df0()
{
    DAT_00f617e4.Setting::Setting();
    FUN_00c00d1f(FUN_00d8f000);
}
}   // namespace f3m_00cb9df0

// @f3 0x00caa440 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa440 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f870;
void __cdecl FUN_00d8c670();
}

void __cdecl FUN_00caa440()
{
    f3m_00caa440::DAT_00f5f870.Setting::Setting();
    atexit(f3m_00caa440::FUN_00d8c670);
}

// @f3 0x00ca2130 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2130 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e724;
void __cdecl FUN_00d8b0e0();
}

void __cdecl FUN_00ca2130()
{
    f3m_00ca2130::DAT_00f5e724.Setting::Setting();
    atexit(f3m_00ca2130::FUN_00d8b0e0);
}

// @f3 0x00cb5d80 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb5d80 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60f98;
void __cdecl FUN_00d8e550();
}

void __cdecl FUN_00cb5d80()
{
    f3m_00cb5d80::DAT_00f60f98.Setting::Setting();
    atexit(f3m_00cb5d80::FUN_00d8e550);
}

// @f3 0x00cb33e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb33e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60a64;
void __cdecl FUN_00d8de60();
}

void __cdecl FUN_00cb33e0()
{
    f3m_00cb33e0::DAT_00f60a64.Setting::Setting();
    atexit(f3m_00cb33e0::FUN_00d8de60);
}

// @f3 0x00ca34b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca34b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e994;
void __cdecl FUN_00d8b420();
}

void __cdecl FUN_00ca34b0()
{
    f3m_00ca34b0::DAT_00f5e994.Setting::Setting();
    atexit(f3m_00ca34b0::FUN_00d8b420);
}

// @f3 0x00cbe770 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbe770 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62114;
void __cdecl FUN_00d8fc40();
}

void __cdecl FUN_00cbe770()
{
    f3m_00cbe770::DAT_00f62114.Setting::Setting();
    atexit(f3m_00cbe770::FUN_00d8fc40);
}

// @f3 0x00ca6db0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6db0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f0f4;
void __cdecl FUN_00d8bda0();
}

void __cdecl FUN_00ca6db0()
{
    f3m_00ca6db0::DAT_00f5f0f4.Setting::Setting();
    atexit(f3m_00ca6db0::FUN_00d8bda0);
}

// @f3 0x00cb3260 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3260 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60a34;
void __cdecl FUN_00d8de20();
}

void __cdecl FUN_00cb3260()
{
    f3m_00cb3260::DAT_00f60a34.Setting::Setting();
    atexit(f3m_00cb3260::FUN_00d8de20);
}

// @f3 0x00cbc070 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbc070 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61c34;
void __cdecl FUN_00d8f5c0();
}

void __cdecl FUN_00cbc070()
{
    f3m_00cbc070::DAT_00f61c34.Setting::Setting();
    atexit(f3m_00cbc070::FUN_00d8f5c0);
}

// @f3 0x00cb6d90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6d90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f611d8;
void __cdecl FUN_00d8e7f0();
}

void __cdecl FUN_00cb6d90()
{
    f3m_00cb6d90::DAT_00f611d8.Setting::Setting();
    atexit(f3m_00cb6d90::FUN_00d8e7f0);
}

// @f3 0x00cbdc90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbdc90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61fb8;
void __cdecl FUN_00d8fa70();
}

void __cdecl FUN_00cbdc90()
{
    f3m_00cbdc90::DAT_00f61fb8.Setting::Setting();
    atexit(f3m_00cbdc90::FUN_00d8fa70);
}

// @f3 0x00ca4350 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca4350 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5eb68;
void __cdecl FUN_00d8b690();
}

void __cdecl FUN_00ca4350()
{
    f3m_00ca4350::DAT_00f5eb68.Setting::Setting();
    atexit(f3m_00ca4350::FUN_00d8b690);
}

// @f3 0x00cb0980 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0980 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60518;
void __cdecl FUN_00d8d750();
}

void __cdecl FUN_00cb0980()
{
    f3m_00cb0980::DAT_00f60518.Setting::Setting();
    atexit(f3m_00cb0980::FUN_00d8d750);
}

// @f3 0x00cabe20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cabe20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fbac;
void __cdecl FUN_00d8cac0();
}

void __cdecl FUN_00cabe20()
{
    f3m_00cabe20::DAT_00f5fbac.Setting::Setting();
    atexit(f3m_00cabe20::FUN_00d8cac0);
}

// @f3 0x00cb2180 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2180 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60818;
void __cdecl FUN_00d8db50();
}

void __cdecl FUN_00cb2180()
{
    f3m_00cb2180::DAT_00f60818.Setting::Setting();
    atexit(f3m_00cb2180::FUN_00d8db50);
}

// @f3 0x00cbf910 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbf910 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62348;
void __cdecl FUN_00d8ff30();
}

void __cdecl FUN_00cbf910()
{
    f3m_00cbf910::DAT_00f62348.Setting::Setting();
    atexit(f3m_00cbf910::FUN_00d8ff30);
}

// @f3 0x00cbc910 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbc910 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61d48;
void __cdecl FUN_00d8f730();
}

void __cdecl FUN_00cbc910()
{
    f3m_00cbc910::DAT_00f61d48.Setting::Setting();
    atexit(f3m_00cbc910::FUN_00d8f730);
}

// @f3 0x00cb31a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb31a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60a1c;
void __cdecl FUN_00d8de00();
}

void __cdecl FUN_00cb31a0()
{
    f3m_00cb31a0::DAT_00f60a1c.Setting::Setting();
    atexit(f3m_00cb31a0::FUN_00d8de00);
}

// @f3 0x00cb78d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb78d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61340;
void __cdecl FUN_00d8e9d0();
}

void __cdecl FUN_00cb78d0()
{
    f3m_00cb78d0::DAT_00f61340.Setting::Setting();
    atexit(f3m_00cb78d0::FUN_00d8e9d0);
}

// @f3 0x00caf4e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf4e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60284;
void __cdecl FUN_00d8d3e0();
}

void __cdecl FUN_00caf4e0()
{
    f3m_00caf4e0::DAT_00f60284.Setting::Setting();
    atexit(f3m_00caf4e0::FUN_00d8d3e0);
}

// @f3 0x00caa920 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa920 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f90c;
void __cdecl FUN_00d8c740();
}

void __cdecl FUN_00caa920()
{
    f3m_00caa920::DAT_00f5f90c.Setting::Setting();
    atexit(f3m_00caa920::FUN_00d8c740);
}

// @f3 0x00caf540 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf540 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60290;
void __cdecl FUN_00d8d3f0();
}

void __cdecl FUN_00caf540()
{
    f3m_00caf540::DAT_00f60290.Setting::Setting();
    atexit(f3m_00caf540::FUN_00d8d3f0);
}

// @f3 0x00cb62b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb62b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6107c;
void __cdecl FUN_00d8e620();
}

void __cdecl FUN_00cb62b0()
{
    f3m_00cb62b0::DAT_00f6107c.Setting::Setting();
    atexit(f3m_00cb62b0::FUN_00d8e620);
}

// @f3 0x00cbc970 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbc970 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61d54;
void __cdecl FUN_00d8f740();
}

void __cdecl FUN_00cbc970()
{
    f3m_00cbc970::DAT_00f61d54.Setting::Setting();
    atexit(f3m_00cbc970::FUN_00d8f740);
}

// @f3 0x00ca5d90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca5d90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5eeb0;
void __cdecl FUN_00d8baf0();
}

void __cdecl FUN_00ca5d90()
{
    f3m_00ca5d90::DAT_00f5eeb0.Setting::Setting();
    atexit(f3m_00ca5d90::FUN_00d8baf0);
}

// @f3 0x00cbc790 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbc790 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61d18;
void __cdecl FUN_00d8f6f0();
}

void __cdecl FUN_00cbc790()
{
    f3m_00cbc790::DAT_00f61d18.Setting::Setting();
    atexit(f3m_00cbc790::FUN_00d8f6f0);
}

// @f3 0x00cb1a60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1a60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60734;
void __cdecl FUN_00d8da20();
}

void __cdecl FUN_00cb1a60()
{
    f3m_00cb1a60::DAT_00f60734.Setting::Setting();
    atexit(f3m_00cb1a60::FUN_00d8da20);
}

// @f3 0x00ca5af0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca5af0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ee5c;
void __cdecl FUN_00d8ba80();
}

void __cdecl FUN_00ca5af0()
{
    f3m_00ca5af0::DAT_00f5ee5c.Setting::Setting();
    atexit(f3m_00ca5af0::FUN_00d8ba80);
}

// @f3 0x00ca6e10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6e10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f100;
void __cdecl FUN_00d8bdb0();
}

void __cdecl FUN_00ca6e10()
{
    f3m_00ca6e10::DAT_00f5f100.Setting::Setting();
    atexit(f3m_00ca6e10::FUN_00d8bdb0);
}

// @f3 0x00ca7ec0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7ec0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f3c0;
void __cdecl FUN_00d8c030();
}

void __cdecl FUN_00ca7ec0()
{
    f3m_00ca7ec0::DAT_00f5f3c0.Setting::Setting();
    atexit(f3m_00ca7ec0::FUN_00d8c030);
}

// @f3 0x00cad200 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cad200 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fe28;
void __cdecl FUN_00d8ce10();
}

void __cdecl FUN_00cad200()
{
    f3m_00cad200::DAT_00f5fe28.Setting::Setting();
    atexit(f3m_00cad200::FUN_00d8ce10);
}

// @f3 0x00ca4470 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca4470 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5eb8c;
void __cdecl FUN_00d8b6c0();
}

void __cdecl FUN_00ca4470()
{
    f3m_00ca4470::DAT_00f5eb8c.Setting::Setting();
    atexit(f3m_00ca4470::FUN_00d8b6c0);
}

// @f3 0x00cb2a20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2a20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6092c;
void __cdecl FUN_00d8dcc0();
}

void __cdecl FUN_00cb2a20()
{
    f3m_00cb2a20::DAT_00f6092c.Setting::Setting();
    atexit(f3m_00cb2a20::FUN_00d8dcc0);
}

// @f3 0x00ca77a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca77a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f2dc;
void __cdecl FUN_00d8bf00();
}

void __cdecl FUN_00ca77a0()
{
    f3m_00ca77a0::DAT_00f5f2dc.Setting::Setting();
    atexit(f3m_00ca77a0::FUN_00d8bf00);
}

// @f3 0x00cb0380 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0380 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60458;
void __cdecl FUN_00d8d650();
}

void __cdecl FUN_00cb0380()
{
    f3m_00cb0380::DAT_00f60458.Setting::Setting();
    atexit(f3m_00cb0380::FUN_00d8d650);
}

// @f3 0x00cabbe0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cabbe0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fb64;
void __cdecl FUN_00d8ca60();
}

void __cdecl FUN_00cabbe0()
{
    f3m_00cabbe0::DAT_00f5fb64.Setting::Setting();
    atexit(f3m_00cabbe0::FUN_00d8ca60);
}

// @f3 0x00ca9780 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9780 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f6d8;
void __cdecl FUN_00d8c450();
}

void __cdecl FUN_00ca9780()
{
    f3m_00ca9780::DAT_00f5f6d8.Setting::Setting();
    atexit(f3m_00ca9780::FUN_00d8c450);
}

// @f3 0x00cb9610 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9610 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f616e8;
void __cdecl FUN_00d8eeb0();
}

void __cdecl FUN_00cb9610()
{
    f3m_00cb9610::DAT_00f616e8.Setting::Setting();
    atexit(f3m_00cb9610::FUN_00d8eeb0);
}

// @f3 0x00cb4ee0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4ee0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60dc4;
void __cdecl FUN_00d8e2e0();
}

void __cdecl FUN_00cb4ee0()
{
    f3m_00cb4ee0::DAT_00f60dc4.Setting::Setting();
    atexit(f3m_00cb4ee0::FUN_00d8e2e0);
}

// @f3 0x00ca8940 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8940 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f510;
void __cdecl FUN_00d8c1f0();
}

void __cdecl FUN_00ca8940()
{
    f3m_00ca8940::DAT_00f5f510.Setting::Setting();
    atexit(f3m_00ca8940::FUN_00d8c1f0);
}

// @f3 0x00cb9c10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9c10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f617a8;
void __cdecl FUN_00d8efb0();
}

void __cdecl FUN_00cb9c10()
{
    f3m_00cb9c10::DAT_00f617a8.Setting::Setting();
    atexit(f3m_00cb9c10::FUN_00d8efb0);
}

// @f3 0x00cb55a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb55a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60e9c;
void __cdecl FUN_00d8e400();
}

void __cdecl FUN_00cb55a0()
{
    f3m_00cb55a0::DAT_00f60e9c.Setting::Setting();
    atexit(f3m_00cb55a0::FUN_00d8e400);
}

// @f3 0x00cbb0b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbb0b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61a3c;
void __cdecl FUN_00d8f320();
}

void __cdecl FUN_00cbb0b0()
{
    f3m_00cbb0b0::DAT_00f61a3c.Setting::Setting();
    atexit(f3m_00cbb0b0::FUN_00d8f320);
}

// @f3 0x00ca4710 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca4710 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ebe0;
void __cdecl FUN_00d8b730();
}

void __cdecl FUN_00ca4710()
{
    f3m_00ca4710::DAT_00f5ebe0.Setting::Setting();
    atexit(f3m_00ca4710::FUN_00d8b730);
}

// @f3 0x00cb9970 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9970 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61754;
void __cdecl FUN_00d8ef40();
}

void __cdecl FUN_00cb9970()
{
    f3m_00cb9970::DAT_00f61754.Setting::Setting();
    atexit(f3m_00cb9970::FUN_00d8ef40);
}

// @f3 0x00cb44c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb44c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60c80;
void __cdecl FUN_00d8e130();
}

void __cdecl FUN_00cb44c0()
{
    f3m_00cb44c0::DAT_00f60c80.Setting::Setting();
    atexit(f3m_00cb44c0::FUN_00d8e130);
}

// @f3 0x00cba990 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cba990 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61958;
void __cdecl FUN_00d8f1f0();
}

void __cdecl FUN_00cba990()
{
    f3m_00cba990::DAT_00f61958.Setting::Setting();
    atexit(f3m_00cba990::FUN_00d8f1f0);
}

// @f3 0x00cafc60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cafc60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60374;
void __cdecl FUN_00d8d520();
}

void __cdecl FUN_00cafc60()
{
    f3m_00cafc60::DAT_00f60374.Setting::Setting();
    atexit(f3m_00cafc60::FUN_00d8d520);
}

// @f3 0x00cb4820 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4820 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60cec;
void __cdecl FUN_00d8e1c0();
}

void __cdecl FUN_00cb4820()
{
    f3m_00cb4820::DAT_00f60cec.Setting::Setting();
    atexit(f3m_00cb4820::FUN_00d8e1c0);
}

// @f3 0x00ca57f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca57f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5edfc;
void __cdecl FUN_00d8ba00();
}

void __cdecl FUN_00ca57f0()
{
    f3m_00ca57f0::DAT_00f5edfc.Setting::Setting();
    atexit(f3m_00ca57f0::FUN_00d8ba00);
}

// @f3 0x00ca35d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca35d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e9b8;
void __cdecl FUN_00d8b450();
}

void __cdecl FUN_00ca35d0()
{
    f3m_00ca35d0::DAT_00f5e9b8.Setting::Setting();
    atexit(f3m_00ca35d0::FUN_00d8b450);
}

// @f3 0x00cbb290 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbb290 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61a78;
void __cdecl FUN_00d8f370();
}

void __cdecl FUN_00cbb290()
{
    f3m_00cbb290::DAT_00f61a78.Setting::Setting();
    atexit(f3m_00cbb290::FUN_00d8f370);
}

// @f3 0x00cb4880 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4880 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60cf8;
void __cdecl FUN_00d8e1d0();
}

void __cdecl FUN_00cb4880()
{
    f3m_00cb4880::DAT_00f60cf8.Setting::Setting();
    atexit(f3m_00cb4880::FUN_00d8e1d0);
}

// @f3 0x00ca71d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca71d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f178;
void __cdecl FUN_00d8be50();
}

void __cdecl FUN_00ca71d0()
{
    f3m_00ca71d0::DAT_00f5f178.Setting::Setting();
    atexit(f3m_00ca71d0::FUN_00d8be50);
}

// @f3 0x00cb7690 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7690 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f612f8;
void __cdecl FUN_00d8e970();
}

void __cdecl FUN_00cb7690()
{
    f3m_00cb7690::DAT_00f612f8.Setting::Setting();
    atexit(f3m_00cb7690::FUN_00d8e970);
}

// @f3 0x00cb1d60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1d60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60794;
void __cdecl FUN_00d8daa0();
}

void __cdecl FUN_00cb1d60()
{
    f3m_00cb1d60::DAT_00f60794.Setting::Setting();
    atexit(f3m_00cb1d60::FUN_00d8daa0);
}

// @f3 0x00cb8470 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8470 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f614b4;
void __cdecl FUN_00d8ebc0();
}

void __cdecl FUN_00cb8470()
{
    f3m_00cb8470::DAT_00f614b4.Setting::Setting();
    atexit(f3m_00cb8470::FUN_00d8ebc0);
}

// @f3 0x00ca3390 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3390 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e970;
void __cdecl FUN_00d8b3f0();
}

void __cdecl FUN_00ca3390()
{
    f3m_00ca3390::DAT_00f5e970.Setting::Setting();
    atexit(f3m_00ca3390::FUN_00d8b3f0);
}

// @f3 0x00cb4c40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4c40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60d70;
void __cdecl FUN_00d8e270();
}

void __cdecl FUN_00cb4c40()
{
    f3m_00cb4c40::DAT_00f60d70.Setting::Setting();
    atexit(f3m_00cb4c40::FUN_00d8e270);
}

// @f3 0x00cb6130 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6130 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6104c;
void __cdecl FUN_00d8e5e0();
}

void __cdecl FUN_00cb6130()
{
    f3m_00cb6130::DAT_00f6104c.Setting::Setting();
    atexit(f3m_00cb6130::FUN_00d8e5e0);
}

// @f3 0x00ca84c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca84c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f480;
void __cdecl FUN_00d8c130();
}

void __cdecl FUN_00ca84c0()
{
    f3m_00ca84c0::DAT_00f5f480.Setting::Setting();
    atexit(f3m_00ca84c0::FUN_00d8c130);
}

// @f3 0x00cbf130 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbf130 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6224c;
void __cdecl FUN_00d8fde0();
}

void __cdecl FUN_00cbf130()
{
    f3m_00cbf130::DAT_00f6224c.Setting::Setting();
    atexit(f3m_00cbf130::FUN_00d8fde0);
}

// @f3 0x00cb2900 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2900 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60908;
void __cdecl FUN_00d8dc90();
}

void __cdecl FUN_00cb2900()
{
    f3m_00cb2900::DAT_00f60908.Setting::Setting();
    atexit(f3m_00cb2900::FUN_00d8dc90);
}

// @f3 0x00cb54e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb54e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60e84;
void __cdecl FUN_00d8e3e0();
}

void __cdecl FUN_00cb54e0()
{
    f3m_00cb54e0::DAT_00f60e84.Setting::Setting();
    atexit(f3m_00cb54e0::FUN_00d8e3e0);
}

// @f3 0x00cb7f90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7f90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61418;
void __cdecl FUN_00d8eaf0();
}

void __cdecl FUN_00cb7f90()
{
    f3m_00cb7f90::DAT_00f61418.Setting::Setting();
    atexit(f3m_00cb7f90::FUN_00d8eaf0);
}

// @f3 0x00cba510 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cba510 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f618c8;
void __cdecl FUN_00d8f130();
}

void __cdecl FUN_00cba510()
{
    f3m_00cba510::DAT_00f618c8.Setting::Setting();
    atexit(f3m_00cba510::FUN_00d8f130);
}

// @f3 0x00cb82f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb82f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61484;
void __cdecl FUN_00d8eb80();
}

void __cdecl FUN_00cb82f0()
{
    f3m_00cb82f0::DAT_00f61484.Setting::Setting();
    atexit(f3m_00cb82f0::FUN_00d8eb80);
}

// @f3 0x00cb2a80 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2a80 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60938;
void __cdecl FUN_00d8dcd0();
}

void __cdecl FUN_00cb2a80()
{
    f3m_00cb2a80::DAT_00f60938.Setting::Setting();
    atexit(f3m_00cb2a80::FUN_00d8dcd0);
}

// @f3 0x00cb2060 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2060 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f607f4;
void __cdecl FUN_00d8db20();
}

void __cdecl FUN_00cb2060()
{
    f3m_00cb2060::DAT_00f607f4.Setting::Setting();
    atexit(f3m_00cb2060::FUN_00d8db20);
}

// @f3 0x00ca3270 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3270 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e94c;
void __cdecl FUN_00d8b3c0();
}

void __cdecl FUN_00ca3270()
{
    f3m_00ca3270::DAT_00f5e94c.Setting::Setting();
    atexit(f3m_00ca3270::FUN_00d8b3c0);
}

// @f3 0x00ca6150 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6150 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ef28;
void __cdecl FUN_00d8bb90();
}

void __cdecl FUN_00ca6150()
{
    f3m_00ca6150::DAT_00f5ef28.Setting::Setting();
    atexit(f3m_00ca6150::FUN_00d8bb90);
}

// @f3 0x00caa8c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa8c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f900;
void __cdecl FUN_00d8c730();
}

void __cdecl FUN_00caa8c0()
{
    f3m_00caa8c0::DAT_00f5f900.Setting::Setting();
    atexit(f3m_00caa8c0::FUN_00d8c730);
}

// @f3 0x00ca3510 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3510 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e9a0;
void __cdecl FUN_00d8b430();
}

void __cdecl FUN_00ca3510()
{
    f3m_00ca3510::DAT_00f5e9a0.Setting::Setting();
    atexit(f3m_00ca3510::FUN_00d8b430);
}

// @f3 0x00cb36e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb36e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60ac4;
void __cdecl FUN_00d8dee0();
}

void __cdecl FUN_00cb36e0()
{
    f3m_00cb36e0::DAT_00f60ac4.Setting::Setting();
    atexit(f3m_00cb36e0::FUN_00d8dee0);
}

// @f3 0x00ca89a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca89a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f51c;
void __cdecl FUN_00d8c200();
}

void __cdecl FUN_00ca89a0()
{
    f3m_00ca89a0::DAT_00f5f51c.Setting::Setting();
    atexit(f3m_00ca89a0::FUN_00d8c200);
}

// @f3 0x00ca9180 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9180 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f618;
void __cdecl FUN_00d8c350();
}

void __cdecl FUN_00ca9180()
{
    f3m_00ca9180::DAT_00f5f618.Setting::Setting();
    atexit(f3m_00ca9180::FUN_00d8c350);
}

// @f3 0x00caa1a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa1a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f81c;
void __cdecl FUN_00d8c600();
}

void __cdecl FUN_00caa1a0()
{
    f3m_00caa1a0::DAT_00f5f81c.Setting::Setting();
    atexit(f3m_00caa1a0::FUN_00d8c600);
}

// @f3 0x00cb9010 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9010 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61628;
void __cdecl FUN_00d8edb0();
}

void __cdecl FUN_00cb9010()
{
    f3m_00cb9010::DAT_00f61628.Setting::Setting();
    atexit(f3m_00cb9010::FUN_00d8edb0);
}

// @f3 0x00cb4b20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4b20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60d4c;
void __cdecl FUN_00d8e240();
}

void __cdecl FUN_00cb4b20()
{
    f3m_00cb4b20::DAT_00f60d4c.Setting::Setting();
    atexit(f3m_00cb4b20::FUN_00d8e240);
}

// @f3 0x00cbe230 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbe230 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6206c;
void __cdecl FUN_00d8fb60();
}

void __cdecl FUN_00cbe230()
{
    f3m_00cbe230::DAT_00f6206c.Setting::Setting();
    atexit(f3m_00cbe230::FUN_00d8fb60);
}

// @f3 0x00cae940 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cae940 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60110;
void __cdecl FUN_00d8d1f0();
}

void __cdecl FUN_00cae940()
{
    f3m_00cae940::DAT_00f60110.Setting::Setting();
    atexit(f3m_00cae940::FUN_00d8d1f0);
}

// @f3 0x00cab520 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cab520 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fa8c;
void __cdecl FUN_00d8c940();
}

void __cdecl FUN_00cab520()
{
    f3m_00cab520::DAT_00f5fa8c.Setting::Setting();
    atexit(f3m_00cab520::FUN_00d8c940);
}

// @f3 0x00cb46a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb46a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60cbc;
void __cdecl FUN_00d8e180();
}

void __cdecl FUN_00cb46a0()
{
    f3m_00cb46a0::DAT_00f60cbc.Setting::Setting();
    atexit(f3m_00cb46a0::FUN_00d8e180);
}

// @f3 0x00ca2490 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2490 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e790;
void __cdecl FUN_00d8b170();
}

void __cdecl FUN_00ca2490()
{
    f3m_00ca2490::DAT_00f5e790.Setting::Setting();
    atexit(f3m_00ca2490::FUN_00d8b170);
}

// @f3 0x00cb76f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb76f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61304;
void __cdecl FUN_00d8e980();
}

void __cdecl FUN_00cb76f0()
{
    f3m_00cb76f0::DAT_00f61304.Setting::Setting();
    atexit(f3m_00cb76f0::FUN_00d8e980);
}

// @f3 0x00cb4f40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4f40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60dd0;
void __cdecl FUN_00d8e2f0();
}

void __cdecl FUN_00cb4f40()
{
    f3m_00cb4f40::DAT_00f60dd0.Setting::Setting();
    atexit(f3m_00cb4f40::FUN_00d8e2f0);
}

// @f3 0x00ca3a50 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3a50 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ea48;
void __cdecl FUN_00d8b510();
}

void __cdecl FUN_00ca3a50()
{
    f3m_00ca3a50::DAT_00f5ea48.Setting::Setting();
    atexit(f3m_00ca3a50::FUN_00d8b510);
}

// @f3 0x00caf0c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf0c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60200;
void __cdecl FUN_00d8d330();
}

void __cdecl FUN_00caf0c0()
{
    f3m_00caf0c0::DAT_00f60200.Setting::Setting();
    atexit(f3m_00caf0c0::FUN_00d8d330);
}

// @f3 0x00cab3a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cab3a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fa5c;
void __cdecl FUN_00d8c900();
}

void __cdecl FUN_00cab3a0()
{
    f3m_00cab3a0::DAT_00f5fa5c.Setting::Setting();
    atexit(f3m_00cab3a0::FUN_00d8c900);
}

// @f3 0x00cad020 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cad020 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fdec;
void __cdecl FUN_00d8cdc0();
}

void __cdecl FUN_00cad020()
{
    f3m_00cad020::DAT_00f5fdec.Setting::Setting();
    atexit(f3m_00cad020::FUN_00d8cdc0);
}

// @f3 0x00cb8b90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8b90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61598;
void __cdecl FUN_00d8ecf0();
}

void __cdecl FUN_00cb8b90()
{
    f3m_00cb8b90::DAT_00f61598.Setting::Setting();
    atexit(f3m_00cb8b90::FUN_00d8ecf0);
}

// @f3 0x00ca9ba0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9ba0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f75c;
void __cdecl FUN_00d8c500();
}

void __cdecl FUN_00ca9ba0()
{
    f3m_00ca9ba0::DAT_00f5f75c.Setting::Setting();
    atexit(f3m_00ca9ba0::FUN_00d8c500);
}

// @f3 0x00ca5fd0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca5fd0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5eef8;
void __cdecl FUN_00d8bb50();
}

void __cdecl FUN_00ca5fd0()
{
    f3m_00ca5fd0::DAT_00f5eef8.Setting::Setting();
    atexit(f3m_00ca5fd0::FUN_00d8bb50);
}

// @f3 0x00cb61f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb61f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61064;
void __cdecl FUN_00d8e600();
}

void __cdecl FUN_00cb61f0()
{
    f3m_00cb61f0::DAT_00f61064.Setting::Setting();
    atexit(f3m_00cb61f0::FUN_00d8e600);
}

// @f3 0x00ca6c90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6c90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f0d0;
void __cdecl FUN_00d8bd70();
}

void __cdecl FUN_00ca6c90()
{
    f3m_00ca6c90::DAT_00f5f0d0.Setting::Setting();
    atexit(f3m_00ca6c90::FUN_00d8bd70);
}

// @f3 0x00ca3e10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3e10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5eac0;
void __cdecl FUN_00d8b5b0();
}

void __cdecl FUN_00ca3e10()
{
    f3m_00ca3e10::DAT_00f5eac0.Setting::Setting();
    atexit(f3m_00ca3e10::FUN_00d8b5b0);
}

// @f3 0x00ca7110 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7110 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f160;
void __cdecl FUN_00d8be30();
}

void __cdecl FUN_00ca7110()
{
    f3m_00ca7110::DAT_00f5f160.Setting::Setting();
    atexit(f3m_00ca7110::FUN_00d8be30);
}

// @f3 0x00cae9a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cae9a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6011c;
void __cdecl FUN_00d8d200();
}

void __cdecl FUN_00cae9a0()
{
    f3m_00cae9a0::DAT_00f6011c.Setting::Setting();
    atexit(f3m_00cae9a0::FUN_00d8d200);
}

// @f3 0x00cbc730 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbc730 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61d0c;
void __cdecl FUN_00d8f6e0();
}

void __cdecl FUN_00cbc730()
{
    f3m_00cbc730::DAT_00f61d0c.Setting::Setting();
    atexit(f3m_00cbc730::FUN_00d8f6e0);
}

// @f3 0x00caf660 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf660 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f602b4;
void __cdecl FUN_00d8d420();
}

void __cdecl FUN_00caf660()
{
    f3m_00caf660::DAT_00f602b4.Setting::Setting();
    atexit(f3m_00caf660::FUN_00d8d420);
}

// @f3 0x00cac3c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cac3c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fc60;
void __cdecl FUN_00d8cbb0();
}

void __cdecl FUN_00cac3c0()
{
    f3m_00cac3c0::DAT_00f5fc60.Setting::Setting();
    atexit(f3m_00cac3c0::FUN_00d8cbb0);
}

// @f3 0x00ca6630 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6630 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f004;
void __cdecl FUN_00d8bc60();
}

void __cdecl FUN_00ca6630()
{
    f3m_00ca6630::DAT_00f5f004.Setting::Setting();
    atexit(f3m_00ca6630::FUN_00d8bc60);
}

// @f3 0x00cab9a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cab9a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fb1c;
void __cdecl FUN_00d8ca00();
}

void __cdecl FUN_00cab9a0()
{
    f3m_00cab9a0::DAT_00f5fb1c.Setting::Setting();
    atexit(f3m_00cab9a0::FUN_00d8ca00);
}

// @f3 0x00cb3920 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3920 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60b0c;
void __cdecl FUN_00d8df40();
}

void __cdecl FUN_00cb3920()
{
    f3m_00cb3920::DAT_00f60b0c.Setting::Setting();
    atexit(f3m_00cb3920::FUN_00d8df40);
}

// @f3 0x00cac840 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cac840 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fcf0;
void __cdecl FUN_00d8cc70();
}

void __cdecl FUN_00cac840()
{
    f3m_00cac840::DAT_00f5fcf0.Setting::Setting();
    atexit(f3m_00cac840::FUN_00d8cc70);
}

// @f3 0x00cbf2b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbf2b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6227c;
void __cdecl FUN_00d8fe20();
}

void __cdecl FUN_00cbf2b0()
{
    f3m_00cbf2b0::DAT_00f6227c.Setting::Setting();
    atexit(f3m_00cbf2b0::FUN_00d8fe20);
}

// @f3 0x00ca6210 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6210 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ef40;
void __cdecl FUN_00d8bbb0();
}

void __cdecl FUN_00ca6210()
{
    f3m_00ca6210::DAT_00f5ef40.Setting::Setting();
    atexit(f3m_00ca6210::FUN_00d8bbb0);
}

// @f3 0x00cb8e90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8e90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f615f8;
void __cdecl FUN_00d8ed70();
}

void __cdecl FUN_00cb8e90()
{
    f3m_00cb8e90::DAT_00f615f8.Setting::Setting();
    atexit(f3m_00cb8e90::FUN_00d8ed70);
}

// @f3 0x00caa560 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa560 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f894;
void __cdecl FUN_00d8c6a0();
}

void __cdecl FUN_00caa560()
{
    f3m_00caa560::DAT_00f5f894.Setting::Setting();
    atexit(f3m_00caa560::FUN_00d8c6a0);
}

// @f3 0x00ca9a20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9a20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f72c;
void __cdecl FUN_00d8c4c0();
}

void __cdecl FUN_00ca9a20()
{
    f3m_00ca9a20::DAT_00f5f72c.Setting::Setting();
    atexit(f3m_00ca9a20::FUN_00d8c4c0);
}

// @f3 0x00cb48e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb48e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60d04;
void __cdecl FUN_00d8e1e0();
}

void __cdecl FUN_00cb48e0()
{
    f3m_00cb48e0::DAT_00f60d04.Setting::Setting();
    atexit(f3m_00cb48e0::FUN_00d8e1e0);
}

// @f3 0x00cbee30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbee30 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f621ec;
void __cdecl FUN_00d8fd60();
}

void __cdecl FUN_00cbee30()
{
    f3m_00cbee30::DAT_00f621ec.Setting::Setting();
    atexit(f3m_00cbee30::FUN_00d8fd60);
}

// @f3 0x00caf3c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf3c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60260;
void __cdecl FUN_00d8d3b0();
}

void __cdecl FUN_00caf3c0()
{
    f3m_00caf3c0::DAT_00f60260.Setting::Setting();
    atexit(f3m_00caf3c0::FUN_00d8d3b0);
}

// @f3 0x00cb5420 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb5420 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60e6c;
void __cdecl FUN_00d8e3c0();
}

void __cdecl FUN_00cb5420()
{
    f3m_00cb5420::DAT_00f60e6c.Setting::Setting();
    atexit(f3m_00cb5420::FUN_00d8e3c0);
}

// @f3 0x00caa620 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa620 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f8ac;
void __cdecl FUN_00d8c6c0();
}

void __cdecl FUN_00caa620()
{
    f3m_00caa620::DAT_00f5f8ac.Setting::Setting();
    atexit(f3m_00caa620::FUN_00d8c6c0);
}

// @f3 0x00cae6a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cae6a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f600bc;
void __cdecl FUN_00d8d180();
}

void __cdecl FUN_00cae6a0()
{
    f3m_00cae6a0::DAT_00f600bc.Setting::Setting();
    atexit(f3m_00cae6a0::FUN_00d8d180);
}

// @f3 0x00cbb5f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbb5f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61ae4;
void __cdecl FUN_00d8f400();
}

void __cdecl FUN_00cbb5f0()
{
    f3m_00cbb5f0::DAT_00f61ae4.Setting::Setting();
    atexit(f3m_00cbb5f0::FUN_00d8f400);
}

// @f3 0x00cbadb0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbadb0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f619dc;
void __cdecl FUN_00d8f2a0();
}

void __cdecl FUN_00cbadb0()
{
    f3m_00cbadb0::DAT_00f619dc.Setting::Setting();
    atexit(f3m_00cbadb0::FUN_00d8f2a0);
}

// @f3 0x00ca8160 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8160 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f414;
void __cdecl FUN_00d8c0a0();
}

void __cdecl FUN_00ca8160()
{
    f3m_00ca8160::DAT_00f5f414.Setting::Setting();
    atexit(f3m_00ca8160::FUN_00d8c0a0);
}

// @f3 0x00ca3d50 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3d50 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5eaa8;
void __cdecl FUN_00d8b590();
}

void __cdecl FUN_00ca3d50()
{
    f3m_00ca3d50::DAT_00f5eaa8.Setting::Setting();
    atexit(f3m_00ca3d50::FUN_00d8b590);
}

// @f3 0x00ca20d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca20d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e718;
void __cdecl FUN_00d8b0d0();
}

void __cdecl FUN_00ca20d0()
{
    f3m_00ca20d0::DAT_00f5e718.Setting::Setting();
    atexit(f3m_00ca20d0::FUN_00d8b0d0);
}

// @f3 0x00cad920 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cad920 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ff0c;
void __cdecl FUN_00d8cf40();
}

void __cdecl FUN_00cad920()
{
    f3m_00cad920::DAT_00f5ff0c.Setting::Setting();
    atexit(f3m_00cad920::FUN_00d8cf40);
}

// @f3 0x00ca2df0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2df0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e8bc;
void __cdecl FUN_00d8b300();
}

void __cdecl FUN_00ca2df0()
{
    f3m_00ca2df0::DAT_00f5e8bc.Setting::Setting();
    atexit(f3m_00ca2df0::FUN_00d8b300);
}

// @f3 0x00cbe050 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbe050 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62030;
void __cdecl FUN_00d8fb10();
}

void __cdecl FUN_00cbe050()
{
    f3m_00cbe050::DAT_00f62030.Setting::Setting();
    atexit(f3m_00cbe050::FUN_00d8fb10);
}

// @f3 0x00cadb00 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cadb00 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ff48;
void __cdecl FUN_00d8cf90();
}

void __cdecl FUN_00cadb00()
{
    f3m_00cadb00::DAT_00f5ff48.Setting::Setting();
    atexit(f3m_00cadb00::FUN_00d8cf90);
}

// @f3 0x00caed60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caed60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60194;
void __cdecl FUN_00d8d2a0();
}

void __cdecl FUN_00caed60()
{
    f3m_00caed60::DAT_00f60194.Setting::Setting();
    atexit(f3m_00caed60::FUN_00d8d2a0);
}

// @f3 0x00cb2ea0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2ea0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f609bc;
void __cdecl FUN_00d8dd80();
}

void __cdecl FUN_00cb2ea0()
{
    f3m_00cb2ea0::DAT_00f609bc.Setting::Setting();
    atexit(f3m_00cb2ea0::FUN_00d8dd80);
}

// @f3 0x00cb1340 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1340 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60650;
void __cdecl FUN_00d8d8f0();
}

void __cdecl FUN_00cb1340()
{
    f3m_00cb1340::DAT_00f60650.Setting::Setting();
    atexit(f3m_00cb1340::FUN_00d8d8f0);
}

// @f3 0x00cbe7d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbe7d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62120;
void __cdecl FUN_00d8fc50();
}

void __cdecl FUN_00cbe7d0()
{
    f3m_00cbe7d0::DAT_00f62120.Setting::Setting();
    atexit(f3m_00cbe7d0::FUN_00d8fc50);
}

// @f3 0x00ca4830 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca4830 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ec04;
void __cdecl FUN_00d8b760();
}

void __cdecl FUN_00ca4830()
{
    f3m_00ca4830::DAT_00f5ec04.Setting::Setting();
    atexit(f3m_00ca4830::FUN_00d8b760);
}

// @f3 0x00cb52a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb52a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60e3c;
void __cdecl FUN_00d8e380();
}

void __cdecl FUN_00cb52a0()
{
    f3m_00cb52a0::DAT_00f60e3c.Setting::Setting();
    atexit(f3m_00cb52a0::FUN_00d8e380);
}

// @f3 0x00ca1cb0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca1cb0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e694;
void __cdecl FUN_00d8b020();
}

void __cdecl FUN_00ca1cb0()
{
    f3m_00ca1cb0::DAT_00f5e694.Setting::Setting();
    atexit(f3m_00ca1cb0::FUN_00d8b020);
}

// @f3 0x00cba4b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cba4b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f618bc;
void __cdecl FUN_00d8f120();
}

void __cdecl FUN_00cba4b0()
{
    f3m_00cba4b0::DAT_00f618bc.Setting::Setting();
    atexit(f3m_00cba4b0::FUN_00d8f120);
}

// @f3 0x00cb7b10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7b10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61388;
void __cdecl FUN_00d8ea30();
}

void __cdecl FUN_00cb7b10()
{
    f3m_00cb7b10::DAT_00f61388.Setting::Setting();
    atexit(f3m_00cb7b10::FUN_00d8ea30);
}

// @f3 0x00cb4be0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4be0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60d64;
void __cdecl FUN_00d8e260();
}

void __cdecl FUN_00cb4be0()
{
    f3m_00cb4be0::DAT_00f60d64.Setting::Setting();
    atexit(f3m_00cb4be0::FUN_00d8e260);
}

// @f3 0x00ca9d20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9d20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f78c;
void __cdecl FUN_00d8c540();
}

void __cdecl FUN_00ca9d20()
{
    f3m_00ca9d20::DAT_00f5f78c.Setting::Setting();
    atexit(f3m_00ca9d20::FUN_00d8c540);
}

// @f3 0x00caf8a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf8a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f602fc;
void __cdecl FUN_00d8d480();
}

void __cdecl FUN_00caf8a0()
{
    f3m_00caf8a0::DAT_00f602fc.Setting::Setting();
    atexit(f3m_00caf8a0::FUN_00d8d480);
}

// @f3 0x00cb85f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb85f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f614e4;
void __cdecl FUN_00d8ec00();
}

void __cdecl FUN_00cb85f0()
{
    f3m_00cb85f0::DAT_00f614e4.Setting::Setting();
    atexit(f3m_00cb85f0::FUN_00d8ec00);
}

// @f3 0x00cac6c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cac6c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fcc0;
void __cdecl FUN_00d8cc30();
}

void __cdecl FUN_00cac6c0()
{
    f3m_00cac6c0::DAT_00f5fcc0.Setting::Setting();
    atexit(f3m_00cac6c0::FUN_00d8cc30);
}

// @f3 0x00ca3cf0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3cf0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ea9c;
void __cdecl FUN_00d8b580();
}

void __cdecl FUN_00ca3cf0()
{
    f3m_00ca3cf0::DAT_00f5ea9c.Setting::Setting();
    atexit(f3m_00ca3cf0::FUN_00d8b580);
}

// @f3 0x00cb9790 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9790 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61718;
void __cdecl FUN_00d8eef0();
}

void __cdecl FUN_00cb9790()
{
    f3m_00cb9790::DAT_00f61718.Setting::Setting();
    atexit(f3m_00cb9790::FUN_00d8eef0);
}

// @f3 0x00cb9730 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9730 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6170c;
void __cdecl FUN_00d8eee0();
}

void __cdecl FUN_00cb9730()
{
    f3m_00cb9730::DAT_00f6170c.Setting::Setting();
    atexit(f3m_00cb9730::FUN_00d8eee0);
}

// @f3 0x00cbee90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbee90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f621f8;
void __cdecl FUN_00d8fd70();
}

void __cdecl FUN_00cbee90()
{
    f3m_00cbee90::DAT_00f621f8.Setting::Setting();
    atexit(f3m_00cbee90::FUN_00d8fd70);
}

// @f3 0x00ca9540 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9540 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f690;
void __cdecl FUN_00d8c3f0();
}

void __cdecl FUN_00ca9540()
{
    f3m_00ca9540::DAT_00f5f690.Setting::Setting();
    atexit(f3m_00ca9540::FUN_00d8c3f0);
}

// @f3 0x00ca96c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca96c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f6c0;
void __cdecl FUN_00d8c430();
}

void __cdecl FUN_00ca96c0()
{
    f3m_00ca96c0::DAT_00f5f6c0.Setting::Setting();
    atexit(f3m_00ca96c0::FUN_00d8c430);
}

// @f3 0x00cb6df0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6df0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f611e4;
void __cdecl FUN_00d8e800();
}

void __cdecl FUN_00cb6df0()
{
    f3m_00cb6df0::DAT_00f611e4.Setting::Setting();
    atexit(f3m_00cb6df0::FUN_00d8e800);
}

// @f3 0x00caaf20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caaf20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f9cc;
void __cdecl FUN_00d8c840();
}

void __cdecl FUN_00caaf20()
{
    f3m_00caaf20::DAT_00f5f9cc.Setting::Setting();
    atexit(f3m_00caaf20::FUN_00d8c840);
}

// @f3 0x00cb6190 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6190 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61058;
void __cdecl FUN_00d8e5f0();
}

void __cdecl FUN_00cb6190()
{
    f3m_00cb6190::DAT_00f61058.Setting::Setting();
    atexit(f3m_00cb6190::FUN_00d8e5f0);
}

// @f3 0x00caeca0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caeca0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6017c;
void __cdecl FUN_00d8d280();
}

void __cdecl FUN_00caeca0()
{
    f3m_00caeca0::DAT_00f6017c.Setting::Setting();
    atexit(f3m_00caeca0::FUN_00d8d280);
}

// @f3 0x00cbefb0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbefb0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6221c;
void __cdecl FUN_00d8fda0();
}

void __cdecl FUN_00cbefb0()
{
    f3m_00cbefb0::DAT_00f6221c.Setting::Setting();
    atexit(f3m_00cbefb0::FUN_00d8fda0);
}

// @f3 0x00ca8340 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8340 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f450;
void __cdecl FUN_00d8c0f0();
}

void __cdecl FUN_00ca8340()
{
    f3m_00ca8340::DAT_00f5f450.Setting::Setting();
    atexit(f3m_00ca8340::FUN_00d8c0f0);
}

// @f3 0x00cb7b70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7b70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61394;
void __cdecl FUN_00d8ea40();
}

void __cdecl FUN_00cb7b70()
{
    f3m_00cb7b70::DAT_00f61394.Setting::Setting();
    atexit(f3m_00cb7b70::FUN_00d8ea40);
}

// @f3 0x00cb41c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb41c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60c20;
void __cdecl FUN_00d8e0b0();
}

void __cdecl FUN_00cb41c0()
{
    f3m_00cb41c0::DAT_00f60c20.Setting::Setting();
    atexit(f3m_00cb41c0::FUN_00d8e0b0);
}

// @f3 0x00cb4a00 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4a00 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60d28;
void __cdecl FUN_00d8e210();
}

void __cdecl FUN_00cb4a00()
{
    f3m_00cb4a00::DAT_00f60d28.Setting::Setting();
    atexit(f3m_00cb4a00::FUN_00d8e210);
}

// @f3 0x00ca6030 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6030 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ef04;
void __cdecl FUN_00d8bb60();
}

void __cdecl FUN_00ca6030()
{
    f3m_00ca6030::DAT_00f5ef04.Setting::Setting();
    atexit(f3m_00ca6030::FUN_00d8bb60);
}

// @f3 0x00cbd690 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd690 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61ef8;
void __cdecl FUN_00d8f970();
}

void __cdecl FUN_00cbd690()
{
    f3m_00cbd690::DAT_00f61ef8.Setting::Setting();
    atexit(f3m_00cbd690::FUN_00d8f970);
}

// @f3 0x00cbddb0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbddb0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61fdc;
void __cdecl FUN_00d8faa0();
}

void __cdecl FUN_00cbddb0()
{
    f3m_00cbddb0::DAT_00f61fdc.Setting::Setting();
    atexit(f3m_00cbddb0::FUN_00d8faa0);
}

// @f3 0x00ca1ef0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca1ef0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e6dc;
void __cdecl FUN_00d8b080();
}

void __cdecl FUN_00ca1ef0()
{
    f3m_00ca1ef0::DAT_00f5e6dc.Setting::Setting();
    atexit(f3m_00ca1ef0::FUN_00d8b080);
}

// @f3 0x00cba5d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cba5d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f618e0;
void __cdecl FUN_00d8f150();
}

void __cdecl FUN_00cba5d0()
{
    f3m_00cba5d0::DAT_00f618e0.Setting::Setting();
    atexit(f3m_00cba5d0::FUN_00d8f150);
}

// @f3 0x00cb4ac0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4ac0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60d40;
void __cdecl FUN_00d8e230();
}

void __cdecl FUN_00cb4ac0()
{
    f3m_00cb4ac0::DAT_00f60d40.Setting::Setting();
    atexit(f3m_00cb4ac0::FUN_00d8e230);
}

// @f3 0x00cabb80 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cabb80 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fb58;
void __cdecl FUN_00d8ca50();
}

void __cdecl FUN_00cabb80()
{
    f3m_00cabb80::DAT_00f5fb58.Setting::Setting();
    atexit(f3m_00cabb80::FUN_00d8ca50);
}

// @f3 0x00cbac90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbac90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f619b8;
void __cdecl FUN_00d8f270();
}

void __cdecl FUN_00cbac90()
{
    f3m_00cbac90::DAT_00f619b8.Setting::Setting();
    atexit(f3m_00cbac90::FUN_00d8f270);
}

// @f3 0x00cae100 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cae100 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60008;
void __cdecl FUN_00d8d090();
}

void __cdecl FUN_00cae100()
{
    f3m_00cae100::DAT_00f60008.Setting::Setting();
    atexit(f3m_00cae100::FUN_00d8d090);
}

// @f3 0x00ca2070 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2070 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e70c;
void __cdecl FUN_00d8b0c0();
}

void __cdecl FUN_00ca2070()
{
    f3m_00ca2070::DAT_00f5e70c.Setting::Setting();
    atexit(f3m_00ca2070::FUN_00d8b0c0);
}

// @f3 0x00cba330 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cba330 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6188c;
void __cdecl FUN_00d8f0e0();
}

void __cdecl FUN_00cba330()
{
    f3m_00cba330::DAT_00f6188c.Setting::Setting();
    atexit(f3m_00cba330::FUN_00d8f0e0);
}

// @f3 0x00cb18e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb18e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60704;
void __cdecl FUN_00d8d9e0();
}

void __cdecl FUN_00cb18e0()
{
    f3m_00cb18e0::DAT_00f60704.Setting::Setting();
    atexit(f3m_00cb18e0::FUN_00d8d9e0);
}

// @f3 0x00cb3bc0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3bc0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60b60;
void __cdecl FUN_00d8dfb0();
}

void __cdecl FUN_00cb3bc0()
{
    f3m_00cb3bc0::DAT_00f60b60.Setting::Setting();
    atexit(f3m_00cb3bc0::FUN_00d8dfb0);
}

// @f3 0x00cbcc10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbcc10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61da8;
void __cdecl FUN_00d8f7b0();
}

void __cdecl FUN_00cbcc10()
{
    f3m_00cbcc10::DAT_00f61da8.Setting::Setting();
    atexit(f3m_00cbcc10::FUN_00d8f7b0);
}

// @f3 0x00ca7170 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7170 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f16c;
void __cdecl FUN_00d8be40();
}

void __cdecl FUN_00ca7170()
{
    f3m_00ca7170::DAT_00f5f16c.Setting::Setting();
    atexit(f3m_00ca7170::FUN_00d8be40);
}

// @f3 0x00cb6fd0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6fd0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61220;
void __cdecl FUN_00d8e850();
}

void __cdecl FUN_00cb6fd0()
{
    f3m_00cb6fd0::DAT_00f61220.Setting::Setting();
    atexit(f3m_00cb6fd0::FUN_00d8e850);
}

// @f3 0x00ca32d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca32d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e958;
void __cdecl FUN_00d8b3d0();
}

void __cdecl FUN_00ca32d0()
{
    f3m_00ca32d0::DAT_00f5e958.Setting::Setting();
    atexit(f3m_00ca32d0::FUN_00d8b3d0);
}

// @f3 0x00ca5e50 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca5e50 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5eec8;
void __cdecl FUN_00d8bb10();
}

void __cdecl FUN_00ca5e50()
{
    f3m_00ca5e50::DAT_00f5eec8.Setting::Setting();
    atexit(f3m_00ca5e50::FUN_00d8bb10);
}

// @f3 0x00cb8410 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8410 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f614a8;
void __cdecl FUN_00d8ebb0();
}

void __cdecl FUN_00cb8410()
{
    f3m_00cb8410::DAT_00f614a8.Setting::Setting();
    atexit(f3m_00cb8410::FUN_00d8ebb0);
}

// @f3 0x00cbcb50 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbcb50 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61d90;
void __cdecl FUN_00d8f790();
}

void __cdecl FUN_00cbcb50()
{
    f3m_00cbcb50::DAT_00f61d90.Setting::Setting();
    atexit(f3m_00cbcb50::FUN_00d8f790);
}

// @f3 0x00cac180 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cac180 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fc18;
void __cdecl FUN_00d8cb50();
}

void __cdecl FUN_00cac180()
{
    f3m_00cac180::DAT_00f5fc18.Setting::Setting();
    atexit(f3m_00cac180::FUN_00d8cb50);
}

// @f3 0x00caeb20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caeb20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6014c;
void __cdecl FUN_00d8d240();
}

void __cdecl FUN_00caeb20()
{
    f3m_00caeb20::DAT_00f6014c.Setting::Setting();
    atexit(f3m_00caeb20::FUN_00d8d240);
}

// @f3 0x00cb5540 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb5540 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60e90;
void __cdecl FUN_00d8e3f0();
}

void __cdecl FUN_00cb5540()
{
    f3m_00cb5540::DAT_00f60e90.Setting::Setting();
    atexit(f3m_00cb5540::FUN_00d8e3f0);
}

// @f3 0x00ca8700 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8700 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f4c8;
void __cdecl FUN_00d8c190();
}

void __cdecl FUN_00ca8700()
{
    f3m_00ca8700::DAT_00f5f4c8.Setting::Setting();
    atexit(f3m_00ca8700::FUN_00d8c190);
}

// @f3 0x00ca2f10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2f10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e8e0;
void __cdecl FUN_00d8b330();
}

void __cdecl FUN_00ca2f10()
{
    f3m_00ca2f10::DAT_00f5e8e0.Setting::Setting();
    atexit(f3m_00ca2f10::FUN_00d8b330);
}

// @f3 0x00cb30e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb30e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60a04;
void __cdecl FUN_00d8dde0();
}

void __cdecl FUN_00cb30e0()
{
    f3m_00cb30e0::DAT_00f60a04.Setting::Setting();
    atexit(f3m_00cb30e0::FUN_00d8dde0);
}

// @f3 0x00cb1f40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1f40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f607d0;
void __cdecl FUN_00d8daf0();
}

void __cdecl FUN_00cb1f40()
{
    f3m_00cb1f40::DAT_00f607d0.Setting::Setting();
    atexit(f3m_00cb1f40::FUN_00d8daf0);
}

// @f3 0x00cabd60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cabd60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fb94;
void __cdecl FUN_00d8caa0();
}

void __cdecl FUN_00cabd60()
{
    f3m_00cabd60::DAT_00f5fb94.Setting::Setting();
    atexit(f3m_00cabd60::FUN_00d8caa0);
}

// @f3 0x00cbdbd0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbdbd0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61fa0;
void __cdecl FUN_00d8fa50();
}

void __cdecl FUN_00cbdbd0()
{
    f3m_00cbdbd0::DAT_00f61fa0.Setting::Setting();
    atexit(f3m_00cbdbd0::FUN_00d8fa50);
}

// @f3 0x00caea00 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caea00 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60128;
void __cdecl FUN_00d8d210();
}

void __cdecl FUN_00caea00()
{
    f3m_00caea00::DAT_00f60128.Setting::Setting();
    atexit(f3m_00caea00::FUN_00d8d210);
}

// @f3 0x00cb13a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb13a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6065c;
void __cdecl FUN_00d8d900();
}

void __cdecl FUN_00cb13a0()
{
    f3m_00cb13a0::DAT_00f6065c.Setting::Setting();
    atexit(f3m_00cb13a0::FUN_00d8d900);
}

// @f3 0x00cbbe30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbbe30 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61bec;
void __cdecl FUN_00d8f560();
}

void __cdecl FUN_00cbbe30()
{
    f3m_00cbbe30::DAT_00f61bec.Setting::Setting();
    atexit(f3m_00cbbe30::FUN_00d8f560);
}

// @f3 0x00ca2a30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2a30 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e844;
void __cdecl FUN_00d8b260();
}

void __cdecl FUN_00ca2a30()
{
    f3m_00ca2a30::DAT_00f5e844.Setting::Setting();
    atexit(f3m_00ca2a30::FUN_00d8b260);
}

// @f3 0x00ca7e00 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7e00 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f3a8;
void __cdecl FUN_00d8c010();
}

void __cdecl FUN_00ca7e00()
{
    f3m_00ca7e00::DAT_00f5f3a8.Setting::Setting();
    atexit(f3m_00ca7e00::FUN_00d8c010);
}

// @f3 0x00ca69f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca69f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f07c;
void __cdecl FUN_00d8bd00();
}

void __cdecl FUN_00ca69f0()
{
    f3m_00ca69f0::DAT_00f5f07c.Setting::Setting();
    atexit(f3m_00ca69f0::FUN_00d8bd00);
}

// @f3 0x00cbfc10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbfc10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f623a8;
void __cdecl FUN_00d8ffb0();
}

void __cdecl FUN_00cbfc10()
{
    f3m_00cbfc10::DAT_00f623a8.Setting::Setting();
    atexit(f3m_00cbfc10::FUN_00d8ffb0);
}

// @f3 0x00ca36f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca36f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e9dc;
void __cdecl FUN_00d8b480();
}

void __cdecl FUN_00ca36f0()
{
    f3m_00ca36f0::DAT_00f5e9dc.Setting::Setting();
    atexit(f3m_00ca36f0::FUN_00d8b480);
}

// @f3 0x00cb0ce0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0ce0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60584;
void __cdecl FUN_00d8d7e0();
}

void __cdecl FUN_00cb0ce0()
{
    f3m_00cb0ce0::DAT_00f60584.Setting::Setting();
    atexit(f3m_00cb0ce0::FUN_00d8d7e0);
}

// @f3 0x00cb21e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb21e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60824;
void __cdecl FUN_00d8db60();
}

void __cdecl FUN_00cb21e0()
{
    f3m_00cb21e0::DAT_00f60824.Setting::Setting();
    atexit(f3m_00cb21e0::FUN_00d8db60);
}

// @f3 0x00ca5550 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca5550 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5eda8;
void __cdecl FUN_00d8b990();
}

void __cdecl FUN_00ca5550()
{
    f3m_00ca5550::DAT_00f5eda8.Setting::Setting();
    atexit(f3m_00ca5550::FUN_00d8b990);
}

// @f3 0x00ca4410 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca4410 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5eb80;
void __cdecl FUN_00d8b6b0();
}

void __cdecl FUN_00ca4410()
{
    f3m_00ca4410::DAT_00f5eb80.Setting::Setting();
    atexit(f3m_00ca4410::FUN_00d8b6b0);
}

// @f3 0x00caad40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caad40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f990;
void __cdecl FUN_00d8c7f0();
}

void __cdecl FUN_00caad40()
{
    f3m_00caad40::DAT_00f5f990.Setting::Setting();
    atexit(f3m_00caad40::FUN_00d8c7f0);
}

// @f3 0x00cb7ed0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7ed0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61400;
void __cdecl FUN_00d8ead0();
}

void __cdecl FUN_00cb7ed0()
{
    f3m_00cb7ed0::DAT_00f61400.Setting::Setting();
    atexit(f3m_00cb7ed0::FUN_00d8ead0);
}

// @f3 0x00cb65b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb65b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f610dc;
void __cdecl FUN_00d8e6a0();
}

void __cdecl FUN_00cb65b0()
{
    f3m_00cb65b0::DAT_00f610dc.Setting::Setting();
    atexit(f3m_00cb65b0::FUN_00d8e6a0);
}

// @f3 0x00cbdb10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbdb10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61f88;
void __cdecl FUN_00d8fa30();
}

void __cdecl FUN_00cbdb10()
{
    f3m_00cbdb10::DAT_00f61f88.Setting::Setting();
    atexit(f3m_00cbdb10::FUN_00d8fa30);
}

// @f3 0x00ca7a40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7a40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f330;
void __cdecl FUN_00d8bf70();
}

void __cdecl FUN_00ca7a40()
{
    f3m_00ca7a40::DAT_00f5f330.Setting::Setting();
    atexit(f3m_00ca7a40::FUN_00d8bf70);
}

// @f3 0x00cbd6f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd6f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61f04;
void __cdecl FUN_00d8f980();
}

void __cdecl FUN_00cbd6f0()
{
    f3m_00cbd6f0::DAT_00f61f04.Setting::Setting();
    atexit(f3m_00cbd6f0::FUN_00d8f980);
}

// @f3 0x00cb7390 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7390 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61298;
void __cdecl FUN_00d8e8f0();
}

void __cdecl FUN_00cb7390()
{
    f3m_00cb7390::DAT_00f61298.Setting::Setting();
    atexit(f3m_00cb7390::FUN_00d8e8f0);
}

// @f3 0x00cb1d00 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1d00 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60788;
void __cdecl FUN_00d8da90();
}

void __cdecl FUN_00cb1d00()
{
    f3m_00cb1d00::DAT_00f60788.Setting::Setting();
    atexit(f3m_00cb1d00::FUN_00d8da90);
}

// @f3 0x00cac720 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cac720 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fccc;
void __cdecl FUN_00d8cc40();
}

void __cdecl FUN_00cac720()
{
    f3m_00cac720::DAT_00f5fccc.Setting::Setting();
    atexit(f3m_00cac720::FUN_00d8cc40);
}

// @f3 0x00ca23d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca23d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e778;
void __cdecl FUN_00d8b150();
}

void __cdecl FUN_00ca23d0()
{
    f3m_00ca23d0::DAT_00f5e778.Setting::Setting();
    atexit(f3m_00ca23d0::FUN_00d8b150);
}

// @f3 0x00cb7db0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb7db0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f613dc;
void __cdecl FUN_00d8eaa0();
}

void __cdecl FUN_00cb7db0()
{
    using namespace f3m_00cb7db0;
    DAT_00f613dc.Setting::Setting();
    atexit(FUN_00d8eaa0);
}

// @f3 0x00cb5840 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb5840 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60ef0;
void __cdecl FUN_00d8e470();
}

void __cdecl FUN_00cb5840()
{
    using namespace f3m_00cb5840;
    DAT_00f60ef0.Setting::Setting();
    atexit(FUN_00d8e470);
}

// @f3 0x00cbe530 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbe530 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f620cc;
void __cdecl FUN_00d8fbe0();
}

void __cdecl FUN_00cbe530()
{
    f3m_00cbe530::DAT_00f620cc.Setting::Setting();
    atexit(f3m_00cbe530::FUN_00d8fbe0);
}

// @f3 0x00cbbb90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbbb90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61b98;
void __cdecl FUN_00d8f4f0();
}

void __cdecl FUN_00cbbb90()
{
    f3m_00cbbb90::DAT_00f61b98.Setting::Setting();
    atexit(f3m_00cbbb90::FUN_00d8f4f0);
}

// @f3 0x00cbc310 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbc310 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61c88;
void __cdecl FUN_00d8f630();
}

void __cdecl FUN_00cbc310()
{
    f3m_00cbc310::DAT_00f61c88.Setting::Setting();
    atexit(f3m_00cbc310::FUN_00d8f630);
}

// @f3 0x00cb1040 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1040 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f605f0;
void __cdecl FUN_00d8d870();
}

void __cdecl FUN_00cb1040()
{
    f3m_00cb1040::DAT_00f605f0.Setting::Setting();
    atexit(f3m_00cb1040::FUN_00d8d870);
}

// @f3 0x00caf420 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf420 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6026c;
void __cdecl FUN_00d8d3c0();
}

void __cdecl FUN_00caf420()
{
    f3m_00caf420::DAT_00f6026c.Setting::Setting();
    atexit(f3m_00caf420::FUN_00d8d3c0);
}

// @f3 0x00cbed10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbed10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f621c8;
void __cdecl FUN_00d8fd30();
}

void __cdecl FUN_00cbed10()
{
    f3m_00cbed10::DAT_00f621c8.Setting::Setting();
    atexit(f3m_00cbed10::FUN_00d8fd30);
}

// @f3 0x00cadd40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cadd40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ff90;
void __cdecl FUN_00d8cff0();
}

void __cdecl FUN_00cadd40()
{
    f3m_00cadd40::DAT_00f5ff90.Setting::Setting();
    atexit(f3m_00cadd40::FUN_00d8cff0);
}

// @f3 0x00cb0080 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0080 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f603f8;
void __cdecl FUN_00d8d5d0();
}

void __cdecl FUN_00cb0080()
{
    f3m_00cb0080::DAT_00f603f8.Setting::Setting();
    atexit(f3m_00cb0080::FUN_00d8d5d0);
}

// @f3 0x00cbea70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbea70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62174;
void __cdecl FUN_00d8fcc0();
}

void __cdecl FUN_00cbea70()
{
    f3m_00cbea70::DAT_00f62174.Setting::Setting();
    atexit(f3m_00cbea70::FUN_00d8fcc0);
}

// @f3 0x00cadbc0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cadbc0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ff60;
void __cdecl FUN_00d8cfb0();
}

void __cdecl FUN_00cadbc0()
{
    f3m_00cadbc0::DAT_00f5ff60.Setting::Setting();
    atexit(f3m_00cadbc0::FUN_00d8cfb0);
}

// @f3 0x00caf480 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf480 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60278;
void __cdecl FUN_00d8d3d0();
}

void __cdecl FUN_00caf480()
{
    f3m_00caf480::DAT_00f60278.Setting::Setting();
    atexit(f3m_00caf480::FUN_00d8d3d0);
}

// @f3 0x00cad980 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cad980 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ff18;
void __cdecl FUN_00d8cf50();
}

void __cdecl FUN_00cad980()
{
    using namespace f3m_00cad980;
    DAT_00f5ff18.Setting::Setting();
    atexit(FUN_00d8cf50);
}

// @f3 0x00cb1940 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1940 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60710;
void __cdecl FUN_00d8d9f0();
}

void __cdecl FUN_00cb1940()
{
    f3m_00cb1940::DAT_00f60710.Setting::Setting();
    atexit(f3m_00cb1940::FUN_00d8d9f0);
}

// @f3 0x00ca4170 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca4170 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5eb2c;
void __cdecl FUN_00d8b640();
}

void __cdecl FUN_00ca4170()
{
    f3m_00ca4170::DAT_00f5eb2c.Setting::Setting();
    atexit(f3m_00ca4170::FUN_00d8b640);
}

// @f3 0x00ca7620 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca7620 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f2ac;
void __cdecl FUN_00d8bec0();
}

void __cdecl FUN_00ca7620()
{
    using namespace f3m_00ca7620;
    DAT_00f5f2ac.Setting::Setting();
    atexit(FUN_00d8bec0);
}

// @f3 0x00cbfdf0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbfdf0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f623e4;
void __cdecl FUN_00d90000();
}

void __cdecl FUN_00cbfdf0()
{
    f3m_00cbfdf0::DAT_00f623e4.Setting::Setting();
    atexit(f3m_00cbfdf0::FUN_00d90000);
}

// @f3 0x00cacc00 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cacc00 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fd68;
void __cdecl FUN_00d8cd10();
}

void __cdecl FUN_00cacc00()
{
    f3m_00cacc00::DAT_00f5fd68.Setting::Setting();
    atexit(f3m_00cacc00::FUN_00d8cd10);
}

// @f3 0x00cbd090 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd090 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61e38;
void __cdecl FUN_00d8f870();
}

void __cdecl FUN_00cbd090()
{
    f3m_00cbd090::DAT_00f61e38.Setting::Setting();
    atexit(f3m_00cbd090::FUN_00d8f870);
}

// @f3 0x00cbbad0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbbad0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61b80;
void __cdecl FUN_00d8f4d0();
}

void __cdecl FUN_00cbbad0()
{
    f3m_00cbbad0::DAT_00f61b80.Setting::Setting();
    atexit(f3m_00cbbad0::FUN_00d8f4d0);
}

// @f3 0x00cae4c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cae4c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60080;
void __cdecl FUN_00d8d130();
}

void __cdecl FUN_00cae4c0()
{
    f3m_00cae4c0::DAT_00f60080.Setting::Setting();
    atexit(f3m_00cae4c0::FUN_00d8d130);
}

// @f3 0x00ca5850 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca5850 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ee08;
void __cdecl FUN_00d8ba10();
}

void __cdecl FUN_00ca5850()
{
    f3m_00ca5850::DAT_00f5ee08.Setting::Setting();
    atexit(f3m_00ca5850::FUN_00d8ba10);
}

// @f3 0x00cb1ee0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1ee0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f607c4;
void __cdecl FUN_00d8dae0();
}

void __cdecl FUN_00cb1ee0()
{
    f3m_00cb1ee0::DAT_00f607c4.Setting::Setting();
    atexit(f3m_00cb1ee0::FUN_00d8dae0);
}

// @f3 0x00ca8b20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8b20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f54c;
void __cdecl FUN_00d8c240();
}

void __cdecl FUN_00ca8b20()
{
    f3m_00ca8b20::DAT_00f5f54c.Setting::Setting();
    atexit(f3m_00ca8b20::FUN_00d8c240);
}

// @f3 0x00cbe350 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbe350 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62090;
void __cdecl FUN_00d8fb90();
}

void __cdecl FUN_00cbe350()
{
    f3m_00cbe350::DAT_00f62090.Setting::Setting();
    atexit(f3m_00cbe350::FUN_00d8fb90);
}

// @f3 0x00caea60 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caea60 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60134;
void __cdecl FUN_00d8d220();
}

void __cdecl FUN_00caea60()
{
    using namespace f3m_00caea60;
    DAT_00f60134.Setting::Setting();
    atexit(FUN_00d8d220);
}

// @f3 0x00ca1b30 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1b30 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e664;
void __cdecl FUN_00d8afe0();
}

void __cdecl FUN_00ca1b30()
{
    using namespace f3m_00ca1b30;
    DAT_00f5e664.Setting::Setting();
    atexit(FUN_00d8afe0);
}

// @f3 0x00cbead0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbead0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62180;
void __cdecl FUN_00d8fcd0();
}

void __cdecl FUN_00cbead0()
{
    f3m_00cbead0::DAT_00f62180.Setting::Setting();
    atexit(f3m_00cbead0::FUN_00d8fcd0);
}

// @f3 0x00ca5bb0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca5bb0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ee74;
void __cdecl FUN_00d8baa0();
}

void __cdecl FUN_00ca5bb0()
{
    f3m_00ca5bb0::DAT_00f5ee74.Setting::Setting();
    atexit(f3m_00ca5bb0::FUN_00d8baa0);
}

// @f3 0x00cbc610 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbc610 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61ce8;
void __cdecl FUN_00d8f6b0();
}

void __cdecl FUN_00cbc610()
{
    f3m_00cbc610::DAT_00f61ce8.Setting::Setting();
    atexit(f3m_00cbc610::FUN_00d8f6b0);
}

// @f3 0x00cad620 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cad620 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5feac;
void __cdecl FUN_00d8cec0();
}

void __cdecl FUN_00cad620()
{
    using namespace f3m_00cad620;
    DAT_00f5feac.Setting::Setting();
    atexit(FUN_00d8cec0);
}

// @f3 0x00cb4e80 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4e80 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60db8;
void __cdecl FUN_00d8e2d0();
}

void __cdecl FUN_00cb4e80()
{
    f3m_00cb4e80::DAT_00f60db8.Setting::Setting();
    atexit(f3m_00cb4e80::FUN_00d8e2d0);
}

// @f3 0x00ca7680 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7680 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f2b8;
void __cdecl FUN_00d8bed0();
}

void __cdecl FUN_00ca7680()
{
    f3m_00ca7680::DAT_00f5f2b8.Setting::Setting();
    atexit(f3m_00ca7680::FUN_00d8bed0);
}

// @f3 0x00cb4640 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4640 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60cb0;
void __cdecl FUN_00d8e170();
}

void __cdecl FUN_00cb4640()
{
    f3m_00cb4640::DAT_00f60cb0.Setting::Setting();
    atexit(f3m_00cb4640::FUN_00d8e170);
}

// @f3 0x00ca4a10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca4a10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ec40;
void __cdecl FUN_00d8b7b0();
}

void __cdecl FUN_00ca4a10()
{
    f3m_00ca4a10::DAT_00f5ec40.Setting::Setting();
    atexit(f3m_00ca4a10::FUN_00d8b7b0);
}

// @f3 0x00cadfe0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cadfe0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ffe4;
void __cdecl FUN_00d8d060();
}

void __cdecl FUN_00cadfe0()
{
    f3m_00cadfe0::DAT_00f5ffe4.Setting::Setting();
    atexit(f3m_00cadfe0::FUN_00d8d060);
}

// @f3 0x00ca67b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca67b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f034;
void __cdecl FUN_00d8bca0();
}

void __cdecl FUN_00ca67b0()
{
    f3m_00ca67b0::DAT_00f5f034.Setting::Setting();
    atexit(f3m_00ca67b0::FUN_00d8bca0);
}

// @f3 0x00ca37b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca37b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e9f4;
void __cdecl FUN_00d8b4a0();
}

void __cdecl FUN_00ca37b0()
{
    f3m_00ca37b0::DAT_00f5e9f4.Setting::Setting();
    atexit(f3m_00ca37b0::FUN_00d8b4a0);
}

// @f3 0x00ca3450 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3450 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e988;
void __cdecl FUN_00d8b410();
}

void __cdecl FUN_00ca3450()
{
    f3m_00ca3450::DAT_00f5e988.Setting::Setting();
    atexit(f3m_00ca3450::FUN_00d8b410);
}

// @f3 0x00cb79f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb79f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61364;
void __cdecl FUN_00d8ea00();
}

void __cdecl FUN_00cb79f0()
{
    f3m_00cb79f0::DAT_00f61364.Setting::Setting();
    atexit(f3m_00cb79f0::FUN_00d8ea00);
}

// @f3 0x00cbeb30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbeb30 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6218c;
void __cdecl FUN_00d8fce0();
}

void __cdecl FUN_00cbeb30()
{
    f3m_00cbeb30::DAT_00f6218c.Setting::Setting();
    atexit(f3m_00cbeb30::FUN_00d8fce0);
}

// @f3 0x00ca2c70 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2c70 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e88c;
void __cdecl FUN_00d8b2c0();
}

void __cdecl FUN_00ca2c70()
{
    using namespace f3m_00ca2c70;
    DAT_00f5e88c.Setting::Setting();
    atexit(FUN_00d8b2c0);
}

// @f3 0x00cbaff0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbaff0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61a24;
void __cdecl FUN_00d8f300();
}

void __cdecl FUN_00cbaff0()
{
    using namespace f3m_00cbaff0;
    DAT_00f61a24.Setting::Setting();
    atexit(FUN_00d8f300);
}

// @f3 0x00cb73f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb73f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f612a4;
void __cdecl FUN_00d8e900();
}

void __cdecl FUN_00cb73f0()
{
    f3m_00cb73f0::DAT_00f612a4.Setting::Setting();
    atexit(f3m_00cb73f0::FUN_00d8e900);
}

// @f3 0x00cb8a10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8a10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61568;
void __cdecl FUN_00d8ecb0();
}

void __cdecl FUN_00cb8a10()
{
    f3m_00cb8a10::DAT_00f61568.Setting::Setting();
    atexit(f3m_00cb8a10::FUN_00d8ecb0);
}

// @f3 0x00ca7aa0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7aa0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f33c;
void __cdecl FUN_00d8bf80();
}

void __cdecl FUN_00ca7aa0()
{
    f3m_00ca7aa0::DAT_00f5f33c.Setting::Setting();
    atexit(f3m_00ca7aa0::FUN_00d8bf80);
}

// @f3 0x00cb9190 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9190 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61658;
void __cdecl FUN_00d8edf0();
}

void __cdecl FUN_00cb9190()
{
    f3m_00cb9190::DAT_00f61658.Setting::Setting();
    atexit(f3m_00cb9190::FUN_00d8edf0);
}

// @f3 0x00ca6690 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6690 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f010;
void __cdecl FUN_00d8bc70();
}

void __cdecl FUN_00ca6690()
{
    f3m_00ca6690::DAT_00f5f010.Setting::Setting();
    atexit(f3m_00ca6690::FUN_00d8bc70);
}

// @f3 0x00ca8580 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8580 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f498;
void __cdecl FUN_00d8c150();
}

void __cdecl FUN_00ca8580()
{
    f3m_00ca8580::DAT_00f5f498.Setting::Setting();
    atexit(f3m_00ca8580::FUN_00d8c150);
}

// @f3 0x00cbe0b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbe0b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6203c;
void __cdecl FUN_00d8fb20();
}

void __cdecl FUN_00cbe0b0()
{
    f3m_00cbe0b0::DAT_00f6203c.Setting::Setting();
    atexit(f3m_00cbe0b0::FUN_00d8fb20);
}

// @f3 0x00cbecb0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbecb0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f621bc;
void __cdecl FUN_00d8fd20();
}

void __cdecl FUN_00cbecb0()
{
    f3m_00cbecb0::DAT_00f621bc.Setting::Setting();
    atexit(f3m_00cbecb0::FUN_00d8fd20);
}

// @f3 0x00cbc1f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbc1f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61c64;
void __cdecl FUN_00d8f600();
}

void __cdecl FUN_00cbc1f0()
{
    f3m_00cbc1f0::DAT_00f61c64.Setting::Setting();
    atexit(f3m_00cbc1f0::FUN_00d8f600);
}

// @f3 0x00ca61b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca61b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ef34;
void __cdecl FUN_00d8bba0();
}

void __cdecl FUN_00ca61b0()
{
    f3m_00ca61b0::DAT_00f5ef34.Setting::Setting();
    atexit(f3m_00ca61b0::FUN_00d8bba0);
}

// @f3 0x00cae460 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cae460 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60074;
void __cdecl FUN_00d8d120();
}

void __cdecl FUN_00cae460()
{
    f3m_00cae460::DAT_00f60074.Setting::Setting();
    atexit(f3m_00cae460::FUN_00d8d120);
}

// @f3 0x00ca48f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca48f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ec1c;
void __cdecl FUN_00d8b780();
}

void __cdecl FUN_00ca48f0()
{
    using namespace f3m_00ca48f0;
    DAT_00f5ec1c.Setting::Setting();
    atexit(FUN_00d8b780);
}

// @f3 0x00ca3870 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca3870 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ea0c;
void __cdecl FUN_00d8b4c0();
}

void __cdecl FUN_00ca3870()
{
    using namespace f3m_00ca3870;
    DAT_00f5ea0c.Setting::Setting();
    atexit(FUN_00d8b4c0);
}

// @f3 0x00cb4ca0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4ca0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60d7c;
void __cdecl FUN_00d8e280();
}

void __cdecl FUN_00cb4ca0()
{
    f3m_00cb4ca0::DAT_00f60d7c.Setting::Setting();
    atexit(f3m_00cb4ca0::FUN_00d8e280);
}

// @f3 0x00cbb110 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbb110 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61a48;
void __cdecl FUN_00d8f330();
}

void __cdecl FUN_00cbb110()
{
    f3m_00cbb110::DAT_00f61a48.Setting::Setting();
    atexit(f3m_00cbb110::FUN_00d8f330);
}

// @f3 0x00cbd2d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd2d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61e80;
void __cdecl FUN_00d8f8d0();
}

void __cdecl FUN_00cbd2d0()
{
    f3m_00cbd2d0::DAT_00f61e80.Setting::Setting();
    atexit(f3m_00cbd2d0::FUN_00d8f8d0);
}

// @f3 0x00ca6270 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6270 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ef4c;
void __cdecl FUN_00d8bbc0();
}

void __cdecl FUN_00ca6270()
{
    f3m_00ca6270::DAT_00f5ef4c.Setting::Setting();
    atexit(f3m_00ca6270::FUN_00d8bbc0);
}

// @f3 0x00cade00 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cade00 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ffa8;
void __cdecl FUN_00d8d010();
}

void __cdecl FUN_00cade00()
{
    using namespace f3m_00cade00;
    DAT_00f5ffa8.Setting::Setting();
    atexit(FUN_00d8d010);
}

// @f3 0x00cb7930 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb7930 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6134c;
void __cdecl FUN_00d8e9e0();
}

void __cdecl FUN_00cb7930()
{
    using namespace f3m_00cb7930;
    DAT_00f6134c.Setting::Setting();
    atexit(FUN_00d8e9e0);
}

// @f3 0x00caa980 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa980 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f918;
void __cdecl FUN_00d8c750();
}

void __cdecl FUN_00caa980()
{
    f3m_00caa980::DAT_00f5f918.Setting::Setting();
    atexit(f3m_00caa980::FUN_00d8c750);
}

// @f3 0x00cb43a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb43a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60c5c;
void __cdecl FUN_00d8e100();
}

void __cdecl FUN_00cb43a0()
{
    f3m_00cb43a0::DAT_00f60c5c.Setting::Setting();
    atexit(f3m_00cb43a0::FUN_00d8e100);
}

// @f3 0x00cb9130 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9130 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6164c;
void __cdecl FUN_00d8ede0();
}

void __cdecl FUN_00cb9130()
{
    f3m_00cb9130::DAT_00f6164c.Setting::Setting();
    atexit(f3m_00cb9130::FUN_00d8ede0);
}

// @f3 0x00caf1e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caf1e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60224;
void __cdecl FUN_00d8d360();
}

void __cdecl FUN_00caf1e0()
{
    using namespace f3m_00caf1e0;
    DAT_00f60224.Setting::Setting();
    atexit(FUN_00d8d360);
}

// @f3 0x00ca6870 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6870 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f04c;
void __cdecl FUN_00d8bcc0();
}

void __cdecl FUN_00ca6870()
{
    f3m_00ca6870::DAT_00f5f04c.Setting::Setting();
    atexit(f3m_00ca6870::FUN_00d8bcc0);
}

// @f3 0x00cb0860 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0860 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f604f4;
void __cdecl FUN_00d8d720();
}

void __cdecl FUN_00cb0860()
{
    f3m_00cb0860::DAT_00f604f4.Setting::Setting();
    atexit(f3m_00cb0860::FUN_00d8d720);
}

// @f3 0x00cb1580 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1580 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60698;
void __cdecl FUN_00d8d950();
}

void __cdecl FUN_00cb1580()
{
    f3m_00cb1580::DAT_00f60698.Setting::Setting();
    atexit(f3m_00cb1580::FUN_00d8d950);
}

// @f3 0x00cbe890 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbe890 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62138;
void __cdecl FUN_00d8fc70();
}

void __cdecl FUN_00cbe890()
{
    using namespace f3m_00cbe890;
    DAT_00f62138.Setting::Setting();
    atexit(FUN_00d8fc70);
}

// @f3 0x00cbfd90 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbfd90 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f623d8;
void __cdecl FUN_00d8fff0();
}

void __cdecl FUN_00cbfd90()
{
    using namespace f3m_00cbfd90;
    DAT_00f623d8.Setting::Setting();
    atexit(FUN_00d8fff0);
}

// @f3 0x00ca4ad0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca4ad0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ec58;
void __cdecl FUN_00d8b7d0();
}

void __cdecl FUN_00ca4ad0()
{
    using namespace f3m_00ca4ad0;
    DAT_00f5ec58.Setting::Setting();
    atexit(FUN_00d8b7d0);
}

// @f3 0x00cbf370 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbf370 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62294;
void __cdecl FUN_00d8fe40();
}

void __cdecl FUN_00cbf370()
{
    f3m_00cbf370::DAT_00f62294.Setting::Setting();
    atexit(f3m_00cbf370::FUN_00d8fe40);
}

// @f3 0x00cb29c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb29c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60920;
void __cdecl FUN_00d8dcb0();
}

void __cdecl FUN_00cb29c0()
{
    f3m_00cb29c0::DAT_00f60920.Setting::Setting();
    atexit(f3m_00cb29c0::FUN_00d8dcb0);
}

// @f3 0x00ca8ee0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca8ee0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f5c4;
void __cdecl FUN_00d8c2e0();
}

void __cdecl FUN_00ca8ee0()
{
    using namespace f3m_00ca8ee0;
    DAT_00f5f5c4.Setting::Setting();
    atexit(FUN_00d8c2e0);
}

// @f3 0x00ca9720 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca9720 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f6cc;
void __cdecl FUN_00d8c440();
}

void __cdecl FUN_00ca9720()
{
    using namespace f3m_00ca9720;
    DAT_00f5f6cc.Setting::Setting();
    atexit(FUN_00d8c440);
}

// @f3 0x00caca20 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caca20 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fd2c;
void __cdecl FUN_00d8ccc0();
}

void __cdecl FUN_00caca20()
{
    using namespace f3m_00caca20;
    DAT_00f5fd2c.Setting::Setting();
    atexit(FUN_00d8ccc0);
}

// @f3 0x00cbe950 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbe950 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62150;
void __cdecl FUN_00d8fc90();
}

void __cdecl FUN_00cbe950()
{
    using namespace f3m_00cbe950;
    DAT_00f62150.Setting::Setting();
    atexit(FUN_00d8fc90);
}

// @f3 0x00cb8650 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb8650 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f614f0;
void __cdecl FUN_00d8ec10();
}

void __cdecl FUN_00cb8650()
{
    using namespace f3m_00cb8650;
    DAT_00f614f0.Setting::Setting();
    atexit(FUN_00d8ec10);
}

// @f3 0x00cafe40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cafe40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f603b0;
void __cdecl FUN_00d8d570();
}

void __cdecl FUN_00cafe40()
{
    f3m_00cafe40::DAT_00f603b0.Setting::Setting();
    atexit(f3m_00cafe40::FUN_00d8d570);
}

// @f3 0x00ca8d00 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca8d00 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f588;
void __cdecl FUN_00d8c290();
}

void __cdecl FUN_00ca8d00()
{
    using namespace f3m_00ca8d00;
    DAT_00f5f588.Setting::Setting();
    atexit(FUN_00d8c290);
}

// @f3 0x00cae0a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cae0a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fffc;
void __cdecl FUN_00d8d080();
}

void __cdecl FUN_00cae0a0()
{
    f3m_00cae0a0::DAT_00f5fffc.Setting::Setting();
    atexit(f3m_00cae0a0::FUN_00d8d080);
}

// @f3 0x00cab2e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cab2e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fa44;
void __cdecl FUN_00d8c8e0();
}

void __cdecl FUN_00cab2e0()
{
    f3m_00cab2e0::DAT_00f5fa44.Setting::Setting();
    atexit(f3m_00cab2e0::FUN_00d8c8e0);
}

// @f3 0x00caa5c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caa5c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f8a0;
void __cdecl FUN_00d8c6b0();
}

void __cdecl FUN_00caa5c0()
{
    using namespace f3m_00caa5c0;
    DAT_00f5f8a0.Setting::Setting();
    atexit(FUN_00d8c6b0);
}

// @f3 0x00cb4dc0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4dc0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60da0;
void __cdecl FUN_00d8e2b0();
}

void __cdecl FUN_00cb4dc0()
{
    f3m_00cb4dc0::DAT_00f60da0.Setting::Setting();
    atexit(f3m_00cb4dc0::FUN_00d8e2b0);
}

// @f3 0x00cac8a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cac8a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fcfc;
void __cdecl FUN_00d8cc80();
}

void __cdecl FUN_00cac8a0()
{
    using namespace f3m_00cac8a0;
    DAT_00f5fcfc.Setting::Setting();
    atexit(FUN_00d8cc80);
}

// @f3 0x00caab60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caab60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f954;
void __cdecl FUN_00d8c7a0();
}

void __cdecl FUN_00caab60()
{
    f3m_00caab60::DAT_00f5f954.Setting::Setting();
    atexit(f3m_00caab60::FUN_00d8c7a0);
}

// @f3 0x00cbbef0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbbef0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61c04;
void __cdecl FUN_00d8f580();
}

void __cdecl FUN_00cbbef0()
{
    f3m_00cbbef0::DAT_00f61c04.Setting::Setting();
    atexit(f3m_00cbbef0::FUN_00d8f580);
}

// @f3 0x00ca9360 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9360 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f654;
void __cdecl FUN_00d8c3a0();
}

void __cdecl FUN_00ca9360()
{
    f3m_00ca9360::DAT_00f5f654.Setting::Setting();
    atexit(f3m_00ca9360::FUN_00d8c3a0);
}

// @f3 0x00ca1f50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1f50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e6e8;
void __cdecl FUN_00d8b090();
}

void __cdecl FUN_00ca1f50()
{
    using namespace f3m_00ca1f50;
    DAT_00f5e6e8.Setting::Setting();
    atexit(FUN_00d8b090);
}

// @f3 0x00ca39f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca39f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ea3c;
void __cdecl FUN_00d8b500();
}

void __cdecl FUN_00ca39f0()
{
    f3m_00ca39f0::DAT_00f5ea3c.Setting::Setting();
    atexit(f3m_00ca39f0::FUN_00d8b500);
}

// @f3 0x00cbfbb0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbfbb0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6239c;
void __cdecl FUN_00d8ffa0();
}

void __cdecl FUN_00cbfbb0()
{
    using namespace f3m_00cbfbb0;
    DAT_00f6239c.Setting::Setting();
    atexit(FUN_00d8ffa0);
}

// @f3 0x00cb7d50 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7d50 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f613d0;
void __cdecl FUN_00d8ea90();
}

void __cdecl FUN_00cb7d50()
{
    f3m_00cb7d50::DAT_00f613d0.Setting::Setting();
    atexit(f3m_00cb7d50::FUN_00d8ea90);
}

// @f3 0x00cb39e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb39e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60b24;
void __cdecl FUN_00d8df60();
}

void __cdecl FUN_00cb39e0()
{
    f3m_00cb39e0::DAT_00f60b24.Setting::Setting();
    atexit(f3m_00cb39e0::FUN_00d8df60);
}

// @f3 0x00cb3aa0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3aa0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60b3c;
void __cdecl FUN_00d8df80();
}

void __cdecl FUN_00cb3aa0()
{
    f3m_00cb3aa0::DAT_00f60b3c.Setting::Setting();
    atexit(f3m_00cb3aa0::FUN_00d8df80);
}

// @f3 0x00caf000 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caf000 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f601e8;
void __cdecl FUN_00d8d310();
}

void __cdecl FUN_00caf000()
{
    using namespace f3m_00caf000;
    DAT_00f601e8.Setting::Setting();
    atexit(FUN_00d8d310);
}

// @f3 0x00ca4230 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca4230 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eb44;
void __cdecl FUN_00d8b660();
}

void __cdecl FUN_00ca4230()
{
    using namespace f3m_00ca4230;
    DAT_00f5eb44.Setting::Setting();
    atexit(FUN_00d8b660);
}

// @f3 0x00ca2eb0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2eb0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e8d4;
void __cdecl FUN_00d8b320();
}

void __cdecl FUN_00ca2eb0()
{
    using namespace f3m_00ca2eb0;
    DAT_00f5e8d4.Setting::Setting();
    atexit(FUN_00d8b320);
}

// @f3 0x00cb16a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb16a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f606bc;
void __cdecl FUN_00d8d980();
}

void __cdecl FUN_00cb16a0()
{
    f3m_00cb16a0::DAT_00f606bc.Setting::Setting();
    atexit(f3m_00cb16a0::FUN_00d8d980);
}

// @f3 0x00cb6250 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6250 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61070;
void __cdecl FUN_00d8e610();
}

void __cdecl FUN_00cb6250()
{
    f3m_00cb6250::DAT_00f61070.Setting::Setting();
    atexit(f3m_00cb6250::FUN_00d8e610);
}

// @f3 0x00cb7f30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7f30 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6140c;
void __cdecl FUN_00d8eae0();
}

void __cdecl FUN_00cb7f30()
{
    f3m_00cb7f30::DAT_00f6140c.Setting::Setting();
    atexit(f3m_00cb7f30::FUN_00d8eae0);
}

// @f3 0x00cb9f10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9f10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61808;
void __cdecl FUN_00d8f030();
}

void __cdecl FUN_00cb9f10()
{
    f3m_00cb9f10::DAT_00f61808.Setting::Setting();
    atexit(f3m_00cb9f10::FUN_00d8f030);
}

// @f3 0x00cb3b00 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3b00 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60b48;
void __cdecl FUN_00d8df90();
}

void __cdecl FUN_00cb3b00()
{
    f3m_00cb3b00::DAT_00f60b48.Setting::Setting();
    atexit(f3m_00cb3b00::FUN_00d8df90);
}

// @f3 0x00ca9420 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9420 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f66c;
void __cdecl FUN_00d8c3c0();
}

void __cdecl FUN_00ca9420()
{
    f3m_00ca9420::DAT_00f5f66c.Setting::Setting();
    atexit(f3m_00ca9420::FUN_00d8c3c0);
}

// @f3 0x00cbbe90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbbe90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61bf8;
void __cdecl FUN_00d8f570();
}

void __cdecl FUN_00cbbe90()
{
    f3m_00cbbe90::DAT_00f61bf8.Setting::Setting();
    atexit(f3m_00cbbe90::FUN_00d8f570);
}

// @f3 0x00ca8d60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8d60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f594;
void __cdecl FUN_00d8c2a0();
}

void __cdecl FUN_00ca8d60()
{
    f3m_00ca8d60::DAT_00f5f594.Setting::Setting();
    atexit(f3m_00ca8d60::FUN_00d8c2a0);
}

// @f3 0x00cb3680 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3680 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60ab8;
void __cdecl FUN_00d8ded0();
}

void __cdecl FUN_00cb3680()
{
    f3m_00cb3680::DAT_00f60ab8.Setting::Setting();
    atexit(f3m_00cb3680::FUN_00d8ded0);
}

// @f3 0x00cb3f20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3f20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60bcc;
void __cdecl FUN_00d8e040();
}

void __cdecl FUN_00cb3f20()
{
    f3m_00cb3f20::DAT_00f60bcc.Setting::Setting();
    atexit(f3m_00cb3f20::FUN_00d8e040);
}

// @f3 0x00cbeef0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbeef0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62204;
void __cdecl FUN_00d8fd80();
}

void __cdecl FUN_00cbeef0()
{
    f3m_00cbeef0::DAT_00f62204.Setting::Setting();
    atexit(f3m_00cbeef0::FUN_00d8fd80);
}

// @f3 0x00cba3f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cba3f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f618a4;
void __cdecl FUN_00d8f100();
}

void __cdecl FUN_00cba3f0()
{
    f3m_00cba3f0::DAT_00f618a4.Setting::Setting();
    atexit(f3m_00cba3f0::FUN_00d8f100);
}

// @f3 0x00cba810 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cba810 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61928;
void __cdecl FUN_00d8f1b0();
}

void __cdecl FUN_00cba810()
{
    f3m_00cba810::DAT_00f61928.Setting::Setting();
    atexit(f3m_00cba810::FUN_00d8f1b0);
}

// @f3 0x00ca88e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca88e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f504;
void __cdecl FUN_00d8c1e0();
}

void __cdecl FUN_00ca88e0()
{
    f3m_00ca88e0::DAT_00f5f504.Setting::Setting();
    atexit(f3m_00ca88e0::FUN_00d8c1e0);
}

// @f3 0x00ca53d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca53d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ed78;
void __cdecl FUN_00d8b950();
}

void __cdecl FUN_00ca53d0()
{
    f3m_00ca53d0::DAT_00f5ed78.Setting::Setting();
    atexit(f3m_00ca53d0::FUN_00d8b950);
}

// @f3 0x00cbe410 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbe410 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f620a8;
void __cdecl FUN_00d8fbb0();
}

void __cdecl FUN_00cbe410()
{
    f3m_00cbe410::DAT_00f620a8.Setting::Setting();
    atexit(f3m_00cbe410::FUN_00d8fbb0);
}

// @f3 0x00ca2c10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2c10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e880;
void __cdecl FUN_00d8b2b0();
}

void __cdecl FUN_00ca2c10()
{
    f3m_00ca2c10::DAT_00f5e880.Setting::Setting();
    atexit(f3m_00ca2c10::FUN_00d8b2b0);
}

// @f3 0x00cb9c70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9c70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f617b4;
void __cdecl FUN_00d8efc0();
}

void __cdecl FUN_00cb9c70()
{
    f3m_00cb9c70::DAT_00f617b4.Setting::Setting();
    atexit(f3m_00cb9c70::FUN_00d8efc0);
}

// @f3 0x00cb1ca0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1ca0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6077c;
void __cdecl FUN_00d8da80();
}

void __cdecl FUN_00cb1ca0()
{
    f3m_00cb1ca0::DAT_00f6077c.Setting::Setting();
    atexit(f3m_00cb1ca0::FUN_00d8da80);
}

// @f3 0x00ca2250 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2250 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e748;
void __cdecl FUN_00d8b110();
}

void __cdecl FUN_00ca2250()
{
    f3m_00ca2250::DAT_00f5e748.Setting::Setting();
    atexit(f3m_00ca2250::FUN_00d8b110);
}

// @f3 0x00ca8fa0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8fa0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f5dc;
void __cdecl FUN_00d8c300();
}

void __cdecl FUN_00ca8fa0()
{
    f3m_00ca8fa0::DAT_00f5f5dc.Setting::Setting();
    atexit(f3m_00ca8fa0::FUN_00d8c300);
}

// @f3 0x00cac4e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cac4e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fc84;
void __cdecl FUN_00d8cbe0();
}

void __cdecl FUN_00cac4e0()
{
    f3m_00cac4e0::DAT_00f5fc84.Setting::Setting();
    atexit(f3m_00cac4e0::FUN_00d8cbe0);
}

// @f3 0x00cadc20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cadc20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ff6c;
void __cdecl FUN_00d8cfc0();
}

void __cdecl FUN_00cadc20()
{
    f3m_00cadc20::DAT_00f5ff6c.Setting::Setting();
    atexit(f3m_00cadc20::FUN_00d8cfc0);
}

// @f3 0x00cb25a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb25a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6089c;
void __cdecl FUN_00d8dc00();
}

void __cdecl FUN_00cb25a0()
{
    f3m_00cb25a0::DAT_00f6089c.Setting::Setting();
    atexit(f3m_00cb25a0::FUN_00d8dc00);
}

// @f3 0x00ca9e40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9e40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f7b0;
void __cdecl FUN_00d8c570();
}

void __cdecl FUN_00ca9e40()
{
    f3m_00ca9e40::DAT_00f5f7b0.Setting::Setting();
    atexit(f3m_00ca9e40::FUN_00d8c570);
}

// @f3 0x00cbbfb0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbbfb0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61c1c;
void __cdecl FUN_00d8f5a0();
}

void __cdecl FUN_00cbbfb0()
{
    f3m_00cbbfb0::DAT_00f61c1c.Setting::Setting();
    atexit(f3m_00cbbfb0::FUN_00d8f5a0);
}

// @f3 0x00ca9cc0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9cc0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f780;
void __cdecl FUN_00d8c530();
}

void __cdecl FUN_00ca9cc0()
{
    f3m_00ca9cc0::DAT_00f5f780.Setting::Setting();
    atexit(f3m_00ca9cc0::FUN_00d8c530);
}

// @f3 0x00cb2ae0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2ae0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60944;
void __cdecl FUN_00d8dce0();
}

void __cdecl FUN_00cb2ae0()
{
    f3m_00cb2ae0::DAT_00f60944.Setting::Setting();
    atexit(f3m_00cb2ae0::FUN_00d8dce0);
}

// @f3 0x00caf840 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf840 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f602f0;
void __cdecl FUN_00d8d470();
}

void __cdecl FUN_00caf840()
{
    f3m_00caf840::DAT_00f602f0.Setting::Setting();
    atexit(f3m_00caf840::FUN_00d8d470);
}

// @f3 0x00cb0da0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0da0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6059c;
void __cdecl FUN_00d8d800();
}

void __cdecl FUN_00cb0da0()
{
    f3m_00cb0da0::DAT_00f6059c.Setting::Setting();
    atexit(f3m_00cb0da0::FUN_00d8d800);
}

// @f3 0x00cbb590 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbb590 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61ad8;
void __cdecl FUN_00d8f3f0();
}

void __cdecl FUN_00cbb590()
{
    f3m_00cbb590::DAT_00f61ad8.Setting::Setting();
    atexit(f3m_00cbb590::FUN_00d8f3f0);
}

// @f3 0x00cb74b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb74b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f612bc;
void __cdecl FUN_00d8e920();
}

void __cdecl FUN_00cb74b0()
{
    f3m_00cb74b0::DAT_00f612bc.Setting::Setting();
    atexit(f3m_00cb74b0::FUN_00d8e920);
}

// @f3 0x00ca11d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca11d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e538;
void __cdecl FUN_00d8ae50();
}

void __cdecl FUN_00ca11d0()
{
    f3m_00ca11d0::DAT_00f5e538.Setting::Setting();
    atexit(f3m_00ca11d0::FUN_00d8ae50);
}

// @f3 0x00ca31b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca31b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e934;
void __cdecl FUN_00d8b3a0();
}

void __cdecl FUN_00ca31b0()
{
    f3m_00ca31b0::DAT_00f5e934.Setting::Setting();
    atexit(f3m_00ca31b0::FUN_00d8b3a0);
}

// @f3 0x00cb9a90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9a90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61778;
void __cdecl FUN_00d8ef70();
}

void __cdecl FUN_00cb9a90()
{
    f3m_00cb9a90::DAT_00f61778.Setting::Setting();
    atexit(f3m_00cb9a90::FUN_00d8ef70);
}

// @f3 0x00cbbbf0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbbbf0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61ba4;
void __cdecl FUN_00d8f500();
}

void __cdecl FUN_00cbbbf0()
{
    f3m_00cbbbf0::DAT_00f61ba4.Setting::Setting();
    atexit(f3m_00cbbbf0::FUN_00d8f500);
}

// @f3 0x00ca4950 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca4950 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ec28;
void __cdecl FUN_00d8b790();
}

void __cdecl FUN_00ca4950()
{
    f3m_00ca4950::DAT_00f5ec28.Setting::Setting();
    atexit(f3m_00ca4950::FUN_00d8b790);
}

// @f3 0x00ca54f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca54f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ed9c;
void __cdecl FUN_00d8b980();
}

void __cdecl FUN_00ca54f0()
{
    f3m_00ca54f0::DAT_00f5ed9c.Setting::Setting();
    atexit(f3m_00ca54f0::FUN_00d8b980);
}

// @f3 0x00cb8e30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8e30 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f615ec;
void __cdecl FUN_00d8ed60();
}

void __cdecl FUN_00cb8e30()
{
    f3m_00cb8e30::DAT_00f615ec.Setting::Setting();
    atexit(f3m_00cb8e30::FUN_00d8ed60);
}

// @f3 0x00ca3690 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3690 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e9d0;
void __cdecl FUN_00d8b470();
}

void __cdecl FUN_00ca3690()
{
    f3m_00ca3690::DAT_00f5e9d0.Setting::Setting();
    atexit(f3m_00ca3690::FUN_00d8b470);
}

// @f3 0x00cb1e80 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1e80 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f607b8;
void __cdecl FUN_00d8dad0();
}

void __cdecl FUN_00cb1e80()
{
    f3m_00cb1e80::DAT_00f607b8.Setting::Setting();
    atexit(f3m_00cb1e80::FUN_00d8dad0);
}

// @f3 0x00ca2370 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2370 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e76c;
void __cdecl FUN_00d8b140();
}

void __cdecl FUN_00ca2370()
{
    f3m_00ca2370::DAT_00f5e76c.Setting::Setting();
    atexit(f3m_00ca2370::FUN_00d8b140);
}

// @f3 0x00cb3860 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3860 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60af4;
void __cdecl FUN_00d8df20();
}

void __cdecl FUN_00cb3860()
{
    f3m_00cb3860::DAT_00f60af4.Setting::Setting();
    atexit(f3m_00cb3860::FUN_00d8df20);
}

// @f3 0x00cb5cc0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb5cc0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60f80;
void __cdecl FUN_00d8e530();
}

void __cdecl FUN_00cb5cc0()
{
    f3m_00cb5cc0::DAT_00f60f80.Setting::Setting();
    atexit(f3m_00cb5cc0::FUN_00d8e530);
}

// @f3 0x00cba6f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cba6f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61904;
void __cdecl FUN_00d8f180();
}

void __cdecl FUN_00cba6f0()
{
    f3m_00cba6f0::DAT_00f61904.Setting::Setting();
    atexit(f3m_00cba6f0::FUN_00d8f180);
}

// @f3 0x00ca4050 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca4050 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5eb08;
void __cdecl FUN_00d8b610();
}

void __cdecl FUN_00ca4050()
{
    f3m_00ca4050::DAT_00f5eb08.Setting::Setting();
    atexit(f3m_00ca4050::FUN_00d8b610);
}

// @f3 0x00ca1290 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca1290 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e550;
void __cdecl FUN_00d8ae70();
}

void __cdecl FUN_00ca1290()
{
    f3m_00ca1290::DAT_00f5e550.Setting::Setting();
    atexit(f3m_00ca1290::FUN_00d8ae70);
}

// @f3 0x00cbd8d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd8d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61f40;
void __cdecl FUN_00d8f9d0();
}

void __cdecl FUN_00cbd8d0()
{
    f3m_00cbd8d0::DAT_00f61f40.Setting::Setting();
    atexit(f3m_00cbd8d0::FUN_00d8f9d0);
}

// @f3 0x00ca1410 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca1410 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e580;
void __cdecl FUN_00d8aeb0();
}

void __cdecl FUN_00ca1410()
{
    f3m_00ca1410::DAT_00f5e580.Setting::Setting();
    atexit(f3m_00ca1410::FUN_00d8aeb0);
}

// @f3 0x00caace0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caace0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f984;
void __cdecl FUN_00d8c7e0();
}

void __cdecl FUN_00caace0()
{
    f3m_00caace0::DAT_00f5f984.Setting::Setting();
    atexit(f3m_00caace0::FUN_00d8c7e0);
}

// @f3 0x00caae60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caae60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f9b4;
void __cdecl FUN_00d8c820();
}

void __cdecl FUN_00caae60()
{
    f3m_00caae60::DAT_00f5f9b4.Setting::Setting();
    atexit(f3m_00caae60::FUN_00d8c820);
}

// @f3 0x00cae880 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cae880 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f600f8;
void __cdecl FUN_00d8d1d0();
}

void __cdecl FUN_00cae880()
{
    f3m_00cae880::DAT_00f600f8.Setting::Setting();
    atexit(f3m_00cae880::FUN_00d8d1d0);
}

// @f3 0x00cbea10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbea10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62168;
void __cdecl FUN_00d8fcb0();
}

void __cdecl FUN_00cbea10()
{
    f3m_00cbea10::DAT_00f62168.Setting::Setting();
    atexit(f3m_00cbea10::FUN_00d8fcb0);
}

// @f3 0x00cb9250 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9250 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61670;
void __cdecl FUN_00d8ee10();
}

void __cdecl FUN_00cb9250()
{
    f3m_00cb9250::DAT_00f61670.Setting::Setting();
    atexit(f3m_00cb9250::FUN_00d8ee10);
}

// @f3 0x00cab7c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cab7c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fae0;
void __cdecl FUN_00d8c9b0();
}

void __cdecl FUN_00cab7c0()
{
    f3m_00cab7c0::DAT_00f5fae0.Setting::Setting();
    atexit(f3m_00cab7c0::FUN_00d8c9b0);
}

// @f3 0x00ca8040 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8040 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f3f0;
void __cdecl FUN_00d8c070();
}

void __cdecl FUN_00ca8040()
{
    f3m_00ca8040::DAT_00f5f3f0.Setting::Setting();
    atexit(f3m_00ca8040::FUN_00d8c070);
}

// @f3 0x00ca2430 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2430 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e784;
void __cdecl FUN_00d8b160();
}

void __cdecl FUN_00ca2430()
{
    f3m_00ca2430::DAT_00f5e784.Setting::Setting();
    atexit(f3m_00ca2430::FUN_00d8b160);
}

// @f3 0x00cb4d00 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4d00 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60d88;
void __cdecl FUN_00d8e290();
}

void __cdecl FUN_00cb4d00()
{
    f3m_00cb4d00::DAT_00f60d88.Setting::Setting();
    atexit(f3m_00cb4d00::FUN_00d8e290);
}

// @f3 0x00cb4700 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4700 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60cc8;
void __cdecl FUN_00d8e190();
}

void __cdecl FUN_00cb4700()
{
    f3m_00cb4700::DAT_00f60cc8.Setting::Setting();
    atexit(f3m_00cb4700::FUN_00d8e190);
}

// @f3 0x00ca66f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca66f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f01c;
void __cdecl FUN_00d8bc80();
}

void __cdecl FUN_00ca66f0()
{
    f3m_00ca66f0::DAT_00f5f01c.Setting::Setting();
    atexit(f3m_00ca66f0::FUN_00d8bc80);
}

// @f3 0x00ca44d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca44d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5eb98;
void __cdecl FUN_00d8b6d0();
}

void __cdecl FUN_00ca44d0()
{
    f3m_00ca44d0::DAT_00f5eb98.Setting::Setting();
    atexit(f3m_00ca44d0::FUN_00d8b6d0);
}

// @f3 0x00cafb40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cafb40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60350;
void __cdecl FUN_00d8d4f0();
}

void __cdecl FUN_00cafb40()
{
    f3m_00cafb40::DAT_00f60350.Setting::Setting();
    atexit(f3m_00cafb40::FUN_00d8d4f0);
}

// @f3 0x00cb7630 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7630 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f612ec;
void __cdecl FUN_00d8e960();
}

void __cdecl FUN_00cb7630()
{
    f3m_00cb7630::DAT_00f612ec.Setting::Setting();
    atexit(f3m_00cb7630::FUN_00d8e960);
}

// @f3 0x00ca70b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca70b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f154;
void __cdecl FUN_00d8be20();
}

void __cdecl FUN_00ca70b0()
{
    f3m_00ca70b0::DAT_00f5f154.Setting::Setting();
    atexit(f3m_00ca70b0::FUN_00d8be20);
}

// @f3 0x00ca9d80 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9d80 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f798;
void __cdecl FUN_00d8c550();
}

void __cdecl FUN_00ca9d80()
{
    f3m_00ca9d80::DAT_00f5f798.Setting::Setting();
    atexit(f3m_00ca9d80::FUN_00d8c550);
}

// @f3 0x00ca3090 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3090 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e910;
void __cdecl FUN_00d8b370();
}

void __cdecl FUN_00ca3090()
{
    f3m_00ca3090::DAT_00f5e910.Setting::Setting();
    atexit(f3m_00ca3090::FUN_00d8b370);
}

// @f3 0x00ca46b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca46b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ebd4;
void __cdecl FUN_00d8b720();
}

void __cdecl FUN_00ca46b0()
{
    f3m_00ca46b0::DAT_00f5ebd4.Setting::Setting();
    atexit(f3m_00ca46b0::FUN_00d8b720);
}

// @f3 0x00ca5070 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca5070 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ed0c;
void __cdecl FUN_00d8b8c0();
}

void __cdecl FUN_00ca5070()
{
    f3m_00ca5070::DAT_00f5ed0c.Setting::Setting();
    atexit(f3m_00ca5070::FUN_00d8b8c0);
}

// @f3 0x00cb9f70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9f70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61814;
void __cdecl FUN_00d8f040();
}

void __cdecl FUN_00cb9f70()
{
    f3m_00cb9f70::DAT_00f61814.Setting::Setting();
    atexit(f3m_00cb9f70::FUN_00d8f040);
}

// @f3 0x00ca8820 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8820 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f4ec;
void __cdecl FUN_00d8c1c0();
}

void __cdecl FUN_00ca8820()
{
    f3m_00ca8820::DAT_00f5f4ec.Setting::Setting();
    atexit(f3m_00ca8820::FUN_00d8c1c0);
}

// @f3 0x00cbff70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbff70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62414;
void __cdecl FUN_00d90040();
}

void __cdecl FUN_00cbff70()
{
    f3m_00cbff70::DAT_00f62414.Setting::Setting();
    atexit(f3m_00cbff70::FUN_00d90040);
}

// @f3 0x00cb8890 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8890 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61538;
void __cdecl FUN_00d8ec70();
}

void __cdecl FUN_00cb8890()
{
    f3m_00cb8890::DAT_00f61538.Setting::Setting();
    atexit(f3m_00cb8890::FUN_00d8ec70);
}

// @f3 0x00ca5250 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca5250 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ed48;
void __cdecl FUN_00d8b910();
}

void __cdecl FUN_00ca5250()
{
    f3m_00ca5250::DAT_00f5ed48.Setting::Setting();
    atexit(f3m_00ca5250::FUN_00d8b910);
}

// @f3 0x00cb0740 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0740 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f604d0;
void __cdecl FUN_00d8d6f0();
}

void __cdecl FUN_00cb0740()
{
    f3m_00cb0740::DAT_00f604d0.Setting::Setting();
    atexit(f3m_00cb0740::FUN_00d8d6f0);
}

// @f3 0x00cb8c50 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8c50 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f615b0;
void __cdecl FUN_00d8ed10();
}

void __cdecl FUN_00cb8c50()
{
    f3m_00cb8c50::DAT_00f615b0.Setting::Setting();
    atexit(f3m_00cb8c50::FUN_00d8ed10);
}

// @f3 0x00cb42e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb42e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60c44;
void __cdecl FUN_00d8e0e0();
}

void __cdecl FUN_00cb42e0()
{
    f3m_00cb42e0::DAT_00f60c44.Setting::Setting();
    atexit(f3m_00cb42e0::FUN_00d8e0e0);
}

// @f3 0x00cb2cc0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2cc0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60980;
void __cdecl FUN_00d8dd30();
}

void __cdecl FUN_00cb2cc0()
{
    f3m_00cb2cc0::DAT_00f60980.Setting::Setting();
    atexit(f3m_00cb2cc0::FUN_00d8dd30);
}

// @f3 0x00cb9310 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9310 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61688;
void __cdecl FUN_00d8ee30();
}

void __cdecl FUN_00cb9310()
{
    f3m_00cb9310::DAT_00f61688.Setting::Setting();
    atexit(f3m_00cb9310::FUN_00d8ee30);
}

// @f3 0x00cb5900 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb5900 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60f08;
void __cdecl FUN_00d8e490();
}

void __cdecl FUN_00cb5900()
{
    f3m_00cb5900::DAT_00f60f08.Setting::Setting();
    atexit(f3m_00cb5900::FUN_00d8e490);
}

// @f3 0x00cb4d60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4d60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60d94;
void __cdecl FUN_00d8e2a0();
}

void __cdecl FUN_00cb4d60()
{
    f3m_00cb4d60::DAT_00f60d94.Setting::Setting();
    atexit(f3m_00cb4d60::FUN_00d8e2a0);
}

// @f3 0x00cb0320 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0320 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6044c;
void __cdecl FUN_00d8d640();
}

void __cdecl FUN_00cb0320()
{
    f3m_00cb0320::DAT_00f6044c.Setting::Setting();
    atexit(f3m_00cb0320::FUN_00d8d640);
}

// @f3 0x00cb4940 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4940 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60d10;
void __cdecl FUN_00d8e1f0();
}

void __cdecl FUN_00cb4940()
{
    f3m_00cb4940::DAT_00f60d10.Setting::Setting();
    atexit(f3m_00cb4940::FUN_00d8e1f0);
}

// @f3 0x00ca8c40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8c40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f570;
void __cdecl FUN_00d8c270();
}

void __cdecl FUN_00ca8c40()
{
    f3m_00ca8c40::DAT_00f5f570.Setting::Setting();
    atexit(f3m_00ca8c40::FUN_00d8c270);
}

// @f3 0x00ca3330 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3330 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e964;
void __cdecl FUN_00d8b3e0();
}

void __cdecl FUN_00ca3330()
{
    f3m_00ca3330::DAT_00f5e964.Setting::Setting();
    atexit(f3m_00ca3330::FUN_00d8b3e0);
}

// @f3 0x00cbce50 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbce50 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61df0;
void __cdecl FUN_00d8f810();
}

void __cdecl FUN_00cbce50()
{
    f3m_00cbce50::DAT_00f61df0.Setting::Setting();
    atexit(f3m_00cbce50::FUN_00d8f810);
}

// @f3 0x00cafa20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cafa20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6032c;
void __cdecl FUN_00d8d4c0();
}

void __cdecl FUN_00cafa20()
{
    f3m_00cafa20::DAT_00f6032c.Setting::Setting();
    atexit(f3m_00cafa20::FUN_00d8d4c0);
}

// @f3 0x00cb1460 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1460 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60674;
void __cdecl FUN_00d8d920();
}

void __cdecl FUN_00cb1460()
{
    f3m_00cb1460::DAT_00f60674.Setting::Setting();
    atexit(f3m_00cb1460::FUN_00d8d920);
}

// @f3 0x00cbb950 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbb950 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61b50;
void __cdecl FUN_00d8f490();
}

void __cdecl FUN_00cbb950()
{
    f3m_00cbb950::DAT_00f61b50.Setting::Setting();
    atexit(f3m_00cbb950::FUN_00d8f490);
}

// @f3 0x00cb45e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb45e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60ca4;
void __cdecl FUN_00d8e160();
}

void __cdecl FUN_00cb45e0()
{
    f3m_00cb45e0::DAT_00f60ca4.Setting::Setting();
    atexit(f3m_00cb45e0::FUN_00d8e160);
}

// @f3 0x00cb7ff0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7ff0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61424;
void __cdecl FUN_00d8eb00();
}

void __cdecl FUN_00cb7ff0()
{
    f3m_00cb7ff0::DAT_00f61424.Setting::Setting();
    atexit(f3m_00cb7ff0::FUN_00d8eb00);
}

// @f3 0x00cba450 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cba450 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f618b0;
void __cdecl FUN_00d8f110();
}

void __cdecl FUN_00cba450()
{
    f3m_00cba450::DAT_00f618b0.Setting::Setting();
    atexit(f3m_00cba450::FUN_00d8f110);
}

// @f3 0x00cae340 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cae340 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60050;
void __cdecl FUN_00d8d0f0();
}

void __cdecl FUN_00cae340()
{
    f3m_00cae340::DAT_00f60050.Setting::Setting();
    atexit(f3m_00cae340::FUN_00d8d0f0);
}

// @f3 0x00cac480 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cac480 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fc78;
void __cdecl FUN_00d8cbd0();
}

void __cdecl FUN_00cac480()
{
    f3m_00cac480::DAT_00f5fc78.Setting::Setting();
    atexit(f3m_00cac480::FUN_00d8cbd0);
}

// @f3 0x00cab640 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cab640 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fab0;
void __cdecl FUN_00d8c970();
}

void __cdecl FUN_00cab640()
{
    f3m_00cab640::DAT_00f5fab0.Setting::Setting();
    atexit(f3m_00cab640::FUN_00d8c970);
}

// @f3 0x00cb7450 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7450 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f612b0;
void __cdecl FUN_00d8e910();
}

void __cdecl FUN_00cb7450()
{
    f3m_00cb7450::DAT_00f612b0.Setting::Setting();
    atexit(f3m_00cb7450::FUN_00d8e910);
}

// @f3 0x00ca3810 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3810 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ea00;
void __cdecl FUN_00d8b4b0();
}

void __cdecl FUN_00ca3810()
{
    f3m_00ca3810::DAT_00f5ea00.Setting::Setting();
    atexit(f3m_00ca3810::FUN_00d8b4b0);
}

// @f3 0x00caaec0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caaec0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f9c0;
void __cdecl FUN_00d8c830();
}

void __cdecl FUN_00caaec0()
{
    f3m_00caaec0::DAT_00f5f9c0.Setting::Setting();
    atexit(f3m_00caaec0::FUN_00d8c830);
}

// @f3 0x00cbf190 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbf190 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62258;
void __cdecl FUN_00d8fdf0();
}

void __cdecl FUN_00cbf190()
{
    f3m_00cbf190::DAT_00f62258.Setting::Setting();
    atexit(f3m_00cbf190::FUN_00d8fdf0);
}

// @f3 0x00ca3ed0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3ed0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ead8;
void __cdecl FUN_00d8b5d0();
}

void __cdecl FUN_00ca3ed0()
{
    f3m_00ca3ed0::DAT_00f5ead8.Setting::Setting();
    atexit(f3m_00ca3ed0::FUN_00d8b5d0);
}

// @f3 0x00cb6c70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6c70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f611b4;
void __cdecl FUN_00d8e7c0();
}

void __cdecl FUN_00cb6c70()
{
    f3m_00cb6c70::DAT_00f611b4.Setting::Setting();
    atexit(f3m_00cb6c70::FUN_00d8e7c0);
}

// @f3 0x00cb7c90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7c90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f613b8;
void __cdecl FUN_00d8ea70();
}

void __cdecl FUN_00cb7c90()
{
    f3m_00cb7c90::DAT_00f613b8.Setting::Setting();
    atexit(f3m_00cb7c90::FUN_00d8ea70);
}

// @f3 0x00ca22b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca22b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e754;
void __cdecl FUN_00d8b120();
}

void __cdecl FUN_00ca22b0()
{
    f3m_00ca22b0::DAT_00f5e754.Setting::Setting();
    atexit(f3m_00ca22b0::FUN_00d8b120);
}

// @f3 0x00cbae10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbae10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f619e8;
void __cdecl FUN_00d8f2b0();
}

void __cdecl FUN_00cbae10()
{
    f3m_00cbae10::DAT_00f619e8.Setting::Setting();
    atexit(f3m_00cbae10::FUN_00d8f2b0);
}

// @f3 0x00caaf80 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caaf80 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f9d8;
void __cdecl FUN_00d8c850();
}

void __cdecl FUN_00caaf80()
{
    f3m_00caaf80::DAT_00f5f9d8.Setting::Setting();
    atexit(f3m_00caaf80::FUN_00d8c850);
}

// @f3 0x00cb9430 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9430 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f616ac;
void __cdecl FUN_00d8ee60();
}

void __cdecl FUN_00cb9430()
{
    f3m_00cb9430::DAT_00f616ac.Setting::Setting();
    atexit(f3m_00cb9430::FUN_00d8ee60);
}

// @f3 0x00cac960 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cac960 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fd14;
void __cdecl FUN_00d8cca0();
}

void __cdecl FUN_00cac960()
{
    f3m_00cac960::DAT_00f5fd14.Setting::Setting();
    atexit(f3m_00cac960::FUN_00d8cca0);
}

// @f3 0x00cad440 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cad440 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fe70;
void __cdecl FUN_00d8ce70();
}

void __cdecl FUN_00cad440()
{
    f3m_00cad440::DAT_00f5fe70.Setting::Setting();
    atexit(f3m_00cad440::FUN_00d8ce70);
}

// @f3 0x00cae1c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cae1c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60020;
void __cdecl FUN_00d8d0b0();
}

void __cdecl FUN_00cae1c0()
{
    f3m_00cae1c0::DAT_00f60020.Setting::Setting();
    atexit(f3m_00cae1c0::FUN_00d8d0b0);
}

// @f3 0x00cb9910 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9910 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61748;
void __cdecl FUN_00d8ef30();
}

void __cdecl FUN_00cb9910()
{
    f3m_00cb9910::DAT_00f61748.Setting::Setting();
    atexit(f3m_00cb9910::FUN_00d8ef30);
}

// @f3 0x00ca4e30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca4e30 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ecc4;
void __cdecl FUN_00d8b860();
}

void __cdecl FUN_00ca4e30()
{
    f3m_00ca4e30::DAT_00f5ecc4.Setting::Setting();
    atexit(f3m_00ca4e30::FUN_00d8b860);
}

// @f3 0x00cb93d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb93d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f616a0;
void __cdecl FUN_00d8ee50();
}

void __cdecl FUN_00cb93d0()
{
    f3m_00cb93d0::DAT_00f616a0.Setting::Setting();
    atexit(f3m_00cb93d0::FUN_00d8ee50);
}

// @f3 0x00cb19a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb19a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6071c;
void __cdecl FUN_00d8da00();
}

void __cdecl FUN_00cb19a0()
{
    f3m_00cb19a0::DAT_00f6071c.Setting::Setting();
    atexit(f3m_00cb19a0::FUN_00d8da00);
}

// @f3 0x00caccc0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caccc0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fd80;
void __cdecl FUN_00d8cd30();
}

void __cdecl FUN_00caccc0()
{
    f3m_00caccc0::DAT_00f5fd80.Setting::Setting();
    atexit(f3m_00caccc0::FUN_00d8cd30);
}

// @f3 0x00cba7b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cba7b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6191c;
void __cdecl FUN_00d8f1a0();
}

void __cdecl FUN_00cba7b0()
{
    f3m_00cba7b0::DAT_00f6191c.Setting::Setting();
    atexit(f3m_00cba7b0::FUN_00d8f1a0);
}

// @f3 0x00cadf20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cadf20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ffcc;
void __cdecl FUN_00d8d040();
}

void __cdecl FUN_00cadf20()
{
    f3m_00cadf20::DAT_00f5ffcc.Setting::Setting();
    atexit(f3m_00cadf20::FUN_00d8d040);
}

// @f3 0x00cac900 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cac900 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fd08;
void __cdecl FUN_00d8cc90();
}

void __cdecl FUN_00cac900()
{
    f3m_00cac900::DAT_00f5fd08.Setting::Setting();
    atexit(f3m_00cac900::FUN_00d8cc90);
}

// @f3 0x00cada40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cada40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ff30;
void __cdecl FUN_00d8cf70();
}

void __cdecl FUN_00cada40()
{
    f3m_00cada40::DAT_00f5ff30.Setting::Setting();
    atexit(f3m_00cada40::FUN_00d8cf70);
}

// @f3 0x00cb8530 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8530 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f614cc;
void __cdecl FUN_00d8ebe0();
}

void __cdecl FUN_00cb8530()
{
    f3m_00cb8530::DAT_00f614cc.Setting::Setting();
    atexit(f3m_00cb8530::FUN_00d8ebe0);
}

// @f3 0x00cbf790 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbf790 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62318;
void __cdecl FUN_00d8fef0();
}

void __cdecl FUN_00cbf790()
{
    f3m_00cbf790::DAT_00f62318.Setting::Setting();
    atexit(f3m_00cbf790::FUN_00d8fef0);
}

// @f3 0x00ca87c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca87c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f4e0;
void __cdecl FUN_00d8c1b0();
}

void __cdecl FUN_00ca87c0()
{
    f3m_00ca87c0::DAT_00f5f4e0.Setting::Setting();
    atexit(f3m_00ca87c0::FUN_00d8c1b0);
}

// @f3 0x00cb15e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb15e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f606a4;
void __cdecl FUN_00d8d960();
}

void __cdecl FUN_00cb15e0()
{
    f3m_00cb15e0::DAT_00f606a4.Setting::Setting();
    atexit(f3m_00cb15e0::FUN_00d8d960);
}

// @f3 0x00cbe1d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbe1d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62060;
void __cdecl FUN_00d8fb50();
}

void __cdecl FUN_00cbe1d0()
{
    f3m_00cbe1d0::DAT_00f62060.Setting::Setting();
    atexit(f3m_00cbe1d0::FUN_00d8fb50);
}

// @f3 0x00cb4a60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4a60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60d34;
void __cdecl FUN_00d8e220();
}

void __cdecl FUN_00cb4a60()
{
    f3m_00cb4a60::DAT_00f60d34.Setting::Setting();
    atexit(f3m_00cb4a60::FUN_00d8e220);
}

// @f3 0x00cba0f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cba0f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61844;
void __cdecl FUN_00d8f080();
}

void __cdecl FUN_00cba0f0()
{
    f3m_00cba0f0::DAT_00f61844.Setting::Setting();
    atexit(f3m_00cba0f0::FUN_00d8f080);
}

// @f3 0x00caa020 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa020 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f7ec;
void __cdecl FUN_00d8c5c0();
}

void __cdecl FUN_00caa020()
{
    f3m_00caa020::DAT_00f5f7ec.Setting::Setting();
    atexit(f3m_00caa020::FUN_00d8c5c0);
}

// @f3 0x00cb9af0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9af0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61784;
void __cdecl FUN_00d8ef80();
}

void __cdecl FUN_00cb9af0()
{
    f3m_00cb9af0::DAT_00f61784.Setting::Setting();
    atexit(f3m_00cb9af0::FUN_00d8ef80);
}

// @f3 0x00cba570 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cba570 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f618d4;
void __cdecl FUN_00d8f140();
}

void __cdecl FUN_00cba570()
{
    f3m_00cba570::DAT_00f618d4.Setting::Setting();
    atexit(f3m_00cba570::FUN_00d8f140);
}

// @f3 0x00caaaa0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caaaa0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f93c;
void __cdecl FUN_00d8c780();
}

void __cdecl FUN_00caaaa0()
{
    f3m_00caaaa0::DAT_00f5f93c.Setting::Setting();
    atexit(f3m_00caaaa0::FUN_00d8c780);
}

// @f3 0x00cbd390 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd390 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61e98;
void __cdecl FUN_00d8f8f0();
}

void __cdecl FUN_00cbd390()
{
    f3m_00cbd390::DAT_00f61e98.Setting::Setting();
    atexit(f3m_00cbd390::FUN_00d8f8f0);
}

// @f3 0x00caf960 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf960 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60314;
void __cdecl FUN_00d8d4a0();
}

void __cdecl FUN_00caf960()
{
    f3m_00caf960::DAT_00f60314.Setting::Setting();
    atexit(f3m_00caf960::FUN_00d8d4a0);
}

// @f3 0x00cb9eb0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9eb0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f617fc;
void __cdecl FUN_00d8f020();
}

void __cdecl FUN_00cb9eb0()
{
    f3m_00cb9eb0::DAT_00f617fc.Setting::Setting();
    atexit(f3m_00cb9eb0::FUN_00d8f020);
}

// @f3 0x00caf120 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf120 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6020c;
void __cdecl FUN_00d8d340();
}

void __cdecl FUN_00caf120()
{
    f3m_00caf120::DAT_00f6020c.Setting::Setting();
    atexit(f3m_00caf120::FUN_00d8d340);
}

// @f3 0x00cae760 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cae760 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f600d4;
void __cdecl FUN_00d8d1a0();
}

void __cdecl FUN_00cae760()
{
    f3m_00cae760::DAT_00f600d4.Setting::Setting();
    atexit(f3m_00cae760::FUN_00d8d1a0);
}

// @f3 0x00cb27e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb27e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f608e4;
void __cdecl FUN_00d8dc60();
}

void __cdecl FUN_00cb27e0()
{
    f3m_00cb27e0::DAT_00f608e4.Setting::Setting();
    atexit(f3m_00cb27e0::FUN_00d8dc60);
}

// @f3 0x00ca9600 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9600 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f6a8;
void __cdecl FUN_00d8c410();
}

void __cdecl FUN_00ca9600()
{
    f3m_00ca9600::DAT_00f5f6a8.Setting::Setting();
    atexit(f3m_00ca9600::FUN_00d8c410);
}

// @f3 0x00ca24f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca24f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e79c;
void __cdecl FUN_00d8b180();
}

void __cdecl FUN_00ca24f0()
{
    f3m_00ca24f0::DAT_00f5e79c.Setting::Setting();
    atexit(f3m_00ca24f0::FUN_00d8b180);
}

// @f3 0x00cb6a90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6a90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61178;
void __cdecl FUN_00d8e770();
}

void __cdecl FUN_00cb6a90()
{
    f3m_00cb6a90::DAT_00f61178.Setting::Setting();
    atexit(f3m_00cb6a90::FUN_00d8e770);
}

// @f3 0x00cbabd0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbabd0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f619a0;
void __cdecl FUN_00d8f250();
}

void __cdecl FUN_00cbabd0()
{
    f3m_00cbabd0::DAT_00f619a0.Setting::Setting();
    atexit(f3m_00cbabd0::FUN_00d8f250);
}

// @f3 0x00cb1400 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb1400 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60668;
void __cdecl FUN_00d8d910();
}

void __cdecl FUN_00cb1400()
{
    f3m_00cb1400::DAT_00f60668.Setting::Setting();
    atexit(f3m_00cb1400::FUN_00d8d910);
}

// @f3 0x00cbdff0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbdff0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62024;
void __cdecl FUN_00d8fb00();
}

void __cdecl FUN_00cbdff0()
{
    f3m_00cbdff0::DAT_00f62024.Setting::Setting();
    atexit(f3m_00cbdff0::FUN_00d8fb00);
}

// @f3 0x00cbccd0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbccd0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61dc0;
void __cdecl FUN_00d8f7d0();
}

void __cdecl FUN_00cbccd0()
{
    f3m_00cbccd0::DAT_00f61dc0.Setting::Setting();
    atexit(f3m_00cbccd0::FUN_00d8f7d0);
}

// @f3 0x00ca3ab0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3ab0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ea54;
void __cdecl FUN_00d8b520();
}

void __cdecl FUN_00ca3ab0()
{
    f3m_00ca3ab0::DAT_00f5ea54.Setting::Setting();
    atexit(f3m_00ca3ab0::FUN_00d8b520);
}

// @f3 0x00cb6f70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6f70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61214;
void __cdecl FUN_00d8e840();
}

void __cdecl FUN_00cb6f70()
{
    f3m_00cb6f70::DAT_00f61214.Setting::Setting();
    atexit(f3m_00cb6f70::FUN_00d8e840);
}

// @f3 0x00cb8d70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8d70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f615d4;
void __cdecl FUN_00d8ed40();
}

void __cdecl FUN_00cb8d70()
{
    f3m_00cb8d70::DAT_00f615d4.Setting::Setting();
    atexit(f3m_00cb8d70::FUN_00d8ed40);
}

// @f3 0x00ca2310 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2310 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e760;
void __cdecl FUN_00d8b130();
}

void __cdecl FUN_00ca2310()
{
    f3m_00ca2310::DAT_00f5e760.Setting::Setting();
    atexit(f3m_00ca2310::FUN_00d8b130);
}

// @f3 0x00cb2780 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2780 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f608d8;
void __cdecl FUN_00d8dc50();
}

void __cdecl FUN_00cb2780()
{
    f3m_00cb2780::DAT_00f608d8.Setting::Setting();
    atexit(f3m_00cb2780::FUN_00d8dc50);
}

// @f3 0x00ca8460 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8460 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f474;
void __cdecl FUN_00d8c120();
}

void __cdecl FUN_00ca8460()
{
    f3m_00ca8460::DAT_00f5f474.Setting::Setting();
    atexit(f3m_00ca8460::FUN_00d8c120);
}

// @f3 0x00cad0e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cad0e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fe04;
void __cdecl FUN_00d8cde0();
}

void __cdecl FUN_00cad0e0()
{
    f3m_00cad0e0::DAT_00f5fe04.Setting::Setting();
    atexit(f3m_00cad0e0::FUN_00d8cde0);
}

// @f3 0x00cbd5d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd5d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61ee0;
void __cdecl FUN_00d8f950();
}

void __cdecl FUN_00cbd5d0()
{
    f3m_00cbd5d0::DAT_00f61ee0.Setting::Setting();
    atexit(f3m_00cbd5d0::FUN_00d8f950);
}

// @f3 0x00ca1050 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca1050 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e508;
void __cdecl FUN_00d8ae10();
}

void __cdecl FUN_00ca1050()
{
    f3m_00ca1050::DAT_00f5e508.Setting::Setting();
    atexit(f3m_00ca1050::FUN_00d8ae10);
}

// @f3 0x00caff00 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caff00 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f603c8;
void __cdecl FUN_00d8d590();
}

void __cdecl FUN_00caff00()
{
    f3m_00caff00::DAT_00f603c8.Setting::Setting();
    atexit(f3m_00caff00::FUN_00d8d590);
}

// @f3 0x00ca3b10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3b10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ea60;
void __cdecl FUN_00d8b530();
}

void __cdecl FUN_00ca3b10()
{
    f3m_00ca3b10::DAT_00f5ea60.Setting::Setting();
    atexit(f3m_00ca3b10::FUN_00d8b530);
}

// @f3 0x00cb6430 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6430 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f610ac;
void __cdecl FUN_00d8e660();
}

void __cdecl FUN_00cb6430()
{
    f3m_00cb6430::DAT_00f610ac.Setting::Setting();
    atexit(f3m_00cb6430::FUN_00d8e660);
}

// @f3 0x00cb0560 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0560 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60494;
void __cdecl FUN_00d8d6a0();
}

void __cdecl FUN_00cb0560()
{
    f3m_00cb0560::DAT_00f60494.Setting::Setting();
    atexit(f3m_00cb0560::FUN_00d8d6a0);
}

// @f3 0x00cadec0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cadec0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ffc0;
void __cdecl FUN_00d8d030();
}

void __cdecl FUN_00cadec0()
{
    f3m_00cadec0::DAT_00f5ffc0.Setting::Setting();
    atexit(f3m_00cadec0::FUN_00d8d030);
}

// @f3 0x00ca64b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca64b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5efd4;
void __cdecl FUN_00d8bc20();
}

void __cdecl FUN_00ca64b0()
{
    f3m_00ca64b0::DAT_00f5efd4.Setting::Setting();
    atexit(f3m_00ca64b0::FUN_00d8bc20);
}

// @f3 0x00cbf9d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbf9d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62360;
void __cdecl FUN_00d8ff50();
}

void __cdecl FUN_00cbf9d0()
{
    f3m_00cbf9d0::DAT_00f62360.Setting::Setting();
    atexit(f3m_00cbf9d0::FUN_00d8ff50);
}

// @f3 0x00ca6930 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6930 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f064;
void __cdecl FUN_00d8bce0();
}

void __cdecl FUN_00ca6930()
{
    f3m_00ca6930::DAT_00f5f064.Setting::Setting();
    atexit(f3m_00ca6930::FUN_00d8bce0);
}

// @f3 0x00ca62d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca62d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ef98;
void __cdecl FUN_00d8bbd0();
}

void __cdecl FUN_00ca62d0()
{
    f3m_00ca62d0::DAT_00f5ef98.Setting::Setting();
    atexit(f3m_00ca62d0::FUN_00d8bbd0);
}

// @f3 0x00cab1c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cab1c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fa20;
void __cdecl FUN_00d8c8b0();
}

void __cdecl FUN_00cab1c0()
{
    f3m_00cab1c0::DAT_00f5fa20.Setting::Setting();
    atexit(f3m_00cab1c0::FUN_00d8c8b0);
}

// @f3 0x00cb6d30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6d30 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f611cc;
void __cdecl FUN_00d8e7e0();
}

void __cdecl FUN_00cb6d30()
{
    f3m_00cb6d30::DAT_00f611cc.Setting::Setting();
    atexit(f3m_00cb6d30::FUN_00d8e7e0);
}

// @f3 0x00caa140 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa140 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f810;
void __cdecl FUN_00d8c5f0();
}

void __cdecl FUN_00caa140()
{
    f3m_00caa140::DAT_00f5f810.Setting::Setting();
    atexit(f3m_00caa140::FUN_00d8c5f0);
}

// @f3 0x00cbfcd0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbfcd0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f623c0;
void __cdecl FUN_00d8ffd0();
}

void __cdecl FUN_00cbfcd0()
{
    f3m_00cbfcd0::DAT_00f623c0.Setting::Setting();
    atexit(f3m_00cbfcd0::FUN_00d8ffd0);
}

// @f3 0x00cb70f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb70f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61244;
void __cdecl FUN_00d8e880();
}

void __cdecl FUN_00cb70f0()
{
    f3m_00cb70f0::DAT_00f61244.Setting::Setting();
    atexit(f3m_00cb70f0::FUN_00d8e880);
}

// @f3 0x00ca76e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca76e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f2c4;
void __cdecl FUN_00d8bee0();
}

void __cdecl FUN_00ca76e0()
{
    f3m_00ca76e0::DAT_00f5f2c4.Setting::Setting();
    atexit(f3m_00ca76e0::FUN_00d8bee0);
}

// @f3 0x00cb6070 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6070 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61034;
void __cdecl FUN_00d8e5c0();
}

void __cdecl FUN_00cb6070()
{
    f3m_00cb6070::DAT_00f61034.Setting::Setting();
    atexit(f3m_00cb6070::FUN_00d8e5c0);
}

// @f3 0x00cb75d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb75d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f612e0;
void __cdecl FUN_00d8e950();
}

void __cdecl FUN_00cb75d0()
{
    f3m_00cb75d0::DAT_00f612e0.Setting::Setting();
    atexit(f3m_00cb75d0::FUN_00d8e950);
}

// @f3 0x00cb9a30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9a30 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6176c;
void __cdecl FUN_00d8ef60();
}

void __cdecl FUN_00cb9a30()
{
    f3m_00cb9a30::DAT_00f6176c.Setting::Setting();
    atexit(f3m_00cb9a30::FUN_00d8ef60);
}

// @f3 0x00cad860 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cad860 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fef4;
void __cdecl FUN_00d8cf20();
}

void __cdecl FUN_00cad860()
{
    f3m_00cad860::DAT_00f5fef4.Setting::Setting();
    atexit(f3m_00cad860::FUN_00d8cf20);
}

// @f3 0x00cad800 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cad800 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fee8;
void __cdecl FUN_00d8cf10();
}

void __cdecl FUN_00cad800()
{
    f3m_00cad800::DAT_00f5fee8.Setting::Setting();
    atexit(f3m_00cad800::FUN_00d8cf10);
}

// @f3 0x00cb8a70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8a70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61574;
void __cdecl FUN_00d8ecc0();
}

void __cdecl FUN_00cb8a70()
{
    f3m_00cb8a70::DAT_00f61574.Setting::Setting();
    atexit(f3m_00cb8a70::FUN_00d8ecc0);
}

// @f3 0x00cb2d20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2d20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6098c;
void __cdecl FUN_00d8dd40();
}

void __cdecl FUN_00cb2d20()
{
    f3m_00cb2d20::DAT_00f6098c.Setting::Setting();
    atexit(f3m_00cb2d20::FUN_00d8dd40);
}

// @f3 0x00cacd80 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cacd80 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fd98;
void __cdecl FUN_00d8cd50();
}

void __cdecl FUN_00cacd80()
{
    f3m_00cacd80::DAT_00f5fd98.Setting::Setting();
    atexit(f3m_00cacd80::FUN_00d8cd50);
}

// @f3 0x00cb09e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb09e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60524;
void __cdecl FUN_00d8d760();
}

void __cdecl FUN_00cb09e0()
{
    f3m_00cb09e0::DAT_00f60524.Setting::Setting();
    atexit(f3m_00cb09e0::FUN_00d8d760);
}

// @f3 0x00ca5430 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca5430 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ed84;
void __cdecl FUN_00d8b960();
}

void __cdecl FUN_00ca5430()
{
    f3m_00ca5430::DAT_00f5ed84.Setting::Setting();
    atexit(f3m_00ca5430::FUN_00d8b960);
}

// @f3 0x00ca9b40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9b40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f750;
void __cdecl FUN_00d8c4f0();
}

void __cdecl FUN_00ca9b40()
{
    f3m_00ca9b40::DAT_00f5f750.Setting::Setting();
    atexit(f3m_00ca9b40::FUN_00d8c4f0);
}

// @f3 0x00cb4520 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4520 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60c8c;
void __cdecl FUN_00d8e140();
}

void __cdecl FUN_00cb4520()
{
    f3m_00cb4520::DAT_00f60c8c.Setting::Setting();
    atexit(f3m_00cb4520::FUN_00d8e140);
}

// @f3 0x00cb4280 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4280 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60c38;
void __cdecl FUN_00d8e0d0();
}

void __cdecl FUN_00cb4280()
{
    f3m_00cb4280::DAT_00f60c38.Setting::Setting();
    atexit(f3m_00cb4280::FUN_00d8e0d0);
}

// @f3 0x00cb68b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb68b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6113c;
void __cdecl FUN_00d8e720();
}

void __cdecl FUN_00cb68b0()
{
    f3m_00cb68b0::DAT_00f6113c.Setting::Setting();
    atexit(f3m_00cb68b0::FUN_00d8e720);
}

// @f3 0x00ca1ad0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca1ad0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e658;
void __cdecl FUN_00d8afd0();
}

void __cdecl FUN_00ca1ad0()
{
    f3m_00ca1ad0::DAT_00f5e658.Setting::Setting();
    atexit(f3m_00ca1ad0::FUN_00d8afd0);
}

// @f3 0x00ca8e80 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8e80 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f5b8;
void __cdecl FUN_00d8c2d0();
}

void __cdecl FUN_00ca8e80()
{
    f3m_00ca8e80::DAT_00f5f5b8.Setting::Setting();
    atexit(f3m_00ca8e80::FUN_00d8c2d0);
}

// @f3 0x00cbab10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbab10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61988;
void __cdecl FUN_00d8f230();
}

void __cdecl FUN_00cbab10()
{
    f3m_00cbab10::DAT_00f61988.Setting::Setting();
    atexit(f3m_00cbab10::FUN_00d8f230);
}

// @f3 0x00ca3210 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca3210 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e940;
void __cdecl FUN_00d8b3b0();
}

void __cdecl FUN_00ca3210()
{
    f3m_00ca3210::DAT_00f5e940.Setting::Setting();
    atexit(f3m_00ca3210::FUN_00d8b3b0);
}

// @f3 0x00ca8ac0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8ac0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f540;
void __cdecl FUN_00d8c230();
}

void __cdecl FUN_00ca8ac0()
{
    f3m_00ca8ac0::DAT_00f5f540.Setting::Setting();
    atexit(f3m_00ca8ac0::FUN_00d8c230);
}

// @f3 0x00cbe710 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbe710 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62108;
void __cdecl FUN_00d8fc30();
}

void __cdecl FUN_00cbe710()
{
    f3m_00cbe710::DAT_00f62108.Setting::Setting();
    atexit(f3m_00cbe710::FUN_00d8fc30);
}

// @f3 0x00ca7290 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7290 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f190;
void __cdecl FUN_00d8be70();
}

void __cdecl FUN_00ca7290()
{
    f3m_00ca7290::DAT_00f5f190.Setting::Setting();
    atexit(f3m_00ca7290::FUN_00d8be70);
}

// @f3 0x00cb57e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb57e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60ee4;
void __cdecl FUN_00d8e460();
}

void __cdecl FUN_00cb57e0()
{
    f3m_00cb57e0::DAT_00f60ee4.Setting::Setting();
    atexit(f3m_00cb57e0::FUN_00d8e460);
}

// @f3 0x00ca47d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca47d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ebf8;
void __cdecl FUN_00d8b750();
}

void __cdecl FUN_00ca47d0()
{
    f3m_00ca47d0::DAT_00f5ebf8.Setting::Setting();
    atexit(f3m_00ca47d0::FUN_00d8b750);
}

// @f3 0x00ca4dd0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca4dd0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ecb8;
void __cdecl FUN_00d8b850();
}

void __cdecl FUN_00ca4dd0()
{
    f3m_00ca4dd0::DAT_00f5ecb8.Setting::Setting();
    atexit(f3m_00ca4dd0::FUN_00d8b850);
}

// @f3 0x00cab940 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cab940 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fb10;
void __cdecl FUN_00d8c9f0();
}

void __cdecl FUN_00cab940()
{
    f3m_00cab940::DAT_00f5fb10.Setting::Setting();
    atexit(f3m_00cab940::FUN_00d8c9f0);
}

// @f3 0x00ca8880 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8880 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f4f8;
void __cdecl FUN_00d8c1d0();
}

void __cdecl FUN_00ca8880()
{
    f3m_00ca8880::DAT_00f5f4f8.Setting::Setting();
    atexit(f3m_00ca8880::FUN_00d8c1d0);
}

// @f3 0x00cad080 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cad080 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fdf8;
void __cdecl FUN_00d8cdd0();
}

void __cdecl FUN_00cad080()
{
    f3m_00cad080::DAT_00f5fdf8.Setting::Setting();
    atexit(f3m_00cad080::FUN_00d8cdd0);
}

// @f3 0x00cb7e10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7e10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f613e8;
void __cdecl FUN_00d8eab0();
}

void __cdecl FUN_00cb7e10()
{
    f3m_00cb7e10::DAT_00f613e8.Setting::Setting();
    atexit(f3m_00cb7e10::FUN_00d8eab0);
}

// @f3 0x00cb6bb0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6bb0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6119c;
void __cdecl FUN_00d8e7a0();
}

void __cdecl FUN_00cb6bb0()
{
    f3m_00cb6bb0::DAT_00f6119c.Setting::Setting();
    atexit(f3m_00cb6bb0::FUN_00d8e7a0);
}

// @f3 0x00cb3020 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3020 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f609ec;
void __cdecl FUN_00d8ddc0();
}

void __cdecl FUN_00cb3020()
{
    f3m_00cb3020::DAT_00f609ec.Setting::Setting();
    atexit(f3m_00cb3020::FUN_00d8ddc0);
}

// @f3 0x00cb0aa0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0aa0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6053c;
void __cdecl FUN_00d8d780();
}

void __cdecl FUN_00cb0aa0()
{
    f3m_00cb0aa0::DAT_00f6053c.Setting::Setting();
    atexit(f3m_00cb0aa0::FUN_00d8d780);
}

// @f3 0x00ca5eb0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca5eb0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5eed4;
void __cdecl FUN_00d8bb20();
}

void __cdecl FUN_00ca5eb0()
{
    f3m_00ca5eb0::DAT_00f5eed4.Setting::Setting();
    atexit(f3m_00ca5eb0::FUN_00d8bb20);
}

// @f3 0x00cbc2b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbc2b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61c7c;
void __cdecl FUN_00d8f620();
}

void __cdecl FUN_00cbc2b0()
{
    f3m_00cbc2b0::DAT_00f61c7c.Setting::Setting();
    atexit(f3m_00cbc2b0::FUN_00d8f620);
}

// @f3 0x00ca55b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca55b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5edb4;
void __cdecl FUN_00d8b9a0();
}

void __cdecl FUN_00ca55b0()
{
    f3m_00ca55b0::DAT_00f5edb4.Setting::Setting();
    atexit(f3m_00ca55b0::FUN_00d8b9a0);
}

// @f3 0x00cae700 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cae700 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f600c8;
void __cdecl FUN_00d8d190();
}

void __cdecl FUN_00cae700()
{
    f3m_00cae700::DAT_00f600c8.Setting::Setting();
    atexit(f3m_00cae700::FUN_00d8d190);
}

// @f3 0x00ca7980 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7980 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f318;
void __cdecl FUN_00d8bf50();
}

void __cdecl FUN_00ca7980()
{
    f3m_00ca7980::DAT_00f5f318.Setting::Setting();
    atexit(f3m_00ca7980::FUN_00d8bf50);
}

// @f3 0x00cb0200 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0200 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60428;
void __cdecl FUN_00d8d610();
}

void __cdecl FUN_00cb0200()
{
    f3m_00cb0200::DAT_00f60428.Setting::Setting();
    atexit(f3m_00cb0200::FUN_00d8d610);
}

// @f3 0x00ca6b10 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6b10 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f0a0;
void __cdecl FUN_00d8bd30();
}

void __cdecl FUN_00ca6b10()
{
    f3m_00ca6b10::DAT_00f5f0a0.Setting::Setting();
    atexit(f3m_00ca6b10::FUN_00d8bd30);
}

// @f3 0x00cb9b50 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9b50 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61790;
void __cdecl FUN_00d8ef90();
}

void __cdecl FUN_00cb9b50()
{
    f3m_00cb9b50::DAT_00f61790.Setting::Setting();
    atexit(f3m_00cb9b50::FUN_00d8ef90);
}

// @f3 0x00cbf550 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbf550 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f622d0;
void __cdecl FUN_00d8fe90();
}

void __cdecl FUN_00cbf550()
{
    f3m_00cbf550::DAT_00f622d0.Setting::Setting();
    atexit(f3m_00cbf550::FUN_00d8fe90);
}

// @f3 0x00cb5a80 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb5a80 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60f38;
void __cdecl FUN_00d8e4d0();
}

void __cdecl FUN_00cb5a80()
{
    f3m_00cb5a80::DAT_00f60f38.Setting::Setting();
    atexit(f3m_00cb5a80::FUN_00d8e4d0);
}

// @f3 0x00cb6a30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6a30 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6116c;
void __cdecl FUN_00d8e760();
}

void __cdecl FUN_00cb6a30()
{
    f3m_00cb6a30::DAT_00f6116c.Setting::Setting();
    atexit(f3m_00cb6a30::FUN_00d8e760);
}

// @f3 0x00cadb60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cadb60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ff54;
void __cdecl FUN_00d8cfa0();
}

void __cdecl FUN_00cadb60()
{
    f3m_00cadb60::DAT_00f5ff54.Setting::Setting();
    atexit(f3m_00cadb60::FUN_00d8cfa0);
}

// @f3 0x00ca8280 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8280 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f438;
void __cdecl FUN_00d8c0d0();
}

void __cdecl FUN_00ca8280()
{
    f3m_00ca8280::DAT_00f5f438.Setting::Setting();
    atexit(f3m_00ca8280::FUN_00d8c0d0);
}

// @f3 0x00caf900 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf900 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60308;
void __cdecl FUN_00d8d490();
}

void __cdecl FUN_00caf900()
{
    f3m_00caf900::DAT_00f60308.Setting::Setting();
    atexit(f3m_00caf900::FUN_00d8d490);
}

// @f3 0x00cb9490 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9490 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f616b8;
void __cdecl FUN_00d8ee70();
}

void __cdecl FUN_00cb9490()
{
    f3m_00cb9490::DAT_00f616b8.Setting::Setting();
    atexit(f3m_00cb9490::FUN_00d8ee70);
}

// @f3 0x00cb8dd0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb8dd0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f615e0;
void __cdecl FUN_00d8ed50();
}

void __cdecl FUN_00cb8dd0()
{
    f3m_00cb8dd0::DAT_00f615e0.Setting::Setting();
    atexit(f3m_00cb8dd0::FUN_00d8ed50);
}

// @f3 0x00ca6ff0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6ff0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f13c;
void __cdecl FUN_00d8be00();
}

void __cdecl FUN_00ca6ff0()
{
    f3m_00ca6ff0::DAT_00f5f13c.Setting::Setting();
    atexit(f3m_00ca6ff0::FUN_00d8be00);
}

// @f3 0x00ca2fd0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2fd0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e8f8;
void __cdecl FUN_00d8b350();
}

void __cdecl FUN_00ca2fd0()
{
    f3m_00ca2fd0::DAT_00f5e8f8.Setting::Setting();
    atexit(f3m_00ca2fd0::FUN_00d8b350);
}

// @f3 0x00ca2a90 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2a90 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e850;
void __cdecl FUN_00d8b270();
}

void __cdecl FUN_00ca2a90()
{
    f3m_00ca2a90::DAT_00f5e850.Setting::Setting();
    atexit(f3m_00ca2a90::FUN_00d8b270);
}

// @f3 0x00ca9480 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca9480 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f678;
void __cdecl FUN_00d8c3d0();
}

void __cdecl FUN_00ca9480()
{
    f3m_00ca9480::DAT_00f5f678.Setting::Setting();
    atexit(f3m_00ca9480::FUN_00d8c3d0);
}

// @f3 0x00cbded0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbded0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f62000;
void __cdecl FUN_00d8fad0();
}

void __cdecl FUN_00cbded0()
{
    f3m_00cbded0::DAT_00f62000.Setting::Setting();
    atexit(f3m_00cbded0::FUN_00d8fad0);
}

// @f3 0x00ca38d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca38d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ea18;
void __cdecl FUN_00d8b4d0();
}

void __cdecl FUN_00ca38d0()
{
    f3m_00ca38d0::DAT_00f5ea18.Setting::Setting();
    atexit(f3m_00ca38d0::FUN_00d8b4d0);
}

// @f3 0x00cadf80 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cadf80 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ffd8;
void __cdecl FUN_00d8d050();
}

void __cdecl FUN_00cadf80()
{
    f3m_00cadf80::DAT_00f5ffd8.Setting::Setting();
    atexit(f3m_00cadf80::FUN_00d8d050);
}

// @f3 0x00ca4d70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca4d70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ecac;
void __cdecl FUN_00d8b840();
}

void __cdecl FUN_00ca4d70()
{
    f3m_00ca4d70::DAT_00f5ecac.Setting::Setting();
    atexit(f3m_00ca4d70::FUN_00d8b840);
}

// @f3 0x00ca14d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca14d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e598;
void __cdecl FUN_00d8aed0();
}

void __cdecl FUN_00ca14d0()
{
    f3m_00ca14d0::DAT_00f5e598.Setting::Setting();
    atexit(f3m_00ca14d0::FUN_00d8aed0);
}

// @f3 0x00ca56d0 (community match, verified in this file)
namespace f3m_00ca56d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5edd8;
void __cdecl FUN_00d8b9d0();

void __cdecl FUN_00ca56d0()
{
    DAT_00f5edd8.Setting::Setting();
    atexit(FUN_00d8b9d0);
}
}   // namespace f3m_00ca56d0

// @f3 0x00ca6ed0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6ed0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f118;
void __cdecl FUN_00d8bdd0();
}

void __cdecl FUN_00ca6ed0()
{
    f3m_00ca6ed0::DAT_00f5f118.Setting::Setting();
    atexit(f3m_00ca6ed0::FUN_00d8bdd0);
}

// @f3 0x00cb5ae0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb5ae0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60f44;
void __cdecl FUN_00d8e4e0();
}

void __cdecl FUN_00cb5ae0()
{
    f3m_00cb5ae0::DAT_00f60f44.Setting::Setting();
    atexit(f3m_00cb5ae0::FUN_00d8e4e0);
}

// @f3 0x00cbca30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbca30 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61d6c;
void __cdecl FUN_00d8f760();
}

void __cdecl FUN_00cbca30()
{
    f3m_00cbca30::DAT_00f61d6c.Setting::Setting();
    atexit(f3m_00cbca30::FUN_00d8f760);
}

// @f3 0x00cb2c00 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2c00 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60968;
void __cdecl FUN_00d8dd10();
}

void __cdecl FUN_00cb2c00()
{
    f3m_00cb2c00::DAT_00f60968.Setting::Setting();
    atexit(f3m_00cb2c00::FUN_00d8dd10);
}

// @f3 0x00cbd210 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd210 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61e68;
void __cdecl FUN_00d8f8b0();
}

void __cdecl FUN_00cbd210()
{
    f3m_00cbd210::DAT_00f61e68.Setting::Setting();
    atexit(f3m_00cbd210::FUN_00d8f8b0);
}

// @f3 0x00cab8e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cab8e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fb04;
void __cdecl FUN_00d8c9e0();
}

void __cdecl FUN_00cab8e0()
{
    f3m_00cab8e0::DAT_00f5fb04.Setting::Setting();
    atexit(f3m_00cab8e0::FUN_00d8c9e0);
}

// @f3 0x00ca1a70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca1a70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e64c;
void __cdecl FUN_00d8afc0();
}

void __cdecl FUN_00ca1a70()
{
    f3m_00ca1a70::DAT_00f5e64c.Setting::Setting();
    atexit(f3m_00ca1a70::FUN_00d8afc0);
}

// @f3 0x00cbc5b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbc5b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61cdc;
void __cdecl FUN_00d8f6a0();
}

void __cdecl FUN_00cbc5b0()
{
    f3m_00cbc5b0::DAT_00f61cdc.Setting::Setting();
    atexit(f3m_00cbc5b0::FUN_00d8f6a0);
}

// @f3 0x00cac120 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cac120 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fc0c;
void __cdecl FUN_00d8cb40();
}

void __cdecl FUN_00cac120()
{
    f3m_00cac120::DAT_00f5fc0c.Setting::Setting();
    atexit(f3m_00cac120::FUN_00d8cb40);
}

// @f3 0x00ca6390 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca6390 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5efb0;
void __cdecl FUN_00d8bbf0();
}

void __cdecl FUN_00ca6390()
{
    f3m_00ca6390::DAT_00f5efb0.Setting::Setting();
    atexit(f3m_00ca6390::FUN_00d8bbf0);
}

// @f3 0x00ca8e20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca8e20 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f5ac;
void __cdecl FUN_00d8c2c0();
}

void __cdecl FUN_00ca8e20()
{
    f3m_00ca8e20::DAT_00f5f5ac.Setting::Setting();
    atexit(f3m_00ca8e20::FUN_00d8c2c0);
}

// @f3 0x00cb2f60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2f60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f609d4;
void __cdecl FUN_00d8dda0();
}

void __cdecl FUN_00cb2f60()
{
    f3m_00cb2f60::DAT_00f609d4.Setting::Setting();
    atexit(f3m_00cb2f60::FUN_00d8dda0);
}

// @f3 0x00ca7560 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7560 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f294;
void __cdecl FUN_00d8bea0();
}

void __cdecl FUN_00ca7560()
{
    f3m_00ca7560::DAT_00f5f294.Setting::Setting();
    atexit(f3m_00ca7560::FUN_00d8bea0);
}

// @f3 0x00ca45f0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca45f0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ebbc;
void __cdecl FUN_00d8b700();
}

void __cdecl FUN_00ca45f0()
{
    f3m_00ca45f0::DAT_00f5ebbc.Setting::Setting();
    atexit(f3m_00ca45f0::FUN_00d8b700);
}

// @f3 0x00cb3080 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3080 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f609f8;
void __cdecl FUN_00d8ddd0();
}

void __cdecl FUN_00cb3080()
{
    f3m_00cb3080::DAT_00f609f8.Setting::Setting();
    atexit(f3m_00cb3080::FUN_00d8ddd0);
}

// @f3 0x00ca17d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca17d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e5f8;
void __cdecl FUN_00d8af50();
}

void __cdecl FUN_00ca17d0()
{
    f3m_00ca17d0::DAT_00f5e5f8.Setting::Setting();
    atexit(f3m_00ca17d0::FUN_00d8af50);
}

// @f3 0x00cb3e00 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3e00 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60ba8;
void __cdecl FUN_00d8e010();
}

void __cdecl FUN_00cb3e00()
{
    f3m_00cb3e00::DAT_00f60ba8.Setting::Setting();
    atexit(f3m_00cb3e00::FUN_00d8e010);
}

// @f3 0x00ca7740 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7740 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f2d0;
void __cdecl FUN_00d8bef0();
}

void __cdecl FUN_00ca7740()
{
    f3m_00ca7740::DAT_00f5f2d0.Setting::Setting();
    atexit(f3m_00ca7740::FUN_00d8bef0);
}

// @f3 0x00cab220 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cab220 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fa2c;
void __cdecl FUN_00d8c8c0();
}

void __cdecl FUN_00cab220()
{
    f3m_00cab220::DAT_00f5fa2c.Setting::Setting();
    atexit(f3m_00cab220::FUN_00d8c8c0);
}

// @f3 0x00cb80b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb80b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6143c;
void __cdecl FUN_00d8eb20();
}

void __cdecl FUN_00cb80b0()
{
    f3m_00cb80b0::DAT_00f6143c.Setting::Setting();
    atexit(f3m_00cb80b0::FUN_00d8eb20);
}

// @f3 0x00caf6c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf6c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f602c0;
void __cdecl FUN_00d8d430();
}

void __cdecl FUN_00caf6c0()
{
    f3m_00caf6c0::DAT_00f602c0.Setting::Setting();
    atexit(f3m_00caf6c0::FUN_00d8d430);
}

// @f3 0x00cb9e50 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb9e50 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f617f0;
void __cdecl FUN_00d8f010();
}

void __cdecl FUN_00cb9e50()
{
    f3m_00cb9e50::DAT_00f617f0.Setting::Setting();
    atexit(f3m_00cb9e50::FUN_00d8f010);
}

// @f3 0x00cbcc70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbcc70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61db4;
void __cdecl FUN_00d8f7c0();
}

void __cdecl FUN_00cbcc70()
{
    f3m_00cbcc70::DAT_00f61db4.Setting::Setting();
    atexit(f3m_00cbcc70::FUN_00d8f7c0);
}

// @f3 0x00ca90c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca90c0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f600;
void __cdecl FUN_00d8c330();
}

void __cdecl FUN_00ca90c0()
{
    f3m_00ca90c0::DAT_00f5f600.Setting::Setting();
    atexit(f3m_00ca90c0::FUN_00d8c330);
}

// @f3 0x00caf180 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf180 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60218;
void __cdecl FUN_00d8d350();
}

void __cdecl FUN_00caf180()
{
    f3m_00caf180::DAT_00f60218.Setting::Setting();
    atexit(f3m_00caf180::FUN_00d8d350);
}

// @f3 0x00cb7510 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7510 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f612c8;
void __cdecl FUN_00d8e930();
}

void __cdecl FUN_00cb7510()
{
    f3m_00cb7510::DAT_00f612c8.Setting::Setting();
    atexit(f3m_00cb7510::FUN_00d8e930);
}

// @f3 0x00cad140 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cad140 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fe10;
void __cdecl FUN_00d8cdf0();
}

void __cdecl FUN_00cad140()
{
    f3m_00cad140::DAT_00f5fe10.Setting::Setting();
    atexit(f3m_00cad140::FUN_00d8cdf0);
}

// @f3 0x00cb3140 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3140 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60a10;
void __cdecl FUN_00d8ddf0();
}

void __cdecl FUN_00cb3140()
{
    f3m_00cb3140::DAT_00f60a10.Setting::Setting();
    atexit(f3m_00cb3140::FUN_00d8ddf0);
}

// @f3 0x00cbd510 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbd510 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61ec8;
void __cdecl FUN_00d8f930();
}

void __cdecl FUN_00cbd510()
{
    f3m_00cbd510::DAT_00f61ec8.Setting::Setting();
    atexit(f3m_00cbd510::FUN_00d8f930);
}

// @f3 0x00cb0920 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0920 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6050c;
void __cdecl FUN_00d8d740();
}

void __cdecl FUN_00cb0920()
{
    f3m_00cb0920::DAT_00f6050c.Setting::Setting();
    atexit(f3m_00cb0920::FUN_00d8d740);
}

// @f3 0x00caa680 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa680 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f8b8;
void __cdecl FUN_00d8c6d0();
}

void __cdecl FUN_00caa680()
{
    f3m_00caa680::DAT_00f5f8b8.Setting::Setting();
    atexit(f3m_00caa680::FUN_00d8c6d0);
}

// @f3 0x00caba60 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caba60 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fb34;
void __cdecl FUN_00d8ca20();
}

void __cdecl FUN_00caba60()
{
    f3m_00caba60::DAT_00f5fb34.Setting::Setting();
    atexit(f3m_00caba60::FUN_00d8ca20);
}

// @f3 0x00caf360 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf360 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60254;
void __cdecl FUN_00d8d3a0();
}

void __cdecl FUN_00caf360()
{
    f3m_00caf360::DAT_00f60254.Setting::Setting();
    atexit(f3m_00caf360::FUN_00d8d3a0);
}

// @f3 0x00cafcc0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cafcc0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60380;
void __cdecl FUN_00d8d530();
}

void __cdecl FUN_00cafcc0()
{
    f3m_00cafcc0::DAT_00f60380.Setting::Setting();
    atexit(f3m_00cafcc0::FUN_00d8d530);
}

// @f3 0x00ca2190 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca2190 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e730;
void __cdecl FUN_00d8b0f0();
}

void __cdecl FUN_00ca2190()
{
    f3m_00ca2190::DAT_00f5e730.Setting::Setting();
    atexit(f3m_00ca2190::FUN_00d8b0f0);
}

// @f3 0x00ca4890 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca4890 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ec10;
void __cdecl FUN_00d8b770();
}

void __cdecl FUN_00ca4890()
{
    f3m_00ca4890::DAT_00f5ec10.Setting::Setting();
    atexit(f3m_00ca4890::FUN_00d8b770);
}

// @f3 0x00cb01a0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb01a0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6041c;
void __cdecl FUN_00d8d600();
}

void __cdecl FUN_00cb01a0()
{
    f3m_00cb01a0::DAT_00f6041c.Setting::Setting();
    atexit(f3m_00cb01a0::FUN_00d8d600);
}

// @f3 0x00cb0bc0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0bc0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60560;
void __cdecl FUN_00d8d7b0();
}

void __cdecl FUN_00cb0bc0()
{
    f3m_00cb0bc0::DAT_00f60560.Setting::Setting();
    atexit(f3m_00cb0bc0::FUN_00d8d7b0);
}

// @f3 0x00ca5370 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca5370 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ed6c;
void __cdecl FUN_00d8b940();
}

void __cdecl FUN_00ca5370()
{
    f3m_00ca5370::DAT_00f5ed6c.Setting::Setting();
    atexit(f3m_00ca5370::FUN_00d8b940);
}

// @f3 0x00cb6cd0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb6cd0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f611c0;
void __cdecl FUN_00d8e7d0();
}

void __cdecl FUN_00cb6cd0()
{
    f3m_00cb6cd0::DAT_00f611c0.Setting::Setting();
    atexit(f3m_00cb6cd0::FUN_00d8e7d0);
}

// @f3 0x00cb7c30 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb7c30 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f613ac;
void __cdecl FUN_00d8ea60();
}

void __cdecl FUN_00cb7c30()
{
    f3m_00cb7c30::DAT_00f613ac.Setting::Setting();
    atexit(f3m_00cb7c30::FUN_00d8ea60);
}

// @f3 0x00cae280 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cae280 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60038;
void __cdecl FUN_00d8d0d0();
}

void __cdecl FUN_00cae280()
{
    f3m_00cae280::DAT_00f60038.Setting::Setting();
    atexit(f3m_00cae280::FUN_00d8d0d0);
}

// @f3 0x00ca59d0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca59d0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5ee38;
void __cdecl FUN_00d8ba50();
}

void __cdecl FUN_00ca59d0()
{
    f3m_00ca59d0::DAT_00f5ee38.Setting::Setting();
    atexit(f3m_00ca59d0::FUN_00d8ba50);
}

// @f3 0x00cb8050 (community match, verified in this file)
namespace f3m_00cb8050 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61430;
void __cdecl FUN_00d8eb10();

void __cdecl FUN_00cb8050()
{
    DAT_00f61430.Setting::Setting();
    atexit(FUN_00d8eb10);
}
}   // namespace f3m_00cb8050

// @f3 0x00cb2de0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2de0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f609a4;
void __cdecl FUN_00d8dd60();
}

void __cdecl FUN_00cb2de0()
{
    f3m_00cb2de0::DAT_00f609a4.Setting::Setting();
    atexit(f3m_00cb2de0::FUN_00d8dd60);
}

// @f3 0x00ca97e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca97e0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f6e4;
void __cdecl FUN_00d8c460();
}

void __cdecl FUN_00ca97e0()
{
    f3m_00ca97e0::DAT_00f5f6e4.Setting::Setting();
    atexit(f3m_00ca97e0::FUN_00d8c460);
}

// @f3 0x00caa860 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caa860 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5f8f4;
void __cdecl FUN_00d8c720();
}

void __cdecl FUN_00caa860()
{
    f3m_00caa860::DAT_00f5f8f4.Setting::Setting();
    atexit(f3m_00caa860::FUN_00d8c720);
}

// @f3 0x00cbaab0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbaab0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6197c;
void __cdecl FUN_00d8f220();
}

void __cdecl FUN_00cbaab0()
{
    f3m_00cbaab0::DAT_00f6197c.Setting::Setting();
    atexit(f3m_00cbaab0::FUN_00d8f220);
}

// @f3 0x00ca7f20 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca7f20 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f3cc;
void __cdecl FUN_00d8c040();

void __cdecl FUN_00ca7f20()
{
    DAT_00f5f3cc.Setting::Setting();
    atexit(FUN_00d8c040);
}
}

// @f3 0x00cbe6b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbe6b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f620fc;
void __cdecl FUN_00d8fc20();

void __cdecl FUN_00cbe6b0()
{
    DAT_00f620fc.Setting::Setting();
    atexit(FUN_00d8fc20);
}
}

// @f3 0x00ca98a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca98a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f6fc;
void __cdecl FUN_00d8c480();

void __cdecl FUN_00ca98a0()
{
    DAT_00f5f6fc.Setting::Setting();
    atexit(FUN_00d8c480);
}
}

// @f3 0x00ca1c50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1c50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e688;
void __cdecl FUN_00d8b010();

void __cdecl FUN_00ca1c50()
{
    DAT_00f5e688.Setting::Setting();
    atexit(FUN_00d8b010);
}
}

// @f3 0x00cbf070 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbf070 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f62234;
void __cdecl FUN_00403080();
void __cdecl FUN_00d8fdc0();
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}
void __cdecl FUN_00cbf070()
{
    f3m_00cbf070::DAT_00f62234.f3m_00cbf070::SettingRegistration::SettingRegistration();
    atexit(f3m_00cbf070::FUN_00d8fdc0);
}

// @f3 0x00ca99c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca99c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f720;
void __cdecl FUN_00d8c4b0();

void __cdecl FUN_00ca99c0()
{
    DAT_00f5f720.Setting::Setting();
    atexit(FUN_00d8c4b0);
}
}

// @f3 0x00cbf970 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbf970 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f62354;
void __cdecl FUN_00d8ff40();

void __cdecl FUN_00cbf970()
{
    DAT_00f62354.Setting::Setting();
    atexit(FUN_00d8ff40);
}
}

// @f3 0x00cabee0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cabee0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fbc4;
void __cdecl FUN_00d8cae0();

void __cdecl FUN_00cabee0()
{
    DAT_00f5fbc4.Setting::Setting();
    atexit(FUN_00d8cae0);
}
}

// @f3 0x00cb0c20 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb0c20 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f6056c;
void __cdecl FUN_00403080();
void __cdecl FUN_00d8d7c0();
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}
void __cdecl FUN_00cb0c20()
{
    f3m_00cb0c20::DAT_00f6056c.f3m_00cb0c20::SettingRegistration::SettingRegistration();
    atexit(f3m_00cb0c20::FUN_00d8d7c0);
}

// @f3 0x00cbaf90 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbaf90 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61a30;
void __cdecl FUN_00d8f310();

void __cdecl FUN_00cbaf90()
{
    DAT_00f61a30.Setting::Setting();
    atexit(FUN_00d8f310);
}
}

// @f3 0x00cac9c0 (community match, verified in this file)
#include <stdlib.h>
extern Setting DAT_00f5fd20;
namespace f3m_00cac9c0 {
void __cdecl FUN_00d8ccb0();

void __cdecl FUN_00cac9c0()
{
    DAT_00f5fd20.Setting::Setting();
    atexit(FUN_00d8ccb0);
}
}   // namespace f3m_00cac9c0

// @f3 0x00cbcf70 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbcf70 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61e14;
void __cdecl FUN_00d8f840();

void __cdecl FUN_00cbcf70()
{
    DAT_00f61e14.Setting::Setting();
    atexit(FUN_00d8f840);
}
}

// @f3 0x00cba270 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cba270 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61874;
void __cdecl FUN_00d8f0c0();
}
void __cdecl FUN_00cba270()
{
    f3m_00cba270::DAT_00f61874.f3m_00cba270::Setting::Setting();
    atexit(f3m_00cba270::FUN_00d8f0c0);
}

// @f3 0x00ca7b00 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca7b00 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f348;
void __cdecl FUN_00d8bf90();

void __cdecl FUN_00ca7b00()
{
    DAT_00f5f348.Setting::Setting();
    atexit(FUN_00d8bf90);
}
}

// @f3 0x00ca29d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca29d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e838;
void __cdecl FUN_00d8b250();
}
void __cdecl FUN_00ca29d0()
{
    f3m_00ca29d0::DAT_00f5e838.f3m_00ca29d0::Setting::Setting();
    atexit(f3m_00ca29d0::FUN_00d8b250);
}

// @f3 0x00cbf7f0 (community match, verified in this file)
#include <stdlib.h>
extern Setting DAT_00f62324;
namespace f3m_00cbf7f0 {
void __cdecl FUN_00d8ff00();

void __cdecl FUN_00cbf7f0()
{
    DAT_00f62324.Setting::Setting();
    atexit(FUN_00d8ff00);
}
}   // namespace f3m_00cbf7f0

// @f3 0x00ca42f0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca42f0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5eb5c;
void __cdecl FUN_00d8b680();
}
void __cdecl FUN_00ca42f0()
{
    f3m_00ca42f0::DAT_00f5eb5c.f3m_00ca42f0::Setting::Setting();
    atexit(f3m_00ca42f0::FUN_00d8b680);
}

// @f3 0x00cb3500 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb3500 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60a88;
void __cdecl FUN_00d8de90();

void __cdecl FUN_00cb3500()
{
    DAT_00f60a88.Setting::Setting();
    atexit(FUN_00d8de90);
}
}

// @f3 0x00cad7a0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cad7a0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fedc;
void __cdecl FUN_00d8cf00();

void __cdecl FUN_00cad7a0()
{
    DAT_00f5fedc.Setting::Setting();
    atexit(FUN_00d8cf00);
}
}

// @f3 0x00cb1e20 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb1e20 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f607ac;
void __cdecl FUN_00d8dac0();

void __cdecl FUN_00cb1e20()
{
    DAT_00f607ac.Setting::Setting();
    atexit(FUN_00d8dac0);
}
}

// @f3 0x00ca5970 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca5970 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5ee2c;
void __cdecl FUN_00d8ba40();

void __cdecl FUN_00ca5970()
{
    DAT_00f5ee2c.Setting::Setting();
    atexit(FUN_00d8ba40);
}
}

// @f3 0x00cb56c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb56c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60ec0;
void __cdecl FUN_00d8e430();

void __cdecl FUN_00cb56c0()
{
    DAT_00f60ec0.Setting::Setting();
    atexit(FUN_00d8e430);
}
}

// @f3 0x00cb14c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb14c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60680;
void __cdecl FUN_00d8d930();

void __cdecl FUN_00cb14c0()
{
    DAT_00f60680.Setting::Setting();
    atexit(FUN_00d8d930);
}
}

// @f3 0x00cb8f50 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb8f50 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61610;
void __cdecl FUN_00d8ed90();

void __cdecl FUN_00cb8f50()
{
    DAT_00f61610.Setting::Setting();
    atexit(FUN_00d8ed90);
}
}

// @f3 0x00cb6490 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb6490 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f610b8;
void __cdecl FUN_00d8e670();

void __cdecl FUN_00cb6490()
{
    DAT_00f610b8.Setting::Setting();
    atexit(FUN_00d8e670);
}
}

// @f3 0x00ca1950 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca1950 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e628;
void __cdecl FUN_00d8af90();

void __cdecl FUN_00ca1950()
{
    DAT_00f5e628.Setting::Setting();
    atexit(FUN_00d8af90);
}
}

// @f3 0x00ca2cd0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00ca2cd0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5e898;
void __cdecl FUN_00d8b2d0();

void __cdecl FUN_00ca2cd0()
{
    DAT_00f5e898.Setting::Setting();
    atexit(FUN_00d8b2d0);
}
}

// @f3 0x00cb8d10 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb8d10 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61528;
void __cdecl FUN_00d8ead0();

void __cdecl FUN_00cb8d10()
{
    DAT_00f61528.Setting::Setting();
    atexit(FUN_00d8ead0);
}
}

// @f3 0x00cbb1d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbb1d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61a60;
void __cdecl FUN_00d8f350();

void __cdecl FUN_00cbb1d0()
{
    DAT_00f61a60.Setting::Setting();
    atexit(FUN_00d8f350);
}
}

// @f3 0x00caf600 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caf600 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f602a8;
void __cdecl FUN_00d8d410();

void __cdecl FUN_00caf600()
{
    DAT_00f602a8.Setting::Setting();
    atexit(FUN_00d8d410);
}
}

// @f3 0x00cb3c80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb3c80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60b78;
void __cdecl FUN_00d8dfd0();

void __cdecl FUN_00cb3c80()
{
    DAT_00f60b78.Setting::Setting();
    atexit(FUN_00d8dfd0);
}
}

// @f3 0x00cbedd0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbedd0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6269c;
void __cdecl FUN_00d90390();

void __cdecl FUN_00cbedd0()
{
    DAT_00f6269c.Setting::Setting();
    atexit(FUN_00d90390);
}
}

// @f3 0x00caa9e0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caa9e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f924;
void __cdecl FUN_00d8c760();

void __cdecl FUN_00caa9e0()
{
    DAT_00f5f924.Setting::Setting();
    atexit(FUN_00d8c760);
}
}

// @f3 0x00cb9cd0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb9cd0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6269c;
void __cdecl FUN_00d90390();

void __cdecl FUN_00cb9cd0()
{
    DAT_00f6269c.Setting::Setting();
    atexit(FUN_00d90390);
}
}

// @f3 0x00cb38c0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb38c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60b00;
void __cdecl FUN_00d8df30();

void __cdecl FUN_00cb38c0()
{
    DAT_00f60b00.Setting::Setting();
    atexit(FUN_00d8df30);
}
}

// @f3 0x00cbe830 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbe830 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f6212c;
void __cdecl FUN_00d8fc60();

void __cdecl FUN_00cbe830()
{
    DAT_00f6212c.Setting::Setting();
    atexit(FUN_00d8fc60);
}
}

// @f3 0x00cab4c0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cab4c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5fa80;
void __cdecl FUN_00d8c930();

void __cdecl FUN_00cab4c0()
{
    DAT_00f5fa80.Setting::Setting();
    atexit(FUN_00d8c930);
}
}

// @f3 0x00cab820 (community match, verified in this file)
namespace f3m_00cab820 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5faec;
void __cdecl FUN_00d8c9c0();

void __cdecl FUN_00cab820()
{
    DAT_00f5faec.Setting::Setting();
    atexit(FUN_00d8c9c0);
}
}

// @f3 0x00cb3980 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb3980 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60b18;
void __cdecl FUN_00d8df50();

void __cdecl FUN_00cb3980()
{
    DAT_00f60b18.Setting::Setting();
    atexit(FUN_00d8df50);
}
}

// @f3 0x00cb60d0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cb60d0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61040;
void __cdecl FUN_00d8e5d0();

void __cdecl FUN_00cb60d0()
{
    DAT_00f61040.Setting::Setting();
    atexit(FUN_00d8e5d0);
}
}

// @f3 0x00cb5ef0 (community match, verified in this file)
namespace f3m_00cb5ef0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61004;
void __cdecl FUN_00d8e580();

void __cdecl FUN_00cb5ef0()
{
    DAT_00f61004.Setting::Setting();
    atexit(FUN_00d8e580);
}
}

// @f3 0x00cbca90 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbca90 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61d78;
void __cdecl FUN_00d8f770();

void __cdecl FUN_00cbca90()
{
    DAT_00f61d78.Setting::Setting();
    atexit(FUN_00d8f770);
}
}

// @f3 0x00cad380 (community match, verified in this file)
#include <stdlib.h>
extern Setting DAT_00f5fe58;
namespace f3m_00cad380 {


void __cdecl FUN_00c00d1f(void (__cdecl* fn)()) throw();
void __cdecl FUN_00d8ce50();

void __cdecl FUN_00cad380()
{
    DAT_00f5fe58.Setting::Setting();
    FUN_00c00d1f(FUN_00d8ce50);
}
}   // namespace f3m_00cad380

// @f3 0x00cac000 (community match, verified in this file)
namespace f3m_00cac000 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
void __cdecl FUN_00d8cb10();
void FUN_00c00d1f(int a);
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); FUN_00c00d1f((int)FUN_00d8cb10); }
};
extern Setting DAT_00f5fbe8;

void __cdecl FUN_00cac000()
{
    DAT_00f5fbe8.Setting::Setting();
}
}

// @f3 0x00caf9c0 (community match, verified in this file)
namespace f3m_00caf9c0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60320;
void __cdecl FUN_00d8d4b0();

void __cdecl FUN_00caf9c0()
{
    DAT_00f60320.Setting::Setting();
    atexit(FUN_00d8d4b0);
}
}

// @f3 0x00cab400 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cab400 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5fa68;
void __cdecl FUN_00d8c910();
}

void __cdecl FUN_00cab400()
{
    f3m_00cab400::DAT_00f5fa68.Setting::Setting();
    atexit(f3m_00cab400::FUN_00d8c910);
}

// @f3 0x00cbab70 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cbab70 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f61994;
void __cdecl FUN_00d8f240();
}

void __cdecl FUN_00cbab70()
{
    f3m_00cbab70::DAT_00f61994.Setting::Setting();
    atexit(f3m_00cbab70::FUN_00d8f240);
}

// @f3 0x00cb2ba0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb2ba0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f6095c;
void __cdecl FUN_00d8dd00();
}

void __cdecl FUN_00cb2ba0()
{
    f3m_00cb2ba0::DAT_00f6095c.Setting::Setting();
    atexit(f3m_00cb2ba0::FUN_00d8dd00);
}

// @f3 0x00ca1710 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca1710 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e5e0;
void __cdecl FUN_00d8af30();
}

void __cdecl FUN_00ca1710()
{
    f3m_00ca1710::DAT_00f5e5e0.Setting::Setting();
    atexit(f3m_00ca1710::FUN_00d8af30);
}

// @f3 0x00ca25b0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca25b0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f5e7b4;
void __cdecl FUN_00d8b1a0();
}

void __cdecl FUN_00ca25b0()
{
    f3m_00ca25b0::DAT_00f5e7b4.Setting::Setting();
    atexit(f3m_00ca25b0::FUN_00d8b1a0);
}

// @f3 0x00cb4fa0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb4fa0 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60ddc;
void __cdecl FUN_00d8e300();
}

void __cdecl FUN_00cb4fa0()
{
    f3m_00cb4fa0::DAT_00f60ddc.Setting::Setting();
    atexit(f3m_00cb4fa0::FUN_00d8e300);
}

// @f3 0x00cb2fc0 (community match, verified in this file)
namespace f3m_00cb2fc0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f609e0;
void __cdecl FUN_00d8ddb0();

void __cdecl FUN_00cb2fc0()
{
    DAT_00f609e0.Setting::Setting();
    atexit(FUN_00d8ddb0);
}
}

// @f3 0x00cbb530 (community match, verified in this file)
namespace f3m_00cbb530 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61acc;
void __cdecl FUN_00d8f3e0();

void __cdecl FUN_00cbb530()
{
    DAT_00f61acc.Setting::Setting();
    atexit(FUN_00d8f3e0);
}
}

// @f3 0x00ca79e0 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00ca79e0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f324;
void __cdecl FUN_00d8bf60();

void __cdecl FUN_00ca79e0()
{
    DAT_00f5f324.Setting::Setting();
    atexit(FUN_00d8bf60);
}
}

// @f3 0x00cab040 (community match, verified in this file)
namespace f3m_00cab040 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_f5f9f0;
void __cdecl FUN_00d8c870();

void __cdecl FUN_00cab040()
{
    DAT_f5f9f0.Setting::Setting();
    atexit(FUN_00d8c870);
}
}

// @f3 0x00caac80 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00caac80 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f5f978;
void __cdecl FUN_00d8c7d0();

void __cdecl FUN_00caac80()
{
    DAT_00f5f978.Setting::Setting();
    atexit(FUN_00d8c7d0);
}
}

// @f3 0x00caed00 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00caed00 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60188;
void __cdecl FUN_00d8d290();
}

void __cdecl FUN_00caed00()
{
    f3m_00caed00::DAT_00f60188.Setting::Setting();
    atexit(f3m_00caed00::FUN_00d8d290);
}

// @f3 0x00cb5b40 (community match, verified in this file)
#include <stdlib.h>

namespace f3m_00cb5b40 {
struct Setting;
struct SettingManager
{
    virtual void v00();
    virtual void Register(Setting* setting);
};
extern SettingManager* DAT_010701a8;
void FUN_00403080();

struct SettingBase
{
    void FUN_00401e90();
    __forceinline ~SettingBase() { FUN_00401e90(); }
};

struct Setting : SettingBase
{
    __forceinline Setting()
    {
        FUN_00403080();
        DAT_010701a8->Register(this);
    }
};

extern Setting DAT_00f60f50;
void __cdecl FUN_00d8e4f0();
}

void __cdecl FUN_00cb5b40()
{
    f3m_00cb5b40::DAT_00f60f50.Setting::Setting();
    atexit(f3m_00cb5b40::FUN_00d8e4f0);
}

// @f3 0x00ca1dd0 (community match, verified in this file)
namespace f3m_00ca1dd0 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5e6b8 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5e6b8;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8b050();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca1dd0()
{
    f3m_00ca1dd0::DAT_00f5e6b8.f3m_00ca1dd0::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca1dd0::FUN_00d8b050);
}

// @f3 0x00ca4f50 (community match, verified in this file)
namespace f3m_00ca4f50 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5ece8 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5ece8;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8b890();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca4f50()
{
    f3m_00ca4f50::DAT_00f5ece8.f3m_00ca4f50::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca4f50::FUN_00d8b890);
}

// @f3 0x00ca5790 (community match, verified in this file)
namespace f3m_00ca5790 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5edf0 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5edf0;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8b9f0();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca5790()
{
    f3m_00ca5790::DAT_00f5edf0.f3m_00ca5790::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca5790::FUN_00d8b9f0);
}

// @f3 0x00ca5a30 (community match, verified in this file)
namespace f3m_00ca5a30 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5ee44 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5ee44;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8ba60();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca5a30()
{
    f3m_00ca5a30::DAT_00f5ee44.f3m_00ca5a30::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca5a30::FUN_00d8ba60);
}

// @f3 0x00ca7860 (community match, verified in this file)
namespace f3m_00ca7860 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5f2f4 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5f2f4;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8bf20();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00ca7860()
{
    f3m_00ca7860::DAT_00f5f2f4.f3m_00ca7860::SettingRegistration::SettingRegistration();
    atexit(f3m_00ca7860::FUN_00d8bf20);
}

// @f3 0x00caa080 (community match, verified in this file)
namespace f3m_00caa080 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5f7f8 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5f7f8;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8c5d0();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00caa080()
{
    f3m_00caa080::DAT_00f5f7f8.f3m_00caa080::SettingRegistration::SettingRegistration();
    atexit(f3m_00caa080::FUN_00d8c5d0);
}

// @f3 0x00cad2c0 (community match, verified in this file)
namespace f3m_00cad2c0 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f5fe40 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f5fe40;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8ce30();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00cad2c0()
{
    f3m_00cad2c0::DAT_00f5fe40.f3m_00cad2c0::SettingRegistration::SettingRegistration();
    atexit(f3m_00cad2c0::FUN_00d8ce30);
}

// @f3 0x00caeee0 (community match, verified in this file)
namespace f3m_00caeee0 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f601c4 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f601c4;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8d2e0();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00caeee0()
{
    f3m_00caeee0::DAT_00f601c4.f3m_00caeee0::SettingRegistration::SettingRegistration();
    atexit(f3m_00caeee0::FUN_00d8d2e0);
}

// @f3 0x00caf5a0 (community match, verified in this file)
namespace f3m_00caf5a0 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f6029c is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f6029c;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8d400();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00caf5a0()
{
    f3m_00caf5a0::DAT_00f6029c.f3m_00caf5a0::SettingRegistration::SettingRegistration();
    atexit(f3m_00caf5a0::FUN_00d8d400);
}

// @f3 0x00cafba0 (community match, verified in this file)
namespace f3m_00cafba0 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f6035c is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f6035c;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8d500();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00cafba0()
{
    f3m_00cafba0::DAT_00f6035c.f3m_00cafba0::SettingRegistration::SettingRegistration();
    atexit(f3m_00cafba0::FUN_00d8d500);
}

// @f3 0x00cafc00 (community match, verified in this file)
namespace f3m_00cafc00 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f60368 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f60368;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8d510();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00cafc00()
{
    f3m_00cafc00::DAT_00f60368.f3m_00cafc00::SettingRegistration::SettingRegistration();
    atexit(f3m_00cafc00::FUN_00d8d510);
}

// @f3 0x00cb0d40 (community match, verified in this file)
namespace f3m_00cb0d40 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f60590 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f60590;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8d7f0();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00cb0d40()
{
    f3m_00cb0d40::DAT_00f60590.f3m_00cb0d40::SettingRegistration::SettingRegistration();
    atexit(f3m_00cb0d40::FUN_00d8d7f0);
}

// @f3 0x00cb1760 (community match, verified in this file)
namespace f3m_00cb1760 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f606d4 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f606d4;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8d9a0();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00cb1760()
{
    f3m_00cb1760::DAT_00f606d4.f3m_00cb1760::SettingRegistration::SettingRegistration();
    atexit(f3m_00cb1760::FUN_00d8d9a0);
}

// @f3 0x00cb3560 (community match, verified in this file)
namespace f3m_00cb3560 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f60a94 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f60a94;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8dea0();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00cb3560()
{
    f3m_00cb3560::DAT_00f60a94.f3m_00cb3560::SettingRegistration::SettingRegistration();
    atexit(f3m_00cb3560::FUN_00d8dea0);
}

// @f3 0x00cb6eb0 (community match, verified in this file)
namespace f3m_00cb6eb0 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f611fc is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f611fc;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8e820();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00cb6eb0()
{
    f3m_00cb6eb0::DAT_00f611fc.f3m_00cb6eb0::SettingRegistration::SettingRegistration();
    atexit(f3m_00cb6eb0::FUN_00d8e820);
}

// @f3 0x00cbac30 (community match, verified in this file)
namespace f3m_00cbac30 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f619ac is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f619ac;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8f260();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00cbac30()
{
    f3m_00cbac30::DAT_00f619ac.f3m_00cbac30::SettingRegistration::SettingRegistration();
    atexit(f3m_00cbac30::FUN_00d8f260);
}

// @f3 0x00cbbb30 (community match, verified in this file)
namespace f3m_00cbbb30 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f61b8c is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f61b8c;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8f4e0();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00cbbb30()
{
    f3m_00cbbb30::DAT_00f61b8c.f3m_00cbbb30::SettingRegistration::SettingRegistration();
    atexit(f3m_00cbbb30::FUN_00d8f4e0);
}

// @f3 0x00cbe170 (community match, verified in this file)
namespace f3m_00cbe170 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f62054 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f62054;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8fb40();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00cbe170()
{
    f3m_00cbe170::DAT_00f62054.f3m_00cbe170::SettingRegistration::SettingRegistration();
    atexit(f3m_00cbe170::FUN_00d8fb40);
}

// @f3 0x00cbf250 (community match, verified in this file)
namespace f3m_00cbf250 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f62270 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f62270;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8fe10();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00cbf250()
{
    f3m_00cbf250::DAT_00f62270.f3m_00cbf250::SettingRegistration::SettingRegistration();
    atexit(f3m_00cbf250::FUN_00d8fe10);
}

// @f3 0x00cbf3d0 (community match, verified in this file)
namespace f3m_00cbf3d0 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f622a0 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f622a0;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8fe50();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00cbf3d0()
{
    f3m_00cbf3d0::DAT_00f622a0.f3m_00cbf3d0::SettingRegistration::SettingRegistration();
    atexit(f3m_00cbf3d0::FUN_00d8fe50);
}

// @f3 0x00cbfaf0 (community match, verified in this file)
namespace f3m_00cbfaf0 {
struct SettingCollection { virtual void v00(); virtual void Add(void* setting); };
struct SettingBase { ~SettingBase(); };
// the Setting at 0x00f62384 is statically initialised (vtable, value, name); only the registration part of its
// constructor runs dynamically
struct SettingRegistration : SettingBase { SettingRegistration(); };
extern SettingCollection* DAT_010701a8;
extern SettingRegistration DAT_00f62384;
void __cdecl FUN_00403080();   // creates the setting collection singleton on first use
void __cdecl FUN_00d8ff80();   // atexit destructor of the setting
__forceinline SettingRegistration::SettingRegistration()
{
    FUN_00403080();
    DAT_010701a8->Add(this);
}
}

void __cdecl FUN_00cbfaf0()
{
    f3m_00cbfaf0::DAT_00f62384.f3m_00cbfaf0::SettingRegistration::SettingRegistration();
    atexit(f3m_00cbfaf0::FUN_00d8ff80);
}

// @f3 0x00cbd7b0 (community match, verified in this file)
#include <stdlib.h>
namespace f3m_00cbd7b0 {
struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f61f1c;
void __cdecl FUN_00d8f9a0();

// dynamic initializer of a global setting
void __cdecl FUN_00cbd7b0()
{
    DAT_00f61f1c.Setting::Setting();
    atexit(FUN_00d8f9a0);
}
}

// @f3 0x00cb4760 (community match, verified in this file)
namespace f3m_00cb4760 {

struct Setting;
struct Manager { virtual void v00(); virtual void Register(Setting* setting); };
extern Manager* DAT_010701a8;
void FUN_00403080();
struct Cleanup {
    void FUN_00403170();
    __forceinline ~Cleanup() { FUN_00403170(); }
};
struct Setting : Cleanup {
    __forceinline Setting() { FUN_00403080(); DAT_010701a8->Register(this); }
};
extern Setting DAT_00f60cd4;
void __cdecl FUN_00d8e1a0();

void __cdecl FUN_00cb4760()
{
    DAT_00f60cd4.Setting::Setting();
    atexit(FUN_00d8e1a0);
}
}   // namespace f3m_00cb4760

// @f3 0x00ca74f0 (community match, verified in this file)
struct Obj01073230
{
    void FUN_008a8440();
};

extern Obj01073230 DAT_01073230;

void FUN_00ca74f0()
{
    DAT_01073230.FUN_008a8440();
}
