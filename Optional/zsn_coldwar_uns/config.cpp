////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Wed May 31 10:56:42 2017 : Created on Wed May 31 10:56:42 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_ColdWar_UNS
	{
		author = "ZluskeN";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarVehicles"};
		magazines[] = {};
	};
};
class CfgVehicles
{
	class ReammoBox_F;
	class CUP_ReammoBox_EP1;
	class CUP_RUSpecialWeaponsBox;
	class ZSN_East_Ammocrate: CUP_RUSpecialWeaponsBox
	{
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "uns_100Rnd_762x54_PK";
				count = 18;
			};
			class _xx_CUP_10Rnd_762x54_SVD_M
			{
				magazine = "uns_svdmag";
				count = 84;
			};
		};
		class TransportItems{};
	};
	class CUP_USSpecialWeapons_EP1;
	class ZSN_West_Ammocrate: CUP_USSpecialWeapons_EP1
	{
		class TransportMagazines
		{
			class _xx_uns_m3a1mag
			{
				magazine = "uns_m3a1mag";
				count = 14;
			};
			class _xx_CUP_7Rnd_45ACP_1911
			{
				magazine = "CUP_7Rnd_45ACP_1911";
				count = 12;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "uns_30Rnd_556x45_Stanag";
				count = 92;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				magazine = "uns_30Rnd_556x45_Stanag_T";
				count = 48;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "uns_m60mag";
				count = 16;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "uns_m14mag";
				count = 20;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "uns_1Rnd_HEDP_M433";
				count = 200;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine = "uns_40mm_white";
				count = 100;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "uns_1Rnd_SmokeGreen_40mm";
				count = 100;
			};
		};
	};
	class CUP_B_ACRScout_m95;
	class ZSN_CSLA_200rnd_762x54_bandoliers: CUP_B_ACRScout_m95
	{
		class TransportMagazines
		{
			class _xx_CUP_50Rnd_UK59_762x54R_Tracer
			{
				magazine = "uns_100Rnd_762x54_ukvz59";
				count = 1;
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
				magazine = "uns_m60mag";
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
				magazine = "uns_100Rnd_762x54_PK";
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
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "uns_m60mag";
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
				magazine = "uns_100Rnd_762x54_PK";
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
				magazine = "uns_100Rnd_762x54_ukvz59";
				count = 5;
			};
		};
	};
	class B_Soldier_base_F;
	class ZSN_GersolW: B_Soldier_base_F {};
	class ZSN_GersolWPilot: ZSN_GersolW
	{
		weapons[] = {"Throw","Put","uns_uzi"};
		respawnWeapons[] = {"Throw","Put","uns_uzi"};
		magazines[] = {"uns_32Rnd_uzi","uns_32Rnd_uzi","uns_32Rnd_uzi","uns_32Rnd_uzi"};
		respawnMagazines[] = {"uns_32Rnd_uzi","uns_32Rnd_uzi","uns_32Rnd_uzi","uns_32Rnd_uzi"};
	};
	class ZSN_GersolWCrew: ZSN_GersolW
	{
		weapons[] = {"Throw","Put","uns_uzi"};
		respawnWeapons[] = {"Throw","Put","uns_uzi"};
		magazines[] = {"uns_32Rnd_uzi","uns_32Rnd_uzi","uns_32Rnd_uzi","uns_32Rnd_uzi"};
		respawnMagazines[] = {"uns_32Rnd_uzi","uns_32Rnd_uzi","uns_32Rnd_uzi","uns_32Rnd_uzi"};
	};
	class ZSN_EurosolW: B_Soldier_base_F
	{
		weapons[] = {"Throw","Put","uns_l1a1_enfield"};
		respawnWeapons[] = {"Throw","Put","uns_l1a1_enfield"};
	};
	class ZSN_EurosolWMedic: ZSN_EurosolW
	{
		magazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolWB: ZSN_EurosolW
	{
		magazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolWMGAss: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","uns_l1a1_enfield","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_l1a1_enfield","Binocular"};
		magazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolWAA: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","uns_l1a1_enfield","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","uns_l1a1_enfield","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_Stinger_M","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolWLAW: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","uns_l1a1_enfield","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","uns_l1a1_enfield","CUP_launch_MAAWS"};
		magazines[] = {"CUP_MAAWS_HEAT_M","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_MAAWS_HEAT_M","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolWLAWAss: ZSN_Eurosolw
	{
		magazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolWLeader: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","uns_l1a1_enfield","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_l1a1_enfield","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolWcrew: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","uns_Sterling","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_Sterling","Binocular"};
		magazines[] = {"uns_mk4mag","uns_mk4mag","uns_mk4mag","uns_mk4mag"};
		respawnMagazines[] = {"uns_mk4mag","uns_mk4mag","uns_mk4mag","uns_mk4mag"};
	};
	class ZSN_EurosolWPilot: ZSN_EurosolW
	{
		weapons[] = {"Throw","Put","uns_Sterling"};
		respawnWeapons[] = {"Throw","Put","uns_Sterling"};
		magazines[] = {"uns_mk4mag","uns_mk4mag","uns_mk4mag","uns_mk4mag"};
		respawnMagazines[] = {"uns_mk4mag","uns_mk4mag","uns_mk4mag","uns_mk4mag"};
	};
	class ZSN_EurosolWD: B_Soldier_base_F
	{
		weapons[] = {"Throw","Put","uns_l1a1_enfield"};
		respawnWeapons[] = {"Throw","Put","uns_l1a1_enfield"};
	};
	class ZSN_EurosolWDMedic: ZSN_EurosolWD
	{
		magazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolWDB: ZSN_EurosolWD
	{
		magazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolWDMGAss: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","uns_l1a1_enfield","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_l1a1_enfield","Binocular"};
		magazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolWDAA: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","uns_l1a1_enfield","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","uns_l1a1_enfield","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_Stinger_M","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolWDLAW: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","uns_l1a1_enfield","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","uns_l1a1_enfield","CUP_launch_MAAWS"};
		magazines[] = {"CUP_MAAWS_HEAT_M","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_MAAWS_HEAT_M","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolWDLAWAss: ZSN_EurosolwD
	{
		magazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolWDLeader: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","uns_l1a1_enfield","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_l1a1_enfield","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","uns_l1a1mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolWDcrew: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","uns_Sterling","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_Sterling","Binocular"};
		magazines[] = {"uns_mk4mag","uns_mk4mag","uns_mk4mag","uns_mk4mag"};
		respawnMagazines[] = {"uns_mk4mag","uns_mk4mag","uns_mk4mag","uns_mk4mag"};
	};
	class ZSN_EurosolWDPilot: ZSN_EurosolWD
	{
		weapons[] = {"Throw","Put","uns_Sterling"};
		respawnWeapons[] = {"Throw","Put","uns_Sterling"};
		magazines[] = {"uns_mk4mag","uns_mk4mag","uns_mk4mag","uns_mk4mag"};
		respawnMagazines[] = {"uns_mk4mag","uns_mk4mag","uns_mk4mag","uns_mk4mag"};
	};
	class O_soldier_base_F;
	class ZSN_EurosolE: O_Soldier_base_F
	{
		weapons[] = {"Throw","Put","uns_sa58p"};
		respawnWeapons[] = {"Throw","Put","uns_sa58p"};
	};
	class ZSN_EurosolEMedic: ZSN_EurosolE
	{
		magazines[] = {"uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolEB: ZSN_EurosolE
	{
		magazines[] = {"uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolESniper: ZSN_EurosolE
	{
		weapons[] = {"Throw","Put","uns_svd"};
		respawnWeapons[] = {"Throw","Put","uns_svd"};
		magazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolEMG: ZSN_EurosolE
	{
		weapons[] = {"Throw","Put","uns_ukvz59"};
		respawnWeapons[] = {"Throw","Put","uns_ukvz59"};
		magazines[] = {"uns_100Rnd_762x54_ukvz59","uns_100Rnd_762x54_ukvz59","uns_100Rnd_762x54_ukvz59"};
		respawnmagazines[] = {"uns_100Rnd_762x54_ukvz59","uns_100Rnd_762x54_ukvz59","uns_100Rnd_762x54_ukvz59"};
	};
	class ZSN_EurosolEMGAss: ZSN_EurosolE
	{
		weapons[] = {"Throw","Put","uns_sa58p","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_sa58p","Binocular"};
		magazines[] = {"uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolEAA: ZSN_EurosolE
	{
		weapons[] = {"Throw","Put","uns_sa58p","CUP_launch_9K32Strela"};
		respawnWeapons[] = {"Throw","Put","uns_sa58p","CUP_launch_9K32Strela"};
		magazines[] = {"CUP_Strela_2_M","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_Strela_2_M","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolELAW: ZSN_EurosolE
	{
		weapons[] = {"Throw","Put","uns_sa58p","CUP_launch_RPG7V"};
		respawnWeapons[] = {"Throw","Put","uns_sa58p","CUP_launch_RPG7V"};
		magazines[] = {"CUP_PG7VL_M","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_PG7VL_M","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolELAWAss: ZSN_EurosolE
	{
		magazines[] = {"uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolELeader: ZSN_EurosolE
	{
		weapons[] = {"Throw","Put","uns_sa58p","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_sa58p","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolECrew: ZSN_EurosolE
	{
		weapons[] = {"Throw","Put","uns_sa58v","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_sa58v","Binocular"};
		magazines[] = {"uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag"};
		respawnMagazines[] = {"uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag"};
	};
	class ZSN_EurosolEPilot: ZSN_EurosolE
	{
		weapons[] = {"Throw","Put","uns_sa58v"};
		respawnWeapons[] = {"Throw","Put","uns_sa58v"};
		magazines[] = {"uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag"};
		respawnMagazines[] = {"uns_sa58mag","uns_sa58mag","uns_sa58mag","uns_sa58mag"};
	};
	class ZSN_EurosolED: O_Soldier_base_F
	{
		weapons[] = {"Throw","Put","uns_akm"};
		respawnWeapons[] = {"Throw","Put","uns_akm"};
	};
	class ZSN_EurosolEDMedic: ZSN_EurosolED
	{
		magazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolEDB: ZSN_EurosolED
	{
		magazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolEDSniper: ZSN_EurosolED
	{
		weapons[] = {"Throw","Put","uns_svd"};
		respawnWeapons[] = {"Throw","Put","uns_svd"};
		magazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolEDMG: ZSN_EurosolED
	{
		weapons[] = {"Throw","Put","uns_RPK_drum"};
		respawnWeapons[] = {"Throw","Put","uns_RPK_drum"};
		magazines[] = {"uns_75Rnd_akdr","uns_75Rnd_akdr","uns_75Rnd_akdr","uns_75Rnd_akdr"};
		respawnmagazines[] = {"uns_75Rnd_akdr","uns_75Rnd_akdr","uns_75Rnd_akdr","uns_75Rnd_akdr"};
	};
	class ZSN_EurosolEDMGAss: ZSN_EurosolED
	{
		weapons[] = {"Throw","Put","uns_akm","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_akm","Binocular"};
		magazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolEDAA: ZSN_EurosolED
	{
		weapons[] = {"Throw","Put","uns_akm","CUP_launch_9K32Strela"};
		respawnWeapons[] = {"Throw","Put","uns_akm","CUP_launch_9K32Strela"};
		magazines[] = {"CUP_Strela_2_M","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_Strela_2_M","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolEDLAW: ZSN_EurosolED
	{
		weapons[] = {"Throw","Put","uns_akm","CUP_launch_RPG7V"};
		respawnWeapons[] = {"Throw","Put","uns_akm","CUP_launch_RPG7V"};
		magazines[] = {"CUP_PG7VL_M","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_PG7VL_M","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolEDLAWAss: ZSN_EurosolED
	{
		magazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolEDLeader: ZSN_EurosolED
	{
		weapons[] = {"Throw","Put","uns_akm","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_akm","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolEDCrew: ZSN_EurosolED
	{
		weapons[] = {"Throw","Put","uns_akms","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_akms","Binocular"};
		magazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag"};
		respawnMagazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag"};
	};
	class ZSN_EurosolEDPilot: ZSN_EurosolED
	{
		weapons[] = {"Throw","Put","uns_akms"};
		respawnWeapons[] = {"Throw","Put","uns_akms"};
		magazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag"};
		respawnMagazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag"};
	};
	class I_G_soldier_base_F;
	class ZSN_EurosolG: I_G_Soldier_base_F
	{
		weapons[] = {"Throw","Put","uns_ak47"};
		respawnWeapons[] = {"Throw","Put","uns_ak47"};
	};
	class ZSN_EurosolGB: ZSN_EurosolG
	{
		magazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolGSniper: ZSN_EurosolG
	{
		weapons[] = {"Throw","Put","uns_sks"};
		respawnWeapons[] = {"Throw","Put","uns_sks"};
		magazines[] = {"uns_sksmag","uns_sksmag","uns_sksmag","uns_sksmag","uns_sksmag","uns_sksmag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_sksmag","uns_sksmag","uns_sksmag","uns_sksmag","uns_sksmag","uns_sksmag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolGMG: ZSN_EurosolG
	{
		weapons[] = {"Throw","Put","uns_rpd"};
		respawnWeapons[] = {"Throw","Put","uns_rpd"};
		magazines[] = {"uns_rpdmag","uns_rpdmag","uns_rpdmag","uns_rpdmag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_rpdmag","uns_rpdmag","uns_rpdmag","uns_rpdmag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolGLAW: ZSN_EurosolG
	{
		weapons[] = {"Throw","Put","uns_ak47","CUP_launch_RPG7V"};
		respawnWeapons[] = {"Throw","Put","uns_ak47","CUP_launch_RPG7V"};
		magazines[] = {"CUP_PG7VL_M","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_PG7VL_M","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolGLAWAss: ZSN_EurosolG
	{
		magazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolGLeader: ZSN_EurosolG
	{
		weapons[] = {"Throw","Put","uns_ak47","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_ak47","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"6Rnd_RedSignal_F","6Rnd_GreenSignal_F","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_EurosolGCrew: ZSN_EurosolG
	{
		weapons[] = {"Throw","Put","uns_aks47","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_aks47","Binocular"};
		magazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag"};
		respawnMagazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag"};
	};
	class ZSN_EurosolGPilot: ZSN_EurosolG
	{
		weapons[] = {"Throw","Put","uns_aks47","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_aks47","Binocular"};
		magazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag"};
		respawnMagazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag"};
	};
	class ZSN_EurosolGD: I_G_Soldier_base_F
	{
		weapons[] = {"Throw","Put","uns_ak47"};
		respawnWeapons[] = {"Throw","Put","uns_ak47"};
	};
	class ZSN_EurosolGDB: ZSN_EurosolGD
	{
		magazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolGDSniper: ZSN_EurosolGD
	{
		weapons[] = {"Throw","Put","uns_sks"};
		respawnWeapons[] = {"Throw","Put","uns_sks"};
		magazines[] = {"uns_sksmag","uns_sksmag","uns_sksmag","uns_sksmag","uns_sksmag","uns_sksmag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_sksmag","uns_sksmag","uns_sksmag","uns_sksmag","uns_sksmag","uns_sksmag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolGDMG: ZSN_EurosolGD
	{
		weapons[] = {"Throw","Put","uns_rpd"};
		respawnWeapons[] = {"Throw","Put","uns_rpd"};
		magazines[] = {"uns_rpdmag","uns_rpdmag","uns_rpdmag","uns_rpdmag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_rpdmag","uns_rpdmag","uns_rpdmag","uns_rpdmag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolGDLAW: ZSN_EurosolGD
	{
		weapons[] = {"Throw","Put","uns_ak47","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","uns_ak47","CUP_launch_MAAWS"};
		magazines[] = {"CUP_MAAWS_HEAT_M","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_MAAWS_HEAT_M","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolGDLAWAss: ZSN_EurosolGD
	{
		magazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_EurosolGDLeader: ZSN_EurosolGD
	{
		weapons[] = {"Throw","Put","uns_ak47","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_ak47","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_m67","CUP_HandGrenade_m67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag","CUP_HandGrenade_m67","CUP_HandGrenade_m67"};
	};
	class ZSN_EurosolGDCrew: ZSN_EurosolGD
	{
		weapons[] = {"Throw","Put","uns_aks47","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_aks47","Binocular"};
		magazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag"};
		respawnMagazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag"};
	};
	class ZSN_EurosolGDPilot: ZSN_EurosolGD
	{
		weapons[] = {"Throw","Put","uns_aks47","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_aks47","Binocular"};
		magazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag"};
		respawnMagazines[] = {"uns_ak47mag","uns_ak47mag","uns_ak47mag","uns_ak47mag"};
	};
	class ZSN_SoldierE;
	class ZSN_SoldierEMG: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","uns_PK"};
		respawnWeapons[] = {"Throw","Put","uns_PK"};
		magazines[] = {"uns_100Rnd_762x54_PK","uns_100Rnd_762x54_PK"};
		respawnmagazines[] = {"uns_100Rnd_762x54_PK","uns_100Rnd_762x54_PK"};
	};
	class ZSN_SoldierESniper: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","uns_SVD_CAMO"};
		respawnWeapons[] = {"Throw","Put","uns_SVD_CAMO"};
		magazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_SoldierESaboteur: ZSN_SoldierE
	{
		weapons[] = {"Throw","Put","uns_sa61_p","CUP_smg_bizon_snds","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_sa61_p","CUP_smg_bizon_snds","Binocular"};
		magazines[] = {"uns_20Rnd_sa61_pa","uns_20Rnd_sa61_pa","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_20Rnd_sa61_pa","uns_20Rnd_sa61_pa","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_SoldierED;
	class ZSN_SoldierEDMG: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","uns_PK"};
		respawnWeapons[] = {"Throw","Put","uns_PK"};
		magazines[] = {"uns_100Rnd_762x54_PK","uns_100Rnd_762x54_PK"};
		respawnmagazines[] = {"uns_100Rnd_762x54_PK","uns_100Rnd_762x54_PK"};
	};
	class ZSN_SoldierEDSniper: ZSN_SoldierED
	{
		weapons[] = {"Throw","Put","uns_SVD_CAMO"};
		respawnWeapons[] = {"Throw","Put","uns_SVD_CAMO"};
		magazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_MarineE;
	class ZSN_MarineEMG: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","uns_PK"};
		respawnWeapons[] = {"Throw","Put","uns_PK"};
		magazines[] = {"uns_100Rnd_762x54_PK","uns_100Rnd_762x54_PK"};
		respawnmagazines[] = {"uns_100Rnd_762x54_PK","uns_100Rnd_762x54_PK"};
	};
	class ZSN_MarineESniper: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","uns_SVD_CAMO"};
		respawnWeapons[] = {"Throw","Put","uns_SVD_CAMO"};
		magazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_MarineED;
	class ZSN_MarineEDMG: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","uns_PK"};
		respawnWeapons[] = {"Throw","Put","uns_PK"};
		magazines[] = {"uns_100Rnd_762x54_PK","uns_100Rnd_762x54_PK"};
		respawnmagazines[] = {"uns_100Rnd_762x54_PK","uns_100Rnd_762x54_PK"};
	};
	class ZSN_MarineEDSniper: ZSN_MarineE
	{
		weapons[] = {"Throw","Put","uns_SVD_CAMO"};
		respawnWeapons[] = {"Throw","Put","uns_SVD_CAMO"};
		magazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_RangerE;
	class ZSN_RangerEMG: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","uns_PK"};
		respawnWeapons[] = {"Throw","Put","uns_PK"};
		magazines[] = {"uns_100Rnd_762x54_PK","uns_100Rnd_762x54_PK"};
		respawnmagazines[] = {"uns_100Rnd_762x54_PK","uns_100Rnd_762x54_PK"};
	};
	class ZSN_RangerESniper: ZSN_RangerE
	{
		weapons[] = {"Throw","Put","uns_SVD_CAMO"};
		respawnWeapons[] = {"Throw","Put","uns_SVD_CAMO"};
		magazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class ZSN_RangerED;
	class ZSN_RangerEDMG: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","uns_PK"};
		respawnWeapons[] = {"Throw","Put","uns_PK"};
		magazines[] = {"uns_100Rnd_762x54_PK","uns_100Rnd_762x54_PK"};
		respawnmagazines[] = {"uns_100Rnd_762x54_PK","uns_100Rnd_762x54_PK"};
	};
	class ZSN_RangerEDSniper: ZSN_RangerED
	{
		weapons[] = {"Throw","Put","uns_SVD_CAMO"};
		respawnWeapons[] = {"Throw","Put","uns_SVD_CAMO"};
		magazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","uns_svdmag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class usm_base_w;
	class usm_base_w_m;
	class usm_base_d;
	class usm_base_d_m;
	class ZSN_SoldierW: usm_base_w
	{
		weapons[] = {"Throw","Put","uns_M16A1"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1"};
	};
	class ZSN_SoldierWMedic: ZSN_SoldierW
	{
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWRTO: ZSN_SoldierW
	{
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWB: ZSN_SoldierW
	{
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWMG: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","uns_m60"};
		respawnWeapons[] = {"Throw","Put","uns_m60"};
		magazines[] = {"uns_m60mag","uns_m60mag"};
		respawnMagazines[] = {"uns_m60mag","uns_m60mag"};
	};
	class ZSN_SoldierWMGAss: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","uns_M16A1","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","Binocular"};
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWLAW: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","uns_M16A1","CUP_launch_M72A6"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","CUP_launch_M72A6"};
		magazines[] = {"CUP_M72A6_M","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_M72A6_M","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class SUD_NATO_Soldier_AT: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","uns_M16A1","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","CUP_launch_MAAWS"};
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWSniper: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","uns_M21"};
		respawnWeapons[] = {"Throw","Put","uns_M21"};
		magazines[] = {"uns_m14mag","uns_m14mag","uns_m14mag","uns_m14mag","uns_m14mag","uns_m14mag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_m14mag","uns_m14mag","uns_m14mag","uns_m14mag","uns_m14mag","uns_m14mag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWOfficer: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","uns_M16A1","CUP_hgun_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","CUP_hgun_M9","Binocular"};
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWNCO: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","uns_M16A1","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag_T","uns_30Rnd_556x45_Stanag_T","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag_T","uns_30Rnd_556x45_Stanag_T","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWLeader: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","uns_m16a1_m203","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_m16a1_m203","Binocular"};
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_40mm_white","uns_40mm_white","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_40mm_white","UGL_FlareWhite_F","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
	};
	class ZSN_SoldierWG: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","uns_m16a1_m203"};
		respawnWeapons[] = {"Throw","Put","uns_m16a1_m203"};
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_40mm_white","uns_40mm_white"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_40mm_white","uns_40mm_white"};
	};
	class ZSN_SoldierWAT: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","uns_M16A1","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","CUP_launch_M47"};
		magazines[] = {"CUP_Dragon_EP1_M","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Dragon_EP1_M","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWATAss: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","uns_M16A1","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","ZSN_Rangefinder"};
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWAA: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","uns_M16A1","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_Stinger_M","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWcrew: ZSN_SoldierW
	{
		weapons[] = {"Throw","Put","uns_m3a1","CUP_hgun_Colt1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_m3a1","CUP_hgun_Colt1911","Binocular"};
		magazines[] = {"uns_m3a1mag","uns_m3a1mag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShellGreen","SmokeShellGreen"};
		respawnMagazines[] = {"uns_m3a1mag","uns_m3a1mag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShellGreen","SmokeShellGreen"};
	};
	class ZSN_SoldierWD: usm_base_w
	{
		weapons[] = {"Throw","Put","uns_M16A1"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1"};
	};
	class ZSN_SoldierWDMedic: ZSN_SoldierWD
	{
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWDRTO: ZSN_SoldierWD
	{
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWDB: ZSN_SoldierWD
	{
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWDMG: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","uns_m60"};
		respawnWeapons[] = {"Throw","Put","uns_m60"};
		magazines[] = {"uns_m60mag","uns_m60mag"};
		respawnmagazines[] = {"uns_m60mag","uns_m60mag"};
	};
	class ZSN_SoldierWDMGAss: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","uns_M16A1","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","Binocular"};
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWDLAW: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","uns_M16A1","CUP_launch_M72A6"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","CUP_launch_M72A6"};
		magazines[] = {"CUP_M72A6_M","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_M72A6_M","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWDHAT: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","uns_M16A1","CUP_launch_MAAWS"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","CUP_launch_MAAWS"};
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWDSniper: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","uns_M21"};
		respawnWeapons[] = {"Throw","Put","uns_M21"};
		magazines[] = {"uns_m14mag","uns_m14mag","uns_m14mag","uns_m14mag","uns_m14mag","uns_m14mag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_m14mag","uns_m14mag","uns_m14mag","uns_m14mag","uns_m14mag","uns_m14mag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWDOfficer: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","uns_M16A1","CUP_hgun_M9","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","CUP_hgun_M9","Binocular"};
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWDNCO: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","uns_M16A1","hgun_Pistol_Signal_F","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","hgun_Pistol_Signal_F","Binocular"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag_T","uns_30Rnd_556x45_Stanag_T","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag_T","uns_30Rnd_556x45_Stanag_T","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWDLeader: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","uns_m16a1_m203","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_m16a1_m203","Binocular"};
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_40mm_white","uns_40mm_white","uns_1Rnd_SmokeGreen_40mm","uns_1Rnd_SmokeGreen_40mm"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_40mm_white","uns_40mm_white","uns_1Rnd_SmokeGreen_40mm","uns_1Rnd_SmokeGreen_40mm"};
	};
	class ZSN_SoldierWDG: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","uns_m16a1_m203"};
		respawnWeapons[] = {"Throw","Put","uns_m16a1_m203"};
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_40mm_white","uns_40mm_white"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_1Rnd_HEDP_M433","uns_40mm_white","uns_40mm_white"};
	};
	class ZSN_SoldierWDAT: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","uns_M16A1","CUP_launch_M47"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","CUP_launch_M47"};
		magazines[] = {"CUP_Dragon_EP1_M","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Dragon_EP1_M","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWDATAss: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","uns_M16A1","ZSN_Rangefinder"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","ZSN_Rangefinder"};
		magazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWDAA: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","uns_M16A1","CUP_launch_FIM92Stinger"};
		respawnWeapons[] = {"Throw","Put","uns_M16A1","CUP_launch_FIM92Stinger"};
		magazines[] = {"CUP_Stinger_M","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_Stinger_M","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWDSaboteur: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","CUP_hgun_glock17_snds","uns_xm177e2mk","Binocular"};
		respawnWeapons[] = {"Throw","Put","CUP_hgun_glock17_snds","uns_xm177e2mk","Binocular"};
		magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","uns_30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class ZSN_SoldierWDcrew: ZSN_SoldierWD
	{
		weapons[] = {"Throw","Put","uns_m3a1","CUP_hgun_Colt1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_m3a1","CUP_hgun_Colt1911","Binocular"};
		magazines[] = {"uns_m3a1mag","uns_m3a1mag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShellGreen","SmokeShellGreen"};
		respawnMagazines[] = {"uns_m3a1mag","uns_m3a1mag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShellGreen","SmokeShellGreen"};
	};
	class ZSN_MarineW;
	class ZSN_MarineWMG: ZSN_MarineW
	{
		weapons[] = {"Throw","Put","uns_m60"};
		respawnWeapons[] = {"Throw","Put","uns_m60"};
		magazines[] = {"uns_m60mag","uns_m60mag"};
		respawnmagazines[] = {"uns_m60mag","uns_m60mag"};
	};
	class ZSN_MarineWcrew: ZSN_MarineW
	{
		weapons[] = {"Throw","Put","uns_m3a1","CUP_hgun_Colt1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_m3a1","CUP_hgun_Colt1911","Binocular"};
		magazines[] = {"uns_m3a1mag","uns_m3a1mag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShellGreen","SmokeShellGreen"};
		respawnMagazines[] = {"uns_m3a1mag","uns_m3a1mag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShellGreen","SmokeShellGreen"};
	};
	class ZSN_MarineWD;
	class ZSN_MarineWDMG: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","uns_m60"};
		respawnWeapons[] = {"Throw","Put","uns_m60"};
		magazines[] = {"uns_m60mag","uns_m60mag"};
		respawnmagazines[] = {"uns_m60mag","uns_m60mag"};
	};
	class ZSN_MarineWDcrew: ZSN_MarineWD
	{
		weapons[] = {"Throw","Put","uns_m3a1","CUP_hgun_Colt1911","Binocular"};
		respawnWeapons[] = {"Throw","Put","uns_m3a1","CUP_hgun_Colt1911","Binocular"};
		magazines[] = {"uns_m3a1mag","uns_m3a1mag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShellGreen","SmokeShellGreen"};
		respawnMagazines[] = {"uns_m3a1mag","uns_m3a1mag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShellGreen","SmokeShellGreen"};
	};
	class ZSN_Rangerw;
	class ZSN_RangerWMG: ZSN_Rangerw
	{
		weapons[] = {"Throw","Put","uns_m60"};
		respawnWeapons[] = {"Throw","Put","uns_m60"};
		magazines[] = {"uns_m60mag","uns_m60mag"};
		respawnmagazines[] = {"uns_m60mag","uns_m60mag"};
	};
	class ZSN_RangerWD;
	class ZSN_RangerWDMG: ZSN_RangerWD
	{
		weapons[] = {"Throw","Put","uns_m60"};
		respawnWeapons[] = {"Throw","Put","uns_m60"};
		magazines[] = {"uns_m60mag","uns_m60mag"};
		respawnmagazines[] = {"uns_m60mag","uns_m60mag"};
	};
	class LandVehicle;
	class Car;
	class Car_F;
	class CUP_V3S_Open_Base;
	class CUP_O_V3S_Open_TKM;
	class ZSN_CUP_DCSLA_V3S: CUP_O_V3S_Open_TKM
	{
		class Transportweapons
		{
			class _xx_CUP_arifle_Sa58P_des
			{
				weapon = "uns_akms";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_10Rnd_762x54_SVD_M
			{
				magazine = "uns_svdmag";
				count = 25;
			};
			class _xx_CUP_30Rnd_Sa58_M
			{
				magazine = "uns_ak47mag";
				count = 25;
			};
		};
	};
	class CUP_V3S_Open_NAPA;
	class ZSN_CUP_CSLA_V3S: CUP_V3S_Open_NAPA
	{
		class Transportweapons
		{
			class _xx_CUP_arifle_Sa58P
			{
				weapon = "uns_sa58p";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_10Rnd_762x54_SVD_M
			{
				magazine = "uns_svdmag";
				count = 25;
			};
			class _xx_CUP_30Rnd_Sa58_M
			{
				magazine = "uns_sa58mag";
				count = 25;
			};
		};
	};
	class CUP_B_LR_Transport_GB_W;
	class ZSN_CUP_BAF_LR: CUP_B_LR_Transport_GB_W
	{
		class Transportweapons
		{
			class _xx_ZSN_L1A1
			{
				weapon = "uns_l1a1_enfield";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "uns_l1a1mag";
				count = 30;
			};
		};
	};
	class CUP_LR_MG_Base;
	class ZSN_CUP_USR_LR_MG: CUP_LR_MG_Base
	{
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "uns_m14mag";
				count = 15;
			};
			class CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "uns_m60mag";
				count = 5;
			};
		};
	};
	class CUP_O_UAZ_SPG9_RU;
	class ZSN_CUP_VDV_UAZ_SPG9: CUP_O_UAZ_SPG9_RU
	{
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "uns_100Rnd_762x54_PK";
				count = 6;
			};
			class _xx_CUP_10Rnd_762x54_SVD_M
			{
				magazine = "uns_svdmag";
				count = 28;
			};
		};
	};
	class CUP_O_UAZ_SPG9_SLA;
	class ZSN_CUP_DVDV_UAZ_SPG9:  CUP_O_UAZ_SPG9_SLA
	{
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "uns_100Rnd_762x54_PK";
				count = 6;
			};
			class _xx_CUP_10Rnd_762x54_SVD_M
			{
				magazine = "uns_svdmag";
				count = 28;
			};
		};
	};
	class CUP_Ural_Reammo_Base;
	class ZSN_CUP_MSV_Ural_Reammo: CUP_Ural_Reammo_Base
	{
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "uns_100Rnd_762x54_PK";
				count = 18;
			};
			class _xx_CUP_10Rnd_762x54_SVD_M
			{
				magazine = "uns_svdmag";
				count = 84;
			};
		};
	};
	class ZSN_CUP_VMF_Ural_Reammo: CUP_Ural_Reammo_Base
	{
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "uns_100Rnd_762x54_PK";
				count = 18;
			};
			class _xx_CUP_10Rnd_762x54_SVD_M
			{
				magazine = "uns_svdmag";
				count = 84;
			};
		};
	};
	class B_Truck_01_ammo_F;
	class ZSN_DArmy_Truck_ammo: B_Truck_01_ammo_F
	{
		class Transportweapons
		{
			class _xx_CUP_arifle_M16A2
			{
				weapon = "uns_M16A1";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "uns_30Rnd_556x45_Stanag";
				count = 92;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				magazine = "uns_30Rnd_556x45_Stanag_T";
				count = 48;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "uns_m60mag";
				count = 16;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "uns_m14mag";
				count = 40;
			};
			class _xx_uns_1Rnd_HEDP_M433
			{
				magazine = "uns_1Rnd_HEDP_M433";
				count = 200;
			};
			class _xx_uns_40mm_white
			{
				magazine = "uns_40mm_white";
				count = 100;
			};
			class _xx_uns_1Rnd_SmokeGreen_40mm
			{
				magazine = "uns_1Rnd_SmokeGreen_40mm";
				count = 100;
			};
			class _xx_uns_m3a1mag
			{
				magazine = "uns_m3a1mag";
				count = 14;
			};
			class _xx_CUP_7Rnd_45ACP_1911
			{
				magazine = "CUP_7Rnd_45ACP_1911";
				count = 12;
			};
			delete _xx_1Rnd_HE_Grenade_shell;
			delete _xx_UGL_FlareWhite_F;
			delete _xx_1Rnd_SmokeGreen_Grenade_shell;
		};
	};
	class ZSN_DUSMC_Truck_ammo: B_Truck_01_ammo_F
	{
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "uns_m60mag";
				count = 16;
			};
			class _xx_uns_m3a1mag
			{
				magazine = "uns_m3a1mag";
				count = 14;
			};
			class _xx_CUP_7Rnd_45ACP_1911
			{
				magazine = "CUP_7Rnd_45ACP_1911";
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
		class Transportweapons
		{
			class _xx_CUP_arifle_FNFAL_OSW
			{
				weapon = "uns_Sterling";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
				count = 6;
			};
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "uns_mk4mag";
				count = 40;
			};
		};
	};
	class CUP_B_MCV80_GB_W;
	class ZSN_CUP_BAF_MCV80: CUP_B_MCV80_GB_W
	{
		class Transportweapons
		{
			class _xx_CUP_arifle_FNFAL_OSW
			{
				weapon = "uns_Sterling";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
				count = 6;
			};
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "uns_mk4mag";
				count = 40;
			};
		};
	};
	class CUP_BMP1_base;
	class CUP_O_BMP1_TKA;
	class ZSN_CUP_DCSLA_BMP1: CUP_O_BMP1_TKA
	{
		class Transportweapons
		{
			class _xx_CUP_arifle_Sa58V_camo
			{
				weapon = "uns_akms";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_50Rnd_UK59_762x54R_Tracer
			{
				magazine = "uns_75Rnd_akdr";
				count = 8;
			};
			class _xx_CUP_CUP_30Rnd_Sa58_M
			{
				magazine = "uns_ak47mag";
				count = 40;
			};
		};
	};
	class CUP_I_BMP1_TK_GUE;
	class ZSN_CUP_CSLA_BMP1: CUP_I_BMP1_TK_GUE
	{
		class Transportweapons
		{
			class _xx_CUP_arifle_Sa58V
			{
				weapon = "uns_sa58v";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_50Rnd_UK59_762x54R_Tracer
			{
				magazine = "uns_100Rnd_762x54_ukvz59";
				count = 6;
			};
			class _xx_CUP_CUP_30Rnd_Sa58_M
			{
				magazine = "uns_sa58mag";
				count = 40;
			};
		};
	};
	class uns_ah1g_ffar;
	class ZSN_CUP_ARMY_AH64: uns_ah1g_ffar
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "AH-1";
		crew = "ZSN_SoldierWPilot";
		vehicleClass = "Helicopters";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class uns_uh1d_med;
	class ZSN_CUP_ARMY_UH1_MEV: uns_uh1d_med
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		attendant = 1;
		displayName = "UH-1 MEV";
		crew = "ZSN_SoldierWPilot";
		vehicleClass = "Helicopters";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		faction = "ZSN_WArmy_ColdWar";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 48;
			};
			class _xx_medikit
			{
				name = "medikit";
				count = 12;
			};
			class _xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 12;
			};
			class _xx_ACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 3;
			};
		};
	};
	class uns_uh1d_m60;
	class ZSN_CUP_ARMY_UH1: uns_uh1d_m60
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "UH-1";
		crew = "ZSN_SoldierWPilot";
		vehicleClass = "Helicopters";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		faction = "ZSN_WArmy_ColdWar";
	};
};
