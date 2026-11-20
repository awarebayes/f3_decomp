// fallout/interface/menus/levelupmenu_decls.h: declares NetworkSystemUtility, LevelUpMenu
#ifndef LEVELUPMENU_DECLS_H
#define LEVELUPMENU_DECLS_H
#include "f3_common.h"
class NetworkSystemUtility
{
  public:
    static NetworkSystemUtility& GetRandomGenerator();
};
class LevelUpMenu
{
  public:
    void RefreshNetworkState();
};
#endif
