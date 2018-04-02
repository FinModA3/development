#include "../fin_main/nameMacros.hpp"
#include "rocket_macros.hpp"
class CfgPatches
{
	class fin_launchers_c
	{
		units[]={};
		weapons[]={"fin_Apilas","fin_Apilas_Used", "fin_66kes_base","fin_66kes88", "fin66kes88_used","fin_66kes12", "fin66kes12_used","fin_66kes12_rak", "fin66kes12_rak_used" };
		magazines[] = {"fin_apilas_mag","fin_dummy_mag","fin_kes_mag_base", "fin_66kes88_mag", "fin_66kes12_mag", "fin_66kes12_rak_mag" };
		ammo[] = {"fin_apilas_heat_penetrator", "fin_apilas_R", "fin_kes_base", "fin_kes_penetrator", "fin_66kes88_heat_penetrator", "fin_66kes12_hedp_penetrator", "fin_66kes12_heat_penetrator", "fin_66kes88_R", "fin_66kes12_R", "fin_fin_66kes12_rak_R"};
		author = $STR_FinMod_Author;
		requiredVersion=0.5;
		requiredAddons[]={"A3_Weapons_F","fin_main","CBA_MAIN"};
	};
};

/*class CfgFunctions
{
	class fin_launchers
	{
		class disposable
		{
			file = "Finmod\addons\fin_launchers_c\functions";
			class fired;
			class reload;
		};
	};
};

class Extended_InitPost_Eventhandlers
{
	// Remove given rocket magazine from human players. See fin_rsc_disposable and fn_reload.sqf
	class Man
	{
		class fin_launchers_disposable
		{
			onRespawn = false;
			init = "_this call fin_launchers_fnc_reload;";
		};
	};
};

class Extended_FiredBIS_Eventhandlers
{
	class Man
	{
		class fin_launchers_disposable_fired
		{
			firedBIS = "_unit = _this select 0; if (local _unit) then { if((configFile >> 'CfgWeapons' >> _this select 1 >> 'fin_disposable_launcher') call BIS_fnc_getCfgData == 1) then {_this call fin_launchers_fnc_fired;};};";
		};
	};
};
/*
class RscInGameUI
{
	// Same as normal zeroing info, but onLoad method used for giving launcher rocket to _HUMAN_ player's disposable launcher
	class RscWeaponZeroing;
	class fin_rsc_disposable : RscWeaponZeroing
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call fin_launchers_fnc_reload;";
	};
};
*/
/// All firemodes, to be sure
class Mode_SemiAuto;
class Mode_FullAuto;

class cfgRecoils
{
	#include "Apilas\cfgRecoils.hpp"
	#include "66kesXX\cfgRecoils.hpp"
};


//#include "Apilas\cfgSounds.hpp"
#include "66kesXX\cfgSounds.hpp"

class cfgAmmo
{	
	class RocketBase;
	class fin_basic_penetrator : RocketBase
	{
		RHA(300, 1000)
		hit = 300;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		typicalSpeed = 1000; //keep it at that level, as other values cause strange behaviour upon impact
		timeToLive = 0.03; //we don't want long living jet streams, do we?
		whistleOnFire = 1;
		whistleDist = 14;
		deflecting = 0;
		model = "\A3\Weapons_f\empty";
	};

	#include "Apilas\cfgAmmo.hpp"
	#include "66kesXX\cfgAmmo.hpp"
};

class CfgMagazines
{
	class FakeMagazine;	// External class reference
	#include "Apilas\cfgMagazines.hpp"
	#include "66kesXX\cfgMagazines.hpp"
};

class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	#include "Apilas\cfgApilas.hpp"
	#include "66kesXX\cfgKES.hpp"
//	#include "Nlaw\cfgNLAW.hpp"
};

