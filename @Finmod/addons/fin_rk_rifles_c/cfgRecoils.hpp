class cfgRecoils
{
	class Default;
	class recoil_default : Default
	{					//	x_		y|		a>		b^
		muzzleOuter[] = { 0.3,	1.0,	0.3,	0.2 };
		muzzleInner[] = { 0,		0,		0.1,	0.1 };
		kickBack[] = { 0.03,	0.06 };
		permanent = 0.1;
		temporary = 0.01;
	};
	class recoil_rk62 : recoil_default
	{
		muzzleOuter[] = { 0.4,  1.0,  0.4,  0.3 };
		kickBack[] = { 0.04, 0.07 };
		permanent = 0.12;
		temporary = 0.015;
	};
	class recoil_rk95 : recoil_default
	{
		muzzleOuter[] = { 0.4,  1.0,  0.4,  0.3 };
		kickBack[] = { 0.04, 0.07 };
		permanent = 0.12;
		temporary = 0.015;
	};
};

/*
	recoil_single_rk_62[]=
	{
		0,0,0,
		0.03, 36.943*(Xcoef_62)*(0.3), 3.587*(Ycoef_62)*(3),
		0.03, 31.817*(Xcoef_62)*(0.5), 1.251*(Ycoef_62)*(3.4),
		0.03, 19.755*(Xcoef_62)*(0.7), 0.764*(Ycoef_62)*(3.8),
		0.06, 7.388*(Xcoef_62)*(0.9), 0.285*(Ycoef_62)*(4.2),
		0.06, -2.402*(Xcoef_62)*(0.3), -0.096*(Ycoef_62)*(7),
		0.06, -3.53*(Xcoef_62)*(0.5), -0.141*(Ycoef_62)*(5),
		0.06, -3.677*(Xcoef_62)*(0.5), -0.147*(Ycoef_62)*(3), 
		0.06, -3.138*(Xcoef_62)*(0.3), -0.125*(Ycoef_62)*(1),
		0.06, 0, 0
	};
	recoil_single_prone_rk_62[]=
	{
		0,0,0,
		0.03, 36.943*(Xcoef_62)*(0.3), 3.587*(Ycoef_62)*(0.7), 
		0.03, 31.817*(Xcoef_62)*(0.5), 1.251*(Ycoef_62)*(1.1),
		0.03, 19.755*(Xcoef_62)*(0.7), 0.764*(Ycoef_62)*(1.5),
		0.06, 7.388*(Xcoef_62)*(0.9), 0.285*(Ycoef_62)*(1.9),
		0.06, -2.402*(Xcoef_62)*(0.3), -0.096*(Ycoef_62)*(2),
		0.06, -3.53*(Xcoef_62)*(0.5), -0.141*(Ycoef_62)*(1),
		0.06, -3.677*(Xcoef_62)*(0.5), -0.147*(Ycoef_62)*(0.5),
		0.06, -3.138*(Xcoef_62)*(0.3), -0.125*(Ycoef_62)*(0.3), 
		0.06, 0, 0
	};
	recoil_auto_rk_62[]=
	{
		0,0,0,
		0.06, 36.943*(Xcoef_62)*(1.2), 3.587*(Ycoef_62)*(1.7),
		0.06, 31.817*(Xcoef_62)*(1.5), 1.251*(Ycoef_62)*(2.1),
		0.06, 19.755*(Xcoef_62)*(1.7), 0.764*(Ycoef_62)*(2.4),
		0.06, 7.388*(Xcoef_62)*(1.9), 0.285*(Ycoef_62)*(2.8),
		0.03, -2.402*(Xcoef_62)*(0.3), -0.096*(Ycoef_62)*(7),
		0.03, -3.53*(Xcoef_62)*(0.5), -0.141*(Ycoef_62)*(5),
		0.03, -3.677*(Xcoef_62)*(0.5), -0.147*(Ycoef_62)*(3),
		0.06, 0, 0
	};
	recoil_auto_prone_rk_62[]=
	{
		0,0,0,
		0.06, 36.943*(Xcoef_62)*(1.2), 3.587*(Ycoef_62)*(0.3),
		0.06, 31.817*(Xcoef_62)*(1.5), 1.251*(Ycoef_62)*(0.7), 
		0.06, 19.755*(Xcoef_62)*(1.7), 0.764*(Ycoef_62)*(1.1),
		0.06, 7.388*(Xcoef_62)*(1.9), 0.285*(Ycoef_62)*(1.5),
		0.03, -2.402*(Xcoef_62)*(0.3), -0.096*(Ycoef_62)*(4),
		0.03, -3.53*(Xcoef_62)*(0.5), -0.141*(Ycoef_62)*(2),
		0.03, -3.677*(Xcoef_62)*(0.5), -0.147*(Ycoef_62)*(1),
		0.06, 0, 0
	};
	recoil_single_rk_95[]=
	{
		0,0,0,
		0.03, 36.943*(Xcoef_95)*(0.3), 3.587*(Ycoef_95)*(3),
		0.03, 31.817*(Xcoef_95)*(0.5), 1.251*(Ycoef_95)*(3.4),
		0.03, 19.755*(Xcoef_95)*(0.7), 0.764*(Ycoef_95)*(3.8),
		0.06, 7.388*(Xcoef_95)*(0.9), 0.285*(Ycoef_95)*(4.2),
		0.06, -2.402*(Xcoef_95)*(0.3), -0.096*(Ycoef_95)*(7),
		0.06, -3.53*(Xcoef_95)*(0.5), -0.141*(Ycoef_95)*(5),
		0.06, -3.677*(Xcoef_95)*(0.5), -0.147*(Ycoef_95)*(3), 
		0.06, -3.138*(Xcoef_95)*(0.3), -0.125*(Ycoef_95)*(1),
		0.06, 0, 0
	};
	recoil_single_prone_rk_95[]=
	{
		0,0,0,
		0.03, 36.943*(Xcoef_95)*(0.3), 3.587*(Ycoef_95)*(0.7), 
		0.03, 31.817*(Xcoef_95)*(0.5), 1.251*(Ycoef_95)*(1.1),
		0.03, 19.755*(Xcoef_95)*(0.7), 0.764*(Ycoef_95)*(1.5),
		0.06, 7.388*(Xcoef_95)*(0.9), 0.285*(Ycoef_95)*(1.9),
		0.06, -2.402*(Xcoef_95)*(0.3), -0.096*(Ycoef_95)*(2),
		0.06, -3.53*(Xcoef_95)*(0.5), -0.141*(Ycoef_95)*(1),
		0.06, -3.677*(Xcoef_95)*(0.5), -0.147*(Ycoef_95)*(0.5),
		0.06, -3.138*(Xcoef_95)*(0.3), -0.125*(Ycoef_95)*(0.3), 
		0.06, 0, 0
	};
	recoil_auto_rk_95[]=
	{
		0,0,0,
		0.06, 36.943*(Xcoef_95)*(1.2), 3.587*(Ycoef_95)*(1.7),
		0.06, 31.817*(Xcoef_95)*(1.5), 1.251*(Ycoef_95)*(2.1),
		0.06, 19.755*(Xcoef_95)*(1.7), 0.764*(Ycoef_95)*(2.4),
		0.06, 7.388*(Xcoef_95)*(1.9), 0.285*(Ycoef_95)*(2.8),
		0.03, -2.402*(Xcoef_95)*(0.3), -0.096*(Ycoef_95)*(7),
		0.03, -3.53*(Xcoef_95)*(0.5), -0.141*(Ycoef_95)*(5),
		0.03, -3.677*(Xcoef_95)*(0.5), -0.147*(Ycoef_95)*(3),
		0.06, 0, 0
	};
	recoil_auto_prone_rk_95[]=
	{
		0,0,0,
		0.06, 36.943*(Xcoef_95)*(1.2), 3.587*(Ycoef_95)*(0.3),
		0.06, 31.817*(Xcoef_95)*(1.5), 1.251*(Ycoef_95)*(0.7), 
		0.06, 19.755*(Xcoef_95)*(1.7), 0.764*(Ycoef_95)*(1.1),
		0.06, 7.388*(Xcoef_95)*(1.9), 0.285*(Ycoef_95)*(1.5),
		0.03, -2.402*(Xcoef_95)*(0.3), -0.096*(Ycoef_95)*(4),
		0.03, -3.53*(Xcoef_95)*(0.5), -0.141*(Ycoef_95)*(2),
		0.03, -3.677*(Xcoef_95)*(0.5), -0.147*(Ycoef_95)*(1),
		0.06, 0, 0
	};
	*/

