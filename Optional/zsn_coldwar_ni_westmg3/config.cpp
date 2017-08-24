////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Jan 01 18:59:50 2017 : Created on Sun Jan 01 18:59:50 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_hlc_east : config.bin{
class CfgPatches
{
	class ZSN_ColdWar_NIMG3
	{
		author = "ZluskeN";
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarEuro","hlcweapons_MG3s"};
	};
};
class CfgVehicles
{
	class ReammoBox_F;
	class CUP_B_AlicePack_Bedroll;
	class ZSN_GER_250rnd_MG3_bandoliers: CUP_B_AlicePack_Bedroll
	{
		class TransportMagazines
		{
			delete _xx_fow_50Rnd_792x57;
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
	class ZSN_GER_MG3_ammobelts: CUP_B_AlicePack_Bedroll
	{
		class TransportMagazines
		{
			delete _xx_fow_50Rnd_792x57;
			class _xx_hlc_100Rnd_762x51_M_MG3
			{
				magazine = "hlc_100Rnd_762x51_M_MG3";
				count = 5;
			};
		};
	};
	class B_Soldier_base_F;
	class ZSN_GersolW: B_Soldier_base_F{};
	class ZSN_GersolWMG: ZSN_GersolW
	{
		weapons[] = {"Throw","Put","hlc_lmg_MG3"};
		respawnWeapons[] = {"Throw","Put","hlc_lmg_MG3"};
		magazines[] = {"hlc_100Rnd_762x51_M_MG3","hlc_100Rnd_762x51_M_MG3"};
		respawnMagazines[] = {"hlc_100Rnd_762x51_M_MG3","hlc_100Rnd_762x51_M_MG3"};
	};
};
//};
