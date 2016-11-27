class CfgWeapons {
	class missiles_titan_static;
	class tb_launcher_rbs70 : missiles_titan_static {
		magazines[] = {"tb_missile_BOLIDE"};
		displayName = "RBS70";
		minRange = 100;
		midRange = 3000;
		midRangeProbab = 0.9;
		maxRange = 8000;
		maxRangeProbab = 0.3;
		weaponLockDelay = 5;
	};
};

class CfgAmmo {
	class M_Titan_AA;
	class tb_missile_BOLIDE: M_Titan_AA {
		indirectHitRange = 30;
		manualControl = 1;
		maneuvrability = 10;
		maxControlRange = 8000;
		maxSpeed = 680;
		thrust = 700;
		simulationStep = 0.01;
        airFriction = 0.1;
        sideAirFriction = 0.16;
		cmImmunity = 1;
		trackOversteer = 0.5;
		trackLead = 0.75;
		fuseDistance = 100;
		tb_hasProx = 1;
		tb_proxDet = "tb_missile_BOLIDE_Det";
		tb_sensorFOV = 60;
		tb_sensorRAN = 30;
		ACE_FRAG_SKIP = 0;
		ACE_FRAG_FORCE = 1;
		ACE_FRAG_METAL = 2500;
		ACE_FRAG_CHARGE = 600;
		ACE_FRAG_GURNEY_C = 2800; //Assuming similar to Octol 72/25
		ACE_FRAG_GURNEY_K = 1/2;		
	};
	class GrenadeBase;
	class tb_missile_BOLIDE_Det: GrenadeBase {
		ACE_FRAG_SKIP = 0;
		ACE_FRAG_FORCE = 1;
		ACE_FRAG_METAL = 2500;
		ACE_FRAG_CHARGE = 600;
		ACE_FRAG_GURNEY_C = 2800; //Assuming similar to Octol 72/25
		ACE_FRAG_GURNEY_K = 1/2;
		indirectHitRange = 30;
		hit = 100;
		indirectHit = 50;		
		explosionTime = 0.001;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap_fly.p3d";		
		class CamShakeExplode {
			power = "(110*0.2)";
			duration = "((round (110^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((8 + 110^0.5)*8)";
		};
		class CamShakeHit {
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};		
	};


};

class CfgMagazines {
	class 1Rnd_GAA_missiles;
	class tb_missile_BOLIDE: 1Rnd_GAA_missiles {
		ammo = "tb_missile_BOLIDE";
		displayName = "BOLIDE";
		displayNameShort = "BOLIDE";
		initSpeed = 250;
		maxLeadSpeed = 750;
		count = 1;
	};
};