/*
class recoil_mk20: recoil_default
{
muzzleOuter[] = {0.2,0.6,0.2,0.2};
kickBack[] = {0.01,0.03};
temporary = 0.01;
};
class recoil_mk20c: recoil_default
{
muzzleOuter[] = {0.2,0.8,0.3,0.2};
kickBack[] = {0.02,0.04};
temporary = 0.015;
};
class recoil_trg20: recoil_default
{
muzzleOuter[] = {0.2,1.0,0.3,0.3};
kickBack[] = {0.02,0.04};
temporary = 0.015;
};
class recoil_trg21: recoil_default
{
muzzleOuter[] = {0.2,0.8,0.3,0.2};
kickBack[] = {0.01,0.03};
temporary = 0.01;
};
class recoil_mx: recoil_default
{
muzzleOuter[] = {0.3,1.0,0.4,0.3};
kickBack[] = {0.02,0.04};
temporary = 0.01;
};
class recoil_mxc: recoil_default
{
muzzleOuter[] = {0.3,1.2,0.4,0.3};
kickBack[] = {0.03,0.06};
temporary = 0.015;
};
class recoil_sw: recoil_default
{
muzzleOuter[] = {0.3,0.8,0.5,0.2};
kickBack[] = {0.02,0.04};
temporary = 0.005;
};
class recoil_mxm: recoil_default
{
muzzleOuter[] = {0.3,0.8,0.4,0.3};
kickBack[] = {0.02,0.04};
temporary = 0.01;
};
class recoil_ktb: recoil_default
{
muzzleOuter[] = {0.3,1.0,0.3,0.3};
kickBack[] = {0.02,0.04};
temporary = 0.01;
};
class recoil_ktbc: recoil_default
{
muzzleOuter[] = {0.3,1.2,0.3,0.3};
kickBack[] = {0.03,0.06};
temporary = 0.015;
};
class recoil_smg_01: recoil_default
{
muzzleOuter[] = {0.1,0.8,0.3,0.2};
kickBack[] = {0.01,0.03};
temporary = 0.015;
};
class recoil_smg_02: recoil_default
{
muzzleOuter[] = {0.1,0.6,0.2,0.2};
kickBack[] = {0.01,0.02};
temporary = 0.01;
};
class recoil_pdw: recoil_default
{
muzzleOuter[] = {0.2,1.0,0.3,0.3};
kickBack[] = {0.02,0.04};
temporary = 0.02;
};
class recoil_sdar: recoil_default
{
muzzleOuter[] = {0.2,1.0,0.3,0.3};
kickBack[] = {0.02,0.04};
temporary = 0.01;
};
class recoil_pistol_p07: recoil_default
{
muzzleOuter[] = {0.2,1.0,0.2,0.3};
kickBack[] = {0.03,0.06};
temporary = 0.03;
};
class recoil_pistol_rook40: recoil_default
{
muzzleOuter[] = {0.2,1.0,0.2,0.3};
kickBack[] = {0.03,0.06};
temporary = 0.02;
};
class recoil_pistol_acpc2: recoil_default
{
muzzleOuter[] = {0.2,1.5,0.2,0.3};
kickBack[] = {0.04,0.08};
temporary = 0.04;
};
class recoil_pistol_4five: recoil_default
{
muzzleOuter[] = {0.2,1.5,0.2,0.3};
kickBack[] = {0.04,0.08};
temporary = 0.06;
};
class recoil_pistol_zubr: recoil_default
{
muzzleOuter[] = {0.2,1.5,0.2,0.3};
kickBack[] = {0.04,0.08};
temporary = 0.08;
};
class recoil_pistol_signal: recoil_default
{
muzzleOuter[] = {0.2,1.5,0.2,0.3};
kickBack[] = {0.02,0.04};
temporary = 0.02;
};
class recoil_rpg: recoil_default
{
muzzleOuter[] = {2.0,3.0,1.0,0.5};
kickBack[] = {0.08,0.1};
temporary = 0.1;
};
class recoil_nlaw: recoil_default
{
muzzleOuter[] = {2.0,3.0,1.0,0.5};
kickBack[] = {0.06,0.08};
temporary = 0.08;
};
class recoil_titan_long: recoil_default
{
muzzleOuter[] = {2.0,3.0,1.0,0.5};
kickBack[] = {0.1,0.12};
temporary = 0.15;
};
class recoil_titan_short: recoil_default
{
muzzleOuter[] = {2.0,3.0,1.0,0.5};
kickBack[] = {0.1,0.12};
temporary = 0.12;
};
class recoil_mk200: recoil_default
{
muzzleOuter[] = {0.4,0.6,0.6,0.2};
kickBack[] = {0.03,0.06};
temporary = 0.005;
};
class recoil_zafir: recoil_default
{
muzzleOuter[] = {0.5,1.0,0.7,0.3};
kickBack[] = {0.02,0.08};
temporary = 0.005;
};
class recoil_m320: recoil_default
{
muzzleOuter[] = {1.0,3.0,0.5,0.6};
kickBack[] = {0.08,0.1};
temporary = 0.02;
};
class recoil_gm6: recoil_default
{
muzzleOuter[] = {1.4,3.5,0.7,0.8};
kickBack[] = {0.1,0.12};
temporary = 0.025;
};
class recoil_ebr: recoil_default
{
muzzleOuter[] = {0.4,1.5,0.6,0.4};
kickBack[] = {0.04,0.07};
temporary = 0.01;
};
class recoil_dmr_01: recoil_default
{
muzzleOuter[] = {0.5,2.0,0.5,0.5};
kickBack[] = {0.03,0.08};
temporary = 0.015;
};
*/