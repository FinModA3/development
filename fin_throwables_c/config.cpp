#include "../fin_main/nameMacros.hpp"
class CfgPatches
{
	class fin_throwables_c
	{
		units[]={};
		weapons[]={"fin_fraggrenade_Muzzle","fin_smoke_white_Muzzle", "fin_smoke_green_Muzzle", "fin_smoke_blue_Muzzle", "fin_smoke_red_Muzzle"};
		magazines[] = {"fin_fraggrenade","fin_smoke_white","fin_smoke_white","fin_smoke_white","fin_smoke_red"};
		ammo[] = {"fin_frag_ammo","fin_smoke_ammo_white","fin_smoke_ammo_green","fin_smoke_ammo_blue","fin_smoke_ammo_red"};
		author = $STR_FinMod_Author;
		requiredVersion=0.5;
		requiredAddons[]={"A3_Weapons_F","fin_main","fin_throwables"};
	};
};

class cfgAmmo
{	
	class GrenadeHand;
	class SmokeShell;
	class SmokeShellGreen;
	class SmokeShellBlue;
	class SmokeShellRed;
	class fin_frag_ammo : GrenadeHand 
	{
		model = "FinMod\addons\fin_throwables\fin_frag_thrown";
		explosionTime = 4;
	};
	class fin_smoke_ammo_white : SmokeShell
	{
		model = "FinMod\addons\fin_throwables\fin_smoke_thrown";
	};
		class fin_smoke_ammo_green : SmokeShellGreen
	{
		model = "FinMod\addons\fin_throwables\fin_smoke_thrown";
	};
		class fin_smoke_ammo_blue : SmokeShellBlue
	{
		model = "FinMod\addons\fin_throwables\fin_smoke_thrown";
	};
		class fin_smoke_ammo_red : SmokeShellRed
	{
		model = "FinMod\addons\fin_throwables\fin_smoke_thrown";
	};
};

class CfgMagazines
{
	class HandGrenade;
	class SmokeShell;
	class fin_fraggrenade : HandGrenade
	{
		scope = 2;
		ammo = "fin_frag_ammo";
		AuthNameMacro(fin_fraggrenade)
		picture = "\FinMod\addons\fin_throwables\data\ui\gear_fin_frag.paa";
		model = "FinMod\addons\fin_throwables\fin_frag";
		mass = 5;
	};
	class fin_smoke_white : SmokeShell
	{
		scope = 2;
		ammo = "fin_smoke_ammo_white";
		AuthNameMacro(fin_smoke_white)
		picture = "\FinMod\addons\fin_throwables\data\ui\gear_fin_smoke_white.paa";
		model = "FinMod\addons\fin_throwables\fin_smoke";
		mass = 5;
	};
		class fin_smoke_green : fin_smoke_white
	{
		ammo = "fin_smoke_ammo_green";
		AuthNameMacro(fin_smoke_green)
		picture = "\FinMod\addons\fin_throwables\data\ui\gear_fin_smoke_green.paa";
		model = "FinMod\addons\fin_throwables\fin_smoke_green";
	};
	class fin_smoke_blue : fin_smoke_white
	{
		ammo = "fin_smoke_ammo_blue";
		AuthNameMacro(fin_smoke_blue)
		picture = "\FinMod\addons\fin_throwables\data\ui\gear_fin_smoke_blue.paa";
		model = "FinMod\addons\fin_throwables\fin_smoke_blue";
	};
	class fin_smoke_red : fin_smoke_white
	{
		ammo = "fin_smoke_ammo_red";
		AuthNameMacro(fin_smoke_red)
		picture = "\FinMod\addons\fin_throwables\data\ui\gear_fin_smoke_red.paa";
		model = "FinMod\addons\fin_throwables\fin_smoke_red";
	};
};

class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"fin_fraggrenade_Muzzle","fin_smoke_white_Muzzle", "fin_smoke_green_Muzzle", "fin_smoke_blue_Muzzle", "fin_smoke_red_Muzzle"};
		class ThrowMuzzle: GrenadeLauncher{};
		class fin_fraggrenade_Muzzle: ThrowMuzzle
		{
			magazines[] = {"fin_fraggrenade"};
		};
		class fin_smoke_white_Muzzle: ThrowMuzzle
		{
			magazines[] = {"fin_smoke_white"};
		};
		class fin_smoke_green_Muzzle: ThrowMuzzle
		{
			magazines[] = {"fin_smoke_green"};
		};
		class fin_smoke_blue_Muzzle: ThrowMuzzle
		{
			magazines[] = {"fin_smoke_blue"};
		};
		class fin_smoke_red_Muzzle: ThrowMuzzle
		{
			magazines[] = {"fin_smoke_red"};
		};
	};
};

