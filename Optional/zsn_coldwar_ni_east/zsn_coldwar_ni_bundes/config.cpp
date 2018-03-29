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
	class ZSN_Feldgrau: ItemCore
	{
		author = "ZluskeN";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "German Feldgrau";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\data\ui\icon_u_i_flecktarn2_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ZSN_GersolWP";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class Rifle_Base_F;
	class hlc_g3_base;
	class hlc_rifle_g3sg1;
	class zsn_G3SG1: hlc_rifle_g3sg1
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "HLC_Optic_ZFSG1";
			};
		};
	};
};
class CfgVehicles
{
	class CUP_B_RUS_Backpack;
	class ZSN_GER_250rnd_MG3_bandoliers: CUP_B_RUS_Backpack
	{
		scope = 1;
		displayName = "MG Bag";
		icon = "iconBackpack";
		mapSize = 2;
		maximumLoad = 108;
		allowedSlots[] = {901,801};
		class TransportMagazines
		{
			class _xx_hlc_100Rnd_762x51_M_MG3
			{
				magazine = "hlc_100Rnd_762x51_M_MG3";
				count = 1;
			};
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 1;
			};
		};
	};
	class ZSN_ger_alice_Gustav: CUP_B_RUS_Backpack
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
	class ZSN_GER_MG3_ammobelts: CUP_B_RUS_Backpack
	{
		scope = 1;
		displayName = "Linked MG3, 500 rnd";
		mapSize = 2;
		maximumLoad = 250;
		mass = 0;
		allowedSlots[] = {901};
		class TransportMagazines
		{
			class _xx_hlc_100Rnd_762x51_M_MG3
			{
				magazine = "hlc_100Rnd_762x51_M_MG3";
				count = 5;
			};
		};
	};
	class B_Soldier_base_F;
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
		uniformClass = "CUP_U_B_GER_Flecktarn_1";
		canCarryBackPack = 1;
		weapons[] = {"Throw","Put","hlc_rifle_g3a3"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_g3a3"};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"H_Beret_02","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"H_Beret_02","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"H_Beret_02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"H_Beret_02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWMedic: ZSN_GersolW
	{
		scope = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "ZSN_pack_medic";
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWB: ZSN_GersolW
	{
		scope = 2;
		displayName = "Soldier";
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWSniper: ZSN_GersolW
	{
		scope = 2;
		displayName = "Sniper";
		weapons[] = {"Throw","Put","zsn_G3SG1"};
		respawnWeapons[] = {"Throw","Put","zsn_G3SG1"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWMG: ZSN_GersolW
	{
		scope = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		backpack = "ZSN_GER_250rnd_MG3_bandoliers";
		weapons[] = {"Throw","Put","hlc_lmg_MG3"};
		respawnWeapons[] = {"Throw","Put","hlc_lmg_MG3"};
		magazines[] = {"hlc_50Rnd_762x51_M_MG3","hlc_50Rnd_762x51_M_MG3","hlc_50Rnd_762x51_M_MG3","hlc_50Rnd_762x51_M_MG3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"hlc_50Rnd_762x51_M_MG3","hlc_50Rnd_762x51_M_MG3","hlc_50Rnd_762x51_M_MG3","hlc_50Rnd_762x51_M_MG3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWMGAss: ZSN_GersolW
	{
		scope = 2;
		displayName = "MG Assistant";
		backpack = "ZSN_GER_MG3_ammobelts";
		weapons[] = {"Throw","Put","hlc_rifle_g3a3","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_g3a3","Binocular"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWAA: ZSN_GersolW
	{
		scope = 2;
		displayName = "AA Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","hlc_rifle_g3a3","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_g3a3","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_Stinger_M","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWLAW: ZSN_GersolW
	{
		scope = 2;
		displayName = "Gustav Soldier";
		icon = "iconManAT";
		weapons[] = {"Throw","Put","hlc_rifle_g3a3","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_g3a3","CUP_launch_MAAWS"};
		magazines[] = {"CUP_MAAWS_HEAT_M","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_MAAWS_HEAT_M","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWLAWAss: ZSN_Gersolw
	{
		scope = 2;
		displayName = "Gustav Assistant";
		backpack = "ZSN_ger_alice_Gustav";
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_2","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_GersolWLeader: ZSN_GersolW
	{
		scope = 2;
		displayName = "Section Leader";
		icon = "iconManLeader";
		weapons[] = {"Throw","Put","hlc_rifle_g3a3","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","hlc_rifle_g3a3","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","Smokeshell","Smokeshell","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_3","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive","CUP_V_I_RACS_Carrier_Rig_wdl_3","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_GersolWP: ZSN_GersolW
	{
		scope = 1;
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_ni_east\zsn_coldwar_ni_bundes\officer_ger_co.paa"};
		uniformClass = "ZSN_Feldgrau";
		//model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\CUP_NAPA_Soldier3.p3d";
		//hiddenSelections[] = {"Camo1","Camo2","clan","insignia"};
		//hiddenSelectionsTextures[] = {"\zsn_coldwar_ni_east\zsn_coldwar_ni_bundes\feldgrau2_co.paa","\zsn_coldwar_ni_east\zsn_coldwar_ni_bundes\feldgrau_co.paa"};
		//uniformClass = "fow_u_ger_m43_02_private";
	};
	class ZSN_GersolWPilot: ZSN_GersolW
	{
		scope = 2;
		weapons[] = {"Throw","Put","hlc_smg_mp5a3"};
		respawnWeapons[] = {"Throw","Put","hlc_smg_mp5a3"};
	};
	class ZSN_GersolWCrew: ZSN_GersolW
	{
		scope = 2;
		weapons[] = {"Throw","Put","hlc_smg_mp5a3"};
		respawnWeapons[] = {"Throw","Put","hlc_smg_mp5a3"};
	};
	class ZSN_SoldierW;
	class ZSN_SoldierWSaboteur: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","CUP_hgun_MicroUzi","hlc_smg_mp5sd6","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_MicroUzi","hlc_smg_mp5sd6","Binocular"};
		magazines[] = {"CUP_30Rnd_9x19_UZI","CUP_30Rnd_9x19_UZI","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_UZI","CUP_30Rnd_9x19_UZI","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
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
