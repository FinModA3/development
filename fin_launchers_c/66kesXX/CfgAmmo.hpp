class fin_kes_base : RocketBase
{
	AIAmmoUsageFlags = "128+256+512";
	model = "FinMod\addons\fin_launchers\66kesXX\rocket.p3d";
	cost = 200;

	initTime = 0;
	thrustTime = 0;
	thrust = 0;

	fuseDistance = 5;
	audibleFire = 16;
	visibleFire = 28;
	whistleDist = 4;
	whistleOnFire = 1;
	timeToLive = 12;

	indirectHit = 10;		// Probs ok
	indirectHitRange = 1;	// same as above
	caliber = 0.1;			// Check
	typicalspeed = 900;	// hit value is for this speed; proj_speed/typicalspeed * hit?
	explosive = 0.35;
	maxSpeed = 198;			// max speed for projectile. thrust cant accelerate speed over this

	airFriction = 0.0;
	sideAirFriction = 0.01;
	simulationStep = 0.01;

	CraterEffects = "ATRocketCrater";
	explosionEffects = "ATRocketExplosion";
	effectsMissileInit = "RocketBackEffectsNLAW";
	effectsMissile = "missile3";
	class CamShakeFire
	{
		power = 10;
		duration = 0.5;
		frequency = 20;
		distance = 30;
	};
	class CamShakePlayerFire
	{
		power = 5;
		duration = 0.1;
		frequency = 20;
	};
	class CamShakeHit
	{
		power = 100;
		duration = 1;
		frequency = 20;
	};
};

class fin_66kes88_heat_penetrator : fin_basic_penetrator
{
	RHA(330, 1000)		// RHA 300-330
	hit = 370;
};

class fin_66kes12_hedp_penetrator : fin_basic_penetrator
{
	RHA(120, 1000)		// RHA ??
	hit = 380;
};

class fin_66kes12_heat_penetrator : fin_basic_penetrator
{
	RHA(450, 1000)		// RHA 450
	hit = 410;
};


class fin_66kes88_R : fin_kes_base
{
	ais_ce_penetrators[] = { "fin_66kes88_heat_penetrator" };		// Real armor mod, see https://forums.bistudio.com/topic/161885-real-armor-mod/page-16
	hit = 350;
	indirectHit = 30;
	indirectHitRange = 2;
};

class fin_66kes12_R : fin_kes_base
{
	ais_ce_penetrators[] = { "fin_66kes12_heat_penetrator" };		// Real armor mod, see https://forums.bistudio.com/topic/161885-real-armor-mod/page-16
	hit = 400;
	indirectHit = 35;
	indirectHitRange = 2;
	//maxSpeed = 200;			// max speed for projectile
	//model?
};

class fin_66kes12_rak_R : fin_kes_base
{
	AIAmmoUsageFlags = "64+128+256+512";				// Check armor setting, no need to fire on tanks if doesn't work
	ais_ce_penetrators[] = { "fin_66kes12_hedp_penetrator" };		// Real armor mod, see https://forums.bistudio.com/topic/161885-real-armor-mod/page-16
	hit = 220;
	indirectHit = 35;
	indirectHitRange = 5;
	//maxSpeed = 170;			// max speed for projectile
};
