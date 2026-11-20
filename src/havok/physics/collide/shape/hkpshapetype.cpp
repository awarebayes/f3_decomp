#include "f3_common.h"
// src/havok/physics/collide/shape/hkpshapetype.cpp - unit created 2026-10-16 from the whole-binary attribution (360 source path: d:/projects/fallout/code/havok/source/physics/collide/shape/hkpshapetype.cpp).
// Functions are listed by their @fnv annotations; compile flags inferred from the PC code.

struct hkpCollisionDispatcher
{
    void FUN_00cfbf60(int, int);
};

// @f3 0x009d45d0 (community match, verified in this file)
void FUN_00d46410(hkpCollisionDispatcher* dispatcher)
{
    dispatcher->FUN_00cfbf60(2, 1);
    dispatcher->FUN_00cfbf60(4, 1);
    dispatcher->FUN_00cfbf60(5, 1);
    dispatcher->FUN_00cfbf60(6, 1);
    dispatcher->FUN_00cfbf60(3, 1);
    dispatcher->FUN_00cfbf60(7, 1);
    dispatcher->FUN_00cfbf60(0xc, 1);
    dispatcher->FUN_00cfbf60(0xd, 1);
    dispatcher->FUN_00cfbf60(0x13, 1);
    dispatcher->FUN_00cfbf60(0x16, 8);
    dispatcher->FUN_00cfbf60(0xa, 8);
    dispatcher->FUN_00cfbf60(0xf, 8);
    dispatcher->FUN_00cfbf60(0x1e, 8);
    dispatcher->FUN_00cfbf60(0x1f, 8);
    dispatcher->FUN_00cfbf60(0xb, 9);
    dispatcher->FUN_00cfbf60(1, 0x19);
    dispatcher->FUN_00cfbf60(0x1b, 0x18);
    dispatcher->FUN_00cfbf60(0xe, 0x18);
}


// Returns the HK_SHAPE_* name string for a Havok shape type id, or null when the id is unknown.
// @fnv 0x00d464f0
const char* __cdecl GetHavokShapeTypeName(int aiShapeType)
{
    switch (aiShapeType)
    {
    case 0:
        return "HK_SHAPE_INVALID";
    case -1:
        return "HK_SHAPE_ALL";
    case 18:
        return "HK_SHAPE_CONVEX";
    case 16:
        return "HK_SHAPE_COMPRESSED_MESH";
    case 7:
        return "HK_SHAPE_COLLECTION";
    case 8:
        return "HK_SHAPE_BV_TREE";
    case 1:
        return "HK_SHAPE_SPHERE";
    case 3:
        return "HK_SHAPE_TRIANGLE";
    case 4:
        return "HK_SHAPE_BOX";
    case 5:
        return "HK_SHAPE_CAPSULE";
    case 2:
        return "HK_SHAPE_CYLINDER";
    case 6:
        return "HK_SHAPE_CONVEX_VERTICES";
    case 20:
        return "HK_SHAPE_CONVEX_PIECE";
    case 21:
        return "HK_SHAPE_MULTI_SPHERE";
    case 9:
        return "HK_SHAPE_LIST";
    case 22:
        return "HK_SHAPE_CONVEX_LIST";
    case 23:
        return "HK_SHAPE_TRIANGLE_COLLECTION";
    case 24:
        return "HK_SHAPE_MULTI_RAY";
    case 25:
        return "HK_SHAPE_HEIGHT_FIELD";
    case 13:
        return "HK_SHAPE_SAMPLED_HEIGHT_FIELD";
    case 26:
        return "HK_SHAPE_SPHERE_REP";
    case 27:
        return "HK_SHAPE_BV";
    case 28:
        return "HK_SHAPE_PLANE";
    case 10:
        return "HK_SHAPE_MOPP";
    case 15:
        return "HK_SHAPE_TRANSFORM";
    case 11:
        return "HK_SHAPE_CONVEX_TRANSLATE";
    case 12:
        return "HK_SHAPE_CONVEX_TRANSFORM";
    case 14:
        return "HK_SHAPE_EXTENDED_MESH";
    case 19:
        return "HK_SHAPE_MOPP_EMBEDDED";
    case 17:
        return "HK_SHAPE_MAX_ID_SPU";
    case 29:
        return "HK_SHAPE_PHANTOM_CALLBACK";
    case 30:
        return "HK_SHAPE_USER0";
    case 31:
        return "HK_SHAPE_USER1";
    case 32:
        return "HK_SHAPE_USER2";
    }
    return 0;
}
