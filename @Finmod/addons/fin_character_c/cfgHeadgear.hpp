//class Headgear_Base_F;
class HeadgearItem;
class H_HelmetB;

//class Headgear_H_Beret_Colonel : Headgear_Base_F
//{
//	scope = 2;
//	scopeCurator = 2;
//	displayName = "$STR_A3_H_Beret_Colonel0";
//	author = "$STR_A3_Bohemia_Interactive";
//	editorCategory = "EdCat_Equipment";
//	editorSubcategory = "EdSubcat_Hats";
//	vehicleClass = "ItemsHeadgear";
//	model = "\A3\Weapons_F\DummyCap.p3d";
//	class TransportItems
//	{
//		class H_Beret_Colonel
//		{
//			name = "H_Beret_Colonel";
//			count = 1;
//		};
//	};
//};

class fin_m05_Helmet: H_HelmetB
{
	scope = 2;
	_generalMacro = "fin_m05_Helmet";
	AuthNameMacro(fin_m05_Helmet)
	picture = "\FinMod\addons\fin_character\data\UI\ui_m05_helmet.paa";
	model   = "\FinMod\addons\fin_character\m05helmet.p3d";
	hiddenSelections[] = { "camo1", "ESS", "ESS_Cover", "Peltors" };
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\headgear\m05helmet_co.paa", "", "", "" };
	class ItemInfo : HeadgearItem
	{
		mass = 24;
		uniformModel = "\FinMod\addons\fin_character\m05helmet.p3d";
		allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	/// this cap is so small and flexible that it fits everywhere
		modelSides[] = { 3, 2 };
		hiddenSelections[] = { "camo1", "ESS", "ESS_Cover", "Peltors" };
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\headgear\m05helmet_co.paa", "", "", "" };

		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};		
};
class fin_m05_Helmet_goggles: fin_m05_helmet
{
	AuthNameMacro(fin_m05_Helmet_goggles)
	hiddenSelections[] = { "camo1", "ESS", "ESS_Cover", "Peltors" };
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\headgear\m05helmet_co.paa", "\FinMod\addons\fin_character\data\headgear\ESS_co.paa", "", "\FinMod\addons\fin_character\data\headgear\peltor_co.paa" };
	class ItemInfo : ItemInfo
	{
		picture = "\FinMod\addons\fin_character\data\UI\ui_m05_goggles.paa";
		hiddenSelections[] = { "camo1", "ESS", "ESS_Cover", "Peltors" };
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\headgear\m05helmet_co.paa", "\FinMod\addons\fin_character\data\headgear\ESS_co.paa", "", "\FinMod\addons\fin_character\data\headgear\peltor_co.paa" };
	};
};
class fin_m05_Helmet_goggles_cov: fin_m05_helmet
{
	AuthNameMacro(fin_m05_Helmet_goggles_cov)
	hiddenSelections[] = { "camo1", "ESS", "ESS_Cover", "Peltors" };
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\headgear\m05helmet_co.paa", "\FinMod\addons\fin_character\data\headgear\ESS_co.paa", "\FinMod\addons\fin_character\data\headgear\ESSCover_co.paa", "\FinMod\addons\fin_character\data\headgear\peltor_co.paa" };
	class ItemInfo : ItemInfo
	{
		picture = "\FinMod\addons\fin_character\data\UI\ui_m05_goggles_cov.paa";
		hiddenSelections[] = { "camo1", "ESS", "ESS_Cover", "Peltors" };
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\headgear\m05helmet_co.paa", "\FinMod\addons\fin_character\data\headgear\ESS_co.paa", "\FinMod\addons\fin_character\data\headgear\ESSCover_co.paa", "\FinMod\addons\fin_character\data\headgear\peltor_co.paa" };
	};
};
class fin_m05_Helmet_peltor: fin_m05_helmet
{
	AuthNameMacro(fin_m05_Helmet_peltor)
	hiddenSelections[] = { "camo1", "ESS", "ESS_Cover", "Peltors" };
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\headgear\m05helmet_co.paa", "", "", "\FinMod\addons\fin_character\data\headgear\peltor_co.paa" };
	class ItemInfo : ItemInfo
	{
		picture = "\FinMod\addons\fin_character\data\UI\ui_m05_peltor.paa";
		hiddenSelections[] = { "camo1", "ESS", "ESS_Cover", "Peltors" };
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\headgear\m05helmet_co.paa", "", "", "\FinMod\addons\fin_character\data\headgear\peltor_co.paa" };
	};
};

class fin_crew_helmet_east : H_HelmetB
{
	scope = 2;
	_generalMacro = "fin_crew_helmet_east";
	AuthNameMacro(fin_crew_helmet_east)
	picture = "\FinMod\addons\fin_character\data\UI\ui_nakkipipo.paa";
	model   = "\FinMod\addons\fin_character\crew_helmet_east.p3d";
	hiddenSelections[] = {"camo1", "camo2"};
	hiddenSelectionsTextures[] = {"\FinMod\addons\fin_character\data\headgear\crew_helmet_east_co.paa"};
	class ItemInfo : HeadgearItem
	{
		mass = 5;
		uniformModel = "\FinMod\addons\fin_character\crew_helmet_east.p3d";
		allowedSlots[] = {BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
		modelSides[] = {3, 2};
		hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				passThrough = 1;
			};
		};
	};		
};

/*
class fin_peltor_comtacII: H_HelmetB
{
	scope = 2;
	_generalMacro = "fin_peltor_comtacII";
	AuthNameMacro(fin_peltor_comtacII)
	picture = "\FinMod\addons\fin_character\data\UI\ui_comtacII.paa";
	model   = "\FinMod\addons\fin_character\peltor_comtacII.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\FinMod\addons\fin_character\data\peltor_co.paa"};
	class ItemInfo : HeadgearItem
	{
		mass = 5;
		uniformModel = "\FinMod\addons\fin_character\peltor_comtacII.p3d";
		allowedSlots[] = {BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
		modelSides[] = {3, 2};
		hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				passThrough = 1;
			};
		};
	};		
};
*/
/*
//OPS-Core
class fin_m10_Helmet: H_HelmetB
{
	scope = 2;
	AuthNameMacro(fin_m10_Helmet)
	picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
	model   = "\FinMod\addons\fin_character\m10helmet.p3d";
	hiddenSelections[] = {"camo1", "camo2"};
	hiddenSelectionsTextures[] = {"\FinMod\addons\fin_character\data\m10helmet_co.paa"};
	class ItemInfo : HeadgearItem
	{
		mass = 50;
		uniformModel = "\FinMod\addons\fin_character\m10helmet.p3d";
		allowedSlots[] = {BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
		modelSides[] = {3, 2};
		hiddenSelections[] = {"camo1", "camo2"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 10;
				passThrough = 0.5;
			};
		};
	};		
};
*/