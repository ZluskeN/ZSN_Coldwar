////////////////////////////////////////////////////////////////////
//DeRap: zsn_coldwar_equipment\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Wed Jan 16 22:21:22 2019 : 'file' last modified on Wed Jan 16 22:17:26 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_ColdWarUnits
	{
		author = "ZluskeN";
		units[] = {"ZSN_pack_medic","ZSN_minepack_east","ZSN_minepack_west","ZSN_minepack_west_OD"};
		weapons[] = {"ZSN_CUP_srifle_M21","ZSN_Rangefinder","ZSN_L1A1","ZSN_M249_SAW","ZSN_Black_Op_Vest"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","TMR_RPG42","CUP_Creatures_Military_USArmy"};
		magazines[] = {};
		ammo[] = {"ZSN_WPSmoke","Flare_82mm_AMOS_White","F_40mm_White","F_20mm_White","F_Signal_Green"};
	};
};
class CfgCloudlets
{
	class WPCloud;
	class ZSN_WPCloud: WPCloud
	{
		lifeTime = 30;
		blockAIVisibility = 1;
	};
	class WPTrails;
	class ZSN_WPTrails: WPTrails
	{
		damageType = "Fire";
		coreIntensity = 5;
		coreDistance = 4;
		damageTime = 0.1;
		lifeTime = 3;
	};
};
class ZSN_WPExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 1;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ZSN_WPCloud";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 30;
	};
	class Trails
	{
		simulation = "particles";
		type = "ZSN_WPTrails";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 3;
	};
};
class CfgAmmo
{
	class SmokeShell;
	class ZSN_WPSmoke: SmokeShell
	{
		grenadeBurningSound[] = {};
		aiAmmoUsageFlags = "64 + 4";
		effectsSmoke = "ZSN_WPExplosion";
	};
	class FlareCore;
	class FlareBase;
	class Flare_82mm_AMOS_White: FlareCore
	{
		timeToLive = 80;
		brightness = 200;
		intensity = 1000000;
	};
	class F_40mm_White: FlareBase
	{
		timeToLive = 80;
		brightness = 200;
		intensity = 1000000;
	};
	class F_20mm_White: FlareBase
	{
		timeToLive = 80;
		brightness = 200;
		intensity = 1000000;
	};
	class F_Signal_Green: FlareBase
	{
		timeToLive = 80;
		brightness = 200;
		intensity = 1000000;
	};
};
class CfgMagazines
{
	class SmokeShell;
	class ZSN_WPShell: SmokeShell
	{
		author = "ZluskeN";
		displayName = "White Phosphorous Grenade";
		value = 2;
		ammo = "ZSN_WPSmoke";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		descriptionShort = "Type: Smoke Grenade - White Phosphorous";
		displayNameShort = "White Phosphorous";
	};
	class CUP_6Rnd_TOW_HMMWV_M;
	class ZSN_1Rnd_TOW_HMMWV_M: CUP_6Rnd_TOW_HMMWV_M
	{
		scope = 1;
		count = 1;
	};
};
class CfgWeapons
{
	class Default;
	class CUP_Vmlauncher_TOW_veh;
	class ZSN_Vmlauncher_TOW_single_veh: CUP_Vmlauncher_TOW_veh
	{
		magazineReloadTime = 20;
		reloadTime = 20;
		magazines[] = {"ZSN_1Rnd_TOW_HMMWV_M"};
	};
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"ZSN_WPMuzzle"};
		class ThrowMuzzle;
		class ZSN_WPMuzzle: ThrowMuzzle
		{
			displayName = "White Phosphorous Grenade";
			magazines[] = {"ZSN_WPShell"};
		};
	};
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
	class CUP_arifle_M16A1;
	class ZSN_M16A1_GL: CUP_arifle_M16A1
	{
		author = "ZluskeN";
		model = "\CUP\Weapons\CUP_Weapons_M16\CUP_M16A2GL.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_M16\data\ui\gear_M16A2GL_X_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","CUP\Weapons\CUP_Weapons_M16\data\anim\M16GL.rtm"};
		muzzles[] = {"this","M203"};
		inertia = 0.6;
		dexterity = 1.4;
		aimTransitionSpeed = 0.8;
		cameraDir = "eye_look";
		discreteDistanceCameraPoint[] = {"eye_100","eye","eye_300","eye_400","eye_500","eye_600"};
		displayName = "M16A1 M203";
		class Library
		{
			libTextDesc = "$STR_CUP_lib_m16a2_gl";
		};
		descriptionShort = "$STR_CUP_dss_m16a2_gl";
		dispersion = 0.00102;
		hiddenSelections[] = {"camo","camo_gl"};
		hiddenSelectionsTextures[] = {"CUP\Weapons\CUP_Weapons_M16\data\m16a2_co.paa","CUP\Weapons\CUP_Weapons_M16\data\tigg_m203_co.paa"};
	};
	class CUP_arifle_FNFAL;
	class ZSN_L1A1: CUP_arifle_FNFAL
	{
		scope = 2;
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
	class CUP_srifle_SVD_des;
	class ZSN_SVD_des: CUP_srifle_SVD_des
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
	class CUP_srifle_SVD_wdl;
	class ZSN_SVD_wdl: CUP_srifle_SVD_wdl
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
	class CUP_srifle_M24_des: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CUP_PicatinnyTopMountM24;
			class CUP_PicatinnyUnderMountM24;
			class PointerSlot{};
			class MuzzleSlot{};
		};
	};
	class ZSN_M24_des: CUP_srifle_M24_des
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM24";
				item = "CUP_optic_LeupoldMk4_10x40_LRT_Desert";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "CUP_Mxx_camo_half";
			};
		};
	};
	class CUP_srifle_M24_wdl: CUP_srifle_M24_des{};
	class ZSN_M24_wdl: CUP_srifle_M24_wdl
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM24";
				item = "CUP_optic_LeupoldMk4_10x40_LRT_Woodland";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "CUP_Mxx_camo_half";
			};
		};
	};
	class CUP_srifle_M40A3: CUP_srifle_M24_des{};
	class ZSN_M40: CUP_srifle_M40A3
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CUP_PicatinnyTopMountM24";
				item = "CUP_optic_LeupoldMk4";
			};
		};
	};
	class CUP_saw_base;
	class CUP_lmg_minimipara;
	class CUP_lmg_minimi;
	class ZSN_M249_SAW: CUP_lmg_minimi
	{
		scope = 2;
		displayName = "M249 SAW";
		magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Tracer_F","200Rnd_556x45_Box_Tracer_Red_F","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_M249","200Rnd_556x45_Box_Tracer_Red_F","CUP_100Rnd_TE4_Green_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1","CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1","CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_G36","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Green_Tracer_556x45_G36","CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag","CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag","CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","CUP_20Rnd_556x45_Stanag"};
	};
	class launch_RPG32_F;
	class ZSN_RPG29: launch_RPG32_F
	{
		author = "ZluskeN";
		displayName = "RPG-29 Vampir";
		picture = "\A3\Weapons_F_Exp\Launchers\RPG32\Data\UI\launch_RPG32_ghex_F_X_CA.paa";
		magazines[] = {"RPG32_F","RPG32_HE_F","TMR_RPG32_Smoke_F","TMR_RPG32_TB_F"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_equipment\launch_RPG29_F_co.paa","\A3\Weapons_F\Launchers\RPG32\data\RPG_32_optics_CO.paa"};
		//hiddenSelectionsTextures[] = {"\A3\Weapons_F_Enoch\Launchers\RPG32\Data\RPG_32_body_RUgrn_CO.paa","\A3\Weapons_F\Launchers\RPG32\data\RPG_32_optics_CO.paa"};
	};
	class UniformItem;
	class VestItem;
	class Uniform_Base;
	class CUP_H_USArmy_Helmet_M1_m81: ItemCore
	{
		hiddenSelectionsTextures[] = {"\zsn_coldwar_equipment\zsn_merc_g_m81_co.paa"};
	};
	class CUP_V_PMC_CIRAS_Base;
	class CUP_V_PMC_CIRAS_Black_Veh: CUP_V_PMC_CIRAS_Base
	{
		class ItemInfo;
	};
	class ZSN_Black_Op_Vest: CUP_V_PMC_CIRAS_Black_Veh
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Vest (Black Op)";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply120";
			armor = 0;
			passThrough = 1;
			mass = 80;
		};
	};
};
class CfgVehicles
{
	class ReammoBox;
	class Bag_Base;
	class CUP_B_SLA_Medicbag;
	class ZSN_pack_medic: CUP_B_SLA_Medicbag
	{
		scope = 2;
		displayName = "Medic Bag";
		maximumLoad = 224;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 8;
			};
			class _xx_medikit
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
	class CUP_B_AlicePack_OD;
	class ZSN_alice_smaw_OD: CUP_B_AlicePack_OD
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
	class ZSN_alice_Gustav_OD: CUP_B_AlicePack_OD
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
	class ZSN_ALICE_Repair_OD: CUP_B_AlicePack_OD
	{
		scope = 1;
		maximumLoad = 200;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
	};
	class ZSN_ALICE_Repair_Khaki: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		maximumLoad = 200;
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
		hiddenSelectionsTextures[] = {"zsn_coldwar_equipment\backpack_vdv_assault.paa"};
		displayName = "RD54 Pack";
		maximumLoad = 200;
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
	class ZSN_200rnd_762x51_bandoliers: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		displayName = "MG Bag";
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
	class ZSN_200rnd_762x51_bandoliers_OD: CUP_B_AlicePack_OD
	{
		scope = 1;
		displayName = "MG Bag";
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
	class ZSN_762x51_ammobelts: CUP_B_AlicePack_Khaki
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
	class ZSN_762x51_ammobelts_OD: CUP_B_AlicePack_OD
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
	class CUP_B_RUS_Backpack;
	class ZSN_762x51_MG3_ammobelts: CUP_B_RUS_Backpack
	{
		scope = 1;
		displayName = "Linked 7.62x51, 480 rnd";
		maximumLoad = 330;
		mass = 0;
		allowedSlots[] = {901};
		class TransportMagazines
		{
			class _xx_CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 4;
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
		scope = 2;
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
		scope = 2;
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
	class ZSN_minepack_west_OD: CUP_B_AlicePack_OD
	{
		scope = 2;
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
};
