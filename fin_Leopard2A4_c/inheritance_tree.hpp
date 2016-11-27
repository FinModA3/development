/*	A3 DEFAULT INHERITANCE TREE START */
// Do not modify the inheritance tree, unless you want to alter game's internal configs, or REALLY know what you're doing.
class LandVehicle;
class Tank : LandVehicle
{
	class NewTurret;
	class Sounds;
	class HitPoints;
};
class Tank_F : Tank
{
	class Turrets
	{
		class MainTurret :NewTurret
		{
			class Turrets
			{
				class CommanderOptics;
			};
		};
	};
	class AnimationSources;
	class ViewPilot;
	class ViewOptics;
	class ViewCargo;
	class HeadLimits;
	class HitPoints : HitPoints
	{
		class HitHull;
		class HitEngine;
		class HitLTrack;
		class HitRTrack;
	};
	class Sounds : Sounds
	{
		class Engine;
		class Movement;
	};
};
/*	A3 DEFAULT INHERITANCE TREE END	*/