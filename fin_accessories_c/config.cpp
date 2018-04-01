#include "../fin_main/nameMacros.hpp"
#include "../fin_main/basicDefines_A3.hpp"
class CfgPatches
{
	class fin_accessories_c
	{
		units[] = {};
		weapons[] = { "fin_vv2000_sidemount", "fin_ta11_3d", "fin_ta11_2d", "fin_pp09", "fin_pp04" };
		magazines[] = {};
		author = $STR_FinMod_Author;
		requiredVersion = 0.5;
		requiredAddons[] = { "A3_Weapons_F","fin_main","A3_Data_F", "A3_Weapons_F_Acc", "asdg_jointrails", "fin_accessories"};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class asdg_SlotInfo;

class asdg_OpticRail;
class asdg_OpticRail1913 : asdg_OpticRail
{
	class compatibleItems
	{
		fin_ta11_3d = 1;
		fin_ta11_2d = 1;
		fin_pp09 = 1;
		fin_pp04 = 1;
	};
};
class CfgWeapons{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryUnderItem_Base_F;
	#include "vv2000/vv2000.hpp"
	#include "acog/acog.hpp"
	#include "pp04/punapiste2004.hpp"
	#include "pp09/punapiste2009.hpp"
	//#include "tkiv_bipod/CfgBipod.hpp"
	//#include "tkiv_scope/CfgScope.hpp"
};
class CfgVehicles{
	class Item_Base_F;
	#include "pp09/cfgvehicles.hpp"
	#include "acog/cfgvehicles.hpp"
};