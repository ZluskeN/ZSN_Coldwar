////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Wed Aug 03 00:08:48 2016 : Created on Wed Aug 03 00:08:48 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_vehicles : Config.bin{
class CfgPatches
{
	class ZSN_ColdWarwestVehicles_plus
	{
		author = "ZluskeN";
		Units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarWest"};
	};
};
class cfgvehicles
{
	class ReammoBox;
	class Bag_Base;
	class CUP_B_AlicePack_Khaki;
	class ZSN_alice_smaw: CUP_B_AlicePack_Khaki
	{
		class TransportMagazines
		{
			delete _xx_CUP_SMAW_HEAA_M;
			class _xx_rhs_mag_smaw_HEAA
			{
				magazine = "rhs_mag_smaw_HEAA";
				count = 2;
			};
		};
	};
	class ReammoBox_F;
	class CUP_ReammoBox_EP1;
	class CUP_USSpecialWeapons_EP1;
	class ZSN_West_Ammocrate: CUP_USSpecialWeapons_EP1
	{
		class Transportweapons
		{
			delete _xx_CUP_launch_M72A6;
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 10;
			};
		};
		class TransportMagazines
		{
			delete _xx_CUP_M72A6_M;
			delete _xx_CUP_SMAW_HEAA_M;
			class _xx_rhs_mag_smaw_HEAA
			{
				magazine = "rhs_mag_smaw_HEAA";
				count = 4;
			};
		};
	};
	class ZSN_SoldierW;
	class ZSN_SoldierWLAW: ZSN_SoldierW
	{
		displayName = "Rifleman, LAW";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","rhs_weap_m72a7"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","rhs_weap_m72a7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWSaboteur: ZSN_Soldierw
	{
		linkedItems[] = {"H_Watchcap_blk","rhsusf_ANPVS_14","usm_vest_LBE_rmp_m","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"H_Watchcap_blk","rhsusf_ANPVS_14","usm_vest_LBE_rmp_m","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierWD;
	class ZSN_SoldierWDLAW: ZSN_SoldierWD
	{
		displayName = "Rifleman, LAW";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","rhs_weap_m72a7"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","rhs_weap_m72a7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_MarineW;
	class ZSN_MarineWAR: ZSN_MarineW
	{
		displayName = "Rifleman, LAW";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","rhs_weap_m72a7"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","rhs_weap_m72a7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_MarineWLAW: ZSN_MarineW
	{
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","rhs_weap_smaw_green"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","rhs_weap_smaw_green"};
		magazines[] = {"rhs_mag_smaw_SR","rhs_mag_smaw_HEAA","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"rhs_mag_smaw_SR","rhs_mag_smaw_HEAA","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_MarineWD;
	class ZSN_MarineWDAR: ZSN_MarineWD
	{
		displayName = "Rifleman, LAW";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","rhs_weap_m72a7"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","rhs_weap_m72a7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_MarineWDLAW: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","rhs_weap_smaw_green"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","rhs_weap_smaw_green"};
		magazines[] = {"rhs_mag_smaw_SR","rhs_mag_smaw_HEAA","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"rhs_mag_smaw_SR","rhs_mag_smaw_HEAA","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_RangerW;
	class ZSN_SoldierWPilot: ZSN_RangerW
	{
		Items[] = {"rhsusf_ANPVS_14","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"rhsusf_ANPVS_14","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR"};
	};
	class ZSN_RangerWD;
	class ZSN_SoldierWDPilot: ZSN_RangerWD
	{
		Items[] = {"rhsusf_ANPVS_14","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"rhsusf_ANPVS_14","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR"};
	};
	class LandVehicle;
	class Tank;
	class Tank_F;
	class APC_Tracked_03_base_F;
	class RHS_M2A2_Base;
	class RHS_M2A2;
	class ZSN_DARMY_m2a2: rhs_m2a2
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		displayName = "M2A2";
		faction = "ZSN_WArmyD_ColdWar";
		crew = "ZSN_SoldierWDCrew";
		typicalCargo[] = {"ZSN_SoldierWDCrew"};
	};
	class RHS_M2A2_wd;
	class ZSN_ARMY_m2a2: RHS_M2A2_wd
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		displayName = "M2A2";
		faction = "ZSN_WArmy_ColdWar";
		crew = "ZSN_SoldierWCrew";
		typicalCargo[] = {"ZSN_SoldierWCrew"};
	};
	class car;    
    	class Car_F;
    	class Truck_F;
    	class Truck_01_base_F;
	class B_Truck_01_transport_F;
	class ZSN_DArmy_Truck_transport: B_Truck_01_transport_F
	{
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_d_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_d_01_ext_02_co.paa"};
	};
	class ZSN_DUSMC_Truck_transport: ZSN_DArmy_Truck_transport
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_Army_Truck_transport: ZSN_DArmy_Truck_transport
	{
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_wl_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_wl_01_ext_02_co.paa"};
	};
	class ZSN_USMC_Truck_transport: ZSN_Army_Truck_transport
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class B_Truck_01_covered_F;
	class ZSN_DArmy_Truck_covered: B_Truck_01_covered_F
	{
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_d_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_d_01_ext_02_co.paa"};
	};
	class ZSN_DUSMC_Truck_covered: ZSN_DArmy_Truck_covered
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_Army_Truck_covered: ZSN_DArmy_Truck_covered
	{
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_wl_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_wl_01_ext_02_co.paa"};
	};
	class ZSN_USMC_Truck_covered: ZSN_Army_Truck_covered
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class B_Truck_01_fuel_F;
	class ZSN_DArmy_Truck_fuel: B_Truck_01_fuel_F
	{
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_d_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_d_01_ext_02_co.paa","zsn_coldwar_vehicles\truck_d_01_fuel_CO.paa"};
	};
	class ZSN_DUSMC_Truck_fuel: ZSN_DArmy_Truck_fuel
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_Army_Truck_fuel: ZSN_DArmy_Truck_fuel
	{
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_wl_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_wl_01_ext_02_co.paa","zsn_coldwar_vehicles\truck_wl_01_fuel_CO.paa"};
	};
	class ZSN_USMC_Truck_fuel: ZSN_Army_Truck_fuel
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class rhsusf_HEMTT_A4_base;
    	class rhsusf_M977A4_usarmy_wd;
    	class rhsusf_M977A4_REPAIR_usarmy_wd;
	class ZSN_Army_Truck_Repair: rhsusf_M977A4_REPAIR_usarmy_wd
	{
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class ZSN_USMC_Truck_Repair: ZSN_Army_Truck_Repair
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
    	class rhsusf_M977A4_REPAIR_usarmy_d;
	class ZSN_DArmy_Truck_Repair: rhsusf_M977A4_REPAIR_usarmy_d
	{
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
	};
	class ZSN_DUSMC_Truck_Repair: ZSN_DArmy_Truck_Repair
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
    	class rhsusf_M977A4_AMMO_usarmy_d; 
	class ZSN_DArmy_Truck_ammo: rhsusf_M977A4_AMMO_usarmy_d
	{
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
		maximumLoad = 20000;
		class Transportweapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon = "CUP_launch_M72A6";
				count = 20;
			};
			class _xx_CUP_arifle_M16A2
			{
				weapon = "CUP_arifle_M16A2";
				count = 2;
			};
		};
		class TransportBackpacks
		{
			class _xx_ZSN_762x51_ammobelts
			{
				backpack = "ZSN_762x51_ammobelts";
				count = 3;
			};
			class _xx_CUP_B_AlicePack_Khaki
			{
				backpack = "CUP_B_AlicePack_Khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_M72A6_M
			{
				magazine = "CUP_M72A6_M";
				count = 20;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 92;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
				count = 48;
			};
			class _xx_200Rnd_556x45_Box_Tracer_Red_F
			{
				magazine = "200Rnd_556x45_Box_Tracer_Red_F";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 40;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 200;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine = "UGL_FlareWhite_F";
				count = 100;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 100;
			};
			class _xx_CUP_15Rnd_9x19_M9
			{
				magazine = "CUP_15Rnd_9x19_M9";
				count = 66;
			};
			class _xx_6Rnd_GreenSignal_F
			{
				magazine = "6Rnd_GreenSignal_F";
				count = 10;
			};
			class _xx_6Rnd_RedSignal_F
			{
				magazine = "6Rnd_RedSignal_F";
				count = 10;
			};
			class _xx_CUP_HandGrenade_M67
			{
				magazine = "CUP_HandGrenade_M67";
				count = 100;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 80;
			};
			class _xx_CUP_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 30;
			};
			class _xx_CUP_Mine_M
			{
				magazine = "CUP_Mine_M";
				count = 15;
			};
		};
	};
	class ZSN_DUSMC_Truck_ammo: rhsusf_M977A4_AMMO_usarmy_d
	{
		tf_hasLRradio = 1;
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
		maximumLoad = 20000;
		class Transportweapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon = "CUP_launch_M72A6";
				count = 10;
			};
			class _xx_CUP_arifle_M16A2
			{
				weapon = "CUP_arifle_M16A2";
				count = 2;
			};
		};
		class TransportBackpacks
		{
			class _xx_ZSN_762x51_ammobelts
			{
				backpack = "ZSN_762x51_ammobelts";
				count = 3;
			};
			class _xx_CUP_B_AlicePack_Khaki
			{
				backpack = "CUP_B_AlicePack_Khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_SMAW_HEAA_M
			{
				magazine = "CUP_SMAW_HEAA_M";
				count = 8;
			};
			class _xx_CUP_M72A6_M
			{
				magazine = "CUP_M72A6_M";
				count = 10;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 92;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
				count = 48;
			};
			class _xx_200Rnd_556x45_Box_Tracer_Red_F
			{
				magazine = "200Rnd_556x45_Box_Tracer_Red_F";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_5Rnd_762x51_M24
			{
				magazine = "CUP_5Rnd_762x51_M24";
				count = 160;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 200;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine = "UGL_FlareWhite_F";
				count = 100;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 100;
			};
			class _xx_CUP_7Rnd_45ACP_1911
			{
				magazine = "CUP_7Rnd_45ACP_1911";
				count = 143;
			};
			class _xx_6Rnd_GreenSignal_F
			{
				magazine = "6Rnd_GreenSignal_F";
				count = 10;
			};
			class _xx_6Rnd_RedSignal_F
			{
				magazine = "6Rnd_RedSignal_F";
				count = 10;
			};
			class _xx_CUP_HandGrenade_M67
			{
				magazine = "CUP_HandGrenade_M67";
				count = 100;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 80;
			};
			class _xx_CUP_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 30;
			};
			class _xx_CUP_Mine_M
			{
				magazine = "CUP_Mine_M";
				count = 15;
			};
		};
	};
    	class rhsusf_M977A4_AMMO_usarmy_wd; 
	class ZSN_Army_Truck_ammo: rhsusf_M977A4_AMMO_usarmy_wd
	{
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
		maximumLoad = 20000;
		class Transportweapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon = "CUP_launch_M72A6";
				count = 20;
			};
			class _xx_CUP_arifle_M16A2
			{
				weapon = "CUP_arifle_M16A2";
				count = 2;
			};
		};
		class TransportBackpacks
		{
			class _xx_ZSN_762x51_ammobelts
			{
				backpack = "ZSN_762x51_ammobelts";
				count = 3;
			};
			class _xx_CUP_B_AlicePack_Khaki
			{
				backpack = "CUP_B_AlicePack_Khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_M72A6_M
			{
				magazine = "CUP_M72A6_M";
				count = 20;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 92;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
				count = 48;
			};
			class _xx_200Rnd_556x45_Box_Tracer_Red_F
			{
				magazine = "200Rnd_556x45_Box_Tracer_Red_F";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 40;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 200;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine = "UGL_FlareWhite_F";
				count = 100;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 100;
			};
			class _xx_CUP_15Rnd_9x19_M9
			{
				magazine = "CUP_15Rnd_9x19_M9";
				count = 66;
			};
			class _xx_6Rnd_GreenSignal_F
			{
				magazine = "6Rnd_GreenSignal_F";
				count = 10;
			};
			class _xx_6Rnd_RedSignal_F
			{
				magazine = "6Rnd_RedSignal_F";
				count = 10;
			};
			class _xx_CUP_HandGrenade_M67
			{
				magazine = "CUP_HandGrenade_M67";
				count = 100;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 80;
			};
			class _xx_CUP_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 30;
			};
			class _xx_CUP_Mine_M
			{
				magazine = "CUP_Mine_M";
				count = 15;
			};
		};
	};
	class ZSN_USMC_Truck_ammo: rhsusf_M977A4_AMMO_usarmy_wd
	{
		tf_hasLRradio = 1;
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
		maximumLoad = 20000;
		class Transportweapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon = "CUP_launch_M72A6";
				count = 10;
			};
			class _xx_CUP_arifle_M16A2
			{
				weapon = "CUP_arifle_M16A2";
				count = 2;
			};
		};
		class TransportBackpacks
		{
			class _xx_ZSN_762x51_ammobelts
			{
				backpack = "ZSN_762x51_ammobelts";
				count = 3;
			};
			class _xx_CUP_B_AlicePack_Khaki
			{
				backpack = "CUP_B_AlicePack_Khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_SMAW_HEAA_M
			{
				magazine = "CUP_SMAW_HEAA_M";
				count = 8;
			};
			class _xx_CUP_M72A6_M
			{
				magazine = "CUP_M72A6_M";
				count = 10;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 92;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
				count = 48;
			};
			class _xx_200Rnd_556x45_Box_Tracer_Red_F
			{
				magazine = "200Rnd_556x45_Box_Tracer_Red_F";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_5Rnd_762x51_M24
			{
				magazine = "CUP_5Rnd_762x51_M24";
				count = 160;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 200;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine = "UGL_FlareWhite_F";
				count = 100;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 100;
			};
			class _xx_CUP_7Rnd_45ACP_1911
			{
				magazine = "CUP_7Rnd_45ACP_1911";
				count = 143;
			};
			class _xx_6Rnd_GreenSignal_F
			{
				magazine = "6Rnd_GreenSignal_F";
				count = 10;
			};
			class _xx_6Rnd_RedSignal_F
			{
				magazine = "6Rnd_RedSignal_F";
				count = 10;
			};
			class _xx_CUP_HandGrenade_M67
			{
				magazine = "CUP_HandGrenade_M67";
				count = 100;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 80;
			};
			class _xx_CUP_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 30;
			};
			class _xx_CUP_Mine_M
			{
				magazine = "CUP_Mine_M";
				count = 15;
			};
		};
	};
	class rhsusf_m113_usarmy;
	class ZSN_m113_usarmy: rhsusf_m113_usarmy
	{
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWCrew";
		typicalCargo[] = {"ZSN_SoldierWCrew"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class rhsusf_m113_usarmy_medical;
	class ZSN_m113_usarmy_medical: rhsusf_m113_usarmy_medical
	{
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWCrew";
		typicalCargo[] = {"ZSN_SoldierWCrew"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class rhsusf_m113d_usarmy;
	class ZSN_m113d_usarmy: rhsusf_m113d_usarmy
	{
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDCrew";
		typicalCargo[] = {"ZSN_SoldierWDCrew"};
		faction = "ZSN_WArmyD_ColdWar";
	};
	class rhsusf_m113d_usarmy_medical;
	class ZSN_m113d_usarmy_medical: rhsusf_m113d_usarmy_medical
	{
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDCrew";
		typicalCargo[] = {"ZSN_SoldierWDCrew"};
		faction = "ZSN_WArmyD_ColdWar";
	};
	class rhsusf_m1a1aimwd_usarmy;
	class ZSN_m1a1wd_usarmy: rhsusf_m1a1aimwd_usarmy
	{
		displayname = "M1A1";
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWCrew";
		typicalCargo[] = {"ZSN_SoldierWCrew"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class rhsusf_m1a1aimd_usarmy;
	class ZSN_m1a1d_usarmy: rhsusf_m1a1aimd_usarmy
	{
		displayname = "M1A1";
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDCrew";
		typicalCargo[] = {"ZSN_SoldierWDCrew"};
		faction = "ZSN_WArmyD_ColdWar";
	};
	class rhsusf_m109_usarmy;
	class ZSN_m109_usarmy: rhsusf_m109_usarmy
	{
		displayname = "M109";
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWCrew";
		typicalCargo[] = {"ZSN_SoldierWCrew"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class rhsusf_m109d_usarmy;
	class ZSN_m109d_usarmy: rhsusf_m109d_usarmy
	{
		displayname = "M109";
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDCrew";
		typicalCargo[] = {"ZSN_SoldierWDCrew"};
		faction = "ZSN_WArmyD_ColdWar";
	};
	class rhsusf_m998_w_4dr;
	class ZSN_army_m998_w_4dr: rhsusf_m998_w_4dr
	{
		displayname = "M998 (Open)";
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class ZSN_usmc_m998_w_4dr: ZSN_army_m998_w_4dr
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_ranger_m998_w_4dr: ZSN_army_m998_w_4dr
	{
		crew = "ZSN_RangerWB";
		typicalCargo[] = {"ZSN_RangerWB"};
		faction = "ZSN_WRangers_ColdWar";
	};
	class rhsusf_m998_d_4dr;
	class ZSN_army_m998_d_4dr: rhsusf_m998_d_4dr
	{
		displayname = "M998 (Open)";
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
	};
	class ZSN_usmc_m998_d_4dr: ZSN_army_m998_d_4dr
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_ranger_m998_d_4dr: ZSN_army_m998_d_4dr
	{
		crew = "ZSN_RangerWDB";
		typicalCargo[] = {"ZSN_RangerWDB"};
		faction = "ZSN_WRangersD_ColdWar";
	};
	class rhsusf_m998_w_4dr_halftop;
	class ZSN_army_m998_w_4dr_halftop: rhsusf_m998_w_4dr_halftop
	{
		displayname = "M998";
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class ZSN_usmc_m998_w_4dr_halftop: ZSN_army_m998_w_4dr_halftop
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_ranger_m998_w_4dr_halftop: ZSN_army_m998_w_4dr_halftop
	{
		crew = "ZSN_RangerWB";
		typicalCargo[] = {"ZSN_RangerWB"};
		faction = "ZSN_WRangers_ColdWar";
	};
	class rhsusf_m998_d_4dr_halftop;
	class zsn_army_m998_d_4dr_halftop: rhsusf_m998_d_4dr_halftop
	{
		displayname = "M998";
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
	};
	class ZSN_usmc_m998_d_4dr_halftop: ZSN_army_m998_d_4dr_halftop
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_ranger_m998_d_4dr_halftop: ZSN_army_m998_d_4dr_halftop
	{
		crew = "ZSN_RangerWDB";
		typicalCargo[] = {"ZSN_RangerWDB"};
		faction = "ZSN_WRangersD_ColdWar";
	};
	class RHS_M2StaticMG_D;
	class RHS_M2StaticMG_WD;
	class ZSN_BAF_M2StaticMG: RHS_M2StaticMG_WD
	{
		crew = "ZSN_EurosolWB";
		typicalCargo[] = {"ZSN_EurosolWB"};
		faction = "ZSN_WEuro_ColdWar";
	};
	class ZSN_BAF_M2StaticMGD: RHS_M2StaticMG_D
	{
		crew = "ZSN_EurosolWDB";
		typicalCargo[] = {"ZSN_EurosolWDB"};
		faction = "ZSN_WEuroD_ColdWar";
	};
	class RHS_M2StaticMG_MiniTripod_D;
	class RHS_M2StaticMG_MiniTripod_WD;
	class ZSN_M2LowMG: RHS_M2StaticMG_MiniTripod_WD
	{
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class ZSN_M2LowMGD: RHS_M2StaticMG_MiniTripod_D
	{
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
	};
	class ZSN_MM2LowMG: RHS_M2StaticMG_MiniTripod_WD
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_MM2LowMGD: RHS_M2StaticMG_MiniTripod_D
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_RM2LowMG: RHS_M2StaticMG_MiniTripod_WD
	{
		crew = "ZSN_RangerWB";
		typicalCargo[] = {"ZSN_RangerWB"};
		faction = "ZSN_WRangers_ColdWar";
	};
	class ZSN_RM2LowMGD: RHS_M2StaticMG_MiniTripod_D
	{
		crew = "ZSN_RangerWDB";
		typicalCargo[] = {"ZSN_RangerWDB"};
		faction = "ZSN_WRangersD_ColdWar";
	};
	class RHS_MK19_TriPod_D;
	class RHS_MK19_TriPod_WD;
	class ZSN_StaticGMG: RHS_MK19_TriPod_WD
	{
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class ZSN_StaticGMGD: RHS_MK19_TriPod_D
	{
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
	};
	class ZSN_MStaticGMG: RHS_MK19_TriPod_WD
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_MStaticGMGD: RHS_MK19_TriPod_D
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_RStaticGMG: RHS_MK19_TriPod_WD
	{
		crew = "ZSN_RangerWB";
		typicalCargo[] = {"ZSN_RangerWB"};
		faction = "ZSN_WRangers_ColdWar";
	};
	class ZSN_RStaticGMGD: RHS_MK19_TriPod_D
	{
		crew = "ZSN_RangerWDB";
		typicalCargo[] = {"ZSN_RangerWDB"};
		faction = "ZSN_WRangersD_ColdWar";
	};
	class RHS_TOW_TriPod_D;
	class RHS_TOW_TriPod_WD;
	class ZSN_StaticTOW: RHS_TOW_TriPod_WD
	{
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class ZSN_StaticTOWD: RHS_TOW_TriPod_D
	{
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
	};
	class ZSN_MStaticTOW: RHS_TOW_TriPod_WD
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_MStaticTOWD: RHS_TOW_TriPod_D
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_RStaticTOW: RHS_TOW_TriPod_WD
	{
		crew = "ZSN_RangerWB";
		typicalCargo[] = {"ZSN_RangerWB"};
		faction = "ZSN_WRangers_ColdWar";
	};
	class ZSN_RStaticTOWD: RHS_TOW_TriPod_D
	{
		crew = "ZSN_RangerWDB";
		typicalCargo[] = {"ZSN_RangerWDB"};
		faction = "ZSN_WRangersD_ColdWar";
	};
	class RHS_Stinger_AA_pod_D;
	class RHS_Stinger_AA_pod_WD;
	class ZSN_ARMY_Stinger: RHS_Stinger_AA_pod_WD
	{
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class ZSN_DARMY_Stinger: RHS_Stinger_AA_pod_D
	{
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
	};
	class ZSN_USMC_Stinger: RHS_Stinger_AA_pod_WD
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_DUSMC_Stinger: RHS_Stinger_AA_pod_D
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_Ranger_Stinger: RHS_Stinger_AA_pod_WD
	{
		crew = "ZSN_RangerWB";
		typicalCargo[] = {"ZSN_RangerWB"};
		faction = "ZSN_WRangers_ColdWar";
	};
	class ZSN_DRanger_Stinger: RHS_Stinger_AA_pod_D
	{
		crew = "ZSN_RangerWDB";
		typicalCargo[] = {"ZSN_RangerWDB"};
		faction = "ZSN_WRangersD_ColdWar";
	};
	class RHS_M252_D;
	class RHS_M252_WD;
	class ZSN_BAF_StaticL16A2: RHS_M252_WD
	{
		crew = "ZSN_EurosolWB";
		typicalCargo[] = {"ZSN_EurosolWB"};
		faction = "ZSN_WEuro_ColdWar";
	};
	class ZSN_BAF_StaticL16A2D: RHS_M252_D
	{
		crew = "ZSN_EurosolWDB";
		typicalCargo[] = {"ZSN_EurosolWDB"};
		faction = "ZSN_WEuroD_ColdWar";
	};
	class ZSN_StaticM252: RHS_M252_WD
	{
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class ZSN_StaticM252D: RHS_M252_D
	{
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
	};
	class ZSN_MStaticM252: RHS_M252_WD
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_MStaticM252D: RHS_M252_D
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_RStaticM252: RHS_M252_WD
	{
		crew = "ZSN_RangerWB";
		typicalCargo[] = {"ZSN_RangerWB"};
		faction = "ZSN_WRangers_ColdWar";
	};
	class ZSN_RStaticM252D: RHS_M252_D
	{
		crew = "ZSN_RangerWDB";
		typicalCargo[] = {"ZSN_RangerWDB"};
		faction = "ZSN_WRangersD_ColdWar";
	};
	class RHS_M119_D;
	class RHS_M119_WD;
	class ZSN_BAF_M119: RHS_M119_WD
	{
		crew = "ZSN_EurosolWB";
		typicalCargo[] = {"ZSN_EurosolWB"};
		faction = "ZSN_WEuro_ColdWar";
	};
	class ZSN_BAF_M119D: RHS_M119_D
	{
		crew = "ZSN_EurosolWDB";
		typicalCargo[] = {"ZSN_EurosolWDB"};
		faction = "ZSN_WEuroD_ColdWar";
	};
	class ZSN_CUP_ARMY_M119: RHS_M119_WD
	{
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class ZSN_CUP_DARMY_M119: RHS_M119_D
	{
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
	};
	class ZSN_CUP_USMC_M119: RHS_M119_WD
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_CUP_DUSMC_M119: RHS_M119_D
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_Ranger_M119: RHS_M119_WD
	{
		crew = "ZSN_RangerWB";
		typicalCargo[] = {"ZSN_RangerWB"};
		faction = "ZSN_WRangers_ColdWar";
	};
	class ZSN_DRanger_M119: RHS_M119_D
	{
		crew = "ZSN_RangerWDB";
		typicalCargo[] = {"ZSN_RangerWDB"};
		faction = "ZSN_WRangersD_ColdWar";
	};
};
class CfgGroups
{
	class West
	{
		class ZSN_WArmy_ColdWar
		{
			name = "Cold War U.S. Army";
			class Armored
			{
				name = "Armored";
				class ZSN_WArmy_M1Platoon
				{
					name = "Abrams Platoon";
					faction = "ZSN_WArmy_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_m1a1wd_usarmy";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_m1a1wd_usarmy";
						rank = "Lieutnant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_m1a1wd_usarmy";
						rank = "Lieutnant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_m1a1wd_usarmy";
						rank = "Lieutnant";
						position[] = {40,0,0};
					};
				};
			};
			class Mechanised
			{
				name = "Mechanised Infantry";
				class ZSN_WArmy_MotorizedInfantry
				{
					name = "Motorized Infantry Squad";
					faction = "ZSN_WArmy_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_SoldierWNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_SoldierWLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWAR";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_Army_Truck_transport";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};
				};
				class ZSN_WArmy_M113Infantry
				{
					name = "M113 Infantry Squad";
					faction = "ZSN_WArmy_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_SoldierWNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_SoldierWLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWAR";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_m113_usarmy";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};
				};
				class ZSN_WArmy_M2Infantry
				{
					name = "Bradley Infantry Squad";
					faction = "ZSN_WArmy_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_SoldierWNCO";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_ARMY_m2a2";
						rank = "Sergeant";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_SoldierWG";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_SoldierWMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
			};
		};
		class ZSN_WMarines_ColdWar
		{
			name = "Cold War U.S. Marines";
			class Mechanised
			{
				name = "Mechanised Infantry";
				class ZSN_WMarine_MotorizedInfantry
				{
					name = "Motorized Infantry Squad";
					faction = "ZSN_WMarines_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_MarineWNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_MarineWLeader";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_MarineWLeader";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_MarineWLeader";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_MarineWMG";
						rank = "Private";
						position[] = {0,-2,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_MarineWMG";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_MarineWMG";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_MarineWMGAss";
						rank = "Private";
						position[] = {5,-4,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_MarineWMGAss";
						rank = "Private";
						position[] = {-5,-4,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_MarineWMGAss";
						rank = "Private";
						position[] = {0,-4,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "ZSN_MarineWLAW";
						rank = "Private";
						position[] = {5,-6,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "ZSN_MarineWLAW";
						rank = "Private";
						position[] = {-5,-6,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "ZSN_MarineWLAWAss";
						rank = "Private";
						position[] = {0,-6,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "ZSN_USMC_Truck_transport";
						rank = "CORPORAL";
						position[] = {0,15,0};
					};
				};
			};
		};
		class ZSN_WArmyD_ColdWar
		{
			name = "Cold War U.S. Army (Desert)";
			class Armored
			{
				name = "Armored";
				class ZSN_WArmyD_M1Platoon
				{
					name = "Abrams Platoon";
					faction = "ZSN_WArmyD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_m1a1d_usarmy";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_m1a1d_usarmy";
						rank = "Lieutnant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_m1a1d_usarmy";
						rank = "Lieutnant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_m1a1d_usarmy";
						rank = "Lieutnant";
						position[] = {40,0,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class ZSN_WArmyD_MotorizedInfantry
				{
					name = "Motorized Infantry Squad";
					faction = "ZSN_WArmyD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_SoldierWDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWDAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWDAR";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_DArmy_Truck_Covered";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};
				};
				class ZSN_WArmyD_M113Infantry
				{
					name = "M113 Infantry Squad";
					faction = "ZSN_WArmyD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_SoldierWDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWDAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWDAR";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_m113d_usarmy";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};
				};
				class ZSN_WArmyD_M2Infantry
				{
					name = "Bradley Infantry Squad";
					faction = "ZSN_WArmyD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_SoldierWDNCO";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_DARMY_m2a2";
						rank = "Sergeant";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWDAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_SoldierWDG";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_SoldierWDMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
			};
		};
		class ZSN_WMarinesD_ColdWar
		{
			name = "Cold War U.S. Marines (Desert)";
			class Motorized
			{
				name = "Motorized Infantry";
				class ZSN_WMarinesD_MotorizedInfantry
				{
					name = "Motorized Infantry Squad";
					faction = "ZSN_WMarinesD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_MarineWDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_MarineWDLeader";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_MarineWDLeader";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_MarineWDLeader";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_MarineWDMG";
						rank = "Private";
						position[] = {0,-2,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_MarineWDMG";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_MarineWDMG";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_MarineWDMGAss";
						rank = "Private";
						position[] = {5,-4,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_MarineWDMGAss";
						rank = "Private";
						position[] = {-5,-4,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_MarineWDMGAss";
						rank = "Private";
						position[] = {0,-4,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "ZSN_MarineWDLAW";
						rank = "Private";
						position[] = {5,-6,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "ZSN_MarineWDLAW";
						rank = "Private";
						position[] = {-5,-6,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "ZSN_MarineWDLAWAss";
						rank = "Private";
						position[] = {0,-6,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "ZSN_DUSMC_Truck_Covered";
						rank = "CORPORAL";
						position[] = {0,15,0};
					};
				};
			};
		};
	};
};
//};
