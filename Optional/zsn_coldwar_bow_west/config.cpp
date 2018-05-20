////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Aug 02 23:21:43 2016 : Created on Tue Aug 02 23:21:43 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_bow_west : config.bin{
class CfgPatches
{
	class ZSN_ColdWar_BOW
	{
		author = "ZluskeN";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarWest","BO_weapons"};
	};
};
class cfgweapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class SMG_02_F;
	class BOMp5A1: SMG_02_F
	{
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Red_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Green_Mag","CUP_30Rnd_9x19_MP5"};
	};
	class BOmp5SD3;
	class zsn_hk: BOmp5SD3
	{
		class LinkedItems
		{
			class LinkedItemsPointer
			{
				slot = "PointerSlot";
				item = "mp5irlaser";
			};
		};
	};
	class bom16a1cmag;
	class ZSN_M16HBAR: bom16a1cmag
	{
		baseWeapon = "ZSN_M16HBAR";
		magazines[] = {"cmag_556x45","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green"};
	};
	class BOxm177e2;
	class zsn_xms: BOxm177e2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "aimpoint2000";
			};
		};
	};
	class srifle_EBR_F;
	class boM14: srifle_EBR_F
	{
		class WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
	};
	class ZSN_CUP_srifle_M21: boM14
	{
		scope = 2;
		displayName = "M21";
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "CUP_optic_LeupoldM3LR";
			};
		};
	};
	class BOm60e3;
	class ZSN_BOm60e3: BOm60e3
	{
		scope = 2;
		magazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_M_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_T_M60E4","100rnd_m60E3","100rnd_m60E3_tracer","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
	};
	class BoM249e1;
	class ZSN_M249_SAW: BoM249e1
	{
		scope = 2;
		displayName = "M249 SAW";
		baseWeapon = "ZSN_M249_SAW";
		magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Tracer_F","200Rnd_556x45_Box_Tracer_Red_F","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_200Rnd_TE1_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Green_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1","CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1","CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green"};
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
			delete _xx_CUP_7Rnd_45ACP_1911;
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 56;
			};
		};
		class TransportItems{};
	};
	class B_Soldier_base_F;
	class usm_base_w;
	class usm_base_w_m;
	class usm_base_d;
	class usm_base_d_m;
	class ZSN_SoldierW: usm_base_w
	{
		weapons[] = {"Throw","Put","BOM16A1"};
		respawnWeapons[] = {"Throw","Put","BOM16A1"};
	};
	class ZSN_SoldierWMG: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","ZSN_BOm60e3"};
		respawnWeapons[] = {"Throw","Put","ZSN_BOm60e3"};
	};
	class ZSN_SoldierWMGAss: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","BOM16A1","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","Binocular"};
	};
	class ZSN_SoldierWlaw: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","BOM16A1","CUP_launch_M72A6"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","CUP_launch_M72A6"};
	};
	class SUD_NATO_Soldier_AT: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","BOM16A1","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","CUP_launch_MAAWS"};
	};
	class ZSN_SoldierWofficer: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","BOM16A1","CUP_hgun_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","CUP_hgun_M9","Binocular"};
	};
	class ZSN_SoldierWNCO: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","BOM16A1","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_SoldierWleader: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","BOM16A1M203","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A1M203","Binocular"};
	};
	class ZSN_SoldierWg: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","BOM16A1M203"};
		respawnWeapons[] = {"Throw","Put","BOM16A1M203"};
	};
	class ZSN_SoldierWAT: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","BOM16A1","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","CUP_launch_M47"};
	};
	class ZSN_SoldierWATAss: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","BOM16A1","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","ZSN_Rangefinder"};
	};
	class ZSN_SoldierWaa: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","BOM16A1","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","CUP_launch_FIM92Stinger"};
	};
	class ZSN_SoldierWSaboteur: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","CUP_hgun_MicroUzi","zsn_hk","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_MicroUzi","zsn_hk","Binocular"};
		magazines[] = {"CUP_30Rnd_9x19_UZI","CUP_30Rnd_9x19_UZI","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_30Rnd_9x19_UZI","CUP_30Rnd_9x19_UZI","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWCrew: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","BO1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","BO1911","Binocular"};
		magazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","zsn_wpshell","zsn_wpshell"};
	};
	class ZSN_SoldierWD: usm_base_w
	{
		weapons[] = {"Throw","Put","BOM16A1"};
		respawnWeapons[] = {"Throw","Put","BOM16A1"};
	};
	class ZSN_SoldierWDMG: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","ZSN_BOm60e3"};
		respawnWeapons[] = {"Throw","Put","ZSN_BOm60e3"};
	};
	class ZSN_SoldierWDMGAss: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","BOM16A1","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","Binocular"};
	};
	class ZSN_SoldierWDlaw: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","BOM16A1","CUP_launch_M72A6"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","CUP_launch_M72A6"};
	};
	class SUD_DNATO_Soldier_AT: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","BOM16A1","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","CUP_launch_MAAWS"};
	};
	class ZSN_SoldierWDofficer: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","BOM16A1","CUP_hgun_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","CUP_hgun_M9","Binocular"};
	};
	class ZSN_SoldierWDNCO: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","BOM16A1","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_SoldierWDleader: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","BOM16A1M203","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A1M203","Binocular"};
	};
	class ZSN_SoldierWDg: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","BOM16A1M203"};
		respawnWeapons[] = {"Throw","Put","BOM16A1M203"};
	};
	class ZSN_SoldierWDAT: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","BOM16A1","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","CUP_launch_M47"};
	};
	class ZSN_SoldierWDATAss: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","BOM16A1","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","ZSN_Rangefinder"};
	};
	class ZSN_SoldierWDaa: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","BOM16A1","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","BOM16A1","CUP_launch_FIM92Stinger"};
	};
	class ZSN_SoldierWDSaboteur: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","CUP_hgun_glock17_snds","zsn_xms","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_glock17_snds","zsn_xms","Binocular"};
	};
	class ZSN_SoldierWDCrew: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","BO1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","BO1911","Binocular"};
		magazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","zsn_wpshell","zsn_wpshell"};
	};
	class ZSN_marinew: usm_base_w
	{
		weapons[] = {"Throw","Put","bom16a2"};
		respawnWeapons[] = {"Throw","Put","bom16a2"};
	};
	class ZSN_MarineWAR: ZSN_MarineW
	{
		weapons[] = {"Throw","Put","ZSN_M16HBAR"};
		respawnWeapons[] = {"Throw","Put","ZSN_M16HBAR"};
		magazines[] = {"cmag_556x45","cmag_556x45","cmag_556x45","cmag_556x45","cmag_556x45","cmag_556x45","30Rnd_556x45_Stanag_red","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"cmag_556x45","cmag_556x45","cmag_556x45","cmag_556x45","cmag_556x45","cmag_556x45","30Rnd_556x45_Stanag_red","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_MarineWMG: ZSN_MarineW
	{
		weapons[] = {"Throw","Put","ZSN_BOm60e3"};
		respawnWeapons[] = {"Throw","Put","ZSN_BOm60e3"};
	};
	class ZSN_MarineWMGAss: ZSN_MarineW
	{
		weapons[] = {"Throw","Put","BOM16A2","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A2","Binocular"};
	};
	class ZSN_marinewlaw: ZSN_marinew
	{
		weapons[] = {"Throw","Put","BOM16A2","CUP_launch_M72A6_Special"};
		respawnWeapons[] = {"Throw","Put","BOM16A2","CUP_launch_M72A6_Special"};
	};
	class ZSN_marinewhat: ZSN_marinew
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_launch_Mk153Mod0_SMAWOptics"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_launch_Mk153Mod0_SMAWOptics"};
	};
	class ZSN_marinewofficer: ZSN_marinew
	{
		weapons[] = {"Throw","Put","bom16a2","BO1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","bom16a2","BO1911","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","zsn_wpshell","zsn_wpshell"};
	};
	class ZSN_MarineWNCO: ZSN_MarineW
	{
		weapons[] = {"Throw","Put","BOM16A2","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A2","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_marinewleader: ZSN_marinew
	{
		weapons[] = {"Throw","Put","bom16a2m203","Binocular"};
		respawnWeapons[] = {"Throw","Put","bom16a2m203","Binocular"};
	};
	class ZSN_marinewg: ZSN_marinew
	{
		weapons[] = {"Throw","Put","bom16a2m203"};
		respawnWeapons[] = {"Throw","Put","bom16a2m203"};
	};
	class ZSN_marinewAT: ZSN_marinew
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_launch_M47"};
	};
	class ZSN_marinewATAss: ZSN_marinew
	{
		weapons[] = {"Throw","Put","bom16a2","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","bom16a2","ZSN_Rangefinder"};
	};
	class ZSN_marinewaa: ZSN_marinew
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_launch_FIM92Stinger"};
	};
	class ZSN_MarineWCrew: ZSN_MarineW
	{
		weapons[] = {"Throw","Put","BO1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","BO1911","Binocular"};
		magazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","zsn_wpshell","zsn_wpshell"};
	};
	class ZSN_MarineWD: usm_base_w
	{
		weapons[] = {"Throw","Put","bom16a2"};
		respawnWeapons[] = {"Throw","Put","bom16a2"};
	};
	class ZSN_MarineWDAR: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","ZSN_M16HBAR"};
		respawnWeapons[] = {"Throw","Put","ZSN_M16HBAR"};
		magazines[] = {"cmag_556x45","cmag_556x45","cmag_556x45","cmag_556x45","cmag_556x45","cmag_556x45","30Rnd_556x45_Stanag_red","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"cmag_556x45","cmag_556x45","cmag_556x45","cmag_556x45","cmag_556x45","cmag_556x45","30Rnd_556x45_Stanag_red","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_MarineWDMG: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","ZSN_BOm60e3"};
		respawnWeapons[] = {"Throw","Put","ZSN_BOm60e3"};
	};
	class ZSN_MarineWDMGAss: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","BOM16A2","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A2","Binocular"};
	};
	class ZSN_MarineWDlaw: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","BOM16A2","CUP_launch_M72A6_Special"};
		respawnWeapons[] = {"Throw","Put","BOM16A2","CUP_launch_M72A6_Special"};
	};
	class ZSN_marinewDhat: ZSN_marinewD
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_launch_Mk153Mod0_SMAWOptics"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_launch_Mk153Mod0_SMAWOptics"};
	};
	class ZSN_MarineWDofficer: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","bom16a2","BO1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","bom16a2","BO1911","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","zsn_wpshell","zsn_wpshell"};
	};
	class ZSN_MarineWDNCO: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","BOM16A2","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A2","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_MarineWDleader: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","bom16a2m203","Binocular"};
		respawnWeapons[] = {"Throw","Put","bom16a2m203","Binocular"};
	};
	class ZSN_MarineWDg: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","bom16a2m203"};
		respawnWeapons[] = {"Throw","Put","bom16a2m203"};
	};
	class ZSN_MarineWDAT: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_launch_M47"};
	};
	class ZSN_MarineWDATAss: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","bom16a2","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","bom16a2","ZSN_Rangefinder"};
	};
	class ZSN_MarineWDaa: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_launch_FIM92Stinger"};
	};
	class ZSN_MarineWDCrew: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","BO1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","BO1911","Binocular"};
		magazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","zsn_wpshell","zsn_wpshell"};
		respawnMagazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","zsn_wpshell","zsn_wpshell"};
	};
	class ZSN_RangerW: usm_base_w
	{
		weapons[] = {"Throw","Put","bom16a2"};
		respawnWeapons[] = {"Throw","Put","bom16a2"};
	};
	class ZSN_RangerWMG: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","ZSN_BOm60e3"};
		respawnWeapons[] = {"Throw","Put","ZSN_BOm60e3"};
	};
	class ZSN_RangerWMGAss: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","BOM16A2","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A2","Binocular"};
	};
	class ZSN_RangerWlaw: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_launch_M136"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_launch_M136"};
	};
	class ZSN_RangerWHAT: ZSN_Rangerw
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_launch_MAAWS_Scope"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_launch_MAAWS_Scope"};
	};
	class ZSN_RangerWhatass: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","bom16a2","zsn_rangefinder"};
		respawnWeapons[] = {"Throw","Put","bom16a2","zsn_rangefinder"};
	};
	class ZSN_RangerWofficer: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_hgun_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_hgun_M9","Binocular"};
	};
	class ZSN_RangerWNCO: ZSN_Rangerw
	{
		weapons[] = {"Throw","Put","BOM16A2","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A2","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_RangerWleader: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","bom16a2m203","Binocular"};
		respawnWeapons[] = {"Throw","Put","bom16a2m203","Binocular"};
	};
	class ZSN_RangerWg: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","bom16a2m203"};
		respawnWeapons[] = {"Throw","Put","bom16a2m203"};
	};
	class ZSN_RangerWAT: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_launch_M47"};
	};
	class ZSN_RangerWATAss: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","bom16a2","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","bom16a2","ZSN_Rangefinder"};
	};
	class ZSN_RangerWaa: ZSN_RangerW
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_launch_FIM92Stinger"};
	};
	class ZSN_RangerWD: usm_base_w
	{
		weapons[] = {"Throw","Put","bom16a2"};
		respawnWeapons[] = {"Throw","Put","bom16a2"};
	};
	class ZSN_RangerWDMG: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","ZSN_BOm60e3"};
		respawnWeapons[] = {"Throw","Put","ZSN_BOm60e3"};
	};
	class ZSN_RangerWDMGAss: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","BOM16A2","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A2","Binocular"};
	};
	class ZSN_RangerWDlaw: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_launch_M136"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_launch_M136"};
	};
	class ZSN_RangerWDHAT: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_launch_MAAWS_Scope"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_launch_MAAWS_Scope"};
	};
	class ZSN_RangerWdhatass: ZSN_RangerWd
	{
		weapons[] = {"Throw","Put","bom16a2","zsn_rangefinder"};
		respawnWeapons[] = {"Throw","Put","bom16a2","zsn_rangefinder"};
	};
	class ZSN_RangerWDofficer: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_hgun_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_hgun_M9","Binocular"};
	};
	class ZSN_RangerWDNCO: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","BOM16A2","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","BOM16A2","hgun_Pistol_Signal_F","Binocular"};
	};
	class ZSN_RangerWDleader: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","bom16a2m203","Binocular"};
		respawnWeapons[] = {"Throw","Put","bom16a2m203","Binocular"};
	};
	class ZSN_RangerWDg: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","bom16a2m203"};
		respawnWeapons[] = {"Throw","Put","bom16a2m203"};
	};
	class ZSN_RangerWDAT: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_launch_M47"};
	};
	class ZSN_RangerWDATAss: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","bom16a2","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","bom16a2","ZSN_Rangefinder"};
	};
	class ZSN_RangerWDaa: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","bom16a2","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","bom16a2","CUP_launch_FIM92Stinger"};
	};
	class ZSN_GersolW: B_Soldier_base_F {};
	class ZSN_GersolWPilot: ZSN_GersolW
	{
		weapons[] = {"Throw","Put","BOMp5A1"};
		respawnWeapons[] = {"Throw","Put","BOMp5A1"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
	};
	class ZSN_GersolWCrew: ZSN_GersolW
	{
		weapons[] = {"Throw","Put","BOMp5A1"};
		respawnWeapons[] = {"Throw","Put","BOMp5A1"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
	};
//	class ZSN_SoldierE;
//	class ZSN_SoldierESaboteur: ZSN_SoldierE
//	{
//		linkedItems[] = {"H_Bandanna_khk_hs","PNW57","CUP_V_RUS_Smersh_1","ItemMap","ItemCompass","ItemWatch","Itemradio"};
//		respawnLinkedItems[] = {"H_Bandanna_khk_hs","PNW57","CUP_V_RUS_Smersh_1","ItemMap","ItemCompass","ItemWatch","Itemradio"};
//	};
	class LandVehicle;
	class Car;
	class Car_F;
	class Truck_F;
	class Truck_01_base_F;
	class B_Truck_01_transport_F;
	class B_Truck_01_mover_F;
	class B_Truck_01_ammo_F;
	class ZSN_DUSMC_Truck_ammo: B_Truck_01_ammo_F
	{
		class TransportMagazines
		{
			delete _xx_CUP_7Rnd_45ACP_1911;
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 111;
			};
			delete _xx_200Rnd_556x45_Box_Tracer_Red_F;
			class _xx_cmag_556x45
			{
				magazine = "cmag_556x45";
				count = 40;
			};
		};
	};
};
//};
