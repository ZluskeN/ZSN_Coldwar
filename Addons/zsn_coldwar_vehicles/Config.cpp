////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Wed Aug 03 00:08:48 2016 : Created on Wed Aug 03 00:08:48 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zsn_coldwar_vehicles : Config.bin{
class CfgPatches
{
	class ZSN_ColdWarVehicles
	{
		author = "ZluskeN";
		Units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarEast","ZSN_ColdWarWest","ZSN_ColdWarEuro"};
	};
};
class CfgFactionClasses
{
	class sfp_swe_1990
	{
		displayName = "SFP - Sweden 1990-2000";
		side = 1;
	};
	class sfp_swe_1990s
	{
		displayName = "SFP - Sweden 1990-2000 Winter";
		side = 1;
	};
};
class cfgvehicles
{
	class LandVehicle;
	class Car;
	class Car_F: Car
	{
		class Components;
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints;
			};
		};
		class ViewPilot;
		class AnimationSources;
	};
	class CUP_O_V3S_Open_TKM;
	class ZSN_CUP_DCSLA_V3S: CUP_O_V3S_Open_TKM
	{
		side = 0;
		scope = 1;
		scopeCurator = 1;
		faction = "ZSN_EEuroD_ColdWar";
		crew = "ZSN_EurosolEDB";
		typicalCargo[] = {"ZSN_EurosolEDB"};
	};
	class CUP_I_V3S_Open_TKG;
	class ZSN_CUP_CSLA_V3S: CUP_I_V3S_Open_TKG
	{
		side = 0;
		scope = 1;
		scopeCurator = 1;
		faction = "ZSN_EEuro_ColdWar";
		crew = "ZSN_EurosolEB";
		typicalCargo[] = {"ZSN_EurosolEB"};
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_kabpar_co","CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_intkor_co","CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_koloint02_co"};
	};
	class ZSN_CUP_DGUER_V3S: CUP_O_V3S_Open_TKM
	{
		side = 2;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
	};
	class ZSN_CUP_GUER_V3S: CUP_I_V3S_Open_TKG
	{
		side = 2;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
	};
	class CUP_I_V3S_Refuel_TKG;
	class ZSN_CUP_GUER_V3S_Refuel: CUP_I_V3S_Refuel_TKG
	{
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
	};
	class CUP_O_V3S_Refuel_TKM;
	class ZSN_CUP_DGUER_V3S_Refuel: CUP_O_V3S_Refuel_TKM
	{
		side = 2;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
	};
	class CUP_O_V3S_Repair_TKM;
	class ZSN_CUP_DGUER_V3S_Sup: CUP_O_V3S_Repair_TKM
	{
		side = 2;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
	};
	class CUP_I_V3S_Repair_TKG;
	class ZSN_CUP_GUER_V3S_Sup: CUP_I_V3S_Repair_TKG
	{
		side = 2;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
	};
	class ZSN_CUP_DCSLA_V3S_Sup: CUP_O_V3S_Repair_TKM
	{
		side = 0;
		scope = 1;
		scopeCurator = 1;
		attendant = 1;
		DisplayName = "Praga V3S (Support)";
		faction = "ZSN_EEuroD_ColdWar";
		crew = "ZSN_EurosolEDB";
		typicalCargo[] = {"ZSN_EurosolEDB"};
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
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 2;
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
	class ZSN_CUP_CSLA_V3S_Sup: CUP_I_V3S_Repair_TKG
	{
		side = 0;
		scope = 1;
		scopeCurator = 1;
		attendant = 1;
		DisplayName = "Praga V3S (Support)";
		faction = "ZSN_EEuro_ColdWar";
		crew = "ZSN_EurosolEB";
		typicalCargo[] = {"ZSN_EurosolEB"};
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_kabpar_co","CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_intkor_co","CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_koloint02_co","CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_repair_egue_co"};
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
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 2;
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
	class CUP_LR_Transport_Base;
	class CUP_LR_Base;
	class CUP_C_LR_Transport_CTK: CUP_LR_Transport_Base
	{
		class EventHandlers;
	};
	class ZSN_CUP_GUER_LR: CUP_C_LR_Transport_CTK
	{
		side = 2;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
		animationList[] = {"selection_wind",0.5,"selection_tool",0.5,"selection_tarp",1,"selection_steps",0.5,"selection_roll",1,"selection_rear",0.5,"selection_box",0.5,"selection_jerry",0.5,"selection_wheelfront",1,"selection_doors",0.5,"selection_antenna",1};
		hiddenselectionstextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_base_acrs_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\civ_r_lr_special_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_B_LR_Special_Des_CZ_D.jpg";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class ZSN_CUP_DGUER_LR: ZSN_CUP_GUER_LR
	{
		scope = 2;
		scopeCurator = 1;
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
		animationList[] = {"selection_wind",0.5,"selection_tool",0.5,"selection_tarp",1,"selection_steps",0.5,"selection_roll",1,"selection_rear",0.5,"selection_box",0.5,"selection_jerry",0.5,"selection_wheelfront",1,"selection_doors",0.5,"selection_antenna",1};
		hiddenselectionstextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\tk_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_acr_spec_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_O_LR_Transport_TKM.jpg";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class CUP_B_LR_Transport_GB_W: CUP_LR_Transport_Base
	{
		class EventHandlers;
	};
	class ZSN_CUP_BAF_LR: CUP_B_LR_Transport_GB_W
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crew = "ZSN_EurosolWB";
		faction = "ZSN_WEuro_ColdWar";
		typicalCargo[] = {"ZSN_EurosolWB"};
		displayname = "Land Rover (Transport)";
		animationList[] = {"selection_jerry",1,"selection_box",1,"selection_tool",0.5,"selection_steps",0.5,"selection_rear",0.5,"selection_doors",0.5,"selection_bar",0.5};
		hiddenselectionstextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_B_LR_Transport_CZ_W.jpg";
		class Transportweapons
		{
			class _xx_ZSN_L1A1
			{
				weapon = "ZSN_L1A1";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_10x_303_M
			{
				magazine = "CUP_10x_303_M";
				count = 20;
			};
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 30;
			};
			class _xx_CUP_Stinger_M
			{
				magazine = "CUP_Stinger_M";
				count = 4;
			};
		};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class ZSN_CUP_DBAF_LR: ZSN_CUP_BAF_LR
	{
		crew = "ZSN_EurosolWDB";
		faction = "ZSN_WEuroD_ColdWar";
		typicalCargo[] = {"ZSN_EurosolWDB"};
		animationList[] = {"selection_jerry",1,"selection_box",1,"selection_tool",0.5,"selection_steps",0.5,"selection_rear",0.5,"selection_doors",0.5,"selection_bar",0.5};
		hiddenselectionstextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_d_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_d_lr_special_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_B_LR_Transport_GB_D.jpg";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class CUP_B_LR_Transport_CZ_W: CUP_LR_Transport_Base
	{
		class EventHandlers;
	};
	class ZSN_CUP_USR_LR: CUP_B_LR_Transport_CZ_W
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_RangerWB";
		typicalCargo[] = {"ZSN_RangerWB"};
		displayname = "Land Rover (Transport)";
		faction = "ZSN_WRangers_ColdWar";
		animationList[] = {"selection_jerry",0.5,"selection_box",0.5,"selection_steps",0.5,"selection_box",0.5,"selection_tarp",1,"selection_tool",0.5,"selection_rear",0.5,"selection_doors",0.5};
		hiddenselectionstextures[] = {"zsn_coldwar_vehicles\rsov_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_acr_spec_co.paa"};
		attendant = 1;
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
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class ZSN_CUP_DUSR_LR: ZSN_CUP_USR_LR
	{
		crew = "ZSN_RangerWDB";
		typicalCargo[] = {"ZSN_RangerWDB"};
		faction = "ZSN_WRangersD_ColdWar";
		animationList[] = {"selection_jerry",0.5,"selection_box",0.5,"selection_steps",0.5,"selection_box",0.5,"selection_tarp",1,"selection_tool",0.5,"selection_rear",0.5,"selection_doors",0.5};
		hiddenselectionstextures[] = {"zsn_coldwar_vehicles\rsov_d_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_special_acr_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_B_LR_Transport_CZ_D.jpg";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class CUP_LR_SPG9_Base;
	class CUP_O_LR_SPG9_TKA: CUP_LR_SPG9_Base
	{
		class EventHandlers;
	};
	class ZSN_CUP_GUER_LR_SPG9: CUP_O_LR_SPG9_TKA
	{
		side = 2;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
		animationList[] = {"selection_wind",1,"selection_tool",0.5,"selection_steps",0.5,"selection_rear",0.5,"selection_box",0.5,"selection_jerry",0.5,"selection_wheelfront",1,"selection_doors",1,"selection_antenna",1};
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_base_acrs_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_acr_spec_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_B_LR_Special_Des_CZ_D.jpg";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class ZSN_CUP_DGUER_LR_SPG9: ZSN_CUP_GUER_LR_SPG9
	{
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
		animationList[] = {"selection_wind",1,"selection_tool",0.5,"selection_steps",0.5,"selection_rear",0.5,"selection_box",0.5,"selection_jerry",0.5,"selection_wheelfront",1,"selection_doors",1,"selection_antenna",1};
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\textures\tk_lr_base_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_acr_spec_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_O_LR_SPG9_TKM.jpg";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class CUP_LR_Ambulance_Base;
	class CUP_B_LR_Ambulance_GB_W: CUP_LR_Ambulance_Base
	{
		class EventHandlers;
	};
	class ZSN_CUP_GUER_LR_Sup: CUP_B_LR_Ambulance_GB_W
	{
		side = 2;
		scope = 2;
		scopeCurator = 2;
		crew = "ZSN_EurosolGB";
		faction = "ZSN_GEuro_ColdWar";
		typicalCargo[] = {"ZSN_EurosolGB"};
		animationList[] = {"selection_jerry",0.5,"selection_tool",0.5,"selection_steps",0.5,"selection_doors",0.5,"selection_antenna",1,"selection_wheelfront",0.5};
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_base_acrs_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_amb_ext_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_acr_spec_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_B_LR_Ambulance_CZ_W.jpg";
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
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 2;
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
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class ZSN_CUP_BAF_LR_Sup: CUP_B_LR_Ambulance_GB_W
	{
		side = 1;
		scope = 1;
		scopeCurator = 1;
		transportRepair = 200000000;
		supplyRadius = 7.5;
		displayName = "Land Rover (Support)";
		crew = "ZSN_EurosolWB";
		faction = "ZSN_WEuro_ColdWar";
		typicalCargo[] = {"ZSN_EurosolWB"};
		animationList[] = {"selection_jerry",1,"selection_tool",0.5,"selection_steps",0.5,"selection_doors",0.5,"selection_bar",0.5};
		hiddenSelectionsTextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","zsn_coldwar_vehicles\lr_sup_ext_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_B_LR_Ambulance_CZ_W.jpg";
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
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 2;
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
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class CUP_B_LR_Ambulance_GB_D: CUP_LR_Ambulance_Base
	{
		class EventHandlers;
	};
	class ZSN_CUP_DGUER_LR_Sup: CUP_B_LR_Ambulance_GB_D
	{
		side = 2;
		scope = 2;
		scopeCurator = 2;
		crew = "ZSN_EurosolGDB";
		faction = "ZSN_GEuroD_ColdWar";
		typicalCargo[] = {"ZSN_EurosolGDB"};
		animationList[] = {"selection_jerry",0.5,"selection_tool",0.5,"selection_steps",0.5,"selection_doors",0.5,"selection_antenna",1,"selection_wheelfront",0.5};
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\textures\tk_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_amb_ext_desert_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_acr_spec_co.paa"};
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
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 2;
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
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class ZSN_CUP_DBAF_LR_Sup: CUP_B_LR_Ambulance_GB_D
	{
		side = 1;
		scope = 1;
		scopeCurator = 1;
		transportRepair = 200000000;
		supplyRadius = 7.5;
		displayName = "Land Rover (Support)";
		crew = "ZSN_EurosolWDB";
		faction = "ZSN_WEuroD_ColdWar";
		typicalCargo[] = {"ZSN_EurosolWDB"};
		animationList[] = {"selection_jerry",1,"selection_tool",0.5,"selection_steps",0.5,"selection_doors",0.5,"selection_bar",0.5};
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\textures\gb_d_lr_base_co.paa","zsn_coldwar_vehicles\lr_sup_ext_desert_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\textures\gb_d_lr_special_co.paa"};
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
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 2;
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
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class CUP_LR_MG_Base: CUP_LR_Base
	{
		class EventHandlers;
	};
	class ZSN_CUP_USR_LR_MG: CUP_LR_MG_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		tf_hasLRradio = 1;
		crew = "ZSN_RangerWB";
		typicalCargo[] = {"ZSN_RangerWB"};
		faction = "ZSN_WRangers_ColdWar";
		animationList[] = {"selection_steps",0.5,"selection_jerry",0.5,"selection_antenna_rear",0,"selection_antenna",1,"selection_wind",1,"selection_tool",0.5,"selection_tarp",1,"selection_rear",0.5,"selection_box",0.5,"selection_wheelfront",1,"selection_doors",0.5};
		hiddenselectionstextures[] = {"zsn_coldwar_vehicles\rsov_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_acr_spec_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_B_LR_MG_GB_W.jpg";
		class Transportweapons
		{
			class _xx_CUP_launch_M136
			{
				weapon = "CUP_launch_M136";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_M136_M
			{
				magazine = "CUP_M136_M";
				count = 2;
			};
			class _xx_CUP_MAAWS_HEAT_M
			{
				magazine = "CUP_MAAWS_HEAT_M";
				count = 6;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 15;
			};
			class CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 5;
			};
		};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class ZSN_CUP_DUSR_LR_MG: ZSN_CUP_USR_LR_MG
	{
		crew = "ZSN_RangerWDB";
		typicalCargo[] = {"ZSN_RangerWDB"};
		faction = "ZSN_WRangersD_ColdWar";
		animationList[] = {"selection_steps",0.5,"selection_jerry",0.5,"selection_antenna_rear",0,"selection_antenna",1,"selection_wind",1,"selection_tool",0.5,"selection_tarp",1,"selection_rear",0.5,"selection_box",0.5,"selection_wheelfront",1,"selection_doors",0.5};
		hiddenselectionstextures[] = {"zsn_coldwar_vehicles\rsov_d_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_d_lr_special_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_B_LR_MG_CZ_W.jpg";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class CUP_B_LR_MG_GB_W: CUP_LR_MG_Base {};
	class ZSN_CUP_BAF_LR_MG: CUP_B_LR_MG_GB_W
	{
		crew = "ZSN_EurosolWB";
		faction = "ZSN_WEuro_ColdWar";
		typicalCargo[] = {"ZSN_EurosolWB"};
		animationList[] = {"selection_wheels",1,"selection_antenna",0,"selection_jerry",1,"selection_box",1,"selection_wheelfront",0,"selection_tarp",0,"selection_wind",0,"selection_tool",0.5,"selection_steps",0.5,"selection_rear",0.5,"selection_doors",0.5,"selection_bar",0.5};
		hiddenselectionstextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class ZSN_CUP_DBAF_LR_MG: ZSN_CUP_BAF_LR_MG
	{
		crew = "ZSN_EurosolWDB";
		faction = "ZSN_WEuroD_ColdWar";
		typicalCargo[] = {"ZSN_EurosolWDB"};
		animationList[] = {"selection_wheels",1,"selection_antenna",1,"selection_jerry",1,"selection_box",1,"selection_wheelfront",0,"selection_tarp",0,"selection_wind",0,"selection_tool",0.5,"selection_steps",0.5,"selection_rear",0.5,"selection_doors",0.5,"selection_bar",0.5};
		hiddenselectionstextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_d_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_d_lr_special_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_B_LR_MG_GB_D.jpg";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class Offroad_01_base_F;
	class CUP_UAZ_Base;
	class CUP_UAZ_Unarmed_Base;
	class ZSN_CUP_MSV_UAZ_Unarmed: CUP_UAZ_Unarmed_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\uaz_sov_main_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_other_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\Data\preview\CUP_O_UAZ_Unarmed_RU.jpg";
		transportAmmo = 30000;
		maximumLoad = 2000;
    		ace_rearm_defaultSupply = 1000;
		class TransportMagazines
		{
			class _xx_CUP_AT13_M
			{
				magazine = "CUP_AT13_M";
				count = 4;
			};
			class _xx_CUP_Igla_M
			{
				magazine = "CUP_Igla_M";
				count = 4;
			};
		};
	};
	class SUD_UAZ: ZSN_CUP_MSV_UAZ_Unarmed
	{
		scope = 1;
	};
	class ZSN_CUP_DMSV_UAZ_Unarmed: ZSN_CUP_MSV_UAZ_Unarmed
	{
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_SLA_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_other_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\Data\preview\CUP_O_UAZ_Unarmed_SLA.jpg";
	};
	class ZSN_CUP_VMF_UAZ_Unarmed: ZSN_CUP_MSV_UAZ_Unarmed
	{
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\uaz_sov_main_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_other_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\Data\preview\CUP_O_UAZ_Unarmed_RU.jpg";
	};
	class ZSN_CUP_DVMF_UAZ_Unarmed: ZSN_CUP_MSV_UAZ_Unarmed
	{
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_SLA_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_other_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\Data\preview\CUP_O_UAZ_Unarmed_SLA.jpg";
	};
	class CUP_UAZ_Open_Base;
	class ZSN_CUP_VDV_UAZ_Open: CUP_UAZ_Open_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		attendant = 1;
		tf_hasLRradio = 1;
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
		faction = "ZSN_ERangers_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\uaz_sov_main_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\Data\preview\CUP_O_UAZ_Open_RU.jpg";
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
	class ZSN_CUP_DVDV_UAZ_Open: ZSN_CUP_VDV_UAZ_Open
	{
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
		faction = "ZSN_ERangersD_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_SLA_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\Data\preview\CUP_O_UAZ_Open_SLA.jpg";
	};
	class CUP_UAZ_Armed_Base;
	class CUP_O_UAZ_SPG9_RU;
	class ZSN_CUP_VDV_UAZ_SPG9: CUP_O_UAZ_SPG9_RU
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_RangerEB";
		typicalCargo[] = {"ZSN_RangerEB"};
		faction = "ZSN_ERangers_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\uaz_sov_main_co.paa"};
		class Transportweapons
		{
			class _xx_CUP_launch_RPG18
			{
				weapon = "CUP_launch_RPG18";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_RPG18_M
			{
				magazine = "CUP_RPG18_M";
				count = 2;
			};
			class _xx_RPG32_F
			{
				magazine = "RPG32_F";
				count = 6;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 6;
			};
			class _xx_CUP_10Rnd_762x54_SVD_M
			{
				magazine = "CUP_10Rnd_762x54_SVD_M";
				count = 28;
			};
		};
	};
	class CUP_O_UAZ_SPG9_SLA;
	class ZSN_CUP_DVDV_UAZ_SPG9:  CUP_O_UAZ_SPG9_SLA
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_RangerEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
		faction = "ZSN_ERangersD_ColdWar";
		class Transportweapons
		{
			class _xx_CUP_launch_RPG18
			{
				weapon = "CUP_launch_RPG18";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_RPG18_M
			{
				magazine = "CUP_RPG18_M";
				count = 2;
			};
			class _xx_RPG32_F
			{
				magazine = "RPG32_F";
				count = 6;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 6;
			};
			class _xx_CUP_10Rnd_762x54_SVD_M
			{
				magazine = "CUP_10Rnd_762x54_SVD_M";
				count = 28;
			};
		};
	};
	class CUP_UAZ_MG_Base;
	class ZSN_CUP_MSV_UAZ_MG: CUP_UAZ_MG_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\uaz_sov_main_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\Data\preview\CUP_O_UAZ_MG_RU.jpg";
	};
	class ZSN_CUP_DMSV_UAZ_MG: ZSN_CUP_MSV_UAZ_MG
	{
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_SLA_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\Data\preview\CUP_O_UAZ_MG_SLA.jpg";
	};
	class ZSN_CUP_VMF_UAZ_MG: ZSN_CUP_MSV_UAZ_MG
	{
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
	};
	class ZSN_CUP_DVMF_UAZ_MG: ZSN_CUP_DMSV_UAZ_MG
	{
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
	};
	class CUP_UAZ_AGS30_Base;
	class ZSN_CUP_MSV_UAZ_AGS30: CUP_UAZ_AGS30_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\uaz_sov_main_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\Data\preview\CUP_O_UAZ_AGS30_RU.jpg";
	};
	class ZSN_CUP_VMF_UAZ_AGS30: ZSN_CUP_MSV_UAZ_AGS30
	{
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_RangerEB"};
		faction = "ZSN_EMarines_ColdWar";
	};
	class ZSN_CUP_DMSV_UAZ_AGS30: ZSN_CUP_MSV_UAZ_AGS30
	{
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_SLA_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\Data\preview\CUP_O_UAZ_AGS30_SLA.jpg";
	};
	class ZSN_CUP_DVMF_UAZ_AGS30: ZSN_CUP_DMSV_UAZ_AGS30
	{
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_RangerEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
	};
	class CUP_UAZ_METIS_Base;
	class ZSN_CUP_MSV_UAZ_METIS: CUP_UAZ_METIS_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\uaz_sov_main_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\Data\preview\CUP_O_UAZ_METIS_RU.jpg";
	};
	class ZSN_CUP_VMF_UAZ_METIS: ZSN_CUP_MSV_UAZ_METIS
	{
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
	};
	class ZSN_CUP_DMSV_UAZ_METIS: ZSN_CUP_MSV_UAZ_METIS
	{
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_SLA_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\Data\preview\CUP_O_UAZ_METIS_SLA.jpg";
	};
	class ZSN_CUP_DVMF_UAZ_METIS: ZSN_CUP_DMSV_UAZ_METIS
	{
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
	};
	class CUP_UAZ_Amb_Base;
	class ZSN_CUP_MSV_UAZ_Amb: CUP_UAZ_Amb_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\uaz_med_sov_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_other_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\Data\preview\CUP_O_UAZ_AMB_RU.jpg";
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
	class ZSN_CUP_VMF_UAZ_Amb: ZSN_CUP_MSV_UAZ_Amb
	{
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
	};
	class ZSN_CUP_DMSV_UAZ_Amb: ZSN_CUP_MSV_UAZ_Amb
	{
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\uaz_med_SLA_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_other_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\Data\preview\CUP_O_UAZ_Unarmed_SLA.jpg";
	};
	class ZSN_CUP_DVMF_UAZ_Amb: ZSN_CUP_DMSV_UAZ_Amb
	{
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
	};
	class CUP_HMMWV_Base: Car_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner;
				class ViewOptics;
			};
		};
	};
	class CUP_HMMWV_Unarmed_Base;
	class ZSN_CUP_ARMY_HMMWV_Unarmed: CUP_HMMWV_Unarmed_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
		hiddenSelectionsTextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_Unarmed_USMC.jpg";
		transportAmmo = 30000;
		maximumLoad = 2000;
    		ace_rearm_defaultSupply = 1000;
		class TransportMagazines
		{
			class _xx_CUP_Dragon_EP1_M
			{
				magazine = "CUP_Dragon_EP1_M";
				count = 4;
			};
			class _xx_CUP_Stinger_M
			{
				magazine = "CUP_Stinger_M";
				count = 4;
			};
		};
	};
	class SUD_HMMWV: ZSN_CUP_ARMY_HMMWV_Unarmed
	{
		scope = 1;
	};
	class ZSN_CUP_USMC_HMMWV_Unarmed: ZSN_CUP_ARMY_HMMWV_Unarmed
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class CUP_HMMWV_Transport_Base;
	class CUP_B_HMMWV_Transport_USA;
	class ZSN_CUP_DARMY_HMMWV_Unarmed: CUP_B_HMMWV_Transport_USA
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
		transportAmmo = 30000;
		maximumLoad = 2000;
    		ace_rearm_defaultSupply = 1000;
		class TransportMagazines
		{
			class _xx_CUP_Dragon_EP1_M
			{
				magazine = "CUP_Dragon_EP1_M";
				count = 4;
			};
			class _xx_CUP_Stinger_M
			{
				magazine = "CUP_Stinger_M";
				count = 4;
			};
		};
	};
	class ZSN_CUP_DUSMC_HMMWV_Unarmed: ZSN_CUP_DARMY_HMMWV_Unarmed
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class CUP_HMMWV_M2_Base;
	class ZSN_CUP_ARMY_HMMWV_M2: CUP_HMMWV_M2_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
		hiddenSelectionsTextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_M2_USMC.jpg";
	};
	class SUD_HMMWV_M2: ZSN_CUP_ARMY_HMMWV_M2
	{
		scope = 1;
	};
	class ZSN_CUP_USMC_HMMWV_M2: ZSN_CUP_ARMY_HMMWV_M2
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_CUP_DARMY_HMMWV_M2: ZSN_CUP_ARMY_HMMWV_M2
	{
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_us_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_M2_USA.jpg";
	};
	class ZSN_CUP_DUSMC_HMMWV_M2: ZSN_CUP_DARMY_HMMWV_M2
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class CUP_HMMWV_MK19_Base;
	class ZSN_CUP_ARMY_HMMWV_MK19: CUP_HMMWV_MK19_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
		hiddenSelectionsTextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_MK19_USMC.jpg";
	};
	class ZSN_CUP_USMC_HMMWV_MK19: ZSN_CUP_ARMY_HMMWV_MK19
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_CUP_DARMY_HMMWV_MK19: ZSN_CUP_ARMY_HMMWV_MK19
	{
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_us_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_MK19_USA.jpg";
	};
	class ZSN_CUP_DUSMC_HMMWV_MK19: ZSN_CUP_DARMY_HMMWV_MK19
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class CUP_HMMWV_TOW_Base: CUP_HMMWV_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class ZSN_CUP_ARMY_HMMWV_TOW: CUP_HMMWV_TOW_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
		hiddenSelectionsTextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\tow_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_TOW_USMC.jpg";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -10;
				maxElev = "+20";
				weapons[] = {"ZSN_Vmlauncher_TOW_single_veh"};
				magazines[] = {"ZSN_1Rnd_TOW_HMMWV_M","ZSN_1Rnd_TOW_HMMWV_M","ZSN_1Rnd_TOW_HMMWV_M","ZSN_1Rnd_TOW_HMMWV_M","ZSN_1Rnd_TOW_HMMWV_M","ZSN_1Rnd_TOW_HMMWV_M"};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
				gunnerAction = "CUP_HMMWV_Gunner03";
				gunnerOpticsModel = "\CUP\Weapons\CUP_Weapons_StaticWeapons\optika_TOW.p3d";
				class ViewOptics
				{
					visionMode[] = {"Normal","TI"};
					thermalMode[] = {2,3};
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
				};
				disableSoundAttenuation = 1;
			};
		};
	};
	class ZSN_CUP_USMC_HMMWV_TOW: ZSN_CUP_ARMY_HMMWV_TOW
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_CUP_DARMY_HMMWV_TOW: ZSN_CUP_ARMY_HMMWV_TOW
	{
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_us_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\tow_us_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_TOW_USA.jpg";
	};
	class ZSN_CUP_DUSMC_HMMWV_TOW: ZSN_CUP_DARMY_HMMWV_TOW
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class CUP_HMMWV_Avenger_Base;
	class ZSN_CUP_USMC_HMMWV_Avenger: CUP_HMMWV_Avenger_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
		hiddenSelectionsTextures[] = {"\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_body_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\m998a2_avenger_1_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\m998a2_avenger_3_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_Avenger_USMC.jpg";
	};
	class ZSN_CUP_DARMY_HMMWV_Avenger: ZSN_CUP_USMC_HMMWV_Avenger
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
		hiddenSelectionsTextures[] = {"\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_body_us_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\m998a2_avenger_1_us_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\m998a2_avenger_3_us_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_Avenger_USA.jpg";
	};
	class CUP_HMMWV_Ambulance_Base;
	class ZSN_CUP_ARMY_HMMWV_Ambulance: CUP_HMMWV_Ambulance_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
		hiddenSelectionsTextures[] = {"\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_body_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_parts_1_ca.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_Ambulance_USMC.jpg";
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
	class ZSN_CUP_USMC_HMMWV_Ambulance: ZSN_CUP_ARMY_HMMWV_Ambulance
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_CUP_DARMY_HMMWV_Ambulance: ZSN_CUP_ARMY_HMMWV_Ambulance
	{
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_body_us_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_parts_1_us_ca.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_Ambulance_USA.jpg";
	};
	class ZSN_CUP_DUSMC_HMMWV_Ambulance: ZSN_CUP_DARMY_HMMWV_Ambulance
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class Truck_F;
	class CUP_Ural_BaseTurret;
	class CUP_Ural_ZU23_Base;
	class CUP_I_Ural_ZU23_TK_Gue;
	class ZSN_CUP_GUER_Ural_ZU23: CUP_I_Ural_ZU23_TK_Gue
	{
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_sla_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_Ural_ZU23_SLA.jpg";
	};
	class ZSN_CUP_DGUER_Ural_ZU23: ZSN_CUP_GUER_Ural_ZU23
	{
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_tka_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_tka_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_Ural_ZU23_TKM.jpg";
	};
	class CUP_Ural_Base;
	class ZSN_CUP_MSV_Ural: CUP_Ural_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_Ural_RU.jpg";
	};
	class SUD_Ural: ZSN_CUP_MSV_Ural
	{
		scope = 1;
	};
	class ZSN_CUP_VMF_Ural: ZSN_CUP_MSV_Ural
	{
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
	};
	class ZSN_CUP_DMSV_Ural: ZSN_CUP_MSV_Ural
	{
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_Ural_SLA.jpg";
	};
	class ZSN_CUP_DVMF_Ural: ZSN_CUP_DMSV_Ural
	{
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
	};
	class CUP_Ural_Open_Base;
	class ZSN_CUP_MSV_Ural_Open: CUP_Ural_Open_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_Ural_Open_RU.jpg";
	};
	class SUD_Ural_Open: ZSN_CUP_MSV_Ural_Open
	{
		scope = 1;
	};
	class ZSN_CUP_VMF_Ural_Open: ZSN_CUP_MSV_Ural_Open
	{
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
	};
	class ZSN_CUP_DMSV_Ural_Open: ZSN_CUP_MSV_Ural_Open
	{
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_sla_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_Ural_Open_SLA.jpg";
	};
	class ZSN_CUP_DVMF_Ural_Open: ZSN_CUP_DMSV_Ural_Open
	{
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
	};
	class CUP_BM21_Base;
	class CUP_O_BM21_RU;
	class ZSN_CUP_DMSV_BM21: CUP_O_BM21_RU
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_bm21_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_bm21_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_BM21_SLA.jpg";
	};
	class ZSN_CUP_MSV_BM21: ZSN_CUP_DMSV_BM21
	{
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_bm21_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_bm21_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_BM21_SLA.jpg";
	};
	class CUP_Ural_Support_Base;
	class CUP_Ural_Refuel_Base;
	class ZSN_CUP_MSV_Ural_Refuel: CUP_Ural_Refuel_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_fuel_chdkz_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_Ural_Refuel_RU.jpg";
	};
	class SUD_Ural_Refuel: ZSN_CUP_MSV_Ural_Refuel
	{
		scope = 1;
	};
	class ZSN_CUP_VMF_Ural_Refuel: ZSN_CUP_MSV_Ural_Refuel
	{
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
	};
	class ZSN_CUP_DMSV_Ural_Refuel: ZSN_CUP_MSV_Ural_Refuel
	{
		crew = "ZSN_SoldierEDB";
		typicalCargo[] = {"ZSN_SoldierEDB"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_sla_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_fuel_chdkz_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_Ural_Refuel_SLA.jpg";
	};
	class ZSN_CUP_DVMF_Ural_Refuel: ZSN_CUP_DMSV_Ural_Refuel
	{
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
	};
	class CUP_Ural_Repair_Base;
	class ZSN_CUP_MSV_Ural_Repair: CUP_Ural_Repair_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "SUD_USSR_Soldier_Repair";
		typicalCargo[] = {"SUD_USSR_Soldier_Repair"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_Ural_Repair_RU.jpg";
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 3;
			};
		};
	};
	class SUD_Ural_Repair: ZSN_CUP_MSV_Ural_Repair
	{
		scope = 1;
	};
	class ZSN_CUP_VMF_Ural_Repair: ZSN_CUP_MSV_Ural_Repair
	{
		crew = "SUD_USSR_Soldier_Repair";
		typicalCargo[] = {"SUD_USSR_Soldier_Repair"};
		faction = "ZSN_EMarines_ColdWar";
	};
	class ZSN_CUP_DMSV_Ural_Repair: ZSN_CUP_MSV_Ural_Repair
	{
		crew = "SUD_DUSSR_Soldier_Repair";
		typicalCargo[] = {"SUD_DUSSR_Soldier_Repair"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_Ural_Repair_SLA.jpg";
	};
	class ZSN_CUP_DVMF_Ural_Repair: ZSN_CUP_DMSV_Ural_Repair
	{
		crew = "SUD_USSR_Soldier_Repair";
		typicalCargo[] = {"SUD_USSR_Soldier_Repair"};
		faction = "ZSN_EMarinesD_ColdWar";
	};
	class CUP_Ural_Reammo_Base;
	class ZSN_CUP_MSV_Ural_Reammo: CUP_Ural_Reammo_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEB";
		typicalCargo[] = {"ZSN_SoldierEB"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_Ural_Reammo_RU.jpg";
		maximumLoad = 20000;
    		ace_rearm_defaultSupply = 10000;
		class Transportweapons
		{
			class _xx_CUP_launch_RPG18
			{
				weapon = "CUP_launch_RPG18";
				count = 20;
			};
			class _xx_CUP_arifle_AK74
			{
				weapon = "CUP_arifle_AK74";
				count = 2;
			};
		};
		class TransportBackpacks
		{
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
				count = 18;
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
	class SUD_Ural_Reammo: ZSN_CUP_MSV_Ural_Reammo
	{
		scope = 1;
	};
	class ZSN_CUP_VMF_Ural_Reammo: CUP_Ural_Reammo_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_Ural_Reammo_RU.jpg";
		maximumLoad = 20000;
    		ace_rearm_defaultSupply = 10000;
		crew = "ZSN_MarineEB";
		typicalCargo[] = {"ZSN_MarineEB"};
		faction = "ZSN_EMarines_ColdWar";
		class Transportweapons
		{
			class _xx_CUP_launch_RPG18
			{
				weapon = "CUP_launch_RPG18";
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
				count = 18;
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
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_Ural_Reammo_SLA.jpg";
	};
	class ZSN_CUP_DVMF_Ural_Reammo: ZSN_CUP_VMF_Ural_Reammo
	{
		crew = "ZSN_MarineEDB";
		typicalCargo[] = {"ZSN_MarineEDB"};
		faction = "ZSN_EMarinesD_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\Data\preview\CUP_O_Ural_Reammo_SLA.jpg";
	};
	class B_Truck_01_transport_F;
	class ZSN_DArmy_Truck_transport: B_Truck_01_transport_F
	{
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_d_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_d_01_ext_02_co.paa"};
	};
	class ZSN_DUSMC_Truck_transport: ZSN_DArmy_Truck_transport
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_Army_Truck_transport: ZSN_DArmy_Truck_transport
	{
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_wl_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_wl_01_ext_02_co.paa"};
	};
	class SUD_truck5t_open: ZSN_Army_Truck_transport
	{
		scope = 1;
	};
	class ZSN_USMC_Truck_transport: ZSN_Army_Truck_transport
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class B_Truck_01_covered_F;
	class ZSN_DArmy_Truck_covered: B_Truck_01_covered_F
	{
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_d_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_d_01_ext_02_co.paa"};
	};
	class ZSN_DUSMC_Truck_covered: ZSN_DArmy_Truck_covered
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_Army_Truck_covered: ZSN_DArmy_Truck_covered
	{
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_wl_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_wl_01_ext_02_co.paa"};
	};
	class SUD_truck5t: ZSN_Army_Truck_covered
	{
		scope = 1;
	};
	class ZSN_USMC_Truck_covered: ZSN_Army_Truck_covered
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class B_Truck_01_Repair_F;
	class ZSN_DArmy_Truck_Repair: B_Truck_01_Repair_F
	{
		tf_hasLRradio = 1;
		crew = "SUD_NATO_Soldier_Repair";
		typicalCargo[] = {"SUD_NATO_Soldier_Repair"};
		faction = "ZSN_WArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_d_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_d_01_ext_02_co.paa","zsn_coldwar_vehicles\truck_d_01_ammo_CO.paa"};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 3;
			};
		};
	};
	class ZSN_DUSMC_Truck_Repair: ZSN_DArmy_Truck_Repair
	{
		crew = "SUD_DNATO_Soldier_Repair";
		typicalCargo[] = {"SUD_DNATO_Soldier_Repair"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_Army_Truck_Repair: ZSN_DArmy_Truck_Repair
	{
		crew = "SUD_NATO_Soldier_Repair";
		typicalCargo[] = {"SUD_NATO_Soldier_Repair"};
		faction = "ZSN_WArmy_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_wl_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_wl_01_ext_02_co.paa","zsn_coldwar_vehicles\truck_wl_01_ammo_CO.paa"};
	};
	class SUD_truck5t_Repair: ZSN_Army_Truck_Repair
	{
		scope = 1;
	};
	class ZSN_USMC_Truck_Repair: ZSN_Army_Truck_Repair
	{
		crew = "SUD_DNATO_Soldier_Repair";
		typicalCargo[] = {"SUD_DNATO_Soldier_Repair"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class B_Truck_01_ammo_F;
	class ZSN_DArmy_Truck_ammo: B_Truck_01_ammo_F
	{
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_d_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_d_01_ext_02_co.paa","zsn_coldwar_vehicles\truck_d_01_ammo_CO.paa"};
		maximumLoad = 20000;
    		ace_rearm_defaultSupply = 10000;
		class Transportweapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon = "CUP_launch_M72A6";
				count = 20;
			};
			class _xx_CUP_arifle_M16A2
			{
				weapon = "CUP_arifle_M16A2";
				count = 2;
			};
		};
		class TransportBackpacks
		{
			class _xx_CUP_B_AlicePack_Khaki
			{
				backpack = "CUP_B_AlicePack_Khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_M72A6_M
			{
				magazine = "CUP_M72A6_M";
				count = 20;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "CUP_30Rnd_556x45_Stanag";
				count = 92;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
				count = 48;
			};
			class _xx_200Rnd_556x45_Box_Tracer_Red_F
			{
				magazine = "200Rnd_556x45_Box_Tracer_Red_F";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 16;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 40;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 200;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine = "UGL_FlareWhite_F";
				count = 100;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 100;
			};
			class _xx_CUP_15Rnd_9x19_M9
			{
				magazine = "CUP_15Rnd_9x19_M9";
				count = 66;
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
			class _xx_CUP_HandGrenade_M67
			{
				magazine = "CUP_HandGrenade_M67";
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
			class _xx_CUP_Mine_M
			{
				magazine = "CUP_Mine_M";
				count = 15;
			};
		};
	};
	class ZSN_DUSMC_Truck_ammo: B_Truck_01_ammo_F
	{
		tf_hasLRradio = 1;
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_d_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_d_01_ext_02_co.paa","zsn_coldwar_vehicles\truck_d_01_ammo_CO.paa"};
		maximumLoad = 20000;
    		ace_rearm_defaultSupply = 10000;
		class Transportweapons
		{
			class _xx_CUP_launch_M72A6
			{
				weapon = "CUP_launch_M72A6";
				count = 10;
			};
			class _xx_CUP_arifle_M16A2
			{
				weapon = "CUP_arifle_M16A2";
				count = 2;
			};
		};
		class TransportBackpacks
		{
			class _xx_CUP_B_AlicePack_Khaki
			{
				backpack = "CUP_B_AlicePack_Khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_SMAW_HEAA_M
			{
				magazine = "CUP_SMAW_HEAA_M";
				count = 8;
			};
			class _xx_CUP_M72A6_M
			{
				magazine = "CUP_M72A6_M";
				count = 10;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "CUP_30Rnd_556x45_Stanag";
				count = 92;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
				count = 48;
			};
			class _xx_200Rnd_556x45_Box_Tracer_Red_F
			{
				magazine = "200Rnd_556x45_Box_Tracer_Red_F";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 16;
			};
			class _xx_CUP_5Rnd_762x51_M24
			{
				magazine = "CUP_5Rnd_762x51_M24";
				count = 160;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 200;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine = "UGL_FlareWhite_F";
				count = 100;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 100;
			};
			class _xx_CUP_7Rnd_45ACP_1911
			{
				magazine = "CUP_7Rnd_45ACP_1911";
				count = 143;
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
			class _xx_CUP_HandGrenade_M67
			{
				magazine = "CUP_HandGrenade_M67";
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
			class _xx_CUP_Mine_M
			{
				magazine = "CUP_Mine_M";
				count = 15;
			};
		};
	};
	class ZSN_Army_Truck_ammo: ZSN_DArmy_Truck_ammo
	{
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_wl_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_wl_01_ext_02_co.paa","zsn_coldwar_vehicles\truck_wl_01_ammo_CO.paa"};
	};
	class SUD_truck5t_Reammo: ZSN_Army_Truck_ammo
	{
		scope = 1;
	};
	class ZSN_USMC_Truck_ammo: ZSN_DUSMC_Truck_ammo
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_wl_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_wl_01_ext_02_co.paa","zsn_coldwar_vehicles\truck_wl_01_ammo_CO.paa"};
	};
	class B_Truck_01_fuel_F;
	class ZSN_DArmy_Truck_fuel: B_Truck_01_fuel_F
	{
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWDB";
		typicalCargo[] = {"ZSN_SoldierWDB"};
		faction = "ZSN_WArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_d_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_d_01_ext_02_co.paa","zsn_coldwar_vehicles\truck_d_01_fuel_CO.paa"};
	};
	class ZSN_DUSMC_Truck_fuel: ZSN_DArmy_Truck_fuel
	{
		crew = "ZSN_MarineWDB";
		typicalCargo[] = {"ZSN_MarineWDB"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_Army_Truck_fuel: ZSN_DArmy_Truck_fuel
	{
		crew = "ZSN_SoldierWB";
		typicalCargo[] = {"ZSN_SoldierWB"};
		faction = "ZSN_WArmy_ColdWar";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\truck_wl_01_ext_01_co.paa","zsn_coldwar_vehicles\truck_wl_01_ext_02_co.paa","zsn_coldwar_vehicles\truck_wl_01_fuel_CO.paa"};
	};
	class SUD_truck5t_Refuel: ZSN_Army_Truck_fuel
	{
		scope = 1;
	};
	class ZSN_USMC_Truck_fuel: ZSN_Army_Truck_fuel
	{
		crew = "ZSN_MarineWB";
		typicalCargo[] = {"ZSN_MarineWB"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class CUP_Datsun_Base;
	class CUP_Datsun_PK_Base;
	class CUP_I_Datsun_PK_Random;
	class ZSN_CUP_GUER_Datsun_PK: CUP_I_Datsun_PK_Random
	{
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
		animationList[] = {"hideGrille",0.5,"hideRearDoor",0.5};
		textureList[] = {"blueRed",1,"greenBlackBeigeDesert",1,"greenBlackBeigeDesertDot",1,"greenBeigeDesert",1,"desert",1,"greenBeigeWoodland",1,"greenBrownBeigeWoodland",1,"redStarWoodland",1};
	};
	class CUP_I_Datsun_PK_TK_Random;
	class ZSN_CUP_DGUER_Datsun_PK: CUP_I_Datsun_PK_TK_Random
	{
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
		animationList[] = {"hideGrille",0.5,"hideRearDoor",0.5};
		textureList[] = {"blueRed",1,"greenBlackBeigeDesert",1,"greenBlackBeigeDesertDot",1,"greenBeigeDesert",1,"desert",1,"greenBeigeWoodland",1,"greenBrownBeigeWoodland",1,"redStarWoodland",1};
	};
	class CUP_Datsun_civil_Base;
	class CUP_C_Datsun;
	class ZSN_CUP_GUER_Datsun: CUP_C_Datsun
	{
		side = 2;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
		animationList[] = {"hideGrille",0.5,"hideSpareTire",0.5,"hideRollBar",0.5,"hideRearDoor",1};
		textureList[] = {"blueRed",1,"greenBlackBeigeDesert",1,"greenBlackBeigeDesertDot",1,"greenBeigeDesert",1,"desert",1,"greenBeigeWoodland",1,"greenBrownBeigeWoodland",1,"redStarWoodland",1};
	};
	class ZSN_CUP_DGUER_Datsun: ZSN_CUP_GUER_Datsun
	{
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
		animationList[] = {"hideGrille",0.5,"hideSpareTire",0.5,"hideRollBar",0.5,"hideRearDoor",1};
		textureList[] = {"blueRed",1,"greenBlackBeigeDesert",1,"greenBlackBeigeDesertDot",1,"greenBeigeDesert",1,"desert",1,"greenBeigeWoodland",1,"greenBrownBeigeWoodland",1,"redStarWoodland",1};
	};
	class Wheeled_APC_F;
	class CUP_BTR40_MG_Base;
	class CUP_I_BTR40_MG_TKG;
	class ZSN_CUP_GUER_BTR40_MG: CUP_I_BTR40_MG_TKG
	{
		side = 2;
		scope = 1;
		scopeCurator = 1;
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
	};
	class ZSN_CUP_DGUER_BTR40_MG: ZSN_CUP_GUER_BTR40_MG
	{
		scope = 1;
		scopeCurator = 1;
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\data\btr40extcamo_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\Data\preview\CUP_O_BTR40_MG_TKM.jpg";
	};
	class ZSN_CUP_CSLA_BTR40_MG: CUP_I_BTR40_MG_TKG
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_EEuro_ColdWar";
		crew = "ZSN_EurosolEB";
		typicalCargo[] = {"ZSN_EurosolEB"};
	};
	class ZSN_CUP_DCSLA_BTR40_MG: ZSN_CUP_CSLA_BTR40_MG
	{
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_EEuroD_ColdWar";
		crew = "ZSN_EurosolEDB";
		typicalCargo[] = {"ZSN_EurosolEDB"};
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\data\btr40extcamo_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\Data\preview\CUP_O_BTR40_MG_TKM.jpg";
	};
	class CUP_BTR40_Base;
	class CUP_I_BTR40_TKG;
	class ZSN_CUP_GUER_BTR40: CUP_I_BTR40_TKG
	{
		side = 2;
		scope = 1;
		scopeCurator = 1;
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
	};
	class ZSN_CUP_DGUER_BTR40: ZSN_CUP_GUER_BTR40
	{
		scope = 1;
		scopeCurator = 1;
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\data\btr40extcamo_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\Data\preview\CUP_O_BTR40_TKM.jpg";
	};
	class ZSN_CUP_CSLA_BTR40: CUP_I_BTR40_TKG
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_EEuro_ColdWar";
		crew = "ZSN_EurosolEB";
		typicalCargo[] = {"ZSN_EurosolEB"};
		class Transportweapons
		{
			class _xx_CUP_arifle_Sa58P
			{
				weapon = "CUP_arifle_Sa58P";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_10Rnd_762x54_SVD_M
			{
				magazine = "CUP_10Rnd_762x54_SVD_M";
				count = 25;
			};
			class _xx_CUP_30Rnd_Sa58_M
			{
				magazine = "CUP_30Rnd_Sa58_M";
				count = 25;
			};
			class _xx_CUP_Strela_2_M
			{
				magazine = "CUP_Strela_2_M";
				count = 4;
			};
		};
	};
	class ZSN_CUP_DCSLA_BTR40: ZSN_CUP_CSLA_BTR40
	{
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_EEuroD_ColdWar";
		crew = "ZSN_EurosolEDB";
		typicalCargo[] = {"ZSN_EurosolEDB"};
		hiddenSelectionsTextures[] = {"CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\data\btr40extcamo_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\Data\preview\CUP_O_BTR40_TKM.jpg";
		class Transportweapons
		{
			class _xx_CUP_arifle_Sa58P_des
			{
				weapon = "CUP_arifle_Sa58P_des";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_10Rnd_762x54_SVD_M
			{
				magazine = "CUP_10Rnd_762x54_SVD_M";
				count = 25;
			};
			class _xx_CUP_30Rnd_Sa58_M
			{
				magazine = "CUP_30Rnd_Sa58_M";
				count = 25;
			};
			class _xx_CUP_Strela_2_M
			{
				magazine = "CUP_Strela_2_M";
				count = 4;
			};
		};
	};
	class CUP_BRDM2_Base;
	class ZSN_CUP_VMF_BRDM2: CUP_BRDM2_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		faction = "ZSN_EMarines_ColdWar";
		crew = "ZSN_MarineECrew";
		typicalCargo[] = {"ZSN_MarineECrew"};
		hiddenselectionstextures[] = {"\zsn_coldwar_vehicles\sov_brdm2_01_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\brdm2_02_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\Data\preview\CUP_O_BRDM2_RUS.jpg";
	};
	class ZSN_CUP_DVMF_BRDM2: ZSN_CUP_VMF_BRDM2
	{
		faction = "ZSN_EMarinesD_ColdWar";
		crew = "ZSN_MarineEDCrew";
		typicalCargo[] = {"ZSN_MarineEDCrew"};
		hiddenselectionstextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\textures\sla_brdm2_01_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\brdm2_02_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\Data\preview\CUP_I_BRDM2_NAPA.jpg";
	};
	class SUD_BRDM2: ZSN_CUP_DVMF_BRDM2
	{
		scope = 1;
	};
	class CUP_BRDM2_ATGM_Base;
	class ZSN_CUP_VMF_BRDM2_ATGM: CUP_BRDM2_ATGM_Base
	{
		side = 0;
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		tf_hasLRradio = 1;
		faction = "ZSN_EMarines_ColdWar";
		crew = "ZSN_MarineECrew";
		typicalCargo[] = {"ZSN_MarineECrew"};
		hiddenselectionstextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\textures\rus_brdm2_atgm_01_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\brdm2_02_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\Data\preview\CUP_O_BRDM2_ATGM_RUS.jpg";
	};
	class ZSN_CUP_DVMF_BRDM2_ATGM: ZSN_CUP_VMF_BRDM2_ATGM
	{
		faction = "ZSN_EMarinesD_ColdWar";
		crew = "ZSN_MarineEDCrew";
		typicalCargo[] = {"ZSN_MarineEDCrew"};
		hiddenselectionstextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\textures\sla_brdm2_atgm_01_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\brdm2_02_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\Data\preview\CUP_I_BRDM2_ATGM_NAPA.jpg";
	};
	class CUP_BRDM2_HQ_Base;
	class ZSN_CUP_VMF_BRDM2_HQ: CUP_BRDM2_HQ_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		attendant = 1;
		tf_hasLRradio = 1;
		faction = "ZSN_EMarines_ColdWar";
		crew = "ZSN_MarineECrew";
		typicalCargo[] = {"ZSN_MarineECrew"};
		hiddenselectionstextures[] = {"\zsn_coldwar_vehicles\sov_brdm2_01_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\brdm2_02_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\Data\preview\CUP_O_BRDM2_HQ_RUS.jpg";
	};
	class ZSN_CUP_DVMF_BRDM2_HQ: ZSN_CUP_VMF_BRDM2_HQ
	{
		faction = "ZSN_EMarinesD_ColdWar";
		crew = "ZSN_MarineEDCrew";
		typicalCargo[] = {"ZSN_MarineEDCrew"};
		hiddenselectionstextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\textures\sla_brdm2_01_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\brdm2_02_co.paa"};
		editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\Data\preview\CUP_I_BRDM2_HQ_NAPA.jpg";
	};
	class CUP_BTR60_Base;
	class ZSN_CUP_MSV_BTR60: CUP_BTR60_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_MarineECrew";
		typicalCargo[] = {"ZSN_MarineECrew"};
		faction = "ZSN_EMarines_ColdWar";
		hiddenselectionstextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_BTR60\data\textures\russia\russia_body_green_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_BTR60\data\textures\russia\russia_detail_green_co.paa"};
	};
	class SUD_BTR60: ZSN_CUP_MSV_BTR60
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierECrew"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_CUP_DMSV_BTR60: ZSN_CUP_MSV_BTR60
	{
		faction = "ZSN_EMarinesD_ColdWar";
		crew = "ZSN_MarineEDCrew";
		typicalCargo[] = {"ZSN_MarineEDCrew"};
		hiddenselectionstextures[] = {"\zsn_coldwar_vehicles\russia_body_desert_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_BTR60\data\textures\russia\russia_detail_green_co.paa"};
	};
	class ZSN_CUP_VMF_BTR60: ZSN_CUP_MSV_BTR60
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		crew = "ZSN_MarineECrew";
		typicalCargo[] = {"ZSN_MarineECrew"};
		faction = "ZSN_EMarines_ColdWar";
		hiddenselectionstextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_BTR60\data\textures\russia\russia_body_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_BTR60\data\textures\russia\russia_detail_co.paa"};
	};
	class CUP_MTLB_Base;
	class CUP_I_MTLB_pk_NAPA;
	class ZSN_CUP_MSV_MTLB_pk: CUP_I_MTLB_pk_NAPA
	{
		scope = 2;
		side = 0;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierECrew"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class ZSN_CUP_DMSV_MTLB_pk: ZSN_CUP_MSV_MTLB_pk
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDCrew"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"\CUP\TrackedVehicles\CUP_TrackedVehicles_MTLB\data\textures\opfor\body_new_sla_co.paa","\CUP\TrackedVehicles\CUP_TrackedVehicles_MTLB\data\textures\opfor\pk_mod_new_sla_co.paa"};
		hiddenSelectionsMaterials[] = {"\CUP\TrackedVehicles\CUP_TrackedVehicles_MTLB\data\textures\russia\body_1.rvmat","\CUP\TrackedVehicles\CUP_TrackedVehicles_MTLB\data\textures\russia\pk_mod.rvmat"};
		editorPreview = "\CUP\TrackedVehicles\CUP_TrackedVehicles_MTLB\data\preview\CUP_O_MTLB_pk_SLA.jpg";
	};
	class ZSN_CUP_VMF_MTLB_pk: ZSN_CUP_MSV_MTLB_pk
	{
		crew = "ZSN_MarineECrew";
		typicalCargo[] = {"ZSN_MarineECrew"};
		faction = "ZSN_EMarines_ColdWar";
		hiddenSelectionsTextures[] = {"\CUP\TrackedVehicles\CUP_TrackedVehicles_MTLB\data\textures\russia\body_new_ru_green_co.paa","\CUP\TrackedVehicles\CUP_TrackedVehicles_MTLB\data\textures\russia\pk_mod_new_ru_green_co.paa"};
		hiddenSelectionsMaterials[] = {"\CUP\TrackedVehicles\CUP_TrackedVehicles_MTLB\data\textures\russia\body_1.rvmat","\CUP\TrackedVehicles\CUP_TrackedVehicles_MTLB\data\textures\russia\pk_mod.rvmat"};
		editorPreview = "\CUP\TrackedVehicles\CUP_TrackedVehicles_MTLB\data\preview\CUP_O_MTLB_pk_Green_RU.jpg";
	};
	class CUP_LAV25_Base;
	class CUP_B_LAV25_USMC;
	class ZSN_CUP_USMC_LAV25: CUP_B_LAV25_USMC
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_MarineWCrew";
		typicalCargo[] = {"ZSN_MarineWCrew"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_CUP_DUSMC_LAV25: ZSN_CUP_USMC_LAV25
	{
		displayName = "LAV-25A1 (Desert)";
		crew = "ZSN_MarineWDCrew";
		typicalCargo[] = {"ZSN_MarineWDCrew"};
		faction = "ZSN_WMarinesD_ColdWar";
		hiddenSelectionsTextures[] = {"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody_desert_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody2_desert_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavalfa_desert_ca.paa"};
	};
	class CUP_B_LAV25M240_USMC;
	class ZSN_CUP_USMC_LAV25M240: CUP_B_LAV25M240_USMC
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_MarineWCrew";
		typicalCargo[] = {"ZSN_MarineWCrew"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_CUP_DUSMC_LAV25M240: ZSN_CUP_USMC_LAV25M240
	{
		displayName = "LAV-25A1 (M240) (Desert)";
		crew = "ZSN_MarineWDCrew";
		typicalCargo[] = {"ZSN_MarineWDCrew"};
		faction = "ZSN_WMarinesD_ColdWar";
		hiddenSelectionsTextures[] = {"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody_desert_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody2_desert_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavalfa_desert_ca.paa"};
	};
	class CUP_B_LAV25_HQ_USMC;
	class ZSN_CUP_USMC_LAV25_HQ: CUP_B_LAV25_HQ_USMC
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		attendant = 1;
		tf_hasLRradio = 1;
		crew = "ZSN_MarineWCrew";
		typicalCargo[] = {"ZSN_MarineWCrew"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_CUP_DUSMC_LAV25_HQ: ZSN_CUP_USMC_LAV25_HQ
	{
		displayName = "LAV-C2 (Desert)";
		crew = "ZSN_MarineWDCrew";
		typicalCargo[] = {"ZSN_MarineWDCrew"};
		faction = "ZSN_WMarinesD_ColdWar";
		hiddenSelectionsTextures[] = {"\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody_desert_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lavbody2_desert_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_lav25\data\lav_hq_desert_co.paa"};
	};
	class Tank;
	class Tank_F: Tank
	{
		class Turrets;
	};
	class CUP_MCV80_Base;
	class CUP_B_MCV80_GB_D_SLAT;
	class CUP_B_MCV80_GB_D;
	class ZSN_CUP_DBAF_MCV80: CUP_B_MCV80_GB_D
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		crew = "ZSN_EurosolWDcrew";
		faction = "ZSN_WEuroD_ColdWar";
		class Transportweapons
		{
			class _xx_CUP_arifle_FNFAL_OSW
			{
				weapon = "CUP_arifle_FNFAL_OSW";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_MAAWS_HEAT_M
			{
				magazine = "CUP_MAAWS_HEAT_M";
				count = 6;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
				count = 6;
			};
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 50;
			};
		};
	};
	class CUP_B_MCV80_GB_W;
	class ZSN_CUP_BAF_MCV80: CUP_B_MCV80_GB_W
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		crew = "ZSN_EurosolWcrew";
		faction = "ZSN_WEuro_ColdWar";
		class Transportweapons
		{
			class _xx_CUP_arifle_FNFAL_OSW
			{
				weapon = "CUP_arifle_FNFAL_OSW";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_MAAWS_HEAT_M
			{
				magazine = "CUP_MAAWS_HEAT_M";
				count = 6;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
				count = 6;
			};
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 50;
			};
		};
	};
	class CUP_Challenger2_base;
	class CUP_B_Challenger2_Woodland_BAF;
	class ZSN_CUP_BAF_Challenger2: CUP_B_Challenger2_Woodland_BAF
	{
		scope = 2;
		scopeCurator = 2;
		crew = "ZSN_EurosolWcrew";
		faction = "ZSN_WEuro_ColdWar";
	};
	class CUP_B_Challenger2_Desert_BAF;
	class ZSN_CUP_DBAF_Challenger2: CUP_B_Challenger2_Desert_BAF
	{
		scope = 2;
		scopeCurator = 2;
		crew = "ZSN_EurosolWDcrew";
		faction = "ZSN_WEuroD_ColdWar";
	};
	class CUP_T34_Base;
	class CUP_I_T34_NAPA;
	class ZSN_CUP_GUER_T34: CUP_I_T34_NAPA
	{
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGB";
		typicalCargo[] = {"ZSN_EurosolGB"};
	};
	class ZSN_CUP_DGUER_T34: ZSN_CUP_GUER_T34
	{
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDB";
		typicalCargo[] = {"ZSN_EurosolGDB"};
		hiddenselectionstextures[] = {"\cup\trackedvehicles\CUP_TrackedVehicles_T34\Data\T34_Body01_IND_CO.paa","\cup\trackedvehicles\CUP_TrackedVehicles_T34\Data\T34_Body02_IND_CO.paa","\cup\trackedvehicles\CUP_TrackedVehicles_T34\Data\T34_Turret_IND_CO.paa","\cup\trackedvehicles\CUP_TrackedVehicles_T34\Data\T34_Wheels_IND_CO.paa","\cup\trackedvehicles\CUP_TrackedVehicles_T34\Data\T34_Body03_IND_CO.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_T34\Data\preview\CUP_O_T34_TKA.jpg";
	};
	class CUP_I_T55_NAPA;
	class ZSN_CUP_DVMF_T55: CUP_I_T55_NAPA
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "ZSN_MarineEDCrew";
		typicalCargo[] = {"ZSN_MarineEDCrew"};
		faction = "ZSN_EMarinesD_ColdWar";
	};
	class ZSN_CUP_VMF_T55: ZSN_CUP_DVMF_T55
	{
		scope = 2;
		scopeCurator = 2;
		crew = "ZSN_MarineECrew";
		typicalCargo[] = {"ZSN_MarineECrew"};
		faction = "ZSN_EMarines_ColdWar";
	};
	class ZSN_CUP_DMSV_T55: ZSN_CUP_DVMF_T55
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDCrew"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_body_sla_co","\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_tower_sla_co"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_T55\Data\preview\CUP_O_T55_SLA.jpg";
	};
	class ZSN_CUP_MSV_T55: ZSN_CUP_VMF_T55
	{
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierECrew"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_body_TKG_co","\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_tower_TKG_co"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_T55\Data\preview\CUP_I_T55_TK_GUE.jpg";
	};
	class CUP_I_T55_TK_GUE;
	class ZSN_CUP_GUER_T55: CUP_I_T55_TK_GUE
	{
		scope = 1;
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGCrew";
		typicalCargo[] = {"ZSN_EurosolGCrew"};
		hiddenSelectionsTextures[] = {"\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_body_sla_co","\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_tower_sla_co"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_T55\Data\preview\CUP_I_T55_TK_GUE.jpg";
	};
	class ZSN_CUP_DGUER_T55: ZSN_CUP_GUER_T55
	{
		scope = 1;
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDCrew";
		typicalCargo[] = {"ZSN_EurosolGDCrew"};
		hiddenSelectionsTextures[] = {"\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_body_co.paa","\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_tower_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_T55\Data\preview\CUP_O_T55_TK.jpg";
	};
	class CUP_ZSU23_Base;
	class ZSN_CUP_MSV_ZSU23: CUP_ZSU23_Base
	{
		side = 0;
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierECrew"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"ZSN_ColdWar_Vehicles\zsu_01_sov_co.paa","ZSN_ColdWar_Vehicles\zsu_02_sov_co.paa","ZSN_ColdWar_Vehicles\zsu_03_sov_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_ZSU23\Data\preview\CUP_O_ZSU23_SLA.jpg";
	};
	class ZSN_CUP_DMSV_ZSU23: CUP_ZSU23_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDCrew"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\TrackedVehicles\CUP_TrackedVehicles_ZSU23\Data\zsu_01_sla_co.paa","CUP\TrackedVehicles\CUP_TrackedVehicles_ZSU23\Data\zsu_02_sla_co.paa","CUP\TrackedVehicles\CUP_TrackedVehicles_ZSU23\Data\zsu_03_sla_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_ZSU23\Data\preview\CUP_O_ZSU23_SLA.jpg";
	};
	class SUD_ZSU: ZSN_CUP_DMSV_ZSU23
	{
		scope = 1;
	};
	class CUP_O_2S6_RU;
	class ZSN_MSV_2S6: CUP_O_2S6_RU
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierECrew"};
		faction = "ZSN_EArmy_ColdWar";
	};
	class CUP_M270_HE_Base;
	class ZSN_CUP_Army_M270: CUP_M270_HE_Base
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierWCrew";
		typicalCargo[] = {"ZSN_SoldierWCrew"};
		faction = "ZSN_WArmy_ColdWar";
		hiddenSelectionsTextures[] = {"\cup\trackedvehicles\cup_trackedvehicles_m270\data\mlrs_hull_woodland_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_M270\Data\preview\CUP_B_M270_HE_USMC.jpg";
	};
	class ZSN_CUP_DArmy_M270: ZSN_CUP_Army_M270
	{
		crew = "ZSN_SoldierWDCrew";
		typicalCargo[] = {"ZSN_SoldierWDCrew"};
		faction = "ZSN_WArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"\cup\trackedvehicles\cup_trackedvehicles_m270\data\mlrs_hull_desert_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_M270\Data\preview\CUP_B_M270_HE_USA.jpg";
	};
	class APC_Tracked_02_base_F;
	class CUP_AAV_Base;
	class CUP_B_AAV_USMC;
	class ZSN_CUP_USMC_AAV: CUP_B_AAV_USMC
	{
		threat[] = {1,1,0.3};
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_MarineWCrew";
		typicalCargo[] = {"ZSN_MarineWCrew"};
		faction = "ZSN_WMarines_ColdWar";
		hiddenSelectionsTextures[] = {"CUP\TrackedVehicles\CUP_TrackedVehicles_AAV\data\aav_ext_co.paa","CUP\TrackedVehicles\CUP_TrackedVehicles_AAV\data\aav_ext2_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_AAV\Data\preview\CUP_B_AAV_USMC.jpg";
	};
	class CUP_M2Bradley_Base;
	class CUP_B_M2Bradley_USA_D;
	class ZSN_CUP_DARMY_M2Bradley: CUP_B_M2Bradley_USA_D
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		displayName = "M2A2 Bradley";
		faction = "ZSN_WArmyD_ColdWar";
		crew = "ZSN_SoldierWDCrew";
		typicalCargo[] = {"ZSN_SoldierWDCrew"};
	};
	class ZSN_CUP_ARMY_M2Bradley: ZSN_CUP_DARMY_M2Bradley
	{
		faction = "ZSN_WArmy_ColdWar";
		crew = "ZSN_SoldierWCrew";
		typicalCargo[] = {"ZSN_SoldierWCrew"};
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\base_wdl_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\a3_wdl_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\ultralp_wdl_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_Bradley\Data\preview\CUP_B_M2Bradley_USA_W.jpg";
	};
	class SUD_M2A2: ZSN_CUP_ARMY_M2Bradley
	{
		scope = 1;
	};
	class CUP_BMP1_base;
	class CUP_O_BMP1_TKA;
	class ZSN_CUP_DCSLA_BMP1: CUP_O_BMP1_TKA
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "ZSN_EurosolEDcrew";
		faction = "ZSN_EEuroD_ColdWar";
		class Transportweapons
		{
			class _xx_CUP_arifle_Sa58V_camo
			{
				weapon = "CUP_arifle_Sa58V_camo";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_PG7VL_M
			{
				magazine = "CUP_PG7VL_M";
				count = 6;
			};
			class _xx_CUP_50Rnd_UK59_762x54R_Tracer
			{
				magazine = "CUP_50Rnd_UK59_762x54R_Tracer";
				count = 16;
			};
			class _xx_CUP_CUP_30Rnd_Sa58_M
			{
				magazine = "CUP_30Rnd_Sa58_M";
				count = 40;
			};
		};
	};
	class CUP_I_BMP1_TK_GUE;
	class ZSN_CUP_CSLA_BMP1: CUP_I_BMP1_TK_GUE
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "ZSN_EurosolEcrew";
		faction = "ZSN_EEuro_ColdWar";
		class Transportweapons
		{
			class _xx_CUP_arifle_Sa58V
			{
				weapon = "CUP_arifle_Sa58V";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_PG7VL_M
			{
				magazine = "CUP_PG7VL_M";
				count = 6;
			};
			class _xx_CUP_50Rnd_UK59_762x54R_Tracer
			{
				magazine = "CUP_50Rnd_UK59_762x54R_Tracer";
				count = 16;
			};
			class _xx_CUP_CUP_30Rnd_Sa58_M
			{
				magazine = "CUP_30Rnd_Sa58_M";
				count = 40;
			};
		};
	};
	class CUP_BMP1P_base;
	class ZSN_CUP_SWE_501: CUP_BMP1P_base
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		faction = "sfp_swe_1990";
		displayName = "Pbv 501";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\swe_trup_ext0_co.paa","zsn_coldwar_vehicles\swe_veza0_co.paa",""};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_BMP\Data\preview\CUP_I_BMP1_TK_GUE.jpg";
        };
	class ZSN_CUP_WSWE_501: ZSN_CUP_SWE_501
	{
		faction = "sfp_swe_1990s";
		displayName = "Pbv 501";
		hiddenSelectionsTextures[] = {"zsn_coldwar_vehicles\swe_u_trup_ext0_co.paa","zsn_coldwar_vehicles\swe_u_veza0_co.paa",""};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_BMP\Data\preview\CUP_O_BMP1_CSAT.jpg";
	};
	class CUP_BMP2_Base;
	class ZSN_CUP_MSV_BMP2: CUP_BMP2_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierECrew"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_khk_01_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_khk_02_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_BMP\Data\preview\CUP_I_BMP2_NAPA.jpg";
	};
	class ZSN_CUP_DMSV_BMP2: ZSN_CUP_MSV_BMP2
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDCrew"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_01_sla_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_02_sla_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_BMP\Data\preview\CUP_O_BMP2_SLA.jpg";
	};
	class SUD_BMP2: ZSN_CUP_DMSV_BMP2
	{
		scope = 1;
	};
	class CUP_BMP2_ZU_base;
	class ZSN_CUP_VMF_BMP2_ZU: CUP_BMP2_ZU_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_MarineECrew";
		typicalCargo[] = {"ZSN_MarineECrew"};
		faction = "ZSN_EMarines_ColdWar";
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_khk_01_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_02_ru_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_BMP\Data\preview\CUP_O_BMP2_ZU_CSAT.jpg";
	};
	class ZSN_CUP_DVMF_BMP2_ZU: ZSN_CUP_VMF_BMP2_ZU
	{
		crew = "ZSN_MarineEDCrew";
		typicalCargo[] = {"ZSN_MarineEDCrew"};
		faction = "ZSN_EMarinesD_ColdWar";
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_01_sla_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_02_ru_co.paa"};
	};
	class CUP_BMP2_HQ_Base;
	class ZSN_CUP_MSV_BMP_HQ: CUP_BMP2_HQ_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		attendant = 1;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierECrew"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_khk_01_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_khk_02_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_BMP\Data\preview\CUP_I_BMP_HQ_NAPA.jpg";
	};
	class ZSN_CUP_DMSV_BMP_HQ: ZSN_CUP_MSV_BMP_HQ
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDCrew"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_01_sla_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_02_sla_co.paa"};
	};
	class CUP_BMP2_Ambul_Base;
	class ZSN_CUP_MSV_BMP2_AMB: CUP_BMP2_Ambul_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierECrew"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_khk_01_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_khk_02_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_BMP\Data\preview\CUP_I_BMP2_AMB_NAPA.jpg";
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
	class ZSN_CUP_DMSV_BMP2_AMB: ZSN_CUP_MSV_BMP2_AMB
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDCrew"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_01_sla_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_02_sla_co.paa"};
	};
	class CUP_M113_Base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class ZSN_CUP_Army_M113: CUP_M113_Base
	{
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		faction = "ZSN_WArmy_ColdWar";
		crew = "ZSN_SoldierWCrew";
		typicalCargo[] = {"ZSN_SoldierWCrew"};
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_olive_drab_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_02_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_M113\Data\preview\CUP_B_M113_USA.jpg";
	};
	class SUD_M113: ZSN_CUP_Army_M113
	{
		scope = 1;
	};
	class ZSN_CUP_DArmy_M113: ZSN_CUP_Army_M113
	{
		faction = "ZSN_WArmyD_ColdWar";
		crew = "ZSN_SoldierWDCrew";
		typicalCargo[] = {"ZSN_SoldierWDCrew"};
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_desert_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_02_desert_co.paa"};
	};
	class CUP_M113_Med_Base;
	class ZSN_CUP_ARMY_M113_Med: CUP_M113_Med_Base
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		faction = "ZSN_WArmy_ColdWar";
		crew = "ZSN_SoldierWCrew";
		typicalCargo[] = {"ZSN_SoldierWCrew"};
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_olive_drab_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_02_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_M113\Data\preview\CUP_B_M113_Med_USA.jpg";
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
	class ZSN_CUP_DARMY_M113_Med: ZSN_CUP_ARMY_M113_Med
	{
		faction = "ZSN_WArmyD_ColdWar";
		crew = "ZSN_SoldierWDCrew";
		typicalCargo[] = {"ZSN_SoldierWDCrew"};
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_desert_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_02_co.paa"};
	};
	class ZSN_CUP_ARMY_M113_HQ: CUP_M113_Med_Base
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		transportSoldier = 0;
		displayName = "M113A3 (HQ)";
		faction = "ZSN_WArmy_ColdWar";
		crew = "ZSN_SoldierWCrew";
		typicalCargo[] = {"ZSN_SoldierWCrew"};
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_olive_drab_co.paa",""};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_M113\Data\preview\CUP_B_M113_USA.jpg";
		class TransportWeapons
		{
			class _xx_CUP_lmg_M240
			{
				weapon = "CUP_lmg_M240";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_ZSN_762x51_ammobelts
			{
				backpack = "ZSN_762x51_ammobelts";
				count = 2;
			};
		};
	};
	class ZSN_CUP_DARMY_M113_HQ: ZSN_CUP_ARMY_M113_HQ
	{
		faction = "ZSN_WArmyD_ColdWar";
		crew = "ZSN_SoldierWDCrew";
		typicalCargo[] = {"ZSN_SoldierWDCrew"};
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_desert_co.paa",""};
	};
	class ZSN_CUP_BW_M113: CUP_M113_Base
	{
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
		hiddenSelectionsTextures[] = {"zsn_coldwar_euro\m113a3_bw_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_02_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_M113\Data\preview\CUP_B_M113_USA.jpg";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"CUP_Vlmg_MG3_veh_noeject","SmokeLauncher"};
				magazines[] = {"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","SmokeLauncherMag"};
			};
		};
	};
	class ZSN_CUP_BW_M113_HQ: CUP_M113_Med_Base
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		transportSoldier = 0;
		displayName = "M113A3 (HQ)";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
		hiddenSelectionsTextures[] = {"zsn_coldwar_euro\m113a3_bw_co.paa",""};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_M113\Data\preview\CUP_B_M113_USA.jpg";
		class TransportWeapons
		{
			class _xx_CUP_lmg_MG3
			{
				weapon = "CUP_lmg_MG3";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_ZSN_762x51_MG3_ammobelts
			{
				backpack = "ZSN_762x51_MG3_ammobelts";
				count = 2;
			};
		};
	};
	class CUP_B_UH1D_slick_GER_KSK;
	class ZSN_CUP_B_UH1D_GER: CUP_B_UH1D_slick_GER_KSK
	{
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWPilot";
		displayName = "UH-1D Slick";
		typicalCargo[] = {"ZSN_GersolWPilot"};
	};
	class CUP_B_CH53E_GER;
	class ZSN_CUP_B_CH53E_GER: CUP_B_CH53E_GER
	{
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWPilot";
		typicalCargo[] = {"ZSN_GersolWPilot"};
	};
	class CUP_B_CH53E_VIV_GER;
	class ZSN_CUP_B_CH53E_VIV_GER: CUP_B_CH53E_VIV_GER
	{
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWPilot";
		typicalCargo[] = {"ZSN_GersolWPilot"};
	};
	class CUP_B_Leopard2A6_GER;
	class ZSN_Leopard2: CUP_B_Leopard2A6_GER
	{
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		displayName = "Leopard 2";
		faction = "ZSN_WGer_ColdWar";
		crew = "ZSN_GersolWCrew";
		typicalCargo[] = {"ZSN_GersolWCrew"};
	};
	class CUP_M163_Base;
	class ZSN_CUP_ARMY_M163: CUP_M163_Base
	{
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		faction = "ZSN_WArmy_ColdWar";
		crew = "ZSN_SoldierWCrew";
		typicalCargo[] = {"ZSN_SoldierWCrew"};
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m163_vulcan_01_green_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m163_vulcan_02_green_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_M113\Data\preview\CUP_B_M163_USA.jpg";
	};
	class SUD_M163: ZSN_CUP_ARMY_M163
	{
		scope = 1;
	};
	class ZSN_CUP_DARMY_M163: ZSN_CUP_ARMY_M163
	{
		faction = "ZSN_WArmyD_ColdWar";
		crew = "ZSN_SoldierWDCrew";
		typicalCargo[] = {"ZSN_SoldierWDCrew"};
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m163_vulcan_01_desert_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m163_vulcan_02_desert_co.paa"};
	};
	class MBT_02_base_F;
	class CUP_B_M60A3_USMC;
	class ZSN_CUP_USMC_M60A3: CUP_B_M60A3_USMC
	{
		crew = "ZSN_MarineWCrew";
		typicalCargo[] = {"ZSN_MarineWCrew"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class ZSN_CUP_DUSMC_M60A3: ZSN_CUP_USMC_M60A3
	{
		crew = "ZSN_MarineWDCrew";
		typicalCargo[] = {"ZSN_MarineWDCrew"};
		faction = "ZSN_WMarinesD_ColdWar";
	};
	class ZSN_CUP_ARMY_M60A3: CUP_B_M60A3_USMC
	{
		faction = "ZSN_WArmy_ColdWar";
		crew = "ZSN_SoldierWCrew";
		typicalCargo[] = {"ZSN_SoldierWCrew"};
	};
	class ZSN_CUP_DARMY_M60A3: ZSN_CUP_ARMY_M60A3
	{
		faction = "ZSN_WArmyD_ColdWar";
		crew = "ZSN_SoldierWDCrew";
		typicalCargo[] = {"ZSN_SoldierWDCrew"};
	};
	class CUP_T72_Base;
	class ZSN_CUP_DCSLA_T72: CUP_T72_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		displayName = "T-72M1";
		faction = "ZSN_EEuroD_ColdWar";
		crew = "ZSN_EurosolEDCrew";
		typicalCargo[] = {"ZSN_EurosolEDCrew"};
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\TK_T72_1_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\TK_T72_2_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\TK_T72_3_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_T72\Data\preview\CUP_O_T72_TKA.jpg";
	};
	class ZSN_CUP_CSLA_T72: ZSN_CUP_DCSLA_T72
	{
		faction = "ZSN_EEuro_ColdWar";
		crew = "ZSN_EurosolECrew";
		typicalCargo[] = {"ZSN_EurosolECrew"};
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\CDF_T72_1_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\CDF_T72_2_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\CDF_T72_3_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_T72\Data\preview\CUP_B_T72_CDF.jpg";
	};
	class ZSN_CUP_DMSV_T72: CUP_T72_Base
	{
		side = 0;
		scope = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		displayName = "T-72A";
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDCrew"};
		faction = "ZSN_EArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\GUE_T72_1_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\GUE_T72_2_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\GUE_T72_3_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_T72\Data\preview\CUP_I_T72_NAPA.jpg";
	};
	class ZSN_CUP_MSV_T72: ZSN_CUP_DMSV_T72
	{
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierECrew"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"ZSN_ColdWar_Vehicles\SOV_T72_1_co.paa","ZSN_ColdWar_Vehicles\SOV_T72_2_co.paa","ZSN_ColdWar_Vehicles\SOV_T72_3_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_T72\Data\preview\CUP_I_T72_NAPA.jpg";
	};
	class CUP_T72_ACR_Base;
	class ZSN_CUP_MSV_T72B: CUP_T72_ACR_Base
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		displayName = "T-72B";
		crew = "ZSN_SoldierECrew";
		typicalCargo[] = {"ZSN_SoldierECrew"};
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\CZ_T72_1_co.paa","ZSN_ColdWar_Vehicles\CZ_T72_2_co.paa","cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\CZ_T72_3_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_T72\Data\preview\CUP_B_T72_CZ.jpg";
	};
	class ZSN_CUP_DMSV_T72B: ZSN_CUP_MSV_T72B
	{
		crew = "ZSN_SoldierEDCrew";
		typicalCargo[] = {"ZSN_SoldierEDCrew"};
		faction = "ZSN_EArmyD_ColdWar";
	};
	class SUD_T72B: ZSN_CUP_DMSV_T72B
	{
		scope = 1;
	};
	class CUP_M1_Abrams_base;
	class CUP_B_M1A1_Woodland_US_Army;
	class ZSN_CUP_ARMY_M1A1: CUP_B_M1A1_Woodland_US_Army
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		tf_hasLRradio = 1;
		displayName = "M1A1";
		crew = "ZSN_SoldierWCrew";
		typicalCargo[] = {"ZSN_SoldierWCrew"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class SUD_M1A1: ZSN_CUP_ARMY_M1A1
	{
		scope = 1;
	};
	class ZSN_CUP_DARMY_M1A1: ZSN_CUP_ARMY_M1A1
	{
		crew = "ZSN_SoldierWDCrew";
		typicalCargo[] = {"ZSN_SoldierWDCrew"};
		faction = "ZSN_WArmyD_ColdWar";
		hiddenSelectionsTextures[] = {"\CUP\TrackedVehicles\CUP_TrackedVehicles_m1_abrams\Data\m1abrams_01_desert_co.paa","\CUP\TrackedVehicles\CUP_TrackedVehicles_m1_abrams\Data\m1abrams_02_desert_co.paa","\CUP\TrackedVehicles\CUP_TrackedVehicles_m1_abrams\Data\m1abrams_03_desert_co.paa","\CUP\TrackedVehicles\CUP_TrackedVehicles_m1_abrams\data\m1abrams_mg_mount_co.paa"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_m1_abrams\Data\preview\CUP_B_M1A1_DES_USMC.jpg";
	};
	class Air;
	class Plane;
	class CUP_Su25_base;
	class CUP_O_Su25_RU_3;
	class ZSN_CUP_VMF_Su25: CUP_O_Su25_RU_3
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 0;
		faction = "ZSN_EMarines_ColdWar";
		crew = "ZSN_SoldierEDPilot";
	};
	class CUP_Su25_GBU_base;
	class CUP_O_Su25_RU_1;
	class ZSN_CUP_MSV_Su25: CUP_O_Su25_RU_1
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 0;
		faction = "ZSN_EArmy_ColdWar";
		crew = "ZSN_SoldierEDPilot";
	};
	class SUD_SU25: ZSN_CUP_MSV_Su25
	{
		scope = 1;
	};
	class CUP_A10_Base;
	class ZSN_CUP_Army_A10: CUP_A10_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "A-10 Thunderbolt II";
		faction = "ZSN_WArmy_ColdWar";
		crew = "ZSN_SoldierWDPilot";
		weapons[] = {"CUP_weapon_mastersafe","CUP_Vacannon_GAU8_veh","CUP_Vblauncher_Mk82_veh","CUP_Vmlauncher_AGM65_veh","CUP_Vmlauncher_FFAR_veh","CUP_Vmlauncher_AIM9L_veh_2Rnd","CMFlareLauncher"};
		magazines[] = {"CUP_1Rnd_Sidewinder_A10_Pod_M","CUP_1Rnd_ALQ131_M","CUP_2Rnd_Hydra_Pod_19_Full_M","CUP_2Rnd_MK82_Rack_M","CUP_4Rnd_Mk82_M","CUP_1Rnd_pylonblank_M","CUP_2Rnd_AIM_9L_Sidewinder_External_M","CUP_2Rnd_pylonblank_M","CUP_6Rnd_AGM65_Maverick_M","CUP_6Rnd_pylonblank_M","CUP_12Rnd_pylonblank_M","CUP_1350Rnd_TE1_Red_Tracer_30mm_GAU8_M","CUP_38Rnd_FFAR_M","168Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelectionsTextures[] = {"\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_green_hog.paa","\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_green.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_A10\Data\preview\CUP_B_A10_AT_USA.jpg";
	};
	class SUD_A10: ZSN_CUP_Army_A10
	{
		scope = 1;
	};
	class CUP_AV8B_Base;
	class ZSN_CUP_USMC_AV8B: CUP_AV8B_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "ZSN_WMarines_ColdWar";
		crew = "ZSN_SoldierWDPilot";
		weapons[] = {"CUP_Vacannon_GAU12_veh","CUP_Vblauncher_Mk82_veh","CUP_Vmlauncher_FFAR_veh","CUP_Vmlauncher_AIM9L_veh","CMFlareLauncher"};
		magazines[] = {"CUP_300Rnd_TE1_Red_Tracer_25mm_GAU12_M","CUP_2Rnd_MK82_Rack_M","CUP_2Rnd_Hydra_Pod_19_Full_M","CUP_38Rnd_FFAR_M","CUP_2Rnd_AIM_9L_Sidewinder_External_M","CUP_6Rnd_Mk82_M","120Rnd_CMFlare_Chaff_Magazine"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Av8B\Data\preview\CUP_B_AV8B_GBU12_USMC.jpg";
	};
	class CUP_B_GR9_CAP_GB;
	class ZSN_BAF_AV8: CUP_B_GR9_CAP_GB
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_WEuro_ColdWar";
		crew = "ZSN_EurosolWPilot";
		typicalCargo[] = {"ZSN_EurosolWPilot"};
	};
	class ZSN_DBAF_AV8: ZSN_BAF_AV8
	{
		faction = "ZSN_WEuroD_ColdWar";
		crew = "ZSN_EurosolWDPilot";
		typicalCargo[] = {"ZSN_EurosolWDPilot"};
		hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_brit_1_co.paa","cup\airvehicles\cup_airvehicles_av8b\data\texture\cup_av8b_brit_1_co.paa","#(argb,512,512,1)r2t(rendertarget0,1.0)"};
	};
	class Helicopter;
	class Helicopter_Base_F;
	class Helicopter_Base_H;
	class CUP_KA50_Base;
	class ZSN_CUP_VMF_Ka50: CUP_KA50_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 0;
		displayName = "V-80";
		crew = "ZSN_SoldierEPilot";
		typicalCargo[] = {"ZSN_SoldierEPilot"};
		faction = "ZSN_EMarines_ColdWar";
		hiddenSelectionsTextures[] = {"\cup\airvehicles\cup_airvehicles_ka50\data\ka50_blk_01_co.paa","\cup\airvehicles\cup_airvehicles_ka50\data\ka50_blk_02_co.paa","\cup\airvehicles\cup_airvehicles_ka50\data\ka50_blk_03_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_KA50\Data\preview\CUP_O_Ka50_RU.jpg";
	};
	class ZSN_CUP_MSV_Ka50: ZSN_CUP_VMF_Ka50
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		faction = "ZSN_EArmy_ColdWar";
		hiddenSelectionsTextures[] = {"\cup\airvehicles\cup_airvehicles_ka50\data\ka50_01_co.paa","\cup\airvehicles\cup_airvehicles_ka50\data\ka50_02_co.paa","\cup\airvehicles\cup_airvehicles_ka50\data\ka50_03_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_KA50\Data\preview\CUP_O_Ka50_SLA.jpg";
	};
	class CUP_AH1Z_Base;
	class CUP_B_AH1Z_NOAA_USMC;
	class ZSN_CUP_USMC_AH1: CUP_B_AH1Z_NOAA_USMC
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "AH-1";
		crew = "ZSN_SoldierWPilot";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class CUP_AH64D_Base;
	class CUP_B_AH64D_USA;
	class ZSN_CUP_ARMY_AH64: CUP_B_AH64D_USA
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "AH-64";
		crew = "ZSN_SoldierWPilot";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class SUD_AH1W: ZSN_CUP_ARMY_AH64
	{
		scope = 1;
	};
	class CUP_Mi8_base;
	class CUP_B_Mi17_CDF;
	class ZSN_CSLA_Mi17: CUP_B_Mi17_CDF
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_EEuro_ColdWar";
		crew = "ZSN_EurosolEPilot";
		typicalCargo[] = {"ZSN_EurosolEPilot"};
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
	class ZSN_DCSLA_Mi17: ZSN_CSLA_Mi17
	{
		faction = "ZSN_EEuroD_ColdWar";
		crew = "ZSN_EurosolEDPilot";
		typicalCargo[] = {"ZSN_EurosolEDPilot"};
		hiddenSelectionsTextures[] = {"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_body_IND_CO.paa","\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_IND_CO.paa","\a3\data_f\clear_empty.paa","\CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi8_decals_CA.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\preview\CUP_O_Mi17_TK.jpg";
	};
	class CUP_Mi8_MTV3_base;
	class ZSN_CUP_MSV_Mi8: CUP_Mi8_MTV3_base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 0;
		displayName = "Mi-8MTV3";
		faction = "ZSN_EArmy_ColdWar";
		crew = "ZSN_SoldierEPilot";
		typicalCargo[] = {"ZSN_SoldierEPilot"};
		hiddenSelectionsTextures[] = {"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_g_vsr_co.paa","CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa","a3\data_f\clear_empty.paa","CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\preview\CUP_O_Mi8_RU.jpg";
	};
	class SUD_MI8: ZSN_CUP_MSV_Mi8
	{
		scope = 1;
	};
	class ZSN_CUP_VMF_Mi8: ZSN_CSLA_Mi17
	{
		faction = "ZSN_EMarines_ColdWar";
		crew = "ZSN_SoldierEPilot";
		typicalCargo[] = {"ZSN_SoldierEPilot"};
		hiddenSelectionsTextures[] = {"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_cia1_1_co.paa","\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_cia1_2_co.paa","a3\data_f\clear_empty.paa","CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\preview\CUP_O_Mi8_SLA_1.jpg";
	};
	class ZSN_CUP_VDV_Mi8: ZSN_CUP_MSV_Mi8
	{
		faction = "ZSN_ERangers_ColdWar";
		hiddenSelectionsTextures[] = {"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_sla2_1_co.paa","\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_sla1_2_co.paa","a3\data_f\clear_empty.paa","CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\preview\CUP_O_Mi8_SLA_1.jpg";
	};
	class CUP_Mi8_medevac_base;
	class ZSN_CUP_MSV_Mi8_medevac: CUP_Mi8_medevac_base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 0;
		crew = "ZSN_SoldierEPilot";
		faction = "ZSN_EArmy_ColdWar";
		displayName = "Mi-8AMT (Medevac)";
		typicalCargo[] = {"ZSN_SoldierEPilot"};
		hiddenSelectionsTextures[] = {"CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_g_vsr_co.paa","CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa","a3\data_f\clear_empty.paa","CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\preview\CUP_O_Mi8_medevac_RU.jpg";
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
	class ZSN_CUP_VMF_Mi8_medevac: ZSN_CUP_MSV_Mi8_medevac
	{
		faction = "ZSN_EMarines_ColdWar";
		hiddenSelectionsTextures[] = {"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_cia1_1_co.paa","\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_sla1_2_co.paa","a3\data_f\clear_empty.paa","CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\preview\CUP_O_Mi8_SLA_1.jpg";
	};
	class ZSN_CUP_VDV_Mi8_medevac: ZSN_CUP_MSV_Mi8_medevac
	{
		faction = "ZSN_ERangers_ColdWar";
		hiddenSelectionsTextures[] = {"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_sla2_1_co.paa","\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_sla1_2_co.paa","a3\data_f\clear_empty.paa","CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\preview\CUP_O_Mi8_SLA_1.jpg";
	};
	class CUP_Mi8_VIV_base;
	class CUP_O_Mi8_VIV_SLA;
	class ZSN_CUP_VDV_Mi8_VIV: CUP_O_Mi8_VIV_SLA
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_ERangers_ColdWar";
		crew = "ZSN_SoldierEPilot";
		typicalCargo[] = {"ZSN_SoldierEPilot"};
		hiddenSelectionsTextures[] = {"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_sla2_1_co.paa","\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_sla1_2_co.paa","a3\data_f\clear_empty.paa","CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\preview\CUP_O_Mi8_SLA_1.jpg";
	};
	class CUP_UH1H_base;
	class CUP_I_UH1H_TK_GUE;
	class ZSN_CUP_GUER_UH1: CUP_I_UH1H_TK_GUE
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "UH-1";
		faction = "ZSN_GEuro_ColdWar";
		crew = "ZSN_EurosolGPilot";
		typicalCargo[] = {"ZSN_EurosolGPilot"};
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
	class ZSN_CUP_DGUER_UH1: ZSN_CUP_GUER_UH1
	{
		scopeCurator = 1;
		faction = "ZSN_GEuroD_ColdWar";
		crew = "ZSN_EurosolGDPilot";
		typicalCargo[] = {"ZSN_EurosolGDPilot"};
	};
	class ZSN_CUP_ARMY_UH1_MEV: CUP_I_UH1H_TK_GUE
	{
		scope = 1;
		scopeCurator = 2;
		side = 1;
		attendant = 1;
		displayName = "UH-1 MEV";
		crew = "ZSN_SoldierWPilot";
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
	class CUP_UH1H_slick_base;
	class CUP_I_UH1H_slick_TK_GUE;
	class ZSN_CUP_ARMY_UH1: CUP_I_UH1H_slick_TK_GUE
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		attendant = 1;
		displayName = "UH-1";
		crew = "ZSN_SoldierWPilot";
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
	class CUP_UH1H_gunship_base;
	class CUP_I_UH1H_gunship_TK_GUE;
	class ZSN_CUP_ARMY_UH1_Gunship: CUP_I_UH1H_gunship_TK_GUE
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		displayName = "UH-1 Gunship";
		crew = "ZSN_SoldierWPilot";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		faction = "ZSN_WArmy_ColdWar";
	};
	class CUP_Uh60_Base;
	class CUP_Uh60_FFV_Base;
	class CUP_Uh60L_FFV_Base;
	class ZSN_CUP_ARMY_UH60: CUP_UH60L_FFV_Base
	{
		scope = 1;
		side = 1;
		crew = "ZSN_SoldierWPilot";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		faction = "ZSN_WArmy_ColdWar";
		availableForSupportTypes[] = {"Drop","Transport"};
	};
	class ZSN_CUP_USR_UH60: ZSN_CUP_ARMY_UH60
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_WRangers_ColdWar";
		hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_co.paa","cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_co.paa","cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_B_UH60L_FFV_US.jpg";
	};
	class SUD_UH60: ZSN_CUP_USR_UH60
	{
		scope = 1;
	};
	class CUP_Uh60_Unarmed_Base;
	class CUP_Uh60_Unarmed_FFV_Base;
	class CUP_Uh60L_Unarmed_FFV_Base;
	class ZSN_CUP_ARMY_UH60_MEV: CUP_UH60L_Unarmed_FFV_Base
	{
		scope = 1;
		side = 1;
		attendant = 1;
		displayName = "UH-60L MEV";
		vehicleClass = "Support";
		faction = "ZSN_WArmy_ColdWar";
		crew = "ZSN_SoldierWPilot";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		availableForSupportTypes[] = {"Drop","Transport"};
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
	class ZSN_CUP_USR_UH60_MEV: ZSN_CUP_ARMY_UH60_MEV
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_WRangers_ColdWar";
		hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_uh60\data\uh60m_fuselage_mev_co.paa","cup\airvehicles\cup_airvehicles_uh60\data\uh60m_engine_mev_co.paa","cup\airvehicles\cup_airvehicles_uh60\data\default_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_UH60\Data\preview\CUP_B_UH60L_Unarmed_FFV_MEV_US.jpg";
	};
	class CUP_B_UH1Y_Base;
	class CUP_B_UH1Y_UNA_USMC;
	class ZSN_CUP_USMC_UH1_GUNSHIP: CUP_B_UH1Y_UNA_USMC
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "UH-1";
		crew = "ZSN_SoldierWPilot";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		faction = "ZSN_WMarines_ColdWar";
	};
	class CUP_B_UH1Y_UNA_F;
	class CUP_B_UH1Y_MEV_USMC;
	class ZSN_CUP_USMC_UH1_MEV: CUP_B_UH1Y_MEV_USMC
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		displayName = "UH-1 MEV";
		crew = "ZSN_SoldierWPilot";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		faction = "ZSN_WMarines_ColdWar";
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
	class CUP_Mi24_Base;
	class CUP_Mi24_D_Base;
	class CUP_B_Mi24_D_CDF;
	class ZSN_CSLA_Mi24: CUP_B_Mi24_D_CDF
	{
		displayName = "Mi-25";
		side = 0;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_EEuro_ColdWar";
		crew = "ZSN_EurosolEPilot";
		typicalCargo[] = {"ZSN_EurosolEPilot"};
	};
	class ZSN_DCSLA_Mi24: ZSN_CSLA_Mi24
	{
		displayName = "Mi-25";
		faction = "ZSN_EEuroD_ColdWar";
		crew = "ZSN_EurosolEDPilot";
		typicalCargo[] = {"ZSN_EurosolEDPilot"};
		hiddenSelectionsTextures[] = {"\cup\airvehicles\cup_airvehicles_mi24\data\mi35_001_ind_co.paa","\cup\airvehicles\cup_airvehicles_mi24\data\mi35_002_ind_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\preview\CUP_O_Mi24_D_TK.jpg";
	};
	class CUP_Mi24_P_Base;
	class ZSN_CUP_VDV_Mi24_P: CUP_Mi24_P_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 0;
		crew = "ZSN_SoldierEPilot";
		faction = "ZSN_EArmy_ColdWar";
		typicalCargo[] = {"ZSN_SoldierEPilot"};
		hiddenSelectionsTextures[] = {"\cup\airvehicles\cup_airvehicles_mi24\data\mi24p_001_co.paa","\cup\airvehicles\cup_airvehicles_mi24\data\mi24p_002_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\preview\CUP_O_Mi24_P_RU.jpg";
	};
	class CUP_Mi24_V_Base;
	class SUD_Mi24V: CUP_Mi24_V_Base
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		side = 0;
		crew = "ZSN_SoldierEPilot";
		faction = "ZSN_ERangers_ColdWar";
		typicalCargo[] = {"ZSN_SoldierEPilot"};
		hiddenSelectionsTextures[] = {"\cup\airvehicles\cup_airvehicles_mi24\data\textures\ru_dark_001_co.paa","\cup\airvehicles\cup_airvehicles_mi24\data\textures\ru_dark_002_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\preview\CUP_O_Mi24_V_RU.jpg";
	};
	class CUP_AW159_Unarmed_Base;
	class CUP_B_AW159_Cannon_GB;
	class ZSN_BAF_Lynx: CUP_B_AW159_Cannon_GB
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Lynx";
		crew = "ZSN_EurosolWPilot";
		faction = "ZSN_WEuro_ColdWar";
		typicalCargo[] = {"ZSN_EurosolWPilot"};
	};
	class ZSN_DBAF_Lynx: ZSN_BAF_Lynx
	{
		crew = "ZSN_EurosolWDPilot";
		faction = "ZSN_WEuroD_ColdWar";
		typicalCargo[] = {"ZSN_EurosolWDPilot"};
	};
	class CUP_B_AW159_Hellfire_GB;
	class ZSN_BAF_Lynx_TOW: CUP_B_AW159_Hellfire_GB
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Lynx (TOW)";
		crew = "ZSN_EurosolWPilot";
		faction = "ZSN_WEuro_ColdWar";
		typicalCargo[] = {"ZSN_EurosolWPilot"};
	};
	class ZSN_DBAF_Lynx_TOW: ZSN_BAF_Lynx_TOW
	{
		crew = "ZSN_EurosolWDPilot";
		faction = "ZSN_WEuroD_ColdWar";
		typicalCargo[] = {"ZSN_EurosolWDPilot"};
	};
	class Plane_Base_F;
	class Plane_Fighter_03_base_F;
	class I_Plane_Fighter_03_CAS_F;
	class I_Plane_Fighter_03_AA_F;
	class CUP_L39_base;
	class CUP_L39_CAP_Base;
	class CUP_B_L39_CAP_CZ;
	class ZSN_CSLA_L39: I_Plane_Fighter_03_AA_F
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		displayName = "L-39MS (CAP)";
		faction = "ZSN_EEuro_ColdWar";
		crew = "ZSN_EurosolEPilot";
		typicalCargo[] = {"ZSN_EurosolEPilot"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_vehicles\l-39_body_csla_co.paa","cup\airvehicles\cup_airvehicles_l39\data\textures\l-39_body_1_acr_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_L39\Data\preview\CUP_B_L39_Grey_CZ.jpg";
		weapons[] = {"Twin_Cannon_20mm","missiles_Zephyr","CMFlareLauncher"};
		magazines[] = {"300Rnd_20mm_shells","4Rnd_GAA_missiles","120Rnd_CMFlare_Chaff_Magazine"};
	};
	class ZSN_DCSLA_L39: ZSN_CSLA_L39
	{
		faction = "ZSN_EEuroD_ColdWar";
		crew = "ZSN_EurosolEDPilot";
		typicalCargo[] = {"ZSN_EurosolEDPilot"};
		hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_l39\data\l-39_body_co.paa","cup\airvehicles\cup_airvehicles_l39\data\l-39_body_1_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_L39\Data\preview\CUP_O_L39_Desert_TK.jpg";
	};
	class CUP_L39_RKT_Base;
	class CUP_B_L39_RKT_CZ;
	class ZSN_CSLA_L39_RKT: CUP_B_L39_RKT_CZ
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_EEuro_ColdWar";
		crew = "ZSN_EurosolEPilot";
		typicalCargo[] = {"ZSN_EurosolEPilot"};
		hiddenSelectionsTextures[] = {"\zsn_coldwar_vehicles\l-39_body_csla_co.paa","cup\airvehicles\cup_airvehicles_l39\data\textures\l-39_body_1_acr_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_L39\Data\preview\CUP_B_L39_Grey_CZ.jpg";
	};
	class ZSN_DCSLA_L39_RKT: ZSN_CSLA_L39_RKT
	{
		faction = "ZSN_EEuroD_ColdWar";
		crew = "ZSN_EurosolEDPilot";
		typicalCargo[] = {"ZSN_EurosolEDPilot"};
		hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_l39\data\l-39_body_co.paa","cup\airvehicles\cup_airvehicles_l39\data\l-39_body_1_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_L39\Data\preview\CUP_O_L39_Desert_TK.jpg";
	};
	class CUP_C130J_Base;
	class ZSN_CUP_USR_C130: CUP_C130J_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		crew = "ZSN_SoldierWPilot";
		faction = "ZSN_WArmy_ColdWar";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		hiddenSelectionsTextures[] = {"CUP\AirVehicles\CUP_AirVehicles_C130J\data\c130j_body_co.paa","CUP\AirVehicles\CUP_AirVehicles_C130J\data\c130j_wings_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_C130J\Data\preview\CUP_B_C130J_USMC.jpg";
	};
	class CUP_C130J_VIV_Base;
	class ZSN_CUP_USR_C130_Cargo: CUP_C130J_VIV_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		crew = "ZSN_SoldierWPilot";
		faction = "ZSN_WArmy_ColdWar";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		hiddenSelectionsTextures[] = {"CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_body_usmc_co.paa","CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_wings_usmc_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_C130J\Data\preview\CUP_B_C130J_Cargo_USMC.jpg";
	};
	class CUP_B_C130J_GB;
	class ZSN_BAF_C130: CUP_B_C130J_GB
	{
		displayName = "C-130";
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_WEuro_ColdWar";
		crew = "ZSN_EurosolWPilot";
		typicalCargo[] = {"ZSN_EurosolWPilot"};
	};
	class ZSN_DBAF_C130: ZSN_BAF_C130
	{
		displayName = "C-130";
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_WEuroD_ColdWar";
		crew = "ZSN_EurosolWDPilot";
		typicalCargo[] = {"ZSN_EurosolWDPilot"};
		hiddenSelectionsTextures[] = {"CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_body_raf2_co.paa","CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_wings_raf2_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_C130J\Data\preview\CUP_B_C130J_Cargo_GB.jpg";
	};
	class CUP_AN2_Base;
	class CUP_O_AN2_TK;
	class ZSN_CUP_VDV_AN2: CUP_O_AN2_TK
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crew = "ZSN_SoldierEPilot";
		faction = "ZSN_ERangers_ColdWar";
		typicalCargo[] = {"ZSN_SoldierEPilot"};
	};
	class CUP_MI6A_Base;
	class ZSN_CUP_MSV_MI6A: CUP_MI6A_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 0;
		crew = "ZSN_SoldierEPilot";
		faction = "ZSN_EArmy_ColdWar";
		typicalCargo[] = {"ZSN_SoldierEPilot"};
		hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_mi6\Textures\UKR2\mi6fus1_co.paa","ZSN_Coldwar_Vehicles\mi6fus2_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\UKR2\mi6fus3_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\UKR2\mi6wings_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\mi6cargo1_co.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi6\Data\preview\CUP_B_MI6A_CDF.jpg";
	};
	class ZSN_CUP_VMF_MI6A: ZSN_CUP_MSV_MI6A
	{
		faction = "ZSN_EMarines_ColdWar";
		hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6fus1_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6fus2_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6fus3_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6wings_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6cargo1_co.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi6\Data\preview\CUP_O_MI6A_RU.jpg";
	};
	class CUP_MI6T_Base;
	class ZSN_CUP_MSV_MI6T: CUP_MI6T_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 0;
		crew = "ZSN_SoldierEPilot";
		faction = "ZSN_EArmy_ColdWar";
		typicalCargo[] = {"ZSN_SoldierEPilot"};
		hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_mi6\Textures\UKR2\mi6fus1_co.paa","ZSN_Coldwar_Vehicles\mi6fus2_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\UKR2\mi6fus3_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\UKR2\mi6wings_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\mi6cargo1_co.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi6\Data\preview\CUP_B_MI6A_CDF.jpg";
	};
	class ZSN_CUP_VMF_MI6T: ZSN_CUP_MSV_MI6T
	{
		faction = "ZSN_EMarines_ColdWar";
		hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6fus1_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6fus2_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6fus3_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6wings_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\RUS\mi6cargo1_co.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi6\Data\preview\CUP_O_MI6A_RU.jpg";
	};
	class CUP_B_MI6T_CDF;
	class ZSN_CSLA_Mi6: CUP_B_MI6T_CDF
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		faction = "ZSN_EEuro_ColdWar";
		crew = "ZSN_EurosolEPilot";
		typicalCargo[] = {"ZSN_EurosolEPilot"};
	};
	class ZSN_DCSLA_Mi6: ZSN_CSLA_Mi6
	{
		faction = "ZSN_EEuroD_ColdWar";
		crew = "ZSN_EurosolEDPilot";
		typicalCargo[] = {"ZSN_EurosolEDPilot"};
		hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_mi6\Textures\TAK\mi6fus1_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\TAK\mi6fus2_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\TAK\mi6fus3_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\TAK\mi6wings_co.paa","cup\airvehicles\cup_airvehicles_mi6\Textures\mi6cargo1_co.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa","cup\airvehicles\cup_airvehicles_mi6\Data\tex\szklo_ca.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Mi6\Data\preview\CUP_O_MI6A_TKA.jpg";
	};
	class CUP_SA330_Base;
	class CUP_B_SA330_Puma_HC1_BAF;
	class ZSN_BAF_SA330: CUP_B_SA330_Puma_HC1_BAF
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		crew = "ZSN_EurosolWPilot";
		faction = "ZSN_WEuro_ColdWar";
		typicalCargo[] = {"ZSN_EurosolWPilot"};
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
	class ZSN_DBAF_SA330: ZSN_BAF_SA330
	{
		crew = "ZSN_EurosolWDPilot";
		faction = "ZSN_WEuroD_ColdWar";
		typicalCargo[] = {"ZSN_EurosolWDPilot"};
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
	};
	class StaticCannon: StaticWeapon
	{
		class ViewOptics;
	};
	class CUP_D30_base: StaticCannon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				elevationMode = 3;
				turretInfoType = "RscWeaponRangeArtilleryAuto";
				class ViewOptics: ViewOptics{};
			};
		};
	};
	class ZSN_CUP_MSV_D30: CUP_D30_base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 0;
		crew = "ZSN_SoldierEB";
		faction = "ZSN_EArmy_ColdWar";
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_D30_CDF.jpg";
	};
	class ZSN_CUP_DMSV_D30: ZSN_CUP_MSV_D30
	{
		crew = "ZSN_SoldierEDB";
		faction = "ZSN_EArmyD_ColdWar";
	};
	class ZSN_CUP_VMF_D30: CUP_D30_base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 0;
		crew = "ZSN_MarineEB";
		faction = "ZSN_EMarines_ColdWar";
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_D30_CDF.jpg";
	};
	class ZSN_CUP_DVMF_D30: ZSN_CUP_VMF_D30
	{
		crew = "ZSN_MarineEDB";
		faction = "ZSN_EMarinesD_ColdWar";
	};
	class CUP_CH47F_base;
	class ZSN_CUP_ARMY_CH47F: CUP_CH47F_base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ZSN_WRangers_ColdWar";
		side = 1;
		crew = "ZSN_SoldierWPilot";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_co.paa","cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_co.paa","cup\airvehicles\cup_airvehicles_ch47\data\ch47f_nalepky_ca.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_CH47\Data\preview\CUP_B_CH47F_USA.jpg";
	};
	class CUP_CH47F_VIV_Base;
	class ZSN_CUP_ARMY_CH47F_VIV: CUP_CH47F_VIV_base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		crew = "ZSN_SoldierWPilot";
		faction = "ZSN_WRangers_ColdWar";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_co.paa","cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_co.paa","cup\airvehicles\cup_airvehicles_ch47\data\ch47f_nalepky_ca.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_CH47\Data\preview\CUP_B_CH47F_USA.jpg";
	};
	class CUP_M119_base;
	class CUP_B_M119_USMC;
	class ZSN_CUP_USMC_M119: CUP_B_M119_USMC
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "ZSN_WMarines_ColdWar";
		crew = "ZSN_MarineWB";
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_M119_USMC.jpg";
	};
	class ZSN_CUP_DUSMC_M119: ZSN_CUP_USMC_M119
	{
		faction = "ZSN_WMarinesD_ColdWar";
		crew = "ZSN_MarineWDB";
	};
	class ZSN_CUP_ARMY_M119: CUP_B_M119_USMC
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "ZSN_WArmy_ColdWar";
		crew = "ZSN_SoldierWB";
		editorPreview = "CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\CUP_B_M119_USMC.jpg";
	};
	class ZSN_CUP_DArmy_M119: ZSN_CUP_ARMY_M119
	{
		faction = "ZSN_WArmyD_ColdWar";
		crew = "ZSN_SoldierWDB";
	};
	class CUP_CH53E_Base;
	class ZSN_CUP_USMC_CH53E: CUP_CH53E_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "ZSN_WMarines_ColdWar";
		crew = "ZSN_SoldierWPilot";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		hiddenSelectionsTextures[] = {"CUP\AirVehicles\CUP_AirVehicles_CH53E\data\ch53_1_co.paa","CUP\AirVehicles\CUP_AirVehicles_CH53E\data\ch53_2_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_CH53E\Data\preview\CUP_B_CH53E_USMC.jpg";
	};
	class CUP_CH53E_VIV_Base;
	class ZSN_CUP_USMC_CH53E_VIV: CUP_CH53E_VIV_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		crew = "ZSN_SoldierWPilot";
		faction = "ZSN_WMarines_ColdWar";
		typicalCargo[] = {"ZSN_SoldierWPilot"};
		hiddenSelectionsTextures[] = {"CUP\AirVehicles\CUP_AirVehicles_CH53E\data\ch53_1_co.paa","CUP\AirVehicles\CUP_AirVehicles_CH53E\data\ch53_2_co.paa"};
		editorPreview = "CUP\AirVehicles\CUP_AirVehicles_CH53E\Data\preview\CUP_B_CH53E_USMC.jpg";
	};
};
class Extended_Init_EventHandlers 
{
	class ZSN_CUP_SWE_501
	{
	   	class ZSN_SWE_BMP
           	{
               		init = "(_this select 0) removeweapon 'CUP_Vmlauncher_AT5_single_veh'";
           	};
	};
};
class CfgGroups
{
	class Indep
	{
		class ZSN_GEuro_ColdWar
		{
			name = "Cold War Guerilla";
			class Armored
			{
				name = "Armored";
				class ZSN_GEuro_Tankplatoon
				{
					name = "T-34 Platoon";
					faction = "ZSN_GEuro_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_CUP_GUER_T34";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_CUP_GUER_T34";
						rank = "lieutenant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_CUP_GUER_T34";
						rank = "lieutenant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_CUP_GUER_T34";
						rank = "lieutenant";
						position[] = {40,0,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class ZSN_GEuro_V3SInfantry
				{
					name = "Resistance Cell (Praga)";
					faction = "ZSN_GEuro_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_EurosolGLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_EurosolGLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_EurosolGLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_EurosolGSniper";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_EurosolGLAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "ZSN_EurosolGMG";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "ZSN_EurosolGLeader";
						rank = "CORPORAL";
						position[] = {3,-2,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "ZSN_EurosolGLeader";
						rank = "CORPORAL";
						position[] = {-3,-2,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "ZSN_EurosolGLAW";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "ZSN_EurosolGSniper";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit10
					{
						side = 2;
						vehicle = "ZSN_EurosolGLAWAss";
						rank = "Private";
						position[] = {7,-2,0};
					};
					class Unit11
					{
						side = 2;
						vehicle = "ZSN_EurosolGMG";
						rank = "Private";
						position[] = {9,-2,0};
					};
					class Unit12
					{
						side = 2;
						vehicle = "ZSN_CUP_GUER_V3S";
						rank = "Private";
						position[] = {0,5,0};
					};
				};
				class ZSN_GEuro_LRInfantry
				{
					name = "Resistance Cell (Land Rover)";
					faction = "ZSN_GEuro_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_EurosolGLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_EurosolGLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_EurosolGLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_EurosolGSniper";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_EurosolGLAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "ZSN_EurosolGMG";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "ZSN_CUP_GUER_LR";
						rank = "Private";
						position[] = {0,5,0};
					};
				};
				class ZSN_GEuro_DatsunInfantry
				{
					name = "Resistance Cell (Datsun)";
					faction = "ZSN_GEuro_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_EurosolGLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_EurosolGLAW";
						rank = "Private";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_EurosolGLAWAss";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_EurosolGMG";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_CUP_GUER_Datsun";
						rank = "Private";
						position[] = {0,5,0};
					};
				};
				class ZSN_GEuro_MotorVehicles
				{
					name = "Resistance Cell (Technical)";
					faction = "ZSN_GEuro_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_CUP_GUER_LR_SPG9";
						rank = "CORPORAL";
						position[] = {4,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_CUP_GUER_LR_SPG9";
						rank = "CORPORAL";
						position[] = {-4,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_CUP_GUER_Datsun_PK";
						rank = "Private";
						position[] = {8,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_CUP_GUER_Datsun_PK";
						rank = "Private";
						position[] = {-8,0,0};
					};
				};
				class ZSN_GEuro_AAVehicles
				{
					name = "Resistance Cell (ZSU)";
					faction = "ZSN_GEuro_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_EurosolGLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_EurosolGLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_EurosolGLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_EurosolGSniper";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_EurosolGLAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "ZSN_EurosolGMG";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "ZSN_CUP_GUER_Ural_ZU23";
						rank = "Private";
						position[] = {-6,-6,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "ZSN_CUP_GUER_Ural_ZU23";
						rank = "Private";
						position[] = {6,-6,0};
					};
				};
			};
			class Mechanised
			{
				name = "Mechanised Infantry";
				class ZSN_GEuro_MechInfantry
				{
					name = "Resistance Cell (T-34)";
					faction = "ZSN_GEuro_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_EurosolGLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_EurosolGLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_EurosolGLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_EurosolGSniper";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_EurosolGLAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "ZSN_EurosolGMG";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "ZSN_EurosolGSniper";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "ZSN_EurosolGLeader";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "ZSN_CUP_GUER_T34";
						rank = "Private";
						position[] = {0,5,0};
					};
				};
			};
		};
		class ZSN_GEuroD_ColdWar
		{
			name = "Cold War Guerilla (Desert)";
			class Armored
			{
				name = "Armored";
				class ZSN_GEuroD_Tankplatoon
				{
					name = "T-34 Platoon";
					faction = "ZSN_GEuroD_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_CUP_DGUER_T34";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_CUP_DGUER_T34";
						rank = "lieutenant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_CUP_DGUER_T34";
						rank = "lieutenant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_CUP_DGUER_T34";
						rank = "lieutenant";
						position[] = {40,0,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class ZSN_GEuroD_V3SInfantry
				{
					name = "Resistance Cell (Praga)";
					faction = "ZSN_GEuroD_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_EurosolGDSniper";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "ZSN_EurosolGDMG";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLeader";
						rank = "CORPORAL";
						position[] = {3,-2,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLeader";
						rank = "CORPORAL";
						position[] = {-3,-2,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLAW";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "ZSN_EurosolGDSniper";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit10
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLAWAss";
						rank = "Private";
						position[] = {7,-2,0};
					};
					class Unit11
					{
						side = 2;
						vehicle = "ZSN_EurosolGDMG";
						rank = "Private";
						position[] = {9,-2,0};
					};
					class Unit12
					{
						side = 2;
						vehicle = "ZSN_CUP_DGUER_V3S";
						rank = "Private";
						position[] = {0,5,0};
					};
				};
				class ZSN_GEuroD_LRInfantry
				{
					name = "Resistance Cell (Land Rover)";
					faction = "ZSN_GEuroD_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_EurosolGDSniper";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "ZSN_EurosolGDMG";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "ZSN_CUP_DGUER_LR";
						rank = "Private";
						position[] = {0,5,0};
					};
				};
				class ZSN_GEuroD_DatsunInfantry
				{
					name = "Resistance Cell (Datsun)";
					faction = "ZSN_GEuroD_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLAW";
						rank = "Private";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLAWAss";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_EurosolGDMG";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_CUP_DGUER_Datsun";
						rank = "Private";
						position[] = {0,5,0};
					};
				};
				class ZSN_GEuroD_MotorVehicles
				{
					name = "Resistance Cell (Technical)";
					faction = "ZSN_GEuroD_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_CUP_DGUER_LR_SPG9";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_CUP_DGUER_LR_SPG9";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_CUP_DGUER_Datsun_PK";
						rank = "Private";
						position[] = {6,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_CUP_DGUER_Datsun_PK";
						rank = "Private";
						position[] = {-6,0,0};
					};
				};
				class ZSN_GEuroD_AAVehicles
				{
					name = "Resistance Cell (ZSU)";
					faction = "ZSN_GEuroD_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_EurosolGDSniper";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "ZSN_EurosolGDMG";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "ZSN_CUP_DGUER_Ural_ZU23";
						rank = "Private";
						position[] = {-6,-6,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "ZSN_CUP_DGUER_Ural_ZU23";
						rank = "Private";
						position[] = {6,-6,0};
					};
				};
			};
			class Mechanised
			{
				name = "Mechanised Infantry";
				class ZSN_GEuroD_MechInfantry
				{
					name = "Resistance Cell (T-34)";
					faction = "ZSN_GEuroD_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLAW";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_EurosolGDSniper";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLAWAss";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "ZSN_EurosolGDMG";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "ZSN_EurosolGDSniper";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "ZSN_EurosolGDLeader";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "ZSN_CUP_DGUER_T34";
						rank = "Private";
						position[] = {0,5,0};
					};
				};
			};
		};
	};
	class West
	{
		class ZSN_WArmy_ColdWar
		{
			name = "Cold War U.S. Army";
			class Armored
			{
				name = "Armored";
				class ZSN_WArmy_M1Platoon
				{
					name = "Abrams Platoon";
					faction = "ZSN_WArmy_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_CUP_ARMY_M1A1";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_ARMY_M1A1";
						rank = "lieutenant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_CUP_ARMY_M1A1";
						rank = "lieutenant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_CUP_ARMY_M1A1";
						rank = "lieutenant";
						position[] = {40,0,0};
					};
				};
			};
			class Mechanised
			{
				name = "Mechanised Infantry";
				class ZSN_WArmy_MotorizedInfantry
				{
					name = "Motorized Infantry Squad";
					faction = "ZSN_WArmy_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_SoldierWNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_SoldierWLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWAR";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_Army_Truck_transport";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};
				};
				class ZSN_WArmy_M113Infantry
				{
					name = "M113 Infantry Squad";
					faction = "ZSN_WArmy_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_SoldierWNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_SoldierWLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWAR";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_CUP_ARMY_M113";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};
				};
				class ZSN_WArmy_M2Infantry
				{
					name = "Bradley Infantry Squad";
					faction = "ZSN_WArmy_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_SoldierWNCO";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_ARMY_M2Bradley";
						rank = "Sergeant";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_SoldierWG";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_SoldierWMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
			};
		};
		class ZSN_WGer_ColdWar
		{
			name = "Cold War FRG";
			class Armored
			{
				name = "Armored";
				class ZSN_WGer_Tankplatoon
				{
					name = "Leopard Platoon";
					faction = "ZSN_WGer_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_Leopard2";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_Leopard2";
						rank = "lieutenant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_Leopard2";
						rank = "lieutenant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_Leopard2";
						rank = "lieutenant";
						position[] = {40,0,0};
					};
				};
			};
		};
		class ZSN_WEuro_ColdWar
		{
			name = "Cold War NATO";
			class Armored
			{
				name = "Armored";
				class ZSN_WEuro_Tankplatoon
				{
					name = "Challenger Platoon";
					faction = "ZSN_WEuro_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_CUP_BAF_Challenger2";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_BAF_Challenger2";
						rank = "lieutenant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_CUP_BAF_Challenger2";
						rank = "lieutenant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_CUP_BAF_Challenger2";
						rank = "lieutenant";
						position[] = {40,0,0};
					};
				};
			};
			class Mechanised
			{
				name = "Mechanised Infantry";
				class ZSN_WEuro_MCVInfantry
				{
					name = "Warrior Infantry Section";
					faction = "ZSN_WEuro_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_EurosolWLeader";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_BAF_MCV80";
						rank = "Sergeant";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_EurosolWMG";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_EurosolWLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_EurosolWLAWAss";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_EurosolWMGAss";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_EurosolWMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class ZSN_WEuro_MotInfantry
				{
					name = "Motorized Infantry Section";
					faction = "ZSN_WEuro_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_EurosolWLeader";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_BAF_LR";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_EurosolWMG";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_EurosolWLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_EurosolWLAWAss";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_EurosolWMGAss";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_EurosolWMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
				class ZSN_WEuro_MotorVehicles
				{
					name = "Land Rover Section";
					faction = "ZSN_WEuro_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_CUP_BAF_LR_MG";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_CUP_BAF_LR_MG";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
				};
			};
		};
		class ZSN_WEuroD_ColdWar
		{
			name = "Cold War NATO (Desert)";
			class Armored
			{
				name = "Armored";
				class ZSN_WEuroD_Tankplatoon
				{
					name = "Challenger Platoon";
					faction = "ZSN_WEuroD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_CUP_DBAF_Challenger2";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_DBAF_Challenger2";
						rank = "lieutenant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_CUP_DBAF_Challenger2";
						rank = "lieutenant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_CUP_DBAF_Challenger2";
						rank = "lieutenant";
						position[] = {40,0,0};
					};
				};
			};
			class Mechanised
			{
				name = "Mechanised Infantry";
				class ZSN_WEuroD_MCVInfantry
				{
					name = "Warrior Infantry Section";
					faction = "ZSN_WEuroD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_EurosolWDLeader";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_DBAF_MCV80";
						rank = "Sergeant";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_EurosolWDMG";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_EurosolWDLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_EurosolWDLAWAss";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_EurosolWDMGAss";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_EurosolWDMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class ZSN_WEuroD_MotInfantry
				{
					name = "Motorized Infantry Section";
					faction = "ZSN_WEuroD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_EurosolWDLeader";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_DBAF_LR";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_EurosolWDMG";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_EurosolWDLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_EurosolWDLAWAss";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_EurosolWDMGAss";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_EurosolWDMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
				class ZSN_WEuroD_MotorVehicles
				{
					name = "Land Rover Section";
					faction = "ZSN_WEuroD_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_CUP_DBAF_LR_MG";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_CUP_DBAF_LR_MG";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
				};
			};
		};
		class ZSN_WMarines_ColdWar
		{
			name = "Cold War U.S. Marines";
			class Armored
			{
				name = "Armored";
				class ZSN_Wmarines_M60Platoon
				{
					name = "M60 Platoon";
					faction = "ZSN_WMarines_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_CUP_USMC_M60A3";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_USMC_M60A3";
						rank = "lieutenant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_CUP_USMC_M60A3";
						rank = "lieutenant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_CUP_USMC_M60A3";
						rank = "lieutenant";
						position[] = {40,0,0};
					};
				};
			};
			class Mechanised
			{
				name = "Mechanised Infantry";
				class ZSN_WMarine_MotorizedInfantry
				{
					name = "Motorized Infantry Squad";
					faction = "ZSN_WMarines_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_MarineWNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_MarineWLeader";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_MarineWLeader";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_MarineWLeader";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_MarineWMG";
						rank = "Private";
						position[] = {0,-2,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_MarineWAR";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_MarineWAR";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_MarineWLAW";
						rank = "Private";
						position[] = {5,-4,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_MarineWLAW";
						rank = "Private";
						position[] = {-5,-4,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_MarineWMGAss";
						rank = "Private";
						position[] = {0,-4,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "ZSN_MarineWLAW";
						rank = "Private";
						position[] = {5,-6,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "ZSN_MarineWLAW";
						rank = "Private";
						position[] = {-5,-6,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "ZSN_MarineWMGAss";
						rank = "Private";
						position[] = {0,-6,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "ZSN_USMC_Truck_transport";
						rank = "CORPORAL";
						position[] = {0,15,0};
					};
				};
				class ZSN_WMarine_AAVInfantry
				{
					name = "AAV Infantry Squad";
					faction = "ZSN_WMarines_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_MarineWNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_MarineWLeader";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_MarineWLeader";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_MarineWLeader";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_MarineWMG";
						rank = "Private";
						position[] = {0,-2,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_MarineWAR";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_MarineWAR";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_MarineWLAW";
						rank = "Private";
						position[] = {5,-4,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_MarineWLAW";
						rank = "Private";
						position[] = {-5,-4,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_MarineWMGAss";
						rank = "Private";
						position[] = {0,-4,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "ZSN_MarineWLAW";
						rank = "Private";
						position[] = {5,-6,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "ZSN_MarineWLAW";
						rank = "Private";
						position[] = {-5,-6,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "ZSN_MarineWMGAss";
						rank = "Private";
						position[] = {0,-6,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "ZSN_CUP_USMC_AAV";
						rank = "CORPORAL";
						position[] = {0,15,0};
					};
				};
				class ZSN_WMarine_LAVInfantry
				{
					name = "LAV-25 Infantry Squad";
					faction = "ZSN_WMarines_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_MarineWNCO";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_USMC_LAV25";
						rank = "Sergeant";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_MarineWG";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_MarineWAR";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_MarineWLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_MarineWLAW";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_MarineWMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
			};
		};
		class ZSN_WArmyD_ColdWar
		{
			name = "Cold War U.S. Army (Desert)";
			class Armored
			{
				name = "Armored";
				class ZSN_WArmyD_M1Platoon
				{
					name = "Abrams Platoon";
					faction = "ZSN_WArmyD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_CUP_DARMY_M1A1";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_DARMY_M1A1";
						rank = "lieutenant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_CUP_DARMY_M1A1";
						rank = "lieutenant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_CUP_DARMY_M1A1";
						rank = "lieutenant";
						position[] = {40,0,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class ZSN_WArmyD_MotorizedInfantry
				{
					name = "Motorized Infantry Squad";
					faction = "ZSN_WArmyD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_SoldierWDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWDAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWDAR";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_DArmy_Truck_Covered";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};
				};
				class ZSN_WArmyD_M113Infantry
				{
					name = "M113 Infantry Squad";
					faction = "ZSN_WArmyD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_SoldierWDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLeader";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLeader";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWDAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWDAR";
						rank = "Private";
						position[] = {-5,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {-7,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {-9,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_CUP_DARMY_M113";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};
				};
				class ZSN_WArmyD_M2Infantry
				{
					name = "Bradley Infantry Squad";
					faction = "ZSN_WArmyD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_SoldierWDNCO";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_DARMY_M2Bradley";
						rank = "Sergeant";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_SoldierWDAR";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_SoldierWDLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_SoldierWDG";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_SoldierWDMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
			};
		};
		class ZSN_WMarinesD_ColdWar
		{
			name = "Cold War U.S. Marines (Desert)";
			class Armored
			{
				name = "Armored";
				class ZSN_WmarinesD_M60Platoon
				{
					name = "M60 Platoon";
					faction = "ZSN_WMarinesD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_CUP_DUSMC_M60A3";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_DUSMC_M60A3";
						rank = "lieutenant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_CUP_DUSMC_M60A3";
						rank = "lieutenant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_CUP_DUSMC_M60A3";
						rank = "lieutenant";
						position[] = {40,0,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class ZSN_WMarinesD_MotorizedInfantry
				{
					name = "Motorized Infantry Squad";
					faction = "ZSN_WMarinesD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_MarineWDNCO";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_MarineWDLeader";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_MarineWDLeader";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_MarineWDLeader";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_MarineWDMG";
						rank = "Private";
						position[] = {0,-2,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_MarineWDAR";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_MarineWDAR";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "ZSN_MarineWDLAW";
						rank = "Private";
						position[] = {5,-4,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "ZSN_MarineWDLAW";
						rank = "Private";
						position[] = {-5,-4,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "ZSN_MarineWDMGAss";
						rank = "Private";
						position[] = {0,-4,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "ZSN_MarineWDLAW";
						rank = "Private";
						position[] = {5,-6,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "ZSN_MarineWDLAW";
						rank = "Private";
						position[] = {-5,-6,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "ZSN_MarineWDMGAss";
						rank = "Private";
						position[] = {0,-6,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "ZSN_DUSMC_Truck_Covered";
						rank = "CORPORAL";
						position[] = {0,15,0};
					};
				};
				class ZSN_WMarineD_LAVInfantry
				{
					name = "LAV-25 Infantry Squad";
					faction = "ZSN_WMarinesD_ColdWar";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_MarineWDNCO";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_DUSMC_LAV25";
						rank = "Sergeant";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_MarineWDG";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_MarineWDAR";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_MarineWDLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_MarineWDLAW";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_MarineWDMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
			};
		};
	};
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
					name = "T72 Platoon";
					faction = "ZSN_EArmy_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_CUP_MSV_T72B";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_CUP_MSV_T72B";
						rank = "lieutenant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_CUP_MSV_T72B";
						rank = "lieutenant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_CUP_MSV_T72B";
						rank = "lieutenant";
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
					name = "MT-LB Infantry Squad";
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
						vehicle = "ZSN_CUP_MSV_MTLB_pk";
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
						vehicle = "ZSN_CUP_MSV_BMP2";
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
			class Armored
			{
				name = "Armored";
				class ZSN_EMarines_T55Platoon
				{
					name = "T55 Platoon";
					faction = "ZSN_EMarines_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_CUP_VMF_T55";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_CUP_VMF_T55";
						rank = "lieutenant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_CUP_VMF_T55";
						rank = "lieutenant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_CUP_VMF_T55";
						rank = "lieutenant";
						position[] = {40,0,0};
					};
				};
			};
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
						vehicle = "ZSN_MarineEAR";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_MarineEAR";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_MarineELAW";
						rank = "Private";
						position[] = {5,-4,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "ZSN_MarineELAW";
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
						vehicle = "ZSN_MarineEMGAss";
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
				class ZSN_EMarine_BTRInfantry
				{
					name = "BTR Infantry Squad";
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
						vehicle = "ZSN_MarineEAR";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_MarineEAR";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_MarineELAW";
						rank = "Private";
						position[] = {5,-4,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "ZSN_MarineELAW";
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
						vehicle = "ZSN_MarineEMGAss";
						rank = "Private";
						position[] = {0,-6,0};
					};
					class Unit13
					{
						side = 0;
						vehicle = "ZSN_CUP_MSV_BTR60";
						rank = "CORPORAL";
						position[] = {0,15,0};
					};
				};
				class ZSN_EMarine_BRDMInfantry
				{
					name = "BRDM Infantry Squad";
					faction = "ZSN_EMarines_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_MarineENCO";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_CUP_VMF_BRDM2";
						rank = "Sergeant";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_CUP_VMF_BRDM2";
						rank = "Sergeant";
						position[] = {-10,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_MarineEG";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_MarineEAR";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "ZSN_MarineELAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_MarineELAW";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_MarineEMedic";
						rank = "Private";
						position[] = {13,0,0};
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
						vehicle = "ZSN_CUP_DMSV_T72B";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_CUP_DMSV_T72B";
						rank = "lieutenant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_CUP_DMSV_T72B";
						rank = "lieutenant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_CUP_DMSV_T72B";
						rank = "lieutenant";
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
					name = "MT-LB Infantry Squad";
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
						vehicle = "ZSN_CUP_DMSV_MTLB_pk";
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
						vehicle = "ZSN_CUP_DMSV_BMP2";
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
			class Armored
			{
				name = "Armored";
				class ZSN_EMarinesD_T55Platoon
				{
					name = "T55 Platoon";
					faction = "ZSN_EMarinesD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_CUP_DVMF_T55";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_CUP_DVMF_T55";
						rank = "lieutenant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_CUP_DVMF_T55";
						rank = "lieutenant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_CUP_DVMF_T55";
						rank = "lieutenant";
						position[] = {40,0,0};
					};
				};
			};
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
						vehicle = "ZSN_MarineEDAR";
						rank = "Private";
						position[] = {5,-2,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_MarineEDAR";
						rank = "Private";
						position[] = {-5,-2,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_MarineEDLAW";
						rank = "Private";
						position[] = {5,-4,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "ZSN_MarineEDLAW";
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
						vehicle = "ZSN_MarineEDMGAss";
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
				class ZSN_EMarineD_BRDMInfantry
				{
					name = "BRDM Infantry Squad";
					faction = "ZSN_EMarinesD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_MarineEDNCO";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_CUP_DVMF_BRDM2";
						rank = "Sergeant";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_CUP_DVMF_BRDM2";
						rank = "Sergeant";
						position[] = {-10,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_MarineEDG";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_MarineEDAR";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "ZSN_MarineEDLAW";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_MarineEDLAW";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_MarineEDMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
			};
		};
		class ZSN_EEuro_ColdWar
		{
			name = "Cold War PACT";
			class Armored
			{
				name = "Armored";
				class ZSN_EEuro_Tankplatoon
				{
					name = "T-72 Platoon";
					faction = "ZSN_EEuro_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_CUP_CSLA_T72";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_CUP_CSLA_T72";
						rank = "lieutenant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_CUP_CSLA_T72";
						rank = "lieutenant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_CUP_CSLA_T72";
						rank = "lieutenant";
						position[] = {40,0,0};
					};
				};
			};
			class Mechanised
			{
				name = "Mechanised Infantry";
				class ZSN_EEuro_BMPInfantry
				{
					name = "BMP Infantry Section";
					faction = "ZSN_EEuro_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_EurosolELeader";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_CUP_CSLA_BMP1";
						rank = "Sergeant";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_EurosolEMG";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_EurosolELAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_EurosolELAWAss";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "ZSN_EurosolEMGAss";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_EurosolEMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class ZSN_EEuro_MotInfantry
				{
					name = "Motorized Infantry Section";
					faction = "ZSN_EEuro_ColdWar";
					side = 0;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_EurosolELeader";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_CSLA_BTR40";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_EurosolEMG";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_EurosolELAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_EurosolELAWAss";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_EurosolEMGAss";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_EurosolEMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
				class ZSN_EEuro_MotorVehicles
				{
					name = "BTR-40 Section";
					faction = "ZSN_EEuro_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_CUP_CSLA_BTR40_MG";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_CUP_CSLA_BTR40_MG";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
				};
			};
		};
		class ZSN_EEuroD_ColdWar
		{
			name = "Cold War PACT (Desert)";
			class Armored
			{
				name = "Armored";
				class ZSN_EEuroD_Tankplatoon
				{
					name = "T-72 Platoon";
					faction = "ZSN_EEuroD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_CUP_DCSLA_T72";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_CUP_DCSLA_T72";
						rank = "Lieutenant";
						position[] = {-20,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_CUP_DCSLA_T72";
						rank = "Lieutenant";
						position[] = {20,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_CUP_DCSLA_T72";
						rank = "Lieutenant";
						position[] = {40,0,0};
					};
				};
			};
			class Mechanised
			{
				name = "Mechanised Infantry";
				class ZSN_EEuroD_BMPInfantry
				{
					name = "BMP Infantry Section";
					faction = "ZSN_EEuroD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "ZSN_EurosolEDLeader";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "ZSN_CUP_DCSLA_BMP1";
						rank = "Sergeant";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "ZSN_EurosolEDMG";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "ZSN_EurosolEDLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "ZSN_EurosolEDLAWAss";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "ZSN_EurosolEDMGAss";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "ZSN_EurosolEDMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class ZSN_EEuroD_MotInfantry
				{
					name = "Motorized Infantry Section";
					faction = "ZSN_EEuroD_ColdWar";
					side = 0;
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_EurosolEDLeader";
						rank = "Sergeant";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_CUP_DCSLA_BTR40";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_EurosolEDMG";
						rank = "Private";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_EurosolEDLAW";
						rank = "Private";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_EurosolEDLAWAss";
						rank = "Private";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_EurosolEDMGAss";
						rank = "Private";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_EurosolEDMedic";
						rank = "Private";
						position[] = {13,0,0};
					};
				};
				class ZSN_EEuroD_MotorVehicles
				{
					name = "BTR-40 Section";
					faction = "ZSN_EEuroD_ColdWar";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_CUP_DCSLA_BTR40_MG";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_CUP_DCSLA_BTR40_MG";
						rank = "CORPORAL";
						position[] = {-3,0,0};
					};
				};
			};
		};
	};
};
//};
