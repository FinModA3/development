#include "unitEquipmentMacros.hpp"
/* Jaeger Platoon 2015 */

class fin_Rifleman_RK95 : Fin_Soldier_base_F
{
	scope = 2;
	vehicleClass = fin_vehclass_jaeger2015;
	editorSubcategory = fin_vehclass_jaeger2015;
	AuthNameMacro(fin_Rifleman)
	icon = "iconMan";
	weapons[] = { fin_rk95, Throw, Put, Binocular };
	respawnWeapons[] = { fin_rk95, Throw, Put, Binocular };
	Items[] = { FirstAidKit };
	RespawnItems[] = { FirstAidKit };
	magazines[]				= {stdSmoke, Frags, stdMag};
	respawnMagazines[]		= {stdSmoke, Frags, stdMag};
	linkedItems[]			= { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small };
	respawnLinkedItems[]	= { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_Rifleman_RK95.jpg";
}; 

class fin_PL_RK95 : fin_Rifleman_RK95
{
	AuthNameMacro(fin_PL)
	icon = "iconManOfficer";
	weapons[] = { fin_rk95_aimpoint2009, Throw, Put, Binocular };
	respawnWeapons[] = { fin_rk95_aimpoint2009, Throw, Put, Binocular };
	magazines[]				= { Smoke3Col, Frags, stdMagLdr };
	respawnMagazines[]		= { Smoke3Col, Frags, stdMagLdr };
	linkedItems[]			= { stdItems, fin_m05_vest_wflak_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR };	//NVGoggles_Opfor -> vv2000
	respawnLinkedItems[]	= { stdItems, fin_m05_vest_wflak_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_TL_RK95.jpg";
};
class fin_PSG_RK95 : fin_Rifleman_RK95
{
	AuthNameMacro(fin_PSG)
	icon = "iconManOfficer";
	weapons[] = { fin_rk95_aimpoint2009, Throw, Put, Binocular };
	respawnWeapons[] = { fin_rk95_aimpoint2009, Throw, Put, Binocular };
	magazines[]				= { Smoke3Col, Frags, stdMagLdr };
	respawnMagazines[]		= { Smoke3Col, Frags, stdMagLdr };
	linkedItems[]			= { stdItems, fin_m05_vest_wflak_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, fin_mpl15, NVGoggles_OPFOR };
	respawnLinkedItems[]	= { stdItems, fin_m05_vest_wflak_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, fin_mpl15, NVGoggles_OPFOR };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_TL_RK95.jpg";
};
class fin_FO_RK95 : fin_PL_RK95
{
	AuthNameMacro(fin_FO)
	icon = "iconManOfficer";
	weapons[] = { fin_rk95_aimpoint2009, Throw, Put, fin_mpl15 };
	respawnWeapons[] = { fin_rk95_aimpoint2009, Throw, Put, fin_mpl15 };
	magazines[]				= { Smoke3Col, Frags, stdMagLdr };
	respawnMagazines[]		= { Smoke3Col, Frags, stdMagLdr };
	linkedItems[]			= { stdItems, fin_m05_vest_wflak_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR };
	respawnLinkedItems[]	= { stdItems, fin_m05_vest_wflak_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_TL_RK95.jpg";
};
class fin_SL_RK95 : fin_Rifleman_RK95
{
	AuthNameMacro(fin_SL)
	icon = "iconManLeader";
	weapons[] = { fin_rk95_ta11, Throw, Put, Binocular };
	respawnWeapons[] = { fin_rk95_ta11, Throw, Put, Binocular };
	magazines[]				= { fin_smoke_white, stdSmoke, Frags, stdMagLdr };
	respawnMagazines[]		= { fin_smoke_white, stdSmoke, Frags, stdMagLdr };
	linkedItems[]			= { stdItems, fin_m05_vest_wflak_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR };
	respawnLinkedItems[]	= { stdItems, fin_m05_vest_wflak_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_SL_RK95.jpg";
};
//class fin_RTO_RK95 : fin_Rifleman_RK95			radioita odotellessa
//{
//	AuthNameMacro(fin_RTO)
//	scope = 2;
//	//RADIOS?
//};
class fin_TL_RK95 : fin_Rifleman_RK95
{
	AuthNameMacro(fin_TL)
	icon = "iconManLeader";
	weapons[] = { fin_rk95_aimpoint2009, Throw, Put, Binocular };
	respawnWeapons[] = { fin_rk95_aimpoint2009, Throw, Put, Binocular };
	linkedItems[] = { stdItems, fin_m05_vest_wflak_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR };
	respawnLinkedItems[] = { stdItems, fin_m05_vest_wflak_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_TL_RK95.jpg";
};
class fin_Rifleman_AT_RK95 : fin_Rifleman_RK95
{
	AuthNameMacro(fin_Rifleman_AT)
	icon = "iconManAT";
	weapons[] = { fin_rk95, fin_66kes88, Throw, Put };
	respawnWeapons[] = { fin_rk95, fin_66kes88, Throw, Put };
	magazines[] = { stdSmoke, Frags, fin_66kes88_mag, stdMag };
	respawnMagazines[] = { stdSmoke, Frags, fin_66kes88_mag, stdMag };
	linkedItems[] = { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small };
	respawnLinkedItems[] = { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_Rifleman_AT_RK95.jpg";
};
class fin_APILAS_Specialist_RK95 : fin_Rifleman_RK95
{
	AuthNameMacro(fin_AT_Specialist)
	icon = "iconManAT";

