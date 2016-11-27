	class fin_hk69a1 : hgun_P07_F {
		scope = 2;
		AuthNameMacro(fin_hk69a1)
		model = "\FinMod\addons\fin_pistols\fin_hk69a1\hk69a1.p3d";
		picture = "\FinMod\addons\fin_pistols\fin_hk69a1\data\ui\hk69a1_ca.paa";
		minRange = 50;
		minRangeProbab = 0.3;
		midRange = 200;
		midRangeProbab = 0.6;
		maxRange = 350;
		maxRangeProbab = 0.1;
		aiRateOfFire = 1;	// delay between shots at given distance
		aiRateOfFireDistance = 25;
		discreteDistance[] = {50,100,150,200,250,300,350};
		discreteDistanceInitIndex = 0;
		distanceZoomMin = 50;
		distanceZoomMax = 350;
		inertia = 0.2;
		dexterity = 1.8;
		initSpeed = 77.5;
		
		class WeaponSlotsInfo {
			mass = 8;
			
			class CowsSlot {};
			
			class MuzzleSlot {};
			
			class PointerSlot {};
		};
		magazines[] = {"fin_40mmHE_1rnd","fin_40mmWS_1rnd"};
		dispersion = 0.02;
		reloadTime = 0.13;
		ffCount = 1;
	};