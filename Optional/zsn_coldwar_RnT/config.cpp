////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Wed May 31 10:56:42 2017 : Created on Wed May 31 10:56:42 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_ColdWar_RnT
	{
		author = "ZluskeN";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarEuro","Redd_Vehicles_Main","gm_demo"};
		magazines[] = {};
	};
};
class CfgEditorCategories
{
	class ZSN_FRG
	{
		displayName = "Cold War FRG Vehicles";
	};
};
class CfgVehicles
{
	class Redd_Marder_1A5_Flecktarn;
	class ZSN_Redd_Marder_1A5_Flecktarn: Redd_Marder_1A5_Flecktarn
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_APCs";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Fuchs_1A4_Jg_Flecktarn;
	class ZSN_Redd_Tank_Fuchs_1A4_Jg_Flecktarn: Redd_Tank_Fuchs_1A4_Jg_Flecktarn
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_APCs";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Fuchs_1A4_Jg_Milan_Flecktarn;
	class ZSN_Redd_Tank_Fuchs_1A4_Jg_Milan_Flecktarn: Redd_Tank_Fuchs_1A4_Jg_Milan_Flecktarn
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_APCs";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Fuchs_1A4_Pi_Flecktarn;
	class ZSN_Redd_Tank_Fuchs_1A4_Pi_Flecktarn: Redd_Tank_Fuchs_1A4_Pi_Flecktarn
	{
		scope = 1;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_APCs";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Fuchs_1A4_San_Flecktarn;
	class ZSN_Redd_Tank_Fuchs_1A4_San_Flecktarn: Redd_Tank_Fuchs_1A4_San_Flecktarn
	{
		scope = 1;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_APCs";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Wiesel_1A4_MK20_Flecktarn;
	class ZSN_Redd_Tank_Wiesel_1A4_MK20_Flecktarn: Redd_Tank_Wiesel_1A4_MK20_Flecktarn
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Tanks";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Wiesel_1A2_TOW_Flecktarn;
	class ZSN_Redd_Tank_Wiesel_1A2_TOW_Flecktarn: Redd_Tank_Wiesel_1A2_TOW_Flecktarn
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Tanks";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Gepard_1A2_Flecktarn;
	class ZSN_Redd_Tank_Gepard_1A2_Flecktarn: Redd_Tank_Gepard_1A2_Flecktarn
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_AAs";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_FueFu;
	class ZSN_Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_FueFu: Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_FueFu
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_Moerser;
	class ZSN_Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_Moerser: Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_Moerser
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_San;
	class ZSN_Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_San: Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_San
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class Redd_Milan_Static;
	class ZSN_Redd_Milan_Static: Redd_Milan_Static
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Turrets";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class Redd_Tank_M120_Tampella;
	class ZSN_Redd_Tank_M120_Tampella: Redd_Tank_M120_Tampella
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Turrets";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class rnt_sppz_2a2_luchs_flecktarn;
	class ZSN_rnt_sppz_2a2_luchs_flecktarn: rnt_sppz_2a2_luchs_flecktarn
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Tanks";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class rnt_lkw_10t_mil_gl_kat_i_repair_fleck;
	class ZSN_rnt_lkw_10t_mil_gl_kat_i_repair_fleck: rnt_lkw_10t_mil_gl_kat_i_repair_fleck
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class rnt_lkw_5t_mil_gl_kat_i_fuel_fleck;
	class ZSN_rnt_lkw_5t_mil_gl_kat_i_fuel_fleck: rnt_lkw_5t_mil_gl_kat_i_fuel_fleck
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class rnt_lkw_5t_mil_gl_kat_i_transport_fleck;
	class ZSN_rnt_lkw_5t_mil_gl_kat_i_transport_fleck: rnt_lkw_5t_mil_gl_kat_i_transport_fleck
	{
		scope = 1;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class rnt_lkw_7t_mil_gl_kat_i_mun_fleck;
	class ZSN_rnt_lkw_7t_mil_gl_kat_i_mun_fleck: rnt_lkw_7t_mil_gl_kat_i_mun_fleck
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class rnt_lkw_7t_mil_gl_kat_i_transport_fleck;
	class ZSN_rnt_lkw_7t_mil_gl_kat_i_transport_fleck: rnt_lkw_7t_mil_gl_kat_i_transport_fleck
	{
		scope = 1;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class gm_demo_nato_mb_u1300l_cargo;
	class ZSN_gm_demo_nato_mb_u1300l_cargo: gm_demo_nato_mb_u1300l_cargo
	{
		editorCategory = "ZSN_FRG";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
		displayname = "LKW 2t mil gl transport";
		hiddenSelectionsTextures[] = {"\gm_demo\gm_demo_mb_u1300l\data\gm_demo_335_80_R_20_mil_01_co.paa","\gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_rim_01_nato_co.paa","\gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_rim_01_nato_co.paa","\gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_rim_01_nato_co.paa","\gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_ext_01_nato_co.paa","\gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_ext_02_nato_co.paa","\gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_cargo_ext_03_nato_co.paa"};
	};
	class rnt_mg3_static;
	class ZSN_rnt_mg3_static: rnt_mg3_static
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Turrets";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class rnt_mg3_static_ai;
	class ZSN_rnt_mg3_static_ai: rnt_mg3_static_ai
	{
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Turrets";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
};
