// tkiv 2000 magazines
class CA_Magazine;
class fin_5Rnd_TKiv2000_mag: CA_Magazine
{
	scope = 2;
	AuthNameMacro(fin_5Rnd_TKiv2000_mag)
	picture = "\FinMod\addons\fin_tkiv2000\data\ui\tkiv2000_mag_ca.paa";
	magazineGroup[]	= {}; // all magazines in the same group may be used in weapon that has the group defined as compatible
	ammo = "fin_B_86x70_Ball";
	mass = 12;
	count = 5; // magazine capacity
	initSpeed = 910; // projectile speed
	tracersEvery = 0; 
	lastRoundsTracer = 0;
};