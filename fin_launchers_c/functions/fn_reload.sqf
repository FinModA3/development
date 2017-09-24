if (isPlayer (_this select 0) && hasInterface) then {	// This prevents EventHandler from executing on AI units (where _player is the "owner")
	["weapon", {
		params ["_player", "_weapon"];
		if (local _player) then
		{
			private _weaponName = getText (_weapon call CBA_fnc_getItemConfig >> "displayName");
			private _magazine = getArray (_weapon call CBA_fnc_getItemConfig >> "magazines") select 0;
			_launcher = secondaryWeapon _player;
			_launcher_mag = getArray (_launcher call CBA_fnc_getItemConfig >> "magazines") select 0;
			_items = secondaryWeaponItems _player;
			
			// If launcher is active weapon
			if ([ _weapon call CBA_fnc_getItemConfig >> "fin_disposable_launcher", "number", 0] call CBA_fnc_getConfigEntry == 1) then {
				_player addMagazine _magazine;
			}
			else {
				if ([ (_launcher) call CBA_fnc_getItemConfig >> "fin_disposable_launcher", "number", 0] call CBA_fnc_getConfigEntry == 1) then {
					_player removeMagazines _launcher_mag;
					_player setAmmo [_launcher, 0];
				};
			};
		};
		//systemChat format ["%1|| %2: %3|| %4: %5", name _player, _weaponName, _launcher, _magazine, _launcher_mag];
	}] call CBA_fnc_addPlayerEventHandler;
};