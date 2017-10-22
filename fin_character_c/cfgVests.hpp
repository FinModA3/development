
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

	class ItemInfo: ItemInfo
	{
		uniformModel   = "FinMod\addons\fin_character\fin_m05_vest.p3d"; /// what model does the vest use
		LOAD(60,80) /// macro from basicdefines_A3.hpp
		armor = 2; /// what protection does the vest provide
		passThrough = 0.7; /// coef of damage passed to total damage
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitpointName = "HitChest";
				armor = 4;
				passThrough = 0.1;
				explosionShielding = 1;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 4;
				passThrough = 0.1;
				explosionShielding = 1;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 4;
				passThrough = 0.1;
				explosionShielding = 1;
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
	model = "FinMod\addons\fin_character\fin_m05_vest_rifleman.p3d";
	class ItemInfo : ItemInfo
	{
		uniformModel   = "FinMod\addons\fin_character\fin_m05_vest_rifleman.p3d";
		LOAD(60, 80)
	};
};
class fin_m05_vest_ldr : fin_m05_vest_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_ldr)
	model = "FinMod\addons\fin_character\fin_m05_vest_ldr.p3d";
	class ItemInfo : ItemInfo
	{
		uniformModel   = "FinMod\addons\fin_character\fin_m05_vest_ldr.p3d";
		LOAD(60, 80)
	};
};
class fin_m05_vest_pkm : fin_m05_vest_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_pkm)
	model = "FinMod\addons\fin_character\fin_m05_vest_pkm.p3d";
	class ItemInfo : ItemInfo
	{
		uniformModel   = "FinMod\addons\fin_character\fin_m05_vest_pkm.p3d";
		LOAD(60, 180)
	};
};/*
class fin_m05_vest_pkm_assistant : fin_m05_vest_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_pkm_assistant)
	model = "FinMod\addons\fin_character\fin_m05_vest_pkm_assistant.p3d";
	class ItemInfo : ItemInfo
	{
		uniformModel   = "FinMod\addons\fin_character\fin_m05_vest_pkm_assistant.p3d";
		LOAD(60, 180)
	};
};*/
class fin_m05_vest_cls : fin_m05_vest_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_cls)
	model = "FinMod\addons\fin_character\fin_m05_vest_CLS.p3d";
	class ItemInfo : ItemInfo
	{
		uniformModel   = "FinMod\addons\fin_character\fin_m05_vest_CLS.p3d";
		LOAD(60, 100)
	};
};
// m05 flak jacket
class fin_m05_vest_wflak_base : fin_vest_base
{
	scope = 0;
	_generalMacro = "fin_m05_vest_wflak_base";
	picture = "\FinMod\addons\fin_character\data\UI\ui_m05_sirparl.paa";
	model = "FinMod\addons\fin_character\fin_m05_flak.p3d";
	class ItemInfo : ItemInfo
	{
		uniformModel = "FinMod\addons\fin_character\fin_m05_flak.p3d";
		LOAD(200, 80)
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck"; // reference to the hit point class defined in the man base class
				armor = 8; // addition to armor of referenced hitpoint
				passThrough = 0.5; // multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName = "HitArms";
				armor = 8;
				passThrough = 0.5;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 64;
				passThrough = 0.8;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 64;
				passThrough = 0.8;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 16;
				passThrough = 0.6;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.8;
			};
		};
		
	};
};
class fin_m05_vest_wflak_ldr : fin_m05_vest_wflak_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_wflak_ldr)
	model = "FinMod\addons\fin_character\fin_m05_flak_ldr.p3d";
	class ItemInfo : ItemInfo
	{
		LOAD(200, 80)
		uniformModel = "FinMod\addons\fin_character\fin_m05_flak_ldr.p3d";
	};	
};

