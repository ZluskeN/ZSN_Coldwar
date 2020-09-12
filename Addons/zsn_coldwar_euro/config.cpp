////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Wed May 31 10:56:42 2017 : Created on Wed May 31 10:56:42 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_euro : config.bin{
class CfgPatches
{
	class ZSN_ColdWarEuro
	{
		author = "ZluskeN";
		units[] = {"ZSN_EurosolW","ZSN_EurosolWMedic","ZSN_EurosolWB","ZSN_EurosolWSniper","ZSN_EurosolWMG","ZSN_EurosolWMGAss","ZSN_EurosolWAA","ZSN_EurosolWLAW","ZSN_EurosolWLAWAss","ZSN_EurosolWLeader","ZSN_EurosolWcrew","ZSN_EurosolWPilot","ZSN_EurosolWD","ZSN_EurosolWDMedic","ZSN_EurosolWDB","ZSN_EurosolWDSniper","ZSN_EurosolWDMG","ZSN_EurosolWDMGAss","ZSN_EurosolWDAA","ZSN_EurosolWDLAW","ZSN_EurosolWDLAWAss","ZSN_EurosolWDLeader","ZSN_EurosolWDcrew","ZSN_EurosolWDPilot","ZSN_EurosolE","ZSN_EurosolEMedic","ZSN_EurosolEB","ZSN_EurosolESniper","ZSN_EurosolEMG","ZSN_EurosolEMGAss","ZSN_EurosolEAA","ZSN_EurosolELAW","ZSN_EurosolELAWAss","ZSN_EurosolELeader","ZSN_EurosolECrew","ZSN_EurosolEPilot","ZSN_EurosolED","ZSN_EurosolEDMedic","ZSN_EurosolEDB","ZSN_EurosolEDSniper","ZSN_EurosolEDMG","ZSN_EurosolEDMGAss","ZSN_EurosolEDAA","ZSN_EurosolEDLAW","ZSN_EurosolEDLAWAss","ZSN_EurosolEDLeader","ZSN_EurosolEDCrew","ZSN_EurosolEDPilot","ZSN_EurosolG","ZSN_EurosolGB","ZSN_EurosolGSniper","ZSN_EurosolGMG","ZSN_EurosolGLAW","ZSN_EurosolGLAWAss","ZSN_EurosolGLeader","ZSN_EurosolGCrew","ZSN_EurosolGPilot","ZSN_EurosolGD","ZSN_EurosolGDB","ZSN_EurosolGDSniper","ZSN_EurosolGDMG","ZSN_EurosolGDLAW","ZSN_EurosolGDLAWAss","ZSN_EurosolGDLeader","ZSN_EurosolGDCrew","ZSN_EurosolGDPilot","ZSN_BAF_M2StaticMG","ZSN_BAF_M2StaticMGD","ZSN_CSLA_M2StaticMGE","ZSN_CSLA_M2StaticMGDE","ZSN_GUER_M2StaticMGG","ZSN_GUER_M2StaticMGDE","ZSN_BAF_M2LowMG","ZSN_BAF_M2LowMGD","ZSN_CSLA_M2LowMGE","ZSN_CSLA_M2LowMGDE","ZSN_GUER_M2LowMGG","ZSN_GUER_M2LowMGDG","ZSN_BAF_staticL16A2","ZSN_BAF_staticL16A2D","ZSN_CSLA_Static2b14","ZSN_CSLA_Static2b14D","ZSN_GUER_StaticSPG9","ZSN_GUER_StaticSPG9D","ZSN_CSLA_D30","ZSN_CSLA_D30D","ZSN_BAF_M119","ZSN_BAF_M119D","ZSN_GUER_StaticZU23","ZSN_GUER_StaticZU23D"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarunits"};
		magazines[] = {};
	};
};
class cfgFactionClasses
{
	class ZSN_WEuro_ColdWar
	{
		displayName = "Cold War NATO";
		backpack_tf_faction_radio = "tf_rt1523g";
		personal_tf_faction_radio = "tf_anprc152";
		airborne_tf_faction_radio = "tf_anarc164";
		flag = "\zsn_coldwar_euro\NATO.paa";
		priority = 1;
		side = 1;
	};
	class ZSN_WEuroD_ColdWar
	{
		displayName = "Cold War NATO (Desert)";
		backpack_tf_faction_radio = "tf_rt1523g";
		personal_tf_faction_radio = "tf_anprc152";
		airborne_tf_faction_radio = "tf_anarc164";
		flag = "\zsn_coldwar_euro\NATO.paa";
		priority = 1;
		side = 1;
	};
	class ZSN_EEuro_ColdWar
	{
		displayName = "Cold War PACT";
		backpack_tf_faction_radio = "tf_mr3000";
		personal_tf_faction_radio = "tf_fadak";
		airborne_tf_faction_radio = "tf_anarc164";
		flag = "\zsn_coldwar_euro\WarsawPact.paa";
		priority = 1;
		side = 0;
	};
	class ZSN_EEuroD_ColdWar
	{
		displayName = "Cold War PACT (Desert)";
		backpack_tf_faction_radio = "tf_mr3000";
		personal_tf_faction_radio = "tf_fadak";
		airborne_tf_faction_radio = "tf_anarc164";
		flag = "\zsn_coldwar_euro\WarsawPact.paa";
		priority = 1;
		side = 0;
	};
	class ZSN_GEuro_ColdWar
	{
		displayName = "Cold War Guerilla";
		personal_tf_faction_radio = "tf_anprc154";
		flag = "\zsn_coldwar_euro\FIA.paa";
		priority = 1;
		side = 2;
	};
	class ZSN_GEuroD_ColdWar
	{
		displayName = "Cold War Guerilla (Desert)";
		personal_tf_faction_radio = "tf_anprc148jem";
		flag = "\zsn_coldwar_euro\FIABlack.paa";
		priority = 1;
		side = 2;
	};
	class ZSN_WGer_ColdWar
	{
		displayName = "Cold War FRG";
		backpack_tf_faction_radio = "tf_rt1523g_bwmod";
		personal_tf_faction_radio = "tf_rf7800str";
		airborne_tf_faction_radio = "tf_anarc210";
		flag = "\zsn_coldwar_euro\Germany.paa";
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
	class ZSN_U_I_TK_MixedCamo: ItemCore
	{
		author = "ZluskeN";
		dlc = "CUP_Units";
		scope = 1;
		allowedSlots[] = {901};
		displayName = "Takistani Uniform (Mixed)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_u_o_tk_mixed_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ZSN_EurosolGD";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	// class ZSN_Smock: ItemCore
	// {
		// author = "ZluskeN";
		// dlc = "CUP_Units";
		// scope = 2;
		// allowedSlots[] = {901};
		// displayName = "Smock DPM";
		// picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ui\icon_u_o_kam_6_ca.paa";
		// model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		// class ItemInfo: UniformItem
		// {
			// uniformModel = "-";
			// uniformClass = "ZSN_EurosolW";
			// containerClass = "Supply40";
			// mass = 20;
		// };
	// };
	// class ZSN_SmockD: ItemCore
	// {
		// author = "ZluskeN";
		// dlc = "CUP_Units";
		// scope = 2;
		// allowedSlots[] = {901};
		// displayName = "Smock Desert";
		// picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ui\icon_u_o_kam_6_ca.paa";
		// model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		// class ItemInfo: UniformItem
		// {
			// uniformModel = "-";
			// uniformClass = "ZSN_EurosolWD";
			// containerClass = "Supply40";
			// mass = 20;
		// };
	// };
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class ZSN_EurosolW: B_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_WEuro_ColdWar";
		displayName = "Soldier (Garrison)";
		icon = "iconMan";
		genericNames = "EnglishMen";
		identityTypes[] = {"LanguageENGB_F","NoGlasses","Head_NATO"};
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","ZSN_L1A1"};
		respawnWeapons[] = {"Throw","Put","ZSN_L1A1"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"CUP_H_BAF_Officer_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"CUP_H_BAF_Officer_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"CUP_H_BAF_Officer_Beret","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Officer_Beret","ItemMap","ItemCompass","ItemWatch"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_Uniform2.p3d";
		hiddenSelections[] = {"camo","camo2","clan","insignia"};
		uniformClass = "CUP_U_B_BDUv2_dirty_DPM";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\smog_jacket_2_co.paa","\zsn_coldwar_euro\Smock_body.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ins_bardak.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\W1_ins_bardak.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\W2_ins_bardak.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ins_lopotev.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\w1_ins_lopotev.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\w2_ins_lopotev.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\commander.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\commander_w1.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\commander_w2.rvmat"};
		};
	};
	class ZSN_EurosolWMedic: ZSN_EurosolW
	{
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWB: ZSN_EurosolW
	{
		displayName = "Soldier";
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWSniper: ZSN_EurosolW
	{
		displayName = "Sniper";
		weapons[] = {"Throw","Put","CUP_srifle_LeeEnfield_T"};
		respawnWeapons[] = {"Throw","Put","CUP_srifle_LeeEnfield_T"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWMG: ZSN_EurosolW
	{
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_BAF_200rnd_762x51_bandoliers";
		weapons[] = {"Throw","Put","CUP_lmg_L7A2_flat"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_L7A2_flat"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWMGAss: ZSN_EurosolW
	{
		displayName = "MG Assistant";
		backpack = "ZSN_BAF_762x51_ammobelts";
		weapons[] = {"Throw","Put","ZSN_L1A1","Binocular"};
		respawnWeapons[] = {"Throw","Put","ZSN_L1A1","Binocular"};
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWAA: ZSN_EurosolW
	{
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","ZSN_L1A1","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","ZSN_L1A1","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_Stinger_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWLAW: ZSN_EurosolW
	{
		displayName = "Gustav Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","ZSN_L1A1","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","ZSN_L1A1","CUP_launch_MAAWS"};
		magazines[] = {"CUP_MAAWS_HEAT_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_MAAWS_HEAT_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWLAWAss: ZSN_Eurosolw
	{
		displayName = "Gustav Assistant";
		backpack = "ZSN_baf_alice_Gustav";
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWLeader: ZSN_EurosolW
	{
		displayName = "Section Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","ZSN_L1A1","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","ZSN_L1A1","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_3_Brown","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B","CUP_V_B_GER_Carrier_Rig_3_Brown","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_EurosolWcrew: ZSN_EurosolW
	{
		displayName = "Crew";
		icon = "iconManEngineer";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_uniforms\pcs_ubacs\pcs_ubacs_tshirt.p3d";
		uniformClass = "CUP_U_B_BAF_DPM_Tshirt";
		hiddenSelections[] = {"Camo","Camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_uniforms\pcs_ubacs\data\DPM\body_co.paa","","CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_uniforms\pcs_ubacs\data\DPM\top3_co.paa"};
		weapons[] = {"Throw","Put","CUP_hgun_Browning_HP","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_Browning_HP","Binocular"};
		magazines[] = {"CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP"};
		respawnMagazines[] = {"CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP"};
		Items[] = {"CUP_H_BAF_Officer_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		RespawnItems[] = {"CUP_H_BAF_Officer_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_BAF_Crew_Helmet_DPM","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Crew_Helmet_DPM","CUP_V_B_GER_Carrier_Rig_2_Brown","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWPilot: ZSN_EurosolW
	{
		displayName = "Pilot";
		icon = "iconManEngineer";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_uniforms\pcs_ubacs\pcs_ubacs_tshirt.p3d";
		uniformClass = "CUP_U_B_BAF_DPM_Tshirt";
		hiddenSelections[] = {"Camo","Camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_uniforms\pcs_ubacs\data\DPM\body_co.paa","","CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_uniforms\pcs_ubacs\data\DPM\top3_co.paa"};
		weapons[] = {"Throw","Put","CUP_hgun_Browning_HP"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_L85A2"};
		magazines[] = {"CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP"};
		respawnMagazines[] = {"CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP"};
		Items[] = {"CUP_H_BAF_Officer_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		RespawnItems[] = {"CUP_H_BAF_Officer_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_USMC_Helmet_Pilot","CUP_V_B_GER_Carrier_Rig_3_Brown","ItemRadio","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USMC_Helmet_Pilot","CUP_V_B_GER_Carrier_Rig_3_Brown","ItemRadio","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWD: B_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_WEuroD_ColdWar";
		displayName = "Soldier (Garrison)";
		icon = "iconMan";
		genericNames = "EnglishMen";
		identityTypes[] = {"LanguageENGB_F","NoGlasses","Head_NATO"};
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","ZSN_L1A1"};
		respawnWeapons[] = {"Throw","Put","ZSN_L1A1"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"CUP_H_BAF_Officer_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"CUP_H_BAF_Officer_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"CUP_H_BAF_Officer_Beret","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Officer_Beret","ItemMap","ItemCompass","ItemWatch"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_Uniform2.p3d";
		hiddenSelections[] = {"camo","camo2","clan","insignia"};
		uniformClass = "CUP_U_B_BDUv2_roll_dirty_DDPM";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\smog_jacket_2_co.paa","\zsn_coldwar_euro\Smock_body_desert.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ins_bardak.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\W1_ins_bardak.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\W2_ins_bardak.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ins_lopotev.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\w1_ins_lopotev.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\w2_ins_lopotev.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\commander.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\commander_w1.rvmat","CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\commander_w2.rvmat"};
		};
	};
	class ZSN_EurosolWDMedic: ZSN_EurosolWD
	{
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDB: ZSN_EurosolWD
	{
		displayName = "Soldier";
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDSniper: ZSN_EurosolWD
	{
		displayName = "Sniper";
		weapons[] = {"Throw","Put","CUP_srifle_LeeEnfield_T"};
		respawnWeapons[] = {"Throw","Put","CUP_srifle_LeeEnfield_T"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDMG: ZSN_EurosolWD
	{
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_BAF_200rnd_762x51_bandoliers";
		weapons[] = {"Throw","Put","CUP_lmg_L7A2_flat"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_L7A2_flat"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDMGAss: ZSN_EurosolWD
	{
		displayName = "MG Assistant";
		backpack = "ZSN_BAF_762x51_ammobelts";
		weapons[] = {"Throw","Put","ZSN_L1A1","Binocular"};
		respawnWeapons[] = {"Throw","Put","ZSN_L1A1","Binocular"};
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDAA: ZSN_EurosolWD
	{
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","ZSN_L1A1","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","ZSN_L1A1","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_Stinger_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDLAW: ZSN_EurosolWD
	{
		displayName = "Gustav Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","ZSN_L1A1","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","ZSN_L1A1","CUP_launch_MAAWS"};
		magazines[] = {"CUP_MAAWS_HEAT_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_MAAWS_HEAT_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDLAWAss: ZSN_EurosolwD
	{
		displayName = "Gustav Assistant";
		backpack = "ZSN_baf_alice_Gustav";
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDLeader: ZSN_EurosolWD
	{
		displayName = "Section Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","ZSN_L1A1","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","ZSN_L1A1","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_3","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A","CUP_V_I_RACS_Carrier_Rig_3","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_EurosolWDcrew: ZSN_EurosolWD
	{
		displayName = "Crew";
		icon = "iconManEngineer";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_uniforms\pcs_ubacs\pcs_ubacs_tshirtknee.p3d";
		uniformClass = "CUP_U_B_BAF_DDPM_Tshirt";
		hiddenSelections[] = {"Camo","Camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_uniforms\pcs_ubacs\data\DDPM\body_co.paa","","CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_uniforms\pcs_ubacs\data\DDPM\top3_co.paa"};
		weapons[] = {"Throw","Put","CUP_hgun_Browning_HP","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_Browning_HP","Binocular"};
		magazines[] = {"CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP"};
		respawnMagazines[] = {"CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP"};
		Items[] = {"CUP_H_BAF_Officer_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		RespawnItems[] = {"CUP_H_BAF_Officer_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_BAF_Crew_Helmet_DDPM","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Crew_Helmet_DDPM","CUP_V_I_RACS_Carrier_Rig_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDPilot: ZSN_EurosolWD
	{
		displayName = "Pilot";
		icon = "iconManEngineer";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_uniforms\pcs_ubacs\pcs_ubacs_tshirtknee.p3d";
		uniformClass = "CUP_U_B_BAF_DDPM_Tshirt";
		hiddenSelections[] = {"Camo","Camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_uniforms\pcs_ubacs\data\DDPM\body_co.paa","","CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_uniforms\pcs_ubacs\data\DDPM\top3_co.paa"};
		weapons[] = {"Throw","Put","CUP_hgun_Browning_HP"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_Browning_HP"};
		magazines[] = {"CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP"};
		respawnMagazines[] = {"CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP","CUP_13Rnd_9x19_Browning_HP"};
		Items[] = {"CUP_H_BAF_Officer_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		RespawnItems[] = {"CUP_H_BAF_Officer_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_TK_PilotHelmet","CUP_V_I_RACS_Carrier_Rig_3","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_TK_PilotHelmet","CUP_V_I_RACS_Carrier_Rig_3","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_soldier_base_F;
	class ZSN_EurosolE: O_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_EEuro_ColdWar";
		displayName = "Soldier (Garrison)";
		genericNames = "CUP_Names_CzechMen";
		identityTypes[] = {"Head_Euro","NoGlasses","CUP_D_Language_CZ_ACR"};
		uniformClass = "CUP_U_O_SLA_Green";
		icon = "iconMan";
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_Sa58P"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_Sa58P"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"CUP_H_SLA_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"CUP_H_SLA_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"CUP_H_SLA_Beret","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Beret","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEMedic: ZSN_EurosolE
	{
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEB: ZSN_EurosolE
	{
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolESniper: ZSN_EurosolE
	{
		displayName = "Sniper";
		weapons[] = {"Throw","Put","CUP_srifle_SVD_pso"};
		respawnWeapons[] = {"Throw","Put","CUP_srifle_SVD_pso"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEMG: ZSN_EurosolE
	{
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_CSLA_200rnd_762x54_bandoliers";
		weapons[] = {"Throw","Put","CUP_lmg_UK59"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_UK59"};
		magazines[] = {"CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer"};
		respawnmagazines[] = {"CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer"};
		linkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEMGAss: ZSN_EurosolE
	{
		displayName = "MG Assistant";
		backpack = "ZSN_CSLA_762x54_ammobelts";
		weapons[] = {"Throw","Put","CUP_arifle_Sa58P","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_Sa58P","Binocular"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEAA: ZSN_EurosolE
	{
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_Sa58P","CUP_launch_9K32Strela"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_Sa58P","CUP_launch_9K32Strela"};
		magazines[] = {"CUP_Strela_2_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_Strela_2_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolELAW: ZSN_EurosolE
	{
		displayName = "RPG-7 Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_Sa58P","CUP_launch_RPG7V"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_Sa58P","CUP_launch_RPG7V"};
		magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolELAWAss: ZSN_EurosolE
	{
		displayName = "RPG-7 Assistant";
		backpack = "ZSN_csla_rpg_pack_rpg7";
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolELeader: ZSN_EurosolE
	{
		displayName = "Section Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_Sa58P","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_Sa58P","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_TK_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_EurosolECrew: ZSN_EurosolE
	{
		displayName = "Crew";
		icon = "iconManEngineer";
		weapons[] = {"Throw","Put","CUP_hgun_CZ75","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_CZ75","Binocular"};
		magazines[] = {"CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75"};
		Items[] = {"CUP_H_SLA_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		RespawnItems[] = {"CUP_H_SLA_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_SLA_TankerHelmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_TankerHelmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEPilot: ZSN_EurosolE
	{
		displayName = "Pilot";
		icon = "iconManEngineer";
		weapons[] = {"Throw","Put","CUP_hgun_CZ75"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_CZ75"};
		magazines[] = {"CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75"};
		Items[] = {"CUP_H_SLA_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		RespawnItems[] = {"CUP_H_SLA_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_SLA_Pilot_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_SLA_Pilot_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_EurosolED: O_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_EEuroD_ColdWar";
		displayName = "Soldier (Garrison)";
		icon = "iconMan";
		genericNames = "TakistaniMen";
		identityTypes[] = {"Head_TK","NoGlasses","LanguagePER_F"};
		uniformClass = "CUP_U_O_TK_Green";
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_Sa58P_des"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_Sa58P_des"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"CUP_H_TK_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"CUP_H_TK_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"CUP_H_TK_Beret","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_Beret","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEDMedic: ZSN_EurosolED
	{
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEDB: ZSN_EurosolED
	{
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEDSniper: ZSN_EurosolED
	{
		displayName = "Sniper";
		weapons[] = {"Throw","Put","CUP_srifle_SVD_pso"};
		respawnWeapons[] = {"Throw","Put","CUP_srifle_SVD_pso"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEDMG: ZSN_EurosolED
	{
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_CSLA_200rnd_762x54_bandoliers";
		weapons[] = {"Throw","Put","CUP_lmg_UK59"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_UK59"};
		magazines[] = {"CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer"};
		respawnmagazines[] = {"CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer"};
		linkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEDMGAss: ZSN_EurosolED
	{
		displayName = "MG Assistant";
		backpack = "ZSN_CSLA_762x54_ammobelts";
		weapons[] = {"Throw","Put","CUP_arifle_Sa58P_des","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_Sa58P_des","Binocular"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEDAA: ZSN_EurosolED
	{
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_Sa58P_des","CUP_launch_9K32Strela"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_Sa58P_des","CUP_launch_9K32Strela"};
		magazines[] = {"CUP_Strela_2_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_Strela_2_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEDLAW: ZSN_EurosolED
	{
		displayName = "RPG-7 Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_Sa58P_des","CUP_launch_RPG7V"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_Sa58P_des","CUP_launch_RPG7V"};
		magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEDLAWAss: ZSN_EurosolED
	{
		displayName = "RPG-7 Assistant";
		backpack = "ZSN_csla_rpg_pack_rpg7";
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEDLeader: ZSN_EurosolED
	{
		displayName = "Section Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_Sa58P_des","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_Sa58P_des","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_SLA_Helmet_DES","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_EurosolEDCrew: ZSN_EurosolED
	{
		displayName = "Crew";
		icon = "iconManEngineer";
		weapons[] = {"Throw","Put","CUP_hgun_CZ75","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_CZ75","Binocular"};
		magazines[] = {"CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75"};
		Items[] = {"CUP_H_TK_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		RespawnItems[] = {"CUP_H_TK_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_SLA_TankerHelmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_SLA_TankerHelmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolEDPilot: ZSN_EurosolED
	{
		displayName = "Pilot";
		icon = "iconManEngineer";
		weapons[] = {"Throw","Put","CUP_hgun_CZ75"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_CZ75"};
		magazines[] = {"CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75"};
		Items[] = {"CUP_H_TK_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		RespawnItems[] = {"CUP_H_TK_Beret","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_SLA_Pilot_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_SLA_Pilot_Helmet","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_G_soldier_base_F;
	class ZSN_EurosolG: I_G_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 1;
		scopeCurator = 1;
		faction = "ZSN_GEuro_ColdWar";
		displayName = "Soldier (Camp)";
		icon = "iconMan";
		genericNames = "CUP_Names_CzechMen";
		identityTypes[] = {"Head_Euro","NoGlasses","CUP_D_Language_CZ_ACR","LanguageGRE_F"};
		uniformClass = "CUP_U_I_GUE_Woodland1";
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_AK47"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK47"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"CUP_H_ChDKZ_Cap","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		RespawnItems[] = {"CUP_H_ChDKZ_Cap","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolGB: ZSN_EurosolG
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_C_Ushanka_04","CUP_V_OI_TKI_Jacket3_04","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_C_Ushanka_04","CUP_V_OI_TKI_Jacket3_04","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolGSniper: ZSN_EurosolG
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Sniper";
		weapons[] = {"Throw","Put","CUP_srifle_Mosin_Nagant_PEM","CUP_hgun_TT"};
		respawnWeapons[] = {"Throw","Put","CUP_srifle_Mosin_Nagant_PEM","CUP_hgun_TT"};
		magazines[] = {"CUP_8Rnd_762x25_TT","CUP_8Rnd_762x25_TT","CUP_8Rnd_762x25_TT","CUP_8Rnd_762x25_TT","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_8Rnd_762x25_TT","CUP_8Rnd_762x25_TT","CUP_8Rnd_762x25_TT","CUP_8Rnd_762x25_TT","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_C_Ushanka_04","CUP_V_OI_TKI_Jacket2_02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_C_Ushanka_04","CUP_V_OI_TKI_Jacket2_02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolGMG: ZSN_EurosolG
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		weapons[] = {"Throw","Put","CUP_arifle_RPK74"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_RPK74"};
		magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_C_Ushanka_04","CUP_V_OI_TKI_Jacket2_02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_C_Ushanka_04","CUP_V_OI_TKI_Jacket2_02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolGLAW: ZSN_EurosolG
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "RPG-7 Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK47","launch_RPG7_F"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK47","launch_RPG7_F"};
		magazines[] = {"CUP_PG7VM_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_PG7VM_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_C_Ushanka_04","CUP_V_OI_TKI_Jacket3_04","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_C_Ushanka_04","CUP_V_OI_TKI_Jacket3_04","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolGLAWAss: ZSN_EurosolG
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "RPG-7 Assistant";
		backpack = "ZSN_guer_rpg_pack_rpg7";
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_C_Ushanka_04","CUP_V_OI_TKI_Jacket2_02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_C_Ushanka_04","CUP_V_OI_TKI_Jacket2_02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolGLeader: ZSN_EurosolG
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Cell Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_AK47","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK47","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"CUP_H_C_Ushanka_04","CUP_V_OI_TKI_Jacket3_04","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_C_Ushanka_04","CUP_V_OI_TKI_Jacket3_04","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_EurosolGCrew: ZSN_EurosolG
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "Crew";
		icon = "iconManEngineer";
		weapons[] = {"Throw","Put","CUP_arifle_AKS","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS","Binocular"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		linkedItems[] = {"CUP_H_PMC_PRR_Headset","CUP_V_OI_TKI_Jacket3_04","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PMC_PRR_Headset","CUP_V_OI_TKI_Jacket3_04","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolGPilot: ZSN_EurosolG
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "Pilot";
		icon = "iconManEngineer";
		weapons[] = {"Throw","Put","CUP_arifle_AKS","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS","Binocular"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		linkedItems[] = {"CUP_H_PMC_EP_Headset","CUP_V_OI_TKI_Jacket3_04","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_PMC_EP_Headset","CUP_V_OI_TKI_Jacket3_04","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_EurosolGD: I_G_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 1;
		scopeCurator = 1;
		faction = "ZSN_GEuroD_ColdWar";
		displayName = "Soldier (Camp)";
		icon = "iconMan";
		genericNames = "TakistaniMen";
		identityTypes[] = {"Head_TK","NoGlasses","LanguagePER_F","G_IRAN_default"};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_Soldier2.p3d";
		uniformClass = "ZSN_U_I_TK_MixedCamo";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_mixed_co.paa"};
		canCarryBackPack = 1;
		backpack = "";
		weapons[] = {"Throw","Put","CUP_arifle_AK47"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK47"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"H_Booniehat_tan","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		RespawnItems[] = {"H_Booniehat_tan","Firstaidkit","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolGDB: ZSN_EurosolGD
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Soldier";
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_TK_Lungee","CUP_V_OI_TKI_Jacket2_04","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_Lungee","CUP_V_OI_TKI_Jacket2_04","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolGDSniper: ZSN_EurosolGD
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Sniper";
		weapons[] = {"Throw","Put","CUP_srifle_Mosin_Nagant_PEM","CUP_hgun_TT"};
		respawnWeapons[] = {"Throw","Put","CUP_srifle_Mosin_Nagant_PEM","CUP_hgun_TT"};
		magazines[] = {"CUP_8Rnd_762x25_TT","CUP_8Rnd_762x25_TT","CUP_8Rnd_762x25_TT","CUP_8Rnd_762x25_TT","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"CUP_8Rnd_762x25_TT","CUP_8Rnd_762x25_TT","CUP_8Rnd_762x25_TT","CUP_8Rnd_762x25_TT","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M","zsn_wpshell","zsn_wpshell"};
		linkedItems[] = {"CUP_H_TK_Lungee","CUP_V_OI_TKI_Jacket3_02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_Lungee","CUP_V_OI_TKI_Jacket3_02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolGDMG: ZSN_EurosolGD
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		weapons[] = {"Throw","Put","CUP_arifle_RPK74"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_RPK74"};
		magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_TK_Lungee","CUP_V_OI_TKI_Jacket3_02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_Lungee","CUP_V_OI_TKI_Jacket3_02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolGDLAW: ZSN_EurosolGD
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "RPG-7 Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_AK47","launch_RPG7_F"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK47","launch_RPG7_F"};
		magazines[] = {"CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_TK_Lungee","CUP_V_OI_TKI_Jacket2_04","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_Lungee","CUP_V_OI_TKI_Jacket2_04","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolGDLAWAss: ZSN_EurosolGD
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "RPG-7 Assistant";
		backpack = "ZSN_guer_rpg_pack_rpg7";
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_TK_Lungee","CUP_V_OI_TKI_Jacket3_02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_TK_Lungee","CUP_V_OI_TKI_Jacket3_02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolGDLeader: ZSN_EurosolGD
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Cell Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_AK47","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK47","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_m67","CUP_HandGrenade_m67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","zsn_wpshell","zsn_wpshell","CUP_HandGrenade_m67","CUP_HandGrenade_m67"};
		linkedItems[] = {"CUP_H_TK_Lungee","CUP_V_OI_TKI_Jacket2_04","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_TK_Lungee","CUP_V_OI_TKI_Jacket2_04","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_EurosolGDCrew: ZSN_EurosolGD
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "Crew";
		icon = "iconManEngineer";
		weapons[] = {"Throw","Put","CUP_arifle_AKS","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS","Binocular"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		linkedItems[] = {"CUP_H_PMC_PRR_Headset","CUP_V_OI_TKI_Jacket2_04","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_PMC_PRR_Headset","CUP_V_OI_TKI_Jacket2_04","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolGDPilot: ZSN_EurosolGD
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "Pilot";
		icon = "iconManEngineer";
		weapons[] = {"Throw","Put","CUP_arifle_AKS","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AKS","Binocular"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		linkedItems[] = {"CUP_H_PMC_EP_Headset","CUP_V_OI_TKI_Jacket2_04","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_PMC_EP_Headset","CUP_V_OI_TKI_Jacket2_04","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_GersolW: B_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 1;
		scopeCurator = 2;
		faction = "ZSN_WGer_ColdWar";
		displayName = "Soldier (Garrison)";
		icon = "iconMan";
		genericNames = "CUP_Names_GermanMen";
		identityTypes[] = {"LanguageENG_F","NoGlasses","Head_Euro","G_GUERIL_default"};
		uniformClass = "CUP_U_B_BDUv2_OD";
		//uniformClass = "CUP_U_B_GER_Flecktarn_1";
		canCarryBackPack = 1;
		weapons[] = {"Throw","Put","CUP_arifle_G3A3_ris"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_G3A3_ris"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"CUP_H_Ger_Beret_INF_Grn","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"CUP_H_Ger_Beret_INF_Grn","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"CUP_H_Ger_Beret_INF_Grn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_Ger_Beret_INF_Grn","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWMedic: ZSN_GersolW
	{
		scope = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWB: ZSN_GersolW
	{
		scope = 2;
		displayName = "Soldier";
		magazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWSniper: ZSN_GersolW
	{
		scope = 2;
		displayName = "Sniper";
		weapons[] = {"Throw","Put","zsn_G3SG1"};
		respawnWeapons[] = {"Throw","Put","zsn_G3SG1"};
		magazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWMG: ZSN_GersolW
	{
		scope = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_GER_250rnd_MG3_bandoliers";
		weapons[] = {"Throw","Put","CUP_lmg_MG3"};
		respawnWeapons[] = {"Throw","Put","CUP_lmg_MG3"};
		magazines[] = {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWMGAss: ZSN_GersolW
	{
		scope = 2;
		displayName = "MG Assistant";
		backpack = "ZSN_GER_MG3_ammobelts";
		weapons[] = {"Throw","Put","CUP_arifle_G3A3_ris","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_G3A3_ris","Binocular"};
		magazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWAA: ZSN_GersolW
	{
		scope = 2;
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_G3A3_ris","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_G3A3_ris","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_Stinger_M","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWLAW: ZSN_GersolW
	{
		scope = 2;
		displayName = "Gustav Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","CUP_arifle_G3A3_ris","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_G3A3_ris","CUP_launch_MAAWS"};
		magazines[] = {"CUP_MAAWS_HEAT_M","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_MAAWS_HEAT_M","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWLAWAss: ZSN_Gersolw
	{
		scope = 2;
		displayName = "Gustav Assistant";
		backpack = "ZSN_ger_alice_Gustav";
		magazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWLeader: ZSN_GersolW
	{
		scope = 2;
		displayName = "Section Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","CUP_arifle_G3A3_ris","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_G3A3_ris","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_3","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_3","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_GersolWPilot: ZSN_GersolW
	{
		scope = 2;
		displayName = "Pilot";
		icon = "iconManEngineer";
		backpack = "";
		faction = "ZSN_WGer_ColdWar";
		identityTypes[] = {"LanguageENG_F","NoGlasses","Head_Euro","CUP_G_ARMY"};
		uniformClass = "CUP_U_B_GER_Fleck_Overalls_Pilot";
		//uniformClass = "CUP_U_B_GER_Flecktarn_2";
		weapons[] = {"Throw","Put","CUP_smg_MP5A5"};
		respawnWeapons[] = {"Throw","Put","CUP_smg_MP5A5"};
		magazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};
		Items[] = {"CUP_H_Ger_Beret_INF_Grn","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"CUP_H_Ger_Beret_INF_Grn","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_DAGR"};
		linkedItems[] = {"CUP_H_BAF_Helmet_Pilot","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_Pilot","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_GersolWCrew: ZSN_GersolW
	{
		scope = 2;
		displayName = "Crew";
		icon = "iconManEngineer";
		backpack = "";
		faction = "ZSN_WGer_ColdWar";
		identityTypes[] = {"LanguageENG_F","NoGlasses","Head_Euro","CUP_G_ARMY"};
		uniformClass = "CUP_U_B_GER_Fleck_Overalls_Pilot";
		//uniformClass = "CUP_U_B_GER_Flecktarn_2";
		weapons[] = {"Throw","Put","CUP_smg_MP5A5"};
		respawnWeapons[] = {"Throw","Put","CUP_smg_MP5A5"};
		magazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};
		Items[] = {"Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		RespawnItems[] = {"Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs"};
		linkedItems[] = {"CUP_H_Ger_Beret_TankCommander_Blk","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_Ger_Beret_TankCommander_Blk","ItemMap","ItemCompass","ItemWatch"};
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
	class CUP_L111A1_base;
	class CUP_B_L111A1_BAF_MPT;
	class ZSN_BAF_M2StaticMG: CUP_B_L111A1_BAF_MPT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "ZSN_Weuro_ColdWar";
		crew = "ZSN_EurosolWB";
		typicalCargo[] = {"ZSN_EurosolWB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_L111A1_BAF_WDL.jpg";
	};
	class ZSN_BAF_M2StaticMGD: CUP_B_L111A1_BAF_MPT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "ZSN_WeuroD_ColdWar";
		crew = "ZSN_EurosolWDB";
		typicalCargo[] = {"ZSN_EurosolWDB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_L111A1_BAF_DDPM.jpg";
	};
	class CUP_DSHKM_base;
	class CUP_I_DSHKM_TK_GUE;
	class ZSN_CSLA_M2StaticMGE: CUP_I_DSHKM_TK_GUE
	{
		scopeArsenal = 2;
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "ZSN_Eeuro_ColdWar";
		crew = "ZSN_EurosolEB";
		typicalCargo[] = {"ZSN_EurosolEB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_I_DSHKM_TK_GUE.jpg";
	};
	class ZSN_CSLA_M2StaticMGDE: ZSN_CSLA_M2StaticMGE
	{
		faction = "ZSN_EeuroD_ColdWar";
		crew = "ZSN_EurosolEDB";
		typicalCargo[] = {"ZSN_EurosolEDB"};
	};
	class ZSN_GUER_M2StaticMGG: CUP_I_DSHKM_TK_GUE
	{
		scopeArsenal = 2;
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "ZSN_Geuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_I_DSHKM_TK_GUE.jpg";
	};
	class ZSN_GUER_M2StaticMGDE: ZSN_GUER_M2StaticMGG
	{
		faction = "ZSN_GeuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
	};
	class CUP_M2StaticMG_MiniTripod_base;
	class CUP_L111A1_MiniTripod_base;
	class CUP_B_L111A1_MiniTripod_BAF_MPT;
	class ZSN_BAF_M2LowMG: CUP_B_L111A1_MiniTripod_BAF_MPT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "ZSN_Weuro_ColdWar";
		crew = "ZSN_EurosolWB";
		typicalCargo[] = {"ZSN_EurosolWB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_L111A1_MiniTripod_BAF_WDL.jpg";
	};
	class ZSN_BAF_M2LowMGD: CUP_B_L111A1_MiniTripod_BAF_MPT
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "ZSN_WeuroD_ColdWar";
		crew = "ZSN_EurosolWDB";
		typicalCargo[] = {"ZSN_EurosolWDB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_L111A1_MiniTripod_BAF_DDPM.jpg";
	};
	class CUP_DSHKM_MiniTripod_base;
	class CUP_I_DSHkM_MiniTriPod_TK_GUE;
	class ZSN_CSLA_M2LowMGE: CUP_I_DSHkM_MiniTriPod_TK_GUE
	{
		scopeArsenal = 2;
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "ZSN_Eeuro_ColdWar";
		crew = "ZSN_EurosolEB";
		typicalCargo[] = {"ZSN_EurosolEB"};
	};
	class ZSN_CSLA_M2LowMGDE: ZSN_CSLA_M2LowMGE
	{
		faction = "ZSN_EeuroD_ColdWar";
		crew = "ZSN_EurosolEDB";
		typicalCargo[] = {"ZSN_EurosolEDB"};
	};
	class ZSN_GUER_M2LowMGG: CUP_I_DSHkM_MiniTriPod_TK_GUE
	{
		scopeArsenal = 2;
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "ZSN_Geuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
	};
	class ZSN_GUER_M2LowMGDG: ZSN_GUER_M2LowMGG
	{
		faction = "ZSN_GeuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
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
	class ZSN_BAF_staticM252Base: Mortar_01_base_F
	{
		side = 1;
		displayName = "L16A2 81mm Mortar";
		model = "\CUP\Weapons\CUP_Weapons_StaticWeapons\M252\CUP_81Mortar.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_StaticWeapons\M252\data\ui\mortar_m251_CA.paa";
		UiPicture = "\CUP\Weapons\CUP_Weapons_StaticWeapons\Podnos\data\ui\podnos_2b14_ca.paa";
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
	class ZSN_BAF_staticL16A2: ZSN_BAF_staticM252Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_Weuro_ColdWar";
		crew = "ZSN_EurosolWB";
		typicalCargo[] = {"ZSN_EurosolWB"};
		availableForSupportTypes[] = {"Artillery"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_L16A2_BAF_WDL.jpg";
	};
	class ZSN_BAF_staticL16A2D: ZSN_BAF_staticM252Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_WeuroD_ColdWar";
		crew = "ZSN_EurosolWDB";
		typicalCargo[] = {"ZSN_EurosolWDB"};
		availableForSupportTypes[] = {"Artillery"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_L16A2_BAF_DDPM.jpg";
	};
	class ZSN_CSLA_static2b14Base: Mortar_01_base_F
	{
		side = 0;
		displayname = "$STR_DN_2B14";
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_O_2b14_82mm_RU.jpg";
		model = "\CUP\Weapons\CUP_Weapons_StaticWeapons\Podnos\CUP_podnos_2b14_82mm.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_StaticWeapons\Podnos\data\ui\podnos_2b14_ca.paa";
		UiPicture = "\CUP\Weapons\CUP_Weapons_StaticWeapons\Podnos\data\ui\podnos_2b14_ca.paa";
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
			dissasembleTo[] = {"CUP_B_Podnos_Gun_Bag","CUP_B_Podnos_Bipod_Bag"};
			displayName = "";
		};
	};
	class ZSN_CSLA_Static2b14: ZSN_CSLA_static2b14Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_Eeuro_ColdWar";
		crew = "ZSN_EurosolEB";
		typicalCargo[] = {"ZSN_EurosolEB"};
		availableForSupportTypes[] = {"Artillery"};
	};
	class ZSN_CSLA_Static2b14D: ZSN_CSLA_static2b14Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_EeuroD_ColdWar";
		crew = "ZSN_EurosolEDB";
		typicalCargo[] = {"ZSN_EurosolEDB"};
		availableForSupportTypes[] = {"Artillery"};
	};
	class StaticATWeapon;
	class CUP_SPG9_base;
	class CUP_I_SPG9_TK_GUE;
	class ZSN_GUER_StaticSPG9: CUP_I_SPG9_TK_GUE
	{
		scopeArsenal = 2;
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "ZSN_Geuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_I_SPG9_TK_GUE.jpg";
	};
	class ZSN_GUER_StaticSPG9D: ZSN_GUER_StaticSPG9
	{
		faction = "ZSN_GeuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
	};
	class StaticCannon;
	class CUP_D30_base;
	class ZSN_CSLA_D30: CUP_D30_base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 0;
		faction = "ZSN_Eeuro_ColdWar";
		crew = "ZSN_EurosolEB";
		typicalCargo[] = {"ZSN_EurosolEB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_D30_CDF.jpg";
	};
	class ZSN_CSLA_D30D: CUP_D30_base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 0;
		faction = "ZSN_EeuroD_ColdWar";
		crew = "ZSN_EurosolEDB";
		typicalCargo[] = {"ZSN_EurosolEDB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_D30_CDF.jpg";
	};
	class CUP_M119_base;
	class CUP_B_M119_USMC;
	class ZSN_BAF_M119: CUP_B_M119_USMC
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "ZSN_Weuro_ColdWar";
		crew = "ZSN_EurosolWB";
		typicalCargo[] = {"ZSN_EurosolWB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_M119_USMC.jpg";
	};
	class ZSN_BAF_M119D: CUP_B_M119_USMC
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "ZSN_WeuroD_ColdWar";
		crew = "ZSN_EurosolWDB";
		typicalCargo[] = {"ZSN_EurosolWDB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_M119_USMC.jpg";
	};
	class CUP_ZU23_base;
	class CUP_I_ZU23_TK_GUE;
	class ZSN_GUER_StaticZU23: CUP_I_ZU23_TK_GUE
	{
		scopeArsenal = 2;
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "ZSN_Geuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_I_ZU23_TK_GUE.jpg";
	};
	class ZSN_GUER_StaticZU23D: ZSN_GUER_StaticZU23
	{
		faction = "ZSN_GeuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
	};
};
class CfgUnitInsignia
{
	class ZSN_East_Germany
	{
		displayName = "East Germany";
		author = "ZluskeN";
		texture = "\zsn_coldwar_euro\Egerman.paa";
		textureVehicle = "";
	};
	class ZSN_West_Germany
	{
		displayName = "West Germany";
		author = "ZluskeN";
		texture = "\zsn_coldwar_euro\Wgerman.paa";
		textureVehicle = "";
	};
	class ZSN_Skyddsvakt
	{
		displayName = "Skyddsvakt";
		author = "ZluskeN";
		texture = "\zsn_coldwar_equipment\skyddsvakt.paa";
		textureVehicle = "";
	};
};
class CfgGroups
{
	class West
	{
		class ZSN_WGer_ColdWar
		{
			name = "Cold War FRG";
			class Infantry
			{
				name = "Infantry";
				class ZSN_WGer_BasicInfantry
				{
					name = "Infantry Section";
					faction = "ZSN_WGer_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_GersolWLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_GersolWLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_GersolWLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_GersolWMG";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_GersolWLAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_GersolWMGAss";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_GersolWMedic";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_GersolWSniper";
						rank = "Private";
						position[] = {11,0,0};
					};
				};
				class ZSN_WGer_M113Infantry
				{
					name = "M113 Infantry Section";
					faction = "ZSN_WGer_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_GersolWLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_GersolWLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_GersolWLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_GersolWMG";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_GersolWLAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_GersolWMGAss";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_GersolWMedic";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_GersolWSniper";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_CUP_BW_M113";
						rank = "CORPORAL";
						position[] = {2,-10,0};
					};
				};
				class ZSN_WGer_AASquad
				{
					name = "AA Group";
					faction = "ZSN_WGer_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_GersolWAA";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_GersolWAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_GersolWAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_GersolWAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
			};
		};
		class ZSN_WEuro_ColdWar
		{
			name = "Cold War NATO";
			class Infantry
			{
				name = "Infantry";
				class ZSN_WEuro_BasicInfantry
				{
					name = "Infantry Section";
					faction = "ZSN_WEuro_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_EurosolWLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_EurosolWLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_EurosolWLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_EurosolWMG";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_EurosolWLAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_EurosolWMGAss";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_EurosolWMedic";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_EurosolWSniper";
						rank = "Private";
						position[] = {11,0,0};
					};
				};
				class ZSN_WEuro_AASquad
				{
					name = "AA Group";
					faction = "ZSN_WEuro_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_EurosolWAA";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_EurosolWAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_EurosolWAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_EurosolWAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
			};
		};
		class ZSN_WEuroD_ColdWar
		{
			name = "Cold War NATO (Desert)";
			class Infantry
			{
				name = "Infantry";
				class ZSN_WEuroD_BasicInfantry
				{
					name = "Infantry Section";
					faction = "ZSN_WEuroD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_EurosolWDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_EurosolWDLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_EurosolWDLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_EurosolWDMG";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_EurosolWDLAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_EurosolWDMGAss";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_EurosolWDMedic";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_EurosolWDSniper";
						rank = "Private";
						position[] = {11,0,0};
					};
				};
				class ZSN_WEuroD_AASquad
				{
					name = "AA Group";
					faction = "ZSN_WEuroD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_EurosolWDAA";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_EurosolWDAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_EurosolWDAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_EurosolWDAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
			};
		};
	};
	class East
	{
		class ZSN_EEuro_ColdWar
		{
			name = "Cold War PACT";
			class Infantry
			{
				name = "Infantry";
				class ZSN_EEuro_BasicInfantry
				{
					name = "Infantry Section";
					faction = "ZSN_EEuro_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_EurosolELeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_EurosolELeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_EurosolELAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_EurosolEMG";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_EurosolELAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "ZSN_EurosolEMGAss";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_EurosolEMedic";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_EurosolESniper";
						rank = "Private";
						position[] = {11,0,0};
					};
				};
				class ZSN_EEuro_AASquad
				{
					name = "AA Group";
					faction = "ZSN_EEuro_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_EurosolEAA";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_EurosolEAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_EurosolEAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_EurosolEAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
			};
		};
		class ZSN_EEuroD_ColdWar
		{
			name = "Cold War PACT (Desert)";
			class Infantry
			{
				name = "Infantry";
				class ZSN_EEuroD_BasicInfantry
				{
					name = "Infantry Section";
					faction = "ZSN_EEuroD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_EurosolEDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_EurosolEDLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_EurosolEDLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_EurosolEDMG";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_EurosolEDLAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "ZSN_EurosolEDMGAss";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_EurosolEDMedic";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_EurosolEDSniper";
						rank = "Private";
						position[] = {11,0,0};
					};
				};
				class ZSN_EEuroD_AASquad
				{
					name = "AA Group";
					faction = "ZSN_EEuroD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_EurosolEDAA";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_EurosolEDAA";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_EurosolEDAA";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_EurosolEDAA";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
			};
		};
	};
	class Indep
	{
		class ZSN_GEuro_ColdWar
		{
			name = "Cold War Guerilla";
			class Infantry
			{
				name = "Infantry";
				class ZSN_GEuro_BasicInfantry
				{
					name = "Resistance Cell";
					faction = "ZSN_GEuro_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_EurosolGLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_EurosolGLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_EurosolGLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_EurosolGSniper";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_EurosolGLAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "ZSN_EurosolGMG";
						rank = "Private";
						position[] = {9,0,0};
					};
				};
			};
		};
		class ZSN_GEuroD_ColdWar
		{
			name = "Cold War Guerilla (Desert)";
			class Infantry
			{
				name = "Infantry";
				class ZSN_EEuroD_BasicInfantry
				{
					name = "Resistance Cell";
					faction = "ZSN_GEuroD_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_EurosolGDSniper";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "ZSN_EurosolGDMG";
						rank = "Private";
						position[] = {9,0,0};
					};
				};
			};
		};
	};
};
//};
