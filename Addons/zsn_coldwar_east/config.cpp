////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Mon May 29 17:35:34 2017 : Created on Mon May 29 17:35:34 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_east : config.bin{
class CfgPatches
{
	class ZSN_ColdWarEast
	{
		author = "ZluskeN";
		units[] = {"ZSN_East_Ammocrate","ZSN_SoldierE","ZSN_SoldierEAR","ZSN_SoldierEMedic","ZSN_SoldierEDriver","ZSN_SoldierEB","ZSN_SoldierEMG","ZSN_SoldierEMGAss","ZSN_SoldierELAW","ZSN_SoldierESniper","ZSN_SoldierEOfficer","ZSN_SoldierENCO","ZSN_SoldierELeader","ZSN_SoldierEG","ZSN_SoldierEAT","ZSN_SoldierEATAss","ZSN_SoldierEAA","ZSN_SoldierESaboteur","ZSN_SoldierECrew","ZSN_SoldierED","ZSN_SoldierEDAR","ZSN_SoldierEDMedic","ZSN_SoldierEDDriver","ZSN_SoldierEDB","ZSN_SoldierEDMG","ZSN_SoldierEDMGASS","ZSN_SoldierEDLAW","ZSN_SoldierEDSniper","ZSN_SoldierEDOfficer","ZSN_SoldierEDNCO","ZSN_SoldierEDLeader","ZSN_SoldierEDG","ZSN_SoldierEDAT","ZSN_SoldierEDATAss","ZSN_SoldierEDAA","ZSN_SoldierEDSaboteur","ZSN_SoldierEDCrew","ZSN_MarineE","ZSN_MarineEAR","ZSN_MarineEMedic","ZSN_MarineEDriver","ZSN_MarineEB","ZSN_MarineEMG","ZSN_MarineEMGASS","ZSN_MarineELAW","ZSN_MarineELAWAss","ZSN_MarineESniper","ZSN_MarineEOfficer","ZSN_MarineENCO","ZSN_MarineELeader","ZSN_MarineEG","ZSN_MarineEAT","ZSN_MarineEATAss","ZSN_MarineEAA","ZSN_MarineECrew","ZSN_MarineED","ZSN_MarineEDAR","ZSN_MarineEDMedic","ZSN_MarineEDDriver","ZSN_MarineEDB","ZSN_MarineEDMG","ZSN_MarineEDMGASS","ZSN_MarineEDLAW","ZSN_MarineEDLAWASS","ZSN_MarineEDSniper","ZSN_MarineEDOfficer","ZSN_MarineEDNCO","ZSN_MarineEDLeader","ZSN_MarineEDG","ZSN_MarineEDAT","ZSN_MarineEDATAss","ZSN_MarineEDAA","ZSN_MarineEDCrew","ZSN_RangerE","ZSN_RangerEAR","ZSN_RangerEMedic","ZSN_RangerEDriver","ZSN_RangerEB","ZSN_RangerEMG","ZSN_RangerEMGAss","ZSN_RangerELAW","ZSN_RangerELAWAss","ZSN_RangerESniper","ZSN_RangerEOfficer","ZSN_RangerENCO","ZSN_RangerELeader","ZSN_RangerEG","ZSN_RangerEAT","ZSN_RangerEATAss","ZSN_RangerEAA","ZSN_SoldierEPilot","ZSN_RangerED","ZSN_RangerEDAR","ZSN_RangerEDMedic","ZSN_RangerEDDriver","ZSN_RangerEDB","ZSN_RangerEDMG","ZSN_RangerEDMGAss","ZSN_RangerEDLAW","ZSN_RangerEDLAWAss","ZSN_RangerEDSniper","ZSN_RangerEDOfficer","ZSN_RangerEDNCO","ZSN_RangerEDLeader","ZSN_RangerEDG","ZSN_RangerEDAT","ZSN_RangerEDATAss","ZSN_RangerEDAA","ZSN_SoldierEDPilot","ZSN_M2StaticMGE","ZSN_MM2StaticMGE","ZSN_RM2StaticMGE","ZSN_M2StaticMGDE","ZSN_MM2StaticMGDE","ZSN_RM2StaticMGDE","ZSN_M2LowMGE","ZSN_MM2LowMGE","ZSN_RM2LowMGE","ZSN_M2LowMGDE","ZSN_MM2LowMGDE","ZSN_RM2LowMGDE","ZSN_StaticGMGE","ZSN_MStaticGMGE","ZSN_RStaticGMGE","ZSN_StaticGMGDE","ZSN_MStaticGMGDE","ZSN_RStaticGMGDE","ZSN_StaticMetis","ZSN_MStaticMetis","ZSN_RStaticMetis","ZSN_StaticMetisD","ZSN_MStaticMetisD","ZSN_RStaticMetisD","ZSN_Static2b14","ZSN_MStatic2b14","ZSN_RStatic2b14","ZSN_Static2b14D","ZSN_MStatic2b14D","ZSN_RStatic2b14D"};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarunits"};
	};
};
class cfgFactionClasses
{
	class ZSN_EArmy_ColdWar
	{
		displayName = "Cold War USSR Army";
		backpack_tf_faction_radio = "tf_bussole";
		personal_tf_faction_radio = "tf_pnr1000a";
		airborne_tf_faction_radio = "tf_mr6000l";
		flag = "\zsn_coldwar_east\USSR.paa";
		//flag = "\DiscloseAFGHANunits2\Logo.paa";
		priority = 1;
		side = 0;
	};
	class ZSN_EArmyD_ColdWar
	{
		displayName = "Cold War USSR Army (Desert)";
		backpack_tf_faction_radio = "tf_bussole";
		personal_tf_faction_radio = "tf_pnr1000a";
		airborne_tf_faction_radio = "tf_mr6000l";
		//flag = "\DiscloseAFGHANunits2\Logo.paa";
		flag = "\zsn_coldwar_east\USSR.paa";
		priority = 1;
		side = 0;
	};
	class ZSN_EMarines_ColdWar
	{
		displayName = "Cold War USSR Marines";
		backpack_tf_faction_radio = "tf_bussole";
		personal_tf_faction_radio = "tf_pnr1000a";
		airborne_tf_faction_radio = "tf_mr6000l";
		//flag = "\DiscloseAFGHANunits2\Logo.paa";
		flag = "\zsn_coldwar_east\USSR.paa";
		priority = 1;
		side = 0;
	};
	class ZSN_EMarinesD_ColdWar
	{
		displayName = "Cold War USSR Marines (Desert)";
		backpack_tf_faction_radio = "tf_bussole";
		personal_tf_faction_radio = "tf_pnr1000a";
		airborne_tf_faction_radio = "tf_mr6000l";
		//flag = "\DiscloseAFGHANunits2\Logo.paa";
		flag = "\zsn_coldwar_east\USSR.paa";
		priority = 1;
		side = 0;
	};
	class ZSN_ERangers_ColdWar
	{
		displayName = "Cold War USSR Airborne";
		backpack_tf_faction_radio = "tf_bussole";
		personal_tf_faction_radio = "tf_pnr1000a";
		airborne_tf_faction_radio = "tf_mr6000l";
		//flag = "\DiscloseAFGHANunits2\Logo.paa";
		flag = "\zsn_coldwar_east\USSR.paa";
		priority = 1;
		side = 0;
	};
	class ZSN_ERangersD_ColdWar
	{
		displayName = "Cold War USSR Airborne (Desert)";
		backpack_tf_faction_radio = "tf_bussole";
		personal_tf_faction_radio = "tf_pnr1000a";
		airborne_tf_faction_radio = "tf_mr6000l";
		//flag = "\DiscloseAFGHANunits2\Logo.paa";
		flag = "\zsn_coldwar_east\USSR.paa";
		priority = 1;
		side = 0;
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
	class ZSN_Uniform_KLMK: ItemCore
	{
		author = "ZluskeN";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "Soviet KLMK Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_u_o_gorka_olive_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ZSN_SoldierE";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class ZSN_Uniform_M88: ItemCore
	{
		author = "ZluskeN";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "Soviet M88 Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_u_o_rus_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ZSN_SoldierED";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class ZSN_Uniform_VMF: ItemCore
	{
		author = "ZluskeN";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "Soviet VMF Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_u_o_rus_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ZSN_MarineE";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class ZSN_Uniform_VMFDes: ItemCore
	{
		author = "ZluskeN";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "Soviet VMF Uniform (Green)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_u_o_rus_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ZSN_MarineED";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class ZSN_Uniform_KLMK_2: ItemCore
	{
		author = "ZluskeN";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "Soviet KLMK Uniform 2";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ui\icon_u_o_kam_2_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ZSN_MarineEP";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class ZSN_Uniform_KLMK_3: ItemCore
	{
		author = "ZluskeN";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "Soviet KLMK Uniform 3";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ui\icon_u_o_kam_2_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ZSN_RangerEP";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class ZSN_Uniform_VDV: ItemCore
	{
		author = "ZluskeN";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "Soviet VDV Uniform";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_CDF\data\ui\icon_u_cdf_1_dst_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ZSN_RangerE";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class ZSN_Uniform_VDVDes: ItemCore
	{
		author = "ZluskeN";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "Soviet VDV Uniform (Desert)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_CDF\data\ui\icon_u_cdf_1_dst_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ZSN_RangerED";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class ZSN_Uniform_TTsko_FST: ItemCore
	{
		author = "ZluskeN";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "Soviet Uniform (TTSko Forest)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_CDF\data\ui\icon_u_cdf_1_fst_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ZSN_SoldierESaboteur";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class ZSN_Uniform_TTsko_MNT: ItemCore
	{
		author = "ZluskeN";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "Soviet Uniform (TTSko Mountain)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_CDF\data\ui\icon_u_cdf_1_mnt_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ZSN_SoldierEDSaboteur";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class ZSN_Uniform_KLMK_Ghillie_Top: ItemCore
	{
		author = "ZluskeN";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "Half-Ghillie (KLMK)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_u_o_tk_ghillie_top_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ZSN_SoldierESniper";
			containerClass = "Supply40";
			mass = 20;
		};
	};
};
class CfgVehicles
{
	class ReammoBox_F;
	class CUP_ReammoBox_EP1;
	class CUP_RUSpecialWeaponsBox;
	class ZSN_East_Ammocrate: CUP_RUSpecialWeaponsBox
	{
		scope = 2;
		displayName = "Cold War Ammo Crate (East)";
		maximumLoad = 20000;
		class Transportweapons
		{
			class _xx_CUP_launch_RPG18
			{
				weapon = "CUP_launch_RPG18";
				count = 10;
			};
		};
		class TransportBackpacks
		{
			class _xx_CUP_B_CivPack_WDL
			{
				backpack = "CUP_B_CivPack_WDL";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_RPG18_M
			{
				magazine = "CUP_RPG18_M";
				count = 10;
			};
			class _xx_CUP_PG7VR_M
			{
				magazine = "CUP_PG7VR_M";
				count = 4;
			};
			class _xx_RPG32_F
			{
				magazine = "RPG32_F";
				count = 6;
			};
			class _xx_CUP_AT13_M
			{
				magazine = "CUP_AT13_M";
				count = 4;
			};
			class _xx_CUP_Igla_M
			{
				magazine = "CUP_Igla_M";
				count = 4;
			};
			class _xx_CUP_30Rnd_545x39_AK_M
			{
				magazine = "CUP_30Rnd_545x39_AK_M";
				count = 120;
			};
			class _xx_CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M
			{
				magazine = "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M";
				count = 60;
			};
			class _xx_CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
			{
				magazine = "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
				count = 120;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 18;
			};
			class _xx_CUP_10Rnd_762x54_SVD_M
			{
				magazine = "CUP_10Rnd_762x54_SVD_M";
				count = 84;
			};
			class _xx_CUP_1Rnd_HE_GP25_M
			{
				magazine = "CUP_1Rnd_HE_GP25_M";
				count = 200;
			};
			class _xx_CUP_FlareWhite_GP25_M
			{
				magazine = "CUP_FlareWhite_GP25_M";
				count = 100;
			};
			class _xx_CUP_1Rnd_SMOKE_GP25_M
			{
				magazine = "CUP_1Rnd_SMOKE_GP25_M";
				count = 100;
			};
			class _xx_CUP_8Rnd_9x18_Makarov_M
			{
				magazine = "CUP_8Rnd_9x18_Makarov_M";
				count = 125;
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
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine = "CUP_HandGrenade_RGD5";
				count = 100;
			};
			class _xx_ZSN_WpShell
			{
				magazine = "ZSN_WpShell";
				count = 80;
			};
			class _xx_CUP_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 30;
			};
			class _xx_CUP_MineE_M
			{
				magazine = "CUP_MineE_M";
				count = 15;
			};
		};
		class TransportItems{};
	};
	class O_soldier_base_F;
	class ZSN_SoldierE: O_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_EArmy_ColdWar";
		displayName = "Soldier (Garrison)";
		portrait = "";
		picture = "";
		icon = "iconMan";
		uniformClass = "ZSN_Uniform_KLMK";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Gorka.p3d";
		hiddenSelections[] = {"camo","clan","insignia"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\gorka_klmk.paa"};
		//model = "DiscloseAfghanData\Berezka.p3d";
		genericNames = "CUP_Names_RussianMen";
		identityTypes[] = {"Head_Euro","NoGlasses","CUP_D_Language_RU"};
		cost = 200000;
		canDeactivateMines = 0;
		engineer = 1;
		attendant = 0;
		accuracy = 3;
		camouflage = 0.8;
		sensitivity = 2.5;
		threat[] = {1,1,0.8};
		//uniformClass = "CUP_U_O_CHDKZ_Kam_06";
		//hiddenSelectionsTextures[] = {"DiscloseAfghanData\N_co.paa","DiscloseAfghanData\n_grove.paa"};
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_AK74"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"H_Bandanna_cbr","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"H_Bandanna_cbr","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ins_bardak.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\W1_ins_bardak.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\W2_ins_bardak.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ins_lopotev.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\w1_ins_lopotev.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\w2_ins_lopotev.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\commander.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\commander_w1.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\commander_w2.rvmat"};
		};
	};
	class ZSN_SoldierEAR: ZSN_SoldierE
	{
		scope = 2;
		displayName = "LMG Soldier";
		icon = "iconManMG";
		backpack = "ZSN_45rnd_545x39_bag";
		weapons[] = {"Throw","Put","CUP_arifle_RPK74_45"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_RPK74_45"};
		magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEMedic: ZSN_SoldierE
	{
		scope = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class SUD_USSR_Soldier_Medic: ZSN_SoldierEMedic
	{
		scope = 1;
		displayName = "$STR_B_medic_F0";
	};
	class ZSN_SoldierEDriver: ZSN_SoldierE
	{
		scope = 2;
		displayName = "Sapper";
		icon = "iconManEngineer";
		backpack = "ZSN_minepack_east";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_4_FST","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_4_FST","ItemMap","ItemCompass","ItemWatch"};
	};
	class SUD_USSR_Soldier_Sapper: ZSN_SoldierEDriver
	{
		scope = 1;
		displayName = "$STR_B_soldier_exp_F0";
	};
	class SUD_USSR_Soldier_Repair: ZSN_SoldierEDriver
	{
		scope = 2;
		displayName = "$STR_B_soldier_repair_F0";
		engineer = 1;
		detectSkill = 40;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		backpack = "ZSN_RD54_Repair";
	};
	class ZSN_SoldierEB: ZSN_SoldierE
	{
		scope = 2;
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class SUD_USSR_Soldier: ZSN_SoldierEB
	{
		scope = 1;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
	};
	class ZSN_SoldierEMG: ZSN_SoldierE
	{
		scope = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_762x54_bandoliers";
		weapons[] = {"Throw","Put","CUP_lmg_PKM"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_PKM"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class SUD_USSR_Soldier_AR: ZSN_SoldierEMG
	{
		scope = 1;
		displayName = "$STR_B_Soldier_AR_F0";
	};
	class ZSN_SoldierEMGAss: ZSN_SoldierE
	{
		scope = 2;
		displayName = "MG Assistant";
		backpack = "ZSN_762x54_ammobelts";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierELAW: ZSN_SoldierE
	{
		scope = 2;
		displayName = "RPG Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG18"};
		magazines[] = {"CUP_RPG18_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_RPG18_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class SUD_USSR_Soldier_AT: ZSN_SoldierE
	{
		scope = 1;
		displayName = "$STR_B_Soldier_LAT_F0";
		icon = "iconManAT";
		backpack = "ZSN_csla_rpg_pack_rpg7";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG7V"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG7V"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierESniper: ZSN_SoldierE
	{
		scope = 2;
		displayName = "Sniper";
		icon = "iconManRecon";
		weapons[] = {"Throw","Put","CUP_srifle_SVD_pso"};
		respawnWeapons[] = {"Throw","Put","CUP_srifle_SVD_pso"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Ghillie_Top.p3d";
		uniformClass = "ZSN_Uniform_KLMK_Ghillie_Top";
		hiddenSelections[] = {"Camo","clan","insignia"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\ghillie_top_klmk_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\W1_tak_soldier.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\W2_tak_soldier.rvmat"};
		};
	};
	class ZSN_SoldierEOfficer: ZSN_SoldierE
	{
		scope = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_hgun_Makarov","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_hgun_Makarov","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"H_Beret_blk","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"H_Beret_blk","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","CUP_H_SLA_Helmet"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","CUP_H_SLA_Helmet"};
	};
	class ZSN_SoldierENCO: ZSN_SoldierE
	{
		scope = 2;
		displayName = "Squad Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","ZSN_WpShell","ZSN_WpShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","ZSN_WpShell","ZSN_WpShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierELeader: ZSN_SoldierE
	{
		scope = 2;
		displayName = "Team Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_AK74_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74_GL","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKE_GP25_M"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKE_GP25_M"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt03","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt03","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class SUD_USSR_Soldier_TL: ZSN_SoldierELeader
	{
		scope = 1;
		displayName = "$STR_B_Soldier_TL_F0";
	};
	class ZSN_SoldierEG: ZSN_SoldierE
	{
		scope = 2;
		displayName = "Grenadier";
		weapons[] = {"Throw","Put","CUP_arifle_AK74_GL"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74_GL"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class SUD_USSR_Soldier_GL: ZSN_SoldierEG
	{
		scope = 1;
		displayName = "$STR_B_Soldier_GL_F0";
	};
	class ZSN_SoldierEAT: ZSN_SoldierE
	{
		scope = 2;
		displayName = "AT Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Metis"};
		magazines[] = {"CUP_AT13_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_AT13_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class SUD_USSR_Soldier_HAT: ZSN_SoldierEAT
	{
		scope = 1;
		displayName = "$STR_B_Soldier_AT_F0";
	};
	class ZSN_SoldierEATAss: ZSN_SoldierE
	{
		scope = 2;
		displayName = "AT Assistant";
		backpack = "ZSN_metis_pack";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEAA: ZSN_SoldierE
	{
		scope = 2;
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Igla"};
		magazines[] = {"CUP_Igla_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_Igla_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class SUD_USSR_Soldier_AA: ZSN_SoldierEAA
	{
		scope = 1;
		displayName = "$STR_B_soldier_AA_F0";
	};
	class ZSN_SoldierESaboteur: ZSN_SoldierE
	{
		scope = 2;
		displayName = "Spets Naz";
		icon = "iconManExplosive";
		backpack = "ZSN_Demopack_khk";
		uniformClass = "ZSN_Uniform_TTsko_FST";
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\sov_uniform_ttsko_fst_co.paa"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Soldier2.p3d";
		weapons[] = {"Throw","Put","CUP_hgun_SA61","CUP_smg_bizon_snds","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_SA61","CUP_smg_bizon_snds","Binocular"};
		magazines[] = {"CUP_20Rnd_B_765x17_Ball_M","CUP_20Rnd_B_765x17_Ball_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_20Rnd_B_765x17_Ball_M","CUP_20Rnd_B_765x17_Ball_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		Items[] = {"G_Balaclava_oli","Firstaidkit","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"G_Balaclava_oli","Firstaidkit","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		linkedItems[] = {"H_Bandanna_khk_hs","CUP_NVG_PVS7","CUP_V_RUS_Smersh_1","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"H_Bandanna_khk_hs","CUP_NVG_PVS7","CUP_V_RUS_Smersh_1","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class ZSN_SoldierECrew: ZSN_SoldierE
	{
		scope = 2;
		displayName = "Crew";
		icon = "iconMan";
		uniformClass = "CUP_U_O_SLA_Overalls_Tank";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74U","CUP_hgun_Makarov","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74U","CUP_hgun_Makarov","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		Items[] = {"H_Bandanna_cbr","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		RespawnItems[] = {"H_Bandanna_cbr","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_SLA_TankerHelmet","CUP_V_CDF_OfficerBelt2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_TankerHelmet","CUP_V_CDF_OfficerBelt2","ItemMap","ItemCompass","ItemWatch"};
	};
	class SUD_USSR_Soldier_Crew: ZSN_SoldierECrew
	{
		scope = 1;
		displayName = "$STR_B_crew_F0";
	};
	class ZSN_SoldierED: O_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_EArmyD_ColdWar";
		displayName = "Soldier (Garrison)";
		portrait = "";
		picture = "";
		icon = "iconMan";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Soldier1.p3d";
		hiddenSelections[] = {"Camo","clan","insignia"};
		uniformClass = "ZSN_Uniform_M88";
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\afganka.paa"};
		genericNames = "CUP_Names_RussianMen";
		identityTypes[] = {"Head_Euro","NoGlasses","CUP_D_Language_RU"};
		cost = 200000;
		canDeactivateMines = 0;
		engineer = 1;
		attendant = 0;
		accuracy = 3;
		camouflage = 0.8;
		sensitivity = 2.5;
		threat[] = {1,1,0.8};
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_AK74"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"H_Bandanna_cbr","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"H_Bandanna_cbr","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
	};
	class ZSN_SoldierEDAR: ZSN_SoldierED
	{
		scope = 2;
		displayName = "LMG Soldier";
		icon = "iconManMG";
		backpack = "ZSN_45rnd_545x39_bag";
		weapons[] = {"Throw","Put","CUP_arifle_RPK74_45"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_RPK74_45"};
		magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDMedic: ZSN_SoldierED
	{
		scope = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDDriver: ZSN_SoldierED
	{
		scope = 2;
		displayName = "Sapper";
		icon = "iconManEngineer";
		backpack = "ZSN_minepack_east";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_4_DST","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_4_DST","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDB: ZSN_SoldierED
	{
		scope = 2;
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
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
	class ZSN_SoldierEDMG: ZSN_SoldierED
	{
		scope = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_762x54_bandoliers";
		weapons[] = {"Throw","Put","CUP_lmg_PKM"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_PKM"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDMGASS: ZSN_SoldierED
	{
		scope = 2;
		displayName = "MG Assistant";
		backpack = "ZSN_762x54_ammobelts";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDLAW: ZSN_SoldierED
	{
		scope = 2;
		displayName = "RPG Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG18"};
		magazines[] = {"CUP_RPG18_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_RPG18_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDHAT: ZSN_SoldierED
	{
		scope = 1;
		displayName = "RPG-7 Soldier";
		icon = "iconManAT";
		backpack = "ZSN_csla_rpg_pack_rpg7";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG7V"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG7V"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDSniper: ZSN_SoldierED
	{
		scope = 2;
		displayName = "Sniper";
		icon = "iconManRecon";
		weapons[] = {"Throw","Put","CUP_srifle_SVD_pso"};
		respawnWeapons[] = {"Throw","Put","CUP_srifle_SVD_pso"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Ghillie_Top.p3d";
		uniformClass = "CUP_U_O_TK_Ghillie_Top";
		hiddenSelections[] = {"Camo","clan","insignia"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\ghillie_top_klmk_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\W1_tak_soldier.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\W2_tak_soldier.rvmat"};
		};
	};
	class ZSN_SoldierEDOfficer: ZSN_SoldierED
	{
		scope = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_hgun_Makarov","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_hgun_Makarov","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"H_Beret_blk","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"H_Beret_blk","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","CUP_H_SLA_Helmet"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","CUP_H_SLA_Helmet"};
	};
	class ZSN_SoldierEDNCO: ZSN_SoldierED
	{
		scope = 2;
		displayName = "Squad Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","ZSN_WpShell","ZSN_WpShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","ZSN_WpShell","ZSN_WpShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierEDLeader: ZSN_SoldierED
	{
		scope = 2;
		displayName = "Team Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_AK74_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74_GL","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKE_GP25_M"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKE_GP25_M"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt03","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt03","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierEDG: ZSN_SoldierED
	{
		scope = 2;
		displayName = "Grenadier";
		weapons[] = {"Throw","Put","CUP_arifle_AK74_GL"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74_GL"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDAT: ZSN_SoldierED
	{
		scope = 2;
		displayName = "AT Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Metis"};
		magazines[] = {"CUP_AT13_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_AT13_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDATAss: ZSN_SoldierED
	{
		scope = 2;
		displayName = "AT Assistant";
		backpack = "ZSN_metis_pack";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDAA: ZSN_SoldierED
	{
		scope = 2;
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Igla"};
		magazines[] = {"CUP_Igla_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_Igla_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDSaboteur: ZSN_SoldierED
	{
		scope = 2;
		displayName = "Spets Naz (Day)";
		icon = "iconManExplosive";
		backpack = "ZSN_DemoPack_cbr";
		uniformClass = "ZSN_Uniform_TTsko_MNT";
		hiddenSelections[] = {"Camo","clan","insignia"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Soldier2.p3d";
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\sov_uniform_ttsko_mnt_co.paa"};
		weapons[] = {"Throw","Put","CUP_hgun_PB6P9_snds","CUP_arifle_AK107","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_PB6P9_snds","CUP_arifle_AK107","Binocular"};
		magazines[] = {"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		Items[] = {"Firstaidkit","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		linkedItems[] = {"CUP_H_RUS_Beret_Spetsnaz","CUP_V_O_Ins_Carrier_Rig_Com","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_RUS_Beret_Spetsnaz","CUP_V_O_Ins_Carrier_Rig_Com","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class SUD_USSR_Soldier_Specop: ZSN_SoldierEDSaboteur
	{
		scope = 1;
		displayName = "$STR_B_recon_F0";
	};
	class ZSN_SoldierEDCrew: ZSN_SoldierED
	{
		scope = 2;
		displayName = "Crew";
		icon = "iconMan";
		uniformClass = "CUP_U_O_SLA_Overalls_Tank";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74U","CUP_hgun_Makarov","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74U","CUP_hgun_Makarov","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		Items[] = {"H_Bandanna_cbr","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		RespawnItems[] = {"H_Bandanna_cbr","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_SLA_TankerHelmet","CUP_V_CDF_OfficerBelt2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_TankerHelmet","CUP_V_CDF_OfficerBelt2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineE: O_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_EMarines_ColdWar";
		displayName = "Soldier (Garrison)";
		portrait = "";
		picture = "";
		icon = "iconMan";
		//model = "DiscloseAfghanData\Berezka.p3d";
		//model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_Uniform2.p3d";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Soldier1.p3d";
		hiddenSelections[] = {"Camo","clan","insignia"};
		//hiddenSelectionsTextures[] = {"DiscloseAfghanData\N_vdv2.paa","DiscloseAfghanData\n_grove.paa"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\uniform_vmf.paa"};
		genericNames = "CUP_Names_RussianMen";
		identityTypes[] = {"Head_Euro","NoGlasses","CUP_D_Language_RU"};
		cost = 200000;
		canDeactivateMines = 0;
		engineer = 1;
		attendant = 0;
		accuracy = 3;
		camouflage = 0.8;
		sensitivity = 2.5;
		threat[] = {1,1,0.8};
		//uniformClass = "CUP_U_O_CHDKZ_Kam_06";
		uniformClass = "ZSN_Uniform_VMF";
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_AK74"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"CUP_H_ChDKZ_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"CUP_H_ChDKZ_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class ZSN_MarineEAR: ZSN_MarineE
	{
		scope = 2;
		displayName = "LMG Soldier";
		icon = "iconManMG";
		backpack = "ZSN_45rnd_545x39_bag";
		weapons[] = {"Throw","Put","CUP_arifle_RPK74_45"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_RPK74_45"};
		magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEMedic: ZSN_MarineE
	{
		scope = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEDriver: ZSN_MarineE
	{
		scope = 2;
		displayName = "Sapper";
		icon = "iconManEngineer";
		backpack = "ZSN_minepack_east";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_4_FST","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_4_FST","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEB: ZSN_MarineE
	{
		scope = 2;
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEMG: ZSN_MarineE
	{
		scope = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_762x54_bandoliers";
		weapons[] = {"Throw","Put","CUP_lmg_PKM"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_PKM"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_3_Green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_3_Green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEMGASS: ZSN_MarineE
	{
		scope = 2;
		displayName = "MG Assistant";
		backpack = "ZSN_762x54_ammobelts";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_2_Green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_2_Green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineELAW: ZSN_MarineE
	{
		scope = 2;
		displayName = "RPG Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG18"};
		magazines[] = {"CUP_RPG18_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_RPG18_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEHAT: ZSN_MarineE
	{
		scope = 2;
		displayName = "RPG-7 Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG7V_PGO7V"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG7V_PGO7V"};
		magazines[] = {"CUP_PG7VR_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_PG7VR_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEHATAss: ZSN_MarineE
	{
		scope = 2;
		displayName = "RPG-7 Assistant";
		backpack = "ZSN_rpg_pack_rpg7";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_2_Green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_2_Green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineESniper: ZSN_MarineE
	{
		scope = 2;
		displayName = "Sniper";
		icon = "iconManRecon";
		weapons[] = {"Throw","Put","ZSN_SVD"};
		respawnWeapons[] = {"Throw","Put","ZSN_SVD"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Ghillie_Top.p3d";
		uniformClass = "ZSN_Uniform_KLMK_Ghillie_Top";
		hiddenSelections[] = {"Camo","clan","insignia"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\ghillie_top_klmk_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\W1_tak_soldier.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\W2_tak_soldier.rvmat"};
		};
	};
	class ZSN_MarineEOfficer: ZSN_MarineE
	{
		scope = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_hgun_Makarov","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_hgun_Makarov","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_ChDKZ_Beret","CUP_V_CDF_6B3_5_Green","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_ChDKZ_Beret","CUP_V_CDF_6B3_5_Green","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","CUP_H_SLA_Helmet"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","CUP_H_SLA_Helmet"};
	};
	class ZSN_MarineENCO: ZSN_MarineE
	{
		scope = 2;
		displayName = "Squad Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","ZSN_WpShell","ZSN_WpShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","ZSN_WpShell","ZSN_WpShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_5_Green","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_5_Green","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_MarineELeader: ZSN_MarineE
	{
		scope = 2;
		displayName = "Team Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_AK74_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74_GL","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKE_GP25_M"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKE_GP25_M"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_MarineEG: ZSN_MarineE
	{
		scope = 2;
		displayName = "Grenadier";
		weapons[] = {"Throw","Put","CUP_arifle_AK74_GL"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74_GL"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_4_Green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_4_Green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEAT: ZSN_MarineE
	{
		scope = 2;
		displayName = "AT Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Metis"};
		magazines[] = {"CUP_AT13_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_AT13_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEATAss: ZSN_MarineE
	{
		scope = 2;
		displayName = "AT Assistant";
		backpack = "ZSN_metis_pack";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_2_Green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_2_Green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEAA: ZSN_MarineE
	{
		scope = 2;
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Igla"};
		magazines[] = {"CUP_Igla_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_Igla_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_1_Green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineECrew: ZSN_MarineE
	{
		scope = 2;
		displayName = "Crew";
		icon = "iconMan";
		uniformClass = "CUP_U_O_SLA_Overalls_Tank";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74U","CUP_hgun_Makarov","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74U","CUP_hgun_Makarov","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		Items[] = {"CUP_H_ChDKZ_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		RespawnItems[] = {"CUP_H_ChDKZ_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_SLA_TankerHelmet","CUP_V_CDF_OfficerBelt2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_TankerHelmet","CUP_V_CDF_OfficerBelt2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineED: O_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_EMarinesD_ColdWar";
		displayName = "Soldier (Garrison)";
		portrait = "";
		picture = "";
		icon = "iconMan";
		uniformClass = "ZSN_Uniform_VMFDes";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Soldier2.p3d";
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\green_vmf.paa"};
		hiddenSelections[] = {"Camo","clan","insignia"};
		genericNames = "CUP_Names_RussianMen";
		identityTypes[] = {"Head_Euro","NoGlasses","CUP_D_Language_RU"};
		cost = 200000;
		canDeactivateMines = 0;
		engineer = 1;
		attendant = 0;
		accuracy = 3;
		camouflage = 0.8;
		sensitivity = 2.5;
		threat[] = {1,1,0.8};
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_AK74"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"CUP_H_ChDKZ_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"CUP_H_ChDKZ_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class ZSN_MarineEDAR: ZSN_MarineED
	{
		scope = 2;
		displayName = "LMG Soldier";
		icon = "iconManMG";
		backpack = "ZSN_45rnd_545x39_bag";
		weapons[] = {"Throw","Put","CUP_arifle_RPK74_45"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_RPK74_45"};
		magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEDMedic: ZSN_MarineED
	{
		scope = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEDDriver: ZSN_MarineED
	{
		scope = 2;
		displayName = "Sapper";
		icon = "iconManEngineer";
		backpack = "ZSN_minepack_east";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_4_MNT","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_CDF_6B3_4_MNT","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEDB: ZSN_MarineED
	{
		scope = 2;
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEDMG: ZSN_MarineED
	{
		scope = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_762x54_bandoliers";
		weapons[] = {"Throw","Put","CUP_lmg_PKM"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_PKM"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest03","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest03","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEDMGASS: ZSN_MarineED
	{
		scope = 2;
		displayName = "MG Assistant";
		backpack = "ZSN_762x54_ammobelts";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest03","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest03","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEDLAW: ZSN_MarineED
	{
		scope = 2;
		displayName = "RPG Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG18"};
		magazines[] = {"CUP_RPG18_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_RPG18_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEDHAT: ZSN_MarineED
	{
		scope = 2;
		displayName = "RPG-7 Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG7V_PGO7V"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_RPG7V_PGO7V"};
		magazines[] = {"CUP_PG7VR_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_PG7VR_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEDHATASS: ZSN_MarineED
	{
		scope = 2;
		displayName = "RPG-7 Assistant";
		backpack = "ZSN_rpg_pack_rpg7";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest03","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest03","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEDSniper: ZSN_MarineED
	{
		scope = 2;
		displayName = "Sniper";
		icon = "iconManRecon";
		weapons[] = {"Throw","Put","ZSN_SVD"};
		respawnWeapons[] = {"Throw","Put","ZSN_SVD"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Ghillie_Top.p3d";
		uniformClass = "CUP_U_O_TK_Ghillie_Top";
		hiddenSelections[] = {"Camo","clan","insignia"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\ghillie_top_klmk_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\W1_tak_soldier.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\W2_tak_soldier.rvmat"};
		};
	};
	class ZSN_MarineEDOfficer: ZSN_MarineED
	{
		scope = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_hgun_Makarov","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_hgun_Makarov","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_ChDKZ_Beret","CUP_V_O_SLA_Flak_Vest03","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_ChDKZ_Beret","CUP_V_O_SLA_Flak_Vest03","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","CUP_H_SLA_Helmet"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","CUP_H_SLA_Helmet"};
	};
	class ZSN_MarineEDNCO: ZSN_MarineED
	{
		scope = 2;
		displayName = "Squad Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","ZSN_WpShell","ZSN_WpShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","ZSN_WpShell","ZSN_WpShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_MarineEDLeader: ZSN_MarineED
	{
		scope = 2;
		displayName = "Team Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_AK74_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74_GL","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKE_GP25_M"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKE_GP25_M"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest02","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest02","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_MarineEDG: ZSN_MarineED
	{
		scope = 2;
		displayName = "Grenadier";
		weapons[] = {"Throw","Put","CUP_arifle_AK74_GL"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74_GL"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEDAT: ZSN_MarineED
	{
		scope = 2;
		displayName = "AT Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Metis"};
		magazines[] = {"CUP_AT13_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_AT13_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEDATAss: ZSN_MarineED
	{
		scope = 2;
		displayName = "AT Assistant";
		backpack = "ZSN_metis_pack";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest03","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest03","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEDAA: ZSN_MarineED
	{
		scope = 2;
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","CUP_launch_Igla"};
		magazines[] = {"CUP_Igla_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_Igla_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet","CUP_V_O_SLA_Flak_Vest01","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEDCrew: ZSN_MarineED
	{
		scope = 2;
		displayName = "Crew";
		icon = "iconMan";
		uniformClass = "CUP_U_O_SLA_Overalls_Tank";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74U","CUP_hgun_Makarov","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74U","CUP_hgun_Makarov","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		Items[] = {"CUP_H_ChDKZ_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		RespawnItems[] = {"CUP_H_ChDKZ_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_SLA_TankerHelmet","CUP_V_CDF_OfficerBelt2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_TankerHelmet","CUP_V_CDF_OfficerBelt2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineEP: ZSN_MarineE
	{
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_Uniform2.p3d";
		hiddenSelections[] = {"camo","camo2","clan","insignia"};
		uniformClass = "ZSN_Uniform_KLMK_2";
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\jacket_2_klmk.paa","\zsn_coldwar_east\smersh_body_klmk.paa"};
	};
	class ZSN_RangerE: O_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_ERangers_ColdWar";
		displayName = "Soldier (Garrison)";
		portrait = "";
		picture = "";
		icon = "iconMan";
		//model = "DiscloseAfghanData\Berezka.p3d";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Soldier1.p3d";
		uniformClass = "ZSN_Uniform_VDV";
		hiddenSelections[] = {"Camo","clan","insignia"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\uniform_vdv.paa"};
		//hiddenSelectionsTextures[] = {"DiscloseAfghanData\N_vdv1.paa","DiscloseAfghanData\n_grove.paa"};
		genericNames = "CUP_Names_RussianMen";
		identityTypes[] = {"Head_Euro","NoGlasses","CUP_D_Language_RU"};
		cost = 200000;
		canDeactivateMines = 0;
		engineer = 1;
		attendant = 0;
		accuracy = 3;
		camouflage = 0.8;
		sensitivity = 2.5;
		threat[] = {1,1,0.8};
		//uniformClass = "CUP_U_O_CHDKZ_Kam_06";
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"CUP_H_RUS_Beret_VDV","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"CUP_H_RUS_Beret_VDV","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ins_bardak.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\W1_ins_bardak.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\W2_ins_bardak.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ins_lopotev.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\w1_ins_lopotev.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\w2_ins_lopotev.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\commander.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\commander_w1.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\commander_w2.rvmat"};
		};
	};
	class ZSN_RangerEAR: ZSN_RangerE
	{
		scope = 2;
		displayName = "LMG Soldier";
		icon = "iconManMG";
		backpack = "ZSN_45rnd_545x39_bag";
		weapons[] = {"Throw","Put","CUP_arifle_RPK74_45"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_RPK74_45"};
		magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEMedic: ZSN_RangerE
	{
		scope = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDriver: ZSN_RangerE
	{
		scope = 2;
		displayName = "Sapper";
		icon = "iconManEngineer";
		backpack = "ZSN_minepack_east";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_CDF_6B3_4_MNT","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_CDF_6B3_4_MNT","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEB: ZSN_RangerE
	{
		scope = 2;
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEMG: ZSN_RangerE
	{
		scope = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_762x54_bandoliers";
		weapons[] = {"Throw","Put","CUP_lmg_PKM"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_PKM"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEMGAss: ZSN_RangerE
	{
		scope = 2;
		displayName = "MG Assistant";
		backpack = "ZSN_762x54_ammobelts";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerELAW: ZSN_RangerE
	{
		scope = 2;
		displayName = "RPG Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_launch_RPG18"};
		magazines[] = {"CUP_RPG18_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_RPG18_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEHAT: ZSN_RangerE
	{
		scope = 2;
		displayName = "RPG-29 Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","zsn_RPG29"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","zsn_RPG29"};
		magazines[] = {"RPG32_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"RPG32_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEHATAss: ZSN_RangerE
	{
		scope = 2;
		displayName = "RPG-29 Assistant";
		backpack = "ZSN_rpg_pack_rpg29";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerESniper: ZSN_RangerE
	{
		scope = 2;
		displayName = "Sniper";
		icon = "iconManRecon";
		weapons[] = {"Throw","Put","ZSN_SVD_wdl"};
		respawnWeapons[] = {"Throw","Put","ZSN_SVD_wdl"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Ghillie_Top.p3d";
		uniformClass = "ZSN_Uniform_KLMK_Ghillie_Top";
		hiddenSelections[] = {"Camo","clan","insignia"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\ghillie_top_klmk_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\W1_tak_soldier.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\W2_tak_soldier.rvmat"};
		};
	};
	class ZSN_RangerEOfficer: ZSN_RangerE
	{
		scope = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_hgun_Makarov","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_hgun_Makarov","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_RUS_Beret_VDV","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_RUS_Beret_VDV","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","CUP_H_RUS_TSH_4_Brown"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","CUP_H_RUS_TSH_4_Brown"};
	};
	class ZSN_RangerENCO: ZSN_RangerE
	{
		scope = 2;
		displayName = "Squad Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","ZSN_WpShell","ZSN_WpShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","ZSN_WpShell","ZSN_WpShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerELeader: ZSN_RangerE
	{
		scope = 2;
		displayName = "Team Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_AK74_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74_GL","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKE_GP25_M"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKE_GP25_M"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_RUS_Smersh_2","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_RUS_Smersh_2","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerEG: ZSN_RangerE
	{
		scope = 2;
		displayName = "Grenadier";
		weapons[] = {"Throw","Put","CUP_arifle_AK74_GL"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74_GL"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEAT: ZSN_RangerE
	{
		scope = 2;
		displayName = "AT Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_launch_Metis"};
		magazines[] = {"CUP_AT13_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_AT13_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEATAss: ZSN_RangerE
	{
		scope = 2;
		displayName = "AT Assistant";
		backpack = "ZSN_metis_pack";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEAA: ZSN_RangerE
	{
		scope = 2;
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_launch_Igla"};
		magazines[] = {"CUP_Igla_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_Igla_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEPilot: ZSN_RangerE
	{
		scope = 2;
		displayName = "Pilot (Helicopter)";
		icon = "iconMan";
		uniformClass = "CUP_U_O_SLA_Overalls_Pilot";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74U"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74U"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		linkedItems[] = {"CUP_H_RUS_ZSH_Shield_Up","CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_RUS_ZSH_Shield_Up","CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class SUD_USSR_Soldier_Pilot: ZSN_SoldierEPilot
	{
		scope = 1;
		displayName = "Pilot";
	};
	class ZSN_RangerED: O_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_ERangersD_ColdWar";
		displayName = "Soldier (Garrison)";
		portrait = "";
		picture = "";
		icon = "iconMan";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Soldier1.p3d";
		//model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_SLA\CUP_SLA_crewman.p3d";
		hiddenSelections[] = {"Camo","clan","insignia"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\desert_vdv.paa"};
		uniformClass = "ZSN_Uniform_VDVDes";
		//uniformClass = "CUP_U_O_Partisan_TTsKO";
		genericNames = "CUP_Names_RussianMen";
		identityTypes[] = {"Head_Euro","NoGlasses","CUP_D_Language_RU"};
		cost = 200000;
		canDeactivateMines = 0;
		engineer = 1;
		attendant = 0;
		accuracy = 3;
		camouflage = 0.8;
		sensitivity = 2.5;
		threat[] = {1,1,0.8};
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"CUP_H_RUS_Beret_VDV","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"CUP_H_RUS_Beret_VDV","Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class ZSN_RangerEDAR: ZSN_RangerED
	{
		scope = 2;
		displayName = "LMG Soldier";
		icon = "iconManMG";
		backpack = "ZSN_45rnd_545x39_bag";
		weapons[] = {"Throw","Put","CUP_arifle_RPK74_45"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_RPK74_45"};
		magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDMedic: ZSN_RangerED
	{
		scope = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDDriver: ZSN_RangerED
	{
		scope = 2;
		displayName = "Sapper";
		icon = "iconManEngineer";
		backpack = "ZSN_minepack_east";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_CDF_6B3_4_DST","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_CDF_6B3_4_DST","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDB: ZSN_RangerED
	{
		scope = 2;
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDMG: ZSN_RangerED
	{
		scope = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_200rnd_762x54_bandoliers";
		weapons[] = {"Throw","Put","CUP_lmg_PKM"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_PKM"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		linkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDMGAss: ZSN_RangerED
	{
		scope = 2;
		displayName = "MG Assistant";
		backpack = "ZSN_762x54_ammobelts";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDLAW: ZSN_RangerED
	{
		scope = 2;
		displayName = "RPG Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_launch_RPG18"};
		magazines[] = {"CUP_RPG18_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_RPG18_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDHAT: ZSN_RangerED
	{
		scope = 2;
		displayName = "RPG-29 Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","zsn_RPG29"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","zsn_RPG29"};
		magazines[] = {"RPG32_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"RPG32_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDHATAss: ZSN_RangerED
	{
		scope = 2;
		displayName = "RPG-29 Assistant";
		backpack = "ZSN_rpg_pack_rpg29";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDSniper: ZSN_RangerED
	{
		scope = 2;
		displayName = "Sniper";
		icon = "iconManRecon";
		weapons[] = {"Throw","Put","ZSN_SVD_des"};
		respawnWeapons[] = {"Throw","Put","ZSN_SVD_des"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Ghillie_Top.p3d";
		uniformClass = "CUP_U_O_TK_Ghillie_Top";
		hiddenSelections[] = {"Camo","clan","insignia"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\ghillie_top_klmk_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\W1_tak_soldier.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\W2_tak_soldier.rvmat"};
		};
	};
	class ZSN_RangerEDOfficer: ZSN_RangerED
	{
		scope = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_hgun_Makarov","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_hgun_Makarov","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","ZSN_WpShell","ZSN_WpShell"};
		linkedItems[] = {"CUP_H_RUS_Beret_VDV","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_RUS_Beret_VDV","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","CUP_H_TK_TankerHelmet"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","CUP_H_TK_TankerHelmet"};
	};
	class ZSN_RangerEDNCO: ZSN_RangerED
	{
		scope = 2;
		displayName = "Squad Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","ZSN_WpShell","ZSN_WpShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M","ZSN_WpShell","ZSN_WpShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerEDLeader: ZSN_RangerED
	{
		scope = 2;
		displayName = "Team Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_AK74_GL","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74_GL","Binocular"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKE_GP25_M"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M","CUP_1Rnd_SMOKE_GP25_M","CUP_1Rnd_SMOKE_GP25_M"};
		linkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_RUS_Smersh_2","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_RUS_Smersh_2","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerEDG: ZSN_RangerED
	{
		scope = 2;
		displayName = "Grenadier";
		weapons[] = {"Throw","Put","CUP_arifle_AK74_GL"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74_GL"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_FlareWhite_GP25_M","CUP_FlareWhite_GP25_M"};
		linkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDAT: ZSN_RangerED
	{
		scope = 2;
		displayName = "AT Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_launch_Metis"};
		magazines[] = {"CUP_AT13_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_AT13_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDATAss: ZSN_RangerED
	{
		scope = 2;
		displayName = "AT Assistant";
		backpack = "ZSN_metis_pack";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","ZSN_Rangefinder"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDAA: ZSN_RangerED
	{
		scope = 2;
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74","CUP_launch_Igla"};
		magazines[] = {"CUP_Igla_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_Igla_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_TankerHelmet","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDPilot: ZSN_RangerED
	{
		scope = 2;
		displayName = "Pilot (Plane)";
		icon = "iconMan";
		uniformClass = "CUP_U_O_SLA_Overalls_Pilot";
		backpack = "B_Parachute";
		weapons[] = {"Throw","Put","CUP_arifle_AKS74U"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS74U"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
		Items[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"Firstaidkit","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		linkedItems[] = {"CUP_H_RUS_ZSH_Shield_Down","CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"CUP_H_RUS_ZSH_Shield_Down","CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerEP: ZSN_RangerED
	{
		uniformClass = "ZSN_Uniform_KLMK_3";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_Uniform1.p3d";
		hiddenSelections[] = {"camo","camo2","clan","insignia"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_east\kam_jacket_klmk.paa","\zsn_coldwar_east\lifcik_body_klmk.paa"};
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
	class CUP_DSHKM_base;
	class CUP_I_DSHKM_TK_GUE;
	class ZSN_M2StaticMGE: CUP_I_DSHKM_TK_GUE
	{
		scopeArsenal = 2;
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "ZSN_EArmy_ColdWar";
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_O_KORD_high_RU.jpg";
	};
	class ZSN_MM2StaticMGE: ZSN_M2StaticMGE
	{
		faction = "ZSN_EMarines_ColdWar";
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
	};
	class ZSN_RM2StaticMGE: ZSN_M2StaticMGE
	{
		faction = "ZSN_ERangers_ColdWar";
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
	};
	class ZSN_M2StaticMGDE: ZSN_M2StaticMGE
	{
		faction = "ZSN_EArmyD_ColdWar";
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
	};
	class ZSN_MM2StaticMGDE: ZSN_M2StaticMGE
	{
		faction = "ZSN_EMarinesD_ColdWar";
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
	};
	class ZSN_RM2StaticMGDE: ZSN_M2StaticMGE
	{
		faction = "ZSN_ERangersD_ColdWar";
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
	};
	class CUP_DSHKM_MiniTripod_base;
	class CUP_I_DSHkM_MiniTriPod_TK_GUE;
	class ZSN_M2LowMGE: CUP_I_DSHkM_MiniTriPod_TK_GUE
	{
		scopeArsenal = 2;
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "ZSN_EArmy_ColdWar";
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_O_KORD_RU.jpg";
	};
	class ZSN_MM2LowMGE: ZSN_M2LowMGE
	{
		faction = "ZSN_EMarines_ColdWar";
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
	};
	class ZSN_RM2LowMGE: ZSN_M2LowMGE
	{
		faction = "ZSN_ERangers_ColdWar";
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
	};
	class ZSN_M2LowMGDE: ZSN_M2LowMGE
	{
		faction = "ZSN_EArmyD_ColdWar";
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
	};
	class ZSN_MM2LowMGDE: ZSN_M2LowMGE
	{
		faction = "ZSN_EMarinesD_ColdWar";
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
	};
	class ZSN_RM2LowMGDE: ZSN_M2LowMGE
	{
		faction = "ZSN_ERangersD_ColdWar";
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
	};
	class StaticGrenadeLauncher;
	class CUP_AGS_base;
	class CUP_O_AGS_RU;
	class ZSN_StaticGMGE: CUP_O_AGS_RU
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 0;
		faction = "ZSN_EArmy_ColdWar";
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_O_AGS_RU.jpg";
	};
	class ZSN_MStaticGMGE: ZSN_StaticGMGE
	{
		faction = "ZSN_EMarines_ColdWar";
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
	};
	class ZSN_RStaticGMGE: ZSN_StaticGMGE
	{
		faction = "ZSN_ERangers_ColdWar";
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
	};
	class ZSN_StaticGMGDE: ZSN_StaticGMGE
	{
		faction = "ZSN_EArmyD_ColdWar";
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
	};
	class ZSN_MStaticGMGDE: ZSN_StaticGMGE
	{
		faction = "ZSN_EMarinesD_ColdWar";
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
	};
	class ZSN_RStaticGMGDE: ZSN_StaticGMGE
	{
		faction = "ZSN_ERangersD_ColdWar";
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
	};
	class StaticATWeapon;
	class CUP_Metis_Base;
	class CUP_O_Metis_RU;
	class ZSN_StaticMetis: CUP_O_Metis_RU
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 0;
		faction = "ZSN_EArmy_ColdWar";
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_O_Metis_RU.jpg";
	};
	class ZSN_MStaticMetis: ZSN_StaticMetis
	{
		faction = "ZSN_EMarines_ColdWar";
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
	};
	class ZSN_RStaticMetis: ZSN_StaticMetis
	{
		faction = "ZSN_ERangers_ColdWar";
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
	};
	class ZSN_StaticMetisD: ZSN_StaticMetis
	{
		faction = "ZSN_EArmyD_ColdWar";
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
	};
	class ZSN_MStaticMetisD: ZSN_StaticMetis
	{
		faction = "ZSN_EMarinesD_ColdWar";
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
	};
	class ZSN_RStaticMetisD: ZSN_StaticMetis
	{
		faction = "ZSN_ERangersD_ColdWar";
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
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
	class ZSN_Static2b14Base: Mortar_01_base_F
	{
		side = 0;
		displayname = "$STR_DN_2B14";
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_O_2b14_82mm_RU.jpg";
		model = "\CUP\Weapons\CUP_Weapons_StaticWeapons\CUP_podnos_2b14_82mm.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_StaticWeapons\data\podnos_2b14_ca.paa";
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
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				cameraDir = "look";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				turretInfoType = "ACE_Mk6_RscWeaponRangeArtillery";
				gunnerForceOptics = 1;
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				minElev = -15;
				maxElev = 35;
				magazines[] = {"8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white"};
			};
		};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"CUP_B_Podnos_Gun_Bag","CUP_B_Podnos_Bipod_Bag"};
			displayName = "";
		};
	};
	class ZSN_Static2b14: ZSN_Static2b14Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
		availableForSupportTypes[] = {"Artillery"};
	};
	class ZSN_MStatic2b14: ZSN_Static2b14Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
		availableForSupportTypes[] = {"Artillery"};
	};
	class ZSN_RStatic2b14: ZSN_Static2b14Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
		faction = "ZSN_ERangers_ColdWar";
		availableForSupportTypes[] = {"Artillery"};
	};
	class ZSN_Static2b14D: ZSN_Static2b14Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		availableForSupportTypes[] = {"Artillery"};
	};
	class ZSN_MStatic2b14D: ZSN_Static2b14Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
		availableForSupportTypes[] = {"Artillery"};
	};
	class ZSN_RStatic2b14D: ZSN_Static2b14Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
		faction = "ZSN_ERangersD_ColdWar";
		availableForSupportTypes[] = {"Artillery"};
	};
};
class CfgUnitInsignia
{
	class ZSN_Soviet_Army
	{
		displayName = "Red Army";
		author = "ZluskeN";
		texture = "\zsn_coldwar_east\army.paa";
		textureVehicle = "";
	};
	class ZSN_Soviet_Marines
	{
		displayName = "Soviet Marines";
		author = "ZluskeN";
		texture = "\zsn_coldwar_east\marines.paa";
		textureVehicle = "";
	};
	class ZSN_Soviet_Airborne
	{
		displayName = "Soviet Airborne";
		author = "ZluskeN";
		texture = "\zsn_coldwar_east\airborne.paa";
		textureVehicle = "";
	};
};
class CfgGroups
{
	class East
	{
		class ZSN_EArmy_ColdWar
		{
			name = "Cold War USSR Army";
			class Infantry
			{
				name = "Infantry";
				class ZSN_EArmy_BasicInfantry
				{
					name = "Infantry Squad";
					faction = "ZSN_EArmy_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_SoldierENCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_SoldierELeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_SoldierELeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_SoldierEAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_SoldierEAR";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "ZSN_SoldierELAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_SoldierELAW";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_SoldierELAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "ZSN_SoldierELAW";
						rank = "Private";
						position[] = {-9,0,0};
					};
				};
				class ZSN_EArmy_PlatoonLead
				{
					name = "Platoon HQ";
					faction = "ZSN_EArmy_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_SoldierEOfficer";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_SoldierENCO";
						rank = "Sergeant";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_SoldierEDriver";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_SoldierEMedic";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_SoldierESniper";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_EArmy_AASquad
				{
					name = "AA Team";
					faction = "ZSN_EArmy_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_SoldierENCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_SoldierEAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_SoldierEAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_SoldierEAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_SoldierEAA";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_EArmy_ATSquad
				{
					name = "AT Team";
					faction = "ZSN_EArmy_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_SoldierENCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_SoldierEAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_SoldierEAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_SoldierEATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_SoldierEATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_EArmy_MGSquad
				{
					name = "MG Team";
					faction = "ZSN_EArmy_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_SoldierENCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_SoldierEMG";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_SoldierEMG";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_SoldierEMGAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_SoldierEMGAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			};
		};
		class ZSN_EMarines_ColdWar
		{
			name = "Cold War USSR Marines";
			class Infantry
			{
				name = "Marine Infantry";
				class ZSN_EMarine_BasicInfantry
				{
					name = "Infantry Squad";
					faction = "ZSN_EMarines_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_MarineENCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_MarineELeader";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_MarineELeader";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_MarineELeader";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_MarineEMG";
						rank = "Private";
						position[] = {0,-2,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "ZSN_MarineEAR";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_MarineEAR";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_MarineELAW";
						rank = "Private";
						position[] = {5,-4,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "ZSN_MarineELAW";
						rank = "Private";
						position[] = {-5,-4,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "ZSN_MarineEMGAss";
						rank = "Private";
						position[] = {0,-4,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "ZSN_MarineELAW";
						rank = "Private";
						position[] = {5,-6,0};
					};
					class Unit11
					{
						side = 0;
						vehicle = "ZSN_MarineELAW";
						rank = "Private";
						position[] = {-5,-6,0};
					};
					class Unit12
					{
						side = 0;
						vehicle = "ZSN_MarineEMGAss";
						rank = "Private";
						position[] = {0,-6,0};
					};
				};
				class ZSN_EMarine_PlatoonLead
				{
					name = "Platoon HQ";
					faction = "ZSN_EMarines_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_MarineEOfficer";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_MarineENCO";
						rank = "Sergeant";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_MarineEDriver";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_MarineEMedic";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_MarineESniper";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_EMarine_ATSquad
				{
					name = "AT Team";
					faction = "ZSN_EMarines_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_MarineENCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_MarineEAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_MarineEAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_MarineEATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_MarineEATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_EMarine_RPGSquad
				{
					name = "RPG Team";
					faction = "ZSN_EMarines_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_MarineENCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_MarineEHAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_MarineEHAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_MarineEHATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_MarineEHATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_EMarine_AASquad
				{
					name = "AA Team";
					faction = "ZSN_EMarines_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_MarineENCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_MarineEAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_MarineEAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_MarineEAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_MarineEAA";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			};
		};
		class ZSN_ERangers_ColdWar
		{
			name = "Cold War USSR Airborne";
			class Infantry
			{
				name = "Airborne Infantry";
				class ZSN_ERanger_BasicInfantry
				{
					name = "Infantry Squad";
					faction = "ZSN_ERangers_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_RangerENCO";
						rank = "Sergeant";
						position[] = {-3,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_RangerELeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_RangerEMG";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_RangerEAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_RangerEMGAss";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "ZSN_RangerEHAT";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_RangerELAW";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_RangerEHATAss";
						rank = "Private";
						position[] = {9,0,0};
					};
				};
				class ZSN_ERanger_PlatoonLead
				{
					name = "Platoon HQ";
					faction = "ZSN_ERangers_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_RangerEOfficer";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_RangerENCO";
						rank = "Sergeant";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_RangerEDriver";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_RangerEMedic";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_RangerESniper";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_ERanger_ATSquad
				{
					name = "AT Team";
					faction = "ZSN_ERangers_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_RangerENCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_RangerEAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_RangerEAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_RangerEATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_RangerEATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_ERanger_AASquad
				{
					name = "AA Team";
					faction = "ZSN_ERangers_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_RangerENCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_RangerEAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_RangerEAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_RangerEAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_RangerEAA";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			};
		};
		class ZSN_EArmyD_ColdWar
		{
			name = "Cold War USSR Army (Desert)";
			class Infantry
			{
				name = "Infantry";
				class ZSN_EArmyD_BasicInfantry
				{
					name = "Infantry Squad";
					faction = "ZSN_EArmyD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_SoldierEDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_SoldierEDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_SoldierEDLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_SoldierEDAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_SoldierEDAR";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "ZSN_SoldierEDLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_SoldierEDLAW";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_SoldierEDLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "ZSN_SoldierEDLAW";
						rank = "Private";
						position[] = {-9,0,0};
					};
				};
				class ZSN_EArmyD_PlatoonLead
				{
					name = "Platoon HQ";
					faction = "ZSN_EArmyD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_SoldierEDOfficer";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_SoldierEDNCO";
						rank = "Sergeant";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_SoldierEDDriver";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_SoldierEDMedic";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_SoldierEDSniper";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_EArmyD_AASquad
				{
					name = "AA Team";
					faction = "ZSN_EArmyD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_SoldierEDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_SoldierEDAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_SoldierEDAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_SoldierEDAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_SoldierEDAA";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_EArmyD_ATSquad
				{
					name = "AT Team";
					faction = "ZSN_EArmyD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_SoldierEDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_SoldierEDAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_SoldierEDAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_SoldierEDATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_SoldierEDATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_EArmyD_MGSquad
				{
					name = "MG Team";
					faction = "ZSN_EArmyD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_SoldierEDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_SoldierEDMG";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_SoldierEDMG";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_SoldierEDMGAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_SoldierEDMGAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			};
		};
		class ZSN_EMarinesD_ColdWar
		{
			name = "Cold War USSR Marines (Desert)";
			class Infantry
			{
				name = "Marine Infantry";
				class ZSN_EMarineD_BasicInfantry
				{
					name = "Infantry Squad";
					faction = "ZSN_EMarinesD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_MarineEDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_MarineEDLeader";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_MarineEDLeader";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_MarineEDLeader";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_MarineEDMG";
						rank = "Private";
						position[] = {0,-2,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "ZSN_MarineEDAR";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_MarineEDAR";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_MarineEDLAW";
						rank = "Private";
						position[] = {5,-4,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "ZSN_MarineEDLAW";
						rank = "Private";
						position[] = {-5,-4,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "ZSN_MarineEDMGAss";
						rank = "Private";
						position[] = {0,-4,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "ZSN_MarineEDLAW";
						rank = "Private";
						position[] = {5,-6,0};
					};
					class Unit11
					{
						side = 0;
						vehicle = "ZSN_MarineEDLAW";
						rank = "Private";
						position[] = {-5,-6,0};
					};
					class Unit12
					{
						side = 0;
						vehicle = "ZSN_MarineEDMGAss";
						rank = "Private";
						position[] = {0,-6,0};
					};
				};
				class ZSN_EMarineD_PlatoonLead
				{
					name = "Platoon HQ";
					faction = "ZSN_EMarinesD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_MarineEDOfficer";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_MarineEDNCO";
						rank = "Sergeant";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_MarineEDDriver";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_MarineEDMedic";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_MarineEDSniper";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_EMarineD_ATSquad
				{
					name = "AT Team";
					faction = "ZSN_EMarinesD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_MarineEDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_MarineEDAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_MarineEDAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_MarineEDATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_MarineEDATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_EMarineD_RPGSquad
				{
					name = "RPG Team";
					faction = "ZSN_EMarinesD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_MarineEDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_MarineEDHAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_MarineEDHAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_MarineEDHATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_MarineEDHATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_EMarineD_AASquad
				{
					name = "AA Team";
					faction = "ZSN_EMarinesD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_MarineEDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_MarineEDAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_MarineEDAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_MarineEDAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_MarineEDAA";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			};
		};
		class ZSN_ERangersD_ColdWar
		{
			name = "Cold War USSR Airborne (Desert)";
			class Infantry
			{
				name = "Airborne Infantry";
				class ZSN_ERangerD_BasicInfantry
				{
					name = "Infantry Squad";
					faction = "ZSN_ERangersD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_RangerEDNCO";
						rank = "Sergeant";
						position[] = {-3,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_RangerEDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_RangerEDMG";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_RangerEDAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_RangerEDMGAss";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "ZSN_RangerEDHAT";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_RangerEDLAW";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_RangerEDHATAss";
						rank = "Private";
						position[] = {9,0,0};
					};
				};
				class ZSN_ERangerD_PlatoonLead
				{
					name = "Platoon HQ";
					faction = "ZSN_ERangersD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_RangerEDOfficer";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_RangerEDNCO";
						rank = "Sergeant";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_RangerEDDriver";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_RangerEDMedic";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_RangerEDSniper";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_ERangerD_ATSquad
				{
					name = "AT Team";
					faction = "ZSN_ERangersD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_RangerEDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_RangerEDAT";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_RangerEDAT";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_RangerEDATAss";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_RangerEDATAss";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
				class ZSN_ERangerD_AASquad
				{
					name = "AA Team";
					faction = "ZSN_ERangersD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_RangerEDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_RangerEDAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_RangerEDAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_RangerEDAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_RangerEDAA";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
				};
			};
		};
	};
};
//};
