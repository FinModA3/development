#include "../fin_main/basicDefines_A3.hpp"
#include "../fin_main/nameMacros.hpp"

class CfgPatches
{
	class fin_mgs_c
	{
		units[] = {};
		weapons[] = {"fin_pkm" };
		magazines[] = { "fin_100Rnd_pkm_mag","fin_100Rnd_pkm_mag_Tracer" };
		ammo[] = { "fin_B_762x39_Ball","fin_B_762x39_Tracer" };
		author = $STR_FinMod_Author;
		requiredVersion = 0.5;
		requiredAddons[] = { "A3_Weapons_F","A3_Sounds_F","A3_Sounds_F_Mark","fin_main","fin_rifles" };
	};
};

class asdg_OpticRail1913;
class asdg_OpticRail1913_long;

class Mode_SemiAuto;
class Mode_FullAuto;
#include "pkm/pkm_animations.hpp"	
//#include "kvkk/kvkk_animations.hpp"		// Weapon reload animations etc.

#include "PKM/cfgSounds.hpp"

class cfgAmmo
{
#include "PKM/cfgAmmo.hpp"
};

class cfgRecoils
{
	class recoil_default;
#include "PKM/CfgRecoils.hpp"
#include "KVKK/CfgRecoils.hpp"
};

class CfgMagazines
{
class CA_Magazine;
#include "PKM/cfgMagazines.hpp"
#include "KVKK/cfgMagazines.hpp"
};

class CfgWeapons
{
class Rifle_Base_F;
#include "PKM/cfgPKM.hpp"
#include "KVKK/cfgKVKK.hpp"
};