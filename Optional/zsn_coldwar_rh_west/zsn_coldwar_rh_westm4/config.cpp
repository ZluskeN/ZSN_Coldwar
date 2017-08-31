////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Aug 02 23:21:43 2016 : Created on Tue Aug 02 23:21:43 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_bow_west : config.bin{
class CfgPatches
{
	class ZSN_ColdWar_RHM4
	{
		author = "ZluskeN";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdwarWest","RH_m4_cfg"};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class usm_base_w;
	class ZSN_SoldierWD;
	class ZSN_SoldierWDSaboteur: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","CUP_hgun_glock17_snds","RH_m4","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_glock17_snds","RH_m4","Binocular"};
	};
};
//};
