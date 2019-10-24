////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sat May 27 12:07:38 2017 : Created on Sat May 27 12:07:38 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_west : config.bin{
class CfgPatches
{
	class ZSN_ColdWarWest
	{
		author = "ZluskeN";
		units[] = {"ZSN_West_Ammocrate","ZSN_SoldierW","ZSN_SoldierWAR","ZSN_SoldierWMedic","ZSN_SoldierWRTO","ZSN_SoldierWB","ZSN_SoldierWMG","ZSN_SoldierWMGAss","ZSN_SoldierWLAW","ZSN_SoldierWSniper","ZSN_SoldierWOfficer","ZSN_SoldierWNCO","ZSN_SoldierWLeader","ZSN_SoldierWG","ZSN_SoldierWAT","ZSN_SoldierWATAss","ZSN_SoldierWAA","ZSN_SoldierWSaboteur","ZSN_SoldierWcrew","ZSN_SoldierWD","ZSN_SoldierWDAR","ZSN_SoldierWDMedic","ZSN_SoldierWDRTO","ZSN_SoldierWDB","ZSN_SoldierWDMG","ZSN_SoldierWDMGAss","ZSN_SoldierWDLAW","ZSN_SoldierWDSniper","ZSN_SoldierWDOfficer","ZSN_SoldierWDNCO","ZSN_SoldierWDLeader","ZSN_SoldierWDG","ZSN_SoldierWDAT","ZSN_SoldierWDATAss","ZSN_SoldierWDAA","ZSN_SoldierWDSaboteur","ZSN_SoldierWDcrew","ZSN_MarineW","ZSN_MarineWAR","ZSN_MarineWMedic","ZSN_MarineWRTO","ZSN_MarineWB","ZSN_MarineWMG","ZSN_MarineWMGAss","ZSN_MarineWLAW","ZSN_MarineWLAWAss","ZSN_MarineWSniper","ZSN_MarineWOfficer","ZSN_MarineWNCO","ZSN_MarineWLeader","ZSN_MarineWG","ZSN_MarineWAT","ZSN_MarineWATAss","ZSN_MarineWAA","ZSN_MarineWCrew","ZSN_MarineWD","ZSN_MarineWDAR","ZSN_MarineWDMedic","ZSN_MarineWDRTO","ZSN_MarineWDB","ZSN_MarineWDMG","ZSN_MarineWDMGAss","ZSN_MarineWDLAW","ZSN_MarineWDLAWAss","ZSN_MarineWDSniper","ZSN_MarineWDOfficer","ZSN_MarineWDNCO","ZSN_MarineWDLeader","ZSN_MarineWDG","ZSN_MarineWDAT","ZSN_MarineWDATAss","ZSN_MarineWDAA","ZSN_MarineWDCrew","ZSN_Rangerw","ZSN_RangerWAR","ZSN_RangerWMedic","ZSN_RangerWRTO","ZSN_RangerWB","ZSN_RangerWMG","ZSN_RangerWMGAss","ZSN_RangerWLAW","ZSN_RangerWLAWAss","ZSN_RangerWSniper","ZSN_RangerWOfficer","ZSN_RangerWNCO","ZSN_RangerWLeader","ZSN_RangerWG","ZSN_RangerwAT","ZSN_RangerwATAss","ZSN_RangerWAA","ZSN_SoldierWPilot","ZSN_RangerWD","ZSN_RangerWDAR","ZSN_RangerWDMedic","ZSN_RangerWDRTO","ZSN_RangerWDB","ZSN_RangerWDMG","ZSN_RangerWDMGAss","ZSN_RangerWDLAW","ZSN_RangerWDLAWass","ZSN_RangerWDSniper","ZSN_RangerWDOfficer","ZSN_RangerWDNCO","ZSN_RangerWDLeader","ZSN_RangerWDG","ZSN_RangerWDAT","ZSN_RangerWDATAss","ZSN_RangerWDAA","ZSN_SoldierWDPilot","ZSN_M2StaticMG","ZSN_MM2StaticMG","ZSN_RM2StaticMG","ZSN_M2StaticMGD","ZSN_MM2StaticMGD","ZSN_RM2StaticMGD","ZSN_M2LowMG","ZSN_MM2LowMG","ZSN_RM2LowMG","ZSN_M2LowMGD","ZSN_MM2LowMGD","ZSN_RM2LowMGD","ZSN_StaticGMG","ZSN_MStaticGMG","ZSN_RStaticGMG","ZSN_StaticGMGD","ZSN_MStaticGMGD","ZSN_RStaticGMGD","ZSN_StaticTOW","ZSN_MStaticTOW","ZSN_RStaticTOW","ZSN_StaticTOWD","ZSN_MStaticTOWD","ZSN_RStaticTOWD","ZSN_staticM252","ZSN_MstaticM252","ZSN_RstaticM252","ZSN_staticM252D","ZSN_MstaticM252D","ZSN_RstaticM252D"};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarunits"};
		magazines[] = {};
		weapons[] = {};
	};
};
class cfgFactionClasses
{
	class ZSN_WArmy_ColdWar
	{
		displayName = "Cold War U.S. Army";
		backpack_tf_faction_radio = "tf_rt1523g_black";
		personal_tf_faction_radio = "tf_rf7800str";
		airborne_tf_faction_radio = "tf_anarc210";
		flag = "\zsn_coldwar_west\USA.paa";
		priority = 1;
		side = 1;
	};
	class ZSN_WArmyD_ColdWar
	{
		displayName = "Cold War U.S. Army (Desert)";
		backpack_tf_faction_radio = "tf_rt1523g_black";
		personal_tf_faction_radio = "tf_rf7800str";
		airborne_tf_faction_radio = "tf_anarc210";
		flag = "\zsn_coldwar_west\USA.paa";
		priority = 1;
		side = 1;
	};
	class ZSN_WMarines_ColdWar
	{
		displayName = "Cold War U.S. Marines";
		backpack_tf_faction_radio = "tf_rt1523g_black";
		personal_tf_faction_radio = "tf_rf7800str";
		airborne_tf_faction_radio = "tf_anarc210";
		flag = "\zsn_coldwar_west\USA.paa";
		priority = 1;
		side = 1;
	};
	class ZSN_WMarinesD_ColdWar
	{
		displayName = "Cold War U.S. Marines (Desert)";
		backpack_tf_faction_radio = "tf_rt1523g_black";
		personal_tf_faction_radio = "tf_rf7800str";
		airborne_tf_faction_radio = "tf_anarc210";
		flag = "\zsn_coldwar_west\USA.paa";
		priority = 1;
		side = 1;
	};
	class ZSN_WRangers_ColdWar
	{
		displayName = "Cold War U.S. Rangers";
		backpack_tf_faction_radio = "tf_rt1523g_black";
		personal_tf_faction_radio = "tf_rf7800str";
		airborne_tf_faction_radio = "tf_anarc210";
		flag = "\zsn_coldwar_west\USA.paa";
		priority = 1;
		side = 1;
	};
	class ZSN_WRangersD_ColdWar
	{
		displayName = "Cold War U.S. Rangers (Desert)";
		backpack_tf_faction_radio = "tf_rt1523g_black";
		personal_tf_faction_radio = "tf_rf7800str";
		airborne_tf_faction_radio = "tf_anarc210";
		flag = "\zsn_coldwar_west\USA.paa";
		priority = 1;
		side = 1;
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	class ZSN_Uniform_Ghillie_Top: Itemcore
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "Half-Ghillie (Woodland)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_u_o_tk_ghillie_top_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ZSN_SoldierWSniper";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class ZSN_Uniform_6CD_Ghillie_Top: ItemCore
	{
		author = "ZluskeN";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "Half-Ghillie (6CD)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_u_o_tk_ghillie_top_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ZSN_SoldierWDSniper";
			containerClass = "Supply40";
			mass = 20;
		};
	};
};
class CfgVehicles
{
	class ReammoBox_F;
	class CUP_ReammoBox_EP1;
	class CUP_USSpecialWeapons_EP1;
	class ZSN_West_Ammocrate: CUP_USSpecialWeapons_EP1
	{
		scope = 2;
		displayName = "Cold War Ammo Crate (West)";
		maximumLoad = 20000;
		class Transportweapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon = "CUP_launch_M72A6";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_CUP_B_AlicePack_Khaki
			{
				backpack = "CUP_B_AlicePack_OD";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_SMAW_HEAA_M
			{
				magazine = "CUP_SMAW_HEAA_M";
				count = 4;
			};
			class _xx_CUP_M72A6_M
			{
				magazine = "CUP_M72A6_M";
				count = 10;
			};
			class _xx_CUP_MAAWS_HEAT_M
			{
				magazine = "CUP_MAAWS_HEAT_M";
				count = 6;
			};
			class _xx_CUP_Dragon_EP1_M
			{
				magazine = "CUP_Dragon_EP1_M";
				count = 4;
			};
			class _xx_CUP_Stinger_M
			{
				magazine = "CUP_Stinger_M";
				count = 4;
			};
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine = "CUP_30Rnd_556x45_Stanag";
				count = 92;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
				count = 48;
			};
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249
			{
				magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 16;
			};
			class _xx_CUP_5Rnd_762x51_M24
			{
				magazine = "CUP_5Rnd_762x51_M24";
				count = 80;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 20;
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
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 100;
			};
			class _xx_6Rnd_RedSignal_F
			{
				magazine = "6Rnd_RedSignal_F";
				count = 10;
			};
			class _xx_6Rnd_GreenSignal_F
			{
				magazine = "6Rnd_GreenSignal_F";
				count = 10;
			};
			class _xx_CUP_15Rnd_9x19_M9
			{
				magazine = "CUP_15Rnd_9x19_M9";
				count = 33;
			};
			class _xx_CUP_7Rnd_45ACP_1911
			{
				magazine = "CUP_7Rnd_45ACP_1911";
				count = 72;
			};
			class _xx_CUP_HandGrenade_M67
			{
				magazine = "CUP_HandGrenade_M67";
				count = 100;
			};
			class _xx_zsn_wpshell
			{
				magazine = "zsn_wpshell";
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
		class TransportItems{};
	};
	class B_Soldier_base_F;
	class ZSN_SoldierW: B_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_WArmy_ColdWar";
		displayName = "Soldier (Garrison)";
		picture = "";
		portrait = "";
		icon = "iconMan";
		genericNames = "EnglishMen";
		identityTypes[] = {"LanguageENG_F","NoGlasses","Head_NATO"};
		uniformClass = "CUP_U_B_BDUv2_M81";
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"CUP_H_US_patrol_cap_WDL","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"CUP_H_US_patrol_cap_WDL","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"CUP_H_US_patrol_cap_WDL","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_US_patrol_cap_WDL","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWAR: ZSN_SoldierW
	{
		scope = 2;
		displayName = "LMG Soldier";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_556x45_bag_OD";
		weapons[] = {"Throw","Put","ZSN_M249_SAW"};
		respawnWeapons[] = {"Throw","Put","ZSN_M249_SAW"};
		magazines[] = {"30Rnd_556x45_Stanag_tracer_red","30Rnd_556x45_Stanag_tracer_red","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_tracer_red","30Rnd_556x45_Stanag_tracer_red","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWMedic: ZSN_SoldierW
	{
		scope = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWRTO: ZSN_SoldierW
	{
		scope = 2;
		displayName = "Sapper";
		icon = "iconManEngineer";
		backpack = "ZSN_minepack_west_OD";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_PASGT","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_PASGT","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWB: ZSN_SoldierW
	{
		scope = 2;
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWR: ZSN_SoldierWB
	{
		scope = 2;
		engineer = 1;
		detectSkill = 40;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		displayName = "$STR_B_soldier_repair_F0";
		backPack = "ZSN_ALICE_Repair_OD";
	};
	class ZSN_SoldierWMG: ZSN_SoldierW
	{
		scope = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_762x51_bandoliers_OD";
		weapons[] = {"Throw","Put","CUP_lmg_M60"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_M60"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWMGAss: ZSN_SoldierW
	{
		scope = 2;
		displayName = "MG Assistant";
		backpack = "ZSN_762x51_ammobelts_OD";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","Binocular"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWLAW: ZSN_SoldierW
	{
		scope = 2;
		displayName = "LAW Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_M72A6"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_M72A6"};
		magazines[] = {"CUP_M72A6_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_M72A6_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWSniper: ZSN_SoldierW
	{
		scope = 2;
		displayName = "Sniper";
		icon = "iconManRecon";
		weapons[] = {"Throw","Put","ZSN_CUP_srifle_M21"};
		respawnWeapons[] = {"Throw","Put","ZSN_CUP_srifle_M21"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Ghillie_Top.p3d";
		uniformClass = "ZSN_Uniform_Ghillie_Top";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\data\ghillie_top_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class ZSN_SoldierWOfficer: ZSN_SoldierW
	{
		scope = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_hgun_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_hgun_M9","Binocular"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_US_patrol_cap_WDL","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_US_patrol_cap_WDL","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};	
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","CUP_H_USArmy_Helmet_M1_plain_M81"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","CUP_H_USArmy_Helmet_M1_plain_M81"};
	};
	class ZSN_SoldierWNCO: ZSN_SoldierW
	{
		scope = 2;
		displayName = "Squad Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierWLeader: ZSN_SoldierW
	{
		scope = 2;
		displayName = "Team Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1GL","Binocular"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierWG: ZSN_SoldierW
	{
		scope = 2;
		displayName = "Grenadier";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1GL"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1GL"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWAT: ZSN_SoldierW
	{
		scope = 2;
		displayName = "AT Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_M47"};
		magazines[] = {"CUP_Dragon_EP1_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Dragon_EP1_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWATAss: ZSN_SoldierW
	{
		scope = 2;
		displayName = "AT Assistant";
		backpack = "ZSN_dragon_pack";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWAA: ZSN_SoldierW
	{
		scope = 2;
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_M81","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWSaboteur: ZSN_Soldierw
	{
		scope = 2;
		displayName = "Black Op";
		icon = "iconManExplosive";
		uniformClass = "CUP_I_B_PMC_Unit_24";
		backpack = "ZSN_demopack_blk";
		weapons[] = {"Throw","Put","zsn_glocks","CUP_smg_MP5SD6","Binocular"};
		respawnWeapons[] = {"Throw","Put","zsn_glocks","CUP_smg_MP5SD6","Binocular"};
		magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		Items[] = {"CUP_RUS_Balaclava_blk","Firstaidkit","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"CUP_RUS_Balaclava_blk","Firstaidkit","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR"};
		linkedItems[] = {"H_Watchcap_blk","CUP_NVG_PVS7","ZSN_Black_Op_Vest","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"H_Watchcap_blk","CUP_NVG_PVS7","ZSN_Black_Op_Vest","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierWcrew: ZSN_SoldierW
	{
		scope = 2;
		displayName = "Crew";
		icon = "iconManEngineer";
		weapons[] = {"Throw","Put","CUP_hgun_Colt1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_Colt1911","Binocular"};
		magazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","zsn_wpshell","zsn_wpshell"};
		Items[] = {"CUP_H_US_patrol_cap_WDL","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
		RespawnItems[] = {"CUP_H_US_patrol_cap_WDL","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_USMC_Crew_Helmet","CUP_V_B_PASGT_no_bags_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USMC_Crew_Helmet","CUP_V_B_PASGT_no_bags_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWD: B_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_WArmyD_ColdWar";
		displayName = "Soldier (Garrison)";
		picture = "";
		portrait = "";
		icon = "iconMan";
		genericNames = "EnglishMen";
		identityTypes[] = {"LanguageENG_F","NoGlasses","Head_NATO"};
		uniformClass = "CUP_U_B_BDUv2_desert";
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"CUP_H_US_patrol_cap_desert","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"CUP_H_US_patrol_cap_desert","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"CUP_H_US_patrol_cap_desert","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_US_patrol_cap_desert","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWDAR: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "LMG Soldier";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_556x45_bag_khaki";
		weapons[] = {"Throw","Put","ZSN_M249_SAW"};
		respawnWeapons[] = {"Throw","Put","ZSN_M249_SAW"};
		magazines[] = {"30Rnd_556x45_Stanag_tracer_red","30Rnd_556x45_Stanag_tracer_red","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_tracer_red","30Rnd_556x45_Stanag_tracer_red","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWDMedic: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWDRTO: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "Sapper";
		icon = "iconManEngineer";
		backpack = "ZSN_minepack_west";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_PASGT_desert","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_PASGT_desert","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWDB: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWDR: ZSN_SoldierWDB
	{
		scope = 2;
		engineer = 1;
		detectSkill = 40;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		displayName = "$STR_B_soldier_repair_F0";
		backPack = "ZSN_ALICE_Repair_khaki";
	};
	class ZSN_SoldierWDMG: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_762x51_bandoliers";
		weapons[] = {"Throw","Put","CUP_lmg_M60"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_M60"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWDMGAss: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "MG Assistant";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","Binocular"};
		backpack = "ZSN_762x51_ammobelts";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWDLAW: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "LAW Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_M72A6"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_M72A6"};
		magazines[] = {"CUP_M72A6_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_M72A6_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWDHAT: ZSN_SoldierWD
	{
		scope = 1;
		displayName = "Gustav Soldier";
		icon = "iconManAT";
		backpack = "ZSN_alice_Gustav";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_MAAWS"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWDSniper: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "Sniper";
		icon = "iconManRecon";
		weapons[] = {"Throw","Put","ZSN_CUP_srifle_M21"};
		respawnWeapons[] = {"Throw","Put","ZSN_CUP_srifle_M21"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Ghillie_Top.p3d";
		uniformClass = "ZSN_Uniform_6CD_Ghillie_Top";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_west\ghillie_top_6cd_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class ZSN_SoldierWDOfficer: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_hgun_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_hgun_M9","Binocular"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_US_patrol_cap_desert","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_US_patrol_cap_desert","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","CUP_H_USArmy_Helmet_M1_plain_Vine"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","CUP_H_USArmy_Helmet_M1_plain_Vine"};
	};
	class ZSN_SoldierWDNCO: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "Squad Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierWDLeader: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "Team Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1GL","Binocular"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierWDG: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "Grenadier";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1GL"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1GL"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWDAT: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "AT Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_M47"};
		magazines[] = {"CUP_Dragon_EP1_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Dragon_EP1_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWDATAss: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "AT Assistant";
		backpack = "ZSN_dragon_pack";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWDAA: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A1","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Vine","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWDSaboteur: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "Black Op (Day)";
		icon = "iconManExplosive";
		backpack = "ZSN_demopack_oli";
		uniformClass = "CUP_U_B_BDUv2_gloves_dirty_M81";
		weapons[] = {"Throw","Put","CUP_hgun_Mac10","CUP_arifle_Colt727","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_Mac10","CUP_arifle_Colt727","Binocular"};
		magazines[] = {"CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_45ACP_MAC10_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		Items[] = {"Firstaidkit","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR","cup_muzzle_mfsup_suppressor_mac10"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR","cup_muzzle_mfsup_suppressor_mac10"};
		linkedItems[] = {"H_Helmet_skate","V_TacVest_oli","CUP_PMC_Facewrap_Black","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"H_Helmet_skate","V_TacVest_oli","CUP_PMC_Facewrap_Black","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierWDcrew: ZSN_SoldierWD
	{
		scope = 2;
		displayName = "Crew";
		icon = "iconManEngineer";
		weapons[] = {"Throw","Put","CUP_hgun_Colt1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_Colt1911","Binocular"};
		magazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","zsn_wpshell","zsn_wpshell"};
		Items[] = {"CUP_H_US_patrol_cap_desert","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
		RespawnItems[] = {"CUP_H_US_patrol_cap_desert","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_USMC_Crew_Helmet","CUP_V_B_PASGT_no_bags_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USMC_Crew_Helmet","CUP_V_B_PASGT_no_bags_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineW: B_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_WMarines_ColdWar";
		displayName = "Soldier (Garrison)";
		picture = "";
		portrait = "";
		icon = "iconMan";
		genericNames = "EnglishMen";
		identityTypes[] = {"LanguageENG_F","NoGlasses","Head_NATO"};
		uniformClass = "CUP_U_B_BDUv2_roll_dirty_M81";
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"CUP_H_USMC_CAP_WDL","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"CUP_H_USMC_CAP_WDL","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"CUP_H_USMC_CAP_WDL","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USMC_CAP_WDL","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWAR: ZSN_MarineW
	{
		scope = 2;
		displayName = "LMG Soldier";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_556x45_bag_OD";
		weapons[] = {"Throw","Put","ZSN_M249_SAW"};
		respawnWeapons[] = {"Throw","Put","ZSN_M249_SAW"};
		magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","30Rnd_556x45_Stanag_tracer_red","30Rnd_556x45_Stanag_tracer_red","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","30Rnd_556x45_Stanag_tracer_red","30Rnd_556x45_Stanag_tracer_red","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWMedic: ZSN_MarineW
	{
		scope = 2;
		displayName = "Corpsman";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWRTO: ZSN_MarineW
	{
		scope = 2;
		displayName = "Sapper";
		icon = "iconManEngineer";
		backpack = "ZSN_minepack_west_OD";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWB: ZSN_MarineW
	{
		scope = 2;
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWMG: ZSN_MarineW
	{
		scope = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_762x51_bandoliers_OD";
		weapons[] = {"Throw","Put","CUP_lmg_FNMAG"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_FNMAG"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWMGAss: ZSN_MarineW
	{
		scope = 2;
		displayName = "MG Assistant";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","Binocular"};
		backpack = "ZSN_762x51_ammobelts_OD";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWLAW: ZSN_MarineW
	{
		scope = 2;
		displayName = "LAW Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M72A6_Special"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M72A6_Special"};
		magazines[] = {"CUP_M72A6_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_M72A6_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWHAT: ZSN_MarineW
	{
		scope = 2;
		displayName = "SMAW Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_Mk153Mod0_SMAWOptics"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_Mk153Mod0_SMAWOptics"};
		magazines[] = {"CUP_SMAW_Spotting","CUP_SMAW_HEAA_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_SMAW_Spotting","CUP_SMAW_HEAA_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWHATAss: ZSN_MarineW
	{
		scope = 2;
		displayName = "SMAW Assistant";
		backpack = "ZSN_alice_smaw_OD";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWSniper: ZSN_MarineW
	{
		scope = 2;
		displayName = "Sniper";
		icon = "iconManRecon";
		weapons[] = {"Throw","Put","ZSN_M40"};
		respawnWeapons[] = {"Throw","Put","ZSN_M40"};
		magazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Ghillie_Top.p3d";
		uniformClass = "ZSN_Uniform_Ghillie_Top";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\data\ghillie_top_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class ZSN_MarineWOfficer: ZSN_MarineW
	{
		scope = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_hgun_Colt1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_hgun_Colt1911","Binocular"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_USMC_CAP_WDL","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_USMC_CAP_WDL","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","CUP_H_USArmy_Helmet_M1_m81"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","CUP_H_USArmy_Helmet_M1_m81"};
	};
	class ZSN_MarineWNCO: ZSN_MarineW
	{
		scope = 2;
		displayName = "Squad Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_MarineWLeader: ZSN_MarineW
	{
		scope = 2;
		displayName = "Team Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2_GL","Binocular"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_MarineWG: ZSN_MarineW
	{
		scope = 2;
		displayName = "Grenadier";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2_GL"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2_GL"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWAT: ZSN_MarineW
	{
		scope = 2;
		displayName = "AT Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M47"};
		magazines[] = {"CUP_Dragon_EP1_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Dragon_EP1_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWATAss: ZSN_MarineW
	{
		scope = 2;
		displayName = "AT Assistant";
		backpack = "ZSN_dragon_pack";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWAA: ZSN_MarineW
	{
		scope = 2;
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_m81","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWCrew: ZSN_MarineW
	{
		scope = 2;
		displayName = "Crew";
		icon = "iconManEngineer";
		weapons[] = {"Throw","Put","CUP_hgun_Colt1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_Colt1911","Binocular"};
		magazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","zsn_wpshell","zsn_wpshell"};
		Items[] = {"CUP_H_USMC_CAP_WDL","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
		RespawnItems[] = {"CUP_H_USMC_CAP_WDL","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_USMC_Crew_Helmet","CUP_V_B_PASGT_no_bags","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USMC_Crew_Helmet","CUP_V_B_PASGT_no_bags","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWD: B_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_WMarinesD_ColdWar";
		displayName = "Soldier (Garrison)";
		picture = "";
		portrait = "";
		icon = "iconMan";
		genericNames = "EnglishMen";
		identityTypes[] = {"LanguageENG_F","NoGlasses","Head_NATO"};
		uniformClass = "CUP_U_B_BDUv2_roll_dirty_desert";
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"CUP_H_USMC_CAP_DES","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"CUP_H_USMC_CAP_DES","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"CUP_H_USMC_CAP_DES","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USMC_CAP_DES","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWDAR: ZSN_MarineWD
	{
		scope = 2;
		displayName = "LMG Soldier";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_556x45_bag_khaki";
		weapons[] = {"Throw","Put","ZSN_M249_SAW"};
		respawnWeapons[] = {"Throw","Put","ZSN_M249_SAW"};
		magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","30Rnd_556x45_Stanag_tracer_red","30Rnd_556x45_Stanag_tracer_red","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","30Rnd_556x45_Stanag_tracer_red","30Rnd_556x45_Stanag_tracer_red","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWDMedic: ZSN_MarineWD
	{
		scope = 2;
		displayName = "Corpsman";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWDRTO: ZSN_MarineWD
	{
		scope = 2;
		displayName = "Sapper";
		icon = "iconManEngineer";
		backpack = "ZSN_minepack_west";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_desert","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_desert","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWDB: ZSN_MarineWD
	{
		scope = 2;
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWDMG: ZSN_MarineWD
	{
		scope = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_762x51_bandoliers";
		weapons[] = {"Throw","Put","CUP_lmg_FNMAG"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_FNMAG"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWDMGAss: ZSN_MarineWD
	{
		scope = 2;
		displayName = "MG Assistant";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","Binocular"};
		backpack = "ZSN_762x51_ammobelts";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWDLAW: ZSN_MarineWD
	{
		scope = 2;
		displayName = "LAW Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M72A6_Special"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M72A6_Special"};
		magazines[] = {"CUP_M72A6_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_M72A6_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWDHAT: ZSN_MarineWD
	{
		scope = 2;
		displayName = "SMAW Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_Mk153Mod0_SMAWOptics"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_Mk153Mod0_SMAWOptics"};
		magazines[] = {"CUP_SMAW_Spotting","CUP_SMAW_HEAA_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_SMAW_Spotting","CUP_SMAW_HEAA_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWDHATAss: ZSN_MarineWD
	{
		scope = 2;
		displayName = "SMAW Assistant";
		backpack = "ZSN_alice_smaw";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWDSniper: ZSN_MarineWD
	{
		scope = 2;
		displayName = "Sniper";
		icon = "iconManRecon";
		weapons[] = {"Throw","Put","ZSN_M40"};
		respawnWeapons[] = {"Throw","Put","ZSN_M40"};
		magazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Ghillie_Top.p3d";
		uniformClass = "ZSN_Uniform_6CD_Ghillie_Top";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_west\ghillie_top_6cd_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class ZSN_MarineWDOfficer: ZSN_MarineWD
	{
		scope = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_hgun_Colt1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_hgun_Colt1911","Binocular"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_USMC_CAP_DES","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_USMC_CAP_DES","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","CUP_H_USArmy_Helmet_M1_Vine"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","CUP_H_USArmy_Helmet_M1_Vine"};
	};
	class ZSN_MarineWDNCO: ZSN_MarineWD
	{
		scope = 2;
		displayName = "Squad Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_MarineWDLeader: ZSN_MarineWD
	{
		scope = 2;
		displayName = "Team Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2_GL","Binocular"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_MarineWDG: ZSN_MarineWD
	{
		scope = 2;
		displayName = "Grenadier";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2_GL"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2_GL"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWDAT: ZSN_MarineWD
	{
		scope = 2;
		displayName = "AT Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M47"};
		magazines[] = {"CUP_Dragon_EP1_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Dragon_EP1_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWDATAss: ZSN_MarineWD
	{
		scope = 2;
		displayName = "AT Assistant";
		backpack = "ZSN_dragon_pack";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWDAA: ZSN_MarineWD
	{
		scope = 2;
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Vine","CUP_V_B_PASGT_OD","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWDCrew: ZSN_MarineWD
	{
		scope = 2;
		displayName = "Crew";
		icon = "iconManEngineer";
		weapons[] = {"Throw","Put","CUP_hgun_Colt1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_Colt1911","Binocular"};
		magazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","zsn_wpshell","zsn_wpshell"};
		Items[] = {"CUP_H_USMC_CAP_DES","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
		RespawnItems[] = {"CUP_H_USMC_CAP_DES","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_USMC_Crew_Helmet","CUP_V_B_PASGT_no_bags_desert","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USMC_Crew_Helmet","CUP_V_B_PASGT_no_bags_desert","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerW: B_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_WRangers_ColdWar";
		displayName = "Soldier (Garrison)";
		picture = "";
		portrait = "";
		icon = "iconMan";
		genericNames = "EnglishMen";
		identityTypes[] = {"LanguageENG_F","NoGlasses","Head_NATO"};
		uniformClass = "CUP_U_B_BDUv2_roll2_M81";
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"H_Booniehat_khk","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"H_Booniehat_khk","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWAR: ZSN_Rangerw
	{
		scope = 2;
		displayName = "LMG Soldier";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_556x45_bag_OD";
		weapons[] = {"Throw","Put","ZSN_M249_SAW"};
		respawnWeapons[] = {"Throw","Put","ZSN_M249_SAW"};
		magazines[] = {"CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","30Rnd_556x45_Stanag_tracer_red","30Rnd_556x45_Stanag_tracer_red","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","30Rnd_556x45_Stanag_tracer_red","30Rnd_556x45_Stanag_tracer_red","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWMedic: ZSN_Rangerw
	{
		scope = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWRTO: ZSN_Rangerw
	{
		scope = 2;
		displayName = "Sapper";
		icon = "iconManEngineer";
		backpack = "ZSN_minepack_west_OD";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_PASGTv2_WDL","CUP_V_B_PASGT","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_WDL","CUP_V_B_PASGT","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWB: ZSN_Rangerw
	{
		scope = 2;
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWMG: ZSN_Rangerw
	{
		scope = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_762x51_bandoliers_OD";
		weapons[] = {"Throw","Put","CUP_lmg_M60"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_M60"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		linkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWMGAss: ZSN_Rangerw
	{
		scope = 2;
		displayName = "MG Assistant";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","Binocular"};
		backpack = "ZSN_762x51_ammobelts_OD";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWLAW: ZSN_Rangerw
	{
		scope = 2;
		displayName = "AT4 Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M136"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M136"};
		magazines[] = {"CUP_M136_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_M136_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWHAT: ZSN_Rangerw
	{
		scope = 2;
		displayName = "Gustav Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_MAAWS_Scope"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_MAAWS_Scope"};
		magazines[] = {"CUP_MAAWS_HEAT_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_MAAWS_HEAT_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWHATAss: ZSN_Rangerw
	{
		scope = 2;
		displayName = "Gustav Assistant";
		backpack = "ZSN_alice_Gustav_OD";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWSniper: ZSN_Rangerw
	{
		scope = 2;
		displayName = "Sniper";
		icon = "iconManRecon";
		weapons[] = {"Throw","Put","ZSN_M24_wdl"};
		respawnWeapons[] = {"Throw","Put","ZSN_M24_wdl"};
		magazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Ghillie_Top.p3d";
		uniformClass = "ZSN_Uniform_Ghillie_Top";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\data\ghillie_top_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class ZSN_RangerWOfficer: ZSN_Rangerw
	{
		scope = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_hgun_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_hgun_M9","Binocular"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"H_Booniehat_khk","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"H_Booniehat_khk","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","CUP_H_PASGTv2_WDL"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","CUP_H_PASGTv2_WDL"};
	};
	class ZSN_RangerWNCO: ZSN_Rangerw
	{
		scope = 2;
		displayName = "Squad Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerWLeader: ZSN_Rangerw
	{
		scope = 2;
		displayName = "Team Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2_GL","Binocular"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
		linkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessOGL_ghex_F","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessOGL_ghex_F","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerWG: ZSN_Rangerw
	{
		scope = 2;
		displayName = "Grenadier";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2_GL"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2_GL"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F"};
		linkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessOGL_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessOGL_ghex_F","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerwAT: ZSN_Rangerw
	{
		scope = 2;
		displayName = "AT Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M47"};
		magazines[] = {"CUP_Dragon_EP1_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Dragon_EP1_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerwATAss: ZSN_Rangerw
	{
		scope = 2;
		displayName = "AT Assistant";
		backpack = "ZSN_dragon_pack";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWAA: ZSN_Rangerw
	{
		scope = 2;
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_WDL","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWPilot: ZSN_RangerW
	{
		scope = 2;
		displayName = "Pilot (Helicopter)";
		icon = "iconManEngineer";
		//uniformClass = "U_B_HeliPilotCoveralls";
		uniformClass = "CUP_U_B_CZ_Pilot_WDL";
		weapons[] = {"Throw","Put","CUP_hgun_M9"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_M9"};
		magazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
		respawnMagazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR"};
		linkedItems[] = {"CUP_H_CZ_Helmet06","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_CZ_Helmet06","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerWD: B_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_WRangersD_ColdWar";
		displayName = "Soldier (Garrison)";
		picture = "";
		portrait = "";
		icon = "iconMan";
		genericNames = "EnglishMen";
		identityTypes[] = {"LanguageENG_F","NoGlasses","Head_NATO"};
		uniformClass = "CUP_U_B_BDUv2_roll2_desert";
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"H_Booniehat_tan","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"H_Booniehat_tan","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWDAR: ZSN_RangerWD
	{
		scope = 2;
		displayName = "LMG Soldier";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_556x45_bag_OD";
		weapons[] = {"Throw","Put","ZSN_M249_SAW"};
		respawnWeapons[] = {"Throw","Put","ZSN_M249_SAW"};
		magazines[] = {"CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","30Rnd_556x45_Stanag_tracer_red","30Rnd_556x45_Stanag_tracer_red","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","30Rnd_556x45_Stanag_tracer_red","30Rnd_556x45_Stanag_tracer_red","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWDMedic: ZSN_RangerWD
	{
		scope = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWDRTO: ZSN_RangerWD
	{
		scope = 2;
		displayName = "Sapper";
		icon = "iconManEngineer";
		backpack = "ZSN_minepack_west";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_PASGTv2_desert","CUP_V_B_PASGT_desert","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_desert","CUP_V_B_PASGT_desert","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWDB: ZSN_RangerWD
	{
		scope = 2;
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWDMG: ZSN_RangerWD
	{
		scope = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_762x51_bandoliers";
		weapons[] = {"Throw","Put","CUP_lmg_M60"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_M60"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		linkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWDMGAss: ZSN_RangerWD
	{
		scope = 2;
		displayName = "MG Assistant";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","Binocular"};
		backpack = "ZSN_762x51_ammobelts";
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWDLAW: ZSN_RangerWD
	{
		scope = 2;
		displayName = "AT4 Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M136"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M136"};
		magazines[] = {"CUP_M136_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_M136_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWDHAT: ZSN_RangerWD
	{
		scope = 2;
		displayName = "Gustav Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_MAAWS_Scope"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_MAAWS_Scope"};
		magazines[] = {"CUP_MAAWS_HEAT_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_MAAWS_HEAT_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWDHATass: ZSN_RangerWD
	{
		scope = 2;
		displayName = "Gustav Assistant";
		backpack = "ZSN_alice_Gustav";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWDSniper: ZSN_RangerWD
	{
		scope = 2;
		displayName = "Sniper";
		icon = "iconManRecon";
		weapons[] = {"Throw","Put","ZSN_M24_des"};
		respawnWeapons[] = {"Throw","Put","ZSN_M24_des"};
		magazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Ghillie_Top.p3d";
		uniformClass = "ZSN_Uniform_6CD_Ghillie_Top";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_west\ghillie_top_6cd_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class ZSN_RangerWDOfficer: ZSN_RangerWD
	{
		scope = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_hgun_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_hgun_M9","Binocular"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"H_Booniehat_tan","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"H_Booniehat_tan","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","CUP_H_PASGTv2_desert"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","CUP_H_PASGTv2_desert"};
	};
	class ZSN_RangerWDNCO: ZSN_RangerWD
	{
		scope = 2;
		displayName = "Squad Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerWDLeader: ZSN_RangerWD
	{
		scope = 2;
		displayName = "Team Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2_GL","Binocular"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
		linkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessOGL_brn","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessOGL_brn","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerWDG: ZSN_RangerWD
	{
		scope = 2;
		displayName = "Grenadier";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2_GL"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2_GL"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F"};
		linkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessOGL_brn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessOGL_brn","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWDAT: ZSN_RangerWD
	{
		scope = 2;
		displayName = "AT Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_M47"};
		magazines[] = {"CUP_Dragon_EP1_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Dragon_EP1_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWDATAss: ZSN_RangerWD
	{
		scope = 2;
		displayName = "AT Assistant";
		backpack = "ZSN_dragon_pack";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWDAA: ZSN_RangerWD
	{
		scope = 2;
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PASGTv2_desert","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWDPilot: ZSN_RangerWD
	{
		scope = 2;
		displayName = "Pilot (Plane)";
		icon = "iconManEngineer";
		backpack = "B_Parachute";
		uniformClass = "CUP_U_B_CZ_Pilot_WDL";
		//uniformClass = "U_B_HeliPilotCoveralls";
		weapons[] = {"Throw","Put","CUP_hgun_M9"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_M9"};
		magazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
		respawnMagazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR"};
		linkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMGWeapon;
	class CUP_M2StaticMG_base;
	class CUP_B_M2StaticMG_USMC;
	class ZSN_M2StaticMG: CUP_B_M2StaticMG_USMC
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "ZSN_WArmy_ColdWar";
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_M2StaticMG_USMC.jpg";
	};
	class ZSN_MM2StaticMG: ZSN_M2StaticMG
	{
		faction = "ZSN_WMarines_ColdWar";
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
	};
	class ZSN_RM2StaticMG: ZSN_M2StaticMG
	{
		faction = "ZSN_WRangers_ColdWar";
		crew = "ZSN_RangerWB";
		typicalCargo[] = {"ZSN_RangerWB"};
	};
	class ZSN_M2StaticMGD: ZSN_M2StaticMG
	{
		faction = "ZSN_WArmyD_ColdWar";
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
	};
	class ZSN_MM2StaticMGD: ZSN_M2StaticMG
	{
		faction = "ZSN_WMarinesD_ColdWar";
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
	};
	class ZSN_RM2StaticMGD: ZSN_M2StaticMG
	{
		faction = "ZSN_WRangersD_ColdWar";
		crew = "ZSN_RangerWDB";
		typicalCargo[] = {"ZSN_RangerWDB"};
	};
	class CUP_M2StaticMG_MiniTripod_base;
	class CUP_B_M2StaticMG_MiniTripod_USMC;
	class ZSN_M2LowMG: CUP_B_M2StaticMG_MiniTripod_USMC
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "ZSN_WArmy_ColdWar";
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_M2StaticMG_MiniTripod_USMC.jpg";
	};
	class ZSN_MM2LowMG: ZSN_M2LowMG
	{
		faction = "ZSN_WMarines_ColdWar";
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
	};
	class ZSN_RM2LowMG: ZSN_M2LowMG
	{
		faction = "ZSN_WRangers_ColdWar";
		crew = "ZSN_RangerWB";
		typicalCargo[] = {"ZSN_RangerWB"};
	};
	class ZSN_M2LowMGD: ZSN_M2LowMG
	{
		faction = "ZSN_WArmyD_ColdWar";
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
	};
	class ZSN_MM2LowMGD: ZSN_M2LowMG
	{
		faction = "ZSN_WMarinesD_ColdWar";
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
	};
	class ZSN_RM2LowMGD: ZSN_M2LowMG
	{
		faction = "ZSN_WRangersD_ColdWar";
		crew = "ZSN_RangerWDB";
		typicalCargo[] = {"ZSN_RangerWDB"};
	};
	class StaticGrenadeLauncher;
	class CUP_MK19_TriPod_base;
	class CUP_B_MK19_TriPod_USMC;
	class ZSN_StaticGMG: CUP_B_MK19_TriPod_USMC
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "ZSN_WArmy_ColdWar";
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_O_AGS_RU.jpg";
	};
	class ZSN_MStaticGMG: ZSN_StaticGMG
	{
		faction = "ZSN_WMarines_ColdWar";
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
	};
	class ZSN_RStaticGMG: ZSN_StaticGMG
	{
		faction = "ZSN_WRangers_ColdWar";
		crew = "ZSN_RangerWB";
		typicalCargo[] = {"ZSN_RangerWB"};
	};
	class ZSN_StaticGMGD: ZSN_StaticGMG
	{
		faction = "ZSN_WArmyD_ColdWar";
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
	};
	class ZSN_MStaticGMGD: ZSN_StaticGMG
	{
		faction = "ZSN_WMarinesD_ColdWar";
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
	};
	class ZSN_RStaticGMGD: ZSN_StaticGMG
	{
		faction = "ZSN_WRangersD_ColdWar";
		crew = "ZSN_RangerWDB";
		typicalCargo[] = {"ZSN_RangerWDB"};
	};
	class StaticATWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner;
				class ViewOptics;
			};
		};
	};
	class CUP_TOW_TriPod_base: StaticATWeapon{};
	class CUP_B_TOW_TriPod_USMC: CUP_TOW_TriPod_base{};
	class ZSN_StaticTOW: CUP_B_TOW_TriPod_USMC
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "ZSN_WArmy_ColdWar";
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_TOW_TriPod_USMC.jpg";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				minElev = -10;
				minturn = -180;
				maxturn = 180;
				weapons[] = {"ZSN_Vmlauncher_TOW_single_veh"};
				magazines[] = {"ZSN_1Rnd_TOW_HMMWV_M"};
				gunnerAction = "TOW_Gunner";
				memoryPointsGetInGunner = "pos_gunner_dir";
				memoryPointsGetInGunnerDir = "pos_gunner";
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.025;
					maxFov = 0.2;
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};
				};
				gunnerOpticsModel = "\CUP\Weapons\CUP_Weapons_StaticWeapons\TOW_TI.p3d";
			};
		};
	};
	class ZSN_MStaticTOW: ZSN_StaticTOW
	{
		faction = "ZSN_WMarines_ColdWar";
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
	};
	class ZSN_RStaticTOW: ZSN_StaticTOW
	{
		faction = "ZSN_WRangers_ColdWar";
		crew = "ZSN_RangerWB";
		typicalCargo[] = {"ZSN_RangerWB"};
	};
	class ZSN_StaticTOWD: ZSN_StaticTOW
	{
		faction = "ZSN_WArmyD_ColdWar";
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
	};
	class ZSN_MStaticTOWD: ZSN_StaticTOW
	{
		faction = "ZSN_WMarinesD_ColdWar";
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
	};
	class ZSN_RStaticTOWD: ZSN_StaticTOW
	{
		faction = "ZSN_WRangersD_ColdWar";
		crew = "ZSN_RangerWDB";
		typicalCargo[] = {"ZSN_RangerWDB"};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class Mortar_01_base_F: StaticMortar{};
	class ZSN_staticM252Base: Mortar_01_base_F
	{
		side = 1;
		displayname = "$STR_DN_m252";
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_M252_USMC.jpg";
		model = "\CUP\Weapons\CUP_Weapons_StaticWeapons\CUP_81Mortar.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_StaticWeapons\data\mortar_m251_CA.paa";
		UiPicture = "\CUP\Weapons\CUP_Weapons_StaticWeapons\data\podnos_2b14_ca.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.06;
					minFov = 0.06;
					maxFov = 0.06;
					visionMode[] = {"Normal"};
				};
				gunnerAction = "D30_Cargo";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				weapons[] = {"mortar_82mm"};
				elevationMode = 1;
				magazines[] = {"8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white"};
				initElev = 0;
				initTurn = 0;
				minElev = -15;
				maxElev = 35;
				minTurn = -180;
				maxTurn = 180;
				turretInfoType = "ACE_Mk6_RscWeaponRangeArtillery";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				cameraDir = "look";
				gunnerForceOptics = 1;
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
			};
		};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"CUP_B_M252_Gun_Bag","CUP_B_M252_Bipod_Bag"};
			displayName = "";
		};
	};
	class ZSN_staticM252: ZSN_staticM252Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
		crew = "ZSN_SoldierWB";
		availableForSupportTypes[] = {"Artillery"};
	};
	class ZSN_MstaticM252: ZSN_staticM252Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
		availableForSupportTypes[] = {"Artillery"};
	};
	class ZSN_RstaticM252: ZSN_staticM252Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crew = "ZSN_RangerWB";
		typicalCargo[] = {"ZSN_RangerWB"};
		faction = "ZSN_WRangers_ColdWar";
		availableForSupportTypes[] = {"Artillery"};
	};
	class ZSN_staticM252D: ZSN_staticM252Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
		availableForSupportTypes[] = {"Artillery"};
	};
	class ZSN_MstaticM252D: ZSN_staticM252Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
		availableForSupportTypes[] = {"Artillery"};
	};
	class ZSN_RstaticM252D: ZSN_staticM252Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crew = "ZSN_RangerWDB";
		typicalCargo[] = {"ZSN_RangerWDB"};
		faction = "ZSN_WRangersD_ColdWar";
		availableForSupportTypes[] = {"Artillery"};
	};
};
class CfgGroups
{
	class West
	{
		class ZSN_WArmy_ColdWar
		{
			name = "Cold War U.S. Army";
			class Infantry
			{
				name = "Infantry";
				class ZSN_WArmy_BasicInfantry
				{
					name = "Infantry Squad";
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
				};
				class ZSN_WArmy_PlatoonLead
				{
					name = "Platoon HQ";
					faction = "ZSN_WArmy_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_SoldierWOfficer";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_SoldierWNCO";
						rank = "Sergeant";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWRTO";
						rank = "Sergeant";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWMedic";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWSniper";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WArmy_AASquad
				{
					name = "AA Team";
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
						vehicle = "ZSN_SoldierWAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWAA";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WArmy_ATSquad
				{
					name = "AT Team";
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
						vehicle = "ZSN_SoldierWAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WArmy_MGSquad
				{
					name = "MG Team";
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
						vehicle = "ZSN_SoldierWMG";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWMG";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWMGAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWMGAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			};
		};
		class ZSN_WMarines_ColdWar
		{
			name = "Cold War U.S. Marines";
			class Infantry
			{
				name = "Marine Infantry";
				class ZSN_WMarine_BasicInfantry
				{
					name = "Infantry Squad";
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
						vehicle = "ZSN_MarineWAR";
						rank = "Private";
						position[] = {0,-2,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_MarineWAR";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_MarineWAR";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_MarineWLAW";
						rank = "Private";
						position[] = {5,-4,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_MarineWLAW";
						rank = "Private";
						position[] = {-5,-4,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_MarineWLAW";
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
						vehicle = "ZSN_MarineWLAW";
						rank = "Private";
						position[] = {0,-6,0};
					};
				};
				class ZSN_WMarine_PlatoonLead
				{
					name = "Platoon HQ";
					faction = "ZSN_WMarines_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_MarineWOfficer";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_MarineWNCO";
						rank = "Sergeant";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_MarineWRTO";
						rank = "Sergeant";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_MarineWMedic";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_MarineWSniper";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WMarine_AASquad
				{
					name = "AA Team";
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
						vehicle = "ZSN_MarineWAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_MarineWAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_MarineWAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_MarineWAA";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WMarine_ATSquad
				{
					name = "AT Team";
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
						vehicle = "ZSN_MarineWAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_MarineWAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_MarineWATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_MarineWATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WMarine_SMAWSquad
				{
					name = "SMAW Team";
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
						vehicle = "ZSN_MarineWHAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_MarineWHAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_MarineWHATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_MarineWHATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			};
		};
		class ZSN_WRangers_ColdWar
		{
			name = "Cold War U.S. Rangers";
			class Infantry
			{
				name = "Ranger Infantry";
				class ZSN_WRanger_BasicInfantry
				{
					name = "Infantry Squad";
					faction = "ZSN_WRangers_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_RangerWNCO";
						rank = "Sergeant";
						position[] = {-3,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_RangerWLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_RangerWMG";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_RangerWAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_RangerWMGAss";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_RangerWHAT";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_RangerWLAW";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_RangerWHATAss";
						rank = "Private";
						position[] = {9,0,0};
					};
				};
				class ZSN_WRanger_PlatoonLead
				{
					name = "Platoon HQ";
					faction = "ZSN_WRangers_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_RangerWOfficer";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_RangerWNCO";
						rank = "Sergeant";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_RangerWRTO";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_RangerWMedic";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_RangerWSniper";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WRanger_AASquad
				{
					name = "AA Team";
					faction = "ZSN_WRangers_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_RangerWNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_RangerWAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_RangerWAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_RangerWAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_RangerWAA";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WRanger_ATSquad
				{
					name = "AT Team";
					faction = "ZSN_WRangers_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_RangerWNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_RangerWAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_RangerWAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_RangerWATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_RangerWATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			};
		};
		class ZSN_WArmyD_ColdWar
		{
			name = "Cold War U.S. Army (Desert)";
			class Infantry
			{
				name = "Infantry";
				class ZSN_WArmyD_BasicInfantry
				{
					name = "Infantry Squad";
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
				};
				class ZSN_WArmyD_PlatoonLead
				{
					name = "Platoon HQ";
					faction = "ZSN_WArmyD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_SoldierWDOfficer";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_SoldierWDNCO";
						rank = "Sergeant";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWDRTO";
						rank = "Sergeant";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWDMedic";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWDSniper";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WArmyD_AASquad
				{
					name = "AA Team";
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
						vehicle = "ZSN_SoldierWDAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWDAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWDAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWDAA";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WArmyD_ATSquad
				{
					name = "AT Team";
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
						vehicle = "ZSN_SoldierWDAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWDAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWDATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWDATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WArmyD_MGSquad
				{
					name = "MG Team";
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
						vehicle = "ZSN_SoldierWDMG";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWDMG";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWDMGAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWDMGAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			};
		};
		class ZSN_WMarinesD_ColdWar
		{
			name = "Cold War U.S. Marines (Desert)";
			class Infantry
			{
				name = "Marine Infantry";
				class ZSN_WMarineD_BasicInfantry
				{
					name = "Infantry Squad";
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
						vehicle = "ZSN_MarineWDAR";
						rank = "Private";
						position[] = {0,-2,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_MarineWDAR";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_MarineWDAR";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_MarineWDLAW";
						rank = "Private";
						position[] = {5,-4,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_MarineWDLAW";
						rank = "Private";
						position[] = {-5,-4,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_MarineWDLAW";
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
						vehicle = "ZSN_MarineWDLAW";
						rank = "Private";
						position[] = {0,-6,0};
					};
				};
				class ZSN_WMarineD_PlatoonLead
				{
					name = "Platoon HQ";
					faction = "ZSN_WMarinesD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_MarineWDOfficer";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_MarineWDNCO";
						rank = "Sergeant";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_MarineWDRTO";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_MarineWDMedic";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_MarineWDSniper";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WMarineD_AASquad
				{
					name = "AA Team";
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
						vehicle = "ZSN_MarineWDAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_MarineWDAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_MarineWDAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_MarineWDAA";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WMarineD_ATSquad
				{
					name = "AT Team";
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
						vehicle = "ZSN_MarineWDAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_MarineWDAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_MarineWDATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_MarineWDATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WMarineD_SMAWSquad
				{
					name = "SMAW Team";
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
						vehicle = "ZSN_MarineWDHAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_MarineWDHAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_MarineWDHATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_MarineWDHATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			};
		};
		class ZSN_WRangersD_ColdWar
		{
			name = "Cold War U.S. Rangers (Desert)";
			class Infantry
			{
				name = "Ranger Infantry";
				class ZSN_WRangerD_BasicInfantry
				{
					name = "Infantry Squad";
					faction = "ZSN_WRangersD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_RangerWDNCO";
						rank = "Sergeant";
						position[] = {-3,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_RangerWDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_RangerWDMG";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_RangerWDAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_RangerWDMGAss";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_RangerWDHAT";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_RangerWDLAW";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_RangerWDHATAss";
						rank = "Private";
						position[] = {9,0,0};
					};
				};
				class ZSN_WRangerD_PlatoonLead
				{
					name = "Platoon HQ";
					faction = "ZSN_WRangersD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_RangerWDOfficer";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_RangerWDNCO";
						rank = "Sergeant";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_RangerWDRTO";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_RangerWDMedic";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_RangerWDSniper";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WRangerD_AASquad
				{
					name = "AA Team";
					faction = "ZSN_WRangers_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_RangerWDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_RangerWDAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_RangerWDAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_RangerWDAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_RangerWDAA";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_WRangerD_ATSquad
				{
					name = "AT Team";
					faction = "ZSN_WRangersD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_RangerWDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_RangerWDAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_RangerWDAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_RangerWDATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_RangerWDATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			};
		};
	};
};
//};
