#include "../fin_main/nameMacros.hpp"
#include "../fin_main/basicDefines_A3.hpp"

class CfgPatches
{
	class fin_TKiv2000_c
	{
		author = $STR_FinMod_Author;
		units[] = {};
		weapons[] = {"fin_TKiv2000", "fin_TKiv2000_Scope", "fin_TKiv2000_Bipod"};
		magazines[] = {"fin_5Rnd_TKiv2000_mag"};
		ammo[] = {"fin_B_86x70_Ball"};
		requiredVersion = 0.5;
		requiredAddons[] = {"A3_Data_F", "A3_Weapons_F", "A3_Weapons_F_Items", "A3_Weapons_F_LongRangeRifles_M320"};
	};
};



class CfgMovesBasic
{
	#include "CfgMoves.hpp"
};



class cfgRecoils
{
	class Default;
	
	#include "CfgRecoils.hpp"
};



class CfgVehicles 
{
	class NATO_Box_Base;
	
	#include "CfgAmmoboxes.hpp"
};



// Weapon firemodes
class Mode_SemiAuto;

// Weapon slots
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;

class cfgAmmo
{	
	#include "CfgAmmo.hpp"
};

class CfgMagazines
{
	#include "CfgMagazines.hpp" // specific magazines for this rifle
};

class CfgWeapons
{
		// include attachments
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryUnderItem_Base_F;
	// include weapons
	class Rifle_Base_F;
	
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	
	#include "CfgTkiv2000.hpp"
	
	
	

};
