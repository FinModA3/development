class VestItem;
class fin_VestItem : VestItem
{
	type = VEST_SLOT;			/// vests fit into vest slot
	hiddenSelections[] = {};	/// no changeable selections by default
	armor = 5 * 0;				/// what protection does the vest provide
	passThrough = 1;			/// coef of damage passed to total damage
	hitpointName = "HitBody";	/// name of hitpoint shielded by the vest
};

class fin_vest_base : ItemCore
{
	_generalMacro = "fin_vest_base";
	scope = 0;
	weaponPoolAvailable = 1;
	allowedSlots[] = { BACKPACK_SLOT }; /// you should be able to put a vest into backpack
	hiddenSelections[] = {}; /// what selection in model could have different textures

	class ItemInfo : fin_VestItem
	{
		//hiddenSelections[] = { "camo" }; /// what selection in model could have different textures
		//overlaySelectionsInfo[] = { "ghillie_hide" }; /// name of selections to be hidden while wearing certain uniforms
		uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
		hiddenSelections[] = {};
		LOAD(0, 0) /// macro from basicdefines_A3.hpp
	};
};

class fin_m05_vest_base: fin_vest_base
{	
	_generalMacro = "fin_m05_vest_base";
	scope = 0;
	picture = "\FinMod\addons\fin_character\data\UI\ui_m05_vest.paa";
	model   = "FinMod\addons\fin_character\fin_m05_vest.p3d";
	hiddenSelections[] = { "camo", "utility", "radio", "CLS", "CLS_utility", "pkm_mags" };
	hiddenSelectionsTextures[] = { "", "", "", "", "", "" };

