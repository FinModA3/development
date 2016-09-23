class CA_Magazine;
class fin_30Rnd_rk_mag: CA_Magazine
{
	scope = public; /// or 2, to be precise
	AuthNameMacro(fin_30Rnd_rk_mag)
	//descriptionMacro(fin_30Rnd_rk_mag)
	picture = "\FinMod\addons\fin_rk_rifles\data\UI\gear_mag30_rk_ca.paa"; /// just some icon
	mass = 19;

	ammo = fin_B_762x39_Ball;		//B_762x39_Ball
	count = 30;
	initSpeed = 715;
	tracersEvery = 0;
	lastRoundsTracer = 0;
};
class fin_30Rnd_rk_mag_Tracer: fin_30Rnd_rk_mag
{
	AuthNameMacro(fin_30Rnd_rk_mag_Tracer)
	//descriptionMacro(fin_30Rnd_rk_mag_Tracer)
	ammo = fin_B_762x39_Tracer;
	tracersEvery = 1; /// moar tracers
	lastRoundsTracer = 30; /// tracers everywhere
};