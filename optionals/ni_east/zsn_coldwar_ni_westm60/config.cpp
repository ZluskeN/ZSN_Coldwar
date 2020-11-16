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
	class ZSN_RangerW;
	class ZSN_RangerWMG: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","hlc_lmg_m60"};
		respawnWeapons[] = {"Throw","Put","hlc_lmg_m60"};
	};
	class ZSN_RangerWD;
	class ZSN_RangerWDMG: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","hlc_lmg_m60"};
		respawnWeapons[] = {"Throw","Put","hlc_lmg_m60"};
	};
};
//};
