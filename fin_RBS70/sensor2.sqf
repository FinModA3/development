/*
 * Author: Toadball
 * Derived from nou's laser code
 * Checks 
 *
 * Arguments:
 * 0: Missile <object>
 * 1: Direction vector (will be normalized) <vector>
 * 2: Sensor FOV in degrees <number>
 * 3: Sensor Range in metres <number>
 * 
 * Return value:
 * Array, [Strongest compatible laser spot ASL pos, owner object] Nil array values if nothing found.
 
 

_dir being the direction of the seeker or the missile or whatever

get the pos of the missile, get the vector to the point you are wanting to test (so the aircraft i guess)
then get the dot product of the dir and the vector to the point
then see if the dot product is larger than the cosine of the seekers field of view

 */
 
_res = [_laserPos, _laserDir, _divergence] call FUNC(shootCone);
{
	_testPoint = _x select 0;
	_testPointVector = vectorNormalized (_testPoint vectorDiff _pos);
	_testDotProduct = _dir vectorDotProduct _testPointVector;
	if(_testDotProduct > _seekerCos) then {
		_spots pushBack [_testPoint, _owner];
	};
} forEach (_res select 2);
 
