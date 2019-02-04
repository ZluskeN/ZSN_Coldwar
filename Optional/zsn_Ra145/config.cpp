////////////////////////////////////////////////////////////////////
//DeRap: zsn_coldwar_equipment\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Wed Jan 16 22:21:22 2019 : 'file' last modified on Wed Jan 16 22:17:26 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_ColdWar_Ra145
	{
		author = "ZluskeN";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"us_military_units"};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgVehicles
{
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
};