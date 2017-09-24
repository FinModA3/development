#include "../fin_main/basicdefines_A3.hpp"
#include "../fin_main/nameMacros.hpp"
#include "cfgPatches.hpp"

class UniformSlotInfo;

class CfgVehicles
{
	class B_FieldPack_oli;
	class SoldierWB;
	//Base class for BLUFOR soldiers
	class Fin_Soldier_base_F: SoldierWB
	{
		_generalMacro = "Fin_Soldier_base_F";
		identityTypes[] =
		{
			"LanguageENG_F",	//TODO: Suomi, perkele
			"Head_NATO",
			"G_NATO_default"
		};
		faceType = Man_A3; /// this soldier is going to use standard faces
		side = 2;		// Independent
		faction = fin_faction_fdf;
		vehicleClass = fin_vehclass_jaeger2015;	/// Generic, isn't visible
		genericNames = "FinnishNames";
		editorSubcategory = "EdSubcat_Personnel";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 2.3;
		threat[] = { 1,0.1,0.1 };
		minFireTime = 7;
		cost = 100000;
		canCarryBackPack = 1;
		scope = 1; /// base class should not be visible in editor
		class Wounds /// changes material of skin according to damage
		{
			tex[] = {};
			mat[] =
			{
				"A3\Characters_F\BLUFOR\Data\clothing1.rvmat",
				"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
				"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\characters_f\common\data\coveralls.rvmat",
				"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
				"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		model 			= "FinMod\addons\fin_character\fin_soldier.p3d"; /// path to model
		modelSides[] 	= {3, 2}; 				/// what sides could use this uniform, means civilians and INDFOR can use it
		nakedUniform 	= "U_BasicBody";		/// what "uniform" does this soldier use without any other uniform
		uniformClass 	= "fin_m05_uniform";		/// standard uniform used by this soldier, there is a special one defined later
		camouflage		= 1.4;

		class UniformInfo /// defines allowed slots of the uniform
		{
			class SlotsInfo
			{
				class NVG : UniformSlotInfo{slotType = NVG_SLOT; };
				class Scuba : UniformSlotInfo{slotType = SCUBA_SLOT;};
				class Googles : UniformSlotInfo{slotType = GOGGLE_SLOT;};
				class Headgear : UniformSlotInfo{slotType = HEADGEAR_SLOT;};
			};
		};
		armor = 2;
		armorStructural = 0.38;
		explosionShielding = 0.037999999;
		/*//Perii normi Blufor armorit. Muokataan, jos tarvitaan
		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 2;
				material = -1;
				name = "pelvis";
				passThrough = 0.050000001;
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitAbdomen : HitPelvis
			{
				armor = 2;
				material = -1;
				name = "spine1";
				passThrough = 0.050000001;
				radius = 0.15000001;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 2;
				material = -1;
				name = "spine2";
				passThrough = 0.050000001;
				radius = 0.15000001;
				explosionShielding = 2.4000001;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 2;
				material = -1;
				name = "spine3";
				passThrough = 0.050000001;
				radius = 0.15000001;
				explosionShielding = 2.4000001;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.050000001;
				radius = 0.16;
				explosionShielding = 2.4000001;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 2;
				material = -1;
				name = "arms";
				passThrough = 0.5;
				radius = 0.1;
				explosionShielding = 0.30000001;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitHands : HitArms
			{
				armor = 2;
				material = -1;
				name = "hands";
				passThrough = 0.5;
				radius = 0.1;
				explosionShielding = 0.30000001;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 2;
				material = -1;
				name = "legs";
				passThrough = 0.5;
				radius = 0.12;
				explosionShielding = 0.30000001;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
		};*/

		hiddenSelections[] = { "Camo" };
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\uniforms\m05_uniform_co.paa" };
		
		class EventHandlers;
		//hideProxySelections[] = { "ghillie_hide" }; /// names of selections hidden on proxies (used in vest in this case, see overlaySelectionsInfo[])
		weapons[] = { Throw, Put }; /// we have a sample weapon, why not use it? Throw and put weapons are required for grenades/mines
		respawnWeapons[] = { Throw, Put }; /// should be the same as previous most of the time
		Items[] = { }; /// one First aid kit is good to start with
		RespawnItems[] = { };
		magazines[] = {};
		respawnMagazines[] = { };
		linkedItems[] = { };
		respawnLinkedItems[] = { };
	};
	/*
	class fin_soldier_SF_base : Fin_Soldier_base_F
	{
		//model 			= "FinMod\addons\fin_character\fin_soldier.p3d"; /// path to model
		modelSides[] 	= {3, 2}; 				/// what sides could use this uniform, means civilians and INDFOR can use it
		nakedUniform 	= "U_BasicBody";		/// what "uniform" does this soldier use without any other uniform
		uniformClass 	= "fin_m05_SF_uniform";		/// standard uniform used by this soldier, there is a special one defined later
		camouflage = 2.0;
	};
	class fin_soldier_MP_base : Fin_Soldier_base_F
	{
		//model 			= "FinMod\addons\fin_character\fin_soldier.p3d"; /// path to model
		modelSides[] 	= {3, 2}; 				/// what sides could use this uniform, means civilians and INDFOR can use it
		nakedUniform 	= "U_BasicBody";		/// what "uniform" does this soldier use without any other uniform
		uniformClass 	= "fin_m05_MP_uniform";		/// standard uniform used by this soldier, there is a special one defined later
		camouflage = 2.0;
	};
	class fin_soldier_PK_base : Fin_Soldier_base_F
	{
		//model 			= "FinMod\addons\fin_character\fin_soldier.p3d"; /// path to model
		modelSides[] 	= {3, 2}; 				/// what sides could use this uniform, means civilians and INDFOR can use it
		nakedUniform 	= "U_BasicBody";		/// what "uniform" does this soldier use without any other uniform
		uniformClass 	= "fin_m04_uniform";		/// standard uniform used by this soldier, there is a special one defined later
		camouflage = 2.0;
	};
	*/
	#include "CfgUnits.hpp"
	#include "cfgBackpack.hpp"	
};

class cfgWeapons
{
	class InventoryItem_Base_F;
    class ItemCore;
	#include "cfgUniforms.hpp"	/// sample uniform is defined in a separate file to make it cleaner
	#include "cfgVests.hpp"		/// sample vest is defined in a separate file to make it cleaner

	#include "cfgHeadgear.hpp"	/// sample cap is defined in a separate file to make it cleaner
};

#include "CfgGroups.hpp"		// Define all FDF squads and other groups