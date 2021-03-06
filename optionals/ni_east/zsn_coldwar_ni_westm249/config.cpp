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
class CfgWeapons
{
	class CUP_lmg_minimi;
	class ZSN_M249_SAW: CUP_lmg_minimi
	{
		scope = 1;
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
