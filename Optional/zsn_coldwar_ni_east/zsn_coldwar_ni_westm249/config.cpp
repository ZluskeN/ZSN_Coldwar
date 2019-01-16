////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Jan 01 18:59:50 2017 : Created on Sun Jan 01 18:59:50 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_hlc_east : config.bin{
class CfgPatches
{
	class ZSN_ColdWar_NIM249
	{
		author = "ZluskeN";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarWest","HLC_COMPAT_CUP_SAW"};
	};
};
class CfgVehicles
{
	class B_soldier_base_F;
	class ZSN_SoldierW;
	class ZSN_SoldierWAR: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","hlc_lmg_M249E1"};
		respawnWeapons[] = {"Throw","Put","hlc_lmg_M249E1"};
	};
	class ZSN_SoldierWD;
	class ZSN_SoldierWDAR: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","hlc_lmg_M249E1"};
		respawnWeapons[] = {"Throw","Put","hlc_lmg_M249E1"};
	};
	class ZSN_MarineW;
	class ZSN_MarineWAR: ZSN_MarineW
	{
		weapons[] = {"Throw","Put","hlc_lmg_M249E1"};
		respawnWeapons[] = {"Throw","Put","hlc_lmg_M249E1"};
	};
	class ZSN_MarineWD;
	class ZSN_MarineWDAR: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","hlc_lmg_M249E1"};
		respawnWeapons[] = {"Throw","Put","hlc_lmg_M249E1"};
	};
	class ZSN_RangerW;
	class ZSN_RangerWAR: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","hlc_lmg_M249E1"};
		respawnWeapons[] = {"Throw","Put","hlc_lmg_M249E1"};
	};
	class ZSN_RangerWD;
	class ZSN_RangerWDAR: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","hlc_lmg_M249E1"};
		respawnWeapons[] = {"Throw","Put","hlc_lmg_M249E1"};
	};
};
//};
