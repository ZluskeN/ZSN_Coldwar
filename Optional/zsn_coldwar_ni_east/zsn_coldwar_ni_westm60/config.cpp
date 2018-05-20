////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Jan 01 18:59:50 2017 : Created on Sun Jan 01 18:59:50 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_ColdWar_NIM60
	{
		author = "ZluskeN";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarWest","HLC_COMPAT_CUP_M60E4"};
	};
};
class CfgVehicles
{
	class B_soldier_base_F;
	class ZSN_SoldierW;
	class ZSN_SoldierWMG: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","hlc_lmg_m60"};
		respawnWeapons[] = {"Throw","Put","hlc_lmg_m60"};
	};
	class ZSN_SoldierWD;
	class ZSN_SoldierWDMG: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","hlc_lmg_m60"};
		respawnWeapons[] = {"Throw","Put","hlc_lmg_m60"};
	};
};
//};
