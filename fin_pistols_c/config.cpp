#include "../fin_main/nameMacros.hpp"
class CfgPatches
{
	class fin_pistols_c
	{
		units[]={};
		weapons[]={"fin_g17","fin_hk69a1"};
		magazines[] = {"fin_17Rnd_glock_mag","fin_40mmHE_1rnd","fin_40mmWS_1rnd"};
		ammo[] = {};
		author = $STR_FinMod_Author;
		requiredVersion=0.5;
		requiredAddons[]={"A3_Weapons_F","fin_main","CBA_MAIN"};
	};
};


/// All firemodes, to be sure
class Mode_SemiAuto;
class Mode_FullAuto;

class CfgAmmo
{
    class BulletBase;	// External class reference
	class G_40mm_HE;
	class G_40mm_Smoke;
	class G_40mm_SmokeRed;
	class G_40mm_SmokeBlue;
	class G_40mm_SmokeGreen;
	#include "G17\cfgAmmo.hpp"
	#include "HK69A1\cfgAmmo.hpp"
};


class CfgMagazines
{
	class CA_Magazine;	// External class reference
	#include "G17\cfgMagazines.hpp"
	#include "HK69A1\cfgMagazines.hpp"
};

class CfgWeapons
{   
    class hgun_P07_F;
	#include "G17\glock17.hpp"
	#include "HK69A1\hk69a1.hpp"
};

