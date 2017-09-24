#include "../fin_main/basicdefines_A3.hpp"
#include "../fin_main/nameMacros.hpp"

class CfgPatches
{
	class fin_rifles_c
	{
		units[] = {};
		weapons[] = { "fin_rk62","fin_rk95" };
		magazines[] = { "fin_30Rnd_rk62_mag","fin_30Rnd_rk62_mag_Tracer" };
		ammo[] = { "fin_B_762x39_Ball","fin_B_762x39_Tracer" };
		author = $STR_FinMod_Author;
		requiredVersion = 0.5;
		requiredAddons[] = { "A3_Weapons_F","fin_main", "fin_accessories", "fin_rifles" };
	};
};

class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot_762R;
class SlotInfo;

class Mode_SemiAuto;
class Mode_FullAuto;

#include "ammoboxes.hpp"
#include "rk_animations.hpp"		// Weapon reload animations etc.
#include "cfgRecoils.hpp" /// specific recoil patterns for this rifle
#include "cfgSounds.hpp"

class cfgAmmo
{
#include "cfgAmmo.hpp"
};

class CfgMagazines
{
#include "cfgMagazines.hpp" /// specific magazines for this rifle
};

class CfgWeapons
{
	class Rifle_Base_F;
	class CowsSlot;
	#include "cfgRk_base.hpp"
	#include "cfgRk62.hpp"
	#include "cfgRk95.hpp"
};


