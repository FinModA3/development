class fin_apilas_R : RocketBase
{
	AIAmmoUsageFlags = "128+256+512";
	model = "FinMod\addons\fin_launchers\Apilas\rocket_inflight.p3d";
	hit = 600;
	indirectHit = 10;		// Probs ok
	indirectHitRange = 1;	// same as above
	caliber = 0.1;
	ais_ce_penetrators[] = { "fin_apilas_heat_penetrator" };		// Real armor mod, see https://forums.bistudio.com/topic/161885-real-armor-mod/page-16

	airFriction = 0.64;
	sideAirFriction = 0.01;
	simulationStep = 0.01;

	maxSpeed = 293;
	typicalSpeed = 900;

	initTime = 0;
	thrustTime = 0;
	thrust = 0;

	fuseDistance = 5;
	explosive = 0.35;
	visibleFire = 40;
	audibleFire = 25;
	whistleDist = 4;
	whistleOnFire = 1;

	timeToLive = 12;
	CraterEffects = "ATRocketCrater";
	explosionEffects = "ATRocketExplosion";
	effectsMissileInit = "RocketBackEffectsNLAW";
	effectsMissile = "missile3";
	class CamShakeFire
	{
		power = 20;
		duration = 3;
		frequency = 30;
		distance = 30;
	};
	class CamShakePlayerFire
	{
		power = 15;
		duration = 4;
		frequency = 30;
	};
	class CamShakeHit
	{
		power = 100;
		duration = 2;
		frequency = 20;
	};
};

class fin_apilas_heat_penetrator : fin_basic_penetrator
{
	RHA(720,1000)
};
