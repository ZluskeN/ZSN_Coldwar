class CfgPatches
{
	class ZSN_ColdWar_RnT
	{
		author = "ZluskeN";
		units[] = {"ZSN_Redd_Marder_1A5_Flecktarn","ZSN_Redd_Marder_1A5_Tropentarn","ZSN_Redd_Tank_Fuchs_1A4_Jg_Flecktarn","ZSN_Redd_Tank_Fuchs_1A4_Jg_Tropentarn","ZSN_Redd_Tank_Fuchs_1A4_Jg_Milan_Flecktarn","ZSN_Redd_Tank_Fuchs_1A4_Jg_Milan_Tropentarn","ZSN_Redd_Tank_Wiesel_1A4_MK20_Flecktarn","ZSN_Redd_Tank_Wiesel_1A4_MK20_Tropentarn","ZSN_Redd_Tank_Wiesel_1A2_TOW_Flecktarn","ZSN_Redd_Tank_Wiesel_1A2_TOW_Tropentarn","ZSN_Redd_Tank_Gepard_1A2_Flecktarn","ZSN_Redd_Tank_Gepard_1A2_Tropentarn","ZSN_Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_FueFu","ZSN_Redd_Tank_LKW_leicht_gl_Wolf_Tropentarn_FueFu","ZSN_Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_Moerser","ZSN_Redd_Tank_LKW_leicht_gl_Wolf_Tropentarn_Moerser","ZSN_Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_San","ZSN_Redd_Tank_LKW_leicht_gl_Wolf_Tropentarn_San","ZSN_Redd_Milan_Static","ZSN_Redd_Milan_Static_Des","ZSN_Redd_Tank_M120_Tampella","ZSN_Redd_Tank_M120_Tampella_Des","ZSN_rnt_sppz_2a2_luchs_flecktarn","ZSN_rnt_sppz_2a2_luchs_tropentarn","ZSN_rnt_lkw_10t_mil_gl_kat_i_repair_fleck","ZSN_rnt_lkw_10t_mil_gl_kat_i_repair_trope","ZSN_rnt_lkw_7t_mil_gl_kat_i_mun_fleck","ZSN_rnt_lkw_7t_mil_gl_kat_i_mun_trope","ZSN_rnt_lkw_5t_mil_gl_kat_i_fuel_fleck","ZSN_rnt_lkw_5t_mil_gl_kat_i_fuel_trope","ZSN_gm_demo_nato_mb_u1300l_cargo","ZSN_gm_demo_nato_mb_u1300l_cargo_des","ZSN_rnt_mg3_static_ai","ZSN_rnt_mg3_static_ai_des"};
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
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_APCs";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Marder_1A5_Tropentarn;
	class ZSN_Redd_Marder_1A5_Tropentarn: Redd_Marder_1A5_Tropentarn
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_APCs";
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDCrew";
		typicalCargo[] = {"ZSN_GersolWDCrew"};
	};
	class Redd_Tank_Fuchs_1A4_Jg_Flecktarn;
	class ZSN_Redd_Tank_Fuchs_1A4_Jg_Flecktarn: Redd_Tank_Fuchs_1A4_Jg_Flecktarn
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_APCs";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Fuchs_1A4_Jg_Tropentarn;
	class ZSN_Redd_Tank_Fuchs_1A4_Jg_Tropentarn: Redd_Tank_Fuchs_1A4_Jg_Tropentarn
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_APCs";
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDCrew";
		typicalCargo[] = {"ZSN_GersolWDCrew"};
	};
	class Redd_Tank_Fuchs_1A4_Jg_Milan_Flecktarn;
	class ZSN_Redd_Tank_Fuchs_1A4_Jg_Milan_Flecktarn: Redd_Tank_Fuchs_1A4_Jg_Milan_Flecktarn
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_APCs";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Fuchs_1A4_Jg_Milan_Tropentarn;
	class ZSN_Redd_Tank_Fuchs_1A4_Jg_Milan_Tropentarn: Redd_Tank_Fuchs_1A4_Jg_Milan_Tropentarn
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_APCs";
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDCrew";
		typicalCargo[] = {"ZSN_GersolWDCrew"};
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
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Tanks";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Wiesel_1A4_MK20_Tropentarn;
	class ZSN_Redd_Tank_Wiesel_1A4_MK20_Tropentarn: Redd_Tank_Wiesel_1A4_MK20_Tropentarn
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Tanks";
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDCrew";
		typicalCargo[] = {"ZSN_GersolWDCrew"};
	};
	class Redd_Tank_Wiesel_1A2_TOW_Flecktarn;
	class ZSN_Redd_Tank_Wiesel_1A2_TOW_Flecktarn: Redd_Tank_Wiesel_1A2_TOW_Flecktarn
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Tanks";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Wiesel_1A2_TOW_Tropentarn;
	class ZSN_Redd_Tank_Wiesel_1A2_TOW_Tropentarn: Redd_Tank_Wiesel_1A2_TOW_Tropentarn
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Tanks";
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDCrew";
		typicalCargo[] = {"ZSN_GersolWDCrew"};
	};
	class Redd_Tank_Gepard_1A2_Flecktarn;
	class ZSN_Redd_Tank_Gepard_1A2_Flecktarn: Redd_Tank_Gepard_1A2_Flecktarn
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_AAs";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Gepard_1A2_Tropentarn;
	class ZSN_Redd_Tank_Gepard_1A2_Tropentarn: Redd_Tank_Gepard_1A2_Tropentarn
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_AAs";
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDCrew";
		typicalCargo[] = {"ZSN_GersolWDCrew"};
	};
	class Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_FueFu;
	class ZSN_Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_FueFu: Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_FueFu
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class Redd_Tank_LKW_leicht_gl_Wolf_Tropentarn_FueFu;
	class ZSN_Redd_Tank_LKW_leicht_gl_Wolf_Tropentarn_FueFu: Redd_Tank_LKW_leicht_gl_Wolf_Tropentarn_FueFu
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDB";
		typicalCargo[] = {"ZSN_GersolWDB"};
	};
	class Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_Moerser;
	class ZSN_Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_Moerser: Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_Moerser
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class Redd_Tank_LKW_leicht_gl_Wolf_Tropentarn_Moerser;
	class ZSN_Redd_Tank_LKW_leicht_gl_Wolf_Tropentarn_Moerser: Redd_Tank_LKW_leicht_gl_Wolf_Tropentarn_Moerser
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDB";
		typicalCargo[] = {"ZSN_GersolWDB"};
	};
	class Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_San;
	class ZSN_Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_San: Redd_Tank_LKW_leicht_gl_Wolf_Flecktarn_San
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class Redd_Tank_LKW_leicht_gl_Wolf_Tropentarn_San;
	class ZSN_Redd_Tank_LKW_leicht_gl_Wolf_Tropentarn_San: Redd_Tank_LKW_leicht_gl_Wolf_Tropentarn_San
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDB";
		typicalCargo[] = {"ZSN_GersolWDB"};
	};
	class Redd_Milan_Static;
	class ZSN_Redd_Milan_Static: Redd_Milan_Static
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Turrets";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class ZSN_Redd_Milan_Static_Des: ZSN_Redd_Milan_Static
	{
		scopeCurator = 2;
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDB";
		typicalCargo[] = {"ZSN_GersolWDB"};
	};
	class Redd_Tank_M120_Tampella;
	class ZSN_Redd_Tank_M120_Tampella: Redd_Tank_M120_Tampella
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Turrets";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class ZSN_Redd_Tank_M120_Tampella_Des: ZSN_Redd_Tank_M120_Tampella
	{
		scopeCurator = 2;
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDB";
		typicalCargo[] = {"ZSN_GersolWDB"};
	};
	class rnt_sppz_2a2_luchs_flecktarn;
	class ZSN_rnt_sppz_2a2_luchs_flecktarn: rnt_sppz_2a2_luchs_flecktarn
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Tanks";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class rnt_sppz_2a2_luchs_tropentarn;
	class ZSN_rnt_sppz_2a2_luchs_tropentarn: rnt_sppz_2a2_luchs_tropentarn
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Tanks";
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDCrew";
		typicalCargo[] = {"ZSN_GersolWDCrew"};
	};
	class rnt_lkw_10t_mil_gl_kat_i_repair_fleck;
	class ZSN_rnt_lkw_10t_mil_gl_kat_i_repair_fleck: rnt_lkw_10t_mil_gl_kat_i_repair_fleck
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class rnt_lkw_10t_mil_gl_kat_i_repair_trope;
	class ZSN_rnt_lkw_10t_mil_gl_kat_i_repair_trope: rnt_lkw_10t_mil_gl_kat_i_repair_trope
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDB";
		typicalCargo[] = {"ZSN_GersolWDB"};
	};
	class rnt_lkw_7t_mil_gl_kat_i_mun_fleck;
	class ZSN_rnt_lkw_7t_mil_gl_kat_i_mun_fleck: rnt_lkw_7t_mil_gl_kat_i_mun_fleck
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class rnt_lkw_7t_mil_gl_kat_i_mun_trope;
	class ZSN_rnt_lkw_7t_mil_gl_kat_i_mun_trope: rnt_lkw_7t_mil_gl_kat_i_mun_trope
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDB";
		typicalCargo[] = {"ZSN_GersolWDB"};
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
	class rnt_lkw_5t_mil_gl_kat_i_fuel_fleck;
	class ZSN_rnt_lkw_5t_mil_gl_kat_i_fuel_fleck: rnt_lkw_5t_mil_gl_kat_i_fuel_fleck
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class rnt_lkw_5t_mil_gl_kat_i_fuel_trope;
	class ZSN_rnt_lkw_5t_mil_gl_kat_i_fuel_trope: rnt_lkw_5t_mil_gl_kat_i_fuel_trope
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Cars";
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDB";
		typicalCargo[] = {"ZSN_GersolWDB"};
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
	class gm_demo_nato_mb_u1300l_cargo;
	class ZSN_gm_demo_nato_mb_u1300l_cargo: gm_demo_nato_mb_u1300l_cargo
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
		displayname = "LKW 2t mil gl Unimog Transport";
		hiddenSelectionsTextures[] = {"\gm_demo\gm_demo_mb_u1300l\data\gm_demo_335_80_R_20_mil_01_co.paa","\gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_rim_01_nato_co.paa","\gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_rim_01_nato_co.paa","\gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_rim_01_nato_co.paa","\gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_ext_01_nato_co.paa","\gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_ext_02_nato_co.paa","\gm_demo\gm_demo_mb_u1300l\gm_demo_nato_mb_u1300l\data\nato\gm_demo_nato_mb_u1300l_cargo_ext_03_nato_co.paa"};
		class TransportBackpacks
		{
			class _xx_rnt_mg3_static_barell_ai
			{
				backpack = "rnt_mg3_static_barell_ai";
				count = 1;
			};
			class _xx_rnt_mg3_static_tripod_ai
			{
				backpack = "rnt_mg3_static_tripod_ai";
				count = 1;
			};
		};
	};
	class ZSN_gm_demo_nato_mb_u1300l_cargo_des: ZSN_gm_demo_nato_mb_u1300l_cargo
	{
		scopeCurator = 2;
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDB";
		typicalCargo[] = {"ZSN_GersolWDB"};
	};
	class rnt_mg3_static;
	class ZSN_rnt_mg3_static: rnt_mg3_static
	{
		scope = 1;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Turrets";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class ZSN_rnt_mg3_static_des: ZSN_rnt_mg3_static
	{
		scope = 1;
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDB";
		typicalCargo[] = {"ZSN_GersolWDB"};
	};
	class rnt_mg3_static_ai;
	class ZSN_rnt_mg3_static_ai: rnt_mg3_static_ai
	{
		scopeCurator = 2;
		editorCategory = "ZSN_FRG";
		editorSubcategory = "EdSubcat_Turrets";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWB";
		typicalCargo[] = {"ZSN_GersolWB"};
	};
	class ZSN_rnt_mg3_static_ai_des: ZSN_rnt_mg3_static_ai
	{
		scopeCurator = 2;
		faction = "ZSN_WGerD_ColdWar";
		crew = "ZSN_GersolWDB";
		typicalCargo[] = {"ZSN_GersolWDB"};
	};
};

