////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Jan 01 18:59:50 2017 : Created on Sun Jan 01 18:59:50 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_hlc_east : config.bin{
class CfgPatches
{
	class ZSN_ColdWarEast_Plus
	{
		author = "ZluskeN";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarEast","vtn_core_wpn_config"};
	};
};
class cfgFactionClasses
{
	class ZSN_EArmy_ColdWar
	{
       	 	backpack_tf_faction_radio = "VTN_BP_R168KNE_FLORA";
	};
	class ZSN_EArmyD_ColdWar
	{
       	 	backpack_tf_faction_radio = "VTN_BP_R168KNE_FLORA";
	};
	class ZSN_EMarines_ColdWar
	{
       	 	backpack_tf_faction_radio = "VTN_BP_R168KNE_FLORA";
	};
	class ZSN_EMarinesD_ColdWar
	{
       	 	backpack_tf_faction_radio = "VTN_BP_R168KNE_FLORA";
	};
	class ZSN_ERangers_ColdWar
	{
       	 	backpack_tf_faction_radio = "VTN_BP_R168KNE_FLORA";
	};
	class ZSN_ERangersD_ColdWar
	{
       	 	backpack_tf_faction_radio = "VTN_BP_R168KNE_FLORA";
	};
};
class CfgVehicles
{
	class ReammoBox;
	class Bag_Base;
	class CUP_B_SLA_Medicbag;
	class ZSN_pack_medic: CUP_B_SLA_Medicbag
	{
		model = "vtn_bp_sansumka_md\vtn_sansumka";
		picture = "vtn_bp_sansumka_cf\ico\vtn_ico_bp_cmbag_ca.paa";
		hiddenSelectionsTextures[] = {"vtn_bp_sansumka_tx\sansumka_co.paa"};
	};
	class CUP_B_RPGPack_Khaki;
	class ZSN_rpg_pack_rpg29: CUP_B_RPGPack_Khaki
	{
		model = "vtn_bp_6sh11_12_md\6Sh11";
		picture = "vtn_bp_6sh11_12_cf\ico\ico_6Sh11_ca.paa";
	};
	class ZSN_rpg_pack_rpg7: CUP_B_RPGPack_Khaki
	{
		model = "vtn_bp_6sh11_12_md\6Sh11";
		picture = "vtn_bp_6sh11_12_cf\ico\ico_6Sh11_ca.paa";
	};
	class ZSN_csla_rpg_pack_rpg7: CUP_B_RPGPack_Khaki
	{
		model = "vtn_bp_6sh11_12_md\6Sh11";
		picture = "vtn_bp_6sh11_12_cf\ico\ico_6Sh11_ca.paa";
	};
	class CUP_B_CivPack_WDL;
	class ZSN_45rnd_545x39_bag: CUP_B_CivPack_WDL
	{
		class TransportMagazines
		{
			delete _xx_CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M;
			class _xx_VTN_RPK74_45b_TRC
			{
				magazine = "VTN_RPK74_45b_TRC";
				count = 9;
			};
		};
	};
	class ZSN_200rnd_762x54_bandoliers: CUP_B_CivPack_WDL
	{
		class TransportMagazines
		{
			delete _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M;
			class _xx_VTN_PK_100s_TRC
			{
				magazine = "VTN_PK_100s_TRC";
				count = 1;
			};
		};
	};
	class usm_pack_762x51_ammobelts;
	class ZSN_762x51_ammobelts;
	class ZSN_762x54_ammobelts: ZSN_762x51_ammobelts
	{
		class TransportMagazines
		{
			delete _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M;
			class _xx_VTN_PK_100s_TRC
			{
				magazine = "VTN_PK_100s_TRC";
				count = 5;
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
			class _xx_VTN_M136_HEAT_C
			{
				weapon = "VTN_M136_HEAT_C";
				count = 10;
			};
		};
		class TransportMagazines
		{
			delete _xx_CUP_15Rnd_9x19_M9;
			class _xx_VTN_M9_15_FMJ
			{
				magazine = "VTN_M9_15_FMJ";
				count = 33;
			};
			delete _xx_CUP_M72A6_M;
			class _xx_VTN_SP_1k_WHITE
			{
				magazine = "VTN_SP_1k_WHITE";
				count = 60;
			};
			delete _xx_6Rnd_GreenSignal_F;
			class _xx_VTN_SP_1k_GREEN
			{
				magazine = "VTN_SP_1k_GREEN";
				count = 30;
			};
			delete _xx_6Rnd_RedSignal_F;
			class _xx_VTN_SP_1k_RED
			{
				magazine = "VTN_SP_1k_RED";
				count = 30;
			};
			delete _xx_CUP_HandGrenade_M67;
			class _xx_VTN_M67
			{
				magazine = "VTN_M67";
				count = 100;
			};
			delete _xx_SmokeShellGreen;
			class _xx_VTN_M18G
			{
				magazine = "VTN_M18G";
				count = 40;
			};
			class _xx_VTN_M18R
			{
				magazine = "VTN_M18R";
				count = 40;
			};
		};
	};
	class CUP_RUSpecialWeaponsBox;
	class ZSN_East_Ammocrate: CUP_RUSpecialWeaponsBox
	{
		class Transportweapons
		{
			delete _xx_CUP_launch_RPG18;
			class _xx_VTN_RPG26_D
			{
				weapon = "VTN_RPG26_D";
				count = 10;
			};
		};
		class TransportMagazines
		{
			delete _xx_CUP_30Rnd_545x39_AK_M;
			class _xx_VTN_AK74_30b_SC
			{
				magazine = "VTN_AK74_30b_SC";
				count = 120;
			};
			delete _xx_CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M;
			class _xx_VTN_AK74_30b_TRC
			{
				magazine = "VTN_AK74_30b_TRC";
				count = 60;
			};
			delete _xx_CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M;
			class _xx_VTN_RPK74_45b_TRC
			{
				magazine = "VTN_RPK74_45b_TRC";
				count = 120;
			};
			delete _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M;
			class _xx_VTN_PK_100s_TRC
			{
				magazine = "VTN_PK_100s_TRC";
				count = 3;
			};
			delete _xx_CUP_10Rnd_762x54_SVD_M;
			class _xx_VTN_SVD_10s_SC
			{
				magazine = "VTN_SVD_10s_SC";
				count = 84;
			};
			delete _xx_CUP_1Rnd_HE_GP25_M;
			class _xx_VTN_VOG25
			{
				magazine = "VTN_VOG25";
				count = 200;
			};
			delete _xx_CUP_1Rnd_SMOKE_GP25_M;
			class _xx_VTN_VG40MD
			{
				magazine = "VTN_VG40MD";
				count = 100;
			};
			delete _xx_CUP_FlareWhite_GP25_M;
			class _xx_VTN_VG40OP
			{
				magazine = "VTN_VG40OP";
				count = 100;
			};
			delete _xx_CUP_8Rnd_9x18_Makarov_M;
			class _xx_VTN_PM_8s_PST
			{
				magazine = "VTN_PM_8s_PST";
				count = 125;
			};
			delete _xx_CUP_RPG18_M;
			class _xx_VTN_SP_1k_WHITE
			{
				magazine = "VTN_SP_1k_WHITE";
				count = 60;
			};
			delete _xx_6Rnd_RedSignal_F;
			class _xx_VTN_SP_1k_RED
			{
				magazine = "VTN_SP_1k_RED";
				count = 30;
			};
			delete _xx_6Rnd_GreenSignal_F;
			class _xx_VTN_SP_1k_GREEN
			{
				magazine = "VTN_SP_1k_GREEN";
				count = 30;
			};
			delete _xx_CUP_HandGrenade_RGD5;
			class _xx_VTN_RGD5
			{
				magazine = "VTN_RGD5";
				count = 100;
			};
			delete _xx_SmokeShellGreen;
			class _xx_VTN_RDG2B
			{
				magazine = "VTN_RDG2B";
				count = 40;
			};
			class _xx_VTN_RDG2CH
			{
				magazine = "VTN_RDG2CH";
				count = 40;
			};
		};
	};
	class B_Soldier_base_F;
	class usm_base_w;
	class usm_base_w_m;
	class usm_base_d;
	class usm_base_d_m;
	class ZSN_SoldierW;
	class ZSN_SoldierWAR: ZSN_SoldierW
	{
		magazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWMedic: ZSN_SoldierW
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWRTO: ZSN_SoldierW
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWB: ZSN_SoldierW
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWMGAss: ZSN_SoldierW
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWLAW: ZSN_SoldierW
	{
		magazines[] = {"CUP_M72A6_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_M72A6_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWSniper: ZSN_SoldierW
	{
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWOfficer: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_M9","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWNCO: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_SP81","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_SP81","Binocular"};
		magazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","VTN_M18G","VTN_M18G","VTN_M18R","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","VTN_M18G","VTN_M18G","VTN_M18R","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWAT: ZSN_SoldierW
	{
		magazines[] = {"CUP_Dragon_EP1_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_Dragon_EP1_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWATAss: ZSN_SoldierW
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWAA: ZSN_SoldierW
	{
		magazines[] = {"CUP_Stinger_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWSaboteur: ZSN_Soldierw
	{
		linkedItems[] = {"H_Watchcap_blk","VTN_ANPVS7","usm_vest_LBE_rmp_m","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"H_Watchcap_blk","VTN_ANPVS7","usm_vest_LBE_rmp_m","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierWD;
	class ZSN_SoldierWDAR: ZSN_SoldierWD
	{
		magazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWDMedic: ZSN_SoldierWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWDRTO: ZSN_SoldierWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWDB: ZSN_SoldierWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWDMGAss: ZSN_SoldierWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWDLAW: ZSN_SoldierWD
	{
		magazines[] = {"CUP_M72A6_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_M72A6_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWDSniper: ZSN_SoldierWD
	{
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWDOfficer: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_M9","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWDNCO: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_SP81","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_SP81","Binocular"};
		magazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","VTN_M18R","VTN_M18G","VTN_M18G","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","VTN_M18R","VTN_M18G","VTN_M18G","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWDAT: ZSN_SoldierWD
	{
		magazines[] = {"CUP_Dragon_EP1_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_Dragon_EP1_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWDATAss: ZSN_SoldierWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWDAA: ZSN_SoldierWD
	{
		magazines[] = {"CUP_Stinger_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18R","VTN_M18G","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineW;
	class ZSN_MarineWAR: ZSN_MarineW
	{
		magazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWMedic: ZSN_MarineW
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWRTO: ZSN_MarineW
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWB: ZSN_MarineW
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWMGAss: ZSN_MarineW
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWLAW: ZSN_MarineW
	{
		magazines[] = {"CUP_SMAW_Spotting","CUP_SMAW_HEAA_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_SMAW_Spotting","CUP_SMAW_HEAA_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWLAWAss: ZSN_MarineW
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWSniper: ZSN_MarineW
	{
		magazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWNCO: ZSN_MarineW
	{
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_SP81","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_SP81","Binocular"};
		magazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","VTN_M18G","VTN_M18R","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","VTN_M18G","VTN_M18R","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWAT: ZSN_MarineW
	{
		magazines[] = {"CUP_Dragon_EP1_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_Dragon_EP1_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWATAss: ZSN_MarineW
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWAA: ZSN_MarineW
	{
		magazines[] = {"CUP_Stinger_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWD;
	class ZSN_MarineWDAR: ZSN_MarineWD
	{
		magazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWDMedic: ZSN_MarineWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWDRTO: ZSN_MarineWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWDB: ZSN_MarineWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWDMGAss: ZSN_MarineWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWDLAW: ZSN_MarineWD
	{
		magazines[] = {"CUP_SMAW_Spotting","CUP_SMAW_HEAA_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_SMAW_Spotting","CUP_SMAW_HEAA_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWDLAWAss: ZSN_MarineWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWDSniper: ZSN_MarineWD
	{
		magazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWDNCO: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_SP81","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_SP81","Binocular"};
		magazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","VTN_M18G","VTN_M18R","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","VTN_M18G","VTN_M18R","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWDAT: ZSN_MarineWD
	{
		magazines[] = {"CUP_Dragon_EP1_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_Dragon_EP1_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWDATAss: ZSN_MarineWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_MarineWDAA: ZSN_MarineWD
	{
		magazines[] = {"CUP_Stinger_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_Rangerw;
	class ZSN_RangerWAR: ZSN_Rangerw
	{
		magazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWMedic: ZSN_Rangerw
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWRTO: ZSN_Rangerw
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWB: ZSN_Rangerw
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWMGAss: ZSN_Rangerw
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWLAW: ZSN_Rangerw
	{
		magazines[] = {"CUP_MAAWS_HEAT_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_MAAWS_HEAT_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWLAWAss: ZSN_Rangerw
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWSniper: ZSN_Rangerw
	{
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWOfficer: ZSN_Rangerw
	{
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_M9","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWNCO: ZSN_Rangerw
	{
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_SP81","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_SP81","Binocular"};
		magazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","VTN_M18G","VTN_M18R","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","VTN_M18G","VTN_M18R","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerwAT: ZSN_Rangerw
	{
		magazines[] = {"CUP_Dragon_EP1_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_Dragon_EP1_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerwATAss: ZSN_Rangerw
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWAA: ZSN_Rangerw
	{
		magazines[] = {"CUP_Stinger_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWPilot: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","VTN_M9"};
		respawnWeapons[] = {"Throw","Put","VTN_M9"};
		magazines[] = {"VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ"};
		respawnMagazines[] = {"VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ"};
		Items[] = {"VTN_ANPVS7","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"VTN_ANPVS7","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR"};
	};
	class ZSN_RangerWD;
	class ZSN_RangerWDAR: ZSN_RangerWD
	{
		magazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWDMedic: ZSN_RangerWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWDRTO: ZSN_RangerWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWDB: ZSN_RangerWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWDMGAss: ZSN_RangerWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWDLAW: ZSN_RangerWD
	{
		magazines[] = {"CUP_MAAWS_HEAT_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_MAAWS_HEAT_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWDLAWass: ZSN_RangerWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWDSniper: ZSN_RangerWD
	{
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWDOfficer: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_M9","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWDNCO: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_SP81","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_arifle_M16A2","VTN_SP81","Binocular"};
		magazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","VTN_M18G","VTN_M18R","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","VTN_M18G","VTN_M18R","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWDAT: ZSN_RangerWD
	{
		magazines[] = {"CUP_Dragon_EP1_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_Dragon_EP1_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWDATAss: ZSN_RangerWD
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_RangerWDAA: ZSN_RangerWD
	{
		magazines[] = {"CUP_Stinger_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","VTN_M18G","VTN_M18R","VTN_M67","VTN_M67"};
	};
	class ZSN_SoldierWDPilot: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","VTN_M9"};
		respawnWeapons[] = {"Throw","Put","VTN_M9"};
		magazines[] = {"VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ"};
		respawnMagazines[] = {"VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ","VTN_M9_15_FMJ"};
		Items[] = {"VTN_ANPVS7","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"VTN_ANPVS7","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_DAGR"};
	};
	class I_G_soldier_base_F;
	class ZSN_EurosolG: I_G_Soldier_base_F
	{
		weapons[] = {"Throw","Put","VTN_AKM_1962"};
		respawnWeapons[] = {"Throw","Put","VTN_AKM_1962"};
	};
	class ZSN_EurosolGB: ZSN_EurosolG
	{
		magazines[] = {"VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
		respawnMagazines[] = {"VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
	};
	class ZSN_EurosolGSniper: ZSN_EurosolG
	{
		weapons[] = {"Throw","Put","VTN_KO44"};
		respawnWeapons[] = {"Throw","Put","VTN_KO44"};
		magazines[] = {"VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
		respawnMagazines[] = {"VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
	};
	class ZSN_EurosolGMG: ZSN_EurosolG
	{
		weapons[] = {"Throw","Put","VTN_RPK"};
		respawnWeapons[] = {"Throw","Put","VTN_RPK"};
		magazines[] = {"VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
		respawnMagazines[] = {"VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
	};
	class ZSN_EurosolGLAW: ZSN_EurosolG
	{
		weapons[] = {"Throw","Put","VTN_AKM_1962","CUP_launch_RPG7V"};
		respawnWeapons[] = {"Throw","Put","VTN_AKM_1962","CUP_launch_RPG7V"};
		magazines[] = {"CUP_PG7VL_M","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
		respawnMagazines[] = {"CUP_PG7VL_M","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
	};
	class ZSN_EurosolGLAWAss: ZSN_EurosolG
	{
		magazines[] = {"VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
		respawnMagazines[] = {"VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
	};
	class ZSN_EurosolGLeader: ZSN_EurosolG
	{
		weapons[] = {"Throw","Put","VTN_AKM_1962","VTN_SP81","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKM_1962","VTN_SP81","Binocular"};
		magazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_M18G","VTN_RDG2B","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
		respawnMagazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_M18G","VTN_RDG2B","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
	};
	class ZSN_EurosolGCrew: ZSN_EurosolG
	{
		weapons[] = {"Throw","Put","VTN_AKMS_1960","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKMS_1960","Binocular"};
		magazines[] = {"VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC"};
		respawnMagazines[] = {"VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC"};
	};
	class ZSN_EurosolGD: I_G_Soldier_base_F
	{
		weapons[] = {"Throw","Put","VTN_AKM_1962"};
		respawnWeapons[] = {"Throw","Put","VTN_AKM_1962"};
	};
	class ZSN_EurosolGDB: ZSN_EurosolGD
	{
		magazines[] = {"VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
		respawnMagazines[] = {"VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
	};
	class ZSN_EurosolGDSniper: ZSN_EurosolGD
	{
		weapons[] = {"Throw","Put","VTN_KO44"};
		respawnWeapons[] = {"Throw","Put","VTN_KO44"};
		magazines[] = {"VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
		respawnMagazines[] = {"VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_KO44_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
	};
	class ZSN_EurosolGDMG: ZSN_EurosolGD
	{
		weapons[] = {"Throw","Put","VTN_RPK"};
		respawnWeapons[] = {"Throw","Put","VTN_RPK"};
		magazines[] = {"VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
		respawnMagazines[] = {"VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_RPK_40s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
	};
	class ZSN_EurosolGDLAW: ZSN_EurosolGD
	{
		weapons[] = {"Throw","Put","VTN_AKM_1962","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","VTN_AKM_1962","CUP_launch_MAAWS"};
		magazines[] = {"CUP_PG7VL_M","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
		respawnMagazines[] = {"CUP_PG7VL_M","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
	};
	class ZSN_EurosolGDLAWAss: ZSN_EurosolGD
	{
		magazines[] = {"VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
		respawnMagazines[] = {"VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_M18G","VTN_RDG2B","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
	};
	class ZSN_EurosolGDLeader: ZSN_EurosolGD
	{
		weapons[] = {"Throw","Put","VTN_AKM_1962","VTN_SP81","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKM_1962","VTN_SP81","Binocular"};
		magazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_RDG2B","VTN_M18G","VTN_RDG2B","VTN_M18G","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
		respawnMagazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_RDG2B","VTN_M18G","VTN_RDG2B","VTN_M18G","VTN_KHATTABKA_VOG17","VTN_KHATTABKA_VOG17"};
	};
	class ZSN_EurosolGDCrew: ZSN_EurosolGD
	{
		weapons[] = {"Throw","Put","VTN_AKMS_1960","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKMS_1960","Binocular"};
		magazines[] = {"VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC"};
		respawnMagazines[] = {"VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC","VTN_AKM_30s_SC"};
	};
	class O_soldier_base_F;
	class ZSN_SoldierE: O_Soldier_base_F
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976"};
		Items[] = {"VTN_BANDANA","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"VTN_BANDANA","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
	};
	class ZSN_SoldierEAR: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","VTN_RPK74_1984"};
		respawnWeapons[] = {"Throw","Put","VTN_RPK74_1984"};
		magazines[] = {"VTN_RPK74_45b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_RPK74_45b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_SoldierEMedic: ZSN_SoldierE
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_SoldierEDriver: ZSN_SoldierE
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_SoldierEB: ZSN_SoldierE
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_SoldierEMG: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","VTN_PKM_1974"};
		respawnWeapons[] = {"Throw","Put","VTN_PKM_1974"};
		magazines[] = {"VTN_PK_100s_TRC","VTN_PK_100s_TRC"};
		respawnmagazines[] = {"VTN_PK_100s_TRC","VTN_PK_100s_TRC"};
	};
	class ZSN_SoldierEMGAss: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_SoldierELAW: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_RPG18"};
		magazines[] = {"CUP_RPG18_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_RPG18_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_SoldierESniper: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","VTN_SVD_1963"};
		respawnWeapons[] = {"Throw","Put","VTN_SVD_1963"};
		magazines[] = {"VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_SoldierEOfficer: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","VTN_PM","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","VTN_PM","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_SoldierENCO: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","VTN_SP81","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","VTN_SP81","Binocular"};
		magazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_RDG2B","VTN_RDG2CH","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_RDG2B","VTN_RDG2CH","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_SoldierELeader: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976_GP25","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976_GP25","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP","VTN_VG40MD","VTN_VG40MD"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP","VTN_VG40MD","VTN_VG40MD"};
	};
	class ZSN_SoldierEG: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976_GP25"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976_GP25"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP"};
	};
	class ZSN_SoldierEAT: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_Metis"};
		magazines[] = {"CUP_AT13_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_AT13_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_SoldierEATAss: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","ZSN_Rangefinder"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_SoldierEAA: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_Igla"};
		magazines[] = {"CUP_Igla_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_Igla_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_SoldierESaboteur: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","CUP_hgun_SA61","VTN_AS","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_SA61","VTN_AS","Binocular"};
		magazines[] = {"CUP_20Rnd_B_765x17_Ball_M","CUP_20Rnd_B_765x17_Ball_M","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_20Rnd_B_765x17_Ball_M","CUP_20Rnd_B_765x17_Ball_M","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_AS_20p_SC","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"H_Bandanna_khk_hs","VTN_1PN74","CUP_V_RUS_Smersh_1","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"H_Bandanna_khk_hs","VTN_1PN74","CUP_V_RUS_Smersh_1","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierECrew: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","VTN_AKS74U_1979","VTN_PM","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74U_1979","VTN_PM","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2B"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2B"};
		Items[] = {"VTN_BANDANA","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		RespawnItems[] = {"VTN_BANDANA","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
	};
	class ZSN_SoldierED: O_Soldier_base_F
	{
		uniformClass = "VTN_U_TK_DESERT";
		weapons[] = {"Throw","Put","VTN_AK74_1976"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976"};
		Items[] = {"VTN_BANDANA","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"VTN_BANDANA","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_EntrenchingTool"};
	};
	class ZSN_SoldierEDAR: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","VTN_RPK74_1984"};
		respawnWeapons[] = {"Throw","Put","VTN_RPK74_1984"};
		magazines[] = {"VTN_RPK74_45b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_RPK74_45b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDMedic: ZSN_SoldierED
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDDriver: ZSN_SoldierED
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDB: ZSN_SoldierED
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDMG: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","VTN_PKM_1974"};
		respawnWeapons[] = {"Throw","Put","VTN_PKM_1974"};
		magazines[] = {"VTN_PK_100s_TRC","VTN_PK_100s_TRC"};
		respawnmagazines[] = {"VTN_PK_100s_TRC","VTN_PK_100s_TRC"};
		linkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDMGASS: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDLAW: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_RPG18"};
		magazines[] = {"CUP_RPG18_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_RPG18_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDSniper: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","VTN_SVD_1963"};
		respawnWeapons[] = {"Throw","Put","VTN_SVD_1963"};
		magazines[] = {"VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDOfficer: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","VTN_PM","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","VTN_PM","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierEDNCO: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","VTN_SP81","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","VTN_SP81","Binocular"};
		magazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_RDG2B","VTN_RDG2CH","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_RDG2B","VTN_RDG2CH","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierEDLeader: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976_GP25","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976_GP25","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP","VTN_VG40MD","VTN_VG40MD"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP","VTN_VG40MD","VTN_VG40MD"};
		linkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt03","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt03","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierEDG: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976_GP25"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976_GP25"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP"};
		linkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDAT: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_Metis"};
		magazines[] = {"CUP_AT13_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_AT13_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDATAss: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","VTN_LPR1"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","VTN_LPR1"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt02","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDAA: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_Igla"};
		magazines[] = {"CUP_Igla_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_Igla_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_SSH68_KHAKI","CUP_V_O_SLA_Carrier_Belt","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDSaboteur: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","VTN_PB","VTN_AKS74U_SAWEDOFF","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_PB","VTN_AKS74U_SAWEDOFF","Binocular"};
		magazines[] = {"VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_SoldierEDCrew: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","VTN_AKS74U_1979","VTN_PM","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74U_1979","VTN_PM","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2B"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2B"};
		Items[] = {"VTN_BANDANA","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
		RespawnItems[] = {"VTN_BANDANA","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs"};
	};
	class ZSN_MarineE: O_Soldier_base_F
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976"};
	};
	class ZSN_MarineEAR: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_RPG18"};
		magazines[] = {"CUP_RPG18_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_RPG18_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEMedic: ZSN_MarineE
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEDriver: ZSN_MarineE
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEB: ZSN_MarineE
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEMG: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","VTN_PKM_1974"};
		respawnWeapons[] = {"Throw","Put","VTN_PKM_1974"};
		magazines[] = {"VTN_PK_100s_TRC","VTN_PK_100s_TRC"};
		respawnmagazines[] = {"VTN_PK_100s_TRC","VTN_PK_100s_TRC"};
	};
	class ZSN_MarineEMGASS: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineELAW: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_RPG7V_PGO7V"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_RPG7V_PGO7V"};
		magazines[] = {"CUP_PG7VR_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_PG7VR_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineELAWAss: ZSN_MarineE
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineESniper: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","VTN_SVD_1986"};
		respawnWeapons[] = {"Throw","Put","VTN_SVD_1986"};
		magazines[] = {"VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEOfficer: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","VTN_PM","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","VTN_PM","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineENCO: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","VTN_SP81","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","VTN_SP81","Binocular"};
		magazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_RDG2B","VTN_RDG2CH","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_RDG2B","VTN_RDG2CH","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineELeader: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976_GP25","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976_GP25","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP","VTN_VG40MD","VTN_VG40MD"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP","VTN_VG40MD","VTN_VG40MD"};
	};
	class ZSN_MarineEG: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976_GP25"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976_GP25"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP"};
	};
	class ZSN_MarineEAT: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_Metis"};
		magazines[] = {"CUP_AT13_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_AT13_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEATAss: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","VTN_LPR1"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","VTN_LPR1"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEAA: ZSN_MarineE
	{
		magazines[] = {"CUP_Igla_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_Igla_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineECrew: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","VTN_AKS74U_1979","VTN_PM","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74U_1979","VTN_PM","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2B"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2B"};
	};
	class ZSN_MarineED: O_Soldier_base_F
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976"};
	};
	class ZSN_MarineEDAR: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_RPG18"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_RPG18"};
		magazines[] = {"CUP_RPG18_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_RPG18_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEDMedic: ZSN_MarineED
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEDDriver: ZSN_MarineED
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEDB: ZSN_MarineED
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEDMG: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","VTN_PKM_1974"};
		respawnWeapons[] = {"Throw","Put","VTN_PKM_1974"};
		magazines[] = {"VTN_PK_100s_TRC","VTN_PK_100s_TRC"};
		respawnmagazines[] = {"VTN_PK_100s_TRC","VTN_PK_100s_TRC"};
	};
	class ZSN_MarineEDMGASS: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEDLAW: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_RPG7V_PGO7V"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_RPG7V_PGO7V"};
		magazines[] = {"CUP_PG7VR_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_PG7VR_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEDLAWASS: ZSN_MarineED
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEDSniper: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","VTN_SVD_1986"};
		respawnWeapons[] = {"Throw","Put","VTN_SVD_1986"};
		magazines[] = {"VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEDOfficer: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","VTN_PM","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","VTN_PM","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEDNCO: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","VTN_SP81","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","VTN_SP81","Binocular"};
		magazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_RDG2B","VTN_RDG2CH","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_RDG2B","VTN_RDG2CH","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEDLeader: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976_GP25","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976_GP25","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP","VTN_VG40MD","VTN_VG40MD"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP","VTN_VG40MD","VTN_VG40MD"};
	};
	class ZSN_MarineEDG: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976_GP25"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976_GP25"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP"};
	};
	class ZSN_MarineEDAT: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_Metis"};
		magazines[] = {"CUP_AT13_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_AT13_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEDATAss: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","VTN_LPR1"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","VTN_LPR1"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEDAA: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","VTN_AK74_1976","CUP_launch_Igla"};
		magazines[] = {"CUP_Igla_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_Igla_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
	};
	class ZSN_MarineEDCrew: ZSN_MarineED
	{
		weapons[] = {"Throw","Put","VTN_AKS74U_1979","VTN_PM","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74U_1979","VTN_PM","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2B"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2B"};
	};
	class ZSN_RangerE: O_Soldier_base_F
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976"};
	};
	class ZSN_RangerEAR: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","VTN_RPK74_1984"};
		respawnWeapons[] = {"Throw","Put","VTN_RPK74_1984"};
		magazines[] = {"VTN_RPK74_45b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_RPK74_45b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEMedic: ZSN_RangerE
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDriver: ZSN_RangerE
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEB: ZSN_RangerE
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEMG: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","VTN_PKM_1974"};
		respawnWeapons[] = {"Throw","Put","VTN_PKM_1974"};
		magazines[] = {"VTN_PK_100s_TRC","VTN_PK_100s_TRC"};
		respawnmagazines[] = {"VTN_PK_100s_TRC","VTN_PK_100s_TRC"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEMGAss: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerELAW: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","launch_RPG32_ghex_F"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","launch_RPG32_ghex_F"};
		magazines[] = {"RPG32_F","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"RPG32_F","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerELAWAss: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_LPR1"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_LPR1"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerESniper: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","VTN_SVD_1986"};
		respawnWeapons[] = {"Throw","Put","VTN_SVD_1986"};
		magazines[] = {"VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEOfficer: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_PM","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_PM","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerENCO: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_SP81","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_SP81","Binocular"};
		magazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_RDG2B","VTN_RDG2CH","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_RDG2B","VTN_RDG2CH","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerELeader: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976_GP25","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976_GP25","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP","VTN_VG40MD","VTN_VG40MD"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP","VTN_VG40MD","VTN_VG40MD"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_RUS_Smersh_2","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_RUS_Smersh_2","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerEG: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976_GP25"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976_GP25"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEAT: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","CUP_launch_Metis"};
		magazines[] = {"CUP_AT13_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_AT13_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEATAss: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_LPR1"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_LPR1"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEAA: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","CUP_launch_Igla"};
		magazines[] = {"CUP_Igla_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_Igla_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEPilot: ZSN_RangerE
	{
		uniformClass = "VTN_VVS_SUIT_BLUE";
		weapons[] = {"Throw","Put","VTN_AKS74U_1979"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74U_1979"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC"};
		Items[] = {"VTN_1PN74","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"VTN_1PN74","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		linkedItems[] = {"VTN_ZSH7V","VTN_CHICOM_KHAKI","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_ZSH7V","VTN_CHICOM_KHAKI","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerED: O_Soldier_base_F
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976"};
	};
	class ZSN_RangerEDAR: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","VTN_RPK74_1984"};
		respawnWeapons[] = {"Throw","Put","VTN_RPK74_1984"};
		magazines[] = {"VTN_RPK74_45b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_RPK74_45b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDMedic: ZSN_RangerED
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDDriver: ZSN_RangerED
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDB: ZSN_RangerED
	{
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDMG: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","VTN_PKM_1974"};
		respawnWeapons[] = {"Throw","Put","VTN_PKM_1974"};
		magazines[] = {"VTN_PK_100s_TRC","VTN_PK_100s_TRC"};
		respawnmagazines[] = {"VTN_PK_100s_TRC","VTN_PK_100s_TRC"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDMGAss: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDLAW: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","launch_RPG32_ghex_F"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","launch_RPG32_ghex_F"};
		magazines[] = {"RPG32_F","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"RPG32_F","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDLAWAss: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_LPR1"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_LPR1"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDSniper: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","VTN_SVD_1986"};
		respawnWeapons[] = {"Throw","Put","VTN_SVD_1986"};
		magazines[] = {"VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_SVD_10s_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDOfficer: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_PM","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_PM","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_PM_8s_PST","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerEDNCO: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_SP81","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_SP81","Binocular"};
		magazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_RDG2B","VTN_RDG2CH","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_WHITE","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_RED","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_SP_1k_GREEN","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_TRC","VTN_AK74_30b_TRC","VTN_RDG2B","VTN_RDG2CH","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerEDLeader: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976_GP25","Binocular"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976_GP25","Binocular"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP","VTN_VG40MD","VTN_VG40MD"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP","VTN_VG40MD","VTN_VG40MD"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_RUS_Smersh_2","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_RUS_Smersh_2","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerEDG: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976_GP25"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976_GP25"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VOG25","VTN_VG40OP","VTN_VG40OP"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDAT: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","CUP_launch_Metis"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","CUP_launch_Metis"};
		magazines[] = {"CUP_AT13_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_AT13_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDATAss: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_LPR1"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","VTN_LPR1"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_Light","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerEDAA: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","VTN_AKS74_1976","CUP_launch_Igla"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74_1976","CUP_launch_Igla"};
		magazines[] = {"CUP_Igla_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		respawnMagazines[] = {"CUP_Igla_M","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_RDG2B","VTN_RDG2CH","VTN_RGD5","VTN_RGD5"};
		linkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_TSH4M_H","CUP_V_O_Ins_Carrier_Rig_MG","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierEDPilot: ZSN_RangerED
	{
		uniformClass = "VTN_VVS_VKK15";
		weapons[] = {"Throw","Put","VTN_AKS74U_1979"};
		respawnWeapons[] = {"Throw","Put","VTN_AKS74U_1979"};
		magazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC"};
		respawnMagazines[] = {"VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC","VTN_AK74_30b_SC"};
		Items[] = {"VTN_1PN74","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		RespawnItems[] = {"VTN_1PN74","Firstaidkit","ACE_Flashlight_KSF1","ACE_EarPlugs","ACE_DAGR"};
		linkedItems[] = {"VTN_ZSH7_H","VTN_CHICOM_KHAKI","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"VTN_ZSH7_H","VTN_CHICOM_KHAKI","ItemMap","ItemCompass","ItemWatch"};
	};
	class LandVehicle;
	class Car;
	class Car_F;
	class Offroad_01_base_F;
	class CUP_UAZ_Base;
	class CUP_UAZ_Armed_Base;
	class CUP_O_UAZ_SPG9_RU;
	class ZSN_CUP_VDV_UAZ_SPG9: CUP_O_UAZ_SPG9_RU
	{
		class TransportMagazines
		{
			delete _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M;
			class _xx_VTN_PK_100s_TRC
			{
				magazine = "VTN_PK_100s_TRC";
				count = 2;
			};
			delete _xx_CUP_10Rnd_762x54_SVD_M;
			class _xx_VTN_SVD_10s_SC
			{
				magazine = "VTN_SVD_10s_SC";
				count = 28;
			};
		};
	};
	class Truck_F;
	class CUP_Ural_BaseTurret;
	class CUP_Ural_Support_Base;
	class CUP_Ural_Reammo_Base;
	class ZSN_CUP_MSV_Ural_Reammo: CUP_Ural_Reammo_Base
	{
		class Transportweapons
		{
			delete _xx_CUP_launch_RPG18;
			class _xx_VTN_RPG26_D
			{
				weapon = "VTN_RPG26_D";
				count = 20;
			};
			delete _xx_CUP_arifle_AK74;
			class _xx_VTN_AK74_1976
			{
				weapon = "VTN_AK74_1976";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_CUP_30Rnd_545x39_AK_M;
			class _xx_VTN_AK74_30b_SC
			{
				magazine = "VTN_AK74_30b_SC";
				count = 120;
			};
			delete _xx_CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M;
			class _xx_VTN_AK74_30b_TRC
			{
				magazine = "VTN_AK74_30b_TRC";
				count = 60;
			};
			delete _xx_CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M;
			class _xx_VTN_RPK74_45b_TRC
			{
				magazine = "VTN_RPK74_45b_TRC";
				count = 120;
			};
			delete _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M;
			class _xx_VTN_PK_100s_TRC
			{
				magazine = "VTN_PK_100s_TRC";
				count = 6;
			};
			delete _xx_CUP_10Rnd_762x54_SVD_M;
			class _xx_VTN_SVD_10s_SC
			{
				magazine = "VTN_SVD_10s_SC";
				count = 84;
			};
			delete _xx_CUP_1Rnd_HE_GP25_M;
			class _xx_VTN_VOG25
			{
				magazine = "VTN_VOG25";
				count = 200;
			};
			delete _xx_CUP_1Rnd_SMOKE_GP25_M;
			class _xx_VTN_VG40MD
			{
				magazine = "VTN_VG40MD";
				count = 100;
			};
			delete _xx_CUP_FlareWhite_GP25_M;
			class _xx_VTN_VG40OP
			{
				magazine = "VTN_VG40OP";
				count = 100;
			};
			delete _xx_CUP_8Rnd_9x18_Makarov_M;
			class _xx_VTN_PM_8s_PST
			{
				magazine = "VTN_PM_8s_PST";
				count = 125;
			};
			delete _xx_CUP_RPG18_M;
			class _xx_VTN_SP_1k_WHITE
			{
				magazine = "VTN_SP_1k_WHITE";
				count = 60;
			};
			delete _xx_6Rnd_RedSignal_F;
			class _xx_VTN_SP_1k_RED
			{
				magazine = "VTN_SP_1k_RED";
				count = 30;
			};
			delete _xx_6Rnd_GreenSignal_F;
			class _xx_VTN_SP_1k_GREEN
			{
				magazine = "VTN_SP_1k_GREEN";
				count = 30;
			};
			delete _xx_CUP_HandGrenade_RGD5;
			class _xx_VTN_RGD5
			{
				magazine = "VTN_RGD5";
				count = 100;
			};
			delete _xx_SmokeShellGreen;
			class _xx_VTN_RDG2B
			{
				magazine = "VTN_RDG2B";
				count = 40;
			};
			class _xx_VTN_RDG2CH
			{
				magazine = "VTN_RDG2CH";
				count = 40;
			};
		};
	};
	class ZSN_CUP_VMF_Ural_Reammo: CUP_Ural_Reammo_Base
	{
		class Transportweapons
		{
			delete _xx_CUP_launch_RPG18;
			class _xx_VTN_RPG26_D
			{
				weapon = "VTN_RPG26_D";
				count = 10;
			};
			delete _xx_CUP_arifle_AK74;
			class _xx_VTN_AK74_1976
			{
				weapon = "VTN_AK74_1976";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_CUP_30Rnd_545x39_AK_M;
			class _xx_VTN_AK74_30b_SC
			{
				magazine = "VTN_AK74_30b_SC";
				count = 120;
			};
			delete _xx_CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M;
			class _xx_VTN_AK74_30b_TRC
			{
				magazine = "VTN_AK74_30b_TRC";
				count = 60;
			};
			delete _xx_CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M;
			class _xx_VTN_RPK74_45b_TRC
			{
				magazine = "VTN_RPK74_45b_TRC";
				count = 120;
			};
			delete _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M;
			class _xx_VTN_PK_100s_TRC
			{
				magazine = "VTN_PK_100s_TRC";
				count = 6;
			};
			delete _xx_CUP_10Rnd_762x54_SVD_M;
			class _xx_VTN_SVD_10s_SC
			{
				magazine = "VTN_SVD_10s_SC";
				count = 84;
			};
			delete _xx_CUP_1Rnd_HE_GP25_M;
			class _xx_VTN_VOG25
			{
				magazine = "VTN_VOG25";
				count = 200;
			};
			delete _xx_CUP_1Rnd_SMOKE_GP25_M;
			class _xx_VTN_VG40MD
			{
				magazine = "VTN_VG40MD";
				count = 100;
			};
			delete _xx_CUP_FlareWhite_GP25_M;
			class _xx_VTN_VG40OP
			{
				magazine = "VTN_VG40OP";
				count = 100;
			};
			delete _xx_CUP_8Rnd_9x18_Makarov_M;
			class _xx_VTN_PM_8s_PST
			{
				magazine = "VTN_PM_8s_PST";
				count = 125;
			};
			delete _xx_CUP_RPG18_M;
			class _xx_VTN_SP_1k_WHITE
			{
				magazine = "VTN_SP_1k_WHITE";
				count = 60;
			};
			delete _xx_6Rnd_RedSignal_F;
			class _xx_VTN_SP_1k_RED
			{
				magazine = "VTN_SP_1k_RED";
				count = 30;
			};
			delete _xx_6Rnd_GreenSignal_F;
			class _xx_VTN_SP_1k_GREEN
			{
				magazine = "VTN_SP_1k_GREEN";
				count = 30;
			};
			delete _xx_CUP_HandGrenade_RGD5;
			class _xx_VTN_RGD5
			{
				magazine = "VTN_RGD5";
				count = 100;
			};
			delete _xx_SmokeShellGreen;
			class _xx_VTN_RDG2B
			{
				magazine = "VTN_RDG2B";
				count = 40;
			};
			class _xx_VTN_RDG2CH
			{
				magazine = "VTN_RDG2CH";
				count = 40;
			};
		};
	};
	class B_Truck_01_transport_F;
	class B_Truck_01_covered_F;
	class B_Truck_01_Repair_F;
	class B_Truck_01_ammo_F;
	class ZSN_DArmy_Truck_ammo: B_Truck_01_ammo_F
	{
		class Transportweapons
		{
			delete _xx_CUP_launch_M72A6;
			class _xx_VTN_M136_HEAT_C
			{
				weapon = "VTN_M136_HEAT_C";
				count = 20;
			};
		};
		class TransportMagazines
		{
			delete _xx_CUP_15Rnd_9x19_M9;
			class _xx_VTN_M9_15_FMJ
			{
				magazine = "VTN_M9_15_FMJ";
				count = 67;
			};
			delete _xx_CUP_M72A6_M;
			class _xx_VTN_SP_1k_WHITE
			{
				magazine = "VTN_SP_1k_WHITE";
				count = 60;
			};
			delete _xx_6Rnd_GreenSignal_F;
			class _xx_VTN_SP_1k_GREEN
			{
				magazine = "VTN_SP_1k_GREEN";
				count = 30;
			};
			delete _xx_6Rnd_RedSignal_F;
			class _xx_VTN_SP_1k_RED
			{
				magazine = "VTN_SP_1k_RED";
				count = 30;
			};
			delete _xx_CUP_HandGrenade_M67;
			class _xx_VTN_M67
			{
				magazine = "VTN_M67";
				count = 100;
			};
			delete _xx_SmokeShellGreen;
			class _xx_VTN_M18G
			{
				magazine = "VTN_M18G";
				count = 40;
			};
			class _xx_VTN_M18R
			{
				magazine = "VTN_M18R";
				count = 40;
			};
		};
	};
	class ZSN_DUSMC_Truck_ammo: B_Truck_01_ammo_F
	{
		class Transportweapons
		{
			delete _xx_CUP_launch_M72A6;
			class _xx_VTN_M136_HEAT_C
			{
				weapon = "VTN_M136_HEAT_C";
				count = 10;
			};
		};
		class TransportMagazines
		{
			delete _xx_CUP_M72A6_M;
			class _xx_VTN_SP_1k_WHITE
			{
				magazine = "VTN_SP_1k_WHITE";
				count = 60;
			};
			delete _xx_6Rnd_GreenSignal_F;
			class _xx_VTN_SP_1k_GREEN
			{
				magazine = "VTN_SP_1k_GREEN";
				count = 30;
			};
			delete _xx_6Rnd_RedSignal_F;
			class _xx_VTN_SP_1k_RED
			{
				magazine = "VTN_SP_1k_RED";
				count = 30;
			};
			delete _xx_CUP_HandGrenade_M67;
			class _xx_VTN_M67
			{
				magazine = "VTN_M67";
				count = 100;
			};
			delete _xx_SmokeShellGreen;
			class _xx_VTN_M18G
			{
				magazine = "VTN_M18G";
				count = 40;
			};
			class _xx_VTN_M18R
			{
				magazine = "VTN_M18R";
				count = 40;
			};
		};
	};
};
//};
