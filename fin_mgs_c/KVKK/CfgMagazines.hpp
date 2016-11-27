class fin_100Rnd_KVKK_mag: CA_Magazine
{
	scope = 2; /// or 2, to be precise
	AuthNameMacro(fin_100Rnd_KVKK_mag)
	//descriptionMacro(fin_100rnd_KVKK_mag)
	//picture = "\FinMod\addons\fin_mgs\KVKK\data\UI\KVKK_mag_ca.paa"; /// just some icon
	mass = 60;

	ammo = fin_B_762x39_Ball;
	count = 100;
	initSpeed = 715;
	tracersEvery = 0;
	lastRoundsTracer = 0;
};
class fin_100Rnd_KVKK_mag_Tracer: fin_100Rnd_KVKK_mag
{
	AuthNameMacro(fin_100Rnd_KVKK_mag_Tracer)
	ammo = fin_B_762x39_Tracer;
	tracersEvery = 2; /// moar tracers
	lastRoundsTracer = 3; /// tracers everywhere
};