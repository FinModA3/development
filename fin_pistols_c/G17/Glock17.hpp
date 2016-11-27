	class fin_g17 : hgun_P07_F {
		scope = 2;
		AuthNameMacro(fin_g17)
		model = "\FinMod\addons\fin_pistols\fin_g17\glock17.p3d";
		picture = "\FinMod\addons\fin_pistols\fin_g17\data\ui\g17_ca.paa";
		minRange = 5;
		minRangeProbab = 0.3;
		midRange = 25;
		midRangeProbab = 0.6;
		maxRange = 50;
		maxRangeProbab = 0.1;
		aiRateOfFire = 2;	// delay between shots at given distance
		aiRateOfFireDistance = 25;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		inertia = 0.2;
		dexterity = 1.8;
		initSpeed = 280;
		
		class WeaponSlotsInfo {
			mass = 8;
			
			class CowsSlot {};
			
			class MuzzleSlot {};
			
			class PointerSlot {};
		};
		magazines[] = {"fin_17Rnd_glock_mag"};
		dispersion = 0.02;
		reloadTime = 0.13;
		ffCount = 1;
	};