	weapons[] = { fin_rk95, fin_apilas, Throw, Put };
	respawnWeapons[] = { fin_rk95, fin_apilas, Throw, Put };
	magazines[] = { stdSmoke, Frags, fin_apilas_mag, stdMag };
	respawnMagazines[] = { stdSmoke, Frags, fin_apilas_mag, stdMag };
	linkedItems[] = { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small };
	respawnLinkedItems[] = { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_APILAS_Specialist_RK95.jpg";
};
//class fin_AT_Specialist_2_RK95 : fin_Rifleman_RK95
//{
//	AuthNameMacro(fin_AT_Specialist)
//	icon = "iconManAT";
//
//	weapons[] = { fin_rk95, fin_nlaw, Throw, Put };
//	respawnWeapons[] = { fin_rk95, fin_nlaw, Throw, Put };
//  magazines[] = { stdMag , stdSmoke, Frags };
//  respawnMagazines[] = { stdMag , stdSmoke, Frags };
//	linkedItems[] = { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small };
//	respawnLinkedItems[] = { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small };
//};
/*class fin_AA_ITO05M_launchercarrier : fin_Rifleman_RK95
{
	AuthNameMacro(fin_AA_ITO05M_launchercarrier)
	weapons[] = { fin_rk95, Throw, Put };
	respawnWeapons[] = { fin_rk95, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small, fin_ITO05M_cluBag };
	respawnLinkedItems[] = { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small, fin_ITO05M_cluBag };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_AA_ITO05M_launchercarrier.jpg";
};
class fin_AA_ITO05M_standcarrier : fin_Rifleman_RK95
{
	AuthNameMacro(fin_AA_ITO05M_standcarrier)
	weapons[] = { fin_rk95, Throw, Put };
	respawnWeapons[] = { fin_rk95, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small, fin_ITO05M_standBag };
	respawnLinkedItems[] = { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small, fin_ITO05M_standBag };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_AA_ITO05M_launchercarrier.jpg";
};
*/
//class fin_Pioneer_RK95 : fin_Rifleman_RK95	// Telluja, vitusti telluja
//{
//	AuthNameMacro(fin_Pioneer)
//	icon = "iconManExplosive";
//};
class fin_DMR_RK95 : fin_Rifleman_RK95
{
	AuthNameMacro(fin_DMR)
	weapons[] = { fin_rk95_ta11, Throw, Put };
	respawnWeapons[] = { fin_rk95_ta11, Throw, Put };
};
class fin_CLS_RK95 : fin_Rifleman_RK95
{
	AuthNameMacro(fin_CLS)
	icon = "iconManMedic";
	Items[] = { FirstAidKit, FirstAidKit, FirstAidKit };
	RespawnItems[] = { FirstAidKit, FirstAidKit, FirstAidKit };
	linkedItems[] = { stdItems, fin_m05_vest_wflak_CLS, fin_m05_Helmet_peltor, fin_m05_backpack_small };
	respawnLinkedItems[] = { stdItems, fin_m05_vest_wflak_CLS, fin_m05_Helmet_peltor, fin_m05_backpack_small };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_CLS_rk95.jpg";
};
class fin_Medic_RK95 : fin_Rifleman_RK95
{
	AuthNameMacro(fin_Medic)
	icon = "iconManMedic";
	Items[] = { FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, Medikit };
	RespawnItems[] = { FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit, Medikit };
	linkedItems[] = { stdItems, fin_m05_vest_wflak_CLS, fin_m05_Helmet_peltor, fin_m05_backpack_small };
	respawnLinkedItems[] = { stdItems, fin_m05_vest_wflak_CLS, fin_m05_Helmet_peltor, fin_m05_backpack_small };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_CLS_rk95.jpg";
};
/*class fin_Grenadier_RK95 : fin_Rifleman_RK95
{
	AuthNameMacro(fin_Grenadier)
	weapons[] = { fin_rk95, fin_HK69A1, Throw, Put };
	respawnWeapons[] = { fin_rk95, fin_HK69A1, Throw, Put };
	magazines[]			= { stdMag , stdSmoke, Frags, HK_gren };
	respawnMagazines[]	= { stdMag , stdSmoke, Frags, HK_gren};
};
*/
class fin_MG_PKM : fin_Rifleman_RK95
{
	AuthNameMacro(fin_MG)
	icon = "iconManMG";
	backpack = "fin_MG_backpack";
	weapons[] = { fin_pkm, Throw, Put };
	respawnWeapons[] = { fin_pkm, Throw, Put };
	magazines[]			= { stdMagPKM, Frags , stdSmoke};
	respawnMagazines[]	= { stdMagPKM, Frags , stdSmoke};
	linkedItems[]			= { stdItems, fin_m05_vest_wflak_pkm, fin_m05_Helmet_peltor, fin_MG_backpack };
	respawnLinkedItems[]	= { stdItems, fin_m05_vest_wflak_pkm, fin_m05_Helmet_peltor, fin_MG_backpack };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_MG_PKM.jpg";
};
class fin_MGa_RK95 : fin_Rifleman_RK95
{
	AuthNameMacro(fin_MGa_PKM)
	icon = "iconMan";
	backpack = "fin_MGa_backpack"; 
	weapons[] = { fin_rk95, Throw, Put, Binocular};
	respawnWeapons[] = { fin_rk95, Throw, Put, Binocular};
	magazines[] = {  stdSmoke, Frags, stdMag};
	respawnMagazines[] = { stdSmoke, Frags, stdMag};
	linkedItems[] = { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_MGa_backpack };
	respawnLinkedItems[] = { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_MGa_backpack };
};
// Tarvittaessa kaupunkijääkärit erikseen -> ballistic vest
/*class fin_Sniper_TRG42 : fin_Rifleman_RK95
{
	AuthNameMacro(fin_Sniper)
	icon = "iconMan";
	weapons[] = { fin_tkiv2000, Throw, Put, Binocular };
	respawnWeapons[] = { fin_tkiv2000, Throw, Put, Binocular };
	linkedItems[] = { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small, stdMagTrg };
	respawnLinkedItems[] = { stdItems, fin_m05_vest_wflak_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small, stdMagTrg };
};
*/
/* Jaeger platoon 2005 */

class fin_Rifleman_RK62: fin_Rifleman_RK95
{
	vehicleClass = fin_vehclass_jaeger2005;
	editorSubcategory = fin_vehclass_jaeger2005;
	AuthNameMacro(fin_rifleman)
	weapons[] = { fin_rk62, Throw, Put };
	respawnWeapons[] = { fin_rk62, Throw, Put };
	linkedItems[]			= { stdItems, fin_m05_vest_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small };
	respawnLinkedItems[]	= { stdItems, fin_m05_vest_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_Rifleman_rk62.jpg";
};
class fin_PL_RK62 : fin_PL_RK95
{
	vehicleClass = fin_vehclass_jaeger2005;
	editorSubcategory = fin_vehclass_jaeger2005;
	AuthNameMacro(fin_PL)
	weapons[] = { fin_rk62, Throw, Put };
	respawnWeapons[] = { fin_rk62, Throw, Put };
	linkedItems[]			= { stdItems, fin_m05_vest_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR };
	respawnLinkedItems[]	= { stdItems, fin_m05_vest_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_leader_rk62.jpg";
};
class fin_PSG_RK62 : fin_PL_RK62
{
	vehicleClass = fin_vehclass_jaeger2005;
	editorSubcategory = fin_vehclass_jaeger2005;
	AuthNameMacro(fin_PSG)
	weapons[] = { fin_rk62, Throw, Put };
	respawnWeapons[] = { fin_rk62, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_vest_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR };
	respawnLinkedItems[] = { stdItems, fin_m05_vest_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_leader_rk62.jpg";
};

class fin_FO_RK62 : fin_FO_RK95
{
	vehicleClass = fin_vehclass_jaeger2005;
	editorSubcategory = fin_vehclass_jaeger2005;
	AuthNameMacro(fin_FO)
	weapons[] = { fin_rk62, Throw, Put, fin_mpl15 };
	respawnWeapons[] = { fin_rk62, Throw, Put, fin_mpl15 };
	linkedItems[]			= { stdItems, fin_m05_vest_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR };
	respawnLinkedItems[]	= { stdItems, fin_m05_vest_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_leader_rk62.jpg";
};
class fin_SL_RK62 : fin_SL_RK95
{
	vehicleClass = fin_vehclass_jaeger2005;
	editorSubcategory = fin_vehclass_jaeger2005;
	AuthNameMacro(fin_SL)
	weapons[] = { fin_rk62, Throw, Put };
	respawnWeapons[] = { fin_rk62, Throw, Put };
	linkedItems[]			= { stdItems, fin_m05_vest_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR};
	respawnLinkedItems[]	= { stdItems, fin_m05_vest_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR};
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_leader_rk62.jpg";
};

//class fin_RTO_RK62 : fin_RTO_RK95
//{
//	vehicleClass = fin_vehclass_jaeger2005;
//	AuthNameMacro(fin_RTO)
//	weapons[] = { fin_rk62, Throw, Put };
//	respawnWeapons[] = { fin_rk62, Throw, Put };
//};
class fin_TL_RK62 : fin_TL_RK95
{
	vehicleClass = fin_vehclass_jaeger2005;
	editorSubcategory = fin_vehclass_jaeger2005;
	AuthNameMacro(fin_TL)
	weapons[] = { fin_rk62, Throw, Put };
	respawnWeapons[] = { fin_rk62, Throw, Put };
	linkedItems[]			= { stdItems, fin_m05_vest_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR};
	respawnLinkedItems[]	= { stdItems, fin_m05_vest_ldr, fin_m05_Helmet_peltor, fin_m05_backpack_small, NVGoggles_OPFOR};
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_leader_rk62.jpg";
};
class fin_Rifleman_AT_RK62 : fin_Rifleman_AT_RK95
{
	vehicleClass = fin_vehclass_jaeger2005;
	editorSubcategory = fin_vehclass_jaeger2005;
	AuthNameMacro(fin_Rifleman_AT)
	weapons[] = { fin_rk62, fin_66kes88, Throw, Put };
	respawnWeapons[] = { fin_rk62, fin_66kes88, Throw, Put };
	linkedItems[]			= { stdItems, fin_m05_vest_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small};
	respawnLinkedItems[]	= { stdItems, fin_m05_vest_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small};
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_Rifleman_AT_rk62.jpg";
};
class fin_APILAS_Specialist_RK62 : fin_APILAS_Specialist_RK95
{
	vehicleClass = fin_vehclass_jaeger2005;
	editorSubcategory = fin_vehclass_jaeger2005;
	AuthNameMacro(fin_AT_Specialist)
	weapons[] = { fin_rk62, fin_apilas,  Throw, Put };
	respawnWeapons[] = { fin_rk62, fin_apilas, Throw, Put };
	linkedItems[]			= { stdItems, fin_m05_vest_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small};
	respawnLinkedItems[]	= { stdItems, fin_m05_vest_rifleman, fin_m05_Helmet_peltor, fin_m05_backpack_small};
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_APILAS_Specialist_RK62.jpg";
};
//class fin_Pioneer_RK62 : fin_Pioneer_RK95
//{
//	vehicleClass = fin_vehclass_jaeger2005;
//	editorSubcategory = fin_vehclass_jaeger2005;
//	AuthNameMacro(fin_Pioneer)
//	weapons[] = { fin_rk62, Throw, Put };
//	respawnWeapons[] = { fin_rk62, Throw, Put };
//};
/*
class fin_DMR_SVD : fin_DMR_Rk95
{
	vehicleClass = fin_vehclass_jaeger2005;
	editorSubcategory = fin_vehclass_jaeger2005;
	AuthNameMacro(fin_DMR)
	weapons[] = { fin_SVD, Throw, Put };
	respawnWeapons[] = { fin_SVD, Throw, Put };
	magazines[]			= { fin_10Rnd_svd_mag, fin_10Rnd_svd_mag, fin_10Rnd_svd_mag, fin_10Rnd_svd_mag, fin_10Rnd_svd_mag, fin_10Rnd_svd_mag, fin_10Rnd_svd_mag, Frags, stdSmoke};
	respawnMagazines[]	= { fin_10Rnd_svd_mag, fin_10Rnd_svd_mag, fin_10Rnd_svd_mag, fin_10Rnd_svd_mag, fin_10Rnd_svd_mag, fin_10Rnd_svd_mag, fin_10Rnd_svd_mag, Frags, stdSmoke};
};
*/
class fin_CLS_RK62 : fin_CLS_RK95
{
	vehicleClass = fin_vehclass_jaeger2005;
	editorSubcategory = fin_vehclass_jaeger2005;
	AuthNameMacro(fin_CLS)
	weapons[] = { fin_rk62, Throw, Put };
	respawnWeapons[] = { fin_rk62, Throw, Put };
	linkedItems[]			= { stdItems, fin_m05_vest_CLS, fin_m05_Helmet_peltor, fin_m05_backpack_small};
	respawnLinkedItems[]	= { stdItems, fin_m05_vest_CLS, fin_m05_Helmet_peltor, fin_m05_backpack_small};
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_CLS_RK62.jpg";
};
class fin_MG_PKM2 : fin_MG_PKM
{
	vehicleClass = fin_vehclass_jaeger2005;
	editorSubcategory = fin_vehclass_jaeger2005;
	AuthNameMacro(fin_MG)
	linkedItems[]			= { stdItems, fin_m05_vest_pkm, fin_m05_Helmet_peltor, fin_MG_backpack };
	respawnLinkedItems[]	= { stdItems, fin_m05_vest_pkm, fin_m05_Helmet_peltor, fin_MG_backpack };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_MG2_PKM.jpg";
};
class fin_MGa_RK62 : fin_MGa_RK95
{
	backpack= "";
	vehicleClass = fin_vehclass_jaeger2005;
	editorSubcategory = fin_vehclass_jaeger2005;
	AuthNameMacro(fin_MGa_PKM)
	icon = "iconMan";
	weapons[] = { fin_rk62, Throw, Put, Binocular };
	respawnWeapons[] = { fin_rk62, Throw, Put, Binocular };
	magazines[] = {stdSmoke, Frags, fin_100Rnd_pkm_mag, fin_100Rnd_pkm_mag, stdMag};
	respawnMagazines[] = {stdSmoke, Frags, fin_100Rnd_pkm_mag, fin_100Rnd_pkm_mag, stdMag};
	linkedItems[] = { stdItems, fin_m05_vest_rifleman, fin_m05_Helmet_peltor, fin_MGa_backpack };
	respawnLinkedItems[] = { stdItems, fin_m05_vest_rifleman, fin_m05_Helmet_peltor, fin_MGa_backpack };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_MGa_RK62.jpg";
	
};
class fin_Medic_RK62 : fin_Medic_RK95
{
	vehicleClass = fin_vehclass_jaeger2005;
	editorSubcategory = fin_vehclass_jaeger2005;
	AuthNameMacro(fin_Medic)
	weapons[] = { fin_rk62, Throw, Put };
	respawnWeapons[] = { fin_rk62, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_vest_cls, fin_m05_Helmet_peltor, fin_m05_backpack_small };
	respawnLinkedItems[] = { stdItems, fin_m05_vest_cls, fin_m05_Helmet_peltor, fin_m05_backpack_small };
	editorPreview = "\FinMod\addons\fin_character\data\edenpreviews\fin_CLS_rk62.jpg";
};

/* Recon 2015 */
/*
class fin_Recon_Rifleman_RK95 : fin_Rifleman_RK95
{
	vehicleClass = fin_vehclass_recon2015;
	editorSubcategory = fin_vehclass_recon2015;
	AuthNameMacro(fin_Rifleman)
	weapons[] = { fin_rk95_aimpoint2009, Throw, Put };
	respawnWeapons[] = { fin_rk95_aimpoint2009, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_recon_vest, fin_m05_Boonie };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest, fin_m05_Boonie };
};
class fin_Recon_SL_RK95 : fin_SL_RK95
{
	vehicleClass = fin_vehclass_recon2015;
	editorSubcategory = fin_vehclass_recon2015;
	AuthNameMacro(fin_SL)
	weapons[] = { fin_rk95_ta11, Throw, Put };
	respawnWeapons[] = { fin_rk95_ta11, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_recon_vest_radio, fin_m05_Boonie, NVGoggles_OPFOR, Rangefinder };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest_radio, fin_m05_Boonie, NVGoggles_OPFOR, Rangefinder };
};
class fin_Recon_TL_RK95 : fin_TL_RK95
{
	vehicleClass = fin_vehclass_recon2015;
	editorSubcategory = fin_vehclass_recon2015;
	AuthNameMacro(fin_TL)
	weapons[] = { fin_rk95_ta11, Throw, Put };
	respawnWeapons[] = { fin_rk95_ta11, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_recon_vest, fin_m05_Boonie, NVGoggles_OPFOR, Binocular };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest, fin_m05_Boonie, NVGoggles_OPFOR, Binocular };
};
class fin_Recon_AT_RK95 : fin_Rifleman_AT_RK95
{
	vehicleClass = fin_vehclass_recon2015;
	editorSubcategory = fin_vehclass_recon2015;
	AuthNameMacro(fin_Rifleman_AT)
	linkedItems[] = { stdItems, fin_m05_recon_vest, fin_m05_Boonie };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest, fin_m05_Boonie };
};
class fin_Recon_Pioneer_RK95 : fin_Pioneer_RK95
{
	vehicleClass = fin_vehclass_recon2015;
	editorSubcategory = fin_vehclass_recon2015;
	AuthNameMacro(fin_Pioneer)
	linkedItems[] = { stdItems, fin_m05_recon_vest, fin_m05_Boonie };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest, fin_m05_Boonie };
};
class fin_Recon_Medic_RK95 : fin_Medic_RK95
{
	vehicleClass = fin_vehclass_recon2015;
	editorSubcategory = fin_vehclass_recon2015;
	AuthNameMacro(fin_Medic)
	linkedItems[] = { stdItems, fin_m05_recon_vest, fin_m05_Boonie };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest, fin_m05_Boonie };
};
class fin_Recon_Sniper_TRG42 : fin_Recon_Rifleman_RK95
{
	icon = "iconManRecon";
	vehicleClass = fin_vehclass_recon2015;
	editorSubcategory = fin_vehclass_recon2015;
	AuthNameMacro(fin_Sniper)
	weapons[] = { fin_trg42, Throw, Put };
	respawnWeapons[] = { fin_trg42, Throw, Put };
	magazines[]			= { fin_5Rnd_TRG_mag, fin_5Rnd_TRG_mag, fin_5Rnd_TRG_mag, fin_5Rnd_TRG_mag, fin_5Rnd_TRG_mag, fin_5Rnd_TRG_mag, fin_5Rnd_TRG_mag, fin_5Rnd_TRG_mag, Frags , stdSmoke};
	respawnMagazines[]	= { fin_5Rnd_TRG_mag, fin_5Rnd_TRG_mag, fin_5Rnd_TRG_mag, fin_5Rnd_TRG_mag, fin_5Rnd_TRG_mag, fin_5Rnd_TRG_mag, fin_5Rnd_TRG_mag, fin_5Rnd_TRG_mag, Frags , stdSmoke};

	linkedItems[] = { stdItems, fin_m05_recon_vest_sniper, fin_m05_Boonie, NVGoggles_OPFOR };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest_sniper, fin_m05_Boonie, NVGoggles_OPFOR };
};
class fin_Recon_Spotter_RK95 : fin_Recon_Rifleman_RK95
{
	icon = "iconManRecon";
	vehicleClass = fin_vehclass_recon2015;
	editorSubcategory = fin_vehclass_recon2015;
	AuthNameMacro(fin_Spotter)
	weapons[] = { fin_rk95_ta11, Throw, Put };
	respawnWeapons[] = { fin_rk95_ta11, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_recon_vest, fin_m05_Boonie, Rangefinder };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest, fin_m05_Boonie, Rangefinder };
};
class fin_Recon_RTO_RK95 : fin_RTO_RK95
{
	vehicleClass = fin_vehclass_recon2015;
	editorSubcategory = fin_vehclass_recon2015;
	AuthNameMacro(fin_RTO)
	linkedItems[] = { stdItems, fin_m05_recon_vest, fin_m05_Boonie };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest, fin_m05_Boonie };
};
*/
/* Recon 2005 */
/*
class fin_Recon_Rifleman_RK62 : fin_Recon_Rifleman_RK95
{
	vehicleClass = fin_vehclass_recon2005;
	editorSubcategory = fin_vehclass_recon2005;
	AuthNameMacro(fin_Rifleman)
	weapons[] = { fin_rk62, Throw, Put };
	respawnWeapons[] = { fin_rk62, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_recon_vest, fin_m91_Beanie };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest, fin_m91_Beanie };
};
class fin_Recon_SL_RK62 : fin_Recon_SL_RK95
{
	vehicleClass = fin_vehclass_recon2005;
	editorSubcategory = fin_vehclass_recon2005;
	AuthNameMacro(fin_SL)
	weapons[] = { fin_rk62, Throw, Put };
	respawnWeapons[] = { fin_rk62, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_recon_vest_radio, fin_m91_Beanie, NVGoggles_OPFOR, Rangefinder };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest_radio, fin_m91_Beanie, NVGoggles_OPFOR, Rangefinder };
};
class fin_Recon_TL_RK62 : fin_Recon_TL_RK95
{
	vehicleClass = fin_vehclass_recon2005;
	editorSubcategory = fin_vehclass_recon2005;
	AuthNameMacro(fin_TL)
	weapons[] = { fin_rk62, Throw, Put };
	respawnWeapons[] = { fin_rk62, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_recon_vest, fin_m91_Beanie, NVGoggles_OPFOR, Binocular };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest, fin_m91_Beanie, NVGoggles_OPFOR, Binocular };
};
class fin_Recon_AT_RK62 : fin_Recon_AT_RK95
{
	vehicleClass = fin_vehclass_recon2005;
	editorSubcategory = fin_vehclass_recon2005;
	AuthNameMacro(fin_Rifleman_AT)
	weapons[] = { fin_rk62, Throw, Put };
	respawnWeapons[] = { fin_rk62, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_recon_vest, fin_m91_Beanie };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest, fin_m91_Beanie };
};
class fin_Recon_Pioneer_RK62 : fin_Recon_Pioneer_RK95
{
	vehicleClass = fin_vehclass_recon2005;
	editorSubcategory = fin_vehclass_recon2005;
	AuthNameMacro(fin_Pioneer)
	weapons[] = { fin_rk62, Throw, Put };
	respawnWeapons[] = { fin_rk62, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_recon_vest, fin_m91_Beanie };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest, fin_m91_Beanie };
};
class fin_Recon_Medic_RK62 : fin_Recon_Medic_RK95
{
	vehicleClass = fin_vehclass_recon2005;
	editorSubcategory = fin_vehclass_recon2005;
	AuthNameMacro(fin_Medic)
	weapons[] = { fin_rk62, Throw, Put };
	respawnWeapons[] = { fin_rk62, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_recon_vest, fin_m91_Beanie };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest, fin_m91_Beanie };
};
class fin_Recon_Sniper_TA85 : fin_Recon_Sniper_TRG42
{
	vehicleClass = fin_vehclass_recon2005;
	editorSubcategory = fin_vehclass_recon2005;
	AuthNameMacro(fin_Sniper)
	weapons[]			= { fin_ta85, Throw, Put };
	respawnWeapons[]	= { fin_ta85, Throw, Put };
	magazines[]			= { fin_5Rnd_TAK_mag, fin_5Rnd_TAK_mag, fin_5Rnd_TAK_mag, fin_5Rnd_TAK_mag, fin_5Rnd_TAK_mag, fin_5Rnd_TAK_mag, fin_5Rnd_TAK_mag, Frags , stdSmoke};
	respawnMagazines[]	= { fin_5Rnd_TAK_mag, fin_5Rnd_TAK_mag, fin_5Rnd_TAK_mag, fin_5Rnd_TAK_mag, fin_5Rnd_TAK_mag, fin_5Rnd_TAK_mag, fin_5Rnd_TAK_mag, Frags , stdSmoke};

	linkedItems[] = { stdItems, fin_m05_recon_vest_sniper, fin_m91_Beanie, NVGoggles_OPFOR };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest_sniper, fin_m91_Beanie, NVGoggles_OPFOR };
};
class fin_Recon_Spotter_RK62 : fin_Recon_Spotter_RK95
{
	vehicleClass = fin_vehclass_recon2005;
	editorSubcategory = fin_vehclass_recon2005;
	AuthNameMacro(fin_Spotter)
	weapons[] = { fin_rk62, Throw, Put };
	respawnWeapons[] = { fin_rk62, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_recon_vest, fin_m91_Beanie, Rangefinder };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest, fin_m91_Beanie, Rangefinder };
};
class fin_Recon_RTO_RK62 : fin_Recon_RTO_RK95
{
	vehicleClass = fin_vehclass_recon2005;
	editorSubcategory = fin_vehclass_recon2005;
	AuthNameMacro(fin_RTO)
	weapons[] = { fin_rk62, Throw, Put };
	respawnWeapons[] = { fin_rk62, Throw, Put };
	linkedItems[] = { stdItems, fin_m05_recon_vest, fin_m91_Beanie };
	respawnLinkedItems[] = { stdItems, fin_m05_recon_vest, fin_m91_Beanie };
};
*/
/* Special Jaegers */
/*
class fin_SF_Rifleman_RK95 : fin_Rifleman_RK95
{
	vehicleClass = fin_vehclass_SF;
	editorSubcategory = fin_vehclass_SF;
	AuthNameMacro(fin_SF_Rifleman)
	weapons[] = { fin_rk95_aimpoint2009, fin_g17, Throw, Put };
	respawnWeapons[] = { fin_rk95_aimpoint2009, fin_g17, Throw, Put };
	magazines[] = { stdMag, Frags , Smoke3Col, flashbangs };
	respawnMagazines[] = { stdMag, Frags , Smoke3Col, flashbangs };

	linkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR };
	respawnLinkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR };
};

class fin_SF_SL_RK95 : fin_SF_Rifleman_RK95
{
	AuthNameMacro(fin_SL)
	icon = "iconManLeader";
	weapons[] = { fin_rk95_aimpoint2009, fin_g17, Throw, Put };
	respawnWeapons[] = { fin_rk95_aimpoint2009, fin_g17, Throw, Put };
	magazines[] = { stdMagLdr, Frags , Smoke3Col, fin_flashbang };
	respawnMagazines[] = { stdMagLdr, Frags , Smoke3Col, fin_flashbang };

	linkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR, Rangefinder };
	respawnLinkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR, Rangefinder };
};
class fin_SF_TL_RK95 : fin_SF_SL_RK95
{
	AuthNameMacro(fin_TL)
	linkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR };
	respawnLinkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR };
};

class fin_SF_Rifleman_AT_RK95 : fin_SF_Rifleman_RK95
{
	AuthNameMacro(fin_SF_Rifleman_AT)
	icon = "iconManAT";

	weapons[] = { fin_rk95_aimpoint2009, fin_g17, fin_66kes88, Throw, Put };
	respawnWeapons[] = { fin_rk95_aimpoint2009, fin_g17, fin_66kes88, Throw, Put };
};
class fin_SF_EOD_RK95 : fin_SF_Rifleman_RK95
{
	AuthNameMacro(fin_SF_EOD)
	icon = "iconManDemo";
	//TODO: add EOD stuff
};
class fin_SF_Medic_RK95 : fin_SF_Rifleman_RK95
{
	AuthNameMacro(fin_Medic)
	icon = "iconManMedic";
};
class fin_SF_MG : fin_SF_Rifleman_RK95
{
	AuthNameMacro(fin_MG)
	icon = "iconManMG";

	weapons[] = { fin_pkm_ta11, fin_g17, Throw, Put };
	respawnWeapons[] = { fin_pkm_ta11, fin_g17, Throw, Put };
	magazines[] = { fin_100Rnd_pkm_mag, fin_100Rnd_pkm_mag, fin_100Rnd_pkm_mag, Frags , Smoke3Col, flashbangs };
	respawnMagazines[] = { fin_100Rnd_pkm_mag, fin_100Rnd_pkm_mag, fin_100Rnd_pkm_mag, Frags , Smoke3Col, flashbangs };
};
class fin_SF_Grenadier_RK95 : fin_SF_Rifleman_RK95
{
	AuthNameMacro(fin_SF_Grenadier)
	weapons[] = { fin_rk95_aimpoint2009, fin_g17, fin_HK96A1, Throw, Put };
	respawnWeapons[] = { fin_rk95_aimpoint2009, fin_g17, fin_HK96A1, Throw, Put };
	magazines[] = { stdMagLdr, Frags , Smoke3Col, flashbangs };
	respawnMagazines[] = { stdMagLdr, Frags , Smoke3Col, flashbangs }; // Todo GL kranut
};
class fin_SF_Sniper_TRG42 : fin_SF_Rifleman_RK95
{
	AuthNameMacro(fin_Sniper)
	icon = "iconManRecon";

	weapons[] = { fin_trg42, fin_g17, Throw, Put };
	respawnWeapons[] = { fin_trg42, fin_g17, Throw, Put };
	magazines[] =			{ fin_5Rnd_trg_mag, fin_5Rnd_trg_mag, fin_5Rnd_trg_mag, fin_5Rnd_trg_mag, fin_5Rnd_trg_mag, fin_5Rnd_trg_mag, fin_5Rnd_trg_mag, fin_5Rnd_trg_mag, Frags , Smoke3Col, flashbangs };
	respawnMagazines[] =	{ fin_5Rnd_trg_mag, fin_5Rnd_trg_mag, fin_5Rnd_trg_mag, fin_5Rnd_trg_mag, fin_5Rnd_trg_mag, fin_5Rnd_trg_mag, fin_5Rnd_trg_mag, fin_5Rnd_trg_mag, Frags , Smoke3Col, flashbangs };
};
class fin_SF_Spotter_RK95 : fin_SF_Rifleman_RK95
{
	AuthNameMacro(fin_Spotter)
	icon = "iconManRecon";

	weapons[] = { fin_rk95_ta11, fin_g17, Throw, Put };
	respawnWeapons[] = { fin_rk95_ta11, fin_g17, Throw, Put };
	linkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR, Rangefinder };
	respawnLinkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR, Rangefinder };
};
class fin_SF_JTAC_RK95 : fin_SF_Rifleman_RK95
{
	AuthNameMacro(fin_JTAC)

	weapons[] = { fin_rk95_ta11, fin_g17, Throw, Put };
	respawnWeapons[] = { fin_rk95_ta11, fin_g17, Throw, Put };
	linkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR, Laserdesignator };
	respawnLinkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR, Laserdesignator };
};
*/
/* Special Jaegers (SCARs) */
/*
class fin_SF_SL_SCARL : fin_SF_SL_RK95
{
	vehicleClass = fin_vehclass_SF_SCAR;
	editorSubcategory = fin_vehclass_SF_SCAR;
	AuthNameMacro(fin_SL)
	weapons[] = { fin_scar_L_ta11, fin_g17, Throw, Put };
	respawnWeapons[] = { fin_scar_L_ta11, Throw, Put };
	magazines[]			= { stdMagScarLdr, Frags , Smoke3Col, fin_flare_white, flashbangs };
	respawnMagazines[]	= { stdMagScarLdr, Frags , Smoke3Col, fin_flare_white, flashbangs };
	linkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR, Rangefinder };
	respawnLinkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR, Rangefinder };
};
class fin_SF_TL_SCARL : fin_SF_SL_SCARL
{
	AuthNameMacro(fin_TL)
	linkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR };
	respawnLinkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR };
};
class fin_SF_Rifleman_SCARL : fin_SF_Rifleman_RK95
{
	AuthNameMacro(fin_SF_Rifleman)
	vehicleClass = fin_vehclass_SF_SCAR;
	editorSubcategory = fin_vehclass_SF_SCAR;
	weapons[] = { fin_scar_L_aimpoint, fin_g17, Throw, Put };
	respawnWeapons[] = { fin_scar_L_aimpoint, fin_g17, Throw, Put };
	magazines[] = { stdMagScar, Frags , Smoke3Col, flashbangs };
	respawnMagazines[] = { stdMagScar, Frags , Smoke3Col, flashbangs };
	linkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR };
	respawnLinkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR };
};
class fin_SF_Rifleman_AT_SCARL : fin_SF_Rifleman_SCARL
{
	AuthNameMacro(fin_SF_Rifleman_AT)
	weapons[] = { fin_rk95_aimpoint2009, fin_g17, fin_66kes_88, Throw, Put };
	respawnWeapons[] = { fin_rk95_aimpoint2009, fin_66kes_88, fin_g17, Throw, Put };
};
class fin_SF_EOD_SCARL : fin_SF_Rifleman_SCARL
{
	AuthNameMacro(fin_SF_EOD)
	icon = "iconManDemo";
	//TODO: add EOD stuff
};
class fin_SF_Medic_SCARL : fin_SF_Rifleman_SCARL
{
	iconMan = "iconManMedic";
	AuthNameMacro(fin_Medic)
	//TODO: add medic stuff
};
class fin_SF_MG_M249 : fin_SF_MG
{
	AuthNameMacro(fin_SF_MG_M249)
	vehicleClass = fin_vehclass_SF_SCAR;
	editorSubcategory = fin_vehclass_SF_SCAR;
	weapons[] = { fin_M249, fin_g17, Throw, Put };
	respawnWeapons[] = { fin_M249, fin_g17, Throw, Put };
	magazines[] = { fin_100Rnd_M249_mag, fin_100Rnd_M249_mag, fin_100Rnd_M249_mag, fin_100Rnd_M249_mag, Frags , Smoke3Col, flashbangs };
	respawnMagazines[] = { fin_100Rnd_M249_mag, fin_100Rnd_M249_mag, fin_100Rnd_M249_mag, fin_100Rnd_M249_mag, Frags , Smoke3Col, flashbangs };
};
class fin_SF_MG_MG4 : fin_SF_MG
{
	AuthNameMacro(fin_SF_MG_MG4)
	vehicleClass = fin_vehclass_SF_SCAR;
	editorSubcategory = fin_vehclass_SF_SCAR;
	weapons[] = { fin_MG4, fin_g17, Throw, Put };
	respawnWeapons[] = { fin_MG4, fin_g17, Throw, Put };
	magazines[] = { fin_100Rnd_MG4_mag, fin_100Rnd_MG4_mag, fin_100Rnd_MG4_mag, fin_100Rnd_MG4_mag, Frags , Smoke3Col, flashbangs };
	respawnMagazines[] = { fin_100Rnd_MG4_mag, fin_100Rnd_MG4_mag, fin_100Rnd_MG4_mag, fin_100Rnd_MG4_mag, Frags , Smoke3Col, flashbangs };
};
class fin_SF_Grenadier_SCARL : fin_SF_Rifleman_SCARL
{
	AuthNameMacro(fin_SF_Grenadier)
	weapons[] = { fin_scar_L_aimpoint, fin_HK69A1, fin_g17, Throw, Put };
	respawnWeapons[] = { fin_scar_L_aimpoint, fin_HK69A1, fin_g17, Throw, Put };
	//magazines[] = { stdMagScar, Frags , Smoke3Col, flashbangs };
	//respawnMagazines[] = { stdMagScar, Frags , Smoke3Col, flashbangs }; // Todo GL kranut
};
class fin_SF_Spotter_SCARH : fin_SF_Spotter_RK95
{
	AuthNameMacro(fin_Spotter)
	vehicleClass = fin_vehclass_SF_SCAR;
	editorSubcategory = fin_vehclass_SF_SCAR;
	weapons[] = { fin_scar_H_ta11, fin_g17, Throw, Put };
	respawnWeapons[] = { fin_scar_H_ta11, fin_g17, Throw, Put };
	magazines[]			= { fin_20Rnd_scar_H_mag, fin_20Rnd_scar_H_mag, fin_20Rnd_scar_H_mag, fin_20Rnd_scar_H_mag, fin_20Rnd_scar_H_mag, fin_20Rnd_scar_H_mag, fin_20Rnd_scar_H_mag_tracer, Frags , Smoke3Col, flashbangs };
	respawnMagazines[]	= { fin_20Rnd_scar_H_mag, fin_20Rnd_scar_H_mag, fin_20Rnd_scar_H_mag, fin_20Rnd_scar_H_mag, fin_20Rnd_scar_H_mag, fin_20Rnd_scar_H_mag, fin_20Rnd_scar_H_mag_tracer, Frags , Smoke3Col, flashbangs };
};
class fin_SF_JTAC_SCARL : fin_SF_Rifleman_SCARL
{
	AuthNameMacro(fin_JTAC)
	weapons[] = { fin_scar_L_ta11, fin_g17, Throw, Put };
	respawnWeapons[] = { fin_scar_L_ta11, fin_g17, Throw, Put };
	linkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR, Laserdesignator };
	respawnLinkedItems[] = { stdItems, fin_m13_vest, fin_m10_Helmet, NVGoggles_OPFOR, Laserdesignator };
};
*/
/* Military police */
/*
class fin_MP_Rifleman : fin_Rifleman_RK95
{
	vehicleClass = fin_vehclass_MP;
	editorSubcategory = fin_vehclass_MP;
	AuthNameMacro(fin_MP_Rifleman)
	weapons[] = { fin_rk95_aimpoint2009, fin_fn_hp, Throw, Put };
	respawnWeapons[] = { fin_rk95_aimpoint2009, fin_fn_hp, Throw, Put };
};
class fin_MP_SL : fin_SL_RK95
{
	vehicleClass = fin_vehclass_MP;
	editorSubcategory = fin_vehclass_MP;
	icon = "iconManLeader";
	AuthNameMacro(fin_SL)
	weapons[] = { fin_rk95_aimpoint2009, fin_fn_hp, Throw, Put };
	respawnWeapons[] = { fin_rk95_aimpoint2009, fin_fn_hp, Throw, Put };
	magazines[] = { stdMagLdr, Frags , Smoke3Col };	// TODO: pistol mags
	respawnMagazines[] = { stdMagLdr, Frags , Smoke3Col };
};
class fin_MP_TL : fin_MP_SL
{
	AuthNameMacro(fin_TL)
};
class fin_MP_Rifleman_AT : fin_MP_Rifleman
{
	icon = "iconManAT";
	AuthNameMacro(fin_MP_Rifleman_AT)
};
class fin_MP_EOD : fin_MP_Rifleman
{
	icon = "iconManDemo";
	AuthNameMacro(fin_EOD)
};
class fin_MP_Sniper : fin_MP_Rifleman
{
	icon = "iconManRecon";
	AuthNameMacro(fin_Sniper)

};
class fin_MP_Spotter : fin_MP_Rifleman
{
	icon = "iconManRecon";
	AuthNameMacro(fin_Spotter)
};
class fin_MP_MG : fin_MP_Rifleman
{
	icon = "iconManMG";
	AuthNameMacro(fin_MG)
};
*/
/// M04
/* Peacekeepers */
/*
class fin_PK_PL :
{
	vehicleClass = fin_vehclass_PK;
	editorSubcategory = fin_vehclass_PK;
};
class fin_PK_SL :
{

};
class fin_PK_TL :
{

};
class fin_PK_Rifleman :
{
	vehicleClass = fin_vehclass_PK;
};
class fin_PK_Rifleman_AT :
{

};
class fin_PK_EOD :
{

};
class fin_PK_DMR :
{

};
class fin_PK_Medic :
{

};
class fin_PK_Grenadier :
{

};
class fin_PK_MG :
{

};
class fin_PK_RTO :
{

};
*/