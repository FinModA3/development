class cfgAmmo {
	class ATMine_Range_Ammo;
	class Telamiina_ammo: ATMine_Range_Ammo {
		icon = "iconExplosiveAT";
		mapsize = 1;
		explosionType = "mine";
		triggerWhenDestroyed = 1;
		underwaterHitRangeCoef = 2;
		mineTrigger="TankTriggerMagnetic";
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",3,1,50};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\mech_activate_mine_1",0.56234133,1,30};
		soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a",0.56234133,1,30};
		aiAmmoUsageFlags = 16;
	};
};