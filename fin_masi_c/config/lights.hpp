selectionBackLights = "back_lights";
selectionBrakeLights = "brake_lights";
selectionDashboard = "light_dashboard";

		class Reflectors
		{
			class Left
			{
				ambient[] = {5,5,5};
				color[] = {1900,1800,1700};
				coneFadeCoef = 10;
				dayLight = 0;
				direction = "light_left_end";
				flareSize = 1;
				hitpoint = "light_left";
				innerAngle = 100;
				intensity = 1;
				outerAngle = 179;
				position = "light_left";
				selection = "light_left";
				size = 1;
				useFlare = 0;
				class Attenuation
				{
					constant = 0;
					hardLimitEnd = 60;
					hardLimitStart = 30;
					linear = 0;
					quadratic = 0.25;
					start = 1.0;
				};
			};
			class Right: Left
			{
				position = "light_right";
				direction = "light_right_end";
				hitpoint = "light_right";
				selection = "light_right";
			};
			class Left2: Left
			{
				position = "light_left_flare";
				useFlare = 1;
			};
			class Right2: Right
			{
				position = "light_right_flare";
				useFlare = 1;
			};			
		};
		aggregateReflectors[] = {{ "Left","Right","Left2","Right2"}};