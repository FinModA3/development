class fin_100Rnd_pkm_mag: CA_Magazine
{
	scope = 2; /// or 2, to be precise
	AuthNameMacro(fin_100Rnd_pkm_mag)
	//descriptionMacro(fin_100rnd_PKM_mag)
	picture = "\FinMod\addons\fin_mgs\PKM\data\UI\pkm_mag_ca.paa"; /// just some icon
	mass = 50;

	ammo = fin_B_762x54mmR_Ball;
	count = 100;
	initSpeed = 825;
	tracersEvery = 0;
	lastRoundsTracer = 0;
};
class fin_100Rnd_pkm_mag_Tracer: fin_100Rnd_pkm_mag
{
	AuthNameMacro(fin_100Rnd_pkm_mag_Tracer)
	ammo = fin_B_762x54mmR_Tracer;
	tracersEvery = 2; /// moar tracers
	lastRoundsTracer = 3; /// tracers everywhere
};