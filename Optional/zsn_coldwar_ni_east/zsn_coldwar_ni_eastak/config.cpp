////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Jan 01 18:59:50 2017 : Created on Sun Jan 01 18:59:50 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_hlc_east : config.bin{
class CfgPatches
{
	class ZSN_ColdWar_NIAK
	{
		author = "ZluskeN";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarVehicles","HLC_COMPAT_CUP_AK"};
	};
};
class CfgVehicles
{
	class ReammoBox_F;
	class CUP_ReammoBox_EP1;
	class CUP_RUSpecialWeaponsBox;
	class ZSN_East_Ammocrate: CUP_RUSpecialWeaponsBox
	{
		class TransportMagazines
		{
			delete _xx_CUP_8Rnd_9x18_Makarov_M;
			class _xx_10Rnd_9x21_Mag
			{
				magazine = "10Rnd_9x21_Mag";
				count = 100;
			};
		};
	};
	class O_soldier_base_F;
	class ZSN_SoldierE: O_Soldier_base_F
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty"};
	};
	class ZSN_SoldierEAR: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","hlc_rifle_rpk74n"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_rpk74n"};
	};
	class ZSN_SoldierEMGAss: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","Binocular"};
	};
	class ZSN_SoldierELAW: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_RPG18"};
	};
	class SUD_USSR_Soldier_AT: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_RPG7V"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_RPG7V"};
	};
	class ZSN_SoldierEOfficer: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","hgun_Pistol_01_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","hgun_Pistol_01_F","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_SoldierENCO: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_SoldierELeader: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74_GL","Binocular"};
	};
	class ZSN_SoldierEG: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74_GL"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74_GL"};
	};
	class ZSN_SoldierEAT: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_Metis"};
	};
	class ZSN_SoldierEATAss: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","ZSN_Rangefinder"};
	};
	class ZSN_SoldierEAA: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_Igla"};
	};
	class ZSN_SoldierECrew: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74u","hgun_Pistol_01_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74u","hgun_Pistol_01_F","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell"};
	};
	class ZSN_SoldierED: O_Soldier_base_F
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty"};
	};
	class ZSN_SoldierEDAR: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","hlc_rifle_rpk74n"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_rpk74n"};
	};
	class ZSN_SoldierEDMGAss: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","Binocular"};
	};
	class ZSN_SoldierEDLAW: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_RPG18"};
	};
	class SUD_DUSSR_Soldier_AT: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_RPG7V"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_RPG7V"};
	};
	class ZSN_SoldierEDOfficer: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","hgun_Pistol_01_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","hgun_Pistol_01_F","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_SoldierEDNCO: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_SoldierEDLeader: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74_GL","Binocular"};
	};
	class ZSN_SoldierEDG: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74_GL"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74_GL"};
	};
	class ZSN_SoldierEDAT: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_Metis"};
	};
	class ZSN_SoldierEDATAss: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","ZSN_Rangefinder"};
	};
	class ZSN_SoldierEDAA: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74_dirty","CUP_launch_Igla"};
	};
	class ZSN_SoldierEDSaboteur: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","CUP_hgun_PB6P9_snds","hlc_rifle_aek971","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_PB6P9_snds","hlc_rifle_aek971","Binocular"};
	};
	class ZSN_SoldierEDCrew: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74u","hgun_Pistol_01_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74u","hgun_Pistol_01_F","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell"};
	};
	class ZSN_MarineE: O_Soldier_base_F
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74"};
	};
	class ZSN_MarineEAR: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","hlc_rifle_rpk74n"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_rpk74n"};
	};
	class ZSN_MarineEMGAss: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","Binocular"};
	};
	class ZSN_MarineELAW: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_RPG18"};
	};
	class ZSN_MarineEHAT: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_RPG7V_PGO7V"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_RPG7V_PGO7V"};
	};
	class ZSN_MarineEOfficer: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","hgun_Pistol_01_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","hgun_Pistol_01_F","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_MarineENCO: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_MarineELeader: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74_GL","Binocular"};
	};
	class ZSN_MarineEG: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74_GL"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74_GL"};
	};
	class ZSN_MarineEAT: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_Metis"};
	};
	class ZSN_MarineEATAss: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","ZSN_Rangefinder"};
	};
	class ZSN_MarineEAA: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_Igla"};
	};
	class ZSN_MarineECrew: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74u","hgun_Pistol_01_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74u","hgun_Pistol_01_F","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell"};
	};
	class ZSN_MarineED: O_Soldier_base_F
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74"};
	};
	class ZSN_MarineEDAR: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_RPG18"};
	};
	class ZSN_MarineEDMGAss: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","Binocular"};
	};
	class ZSN_MarineEDLAW: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_RPG18"};
	};
	class ZSN_MarineEDHAT: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_RPG7V_PGO7V"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_RPG7V_PGO7V"};
	};
	class ZSN_MarineEDOfficer: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","hgun_Pistol_01_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","hgun_Pistol_01_F","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_MarineEDNCO: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_MarineEDLeader: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74_GL","Binocular"};
	};
	class ZSN_MarineEDG: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74_GL"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74_GL"};
	};
	class ZSN_MarineEDAT: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_Metis"};
	};
	class ZSN_MarineEDATAss: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","ZSN_Rangefinder"};
	};
	class ZSN_MarineEDAA: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak74","CUP_launch_Igla"};
	};
	class ZSN_MarineEDCrew: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74u","hgun_Pistol_01_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74u","hgun_Pistol_01_F","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell"};
	};
	class ZSN_RangerE: O_Soldier_base_F
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74"};
	};
	class ZSN_RangerEAR: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","hlc_rifle_rpk74n"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_rpk74n"};
	};
	class ZSN_RangerEMGASS: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","Binocular"};
	};
	class ZSN_RangerELAW: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","CUP_launch_RPG18"};
	};
	class ZSN_RangerEHAT: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","launch_RPG32_ghex_F"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","launch_RPG32_ghex_F"};
	};
	class ZSN_RangerEHATAss: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","ZSN_Rangefinder"};
	};
	class ZSN_RangerEOfficer: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","hgun_Pistol_01_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","hgun_Pistol_01_F","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_RangerENCO: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_RangerELeader: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74_GL","Binocular"};
	};
	class ZSN_RangerEG: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74_GL"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74_GL"};
	};
	class ZSN_RangerEAT: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","CUP_launch_Metis"};
	};
	class ZSN_RangerEATAss: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","ZSN_Rangefinder"};
	};
	class ZSN_RangerEAA: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","CUP_launch_Igla"};
	};
	class ZSN_SoldierEPilot: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74u"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74u"};
	};
	class ZSN_RangerED: O_Soldier_base_F
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74"};
	};
	class ZSN_RangerEDAR: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","hlc_rifle_rpk74n"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_rpk74n"};
	};
	class ZSN_RangerEDMGAss: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","Binocular"};
	};
	class ZSN_RangerEDLAW: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","CUP_launch_RPG18"};
	};
	class ZSN_RangerEDHAT: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","launch_RPG32_F"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","launch_RPG32_F"};
	};
	class ZSN_RangerEDHATAss: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","ZSN_Rangefinder"};
	};
	class ZSN_RangerEDOfficer: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","hgun_Pistol_01_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","hgun_Pistol_01_F","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_RangerEDNCO: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_RangerEDLeader: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74_GL","Binocular"};
	};
	class ZSN_RangerEDG: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74_GL"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74_GL"};
	};
	class ZSN_RangerEDAT: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","CUP_launch_Metis"};
	};
	class ZSN_RangerEDATAss: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","ZSN_Rangefinder"};
	};
	class ZSN_RangerEDAA: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74","CUP_launch_Igla"};
	};
	class ZSN_SoldierEDPilot: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","hlc_rifle_aks74u"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_aks74u"};
	};
	class I_G_soldier_base_F;
	class ZSN_EurosolG: I_G_Soldier_base_F
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak47"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak47"};
	};
	class ZSN_EurosolGMG: ZSN_EurosolG
	{
		weapons[] = {"Throw","Put","hlc_rifle_rpk"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_rpk"};
		magazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolGLAW: ZSN_EurosolG
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak47","CUP_launch_RPG7V"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak47","CUP_launch_RPG7V"};
	};
	class ZSN_EurosolGLeader: ZSN_EurosolG
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak47","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak47","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_EurosolGD: I_G_Soldier_base_F
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak47"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak47"};
	};
	class ZSN_EurosolGDMG: ZSN_EurosolGD
	{
		weapons[] = {"Throw","Put","hlc_rifle_rpk"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_rpk"};
		magazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolGDLAW: ZSN_EurosolGD
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak47","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak47","CUP_launch_MAAWS"};
	};
	class ZSN_EurosolGDLeader: ZSN_EurosolGD
	{
		weapons[] = {"Throw","Put","hlc_rifle_ak47","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_ak47","hgun_Pistol_Signal_F","Binocular"};
	};
	class LandVehicle;
	class Car;
	class Car_F;
	class Truck_F;
	class CUP_Ural_BaseTurret;
	class CUP_Ural_Support_Base;
	class CUP_Ural_Reammo_Base;
	class ZSN_CUP_MSV_Ural_Reammo: CUP_Ural_Reammo_Base
	{
		class Transportweapons
		{
			delete _xx_CUP_arifle_AK74;
			class _xx_hlc_rifle_ak74
			{
				weapon = "hlc_rifle_ak74";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_CUP_8Rnd_9x18_Makarov_M;
			class _xx_10Rnd_9x21_Mag
			{
				magazine = "10Rnd_9x21_Mag";
				count = 100;
			};
		};
	};
	class ZSN_CUP_VMF_Ural_Reammo: CUP_Ural_Reammo_Base
	{
		class Transportweapons
		{
			delete _xx_CUP_arifle_AK74;
			class _xx_hlc_rifle_ak74
			{
				weapon = "hlc_rifle_ak74";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_CUP_8Rnd_9x18_Makarov_M;
			class _xx_10Rnd_9x21_Mag
			{
				magazine = "10Rnd_9x21_Mag";
				count = 100;
			};
		};
	};
};
//};
