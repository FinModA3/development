class CfgPatches
{
	class fin_bmp2_c
	{
		units[] = {"fin_bmp2"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Armor_F_Beta_APC_Tracked_02", "fin_bmp2"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class APC_Tracked_02_base_F : Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
	};		
	class O_APC_Tracked_02_cannon_F;
	class fin_bmp2: APC_Tracked_02_base_F
	{
		model = "FinMod\addons\fin_bmp2\fin_bmp2.p3d";
		// picture="\fin_vehicles\bmp\ui\icon_bmp2_ca.paa";
		class TransportBackpacks {};
		
		class TransportItems 
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 8;
			};
		};

		class TransportWeapons
		{
		};
/* To Do: add Finmod weapons
		class TransportMagazines
		{
			class _xx_30Rnd_762x39
			{
				magazine = "fin_30Rnd_762x39";
				count = "30*1";
			};
			class _xx_100Rnd_762x54_pkm
			{
				magazine = "fin_100Rnd_762x54_pkm";
				count = "5*1";
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = "10*1";
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = "3*1";
			};
		};	
*/	
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				// weapons[] = {"fin_2a42","fin_pkt"};
				// magazines[] = {"fin_2a42_hei","fin_2a42_ap","fin_250rnd_pkt","fin_250rnd_pkt","fin_250rnd_pkt","fin_250rnd_pkt","fin_250rnd_pkt","fin_250rnd_pkt","fin_250rnd_pkt","fin_250rnd_pkt"};
				viewGunnerInExternal = 0;
				forceHideGunner = 0;
				minElev = -5;
				maxElev = 74;
				initElev = 0;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						forceHideGunner = 0;
						viewGunnerInExternal = 0;
					};
				};				
			};
		};
		dlc="ffp";
		author="Swedish Forces Pack";
		faction = "fin_land";
		maxSpeed = 65;
		transportSoldier = 7;		
		supplyRadius = 1.7;
		wheelCircumference=1.954;
		unloadInCombat = 1;
		forceHideDriver = 0;
		accuracy=0.20;
		armor = 220;
		armorStructural = 4.5;	// Two hulls of same type should take same amount of damage. Use armorStructural to counter the effect of vehicle size on its armor.		
		side=2;
		scope=2;
		canFloat = 1;
		displayname="BMP-2";
		crew="fin_m05w_crew";
		#include "physx.hpp"
		class AnimationSources
		{
			class recoil_source { source = "reload"; weapon = "fin_2a42";};
			class launcher_hide {
				source = "user"; 
				animPeriod = 0; 
				initPhase=1;
			};
		};	
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		tracksSpeed = 1;
		class Reflectors    // overload lights, lot of mistaked in light in A2 BMP2 config
		{
			class LeftLight
			{
				color[] 	= {1900, 1300, 950};
				ambient[]	= {5,5,5};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size 		= 1;
				innerAngle 	= 100;
				outerAngle 	= 179;
				coneFadeCoef = 10;
				intensity 	= 1; //17.5
				useFlare 	= 0;
				dayLight 	= 0;
				flareSize 	= 1.0;
				class Attenuation {
					start 		= 1.0;
					constant 	= 0;
					linear 		= 0;
					quadratic 	= 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class RightLight:LeftLight
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Right2: RightLight {
				position 	= "P svetlo flare";
				useFlare 	= 1;
			};
			class Left2: LeftLight {
				position 	= "L svetlo flare";
				useFlare 	= 1;
			};			
		};
		aggregateReflectors[] = {{"LeftLight","Left2","RightLight","Right2"}};
		//For smoke launchers
		smokeLauncherGrenadeCount=3; //Number of smoke shells launched at once
		smokeLauncherVelocity=14; //Velocity which smoke shells are launched at
		smokeLauncherOnTurret=1; //0 if smoke launchers are on hull, 1 if on turret
		smokeLauncherAngle=70; //Angle within which smoke grenades are launched (actual spacing may end up smaller so use slighty higher number)
	};
};