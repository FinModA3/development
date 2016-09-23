private ["_unit", "_weaponConfig", "_magazine", "_weapon"];

_unit = missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player];
_weaponConfig = configFile >> "cfgWeapons" >> secondaryWeapon _unit;
_weapon = configName _weaponConfig;
if ((configFile >> "CfgWeapons" >> _weapon >> "fin_disposable_launcher") call BIS_fnc_getCfgData != 1) exitWith{};

_magazine = getArray (_weaponConfig >> "magazines") select 0;		// Only one possible magazine
_unit addMagazine _magazine;

//condition: triggers when launcher is back on back or fired
[
	{
		(_this select 0) != currentWeapon (_this select 1)
	},
	// Execution	
	{
		(_this select 1) removeMagazines (_this select 2);
		if ( (configFile >> "CfgWeapons" >> _this select 0 >> "fin_used_launcher") call BIS_fnc_getCfgData != currentWeapon (_this select 1) ) then
		{
			// If currenWeapon != fired launcher execute next this if-clause.
			(_this select 1) removeWeapon (_this select 0); (_this select 1) addWeapon (_this select 0); 
			// Give all possible attachments back
			{
				if (_x != "") then {(_this select 1) addSecondaryWeaponItem _x};
			} count _items;
		};
	},
	// Parameters
	[_weapon, _unit, _magazine]
 ] call CBA_fnc_waitUntilAndExecute;

//EH would be better, but this not working...
//_id = ["weapon", {_unit removeMagazines _magazine; _unit removeWeapon _weaponName; player addWeapon _weaponName; ["weapon", _id] call CBA_fnc_removePlayerEventHandler;}] call CBA_fnc_addPlayerEventHandler;