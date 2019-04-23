////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Jan 01 18:59:50 2017 : Created on Sun Jan 01 18:59:50 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_hlc_east : config.bin{
class CfgPatches
{
	class ZSN_ColdWar_NISLR
	{
		author = "ZluskeN";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarEuro","HLC_COMPAT_CUP_FAL"};
	};
};
class CfgWeapons
{
	class CUP_arifle_FNFAL;
	class ZSN_L1A1: CUP_arifle_FNFAL
	{
		scope = 1;
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class ZSN_EurosolW: B_Soldier_base_F
	{
		weapons[] = {"Throw","Put","hlc_rifle_L1A1SLR"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_L1A1SLR"};
	};
	class ZSN_EurosolWMGAss: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","Binocular"};
	};
	class ZSN_EurosolWAA: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","CUP_launch_FIM92Stinger"};
	};
	class ZSN_EurosolWLAW: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","CUP_launch_MAAWS"};
	};
	class ZSN_EurosolWLeader: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_EurosolWD: B_Soldier_base_F
	{
		weapons[] = {"Throw","Put","hlc_rifle_L1A1SLR"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_L1A1SLR"};
	};
	class ZSN_EurosolWDMGAss: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","Binocular"};
	};
	class ZSN_EurosolWDAA: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","CUP_launch_FIM92Stinger"};
	};
	class ZSN_EurosolWDLAW: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","CUP_launch_MAAWS"};
	};
	class ZSN_EurosolWDLeader: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_L1A1SLR","hgun_Pistol_Signal_F","Binocular"};
	};
	class LandVehicle;
	class Car;
	class Car_F;
	class Truck_F;
	class CUP_B_LR_Transport_GB_W;
	class ZSN_CUP_BAF_LR: CUP_B_LR_Transport_GB_W
	{
		class Transportweapons
		{
			delete _xx_ZSN_L1A1;
			class _xx_hlc_rifle_L1A1SLR
			{
				weapon = "hlc_rifle_L1A1SLR";
				count = 1;
			};
		};
	};
};
//};
