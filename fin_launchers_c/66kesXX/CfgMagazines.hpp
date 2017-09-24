class fin_kes_mag_base : FakeMagazine
{
	scope = 1;
	scopeArsenal = 0;
	//picture = "FinMod\addons\fin_launchers\66kes88\data\UI\gear_66kesXX_rocket_ca.paa";
	picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
	selectionFireAnim = "zasleh";
	count = 1;
	initSpeed = 198;
	mass = 0;
	allowedSlots[] = { 801,701,901 };
	type = "6 * 256";
};

class fin_66kes88_mag : fin_kes_mag_base
{
	AuthNameMacro(fin_66kes88_mag)
	model = "FinMod\addons\fin_launchers\66kesXX\rocket.p3d";
	//picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
	ammo = "fin_66kes88_R";
};

class fin_66kes12_mag : fin_kes_mag_base
{
	AuthNameMacro(fin_66kes12_mag)
	model = "FinMod\addons\fin_launchers\66kesXX\rocket.p3d";
	//picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
	ammo = "fin_66kes12_R";
	initSpeed = 200;
};

class fin_66kes12_rak_mag : fin_66kes12_mag
{
	AuthNameMacro(fin_66kes12_rak_mag)
	//picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
	ammo = "fin_66kes12_rak_R";
};