	class ItemInfo: ItemInfo
	{
		uniformModel   = "FinMod\addons\fin_character\fin_m05_vest.p3d"; /// what model does the vest use
		hiddenSelections[] = { "camo", "utility", "radio", "CLS", "CLS_utility", "pkm_mags" };
		hiddenSelectionsTextures[] = { "", "", "", "", "", "" };
		containerClass = "Supply200";
		LOAD(10,200) /// macro from basicdefines_A3.hpp
		armor = 2; /// what protection does the vest provide
		passThrough = 0.7; /// coef of damage passed to total damage
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitpointName = "HitChest";
				armor = 8;
				passThrough = 0.1;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 8;
				passThrough = 0.1;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 8;
				passThrough = 0.1;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.1;
			};
		};
	};
};
// m05 vest
class fin_m05_vest_rifleman : fin_m05_vest_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_rifleman)
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "", "", "", "" };
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "", "", "", "" };
		LOAD(10, 128)
	};
};
class fin_m05_vest_ldr : fin_m05_vest_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_ldr)
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "", "", "" };
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa, "", "", """ };
		LOAD(10, 150)
	};
};
class fin_m05_vest_pkm : fin_m05_vest_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_pkm)
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "", "", "", "\FinMod\addons\fin_character\data\vests\pkm_mag_co.paa" };
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "", "", "", "\FinMod\addons\fin_character\data\vests\pkm_mag_co.paa" };
		LOAD(10, 180)
	};
};
class fin_m05_vest_cls : fin_m05_vest_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_cls)
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "", "", "\FinMod\addons\fin_character\data\vests\CLS_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "" };
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "", "", "\FinMod\addons\fin_character\data\vests\CLS_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "" };
		LOAD(10, 130)
	};
};
// m05 flak jacket
class fin_m05_vest_wflak_base : fin_vest_base
{
	scope = 0;
	_generalMacro = "fin_m05_vest_wflak_base";
	picture = "\FinMod\addons\fin_character\data\UI\ui_m05_sirparl.paa";
	model = "FinMod\addons\fin_character\fin_m05_flak.p3d";
	hiddenSelections[] = { "camo", "utility", "pkm_mags", "CLS" };
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_flak_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "\FinMod\addons\fin_character\data\vests\pkm_mag_co.paa", "\FinMod\addons\fin_character\data\vests\CLS_co.paa" };
	class ItemInfo : ItemInfo
	{
		uniformModel = "FinMod\addons\fin_character\fin_m05_flak.p3d";
		containerClass = "Supply140";
		LOAD(200, 140) /// macro from basicdefines_A3.hpp
		class HitpointsProtectionInfo
		{
			class Chest
			{
				HitpointName = "HitChest";
				armor = 20;
				PassThrough = 0.2;
			};
			class Diaphragm
			{
				HitpointName = "HitDiaphragm";
				armor = 20;
				PassThrough = 0.2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 20;
				passThrough = 0.2;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.2;
			};
			class Arms
			{
				hitpointName = "HitArms";
				armor = 4;
				passThrough = 0.7;
			};
		};
		hiddenSelections[] = { "camo", "utility", "pkm_mags", "CLS" };
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_flak_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "\FinMod\addons\fin_character\data\vests\pkm_mag_co.paa", "\FinMod\addons\fin_character\data\vests\CLS_co.paa" };
	};
};
class fin_m05_vest_wflak_ldr : fin_m05_vest_wflak_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_wflak_ldr)
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_flak_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "", "" };
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_flak_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "", "" };
	};
};

class fin_m05_vest_wflak_rifleman: fin_m05_vest_wflak_base
{	
	scope = 2;
	AuthNameMacro(fin_m05_vest_wflak_rifleman)
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_flak_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "", "" };
	class ItemInfo:  ItemInfo 
	{
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_flak_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "", "" };
	};
};
class fin_m05_vest_wflak_pkm: fin_m05_vest_wflak_base
{	
	scope = 2;
	AuthNameMacro(fin_m05_vest_wflak_pkm)
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_flak_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "\FinMod\addons\fin_character\data\vests\pkm_mag_co.paa", "" };

	class ItemInfo:  ItemInfo 
	{
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_flak_co.paa", "\FinMod\addons\fin_character\data\vests\m05_vest_co.paa", "\FinMod\addons\fin_character\data\vests\pkm_mag_co.paa", "" };
	};
};
class fin_m05_vest_wflak_CLS: fin_m05_vest_wflak_base
{	
	scope = 2;
	AuthNameMacro(fin_m05_vest_wflak_CLS)
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_flak_co.paa", "", "", "\FinMod\addons\fin_character\data\vests\CLS_co.paa" };
	class ItemInfo:  ItemInfo 
	{
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\vests\m05_flak_co.paa", "", "", "\FinMod\addons\fin_character\data\vests\CLS_co.paa" };
	};
};
/*
// m05 ballistic vest
class fin_m05_vest_wball_base : fin_m05_vest_wflak_base
{
	scope = 0;
	_generalMacro = "fin_m05_vest_wball_base";
	class ItemInfo : ItemInfo
	{
		LOAD(400, 140) /// macro from basicdefines_A3.hpp
			class HitpointsProtectionInfo
		{
			class Chest
			{
				HitpointName = "HitChest";
				armor = 20;
				PassThrough = 0.2;
			};
			class Diaphragm
			{
				HitpointName = "HitDiaphragm";
				armor = 20;
				PassThrough = 0.2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 20;
				passThrough = 0.2;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.2;
			};
			class Arms
			{
				hitpointName = "HitArms";
				armor = 4;
				passThrough = 0.7;
			};
		};
	};
};
class fin_m05_vest_wball_rifleman : fin_m05_vest_wball_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_wball_rifleman)
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\m05sirpa_co.paa" };
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\m05sirpa_co.paa" };
	};
};
class fin_m05_vest_wball_ldr : fin_m05_vest_wball_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_wball_ldr)
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\m05sirpa_co.paa" };
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\m05sirpa_co.paa" };
	};
};
class fin_m05_vest_wball_pkm : fin_m05_vest_wball_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_wball_pkm)
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\m05sirpa_co.paa" };
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\m05sirpa_co.paa" };
	};
};
class fin_m05_vest_wball_CLS : fin_m05_vest_wball_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_wball_CLS)
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\m05sirpa_co.paa" };
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\m05sirpa_co.paa" };
	};
};
*/