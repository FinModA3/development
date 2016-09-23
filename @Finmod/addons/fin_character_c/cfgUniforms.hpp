class UniformItem: InventoryItem_Base_F
{
	type = UNIFORM_SLOT; /// to what slot does the uniform fit
};

class fin_m05_uniform: Itemcore
{
	scope = 2; /// scope needs to be 2 to have a visible class
	allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
	AuthNameMacro(fin_m05_uniform)
	picture = "\FinMod\addons\fin_character\data\UI\ui_m05_uniform"; /// this icon fits the uniform surprisingly well
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d"; /// how does the uniform look when put on ground
	hiddenSelections[] = { "camo" };
	hiddenSelectionsTextures[] = { "\Finmod\addons\fin_character\data\uniforms\m05_uniform_co.paa" };

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Fin_Soldier_base_F; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
		containerClass = Supply40; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
		mass = 40; /// combined weight and volume
	};
};
/*
class fin_m04_uniform : fin_m05_uniform
{
	AuthNameMacro(fin_m04_uniform)
	picture = "\FinMod\addons\fin_character\data\UI\ui_m04_uniform";
	hiddenSelections[] = { "camo" };
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\m04_uniform_co.paa" };
	class ItemInfo : ItemInfo
	{
		uniformClass = fin_Soldier_PK_base; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
		containerClass = Supply40; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
		mass = 40; /// combined weight and volume
	};
};

class fin_m05_MP_uniform : fin_m05_uniform
{
	AuthNameMacro(fin_m05_MP_uniform)
	picture = "\FinMod\addons\fin_character\data\UI\ui_m05_mp_uniform";
	hiddenSelections[] = { "camo" };
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\m05_mp_uniform_co.paa" };
	class ItemInfo : ItemInfo
	{
		uniformClass = fin_Soldier_MP_base; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
		containerClass = Supply40; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
		mass = 40; /// combined weight and volume
	};
}; 

class fin_m05_sf_uniform : fin_m05_uniform
{
	AuthNameMacro(fin_m05_sf_uniform)
	picture = "\FinMod\addons\fin_character\data\UI\ui_m05_sf_uniform";
	hiddenSelections[] = { "camo" };
	hiddenSelectionsTextures[] = { "\FinMod\addons\fin_character\data\m05_sf_uniform_co.paa" };
	class ItemInfo : ItemInfo
	{
		uniformClass = fin_soldier_SF_base; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
		containerClass = Supply40; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
		mass = 40; /// combined weight and volume
	};
};
*/