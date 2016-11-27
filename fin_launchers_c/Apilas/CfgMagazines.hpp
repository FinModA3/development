class fin_apilas_mag : FakeMagazine
{
	scope = 1;
	scopeArsenal = 0;
	AuthNameMacro(fin_apilas_mag)
	model = "FinMod\addons\fin_launchers\Apilas\rocket.p3d";
	modelSpecial = "FinMod\addons\fin_launchers\Apilas\apilas_loaded.p3d";
	selectionFireAnim = "zasleh";
	picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
	ammo = "fin_apilas_R";
	count = 1;
	initSpeed = 293;//293
	mass = 0;
	allowedSlots[] = {801,701,901};
	type = 256;
};

class fin_dummy_mag : fin_apilas_mag
{
	scope = 1;
	count = 0;
};