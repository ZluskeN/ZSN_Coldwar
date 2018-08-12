////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.66
//'now' is Sun Aug 12 13:56:52 2018 : 'file' last modified on Sun Aug 12 13:54:54 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class beppe_gear : config.bin{
class CfgPatches
{
	class BO_gear
	{
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class HeadgearItem: InventoryItem_Base_F
	{
		allowedSlots[] = {"BACKPACK_SLOT","HEADGEAR_SLOT"};
		type = "HEADGEAR_SLOT";
		hiddenSelections[] = {};
		hitpointName = "HitHead";
	};
	class BOprotecfullcut: ItemCore
	{
		scope = 2;
		dlc = "BlackOpsWeapons";
		author = "Black Ops Weapons";
		displayName = "Protec Full Cut";
		picture = "\beppe_mod_gear\protec\ico\protec.paa";
		model = "\beppe_mod_gear\protec\protec.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\beppe_mod_gear\protec\protec.p3d";
			allowedSlots[] = {"UNIFORM_SLOT","BACKPACK_SLOT","VEST_SLOT","HEADGEAR_SLOT"};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
		};
	};
	class BOprotechalfcut: ItemCore
	{
		scope = 2;
		dlc = "BlackOpsWeapons";
		author = "Black Ops Weapons";
		displayName = "Protec Half Cut";
		picture = "\beppe_mod_gear\protec\ico\protec_half.paa";
		model = "\beppe_mod_gear\protec\protec_half.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\beppe_mod_gear\protec\protec_half.p3d";
			allowedSlots[] = {"UNIFORM_SLOT","BACKPACK_SLOT","VEST_SLOT","HEADGEAR_SLOT"};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
		};
	};
	class BOprotechalfsdu: ItemCore
	{
		scope = 2;
		dlc = "BlackOpsWeapons";
		author = "Black Ops Weapons";
		displayName = "Protec Half Cut SDU5/E";
		picture = "\beppe_mod_gear\protec\ico\protec_half_sdu.paa";
		model = "\beppe_mod_gear\protec\protec_half_sdu.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\beppe_mod_gear\protec\protec_half_sdu.p3d";
			allowedSlots[] = {"UNIFORM_SLOT","BACKPACK_SLOT","VEST_SLOT","HEADGEAR_SLOT"};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
		};
	};
	class BOprotechalftaped: ItemCore
	{
		scope = 2;
		dlc = "BlackOpsWeapons";
		author = "Black Ops Weapons";
		displayName = "Protec Half Cut SDU5/E Taped";
		picture = "\beppe_mod_gear\protec\ico\protec_half_sdu.paa";
		model = "\beppe_mod_gear\protec\protec_half_taped.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\beppe_mod_gear\protec\protec_half_taped.p3d";
			allowedSlots[] = {"UNIFORM_SLOT","BACKPACK_SLOT","VEST_SLOT","HEADGEAR_SLOT"};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
		};
	};
	class BOprotecfullsdu: ItemCore
	{
		scope = 2;
		dlc = "BlackOpsWeapons";
		author = "Black Ops Weapons";
		displayName = "Protec Full Cut SDU 5/E";
		picture = "\beppe_mod_gear\protec\ico\protsdu.paa";
		model = "\beppe_mod_gear\protec\protecsdu5.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\beppe_mod_gear\protec\protecsdu5.p3d";
			allowedSlots[] = {"UNIFORM_SLOT","BACKPACK_SLOT","VEST_SLOT","HEADGEAR_SLOT"};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
		};
	};
	class BOprotecfullsdu_taped: ItemCore
	{
		scope = 2;
		dlc = "BlackOpsWeapons";
		author = "Black Ops Weapons";
		displayName = "Protec Full Cut SDU 5/E Taped";
		picture = "\beppe_mod_gear\protec\ico\protsdu.paa";
		model = "\beppe_mod_gear\protec\protecsdu5_taped.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\beppe_mod_gear\protec\protecsdu5_taped.p3d";
			allowedSlots[] = {"UNIFORM_SLOT","BACKPACK_SLOT","VEST_SLOT","HEADGEAR_SLOT"};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 1;
					passThrough = 0.5;
				};
			};
		};
	};
};
class cfgMods
{
	author = "ZluskeN";
	timepacked = "1534082094";
};
//};
