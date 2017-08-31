////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Aug 02 23:21:43 2016 : Created on Tue Aug 02 23:21:43 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_bow_west : config.bin{
class CfgPatches
{
	class ZSN_ColdWar_RHM16
	{
		author = "ZluskeN";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdwarVehicles","RH_m4_cfg"};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class usm_base_w;
	class usm_base_w_m;
	class usm_base_d;
	class usm_base_d_m;
	class ZSN_SoldierW: usm_base_w
	{
		weapons[] = {"Throw","Put","RH_M16A1"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1"};
	};
	class ZSN_SoldierWMGAss: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","RH_M16A1","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1","Binocular"};
	};
	class ZSN_SoldierWlaw: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","RH_M16A1","CUP_launch_M72A6"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1","CUP_launch_M72A6"};
	};
	class ZSN_SoldierWofficer: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","RH_M16A1","CUP_hgun_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1","CUP_hgun_M9","Binocular"};
	};
	class ZSN_SoldierWNCO: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","RH_M16A1","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_SoldierWleader: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","RH_M16A1gl","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1gl","Binocular"};
	};
	class ZSN_SoldierWg: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","RH_M16A1gl"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1gl"};
	};
	class ZSN_SoldierWAT: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","RH_M16A1","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1","CUP_launch_M47"};
	};
	class ZSN_SoldierWATAss: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","RH_M16A1","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1","ZSN_Rangefinder"};
	};
	class ZSN_SoldierWaa: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","RH_M16A1","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1","CUP_launch_FIM92Stinger"};
	};
	class ZSN_SoldierWD: usm_base_w
	{
		weapons[] = {"Throw","Put","RH_M16A1"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1"};
	};
	class ZSN_SoldierWDMGAss: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","RH_M16A1","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1","Binocular"};
	};
	class ZSN_SoldierWDlaw: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","RH_M16A1","CUP_launch_M72A6"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1","CUP_launch_M72A6"};
	};
	class ZSN_SoldierWDofficer: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","RH_M16A1","CUP_hgun_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1","CUP_hgun_M9","Binocular"};
	};
	class ZSN_SoldierWDNCO: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","RH_M16A1","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_SoldierWDleader: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","RH_M16A1gl","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1gl","Binocular"};
	};
	class ZSN_SoldierWDg: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","RH_M16A1gl"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1gl"};
	};
	class ZSN_SoldierWDAT: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","RH_M16A1","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1","CUP_launch_M47"};
	};
	class ZSN_SoldierWDATAss: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","RH_M16A1","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1","ZSN_Rangefinder"};
	};
	class ZSN_SoldierWDaa: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","RH_M16A1","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","RH_M16A1","CUP_launch_FIM92Stinger"};
	};
	class ZSN_marinew: usm_base_w
	{
		weapons[] = {"Throw","Put","RH_M16A2"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2"};
	};
	class ZSN_MarineWar: ZSN_MarineW
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_launch_M72A6"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_launch_M72A6"};
	};
	class ZSN_MarineWMGAss: ZSN_MarineW
	{
		weapons[] = {"Throw","Put","RH_M16A2","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","Binocular"};
	};
	class ZSN_marinewlaw: ZSN_marinew
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_launch_Mk153Mod0_SMAWOptics"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_launch_Mk153Mod0_SMAWOptics"};
	};
	class ZSN_marinewofficer: ZSN_marinew
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_hgun_Colt1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_hgun_Colt1911","Binocular"};
	};
	class ZSN_MarineWNCO: ZSN_MarineW
	{
		weapons[] = {"Throw","Put","RH_M16A2","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_marinewleader: ZSN_marinew
	{
		weapons[] = {"Throw","Put","RH_M16A2gl","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2gl","Binocular"};
	};
	class ZSN_marinewg: ZSN_marinew
	{
		weapons[] = {"Throw","Put","RH_M16A2gl"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2gl"};
	};
	class ZSN_marinewAT: ZSN_marinew
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_launch_M47"};
	};
	class ZSN_marinewATAss: ZSN_marinew
	{
		weapons[] = {"Throw","Put","RH_M16A2","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","ZSN_Rangefinder"};
	};
	class ZSN_marinewaa: ZSN_marinew
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_launch_FIM92Stinger"};
	};
	class ZSN_MarineWD: usm_base_w
	{
		weapons[] = {"Throw","Put","RH_M16A2"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2"};
	};
	class ZSN_MarineWDar: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_launch_M72A6"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_launch_M72A6"};
	};
	class ZSN_MarineWDMGAss: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","Binocular"};
	};
	class ZSN_MarineWDlaw: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_launch_Mk153Mod0_SMAWOptics"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_launch_Mk153Mod0_SMAWOptics"};
	};
	class ZSN_MarineWDofficer: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_hgun_Colt1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_hgun_Colt1911","Binocular"};
	};
	class ZSN_MarineWDNCO: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_MarineWDleader: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","RH_M16A2gl","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2gl","Binocular"};
	};
	class ZSN_MarineWDg: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","RH_M16A2gl"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2gl"};
	};
	class ZSN_MarineWDAT: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_launch_M47"};
	};
	class ZSN_MarineWDATAss: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","ZSN_Rangefinder"};
	};
	class ZSN_MarineWDaa: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_launch_FIM92Stinger"};
	};
	class ZSN_RangerW: usm_base_w
	{
		weapons[] = {"Throw","Put","RH_M16A2"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2"};
	};
	class ZSN_RangerWMGAss: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","RH_M16A2","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","Binocular"};
	};
	class ZSN_RangerWlaw: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_launch_MAAWS_Scope"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_launch_MAAWS_Scope"};
	};
	class ZSN_RangerWlawass: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","RH_M16A2","zsn_rangefinder"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","zsn_rangefinder"};
	};
	class ZSN_RangerWofficer: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_hgun_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_hgun_M9","Binocular"};
	};
	class ZSN_RangerWNCO: ZSN_Rangerw
	{
		weapons[] = {"Throw","Put","RH_M16A2","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_RangerWleader: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","RH_M16A2gl","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2gl","Binocular"};
	};
	class ZSN_RangerWg: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","RH_M16A2gl"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2gl"};
	};
	class ZSN_RangerWAT: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_launch_M47"};
	};
	class ZSN_RangerWATAss: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","RH_M16A2","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","ZSN_Rangefinder"};
	};
	class ZSN_RangerWaa: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_launch_FIM92Stinger"};
	};
	class ZSN_RangerWD: usm_base_w
	{
		weapons[] = {"Throw","Put","RH_M16A2"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2"};
	};
	class ZSN_RangerWDMGAss: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","Binocular"};
	};
	class ZSN_RangerWDlaw: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_launch_MAAWS_Scope"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_launch_MAAWS_Scope"};
	};
	class ZSN_RangerWDlawass: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","zsn_rangefinder"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","zsn_rangefinder"};
	};
	class ZSN_RangerWDofficer: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_hgun_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_hgun_M9","Binocular"};
	};
	class ZSN_RangerWDNCO: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_RangerWDleader: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","RH_M16A2gl","Binocular"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2gl","Binocular"};
	};
	class ZSN_RangerWDg: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","RH_M16A2gl"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2gl"};
	};
	class ZSN_RangerWDAT: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_launch_M47"};
	};
	class ZSN_RangerWDATAss: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","ZSN_Rangefinder"};
	};
	class ZSN_RangerWDaa: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","RH_M16A2","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","RH_M16A2","CUP_launch_FIM92Stinger"};
	};
	class LandVehicle;
	class Car;
	class Car_F;
	class Truck_F;
	class Truck_01_base_F;
	class B_Truck_01_transport_F;
	class B_Truck_01_mover_F;
	class B_Truck_01_ammo_F;
	class ZSN_DArmy_Truck_ammo: B_Truck_01_ammo_F
	{
		class Transportweapons
		{
			delete _xx_CUP_arifle_M16A2;
			class _xx_RH_M16A2
			{
				weapon = "RH_M16A2";
				count = 2;
			};
		};
	};
	class ZSN_DUSMC_Truck_ammo: B_Truck_01_ammo_F
	{
		class Transportweapons
		{
			delete _xx_CUP_arifle_M16A2;
			class _xx_RH_M16A2
			{
				weapon = "RH_M16A2";
				count = 2;
			};
		};
	};
};
//};
