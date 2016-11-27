#include "telamiina/CfgVehicles.hpp"
#include "telamiina/CfgAmmo.hpp"
#include "telamiina/CfgMagazines.hpp"
#include "telamiina/CfgWeapons.hpp"
#include "../fin_main/basicDefines_A3.hpp"

class CfgPatches {
	class fin_explosives_c {
		units[]={};
		weapons[]={"telamiina" };
		magazines[] = {"telamiina_mag" };
		ammo[] = {"telamiina_ammo"};
		requiredVersion = 0.1;
		requiredAddons[] = {"fin_explosives","fin_main"};
	};
};

class CfgMineTriggers {
	class TankTriggerMagnetic;
};