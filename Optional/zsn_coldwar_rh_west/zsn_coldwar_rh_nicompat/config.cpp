
////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.66
//'now' is Sun Aug 27 19:12:29 2017 : 'file' last modified on Thu Aug 24 16:16:33 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_ColdWar_NIAR15
	{
		author = "ZluskeN";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarVehicles","ZSN_ColdWar_RHM4","HLC_COMPAT_CUP_AR15"};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class B_soldier_base_F;
	class ZSN_SoldierWD;
	class ZSN_SoldierWDSaboteur: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","CUP_hgun_glock17_snds","hlc_rifle_Colt727","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_glock17_snds","hlc_rifle_Colt727","Binocular"};
	};
};
