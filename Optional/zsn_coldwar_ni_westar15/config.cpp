////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Jan 01 18:59:50 2017 : Created on Sun Jan 01 18:59:50 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_hlc_east : config.bin{
class CfgPatches
{
	class ZSN_ColdWar_NIAR15
	{
		author = "ZluskeN";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarVehicles","HLC_COMPAT_CUP_AR15"};
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
//};