class fin_m05_vest_wflak_rifleman: fin_m05_vest_wflak_base
{	
	scope = 2;
	AuthNameMacro(fin_m05_vest_wflak_rifleman)
	model = "FinMod\addons\fin_character\fin_m05_flak_rifleman.p3d";
	class ItemInfo : ItemInfo
	{
		LOAD(200, 80)
		uniformModel = "FinMod\addons\fin_character\fin_m05_flak_rifleman.p3d";
	};	
};
class fin_m05_vest_wflak_pkm: fin_m05_vest_wflak_base
{	
	scope = 2;
	AuthNameMacro(fin_m05_vest_wflak_pkm)
	model = "FinMod\addons\fin_character\fin_m05_flak_PKM.p3d";
	class ItemInfo : ItemInfo
	{
		LOAD(200, 80)
		uniformModel = "FinMod\addons\fin_character\fin_m05_flak_PKM.p3d";
	};	
};/*
class fin_m05_vest_wflak_pkm_assistant : fin_m05_vest_wflak_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_wflak_pkm_assistant)
		model = "FinMod\addons\fin_character\fin_m05_flak_pkm_assistant.p3d";
	class ItemInfo : ItemInfo
	{
		LOAD(200, 180)
		uniformModel = "FinMod\addons\fin_character\fin_m05_flak_pkm_assistant.p3d";
	};
};*/
class fin_m05_vest_wflak_CLS: fin_m05_vest_wflak_base
{	
	scope = 2;
	AuthNameMacro(fin_m05_vest_wflak_CLS)
	model = "FinMod\addons\fin_character\fin_m05_flak_CLS.p3d";
	class ItemInfo : ItemInfo
	{
		LOAD(200, 140)
		uniformModel = "FinMod\addons\fin_character\fin_m05_flak_CLS.p3d";
	};	
};


// m05 ballistic vest
class fin_m05_vest_wball_base : fin_m05_vest_wflak_base
{
	scope = 0;
	_generalMacro = "fin_m05_vest_wball_base";
	class ItemInfo : ItemInfo
	{
		LOAD(280, 80) /// macro from basicdefines_A3.hpp
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck"; // reference to the hit point class defined in the man base class
				armor = 8; // addition to armor of referenced hitpoint
				passThrough = 0.5; // multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName = "HitArms";
				armor = 8;
				passThrough = 0.5;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 16;
				passThrough = 0.1;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 16;
				passThrough = 0.1;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 16;
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
class fin_m05_vest_wball_rifleman : fin_m05_vest_wball_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_wball_rifleman)
	model = "FinMod\addons\fin_character\fin_m05_ballistic_rifleman.p3d";
	class ItemInfo : ItemInfo
	{
		LOAD(280, 80)
		uniformModel = "FinMod\addons\fin_character\fin_m05_ballistic_rifleman.p3d";
	};
};
class fin_m05_vest_wball_ldr : fin_m05_vest_wball_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_wball_ldr)
	model = "FinMod\addons\fin_character\fin_m05_ballistic_ldr.p3d";
	class ItemInfo : ItemInfo
	{
		LOAD(280, 80)
		uniformModel = "FinMod\addons\fin_character\fin_m05_ballistic_ldr.p3d";
	};
};
class fin_m05_vest_wball_pkm : fin_m05_vest_wball_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_wball_pkm)
	model = "FinMod\addons\fin_character\fin_m05_ballistic_PKM.p3d";
	class ItemInfo : ItemInfo
	{
		LOAD(280, 150)
		uniformModel = "FinMod\addons\fin_character\fin_m05_ballistic_PKM.p3d";
	};
};/*
class fin_m05_vest_wball_pkm_assistant : fin_m05_vest_wball_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_wball_pkm_assistant)
	model = "FinMod\addons\fin_character\fin_m05_ballistic_PKM_assistant.p3d";
	class ItemInfo : ItemInfo
	{
		LOAD(280, 180)
		uniformModel = "FinMod\addons\fin_character\fin_m05_ballistic_PKM_assistant.p3d";
	};
};*/
class fin_m05_vest_wball_CLS : fin_m05_vest_wball_base
{
	scope = 2;
	AuthNameMacro(fin_m05_vest_wball_CLS)
	model = "FinMod\addons\fin_character\fin_m05_ballistic_CLS.p3d";
	class ItemInfo : ItemInfo
	{
		LOAD(280, 100)
		uniformModel = "FinMod\addons\fin_character\fin_m05_ballistic_CLS.p3d";
	};
};