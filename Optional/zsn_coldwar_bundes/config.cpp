////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Wed May 31 10:56:42 2017 : Created on Wed May 31 10:56:42 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_euro : config.bin{
class CfgPatches
{
	class ZSN_ColdWarBundes
	{
		author = "ZluskeN";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarWest","ZSN_ColdWarEuro"};
		magazines[] = {};
	};
};
class cfgFactionClasses
{
	class ZSN_WGer_ColdWar
	{
		displayName = "Cold War FRG";
		backpack_tf_faction_radio = "ZSN_st138_prc77";
		personal_tf_faction_radio = "tf_rf7800str";
		airborne_tf_faction_radio = "tf_anarc210";
		flag = "\zsn_coldwar_bundes\FRGFlag.paa";
		priority = 1;
		side = 1;
	};
};
class CfgVehicles
{
	class ReammoBox_F;
	class CUP_ReammoBox_EP1;
	class CUP_USSpecialWeapons_EP1;
	class ZSN_West_Ammocrate: CUP_USSpecialWeapons_EP1
	{
		class TransportMagazines
		{
			class _xx_fow_30Rnd_45acp
			{
				magazine = "fow_30Rnd_45acp";
				count = 14;
			};
			class _xx_fow_7Rnd_45acp
			{
				magazine = "fow_7Rnd_45acp";
				count = 12;
			};
		};
	};
	class CUP_B_AlicePack_Bedroll;
	class ZSN_GER_250rnd_MG3_bandoliers: CUP_B_AlicePack_Bedroll
	{
		scope = 1;
		displayName = "MG Bag";
		icon = "iconBackpack";
		mapSize = 2;
		maximumLoad = 108;
		allowedSlots[] = {901,801};
		class TransportMagazines
		{
			class _xx_fow_50Rnd_792x57
			{
				magazine = "fow_50Rnd_792x57";
				count = 2;
			};
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 1;
			};
		};
	};
	class ZSN_ger_alice_Gustav: CUP_B_AlicePack_Bedroll
	{
		author = "ZluskeN";
		scope = 1;
		allowedSlots[] = {501,601,701,801,901};
		displayName = "Alice Pack, Gustav";
		mapSize = 2;
		maximumLoad = 210;
		mass = 60;
		class TransportMagazines
		{
			class _xx_CUP_MAAWS_HEAT_M
			{
				magazine = "CUP_MAAWS_HEAT_M";
				count = 3;
			};
		};
	};
	class fow_b_uk_bergenpack;
	class ZSN_baf_alice_Gustav: fow_b_uk_bergenpack
	{
		author = "ZluskeN";
		scope = 1;
		allowedSlots[] = {501,601,701,801,901};
		displayName = "Bergen, Gustav";
		mapSize = 2;
		maximumLoad = 210;
		mass = 60;
		class TransportMagazines
		{
			class _xx_CUP_MAAWS_HEAT_M
			{
				magazine = "CUP_MAAWS_HEAT_M";
				count = 3;
			};
		};
	};
	class ZSN_BAF_200rnd_762x51_bandoliers: fow_b_uk_bergenpack
	{
		scope = 1;
		displayName = "MG Bag";
		icon = "iconBackpack";
		mapSize = 2;
		maximumLoad = 100;
		allowedSlots[] = {901,801};
		class TransportMagazines
		{
			delete _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M;
			class _xx_fow_30Rnd_303_bren
			{
				magazine = "fow_30Rnd_303_bren";
				count = 4;
			};
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 1;
			};
		};
	};
	class ZSN_BAF_762x51_ammobelts: fow_b_uk_bergenpack
	{
		scope = 1;
		displayName = "Bren Ammo Pack";
		icon = "iconBackpack";
		mapSize = 2;
		//maximumLoad = 264;
		maximumLoad = 200;
		allowedSlots[] = {901};
		class TransportMagazines
		{
			delete _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M;
			class _xx_fow_30Rnd_303_bren
			{
				magazine = "fow_30Rnd_303_bren";
				count = 20;
			};
		};
	};
	class ZSN_CSLA_762x54_ammobelts: ZSN_BAF_762x51_ammobelts
	{
		displayName = "UK59 Ammo Pack";
		//maximumLoad = 280;
		maximumLoad = 420;
		class TransportMagazines
		{
			class _xx_CUP_50Rnd_UK59_762x54R_Tracer
			{
				magazine = "CUP_50Rnd_UK59_762x54R_Tracer";
				count = 12;
			};
		};
	};
	class fow_b_heer_aframe;
	class ZSN_ger_pack: fow_b_heer_aframe
	{
		scope = 1;
		maximumLoad = 54;
		class TransportMagazines
		{
			class _xx_hlc_20rnd_762x51_b_G3
			{
				magazine = "hlc_20rnd_762x51_b_G3";
				count = 2;
			};
			class _xx_Smokeshell
			{
				magazine = "Smokeshell";
				count = 2;
			};
			class _xx_CUP_HandGrenade_M67
			{
				magazine = "CUP_HandGrenade_M67";
				count = 2;
			};
		};
	};
	class fow_b_heer_ammo_belt;
	class ZSN_GER_MG3_ammobelts: fow_b_heer_ammo_belt
	{
		scope = 1;
		displayName = "Linked MG3, 500 rnd";
		mapSize = 2;
		maximumLoad = 250;
		mass = 0;
		allowedSlots[] = {901};
		class TransportMagazines
		{
			class _xx_fow_50Rnd_792x57
			{
				magazine = "fow_50Rnd_792x57";
				count = 10;
			};
		};
	};
	class fow_b_tornister_medic;
	class ZSN_ger_pack_medic: fow_b_tornister_medic
	{
		scope = 1;
		displayName = "Medic Bag";
		maximumLoad = 224;
		class TransportItems
		{
			class _xx_usm_fielddressing
			{
				name = "FirstAidKit";
				count = 8;
			};
			class _xx_usm_medikit
			{
				name = "medikit";
				count = 2;
			};
		};
	};
	class B_Soldier_base_F;
	class ZSN_EurosolW: B_Soldier_base_F
	{
		Items[] = {"fow_h_uk_beret_para","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"fow_h_uk_beret_para","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
	};
	class ZSN_EurosolWMG: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","fow_w_bren"};
		respawnWeapons[] = {"Throw","Put","fow_w_bren"};
		magazines[] = {"fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren"};
		respawnMagazines[] = {"fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren"};
	};
	class ZSN_EurosolWcrew: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","fow_w_sten_mk2","Binocular"};
		respawnWeapons[] = {"Throw","Put","fow_w_sten_mk2","Binocular"};
		magazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
		respawnMagazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
	};
	class ZSN_EurosolWPilot: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","fow_w_sten_mk2"};
		respawnWeapons[] = {"Throw","Put","fow_w_sten_mk2"};
		magazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
		respawnMagazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
	};
	class ZSN_EurosolWD: B_Soldier_base_F
	{
		Items[] = {"fow_h_uk_beret_para","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"fow_h_uk_beret_para","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
	};
	class ZSN_EurosolWDMG: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","fow_w_bren"};
		respawnWeapons[] = {"Throw","Put","fow_w_bren"};
		magazines[] = {"fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren"};
		respawnMagazines[] = {"fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren"};
	};
	class ZSN_EurosolWDcrew: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","fow_w_sten_mk2","Binocular"};
		respawnWeapons[] = {"Throw","Put","fow_w_sten_mk2","Binocular"};
		magazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
		respawnMagazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
	};
	class ZSN_EurosolWDPilot: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","fow_w_sten_mk2"};
		respawnWeapons[] = {"Throw","Put","fow_w_sten_mk2"};
		magazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
		respawnMagazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
	};
	class ZSN_GersolW: B_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_WGer_ColdWar";
		displayName = "Soldier (Garrison)";
		icon = "iconMan";
		genericNames = "CUP_Names_GermanMen";
		identityTypes[] = {"LanguageENG_F","NoGlasses","Head_Euro","G_GUERIL_default"};
		uniformClass = "fow_u_ger_m43_02_private";
		canCarryBackPack = 1;
		backpack = "ZSN_ger_pack";
		weapons[] = {"Throw","Put","hlc_rifle_g3a3"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_g3a3"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"fow_h_ger_feldmutze","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"fow_h_ger_feldmutze","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWMedic: ZSN_GersolW
	{
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_ger_pack_medic";
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		linkedItems[] = {"fow_h_us_m1_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWB: ZSN_GersolW
	{
		displayName = "Soldier";
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		linkedItems[] = {"fow_h_us_m1_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWSniper: ZSN_GersolW
	{
		displayName = "Sniper";
		weapons[] = {"Throw","Put","hlc_rifle_g3sg1"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_g3sg1"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		linkedItems[] = {"fow_h_us_m1_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWMG: ZSN_GersolW
	{
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_GER_250rnd_MG3_bandoliers";
		weapons[] = {"Throw","Put","fow_w_mg42"};
		respawnWeapons[] = {"Throw","Put","fow_w_mg42"};
		magazines[] = {"fow_50Rnd_792x57","fow_50Rnd_792x57","fow_50Rnd_792x57","fow_50Rnd_792x57"};
		respawnMagazines[] = {"fow_50Rnd_792x57","fow_50Rnd_792x57","fow_50Rnd_792x57","fow_50Rnd_792x57"};
		linkedItems[] = {"fow_h_us_m1_net","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_net","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWMGAss: ZSN_GersolW
	{
		displayName = "MG Assistant";
		backpack = "ZSN_GER_MG3_ammobelts";
		weapons[] = {"Throw","Put","hlc_rifle_g3a3","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_g3a3","Binocular"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		linkedItems[] = {"fow_h_us_m1_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWAA: ZSN_GersolW
	{
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","hlc_rifle_g3a3","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_g3a3","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_Stinger_M","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		respawnMagazines[] = {"CUP_Stinger_M","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		linkedItems[] = {"fow_h_us_m1_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWLAW: ZSN_GersolW
	{
		displayName = "Gustav Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","hlc_rifle_g3a3","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_g3a3","CUP_launch_MAAWS"};
		magazines[] = {"CUP_MAAWS_HEAT_M","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		respawnMagazines[] = {"CUP_MAAWS_HEAT_M","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		linkedItems[] = {"fow_h_us_m1_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWLAWAss: ZSN_Gersolw
	{
		displayName = "Gustav Assistant";
		backpack = "ZSN_ger_alice_Gustav";
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		linkedItems[] = {"fow_h_us_m1_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWLeader: ZSN_GersolW
	{
		displayName = "Section Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","hlc_rifle_g3a3","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_g3a3","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		linkedItems[] = {"fow_h_us_m1_net","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"fow_h_us_m1_net","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_GersolWPilot: ZSN_GersolW
	{
		displayName = "Pilot";
		icon = "iconManEngineer";
		backpack = "";
		uniformClass = "fow_u_ija_pilot";
		weapons[] = {"Throw","Put","CUP_smg_MP5A5"};
		respawnWeapons[] = {"Throw","Put","CUP_smg_MP5A5"};
		magazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};
		Items[] = {"fow_h_ger_feldmutze","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"fow_h_ger_feldmutze","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_DAGR"};
		linkedItems[] = {"CUP_H_BAF_Helmet_Pilot","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_Pilot","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class CUP_B_UH1D_slick_GER_KSK;
	class ZSN_CUP_B_UH1D_GER: CUP_B_UH1D_slick_GER_KSK
	{
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWPilot";
		displayName = "UH-1D Slick";
		typicalCargo[] = {"ZSN_GersolWPilot"};
	};
	class ZSN_SoldierW;
	class ZSN_SoldierWcrew: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","fow_w_m3","fow_w_m1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","fow_w_m3","fow_w_m1911","Binocular"};
		magazines[] = {"fow_30Rnd_45acp","fow_30Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp"};
		respawnMagazines[] = {"fow_30Rnd_45acp","fow_30Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp"};
	};
	class ZSN_SoldierWD;
	class ZSN_SoldierWDcrew: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","fow_w_m3","fow_w_m1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","fow_w_m3","fow_w_m1911","Binocular"};
		magazines[] = {"fow_30Rnd_45acp","fow_30Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp"};
		respawnMagazines[] = {"fow_30Rnd_45acp","fow_30Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp"};
	};
	class ZSN_MarineW;
	class ZSN_MarineWcrew: ZSN_MarineW
	{
		weapons[] = {"Throw","Put","fow_w_m3","fow_w_m1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","fow_w_m3","fow_w_m1911","Binocular"};
		magazines[] = {"fow_30Rnd_45acp","fow_30Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp"};
		respawnMagazines[] = {"fow_30Rnd_45acp","fow_30Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp"};
	};
	class ZSN_MarineWD;
	class ZSN_MarineWDcrew: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","fow_w_m3","fow_w_m1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","fow_w_m3","fow_w_m1911","Binocular"};
		magazines[] = {"fow_30Rnd_45acp","fow_30Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp"};
		respawnMagazines[] = {"fow_30Rnd_45acp","fow_30Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp","fow_7Rnd_45acp"};
	};
	class B_Truck_01_ammo_F;
	class ZSN_DArmy_Truck_ammo: B_Truck_01_ammo_F
	{
		class TransportMagazines
		{
			class _xx_fow_30Rnd_45acp
			{
				magazine = "fow_30Rnd_45acp";
				count = 14;
			};
			class _xx_fow_7Rnd_45acp
			{
				magazine = "fow_7Rnd_45acp";
				count = 12;
			};
		};
	};
	class ZSN_DUSMC_Truck_ammo: B_Truck_01_ammo_F
	{
		class TransportMagazines
		{
			class _xx_fow_30Rnd_45acp
			{
				magazine = "fow_30Rnd_45acp";
				count = 14;
			};
			class _xx_fow_7Rnd_45acp
			{
				magazine = "fow_7Rnd_45acp";
				count = 12;
			};
		};
	};
	class Tank;
	class Tank_F;
	class CUP_MCV80_Base;
	class CUP_B_MCV80_GB_D_SLAT;
	class CUP_B_MCV80_GB_D;
	class ZSN_CUP_DBAF_MCV80: CUP_B_MCV80_GB_D
	{
		class TransportMagazines
		{
			delete _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M;
		};
	};
	class CUP_B_MCV80_GB_W;
	class ZSN_CUP_BAF_MCV80: CUP_B_MCV80_GB_W
	{
		class TransportMagazines
		{
			delete _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M;
		};
	};
	class CUP_BMP1_base;
	class CUP_O_BMP1_TKA;
	class ZSN_CUP_DCSLA_BMP1: CUP_O_BMP1_TKA
	{
		class TransportMagazines
		{
			delete _xx_CUP_50Rnd_UK59_762x54R_Tracer;
		};
	};
	class CUP_I_BMP1_TK_GUE;
	class ZSN_CUP_CSLA_BMP1: CUP_I_BMP1_TK_GUE
	{
		class TransportMagazines
		{
			delete _xx_CUP_50Rnd_UK59_762x54R_Tracer;
		};
	};
};
class Extended_Init_EventHandlers
{
	class ZSN_GersolWSniper
	{
		class ZSN_ScopeWG3
		{
			init = "[(_this select 0) addPrimaryWeaponItem "HLC_Optic_ZFSG1"]";
		};
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
				class ZSN_WGer_UH1Infantry
				{
					name = "UH-1 Infantry Section";
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
						vehicle = "ZSN_CUP_B_UH1D_GER";
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
	};
};
//};
