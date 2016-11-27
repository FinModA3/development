// tkiv 2000 ammo
class BulletBase;

class fin_B_86x70_Ball: BulletBase
{
	cartridge = "FxCartridge_127"; // cartridge that is ejected
	model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	
	tracerScale = 1.2; // how big is the flying tracer
	tracerStartTime = 0.075; // seconds
	tracerEndTime = 1; // seconds
	
	caliber = 2.2; // caliber 1 equals 6.5mm round
	
	typicalSpeed = 910;
	airFriction = -0.00048;
	
	hit = 20;
	indirectHit = 0;
	indirectHitRange = 0;
	
	airLock = 1;
	
	class CamShakeExplode
	{
		power = (10^0.5);
		duration = "((round (10^0.5))*0.2 max 0.2)";
		frequency = 20;
		distance = ((10^0.5)*3);
	};
	
	class CamShakeHit
	{
		power = 10;
		duration = "((round (10^0.25))*0.2 max 0.2)";
		frequency = 20;
		distance = 1;
	};
	
	visibleFire = 10; // how big does the shooter seem to be for AI to take notice after he shoots
	audibleFire = 15; // how big does the shooter seem to be for AI to take notice after he shoots
	visibleFireTime = 3; // how long is he visible
	cost = 7; // comes into shoot efficiency calculation mentioned in the weapon
	
	aiAmmoUsageFlags = AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir; /// see http://forums.bistudio.com/showthread.php?159711-Development-Branch-Captain-s-AI-Log&p=2945231&viewfull=1#post2945231 for details /// values are defined in basicDefines_A3.hpp
	
	dangerRadiusBulletClose 		= 8;	// defines how far the AI gets alerted by the projectile's impact or explosion. Default value -1 makes this distance be automatically derived from the hit and indirectHit properties.
	dangerRadiusHit 				= 12;	// defines how far the AI gets alerted by the bullet's pass. Default value -1 disables the detection. (works only for bullets, no other projectiles)
	suppressionRadiusBulletClose 	= 6;	// defines the max. distance at which the AI becomes suppressed by the projectile's impact or explosion. Default value -1 disables the suppressive effect
	suppressionRadiusHit 			= 8;	// defines the max. distance at which the AI becomes suppressed by the bullet's pass. Default value -1 disables the suppressive effect (works only for bullets, no other projectiles)
	shootDistraction 				= 10;	// -1 by default to be computed from visibleFire and audibleFire, describes how much does the shoot distract the shooter
};