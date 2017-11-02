class DefaultEventhandlers;
class CfgPatches
{
	class fin_masi
	{
		units[] = {"fin_masi"};
		weapons[] = {}; 
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgVehicles
{
	class Truck_01_base_F;
	class B_Truck_01_transport_F : Truck_01_base_F {
		class Sounds;
	};
	class fin_masi_base: B_Truck_01_transport_F
	{
		// Replace with macro
		//dlc = "sfp";
		// author="Swedish Forces Pack (SteelRat)";
		displayname="MASI";
		model="\fin_masi\fin_masi.p3d";
		picture="\fin_masi\ui\fin_masi_ca.paa";
		scope=1;
		side=2;
		attenuationEffectType = "CarAttenuation";
		faction = fin_faction_fdf;
		crew = "fin_Rifleman_RK95";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3", "SlingLoadCargo4"};
		transportSoldier = 1;
		#include "config\lights.hpp"
		#include "config\sound.hpp"
		// driverAction = "fin_masi_driver";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		maxFordingDepth = 0.8;
		armor = 100;
		class HitPoints
		{
			class HitBody
			{
				armor = 1;
				material = -1;
				name = "body";
				visual = "camo";
				passThrough = 1;
				explosionShielding = 0.5;
			};
			class HitEngine
			{
				armor = 0.12;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0;
				explosionShielding = 0.9;
			};
			class HitLFWheel
			{
				material = -1;
				name = "wheel_1_1";
				armor = 0.12;
				explosionShielding = 0.8;
				passThrough = 0;
				visual = "";
			};
			class HitLB2Wheel: HitLFWheel
			{
				name = "wheel_1_3";
			};
			class HitLBWheel: HitLFWheel
			{
				name = "wheel_1_2";
			};
			class HitRFWheel: HitLFWheel
			{
				name = "wheel_2_1";
			};
			class HitRB2Wheel: HitLFWheel
			{
				name = "wheel_2_3";
			};
			class HitRBWheel: HitLFWheel
			{
				name = "wheel_2_2";
			};
			class HitLF2Wheel : HitLFWheel
			{
				name = "wheel_1_2";
			};
			class HitRF2Wheel : HitLFWheel
			{
				name = "wheel_2_2";
			};
			class HitLMWheel : HitLFWheel
			{
				name = "wheel_2_4";
			};
			class HitRMWheel : HitLFWheel
			{
				name = "wheel_2_4";
			};
			
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0.2;
			};
			class Hitwindow_1 { armor = 2.6; material = -1; name = "window_1"; visual = "window_1"; passThrough = 0; explosionShielding = 18;};
			class Hitwindow_2:Hitwindow_1 { name = "window_2"; visual = "window_2";};
			class Hitwindow_3:Hitwindow_1 { name = "window_3"; visual = "window_3"; };
			class Hitwindow_4:Hitwindow_1 { name = "window_4"; visual = "window_4"; };
			class Hitwindow_5:Hitwindow_1 { name = "window_5"; visual = "window_5";};
			class Hitwindow_6:Hitwindow_1 { name = "window_6"; visual = "window_6"; };
			class Hitwindow_7:Hitwindow_1 { name = "window_7"; visual = "window_7"; };
			class HitRGlass:Hitwindow_1 { name = "Lglass"; visual = "Lglass"; };
			class HitLGlass:Hitwindow_1 { name = "Rglass"; visual = "Rglass"; };			
		};
		class Turrets {};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_pos";
				direction = "exhaust_dir";
				effect = "ExhaustEffectHEMTT";
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		class Wheels
		{
			class L1
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 80;
				MOI = 40;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 10000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 1000;
				springStrength = 25000;
				springDamperRate = 5000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{ 0,1 },{ 0.5,1 },{ 1,1 }};
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class R1: L1
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class R2: R1
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
		};
		class AnimationSources
		{
			class repair
			{
				displayname="Repair";
				author = "Swedish Forces Pack (Echo)";
				source = "user"; 
				animPeriod = 0; 
				initPhase=1;
			};
			class is_towing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class trailer_hitch : is_towing {};
			class is_transporting : is_towing {};
			class HitLFWheel {
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			
			class HitRFWheel : HitLFWheel { hitpoint = "HitRFWheel"; };
			class HitLBWheel : HitLFWheel { hitpoint = "HitLBWheel"; };
			class HitRBWheel : HitLFWheel {	hitpoint = "HitRBWheel"; };
			class HitBody {
				source = "Hit";
				hitpoint = "Hitbody";
				raw = 1;
			};
			class Hitwindow_1 {
				source = "Hit";
				hitpoint = "Hitwindow_1";
				raw = 1;
			};
			class Hitwindow_2 : Hitwindow_1 { hitpoint = "Hitwindow_2"; };
			class Hitwindow_3 : Hitwindow_1 { hitpoint = "Hitwindow_3"; };
			class Hitwindow_4 : Hitwindow_1 { hitpoint = "Hitwindow_4"; };
			class Hitwindow_5 : Hitwindow_1 { hitpoint = "Hitwindow_5"; };
			class Hitwindow_6 : Hitwindow_1 { hitpoint = "Hitwindow_6"; };
			class Hitwindow_7 : Hitwindow_1 { hitpoint = "Hitwindow_7"; };
			class Hitwindow_8 : Hitwindow_1 { hitpoint = "Hitwindow_8"; };
			class Hitwindow_9 : Hitwindow_1 { hitpoint = "Hitwindow_9"; };
			class wipers
			{
				source = "user";
				animPeriod = 0.7875;
				initPhase = 0;
			};
			class wipers2
			{
				source = "user";
				animPeriod = 0.7875;
				initPhase = 0;
			};
			class door_1
			{
				source = "user";
				animPeriod = 0.7875;
				initPhase = 0;
			};
		};
		class UserActions { };
		class Library {
			libTextDesc = $STR_LIB_SFP_TGB30;
		};
	};
	class fin_masi : fin_masi_base
	{
		displayname="MASI";
		scope=2;
	};
};
