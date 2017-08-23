////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Jan 01 18:59:50 2017 : Created on Sun Jan 01 18:59:50 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_hlc_east : config.bin{
class CfgPatches
{
	class ZSN_ColdWar_NIMP5
	{
		author = "ZluskeN";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarWest","HLC_COMPAT_CUP_MP5"};
	};
};
class CfgVehicles
{
	class B_soldier_base_F;
	class ZSN_SoldierW;
	class ZSN_SoldierWSaboteur: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","CUP_hgun_MicroUzi","hlc_smg_mp5sd6","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_MicroUzi","hlc_smg_mp5sd6","Binocular"};
	};
};
//};
