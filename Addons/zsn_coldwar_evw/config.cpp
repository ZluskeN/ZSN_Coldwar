class CfgPatches
{
	class ZSN_EvW
	{
		author = "ZluskeN";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarVehicles"};
	};
	class SUD_UH60
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_SU25
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_MI24
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_MI8
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_AH1W
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_A10
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_GW_V
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_M939
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_URAL
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_GW_AB
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_GW_WPN
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_GW_M47
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_GW_METIS
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_GW_STATIC
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_BACKPACKS
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_GW_U
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_ZSU
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_BMP2
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_GW_T
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_M113
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_M1A1
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_M2
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_T72
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_GW_DATA
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class SUD_RU_Radio
	{
		author = "Sudden";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class cfgvehicles
{
	class ZSN_SoldierWMedic;
	class SUD_NATO_Soldier_Medic: ZSN_SoldierWMedic
	{
		scope = 1;
		displayName = "$STR_B_medic_F0";
	};
	class ZSN_SoldierWRTO;
	class SUD_NATO_Soldier_Sapper: ZSN_SoldierWRTO
	{
		scope = 1;
		displayName = "$STR_B_soldier_exp_F0";
	};
	class ZSN_SoldierWB;
	class SUD_NATO_Soldier: ZSN_SoldierWB
	{
		scope = 1;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
	};
	class SUD_NATO_Soldier_Repair: ZSN_SoldierWB
	{
		scope = 1;
		engineer = 1;
		detectSkill = 40;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		displayName = "$STR_B_soldier_repair_F0";
		backPack = "ZSN_ALICE_Repair_OD";
	};
	class ZSN_SoldierWMG;
	class SUD_NATO_Soldier_AR: ZSN_SoldierWMG
	{
		scope = 1;
		displayName = "$STR_B_Soldier_AR_F0";
	};
	class ZSN_SoldierW;
	class SUD_NATO_Soldier_AT: ZSN_SoldierW
	{
		scope = 1;
		displayName = "$STR_B_Soldier_LAT_F0";
		icon = "iconManAT";
		backpack = "ZSN_alice_Gustav_OD";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_MAAWS"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWLeader;
	class SUD_NATO_Soldier_TL: ZSN_SoldierWLeader
	{
		scope = 1;
		displayName = "$STR_B_Soldier_TL_F0";
	};
	class ZSN_SoldierWG;
	class SUD_NATO_Soldier_GL: ZSN_SoldierWG
	{
		scope = 1;
		displayName = "$STR_B_Soldier_GL_F0";
	};
	class ZSN_SoldierWAT;
	class SUD_NATO_Soldier_HAT: ZSN_SoldierWAT
	{
		scope = 1;
		displayName = "$STR_B_soldier_AT_F0";
	};
	class ZSN_SoldierWAA;
	class SUD_NATO_Soldier_AA: ZSN_SoldierWAA
	{
		scope = 1;
		displayName = "$STR_B_soldier_AA_F0";
	};
	class ZSN_SoldierWcrew;
	class SUD_NATO_Soldier_Crew: ZSN_SoldierWcrew
	{
		scope = 1;
		displayName = "$STR_B_crew_F0";
	};
	class ZSN_SoldierWDB;
	class SUD_DNATO_Soldier_Repair: ZSN_SoldierWDB
	{
		scope = 2;
		engineer = 1;
		detectSkill = 40;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		displayName = "$STR_B_soldier_repair_F0";
		backPack = "ZSN_ALICE_Repair_khaki";
	};
	class ZSN_SoldierWDSaboteur;
	class SUD_NATO_Soldier_Specop: ZSN_SoldierWDSaboteur
	{
		scope = 1;
		displayName = "$STR_B_recon_F0";
	};
	class ZSN_SoldierWPilot;
	class SUD_NATO_Soldier_Pilot: ZSN_SoldierWPilot
	{
		scope = 1;
		displayName = "Pilot";
	};
	class ZSN_SoldierEMedic;
	class SUD_USSR_Soldier_Medic: ZSN_SoldierEMedic
	{
		scope = 1;
		displayName = "$STR_B_medic_F0";
	};
	class ZSN_SoldierEDriver;
	class SUD_USSR_Soldier_Sapper: ZSN_SoldierEDriver
	{
		scope = 1;
		displayName = "$STR_B_soldier_exp_F0";
	};
	class ZSN_SoldierEB;
	class SUD_USSR_Soldier: ZSN_SoldierEB
	{
		scope = 1;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
	};
	class SUD_USSR_Soldier_Repair: ZSN_SoldierEB
	{
		scope = 1;
		displayName = "$STR_B_soldier_repair_F0";
		engineer = 1;
		detectSkill = 40;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		backpack = "ZSN_RD54_Repair";
	};
	class ZSN_SoldierEMG;
	class SUD_USSR_Soldier_AR: ZSN_SoldierEMG
	{
		scope = 1;
		displayName = "$STR_B_Soldier_AR_F0";
	};
	class ZSN_SoldierE;
	class SUD_USSR_Soldier_AT: ZSN_SoldierE
	{
		scope = 1;
		displayName = "$STR_B_Soldier_LAT_F0";
		icon = "iconManAT";
		backpack = "ZSN_csla_rpg_pack_rpg7";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG7V"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG7V"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierELeader;
	class SUD_USSR_Soldier_TL: ZSN_SoldierELeader
	{
		scope = 1;
		displayName = "$STR_B_Soldier_TL_F0";
	};
	class ZSN_SoldierEG;
	class SUD_USSR_Soldier_GL: ZSN_SoldierEG
	{
		scope = 1;
		displayName = "$STR_B_Soldier_GL_F0";
	};
	class ZSN_SoldierEAT;
	class SUD_USSR_Soldier_HAT: ZSN_SoldierEAT
	{
		scope = 1;
		displayName = "$STR_B_Soldier_AT_F0";
	};
	class ZSN_SoldierEAA;
	class SUD_USSR_Soldier_AA: ZSN_SoldierEAA
	{
		scope = 1;
		displayName = "$STR_B_soldier_AA_F0";
	};
	class ZSN_SoldierECrew;
	class SUD_USSR_Soldier_Crew: ZSN_SoldierECrew
	{
		scope = 1;
		displayName = "$STR_B_crew_F0";
	};
	class ZSN_SoldierEDB;
	class SUD_DUSSR_Soldier_Repair: ZSN_SoldierEDB
	{
		scope = 2;
		displayName = "$STR_B_soldier_repair_F0";
		engineer = 1;
		detectSkill = 40;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		backpack = "ZSN_RD54_Repair";
	};
	class ZSN_SoldierEDSaboteur;
	class SUD_USSR_Soldier_Specop: ZSN_SoldierEDSaboteur
	{
		scope = 1;
		displayName = "$STR_B_recon_F0";
	};
	class ZSN_SoldierEPilot;
	class SUD_USSR_Soldier_Pilot: ZSN_SoldierEPilot
	{
		scope = 1;
		displayName = "Pilot";
	};
	class ZSN_CUP_MSV_UAZ_Unarmed;
	class SUD_UAZ: ZSN_CUP_MSV_UAZ_Unarmed
	{
		scope = 1;
	};
	class ZSN_CUP_ARMY_HMMWV_Unarmed;
	class SUD_HMMWV: ZSN_CUP_ARMY_HMMWV_Unarmed
	{
		scope = 1;
	};
	class ZSN_CUP_ARMY_HMMWV_M2;
	class SUD_HMMWV_M2: ZSN_CUP_ARMY_HMMWV_M2
	{
		scope = 1;
	};
	class ZSN_CUP_MSV_Ural;
	class SUD_Ural: ZSN_CUP_MSV_Ural
	{
		scope = 1;
	};
	class ZSN_CUP_MSV_Ural_Open;
	class SUD_Ural_Open: ZSN_CUP_MSV_Ural_Open
	{
		scope = 1;
	};
	class ZSN_CUP_MSV_Ural_Refuel;
	class SUD_Ural_Refuel: ZSN_CUP_MSV_Ural_Refuel
	{
		scope = 1;
	};
	class ZSN_CUP_MSV_Ural_Repair;
	class SUD_Ural_Repair: ZSN_CUP_MSV_Ural_Repair
	{
		scope = 1;
	};
	class ZSN_CUP_MSV_Ural_Reammo;
	class SUD_Ural_Reammo: ZSN_CUP_MSV_Ural_Reammo
	{
		scope = 1;
	};
	class ZSN_Army_Truck_transport;
	class SUD_truck5t_open: ZSN_Army_Truck_transport
	{
		scope = 1;
	};
	class ZSN_Army_Truck_covered;
	class SUD_truck5t: ZSN_Army_Truck_covered
	{
		scope = 1;
	};
	class ZSN_Army_Truck_Repair;
	class SUD_truck5t_Repair: ZSN_Army_Truck_Repair
	{
		scope = 1;
	};
	class ZSN_Army_Truck_ammo;
	class SUD_truck5t_Reammo: ZSN_Army_Truck_ammo
	{
		scope = 1;
	};
	class ZSN_Army_Truck_fuel;
	class SUD_truck5t_Refuel: ZSN_Army_Truck_fuel
	{
		scope = 1;
	};
	class ZSN_CUP_DVMF_BRDM2;
	class SUD_BRDM2: ZSN_CUP_DVMF_BRDM2
	{
		scope = 1;
	};
	class ZSN_CUP_MSV_BTR60;
	class SUD_BTR60: ZSN_CUP_MSV_BTR60
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierECrew"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_CUP_DMSV_ZSU23;
	class SUD_ZSU: ZSN_CUP_DMSV_ZSU23
	{
		scope = 1;
	};
	class ZSN_CUP_ARMY_M2Bradley;
	class SUD_M2A2: ZSN_CUP_ARMY_M2Bradley
	{
		scope = 1;
	};
	class ZSN_CUP_DMSV_BMP2;
	class SUD_BMP2: ZSN_CUP_DMSV_BMP2
	{
		scope = 1;
	};
	class ZSN_CUP_Army_M113;
	class SUD_M113: ZSN_CUP_Army_M113
	{
		scope = 1;
	};
	class ZSN_CUP_ARMY_M163;
	class SUD_M163: ZSN_CUP_ARMY_M163
	{
		scope = 1;
	};
	class ZSN_CUP_DMSV_T72B;
	class SUD_T72B: ZSN_CUP_DMSV_T72B
	{
		scope = 1;
	};
	class ZSN_CUP_ARMY_M1A1;
	class SUD_M1A1: ZSN_CUP_ARMY_M1A1
	{
		scope = 1;
	};
	class ZSN_CUP_MSV_Su25;
	class SUD_SU25: ZSN_CUP_MSV_Su25
	{
		scope = 1;
	};
	class ZSN_CUP_Army_A10;
	class SUD_A10: ZSN_CUP_Army_A10
	{
		scope = 1;
	};
	class ZSN_CUP_ARMY_AH64;
	class SUD_AH1W: ZSN_CUP_ARMY_AH64
	{
		scope = 1;
	};
	class ZSN_CUP_MSV_Mi8;
	class SUD_MI8: ZSN_CUP_MSV_Mi8
	{
		scope = 1;
	};
	class ZSN_CUP_USR_UH60;
	class SUD_UH60: ZSN_CUP_USR_UH60
	{
		scope = 1;
	};
	class CUP_Mi24_V_Base;
	class SUD_Mi24V: CUP_Mi24_V_Base
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		side = 0;
		crew = "ZSN_SoldierEPilot";
		faction = "ZSN_ERangers_ColdWar";
		typicalCargo[] = {"ZSN_SoldierEPilot"};
		hiddenSelectionsTextures[] = {"\cup\airvehicles\cup_airvehicles_mi24\data\textures\ru_dark_001_co.paa","\cup\airvehicles\cup_airvehicles_mi24\data\textures\ru_dark_002_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\preview\CUP_O_Mi24_V_RU.jpg";
	};
};