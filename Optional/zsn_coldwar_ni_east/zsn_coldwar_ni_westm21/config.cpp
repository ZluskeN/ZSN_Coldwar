////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Jan 01 18:59:50 2017 : Created on Sun Jan 01 18:59:50 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_hlc_east : config.bin{
class CfgPatches
{
	class ZSN_ColdWar_NIM21
	{
		author = "ZluskeN";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarWest","HLC_COMPAT_CUP_M14"};
	};
};
class CfgVehicles
{
	class B_soldier_base_F;
	class ZSN_SoldierW;
	class ZSN_SoldierWSniper: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","hlc_rifle_M21"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_M21"};
	};
	class ZSN_SoldierWD;
	class ZSN_SoldierWDSniper: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","hlc_rifle_M21"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_M21"};
	};
};
class Extended_Init_EventHandlers
{
	class ZSN_SoldierWSniper
	{
		class ZSN_ScopeWM21
		{
			init = "[(_this select 0) addPrimaryWeaponItem "hlc_optic_artel_m14"]";
		};
	};
	class ZSN_SoldierWDSniper
	{
		class ZSN_ScopeWDM21
		{
			init = "[(_this select 0) addPrimaryWeaponItem "hlc_optic_artel_m14"]";
		};
	};
};
//};
