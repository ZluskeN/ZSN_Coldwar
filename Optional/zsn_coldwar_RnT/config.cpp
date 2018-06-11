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
		requiredAddons[] = {"ZSN_ColdWarEuro","Redd_Vehicles_Main"};
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
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Fuchs_1A4_Jg_Flecktarn;
	class ZSN_Redd_Tank_Fuchs_1A4_Jg_Flecktarn: Redd_Tank_Fuchs_1A4_Jg_Flecktarn
	{
		editorCategory = "ZSN_FRG";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Fuchs_1A4_Jg_Milan_Flecktarn;
	class ZSN_Redd_Tank_Fuchs_1A4_Jg_Milan_Flecktarn: Redd_Tank_Fuchs_1A4_Jg_Milan_Flecktarn
	{
		editorCategory = "ZSN_FRG";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Fuchs_1A4_Pi_Flecktarn;
	class ZSN_Redd_Tank_Fuchs_1A4_Pi_Flecktarn: Redd_Tank_Fuchs_1A4_Pi_Flecktarn
	{
		editorCategory = "ZSN_FRG";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Fuchs_1A4_San_Flecktarn;
	class ZSN_Redd_Tank_Fuchs_1A4_San_Flecktarn: Redd_Tank_Fuchs_1A4_San_Flecktarn
	{
		editorCategory = "ZSN_FRG";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Wiesel_1A4_MK20_Flecktarn;
	class ZSN_Redd_Tank_Wiesel_1A4_MK20_Flecktarn: Redd_Tank_Wiesel_1A4_MK20_Flecktarn
	{
		editorCategory = "ZSN_FRG";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Wiesel_1A2_TOW_Flecktarn;
	class ZSN_Redd_Tank_Wiesel_1A2_TOW_Flecktarn: Redd_Tank_Wiesel_1A2_TOW_Flecktarn
	{
		editorCategory = "ZSN_FRG";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class Redd_Tank_Gepard_1A2_Flecktarn;
	class ZSN_Redd_Tank_Gepard_1A2_Flecktarn: Redd_Tank_Gepard_1A2_Flecktarn
	{
		editorCategory = "ZSN_FRG";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
};
