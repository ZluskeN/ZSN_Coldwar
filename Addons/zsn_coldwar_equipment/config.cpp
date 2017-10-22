////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Wed Aug 03 11:31:57 2016 : Created on Wed Aug 03 11:31:57 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_units : config.bin{
class CfgPatches
{
	class ZSN_ColdWarUnits
	{
		author = "ZluskeN";
		units[] = {};
		weapons[] = {"ZSN_CUP_srifle_M21"};
		requiredVersion = 0.1;
		requiredAddons[] = {"TMR_RPG42"};
		magazines[] = {};
	};
};
class CfgFactionClasses
{
	class sfp_un_congo
	{
		backpack_tf_faction_radio_api = "ZSN_st138_prc77";
	};
	class sfp_swe_1981
	{
		backpack_tf_faction_radio_api = "ZSN_st138_prc77";
	};
};
class CfgWeapons
{
	class Default;
	class Binocular;
	class CUP_SOFLAM;
	class ZSN_Rangefinder: CUP_SOFLAM
	{
		scope = 2;
		displayName = "AN/GVS-5";
		descriptionShort = "Magnification: 7x";
		opticsZoomMin = 0.036;
		opticsZoomMax = 0.036;
		opticsZoomInit = 0.036;
		Laser = 0;
		weaponInfoType = "RscWeaponRangeFinder";
		visionMode[] = {"Normal"};
		thermalMode[] = {};
	};
	class ItemCore;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_arifle_FNFAL;
	class ZSN_L1A1: CUP_arifle_FNFAL
	{
		scope = 1;
		displayName = "L1A1";
		modes[] = {"Single"};
		model = "CUP\Weapons\CUP_Weapons_FNFAL\CUP_fnfal5061.p3d";
	};
	class CUP_srifle_LeeEnfield;
	class CUP_srifle_LeeEnfield_rail;
	class ZSN_L42A1: CUP_srifle_LeeEnfield_rail
	{
		scope = 1;
		displayName = "L42A1";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountEnfield";
				item = "CUP_optic_SB_11_4x20_PM";
			};
		};
	};
	class CUP_srifle_M14: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountM14;
			class CUP_PicatinnyUnderMountM14;
			class PointerSlot{};
			class MuzzleSlot{};
		};
	};
	class ZSN_CUP_srifle_M21: CUP_srifle_M14
	{
		scope = 2;
		displayName = "M21";
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM14";
				item = "CUP_optic_LeupoldM3LR";
			};
		};
	};
	class CUP_srifle_SVD: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CUP_DovetailMount_SVD;
			class CowsSlot{};
			class PointerSlot{};
		};
	};
	class ZSN_SVD: CUP_srifle_SVD
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_DovetailMount_SVD";
				item = "CUP_optic_PSO_3";
			};
		};
	};
	class ZSN_SVD_des: CUP_srifle_SVD
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_DovetailMount_SVD";
				item = "CUP_optic_PSO_3";
			};
 			class LinkedItemsAcc
 			{
 				slot = "PointerSlot";
 				item = "CUP_SVD_camo_d";
 			};
		};
	};
	class ZSN_SVD_wdl: CUP_srifle_SVD
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_DovetailMount_SVD";
				item = "CUP_optic_PSO_3";
			};
 			class LinkedItemsAcc
 			{
 				slot = "PointerSlot";
 				item = "CUP_SVD_camo_g";
 			};
		};
	};
	class CUP_saw_base;
	class CUP_lmg_minimipara;
	class CUP_lmg_minimi;
	class ZSN_M249_SAW: CUP_lmg_minimi
	{
		scope = 1;
		displayName = "M249 SAW";
		magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Tracer_F","200Rnd_556x45_Box_Tracer_Red_F","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_M249","200Rnd_556x45_Box_Tracer_Red_F","CUP_100Rnd_TE4_Green_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1","CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1","CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_G36","30Rnd_556x45_STANAG"};
	};
 	class launch_RPG32_F;
 	class launch_RPG32_ghex_F : launch_RPG32_F
 	{
 		magazines[] = {"RPG32_F","RPG32_HE_F","TMR_RPG32_Smoke_F","TMR_RPG32_TB_F"};
 	};
	class UniformItem;
	class VestItem;
	class Uniform_Base;
	class usm_bdu_test: Uniform_Base
	{
		hiddenSelections[] = {"camo"};
	};
	class usm_bdu_w: Uniform_Base
	{
		hiddenSelections[] = {"camo"};
		class ItemInfo: UniformItem
		{
			containerClass = "Supply40";
		};
	};
	class usm_vest_LBE_rm: ItemCore
	{
		class ItemInfo: VestItem
		{
			containerClass = "Supply80";
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 4;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class usm_vest_LBE_rmp: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 40;
		};
	};
	class usm_vest_LBE_gr: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 40;
		};
	};
	class usm_vest_LBE_mg: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 30;
		};
	};
	class usm_vest_lbv_rm: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 40;
		};
	};
	class usm_vest_lbv_rmp: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 40;
		};
	};
	class usm_vest_lbv_gr: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 40;
		};
	};
	class usm_vest_lbv_mg: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 40;
		};
	};
	class usm_vest_LBE_rm_m: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 40;
		};
	};
	class usm_vest_LBE_rmp_m: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 40;
		};
	};
	class usm_vest_LBE_gr_m: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 40;
		};
	};
	class usm_vest_LBE_mg_m: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 40;
		};
	};
	class usm_vest_lbv_rm_m: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 40;
		};
	};
	class usm_vest_lbv_rmp_m: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 40;
		};
	};
	class usm_vest_lbv_gr_m: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 40;
		};
	};
	class usm_vest_lbv_mg_m: usm_vest_LBE_rm
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 40;
		};
	};
	class usm_vest_pasgt: ItemCore
	{
		descriptionShort = "Armor Level III";
		class ItemInfo: VestItem
		{
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
			};
		};
	};
	class usm_vest_pasgt_lbe_rm: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 70;
		};
	};
	class usm_vest_pasgt_lbe_rmp: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 70;
		};
	};
	class usm_vest_pasgt_lbe_gr: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 80;
		};
	};
	class usm_vest_pasgt_lbe_mg: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 80;
		};
	};
	class usm_vest_pasgt_lbv_rm: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgt_lbv_rmp: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgt_lbv_gr: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 90;
		};
	};
	class usm_vest_pasgt_lbv_mg: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 90;
		};
	};
	class usm_vest_pasgt_lbe_rm_m: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 70;
		};
	};
	class usm_vest_pasgt_lbe_rmp_m: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 70;
		};
	};
	class usm_vest_pasgt_lbe_gr_m: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 80;
		};
	};
	class usm_vest_pasgt_lbe_mg_m: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 80;
		};
	};
	class usm_vest_pasgt_lbv_rm_m: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgt_lbv_rmp_m: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgt_lbv_gr_m: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 90;
		};
	};
	class usm_vest_pasgt_lbv_mg_m: usm_vest_pasgt
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 90;
		};
	};
	class usm_vest_pasgtdes: ItemCore
	{
		descriptionShort = "Armor Level III";
		class ItemInfo: VestItem
		{
			containerClass = "Supply20";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
			};
		};
	};
	class usm_vest_pasgtdes_lbe_rm: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 70;
		};
	};
	class usm_vest_pasgtdes_lbe_rmp: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 70;
		};
	};
	class usm_vest_pasgtdes_lbe_gr: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 80;
		};
	};
	class usm_vest_pasgtdes_lbe_mg: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 80;
		};
	};
	class usm_vest_pasgtdes_lbv_rm: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgtdes_lbv_rmp: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgtdes_lbv_gr: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 90;
		};
	};
	class usm_vest_pasgtdes_lbv_mg: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 90;
		};
	};
	class usm_vest_pasgtdes_lbe_rm_m: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 70;
		};
	};
	class usm_vest_pasgtdes_lbe_rmp_m: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 70;
		};
	};
	class usm_vest_pasgtdes_lbe_gr_m: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 80;
		};
	};
	class usm_vest_pasgtdes_lbe_mg_m: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 80;
		};
	};
	class usm_vest_pasgtdes_lbv_rm_m: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgtdes_lbv_rmp_m: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgtdes_lbv_gr_m: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 90;
		};
	};
	class usm_vest_pasgtdes_lbv_mg_m: usm_vest_pasgtdes
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 90;
		};
	};
	class usm_vest_pasgtdcu: ItemCore
	{
		descriptionShort = "Armor Level III";
		class ItemInfo: VestItem
		{
			containerClass = "Supply20";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
			};
		};
	};
	class usm_vest_pasgtdcu_lbe_rm: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply60";
			mass = 70;
		};
	};
	class usm_vest_pasgtdcu_lbe_rmp: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply60";
			mass = 70;
		};
	};
	class usm_vest_pasgtdcu_lbe_gr: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgtdcu_lbe_mg: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgtdcu_lbv_rm: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgtdcu_lbv_rmp: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgtdcu_lbv_gr: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 90;
		};
	};
	class usm_vest_pasgtdcu_lbv_mg: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 90;
		};
	};
	class usm_vest_pasgtdcu_lbe_rm_m: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply60";
			mass = 70;
		};
	};
	class usm_vest_pasgtdcu_lbe_rmp_m: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply60";
			mass = 70;
		};
	};
	class usm_vest_pasgtdcu_lbe_gr_m: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgtdcu_lbe_mg_m: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgtdcu_lbv_rm_m: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgtdcu_lbv_rmp_m: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 80;
		};
	};
	class usm_vest_pasgtdcu_lbv_gr_m: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 90;
		};
	};
	class usm_vest_pasgtdcu_lbv_mg_m: usm_vest_pasgtdcu
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 90;
		};
	};
	class usm_vest_rba: ItemCore
	{
		descriptionShort = "Armor Level IV";
		class ItemInfo: VestItem
		{
			containerClass = "Supply20";
			mass = 70;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 22;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 22;
					passThrough = 0.2;
				};
			};
		};
	};
	class usm_vest_rba_lbe_rm: usm_vest_rba
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply60";
			mass = 80;
		};
	};
	class usm_vest_rba_lbe_rmp: usm_vest_rba
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply60";
			mass = 80;
		};
	};
	class usm_vest_rba_lbe_gr: usm_vest_rba
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 90;
		};
	};
	class usm_vest_rba_lbe_mg: usm_vest_rba
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 90;
		};
	};
	class usm_vest_rba_lbv_rm: usm_vest_rba
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 90;
		};
	};
	class usm_vest_rba_lbv_rmp: usm_vest_rba
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
			mass = 90;
		};
	};
	class usm_vest_rba_lbv_gr: usm_vest_rba
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 100;
		};
	};
	class usm_vest_rba_lbv_mg: usm_vest_rba
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			mass = 100;
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
};
class CfgVehicles
{
	class ReammoBox;
	class Bag_Base;
	class ZSN_st138_prc77: Bag_Base
	{
    		author = "ZluskeN";
		displayName = "Radio 145";
    		descriptionShort = "ST-138, AN/PRC-77";
		picture = "\us_military_units\icons\pack_st138_prc77_icon_ca.paa";
		scope = 2;
    		scopeCurator = 2;
		maximumLoad = 0;
		mass = 20;
		model = "\us_military_units\usm_pack_st138_prc77.p3d";
    		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
    		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
    		tf_dialog = "anprc155_radio_dialog";
    		tf_subtype = "digital_lr";
  	};
	class usm_pack_m5_medic;
	class ZSN_bag_m5_medic: usm_pack_m5_medic
	{
		scope = 1;
		displayName = "Bag, M5, Combat Life Saver";
		allowedSlots[] = {501,601,701,801,901};
		model = "\us_military_units\usm_pack_m5_medic.p3d";
		picture = "\us_military_units\icons\pack_m5_medic_icon_ca.paa";
		maximumLoad = 224;
		icon = "iconBackpack";
		mass = 40;
		mapSize = 2;
		class TransportMagazines
		{
			delete _xx_SmokeShellPurple;
			delete _xx_SmokeShellYellow;
		};
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
	class CUP_B_SLA_Medicbag;
	class ZSN_pack_medic: CUP_B_SLA_Medicbag
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
	class ZSN_dragon_pack: Bag_Base
	{
		author = "ZluskeN";
		scope = 1;
		allowedSlots[] = {501,601,701,801,901};
		model = "\CUP\Weapons\CUP_Weapons_Backpacks\CUP_StaticY.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_StaticWeapons\data\staticY_CA.paa";
		icon = "\CUP\Weapons\CUP_Weapons_StaticWeapons\data\mapIcon_backpack_CA.paa";
		hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Backpacks\data\static_co.paa"};
		displayName = "Dragon Missile";
		mapSize = 2;
		maximumLoad = 310;
		mass = 60;
		class TransportMagazines
		{
			class _xx_CUP_Dragon_EP1_M
			{
				magazine = "CUP_Dragon_EP1_M";
				count = 1;
			};
		};
	};
	class ZSN_metis_pack: Bag_Base
	{
		author = "ZluskeN";
		scope = 1;
		allowedSlots[] = {501,601,701,801,901};
		model = "\CUP\Weapons\CUP_Weapons_Backpacks\CUP_StaticY.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_StaticWeapons\data\staticY_CA.paa";
		icon = "\CUP\Weapons\CUP_Weapons_StaticWeapons\data\mapIcon_backpack_CA.paa";
		hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_Backpacks\data\static_co.paa"};
		displayName = "Metis Missile";
		mapSize = 2;
		maximumLoad = 270;
		mass = 60;
		class TransportMagazines
		{
			class _xx_CUP_AT13_M
			{
				magazine = "CUP_AT13_M";
				count = 1;
			};
		};
	};
	class CUP_B_AlicePack_Khaki;
	class ZSN_alice_smaw: CUP_B_AlicePack_Khaki
	{
		author = "ZluskeN";
		scope = 1;
		allowedSlots[] = {501,601,701,801,901};
		displayName = "Alice Pack, SMAW";
		mapSize = 2;
		maximumLoad = 210;
		mass = 60;
		class TransportMagazines
		{
			class _xx_CUP_SMAW_HEAA_M
			{
				magazine = "CUP_SMAW_HEAA_M";
				count = 2;
			};
		};
	};
	class ZSN_alice_Gustav: CUP_B_AlicePack_Khaki
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
	class ZSN_ALICE_Repair: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
	};
	class CUP_B_AlicePack_Bedroll;
	class ZSN_baf_alice_Gustav: CUP_B_AlicePack_Bedroll
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
	class CUP_B_RPGPack_Khaki;
	class ZSN_rpg_pack_rpg29: CUP_B_RPGPack_Khaki
	{
		author = "ZluskeN";
		scope = 1;
		allowedSlots[] = {501,601,701,801,901};
		displayName = "RPG Pack, RPG-29";
		mapSize = 2;
		maximumLoad = 200;
		mass = 60;
		class TransportMagazines
		{
			class _xx_RPG32_F
			{
				magazine = "RPG32_F";
				count = 3;
			};
		};
	};
	class ZSN_rpg_pack_rpg7: CUP_B_RPGPack_Khaki
	{
		author = "ZluskeN";
		scope = 1;
		allowedSlots[] = {501,601,701,801,901};
		displayName = "RPG Pack, RPG-7";
		mapSize = 2;
		maximumLoad = 200;
		mass = 60;
		class TransportMagazines
		{
			class _xx_CUP_PG7VR_M
			{
				magazine = "CUP_PG7VR_M";
				count = 2;
			};
		};
	};
	class ZSN_csla_rpg_pack_rpg7: CUP_B_RPGPack_Khaki
	{
		author = "ZluskeN";
		scope = 1;
		allowedSlots[] = {501,601,701,801,901};
		displayName = "RPG Pack, RPG-7";
		mapSize = 2;
		maximumLoad = 240;
		mass = 60;
		class TransportMagazines
		{
			class _xx_CUP_PG7VL_M
			{
				magazine = "CUP_PG7VL_M";
				count = 3;
			};
		};
	};
	class CUP_B_CivPack_WDL;
	class ZSN_45rnd_545x39_bag: CUP_B_CivPack_WDL
	{
		author = "ZluskeN";
		scope = 1;
		hiddenSelectionsTextures[] = {"zsn_coldwar_equipment\backpack_vdv_assault.paa"};
		displayName = "Backpack, 5.45x39mm, 45 rnd x 9";
		maximumLoad = 200;
		class TransportMagazines
		{
			class _xx_CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
			{
				magazine = "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M";
				count = 9;
			};
		};
	};
	class ZSN_RD54_Repair: CUP_B_CivPack_WDL
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
	};
	class CUP_B_ACRScout_m95;
	class ZSN_CSLA_200rnd_762x54_bandoliers: CUP_B_ACRScout_m95
	{
		scope = 1;
		displayName = "MG Bag";
		icon = "iconBackpack";
		mapSize = 2;
		maximumLoad = 130;
		allowedSlots[] = {901,801};
		class TransportMagazines
		{
			class _xx_CUP_50Rnd_UK59_762x54R_Tracer
			{
				magazine = "CUP_50Rnd_UK59_762x54R_Tracer";
				count = 2;
			};
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 1;
			};
		};
	};
	class ZSN_200rnd_762x51_bandoliers: Bag_Base
	{
		scope = 1;
		displayName = "MG Bag";
		model = "\us_military_units\usm_pack_abag.p3d";
		picture = "\us_military_units\icons\pack_abag_icon_ca.paa";
		icon = "iconBackpack";
		mapSize = 2;
		maximumLoad = 132;
		allowedSlots[] = {901,801};
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 1;
			};
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 1;
			};
		};
	};
	class ZSN_200rnd_762x54_bandoliers: CUP_B_CivPack_WDL
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"zsn_coldwar_equipment\backpack_vdv_assault.paa"};
		displayName = "MG Bag";
		maximumLoad = 136;
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 1;
			};
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 1;
			};
		};
	};
	class ZSN_BAF_200rnd_762x51_bandoliers: CUP_B_AlicePack_Bedroll
	{
		scope = 1;
		displayName = "MG Bag";
		icon = "iconBackpack";
		mapSize = 2;
		maximumLoad = 132;
		allowedSlots[] = {901,801};
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
				count = 1;
			};
			class _xx_ACE_SpareBarrel
			{
				magazine = "ACE_SpareBarrel";
				count = 1;
			};
		};
	};
	class usm_pack_762x51_bandoliers;
	class ZSN_762x51_ammobelts: usm_pack_762x51_bandoliers
	{
		scope = 1;
		displayName = "Linked 7.62x51, 500 rnd";
		maximumLoad = 330;
		mass = 0;
		allowedSlots[] = {901};
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 5;
			};
		};
	};
	class ZSN_762x54_ammobelts: CUP_B_CivPack_WDL
	{
		scope = 1;
        	scopeArsenal = 0;
		hiddenSelectionsTextures[] = {"zsn_coldwar_equipment\backpack_vdv_assault.paa"};
		displayName = "Linked 7.62x54, 500 rnd";
		maximumLoad = 340;
		mass = 0;
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 5;
			};
		};
	};
	class ZSN_BAF_762x51_ammobelts: ZSN_762x51_ammobelts
	{
		class TransportMagazines
		{
			delete _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M;
			class _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
				count = 5;
			};
		};
	};
	class ZSN_CSLA_762x54_ammobelts: CUP_B_ACRScout_m95
	{
		displayName = "Linked 7.62x54, 500 rnd";
		scope = 1;
		maximumLoad = 350;
		mass = 0;
		class TransportMagazines
		{
			class _xx_CUP_50Rnd_UK59_762x54R_Tracer
			{
				magazine = "CUP_50Rnd_UK59_762x54R_Tracer";
				count = 10;
			};
		};
	};
	class ZSN_minepack_east: CUP_B_CivPack_WDL
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"zsn_coldwar_equipment\backpack_vdv_assault.paa"};
		class TransportItems
		{
			class _xx_ACE_DefusalKit
			{
				name = "ACE_DefusalKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_MineE_M
			{
				magazine = "CUP_MineE_M";
				count = 2;
			};
		};
	};
	class ZSN_minepack_west: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ACE_DefusalKit
			{
				name = "ACE_DefusalKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_Mine_M
			{
				magazine = "CUP_Mine_M";
				count = 2;
			};
		};
	};
	class B_FieldPack_base;
	class B_FieldPack_khk;
	class B_FieldPack_blk;
	class B_FieldPack_cbr;
	class B_FieldPack_oli;
	class ZSN_demopack_khk: B_FieldPack_khk
	{
		scope = 1;
		maximumLoad = 240;
		class TransportItems
		{
			class _xx_ACE_Clacker
			{
				name = "ACE_Clacker";
				count = 1;
			};
			class _xx_ACE_wirecutter
			{
				name = "ACE_wirecutter";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 4;
			};
		};
	};
	class ZSN_Demopack_cbr: B_FieldPack_cbr
	{
		scope = 1;
		maximumLoad = 240;
		class TransportItems
		{
			class _xx_ACE_Clacker
			{
				name = "ACE_Clacker";
				count = 1;
			};
			class _xx_ACE_wirecutter
			{
				name = "ACE_wirecutter";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 4;
			};
		};
	};
	class ZSN_DemoPack_oli: B_FieldPack_oli
	{
		scope = 1;
		maximumLoad = 240;
		class TransportItems
		{
			class _xx_ACE_Clacker
			{
				name = "ACE_Clacker";
				count = 1;
			};
			class _xx_ACE_wirecutter
			{
				name = "ACE_wirecutter";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 4;
			};
		};
	};
	class ZSN_demopack_blk: B_FieldPack_blk
	{
		scope = 1;
		maximumLoad = 240;
		class TransportItems
		{
			class _xx_ACE_Clacker
			{
				name = "ACE_Clacker";
				count = 1;
			};
			class _xx_ACE_wirecutter
			{
				name = "ACE_wirecutter";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 4;
			};
		};
	};
	class usm_pack_alice;
	class CUP_B_RUS_Backpack;
};
//};
