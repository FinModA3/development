#include "../fin_main/nameMacros.hpp"
class CfgPatches
{
	class fin_NH90
	{
		units[]={};
		weapons[]={};
		magazines[] = {};
		author = $STR_FinMod_Author;
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F","fin_main","HAFM_NH90","HAFM_NH90_Config"};
	};
};

class cfgVehicles
{
	class NH90;
	class NH90Armed;
	class fin_NH90: NH90
	{
		AuthNameMacro(fin_NH90)

		side = 2;
		scope = 2;
		faction = fin_faction_fdf;
		crew = "I_helipilot_F";
		typicalCargo[] = {"I_helicrew_F","I_helicrew_F"};
		vehicleClass = fin_vehclass_air;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"FinMod\addons\fin_NH90\data\hull.paa", "FinMod\addons\fin_NH90\data\tail.paa", "FinMod\addons\fin_NH90\data\misc.paa", "FinMod\addons\fin_NH90\data\doors.paa"};
		editorPreview = "\FinMod\addons\fin_NH90\data\edenpreviews\fin_NH90.jpg";
		
		class TransportWeapons 
		{
			class _xx_fin_Rk62 
			{
				count = 2;
				weapon = "fin_Rk62";
			};
		};
		class TransportMagazines 
		{
			class _xx_fin_30Rnd_rk_mag 
			{
				count = 10;
				magazine = "fin_30Rnd_rk_mag";
			};
		};
	};
	class fin_NH90_armed : NH90Armed
	{

		AuthNameMacro(fin_NH90_armed)
		side = 2;
		scope = 2;
		faction = fin_faction_fdf;
		crew = "I_helipilot_F";
		typicalCargo[] = {"I_helicrew_F","I_helicrew_F"};
		vehicleClass = fin_vehclass_air;
		hiddenSelectionsTextures[] = {"FinMod\addons\fin_NH90\data\hull.paa", "FinMod\addons\fin_NH90\data\tail.paa", "FinMod\addons\fin_NH90\data\misc.paa", "FinMod\addons\fin_NH90\data\doors.paa"};
		editorPreview = "\FinMod\addons\fin_NH90\data\edenpreviews\fin_NH90_armed.jpg";

		
		class TransportWeapons
		{
			class _xx_fin_Rk62 
			{
				count = 2;
				weapon = "fin_Rk62";
			};
		};
		class TransportMagazines 
		{
			class _xx_fin_30Rnd_rk_mag 
			{
				count = 10;
				magazine = "fin_30Rnd_rk_mag";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=14;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=2;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=16;
			};
		};
	};
};