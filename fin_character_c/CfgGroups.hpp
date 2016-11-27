class CfgGroups
{
	class Indep
	{
		name = "Independent";
		side = 2;
		class fin_squads
		{
			author = "$STR_FinMod_Author";
			name = "$STR_fin_squads";
			class Infantry_2015
			{
				author = "$STR_FinMod_Author";
				name = "$STR_Infantry_2015";
				class fin_squad0
				{
					author = "$STR_FinMod_Author";
					name = "$STR_fin_squad0_2015";
					side = 2;
					faction = fin_faction_fdf;
					icon = "\FinMod\addons\fin_main\data\groupicons\JV.paa";
					class Unit0
					{
						side = 2;
						vehicle = "fin_SL_RK95";
						rank = "Sergeant";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "fin_TL_RK95";
						rank = "Corporal";
						position[] = { -5,-5,0 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "fin_TL_RK95";
						rank = "Private";
						position[] = { 5,-5,0 };
					};
					class Unit3
					{
						side = 2;
						vehicle = "fin_Rifleman_AT_RK95";
						rank = "Private";
						position[] = { -10,-10,0 };
					};
					class Unit4
					{
						side = 2;
						vehicle = "fin_Rifleman_AT_RK95";
						rank = "Private";
						position[] = { 10,-10,0 };
					};
					class Unit5
					{
						side = 2;
						vehicle = "fin_DMR_RK95";
						rank = "Private";
						position[] = { -15,-15,0 };
					};
					class Unit6
					{
						side = 2;
						vehicle = "fin_MGa_RK95";
						rank = "Private";
						position[] = { 15,-15,0 };
					};
					class Unit7
					{
						side = 2;
						vehicle = "fin_MG_PKM";
						rank = "Private";
						position[] = { 20,-20,0 };
					};
					class Unit8
					{
						side = 2;
						vehicle = "fin_CLS_RK95";
						rank = "Private";
						position[] = { -20,-20,0 };
					};
				};
				class fin_squad1
				{
					author = "$STR_FinMod_Author";
					name = "$STR_fin_ATsquad1_rk95";
					side = 2;
					faction = fin_faction_fdf;
					icon = "\FinMod\addons\fin_main\data\groupicons\panssarintorjunta.paa";
					class Unit0
					{
						side = 2;
						vehicle = "fin_TL_RK95";
						rank = "Sergeant";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "fin_APILAS_Specialist_RK95";
						rank = "Private";
						position[] = { -5,-5,0 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "fin_APILAS_Specialist_RK95";
						rank = "Private";
						position[] = { 5,-5,0 };
					};
				};
				//class fin_squad2
				//{
				//	author = "$STR_FinMod_Author";
				//	name = "$STR_fin_ATsquad2_rk95";
				//	side = 2;
				//	faction = fin_faction_fdf;
				//	icon = "\FinMod\addons\fin_main\data\groupicons\o_inf.paa";
				//	class Unit0
				//	{
				//		side = 2;
				//		vehicle = "fin_TL_RK95";
				//		rank = "Sergeant";
				//		position[] = { 0,0,0 };
				//	};
				//	class Unit1
				//	{
				//		side = 2;
				//		vehicle = "fin_NLAW_Specialist_RK95";
				//		rank = "Private";
				//		position[] = { -5,-5,0 };
				//	};
				//	class Unit2
				//	{
				//		side = 2;
				//		vehicle = "fin_NLAW_Specialist_RK95";
				//		rank = "Private";
				//		position[] = { 5,-5,0 };
				//	};
				//};
				class fin_squad2
				{
					author = "$STR_FinMod_Author";
					name = "$STR_fin_ITO05Msquad_rk95";
					side = 2;
					faction = fin_faction_fdf;
					icon = "\FinMod\addons\fin_main\data\groupicons\ilmatorjunta.paa";
					class Unit0
					{
						side = 2;
						vehicle = "fin_TL_RK95";
						rank = "Sergeant";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "fin_AA_ITO05M_launchercarrier";
						rank = "Private";
						position[] = { -5,-5,0 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "fin_AA_ITO05M_standcarrier";
						rank = "Private";
						position[] = { 5,-5,0 };
					};
				};
				class fin_squad3
				{
					author = "$STR_FinMod_Author";
					name = "$STR_fin_Platoonsquad_2015";
					side = 2;
					faction = fin_faction_fdf;
					icon = "\FinMod\addons\fin_main\data\groupicons\esikuntayksikko.paa";
					class Unit0
					{
						side = 2;
						vehicle = "fin_PL_RK95";
						rank = "Captain";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "fin_PSG_RK95";
						rank = "LIEUTENANT";
						position[] = { -5,-5,0 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "fin_FO_RK95";
						rank = "LIEUTENANT";
						position[] = { 5,-5,0 };
					};
					class Unit3
					{
						side = 2;
						vehicle = "fin_Rifleman_RK95"; //RTO kun radisti valmiina
						rank = "Private";
						position[] = { 0,-5,0 };
					};
				};
				/*class fin_squad4
				{
					author = "$STR_FinMod_Author";
					name = "$STR_fin_Mortarsquad_2015";
					side = 2;
					faction = fin_faction_fdf;
					icon = "\FinMod\addons\fin_main\data\groupicons\n_mortar.paa";
					class Unit0
					{
						side = 2;
						vehicle = "fin_TL_RK95";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "fin_Rifleman_RK95"; //Mortar crew
						rank = "Private";
						position[] = { -5,-5,0 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "fin_Rifleman_RK95"; //Mortar crew
						rank = "Private";
						position[] = { 5,-5,0 };
					};
				};*/
			};
			class Infantry_2005
			{
				author = "$STR_FinMod_Author";
				name = "$STR_Infantry_2005";
				class fin_squad5
				{
					author = "$STR_FinMod_Author";
					name = "$STR_fin_Platoonsquad_2005";
					side = 2;
					faction = fin_faction_fdf;
					icon = "\FinMod\addons\fin_main\data\groupicons\esikuntayksikko.paa";
					class Unit0
					{
						side = 2;
						vehicle = "fin_PL_RK62";
						rank = "Captain";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "fin_PSG_RK62";
						rank = "LIEUTENANT";
						position[] = { -5,-5,0 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "fin_FO_RK62";
						rank = "LIEUTENANT";
						position[] = { 5,-5,0 };
					};
					class Unit3
					{
						side = 2;
						vehicle = "fin_Rifleman_RK62"; //RTO kun radisti valmiina
						rank = "Private";
						position[] = { 0,-5,0 };
					};
				};
				class fin_squad6
				{
					author = "$STR_FinMod_Author";
					name = "$STR_fin_squad0_2005";
					side = 2;
					faction = fin_faction_fdf;
					icon = "\FinMod\addons\fin_main\data\groupicons\JV.paa";
					class Unit0
					{
						side = 2;
						vehicle = "fin_SL_RK62";
						rank = "Sergeant";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "fin_TL_RK62";
						rank = "Corporal";
						position[] = { -5,-5,0 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "fin_Rifleman_AT_RK62";
						rank = "Private";
						position[] = { 5,-5,0 };
					};
					class Unit3
					{
						side = 2;
						vehicle = "fin_Rifleman_AT_RK62";
						rank = "Private";
						position[] = { -10,-10,0 };
					};
					class Unit4
					{
						side = 2;
						vehicle = "fin_Rifleman_RK62";
						rank = "Private";
						position[] = { 10,-10,0 };
					};
					class Unit5
					{
						side = 2;
						vehicle = "fin_Rifleman_RK62";
						rank = "Private";
						position[] = { -15,-15,0 };
					};
					class Unit6
					{
						side = 2;
						vehicle = "fin_MGa_RK62";
						rank = "Private";
						position[] = { 15,-15,0 };
					};
					class Unit7
					{
						side = 2;
						vehicle = "fin_MG_PKM2";
						rank = "Private";
						position[] = { 20,-20,0 };
					};
				};
				/*
				class fin_squad7
				{
					author = "$STR_FinMod_Author";
					name = "$STR_fin_Mortarsquad_2005";
					side = 2;
					faction = fin_faction_fdf;
					icon = "\FinMod\addons\fin_main\data\groupicons\n_mortar.paa";
					class Unit0
					{
						side = 2;
						vehicle = "fin_SL_RK62";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "fin_Rifleman_RK62"; //Mortar crew
						rank = "Private";
						position[] = { -5,-5,0 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "fin_Rifleman_RK62"; //Mortar crew
						rank = "Private";
						position[] = { 5,-5,0 };
					};
				};
				*/
				class fin_squad7
				{
					author = "$STR_FinMod_Author";
					name = "$STR_fin_ATsquad1_rk62";
					side = 2;
					faction = fin_faction_fdf;
					icon = "\FinMod\addons\fin_main\data\groupicons\panssarintorjunta.paa";
					class Unit0
					{
						side = 2;
						vehicle = "fin_SL_RK62";
						rank = "Sergeant";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "fin_APILAS_Specialist_RK62";
						rank = "Private";
						position[] = { -5,-5,0 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "fin_APILAS_Specialist_RK62";
						rank = "Private";
						position[] = { 5,-5,0 };
					};
				};
			};
		};
	};
};