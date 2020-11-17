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
class cfgweapons
{
	class Rifle_Base_F;
	class hlc_M14_base;
	class hlc_rifle_M21;
	class zsn_M21: hlc_rifle_M21
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "hlc_optic_artel_m14";
			};
		};
	};
};
class CfgVehicles
{
	class B_soldier_base_F;
	class ZSN_SoldierW;
	class ZSN_SoldierWSniper: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","zsn_M21"};
		respawnWeapons[] = {"Throw","Put","zsn_M21"};
	};
	class ZSN_SoldierWD;
	class ZSN_SoldierWDSniper: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","zsn_M21"};
		respawnWeapons[] = {"Throw","Put","zsn_M21"};
	};
};
//class Extended_Init_EventHandlers
//{
//	class ZSN_SoldierWSniper
//	{
//		class ZSN_ScopeWM21
//		{
//			init = "[(_this select 0) addPrimaryWeaponItem "hlc_optic_artel_m14"]";
//		};
//	};
//	class ZSN_SoldierWDSniper
//	{
//		class ZSN_ScopeWDM21
//		{
//			init = "[(_this select 0) addPrimaryWeaponItem "hlc_optic_artel_m14"]";
//		};
//	};
//};
//};
