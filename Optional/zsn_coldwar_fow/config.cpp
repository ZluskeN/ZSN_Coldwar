////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Wed May 31 10:56:42 2017 : Created on Wed May 31 10:56:42 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_ColdWar_FOW
	{
		author = "ZluskeN";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarWest","ZSN_ColdWarEuro"};
		magazines[] = {};
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
	class B_Soldier_base_F;
	class ZSN_EurosolW: B_Soldier_base_F
	{
		Items[] = {"fow_h_uk_beret_para","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"fow_h_uk_beret_para","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"fow_h_uk_beret_para","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_para","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWMedic: ZSN_EurosolW
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWB: ZSN_EurosolW
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWSniper: ZSN_EurosolW
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWMG: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","fow_w_bren"};
		respawnWeapons[] = {"Throw","Put","fow_w_bren"};
		magazines[] = {"fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren"};
		respawnMagazines[] = {"fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren"};
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWMGAss: ZSN_EurosolW
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWAA: ZSN_EurosolW
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWLAW: ZSN_EurosolW
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWLAWAss: ZSN_Eurosolw
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWLeader: ZSN_EurosolW
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DPM","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_EurosolWcrew: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","fow_w_sten_mk2","Binocular"};
		respawnWeapons[] = {"Throw","Put","fow_w_sten_mk2","Binocular"};
		magazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
		respawnMagazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
		linkedItems[] = {"CUP_H_BAF_Crew_Helmet_DPM","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Crew_Helmet_DPM","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWPilot: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","fow_w_sten_mk2"};
		respawnWeapons[] = {"Throw","Put","fow_w_sten_mk2"};
		magazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
		respawnMagazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
		linkedItems[] = {"CUP_H_USMC_Helmet_Pilot","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_USMC_Helmet_Pilot","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_EurosolWD: B_Soldier_base_F
	{
		Items[] = {"fow_h_uk_beret_para","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"fow_h_uk_beret_para","Firstaidkit","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"fow_h_uk_beret_para","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_para","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDMedic: ZSN_EurosolWD
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDB: ZSN_EurosolWD
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDSniper: ZSN_EurosolWD
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDMG: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","fow_w_bren"};
		respawnWeapons[] = {"Throw","Put","fow_w_bren"};
		magazines[] = {"fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren"};
		respawnMagazines[] = {"fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren","fow_30Rnd_303_bren"};
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_bren","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_bren","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDMGAss: ZSN_EurosolWD
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDAA: ZSN_EurosolWD
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDLAW: ZSN_EurosolWD
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDLAWAss: ZSN_EurosolwD
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDLeader: ZSN_EurosolWD
	{
		linkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_officer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_BAF_Helmet_3_DDPM","fow_v_uk_officer","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class ZSN_EurosolWDcrew: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","fow_w_sten_mk2","Binocular"};
		respawnWeapons[] = {"Throw","Put","fow_w_sten_mk2","Binocular"};
		magazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
		respawnMagazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
		linkedItems[] = {"CUP_H_BAF_Crew_Helmet_DDPM","fow_v_uk_sten","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_H_BAF_Crew_Helmet_DDPM","fow_v_uk_sten","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_EurosolWDPilot: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","fow_w_sten_mk2"};
		respawnWeapons[] = {"Throw","Put","fow_w_sten_mk2"};
		magazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
		respawnMagazines[] = {"fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten","fow_32Rnd_9x19_sten"};
		linkedItems[] = {"CUP_H_TK_PilotHelmet","fow_v_uk_sten","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_TK_PilotHelmet","fow_v_uk_sten","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
