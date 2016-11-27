private ["_unit","_weapon","_used_weapon","_items", "_zeroing", "_dropped_weapon"];

_unit = _this select 0;
_weapon = _this select 1;
//_zeroing = currentZeroing _unit;
_used_weapon = (configFile >> "CfgWeapons" >> _weapon >> "fin_used_launcher") call BIS_fnc_getCfgData;
if (_used_weapon == "") exitWith {};
//Save array of items attached to launcher
_items = secondaryWeaponItems _unit;
//Replace the orginal weapon with the 'usedTube' weapon
_unit addWeapon _used_weapon;
//Makes sure the used tube is still equiped
_unit selectWeapon _used_weapon;
//Re-add all attachments to the used tube
{
    if (_x != "") then {_unit addSecondaryWeaponItem _x};
} count _items;

// AI drops the used tube instantly
if (!(isPlayer _unit)) then 
{
	_dropped_weapon = createVehicle ["WeaponHolderSimulated", [getPos _unit select 0, getpos _unit select 1, (getpos _unit select 2) + 1], [], 0, "CAN_COLLIDE"];
	_dropped_weapon addWeaponCargoGlobal [_used_weapon, 1];
	_unit removeWeapon _used_weapon;
};