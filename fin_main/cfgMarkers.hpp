
class CfgMarkerClasses {
	class fin_markers_units {
		displayName = "Finmod units";
	};
	
	class fin_markers_flags {
		displayName = "Finmod flags";
	};
};

class CfgMarkers
{
	class flag_NATO;
	class fin_marker_base{
		shadow = false;
		scope = 0;
		color[] = { 1, 1, 1, 1 };
		markerClass = "fin_markers_units";
		size = 32;
	};
	class fin_flag: flag_NATO
	{
		name = "Finnish flag";
		icon = "\FinMod\addons\fin_main\data\flag\fin_flag_map_ca.paa";
		texture = "\FinMod\addons\fin_main\data\flag\fin_flag_ca.paa";
		color[] = {1, 1, 1, 1};
		markerClass = "fin_markers_flags";
	};
	class fin_HQ: fin_marker_base
	{
        name = "Headquarters";
        icon = "FinMod\addons\fin_main\data\groupicons\esikuntayksikko.paa";
        shadow = false;
        scope = 2;
        color[] = {1, 1, 1, 1};
		markerClass = "fin_markers_units";
		size = 32;
	};
	class fin_JV: fin_HQ
	{
		name = "Infantry";
		icon = "FinMod\addons\fin_main\data\groupicons\JV.paa";
	};
	class fin_AA: fin_HQ
	{
		name = "Anti-air";
		icon = "FinMod\addons\fin_main\data\groupicons\ilmatorjunta.paa";
	};
	class fin_AT: fin_HQ
	{
		name = "Anti-tank";
		icon = "FinMod\addons\fin_main\data\groupicons\panssarintorjunta.paa";
	};
	class fin_helicopter: fin_HQ
	{
		name = "Helicopter";
		icon = "FinMod\addons\fin_main\data\groupicons\helikopteri.paa";
	};
	class fin_serviceHQ: fin_HQ
	{
		name = "ServiceHQ";
		icon = "FinMod\addons\fin_main\data\groupicons\huoltojohto.paa";
	};
	class fin_airforces: fin_HQ
	{
		name = "Airforces";
		icon = "FinMod\addons\fin_main\data\groupicons\ilmavoimat.paa";
	};
	class fin_artillery: fin_HQ
	{
		name = "Artillery";
		icon = "FinMod\addons\fin_main\data\groupicons\kenttatykisto.paa";
	};
	class fin_maintenance: fin_HQ
	{
		name = "Maintenance";
		icon = "FinMod\addons\fin_main\data\groupicons\kunnossapito.paa";
	};
	class fin_navy: fin_HQ
	{
		name = "Navy";
		icon = "FinMod\addons\fin_main\data\groupicons\merivoimat.paa";
	};
	class fin_motorized: fin_HQ
	{
		name = "Motorized";
		icon = "FinMod\addons\fin_main\data\groupicons\moottoroitu.paa";
	};
	class fin_borderguard: fin_HQ
	{
		name = "Border guard";
		icon = "FinMod\addons\fin_main\data\groupicons\rajavartiolaitos.paa";
	};
	class fin_reserves: fin_HQ
	{
		name = "Reserve";
		icon = "FinMod\addons\fin_main\data\groupicons\taydennykset.paa";
	};
	class fin_recon: fin_HQ
	{
		name = "Recon";
		icon = "FinMod\addons\fin_main\data\groupicons\tiedustelu.paa";
	};
	class fin_swimable: fin_HQ
	{
		name = "Swimable";
		icon = "FinMod\addons\fin_main\data\groupicons\uimakykyinen.paa";
	};
	class fin_signal: fin_HQ
	{
		name = "Signal";
		icon = "FinMod\addons\fin_main\data\groupicons\viestielektro.paa";
	};
	class fin_mechanized: fin_HQ
	{
		name = "Mechanized";
		icon = "FinMod\addons\fin_main\data\groupicons\mekanisoitu.paa";
	};
	class fin_armored: fin_HQ
	{
		name = "Armored";
		icon = "FinMod\addons\fin_main\data\groupicons\panssaroitu.paa";
	};
	class fin_engineer: fin_HQ
	{
		name = "Engineer";
		icon = "FinMod\addons\fin_main\data\groupicons\pioneeri.paa";
	};
};