class CfgGroups
{
	class West
	{
		class ZSN_WGer_ColdWar
		{
			name = "Cold War FGB";
			class Motorized
			{
				name = "Motorized Infantry";
				class ZSN_WGer_UnimogInfantry
				{
					name = "Infantry Unit (Unimog)";
					faction = "ZSN_WGer_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_GersolWLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_GersolWLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_GersolWLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_GersolWMedic";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_GersolWMGAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_GersolWMG";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_GersolWLeader";
						rank = "CORPORAL";
						position[] = {3,-2,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_GersolWLeader";
						rank = "CORPORAL";
						position[] = {-3,-2,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_GersolWLAW";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_GersolWMedic";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "ZSN_GersolWMGAss";
						rank = "Private";
						position[] = {7,-2,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "ZSN_GersolWMG";
						rank = "Private";
						position[] = {9,-2,0};
					};
					class Unit12
					{
						side = 2;
						vehicle = "ZSN_gm_demo_nato_mb_u1300l_cargo";
						rank = "Private";
						position[] = {0,5,0};
					};
				};
				class ZSN_WGer_FuchsInfantry
				{
					name = "Infantry unit (Fuchs)";
					faction = "ZSN_WGer_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_GersolWLeader";
						rank = "SERGEANT";
						position[] = {0,-2,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_GersolWLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_GersolWLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_GersolWLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_GersolWLAW";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_GersolWMG";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_GersolWMG";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_GersolWMGAss";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_GersolWMGAss";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_Redd_Tank_Fuchs_1A4_Jg_Flecktarn";
						rank = "Private";
						position[] = {0,5,0};
					};
				};
			};
			class Mechanised
			{
				name = "Mechanised Infantry";
				class ZSN_WGer_MarderInfantry
				{
					name = "Infantry unit (Marder)";
					faction = "ZSN_WGer_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_GersolWLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_GersolWLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_GersolWLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_GersolWMedic";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_GersolWMGAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_GersolWMG";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "ZSN_Redd_Marder_1A5_Flecktarn";
						rank = "Private";
						position[] = {0,5,0};
					};
				};
				class ZSN_WGer_Tankettes
				{
					name = "Support Unit (Wiesel)";
					faction = "ZSN_WGer_ColdWar";
					side = 1;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_Redd_Tank_Wiesel_1A2_TOW_Flecktarn";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_Redd_Tank_Wiesel_1A2_TOW_Flecktarn";
						rank = "CORPORAL";
						position[] = {-4,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_Redd_Tank_Wiesel_1A4_MK20_Flecktarn";
						rank = "Private";
						position[] = {8,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_Redd_Tank_Wiesel_1A4_MK20_Flecktarn";
						rank = "Private";
						position[] = {-8,0,0};
					};
				};
				class ZSN_WGer_AAVehicles
				{
					name = "Support Unit (Gepard)";
					faction = "ZSN_WGer_ColdWar";
					side = 1;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_Redd_Tank_Gepard_1A2_Flecktarn";
						rank = "Private";
						position[] = {-6,-6,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_Redd_Tank_Gepard_1A2_Flecktarn";
						rank = "Private";
						position[] = {6,-6,0};
					};
				};
			};
		};
		class ZSN_WGerD_ColdWar
		{
			name = "Cold War FGB (Desert)";
			class Motorized
			{
				name = "Motorized Infantry";
				class ZSN_WGerD_UnimogInfantry
				{
					name = "Infantry Unit (Unimog)";
					faction = "ZSN_WGerD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_GersolWDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_GersolWDLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_GersolWDLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_GersolWDMedic";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_GersolWDMGAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_GersolWDMG";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_GersolWDLeader";
						rank = "CORPORAL";
						position[] = {3,-2,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_GersolWDLeader";
						rank = "CORPORAL";
						position[] = {-3,-2,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_GersolWDLAW";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_GersolWDMedic";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "ZSN_GersolWDMGAss";
						rank = "Private";
						position[] = {7,-2,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "ZSN_GersolWDMG";
						rank = "Private";
						position[] = {9,-2,0};
					};
					class Unit12
					{
						side = 2;
						vehicle = "ZSN_gm_demo_nato_mb_u1300l_cargo_des";
						rank = "Private";
						position[] = {0,5,0};
					};
				};
				class ZSN_WGerD_FuchsInfantry
				{
					name = "Infantry unit (Fuchs)";
					faction = "ZSN_WGerD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_GersolWDLeader";
						rank = "SERGEANT";
						position[] = {0,-2,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_GersolWDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_GersolWDLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_GersolWDLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_GersolWDLAW";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_GersolWDMG";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_GersolWDMG";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_GersolWDMGAss";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_GersolWDMGAss";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_Redd_Tank_Fuchs_1A4_Jg_Tropentarn";
						rank = "Private";
						position[] = {0,5,0};
					};
				};
			};
			class Mechanised
			{
				name = "Mechanised Infantry";
				class ZSN_WGerD_MarderInfantry
				{
					name = "Infantry unit (Marder)";
					faction = "ZSN_WGerD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_GersolWDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_GersolWDLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_GersolWDLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_GersolWDMedic";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_GersolWDMGAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_GersolWDMG";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "ZSN_Redd_Marder_1A5_Tropentarn";
						rank = "Private";
						position[] = {0,5,0};
					};
				};
				class ZSN_WGerD_Tankettes
				{
					name = "Support Unit (Wiesel)";
					faction = "ZSN_WGerD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_Redd_Tank_Wiesel_1A2_TOW_Tropentarn";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_Redd_Tank_Wiesel_1A2_TOW_Tropentarn";
						rank = "CORPORAL";
						position[] = {-4,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_Redd_Tank_Wiesel_1A4_MK20_Tropentarn";
						rank = "Private";
						position[] = {8,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_Redd_Tank_Wiesel_1A4_MK20_Tropentarn";
						rank = "Private";
						position[] = {-8,0,0};
					};
				};
				class ZSN_WGerD_AAVehicles
				{
					name = "Support Unit (Gepard)";
					faction = "ZSN_WGerD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_Redd_Tank_Gepard_1A2_Tropentarn";
						rank = "Private";
						position[] = {-6,-6,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_Redd_Tank_Gepard_1A2_Tropentarn";
						rank = "Private";
						position[] = {6,-6,0};
					};
				};
			};
		};
	};
};