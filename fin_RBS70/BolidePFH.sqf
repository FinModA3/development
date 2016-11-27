//Proximity fuse for BOLIDE SAM.
//by Toadball & VKing
//27-MAR-2015

private ["_launcher","_proj","_fuse","_projAD","_proxDet","_sensorFOV","_sensorRAN"];

if ((getNumber (configFile >> "CfgAmmo" >> ( _this select 4 ) >> "tb_hasProx")) > 0) then {

	_launcher = _this select 0;
	_proj = _this select 6;
	_projAD = getNumber (configFile >> "CfgAmmo" >> ( _this select 4 ) >> "fuseDistance");
	_proxDet = getText (configFile >> "CfgAmmo" >> ( _this select 4 ) >> "tb_proxDet");
	_sensorFOV = getNumber (configFile >> "CfgAmmo" >> ( _this select 4 ) >> "tb_sensorFOV");
	_sensorRAN = getNumber (configFile >> "CfgAmmo" >> ( _this select 4 ) >> "tb_sensorRAN");

	_fuse = [//PFH FNC Start
		{
			private ["_projPos","_spawnedproj","_nearTargets","_vectorDirMissile","_vectorToTarget","_tgt","_targetAngle"];

			(_this select 0) params ["_launcher","_proj","_projAD","_sensorFOV","_sensorRAN","_proxDet"];

			//if the missile is alive do the fuse check, if not remove this PFH
			if (!isNull _proj) then {

				// proximity check: if there is an air object within sensor range of the projectile
				_nearTargets = nearestObjects [_proj, ["Air"], _sensorRAN];
				if (_launcher distance _proj > _projAD  &&  count (_nearTargets) > 0) then {
					_tgt = (_nearTargets) select 0; //get closest air object in sensor range

					//diag_log format ["Timer 1: %1",diag_ticktime];
					
					//check object is in sensor's FOV, if it is, projectile go boom
					_vectorDirMissile = vectorDir _proj;
					_vectorToTarget = (getposASL _proj) vectorFromTo (getposASL _tgt);
					_targetAngle = acos (_vectorDirMissile vectorCos _vectorToTarget);
					
					//diag_log format ["Timer 2: %1",diag_ticktime];
					
					//hintsilent format ["Target angle: %3", _vectorDirMissile, _vectorToTarget, _targetAngle];
					//diag_log format ["Target angle: %3", _vectorDirMissile, _vectorToTarget, _targetAngle];
				  
					//diag_log format ["Timer 3: %1",diag_ticktime];
					
					if (_targetAngle > 60 && _targetAngle < 120) then {
						_projPos = getPos _proj;
						deleteVehicle _proj;
						if (isServer) then {
							_spawnedproj = _proxDet createVehicle _projPos;
						};
						//diag_log format ["Detonation: %1",diag_ticktime];
					};
				};

			} else {
				[_this select 1] call CBA_fnc_removePerFrameHandler; //removes prox fuse PFH
			};
		// PFH FNC End
		}, 0, [_launcher,_proj,_projAD,_sensorFOV,_sensorRAN,_proxDet]
	] call CBA_fnc_addPerFrameHandler;
};