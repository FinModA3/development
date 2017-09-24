
class fin_17Rnd_glock_mag: CA_Magazine
{
	scope = 2; /// or 2, to be precise
	AuthNameMacro(fin_17Rnd_glock_mag)
	//descriptionMacro(fin_30Rnd_rk_mag)
	picture = "\FinMod\addons\fin_pistols\fin_g17\data\ui\g17_mag_ca.paa"; /// just some icon
	mass = 4;

	ammo = fin_ammo_9x19;		//B_762x39_Ball
	count = 17;
	initSpeed = 375;
	tracersEvery = 0;
	lastRoundsTracer = 0;
};