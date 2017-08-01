////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Wed Aug 03 00:08:48 2016 : Created on Wed Aug 03 00:08:48 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_vehicles : Config.bin{
class CfgPatches
{
	class ZSN_ColdWareastVehicles_plus
	{
		author = "ZluskeN";
		Units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarEast"};
	};
};
class cfgvehicles
{
	class ReammoBox;
	class Bag_Base;
	class CUP_B_SLA_Medicbag;
	class ZSN_pack_medic: CUP_B_SLA_Medicbag
	{
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_medic_bag";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_medic_bag_ca.paa";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"};
	};
	class CUP_B_RPGPack_Khaki;
	class ZSN_rpg_pack_rpg7: CUP_B_RPGPack_Khaki
	{
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\gearpack2_rpg_co.paa"};
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_rpg_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_rpg";
		class TransportMagazines
		{
			delete _xx_CUP_PG7VR_M;
			class _xx_rhs_rpg7_PG7VR_mag
			{
				magazine = "rhs_rpg7_PG7VR_mag";
				count = 2;
			};
		};
	};
	class ZSN_rpg_pack_rpg29: CUP_B_RPGPack_Khaki
	{
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\gearpack2_rpg_co.paa"};
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_rpg_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_rpg";
	};
	class CUP_B_CivPack_WDL;
	class ZSN_45rnd_545x39_bag: CUP_B_CivPack_WDL
	{
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_sidor";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_sidor_ca.paa";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"};
	};
	class ZSN_200rnd_762x54_bandoliers: CUP_B_CivPack_WDL
	{
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_sidor";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_sidor_ca.paa";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"};
	};
	class ZSN_minepack_east: CUP_B_CivPack_WDL
	{
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_sidor";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_sidor_ca.paa";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"};
	};
	class ReammoBox_F;
	class CUP_ReammoBox_EP1;
	class CUP_RUSpecialWeaponsBox;
	class ZSN_East_Ammocrate: CUP_RUSpecialWeaponsBox
	{
		class Transportweapons
		{
			delete _xx_CUP_launch_rpg18;
			class _xx_rhs_weap_rpg26
			{
				weapon = "rhs_weap_rpg26";
				count = 10;
			};
		};
		class TransportMagazines
		{
			delete _xx_CUP_RPG18_M;
			delete _xx_CUP_PG7VR_M;
			class _xx_rhs_rpg7_PG7VR_mag
			{
				magazine = "rhs_rpg7_PG7VR_mag";
				count = 4;
			};
		};
	};
	class O_soldier_base_F;
	class ZSN_SoldierE;
	class ZSN_SoldierELAW: ZSN_SoldierE
	{
		displayName = "Rifleman, RPG-26";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","rhs_weap_rpg26"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","rhs_weap_rpg26"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_SoldierESaboteur: ZSN_SoldierE
	{
		linkedItems[] = {"H_Bandanna_khk_hs","rhs_1PN138","CUP_V_RUS_Smersh_1","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"H_Bandanna_khk_hs","rhs_1PN138","CUP_V_RUS_Smersh_1","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierECrew: ZSN_SoldierE
	{
		linkedItems[] = {"rhs_tsh4","CUP_V_O_TK_CrewBelt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_tsh4","CUP_V_O_TK_CrewBelt","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierED;
	class ZSN_SoldierEDLAW: ZSN_SoldierED
	{
		displayName = "Rifleman, RPG-26";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","rhs_weap_rpg26"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","rhs_weap_rpg26"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_SoldierEDSaboteur: ZSN_SoldierED
	{
		linkedItems[] = {"rhs_beret_milp","CUP_V_O_Ins_Carrier_Rig_Com","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"rhs_beret_milp","CUP_V_O_Ins_Carrier_Rig_Com","ItemMap","ItemCompass","ItemWatch","Itemradio"};
        };
	class ZSN_SoldierEDCrew: ZSN_SoldierED
	{
		linkedItems[] = {"rhs_tsh4","CUP_V_O_TK_CrewBelt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_tsh4","CUP_V_O_TK_CrewBelt","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineE: O_Soldier_base_F
	{
		Items[] = {"rhs_beret_mp1","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"rhs_beret_mp1","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
	};
	class ZSN_MarineEAR: ZSN_MarineE
	{
		displayName = "Rifleman, RPG-26";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","rhs_weap_rpg26"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","rhs_weap_rpg26"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_MarineELAW: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","CUP_arifle_AK74","rhs_weap_rpg7_pgo"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","rhs_weap_rpg7_pgo"};
		magazines[] = {"rhs_rpg7_PG7VR_mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"rhs_rpg7_PG7VR_mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_MarineECrew: ZSN_MarineE
	{
		Items[] = {"rhs_beret_mp1","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		RespawnItems[] = {"rhs_beret_mp1","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
	};
	class ZSN_MarineED: O_Soldier_base_F
	{
		Items[] = {"rhs_beret_mp1","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"rhs_beret_mp1","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
	};
	class ZSN_MarineEDAR: ZSN_MarineED
	{
		displayName = "Rifleman, RPG-26";
		weapons[] = {"Throw","Put","CUP_arifle_AK74","rhs_weap_rpg26"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","rhs_weap_rpg26"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_MarineEDLAW: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","CUP_arifle_AK74","rhs_weap_rpg7_pgo"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_AK74","rhs_weap_rpg7_pgo"};
		magazines[] = {"rhs_rpg7_PG7VR_mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"rhs_rpg7_PG7VR_mag","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_MarineEDCrew: ZSN_MarineED
	{
		Items[] = {"rhs_beret_mp1","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		RespawnItems[] = {"rhs_beret_mp1","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
	};
	class ZSN_RangerE: O_Soldier_base_F
	{
		Items[] = {"rhs_beret_vdv1","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"rhs_beret_vdv1","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
	};
	class ZSN_SoldierEPilot: ZSN_RangerE
	{
		uniformClass = "rhs_uniform_df15";
		Items[] = {"rhs_1PN138","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"rhs_1PN138","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		linkedItems[] = {"rhs_zsh7a_mike","CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_zsh7a_mike","CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerED: O_Soldier_base_F
	{
		Items[] = {"rhs_beret_vdv1","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"rhs_beret_vdv1","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
	};
	class ZSN_SoldierEDPilot: ZSN_RangerED
	{
		uniformClass = "rhs_uniform_df15_tan";
		Items[] = {"rhs_1PN138","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"rhs_1PN138","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		linkedItems[] = {"rhs_zsh7a_alt","CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"rhs_zsh7a_alt","CUP_V_I_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class LandVehicle;
	class Tank;
	class Tank_F;
	class rhs_2s3tank_base;
	class rhs_2s3_tv;
	class zsn_2s3: rhs_2s3_tv
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_EArmy_ColdWar";
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
	};
	class zsn_D2s3: rhs_2s3_tv
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_EArmyD_ColdWar";
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_01_des_co.paa","rhsafrf\addons\rhs_2s3_camo\data\rhs_2s3_02_des_co.paa","rhsafrf\addons\rhs_2s3_camo\data\rhs_art_wheels_des_co.paa"};
	};
	class Car;
	class APC_Tracked_02_base_F;
	class Car_F;
	class Wheeled_APC_F;
	class rhs_btr_base;
	class rhs_btr60_base;
	class rhs_btr60_vmf;
	class ZSN_VMF_BTR60: rhs_btr60_vmf
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "ZSN_MarineECrew";
		typicalCargo[] = {"ZSN_MarineECrew"};
		faction = "ZSN_EMarines_ColdWar";
	};
	class rhs_zsutank_base;
	class Offroad_01_base_F;
	class Truck_F;
	class RHS_UAZ_Base;
	class rhs_uaz_open_Base;
	class RHS_UAZ_MSV_Base;
	class rhs_uaz_open_MSV_Base;
	class RHS_UAZ_MSV_01;
	class ZSN_UAZ_DMSV: RHS_UAZ_MSV_01
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
	};
	class ZSN_UAZ_MSV: ZSN_UAZ_DMSV
	{
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa"};
	};
	class rhs_uaz_vdv;
	class ZSN_DVDV_UAZ: rhs_uaz_vdv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
		faction = "ZSN_ERangersD_ColdWar";
	};
	class ZSN_VDV_UAZ: ZSN_DVDV_UAZ
	{
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
		faction = "ZSN_ERangers_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa"};
	};
	class rhs_uaz_vmf;
	class ZSN_DVMF_UAZ: rhs_uaz_vmf
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
	};
	class ZSN_VMF_UAZ: ZSN_DVMF_UAZ
	{
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa"};
	};
	class rhs_uaz_open_MSV_01;
	class ZSN_DMSV_UAZ_open: rhs_uaz_open_MSV_01
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
	};
	class ZSN_MSV_UAZ_Open: ZSN_DMSV_UAZ_open
	{
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa"};
	};
	class rhs_uaz_open_vdv;
	class ZSN_DVDV_UAZ_Open: rhs_uaz_open_vdv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
		faction = "ZSN_ERangersD_ColdWar";
	};
	class ZSN_VDV_UAZ_Open: ZSN_DVDV_UAZ_Open
	{
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
		faction = "ZSN_ERangers_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa"};
	};
	class rhs_uaz_open_vmf;
	class ZSN_DVMF_UAZ_Open: rhs_uaz_open_vmf
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
	};
	class ZSN_VMF_UAZ_Open: ZSN_DVMF_UAZ_Open
	{
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa"};
	};
	class RHS_Ural_BaseTurret;
	class RHS_Ural_Base;
	class RHS_Ural_MSV_Base;
	class RHS_Ural_MSV_01;
	class ZSN_CUP_MSV_Ural: RHS_Ural_MSV_01
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_CUP_DMSV_Ural: ZSN_CUP_MSV_Ural
	{
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_plachta_sand_co.paa"};
	};
	class RHS_Ural_VMF_01;
	class ZSN_CUP_VMF_Ural: RHS_Ural_VMF_01
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
	};
	class ZSN_CUP_DVMF_Ural: ZSN_CUP_VMF_Ural
	{
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_plachta_sand_co.paa"};
	};
	class RHS_Ural_Open_MSV_01;
	class ZSN_CUP_MSV_Ural_Open: RHS_Ural_Open_MSV_01
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_CUP_DMSV_Ural_Open: ZSN_CUP_MSV_Ural_Open
	{
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_open_sand_co.paa"};
	};
	class RHS_Ural_Open_VMF_01;
	class ZSN_CUP_VMF_Ural_Open: RHS_Ural_Open_VMF_01
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
	};
	class ZSN_CUP_DVMF_Ural_Open: ZSN_CUP_VMF_Ural_Open
	{
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_open_sand_co.paa"};
	};
	class RHS_Ural_Support_MSV_Base_01;
	class RHS_Ural_Fuel_MSV_01;
	class ZSN_CUP_MSV_Ural_Refuel: RHS_Ural_Fuel_MSV_01
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class  ZSN_CUP_DMSV_Ural_Refuel: ZSN_CUP_MSV_Ural_Refuel
	{
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_open_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_fuel_sand_co.paa"};
	};
	class RHS_Ural_Fuel_VMF_01;
	class ZSN_CUP_VMF_Ural_Refuel: RHS_Ural_Fuel_VMF_01
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
	};
	class ZSN_CUP_DVMF_Ural_Refuel: ZSN_CUP_VMF_Ural_Refuel
	{
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_open_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_fuel_sand_co.paa"};
	};
	class rhs_bmd_base;
	class rhs_bmd2_base;
	class rhs_bmd1_base;
	class rhs_bmd1;
	class ZSN_VDV_bmd1: rhs_bmd1
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
		faction = "ZSN_ERangers_ColdWar";
	};
	class ZSN_DVDV_bmd1: ZSN_VDV_bmd1
	{
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
		faction = "ZSN_ERangersD_ColdWar";
	};
	class rhs_bmd1k;
	class ZSN_VDV_bmd1k: rhs_bmd1k
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
		faction = "ZSN_ERangers_ColdWar";
	};
	class ZSN_DVDV_bmd1k: ZSN_VDV_bmd1k
	{
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
		faction = "ZSN_ERangersD_ColdWar";
	};
	class rhs_bmd1p;
	class ZSN_VDV_bmd1p: rhs_bmd1p
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
		faction = "ZSN_ERangers_ColdWar";
	};
	class ZSN_DVDV_bmd1p: ZSN_VDV_bmd1p
	{
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
		faction = "ZSN_ERangersD_ColdWar";
	};
	class rhs_bmd1pk;
	class ZSN_VDV_bmd1pk: rhs_bmd1pk
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
		faction = "ZSN_ERangers_ColdWar";
	};
	class ZSN_DVDV_bmd1pk: ZSN_VDV_bmd1pk
	{
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
		faction = "ZSN_ERangersD_ColdWar";
	};
	class rhs_bmd1r;
	class ZSN_VDV_bmd1r: rhs_bmd1r
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
		faction = "ZSN_ERangers_ColdWar";
	};
	class ZSN_DVDV_bmd1r: ZSN_VDV_bmd1r
	{
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
		faction = "ZSN_ERangersD_ColdWar";
	};
	class rhs_bmd2;
	class ZSN_VDV_bmd2: rhs_bmd2
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
		faction = "ZSN_ERangers_ColdWar";
	};
	class ZSN_DVDV_bmd2: ZSN_VDV_bmd2
	{
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
		faction = "ZSN_ERangersD_ColdWar";
	};
	class rhs_bmd2k;
	class ZSN_VDV_bmd2k: rhs_bmd2k
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
		faction = "ZSN_ERangers_ColdWar";
	};
	class ZSN_DVDV_bmd2k: ZSN_VDV_bmd2k
	{
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
		faction = "ZSN_ERangersD_ColdWar";
	};
	class rhs_bmp1tank_base;
	class rhs_bmp_base;
	class rhs_bmp1_msv;
	class ZSN_MSV_bmp1: rhs_bmp1_msv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_DMSV_bmp1: ZSN_MSV_bmp1
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"};
	};
	class rhs_bmp1p_msv;
	class ZSN_MSV_bmp1p: rhs_bmp1p_msv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_DMSV_bmp1p: ZSN_MSV_bmp1p
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"};
	};
	class rhs_bmp1k_msv;
	class ZSN_MSV_bmp1k: rhs_bmp1k_msv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_DMSV_bmp1k: ZSN_MSV_bmp1k
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"};
	};
	class rhs_bmp1d_msv;
	class ZSN_MSV_bmp1d: rhs_bmp1d_msv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_DMSV_bmp1d: ZSN_MSV_bmp1d
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"};
	};
	class rhs_bmp2e_msv;
	class ZSN_MSV_BMP2e: rhs_bmp2e_msv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_DMSV_BMP2e: ZSN_MSV_BMP2e
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"};
	};
	class rhs_bmp2_msv;
	class ZSN_MSV_bmp2: rhs_bmp2_msv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_DMSV_bmp2: ZSN_MSV_bmp2
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"};
	};
	class rhs_bmp2k_msv;
	class ZSN_MSV_bmp2k: rhs_bmp2k_msv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_DMSV_bmp2k: ZSN_MSV_bmp2k
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"};
	};
	class rhs_bmp2d_msv;
	class ZSN_MSV_bmp2d: rhs_bmp2d_msv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_DMSV_bmp2d: ZSN_MSV_bmp2d
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa"};
	};
	class rhs_btr70_msv;
	class ZSN_MSV_BTR70: rhs_btr70_msv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_DMSV_btr70: ZSN_MSV_btr70
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_btr70_camo\data\btr70_1_sand_co.paa","rhsafrf\addons\rhs_btr70_camo\data\btr70_2_sand_co.paa"};
	};
	class rhs_btr80_vdv;
	class ZSN_vdv_btr80: rhs_btr80_vdv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
		faction = "ZSN_ERangers_ColdWar";
	};
	class ZSN_DVDV_btr80: ZSN_VDV_btr80
	{
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
		faction = "ZSN_ERangersD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_des_co.paa","rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_des_co.paa","rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_des_co.paa"};
	};
	class rhs_zsu234_aa;
	class ZSN_msv_shilka: rhs_zsu234_aa
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_DMSV_shilka: ZSN_MSV_shilka
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenselectionstextures[] = {"\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_01_des_co.paa","\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_02_des_co.paa","\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_03_des_co.paa"};
	};
	class rhs_t72bb_tv;
	class ZSN_msv_t72bb: rhs_t72bb_tv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_DMSV_t72bb: ZSN_msv_t72bb
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01b_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02b_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa"};
	};
	class rhs_a3t72tank_base;
	class rhs_t72ba_tv;
	class ZSN_msv_t72ba: rhs_t72ba_tv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_DMSV_t72ba: ZSN_msv_t72ba
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01a_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02a_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa"};
	};
	class rhs_tank_base;
	class rhs_t80b;
	class ZSN_msv_t80b: rhs_t80b
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class rhs_t80bk;
	class ZSN_msv_t80bk: rhs_t80bk
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class rhs_t80bv;
	class ZSN_msv_t80bv: rhs_t80bv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class rhs_t80bvk;
	class ZSN_msv_t80bvk: rhs_t80bvk
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class rhs_t80;
	class ZSN_MSV_T80: rhs_t80
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class rhs_t80a;
	class ZSN_MSV_T80a: rhs_t80a
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class rhs_truck;
	class rhs_gaz66_repair_base;
	class rhs_gaz66_repair_vmf;
	class ZSN_CUP_VMF_Ural_Repair: rhs_gaz66_repair_vmf
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
	};
	class ZSN_CUP_DVMF_Ural_Repair: ZSN_CUP_VMF_Ural_Repair
	{
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_gaz66_repair_msv;
	class ZSN_CUP_MSV_Ural_Repair: rhs_gaz66_repair_msv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_CUP_DMSV_Ural_Repair: ZSN_CUP_MSV_Ural_Repair
	{
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_gaz66_ammo_base;
	class rhs_gaz66_ammo_vmf;
	class ZSN_CUP_VMF_Ural_Reammo: rhs_gaz66_ammo_vmf
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa","\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
		maximumLoad = 20000;
		class Transportweapons
		{
			delete _xx_CUP_launch_rpg18;
			class _xx_rhs_weap_rpg26
			{
				weapon = "rhs_weap_rpg26";
				count = 10;
			};
			class _xx_CUP_arifle_AK74
			{
				weapon = "CUP_arifle_AK74";
				count = 2;
			};
		};
		class TransportBackpacks
		{
			class _xx_ZSN_762x54_ammobelts
			{
				backpack = "ZSN_762x54_ammobelts";
				count = 3;
			};
			class _xx_CUP_B_CivPack_WDL
			{
				backpack = "CUP_B_CivPack_WDL";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_PG7VR_M
			{
				magazine = "CUP_PG7VR_M";
				count = 8;
			};
			class _xx_CUP_RPG18_M
			{
				magazine = "CUP_RPG18_M";
				count = 10;
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
				count = 6;
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
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
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
	};
	class ZSN_CUP_DVMF_Ural_Reammo: ZSN_CUP_VMF_Ural_Reammo
	{
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class rhs_gaz66_ammo_msv;
	class ZSN_CUP_MSV_Ural_Reammo: rhs_gaz66_ammo_msv
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa","\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
		maximumLoad = 20000;
		class Transportweapons
		{
			delete _xx_CUP_launch_rpg18;
			class _xx_rhs_weap_rpg26
			{
				weapon = "rhs_weap_rpg26";
				count = 10;
			};
			class _xx_CUP_arifle_AK74
			{
				weapon = "CUP_arifle_AK74";
				count = 2;
			};
		};
		class TransportBackpacks
		{
			class _xx_ZSN_762x54_ammobelts
			{
				backpack = "ZSN_762x54_ammobelts";
				count = 3;
			};
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
				count = 20;
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
				count = 6;
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
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
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
	};
	class ZSN_CUP_DMSV_Ural_Reammo: ZSN_CUP_MSV_Ural_Reammo
	{
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	};
	class RHS_ZU23_MSV;
	class ZSN_GUER_StaticZU23: RHS_ZU23_MSV
	{
		side = 2;
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
	};
	class ZSN_GUER_StaticZU23D: RHS_ZU23_MSV
	{
		side = 2;
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
	};
	class RHS_NSV_TriPod_MSV;
	class ZSN_MSV_NSV: RHS_NSV_TriPod_MSV
	{
		faction = "ZSN_EArmy_ColdWar";
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
	};
	class ZSN_DMSV_NSV: RHS_NSV_TriPod_MSV
	{
		faction = "ZSN_EArmyD_ColdWar";
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
	};
	class ZSN_VDV_NSV: RHS_NSV_TriPod_MSV
	{
		faction = "ZSN_ERangers_ColdWar";
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
	};
	class ZSN_DVDV_NSV: RHS_NSV_TriPod_MSV
	{
		faction = "ZSN_ERangersD_ColdWar";
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
	};
	class ZSN_VMF_NSV: RHS_NSV_TriPod_MSV
	{
		faction = "ZSN_EMarines_ColdWar";
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
	};
	class ZSN_DVMF_NSV: RHS_NSV_TriPod_MSV
	{
		faction = "ZSN_EMarinesD_ColdWar";
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
	};
	class rhs_DSHKM_ins;
	class ZSN_CSLA_DSHKM: rhs_DSHKM_ins
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_EEuro_ColdWar";
		crew = "ZSN_EurosolEB";
		typicalCargo[] = {"ZSN_EurosolEB"};
	};
	class ZSN_DCSLA_DSHKM: rhs_DSHKM_ins
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_EEuroD_ColdWar";
		crew = "ZSN_EurosolEDB";
		typicalCargo[] = {"ZSN_EurosolEDB"};
	};
	class rhs_DSHKM_Mini_TriPod_ins;
	class ZSN_GUER_M2LowMGG: rhs_DSHKM_Mini_TriPod_ins
	{
		side = 2;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
	};
	class ZSN_GUER_M2LowMGDG: rhs_DSHKM_Mini_TriPod_ins
	{
		side = 2;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
	};
	class RHS_AGS30_TriPod_MSV;
	class ZSN_StaticGMGE: RHS_AGS30_TriPod_MSV
	{
		faction = "ZSN_EArmy_ColdWar";
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
	};
	class ZSN_StaticGMGDE: RHS_AGS30_TriPod_MSV
	{
		faction = "ZSN_EArmyD_ColdWar";
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
	};
	class ZSN_RStaticGMGE: RHS_AGS30_TriPod_MSV
	{
		faction = "ZSN_ERangers_ColdWar";
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
	};
	class ZSN_RStaticGMGDE: RHS_AGS30_TriPod_MSV
	{
		faction = "ZSN_ERangersD_ColdWar";
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
	};
	class ZSN_MStaticGMGE: RHS_AGS30_TriPod_MSV
	{
		faction = "ZSN_EMarines_ColdWar";
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
	};
	class ZSN_MStaticGMGDE: RHS_AGS30_TriPod_MSV
	{
		faction = "ZSN_EMarinesD_ColdWar";
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
	};
	class rhs_SPG9_INS;
	class ZSN_GUER_StaticSPG9: rhs_SPG9_INS
	{
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
	};
	class ZSN_GUER_StaticSPG9D: rhs_SPG9_INS
	{
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
	};
	class rhs_Igla_AA_pod_msv;
	class ZSN_MSV_Igla: rhs_Igla_AA_pod_msv
	{
		faction = "ZSN_EArmy_ColdWar";
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
	};
	class ZSN_DMSV_Igla: rhs_Igla_AA_pod_msv
	{
		faction = "ZSN_EArmyD_ColdWar";
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
	};
	class ZSN_VDV_Igla: rhs_Igla_AA_pod_msv
	{
		faction = "ZSN_ERangers_ColdWar";
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
	};
	class ZSN_DVDV_Igla: rhs_Igla_AA_pod_msv
	{
		faction = "ZSN_ERangersD_ColdWar";
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
	};
	class ZSN_VMF_Igla: rhs_Igla_AA_pod_msv
	{
		faction = "ZSN_EMarines_ColdWar";
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
	};
	class ZSN_DVMF_Igla: rhs_Igla_AA_pod_msv
	{
		faction = "ZSN_EMarinesD_ColdWar";
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
	};
	class rhs_2b14_82mm_msv;
	class ZSN_static2b14: rhs_2b14_82mm_msv
	{
		faction = "ZSN_EArmy_ColdWar";
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
	};
	class ZSN_static2b14D: rhs_2b14_82mm_msv
	{
		faction = "ZSN_EArmyD_ColdWar";
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
	};
	class ZSN_Rstatic2b14: rhs_2b14_82mm_msv
	{
		faction = "ZSN_ERangers_ColdWar";
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
	};
	class ZSN_Rstatic2b14D: rhs_2b14_82mm_msv
	{
		faction = "ZSN_ERangersD_ColdWar";
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
	};
	class ZSN_Mstatic2b14: rhs_2b14_82mm_msv
	{
		faction = "ZSN_EMarines_ColdWar";
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
	};
	class ZSN_Mstatic2b14D: rhs_2b14_82mm_msv
	{
		faction = "ZSN_EMarinesD_ColdWar";
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
	};
	class ZSN_CSLA_Static2b14: rhs_2b14_82mm_msv
	{
		faction = "ZSN_EEuro_ColdWar";
		crew = "ZSN_EurosolEB";
		typicalCargo[] = {"ZSN_EurosolEB"};
	};
	class ZSN_CSLA_Static2b14D: rhs_2b14_82mm_msv
	{
		faction = "ZSN_EEuroD_ColdWar";
		crew = "ZSN_EurosolEDB";
		typicalCargo[] = {"ZSN_EurosolEDB"};
	};
	class rhs_Metis_9k115_2_msv;
	class ZSN_StaticMetis: rhs_Metis_9k115_2_msv
	{
		faction = "ZSN_EArmy_ColdWar";
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
	};
	class ZSN_StaticMetisD: rhs_Metis_9k115_2_msv
	{
		faction = "ZSN_EArmyD_ColdWar";
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
	};
	class ZSN_RStaticMetis: rhs_Metis_9k115_2_msv
	{
		faction = "ZSN_ERangers_ColdWar";
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
	};
	class ZSN_RStaticMetisD: rhs_Metis_9k115_2_msv
	{
		faction = "ZSN_ERangersD_ColdWar";
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
	};
	class ZSN_MStaticMetis: rhs_Metis_9k115_2_msv
	{
		faction = "ZSN_EMarines_ColdWar";
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
	};
	class ZSN_MStaticMetisD: rhs_Metis_9k115_2_msv
	{
		faction = "ZSN_EMarinesD_ColdWar";
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
	};
	class rhs_D30_msv;
	class ZSN_CUP_MSV_D30: rhs_D30_msv
	{
		faction = "ZSN_EArmy_ColdWar";
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
	};
	class ZSN_CUP_DMSV_D30: rhs_D30_msv
	{
		faction = "ZSN_EArmyD_ColdWar";
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
	};
	class ZSN_VDV_D30: rhs_D30_msv
	{
		faction = "ZSN_ERangers_ColdWar";
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
	};
	class ZSN_DVDV_D30: rhs_D30_msv
	{
		faction = "ZSN_ERangersD_ColdWar";
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
	};
	class ZSN_CUP_VMF_D30: rhs_D30_msv
	{
		faction = "ZSN_EMarines_ColdWar";
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
	};
	class ZSN_CUP_DVMF_D30: rhs_D30_msv
	{
		faction = "ZSN_EMarinesD_ColdWar";
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
	};
	class ZSN_CSLA_D30: rhs_D30_msv
	{
		faction = "ZSN_EEuro_ColdWar";
		crew = "ZSN_EurosolEB";
		typicalCargo[] = {"ZSN_EurosolEB"};
	};
	class ZSN_CSLA_D30D: rhs_D30_msv
	{
		faction = "ZSN_EEuroD_ColdWar";
		crew = "ZSN_EurosolEDB";
		typicalCargo[] = {"ZSN_EurosolEDB"};
	};
};
class CfgGroups
{
	class East
	{
		class ZSN_EArmy_ColdWar
		{
			name = "Cold War USSR Army";
			class Armored
			{
				name = "Armored";
				class ZSN_EArmy_T72Platoon
				{
					name = "T80 Platoon";
					faction = "ZSN_EArmy_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_MSV_T80a";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_MSV_T80a";
						rank = "Lieutnant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_MSV_T80a";
						rank = "Lieutnant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_MSV_T80a";
						rank = "Lieutnant";
						position[] = {40,0,0};
					};
				};
			};
			class Mechanised
			{
				name = "Mechanised Infantry";
				class ZSN_EArmy_MotorizedInfantry
				{
					name = "Motorized Infantry Squad";
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
					class Unit9
					{
						side = 0;
						vehicle = "ZSN_CUP_MSV_Ural_Open";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};
				};
				class ZSN_EArmy_BTRInfantry
				{
					name = "BTR Infantry Squad";
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
					class Unit9
					{
						side = 0;
						vehicle = "ZSN_MSV_BTR70";
						rank = "Sergeant";
						position[] = {0,-5,0};
					};
				};
				class ZSN_EArmy_BMP2Infantry
				{
					name = "BMP-2 Infantry Squad";
					faction = "ZSN_EArmy_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_SoldierENCO";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_MSV_bmp2";
						rank = "Sergeant";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_SoldierEG";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_SoldierELAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_SoldierELAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "ZSN_SoldierEAR";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_SoldierEMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
			};
		};
		class ZSN_EMarines_ColdWar
		{
			name = "Cold War USSR Marines";
			class Mechanised
			{
				name = "Mechanised Infantry";
				class ZSN_EMarine_MotorizedInfantry
				{
					name = "Motorized Infantry Squad";
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
						vehicle = "ZSN_MarineEMG";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_MarineEMG";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_MarineEMGAss";
						rank = "Private";
						position[] = {5,-4,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "ZSN_MarineEMGAss";
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
						vehicle = "ZSN_MarineELAWAss";
						rank = "Private";
						position[] = {0,-6,0};
					};
					class Unit13
					{
						side = 0;
						vehicle = "ZSN_CUP_VMF_Ural_Open";
						rank = "CORPORAL";
						position[] = {0,15,0};
					};
				};
			};
		};
		class ZSN_EArmyD_ColdWar
		{
			name = "Cold War USSR Army (Desert)";
			class Armored
			{
				name = "Armored";
				class ZSN_EArmyD_T72Platoon
				{
					name = "T72 Platoon";
					faction = "ZSN_EArmyD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_DMSV_t72bb";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_DMSV_t72bb";
						rank = "Lieutnant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_DMSV_t72bb";
						rank = "Lieutnant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_DMSV_t72bb";
						rank = "Lieutnant";
						position[] = {40,0,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class ZSN_EArmyD_MotorizedInfantry
				{
					name = "Motorized Infantry Squad";
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
					class Unit9
					{
						side = 0;
						vehicle = "ZSN_CUP_DMSV_Ural";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};
				};
				class ZSN_EArmyD_BTRInfantry
				{
					name = "BTR Infantry Squad";
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
					class Unit9
					{
						side = 0;
						vehicle = "ZSN_DMSV_BTR70";
						rank = "Sergeant";
						position[] = {0,-5,0};
					};
				};
				class ZSN_EArmyD_BMP2Infantry
				{
					name = "BMP-2 Infantry Squad";
					faction = "ZSN_EArmyD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_SoldierEDNCO";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_DMSV_bmp2";
						rank = "Sergeant";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_SoldierEDG";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_SoldierEDLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_SoldierEDLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "ZSN_SoldierEDAR";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_SoldierEDMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
			};
		};
		class ZSN_EMarinesD_ColdWar
		{
			name = "Cold War USSR Marines (Desert)";
			class Motorized
			{
				name = "Motorized Infantry";
				class ZSN_EMarineD_MotorizedInfantry
				{
					name = "Motorized Infantry Squad";
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
						vehicle = "ZSN_MarineEDMG";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_MarineEDMG";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_MarineEDMGAss";
						rank = "Private";
						position[] = {5,-4,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "ZSN_MarineEDMGAss";
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
						vehicle = "ZSN_MarineEDLAWAss";
						rank = "Private";
						position[] = {0,-6,0};
					};
					class Unit13
					{
						side = 0;
						vehicle = "ZSN_CUP_DVMF_Ural";
						rank = "CORPORAL";
						position[] = {0,15,0};
					};
				};
			};
		};
	};
};
//};
