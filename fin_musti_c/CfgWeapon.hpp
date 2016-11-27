

		class RocketPods 
		{
			artillerycharge = 0.17;
			artillerydispersion = 0.9;
			dispersion = 0.05;
			autofire = false;
			burst = 1;
			displayname = 1000-1400;
			maxrange = 4600;
			maxrangeprobab = 0.05;
			midrange = 2500;
			midrangeprobab = 0.65;
			minrange = 800;
			minrangeprobab = 0.15;
			reloadtime = 0.2;
			soundBurst = 0;
			sounds[] = {"StandardSound"};
			
			class StandardSound {
				begin1[] = {"A3\Sounds_F\weapons\Rockets\Titan_2", 1.77828, 1, 1500};
				soundBegin[] = {"begin1", 1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		
		class fin_musti_weapon : RocketPods 
		{
			scope = 2;
			canlock = LockNo;
			displayName = ;
			type = 65536;
			reloadTime = 3;
			magazineReloadTime = 10;
			modelOptics = "";
			magazines[] = {"fin_musti_HEAT_mag"};
			sounds[] = {"StandardSound"};
			
			class StandardSound 
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"FinMod\addons\fin_launchers\Apilas\sound\Apilas_fire_wip.wav", 2.35, 1, 1100};
				begin2[] = {"FinMod\addons\fin_launchers\Apilas\sound\Apilas_fire_wip.wav", 2.35, 1, 1100};
				soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
			};
			recoil = "launcherBase";
			aiRateOfFire = 10;	// delay between shots at given distance
			aiRateOfFireDistance = 450;
			minRange = 50;
			midRange = 450;
			maxRange = 800;
			cursor = "Rocket";
			cursorSize = 1;
			textureType = "semi";
		};