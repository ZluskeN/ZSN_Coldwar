////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.66
//'now' is Sun Aug 12 13:56:54 2018 : 'file' last modified on Sun Aug 12 13:53:25 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class beppe_mod : config.bin{
class CfgPatches
{
	class BO_weapons
	{
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgMods
{
	class BlackOpsWeapons
	{
		dir = "BlackOpsWeapons";
		name = "BlackOpsWeapons";
		hidePicture = 0;
		hidename = 0;
		picture = "\beppe_mod\mod\logo.paa";
		action = "https://forums.bistudio.com/topic/188854-black-ops-weapons-80s-90s/";
	};
	author = "ZluskeN";
	timepacked = "1534082005";
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryItem_Base_F;
	class arifle_Mk20_plain_F;
	class arifle_Mk20_GL_F;
	class UGL_F;
	class aimpoint2000: ItemCore
	{
		scope = 2;
		dlc = "BlackOpsWeapons";
		displayName = "Aimpoint 2000";
		author = "Black Ops Weapons";
		picture = "\beppe_mod\aimpoint\ico\aim2000.paa";
		model = "\beppe_mod\aimpoint\aim2000.p3d";
		descriptionShort = "Aimpoint 2000";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 7;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class aimpoint2000_holo
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
				};
			};
		};
	};
	class aimpoint5000: aimpoint2000
	{
		scope = 2;
		dlc = "BlackOpsWeapons";
		displayName = "Aimpoint 5000";
		author = "Black Ops Weapons";
		picture = "\beppe_mod\aimpoint\ico\aim5000.paa";
		model = "\beppe_mod\aimpoint\aim5000.p3d";
		descriptionShort = "Aimpoint 5000";
	};
	class aimpoint3000: aimpoint2000
	{
		scope = 2;
		dlc = "BlackOpsWeapons";
		displayName = "Aimpoint 3000";
		author = "Black Ops Weapons";
		picture = "\beppe_mod\aimpoint\ico\aim5000.paa";
		model = "\beppe_mod\aimpoint\aim3000.p3d";
		descriptionShort = "Aimpoint 3000";
	};
	class InventoryFlashLightItem_Base_F;
	class surefire660: ItemCore
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		scope = 2;
		displayName = "Surefire 660";
		picture = "\beppe_mod\surefire\sf660ico.paa";
		model = "\beppe_mod\surefire\sf660.p3d";
		descriptionUse = "Use: Turn Flashlight ON/OFF";
		descriptionShort = "Weapon mounted light.";
		inertia = 0.1;
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 9;
			class FlashLight
			{
				color[] = {1800,1500,1200};
				ambient[] = {9,7.5,6};
				intensity = 25;
				size = 1;
				innerAngle = 20;
				outerAngle = 30;
				coneFadeCoef = 5;
				position = "flash_dir";
				direction = "flash";
				useFlare = 1;
				flareSize = 0.4;
				flareMaxDistance = "300.0f";
				dayLight = 1;
				scale[] = {0};
				class Attenuation
				{
					start = 0.5;
					constant = 0;
					linear = 0;
					quadratic = 1;
					hardLimitStart = 20;
					hardLimitEnd = 30;
				};
			};
		};
	};
	class surefire610: surefire660
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		scope = 2;
		displayName = "Surefire 610";
		model = "\beppe_mod\surefire\sf610.p3d";
		picture = "\beppe_mod\surefire\surefire610_ico.paa";
	};
	class surefire660mp5sd: surefire660
	{
		dlc = "BlackOpsWeapons";
		author = "Black Ops Weapons";
		displayName = "Surefire 660";
		picture = "\beppe_mod\surefire\sf660ico.paa";
		model = "\beppe_mod\surefire\sf660_mp5sd.p3d";
	};
	class mp5irlaser: ItemCore
	{
		dlc = "BlackOpsWeapons";
		scope = 2;
		author = "Black Ops Weapons";
		displayName = "MP5 IR Laser";
		picture = "\beppe_mod\mp5laser\ico.paa";
		model = "\beppe_mod\mp5laser\mp5laser.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 3;
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
			};
			class FLASHLIGHT{};
		};
	};
	class anpaq4c: mp5irlaser
	{
		scope = 2;
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "AN/PAQ 4C";
		picture = "\beppe_mod\anpaq4c\ico.paa";
		model = "\beppe_mod\anpaq4c\anpaq4c.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 11;
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
			};
			class FLASHLIGHT{};
		};
	};
	class muzzle_snds_H;
	class kacsil: muzzle_snds_H
	{
		scope = 2;
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "KAC Lightweight Suppressor";
		model = "beppe_mod\kacsil\kacsil.p3d";
	};
	class BOM16A1: arifle_Mk20_plain_F
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		reloadAction = "GestureReloadSPAR_01";
		baseWeapon = "BOM16A1";
		displayName = "M16A1";
		model = "\beppe_mod\M653\M16A1.p3d";
		weaponInfoType = "RscWeaponZeroing";
		picture = "\beppe_mod\m653\ico\m16a1.paa";
		handanim[] = {};
		discreteDistance[] = {25,250};
		discreteDistanceInitIndex = 0;
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin2[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin3[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin2[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin3[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin2[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin3[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin2[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin3[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class WeaponSlotsInfo
		{
			mass = 64;
			class MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"kacsil"};
			};
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint2000","aimpoint5000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot{};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class bom16a2: BOM16A1
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		baseWeapon = "BOM16A2";
		displayName = "M16A2";
		model = "\beppe_mod\M653\M16A2.p3d";
		picture = "\beppe_mod\m653\ico\m16a2.paa";
		modes[] = {"Single","Burst"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin2[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin3[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin2[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin3[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin2[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin3[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin2[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin3[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class WeaponSlotsInfo
		{
			mass = 75;
			class MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"kacsil"};
			};
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint2000","aimpoint5000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"surefire660","anpaq4c"};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class bom16a1cmag: BOM16A1
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M16A1 HBAR";
		picture = "\beppe_mod\m653\ico\m16a1hbar.paa";
		model = "\beppe_mod\M653\M16A1cmag.p3d";
		magazines[] = {"cmag_556x45","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green"};
		inertia = 0.9;
		dexterity = 1.2;
		hasBipod = 1;
		class WeaponSlotsInfo
		{
			mass = 74;
			class MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"kacsil"};
			};
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint2000","aimpoint5000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot{};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class bom653cmag: bom16a1cmag
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		picture = "\beppe_mod\m653\ico\m653cmag.paa";
		displayName = "M653 CMAG";
		baseWeapon = "bom653cmag";
		model = "\beppe_mod\M653\M653cmag.p3d";
		class WeaponSlotsInfo
		{
			mass = 66;
			class MuzzleSlot{};
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint2000","aimpoint5000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot{};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
		hasBipod = 0;
	};
	class bom723cmag: bom653cmag
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M723 CMAG";
		baseWeapon = "bom723cmag";
		model = "\beppe_mod\M653\M723cmag.p3d";
		class WeaponSlotsInfo
		{
			mass = 69;
			class MuzzleSlot{};
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint2000","aimpoint5000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot{};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class bom727cmag: bom653cmag
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M727 CMAG";
		baseWeapon = "bom727cmag";
		model = "\beppe_mod\M653\M727cmag.p3d";
		picture = "\beppe_mod\m653\ico\m727cmag.paa";
		class WeaponSlotsInfo
		{
			mass = 74;
			class MuzzleSlot{};
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint2000","aimpoint5000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot{};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class BOM653: arifle_Mk20_plain_F
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		reloadAction = "GestureReloadSPAR_01";
		displayName = "M653";
		baseWeapon = "BOM653";
		model = "\beppe_mod\M653\M653.p3d";
		weaponInfoType = "RscWeaponZeroing";
		picture = "\beppe_mod\m653\ico\m653.paa";
		handAnim[] = {};
		discreteDistance[] = {25,250};
		discreteDistanceInitIndex = 0;
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin2[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin3[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin2[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin3[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin2[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin3[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin2[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin3[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class WeaponSlotsInfo
		{
			mass = 56;
			class MuzzleSlot;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint2000","aimpoint5000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"surefire660","anpaq4c"};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class BOm653qxl: BOM653
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M653 QXL Light";
		baseWeapon = "BOm653qxl";
		model = "\beppe_mod\M653\M653qxl.p3d";
		handanim[] = {"OFP2_ManSkeleton","\beppe_mod\m653\data\maggrip.rtm"};
		class WeaponSlotsInfo
		{
			mass = 56;
			class MuzzleSlot;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint2000","aimpoint5000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"anpaq4c"};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
		class FlashLight
		{
			color[] = {1800,1500,1200};
			ambient[] = {9,7.5,6};
			intensity = 25;
			size = 1;
			innerAngle = 20;
			outerAngle = 30;
			coneFadeCoef = 5;
			position = "flash_dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = "300.0f";
			dayLight = 1;
			scale[] = {0};
			class Attenuation
			{
				start = 0.5;
				constant = 0;
				linear = 0;
				quadratic = 1;
				hardLimitStart = 20;
				hardLimitEnd = 30;
			};
		};
	};
	class BOM653M203: arifle_Mk20_plain_F
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M653M203";
		baseWeapon = "BOM653M203";
		model = "\beppe_mod\M653\M653M203.p3d";
		weaponInfoType = "RscWeaponZeroing";
		picture = "\beppe_mod\m653\ico\m653m203.paa";
		reloadAction = "GestureReloadSPAR_01";
		handanim[] = {"OFP2_ManSkeleton","\beppe_mod\m653\data\M16GL.rtm"};
		discreteDistance[] = {25,250};
		discreteDistanceInitIndex = 0;
		muzzles[] = {"this","BOM203"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin2[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin3[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin2[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin3[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin2[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin3[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin2[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin3[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class BOm203: UGL_F
		{
			displayName = "M203";
			descriptionShort = "M203";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			cameraDir = "OP_look";
			discreteDistance[] = {100,150,200,250};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3","OP_eye4"};
			discreteDistanceInitIndex = 1;
		};
		class WeaponSlotsInfo
		{
			mass = 86;
			class MuzzleSlot;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint2000","aimpoint5000"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"surefire660"};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class BOM723M203: BOM653M203
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M723M203";
		baseWeapon = "BOM723M203";
		model = "\beppe_mod\M653\M723M203.p3d";
		class WeaponSlotsInfo
		{
			mass = 89;
			class MuzzleSlot;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint2000","aimpoint5000"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"surefire660"};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class BOM653MK: arifle_Mk20_plain_F
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M653 MasterKey";
		baseWeapon = "BOM653MK";
		model = "\beppe_mod\M653\M653MK.p3d";
		weaponInfoType = "RscWeaponZeroing";
		picture = "\beppe_mod\m653\ico\m653mk.paa";
		reloadAction = "GestureReloadSPAR_01";
		handanim[] = {"OFP2_ManSkeleton","\beppe_mod\m653\data\M16GL.rtm"};
		discreteDistance[] = {25,250};
		discreteDistanceInitIndex = 0;
		muzzles[] = {"this","BOM203"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin2[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin3[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin2[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin3[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin2[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin3[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin2[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin3[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class BOm203: UGL_F
		{
			displayName = "MasterKey";
			descriptionShort = "MasterKey";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazines[] = {"rem870slug","rem870pellets"};
			cameraDir = "OP_look";
			discreteDistance[] = {25};
			discreteDistanceCameraPoint[] = {"OP_eye"};
			discreteDistanceInitIndex = 1;
			reloadMagazineSound[] = {"\beppe_mod\sound\rem870_reload",1,1,10};
			class Single: Mode_SemiAuto
			{
				class BaseSoundModeType
				{
					closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",1,1,10};
					closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",1,1.1,10};
					soundClosure[] = {"closure1",0.5,"closure2",0.5};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"\beppe_mod\sound\rem870",0.891251,1,400};
					begin2[] = {"\beppe_mod\sound\rem870",0.891251,1,400};
					begin3[] = {"\beppe_mod\sound\rem870",0.891251,1,400};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
				class SilencedSound: BaseSoundModeType
				{
					begin1[] = {"\beppe_mod\sound\rem870",0.891251,1,400};
					begin2[] = {"\beppe_mod\sound\rem870",0.891251,1,400};
					begin3[] = {"\beppe_mod\sound\rem870",0.891251,1,400};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
				sounds[] = {"StandardSound","SilencedSound"};
				reloadTime = 0.5;
				dispersion = 0.00116;
				recoil = "recoil_single_gm6";
				recoilProne = "recoil_single_prone_gm6";
				minRangeProbab = 0.3;
				midRange = 100;
				midRangeProbab = 0.7;
				maxRange = 150;
				maxRangeProbab = 0.05;
				aiRateOfFire = 2;
				aiRateOfFireDistance = 300;
				minRange = 50;
			};
		};
		class WeaponSlotsInfo
		{
			mass = 86;
			class MuzzleSlot;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint5000","aimpoint2000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"surefire660","anpaq4c"};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class BOm723MK: BOM653MK
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M723 MasterKey";
		baseWeapon = "BOM723MK";
		model = "\beppe_mod\M653\M723MK.p3d";
		picture = "\beppe_mod\m653\ico\m653mk.paa";
		class WeaponSlotsInfo
		{
			mass = 89;
			class MuzzleSlot;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint5000","aimpoint2000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"surefire660","anpaq4c"};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class bom727mk: BOm723MK
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M727 MasterKey";
		baseWeapon = "BOM727MK";
		model = "\beppe_mod\M653\M727MK.p3d";
		picture = "\beppe_mod\m653\ico\m727mk.paa";
	};
	class BOm723: BOM653
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M723";
		baseWeapon = "BOM723";
		model = "\beppe_mod\M653\M723.p3d";
		picture = "\beppe_mod\m653\ico\m653.paa";
		class WeaponSlotsInfo
		{
			mass = 59;
			class MuzzleSlot;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint5000","aimpoint2000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"surefire660","anpaq4c"};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class BOm733: BOm723
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M733";
		baseWeapon = "BOM733";
		model = "\beppe_mod\M653\M733.p3d";
		picture = "\beppe_mod\m653\ico\m733.paa";
		class WeaponSlotsInfo
		{
			mass = 58;
			class MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"kacsil"};
			};
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint5000","aimpoint2000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"surefire660","anpaq4c"};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class bom733a2: BOm733
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M733 A2 Upper";
		baseWeapon = "BOM723a2";
		model = "\beppe_mod\M653\M733a2.p3d";
		picture = "\beppe_mod\m653\ico\m733a2.paa";
	};
	class bom727: BOm723
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M727";
		baseWeapon = "BOM727";
		model = "\beppe_mod\M653\m727.p3d";
		picture = "\beppe_mod\m653\ico\m727.paa";
		class WeaponSlotsInfo
		{
			mass = 63;
			class MuzzleSlot;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint5000","aimpoint2000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"surefire660","anpaq4c"};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class bom727acog: bom727
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M727 Acog TA01";
		baseWeapon = "BOM727acog";
		model = "\beppe_mod\M653\m727acog.p3d";
		picture = "\beppe_mod\m653\ico\m727acog.paa";
		modeloptics = "\beppe_mod\acogta01\2Dscope_Acog_4x32.p3d";
		class OpticsModes
		{
			class ACOG
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomInit = 0.0623;
				memoryPointCamera = "eye1";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				cameraDir = "";
			};
			class Ironsigts: ACOG
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.5;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				discreteDistance[] = {300};
				discreteDistanceInitIndex = 0;
			};
		};
		class WeaponSlotsInfo
		{
			mass = 66;
			class MuzzleSlot;
			class CowsSlot{};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"surefire660","anpaq4c"};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class bom727m203: BOM723M203
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M727 M203";
		baseWeapon = "BOM727m203";
		model = "\beppe_mod\M653\m727m203.p3d";
		picture = "\beppe_mod\m653\ico\xm177e2m203.paa";
	};
	class BOxm177e2: BOm733
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "XM177E2";
		baseWeapon = "BOxm177e2";
		model = "\beppe_mod\M653\xm177e2.p3d";
		picture = "\beppe_mod\m653\ico\xm177e2.paa";
	};
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
	class BOxm177e2grip: BOm733
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "XM177E2 Grip";
		baseWeapon = "BOxm177e2grip";
		model = "\beppe_mod\M653\xm177e2grip.p3d";
		picture = "\beppe_mod\m653\ico\xm177e2.paa";
		handanim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"};
	};
	class BOxm177e2m203: BOM653M203
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "XM177E2 M203";
		baseWeapon = "BOxm177e2m203";
		model = "\beppe_mod\M653\xm177e2m203.p3d";
		picture = "\beppe_mod\m653\ico\xm177e2m203.paa";
	};
	class BOM16A1M203: BOM653M203
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M16A1M203";
		baseWeapon = "BOM16A1M203";
		model = "\beppe_mod\M653\m16a1m203.p3d";
		picture = "\beppe_mod\m653\ico\m16a1m203.paa";
		class WeaponSlotsInfo
		{
			mass = 94;
			class MuzzleSlot;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint5000","aimpoint2000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class bom16a2m203: BOM16A1M203
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M16A2M203";
		baseWeapon = "BOM16A2M203";
		model = "\beppe_mod\M653\m16a2m203.p3d";
		picture = "\beppe_mod\m653\ico\m16a2m203.paa";
		modes[] = {"Single","Burst"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin2[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin3[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin2[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin3[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_01",0.707946,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\closure_Mk20_02",0.707946,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin2[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				begin3[] = {"\beppe_mod\sound\car15_unsil.wss",0.8,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin2[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				begin3[] = {"\beppe_mod\sound\car15_sil.wss",0.4,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
		class WeaponSlotsInfo
		{
			mass = 105;
			class MuzzleSlot;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint5000","aimpoint2000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class BOm723camo: BOm723
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M723 CAMO";
		baseWeapon = "BOm723camo";
		model = "\beppe_mod\M653\M723_camo.p3d";
		picture = "\beppe_mod\m653\ico\m723.paa";
		class WeaponSlotsInfo
		{
			mass = 59;
			class MuzzleSlot;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint5000","aimpoint2000","CUP_optic_AN_PVS_4"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"surefire660","anpaq4c"};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class srifle_LRR_F;
	class BOrem870: srifle_LRR_F
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "Remington 870";
		baseWeapon = "BOrem870";
		model = "\beppe_mod\rem870\rem870.p3d";
		picture = "\beppe_mod\rem870\ico\rem870.paa";
		reloadAction = "GestureReloadEBR";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_mark\LongRangeRifles\DMR_06\data\Anim\dmr_06.rtm"};
		discreteDistance[] = {25,50,100};
		discreteDistanceInitIndex = 2;
		weaponInfoType = "RscWeaponZeroing";
		magazines[] = {"rem870slug","rem870pellets"};
		reloadMagazineSound[] = {"\beppe_mod\sound\rem870_reload",1,1,10};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",1,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",1,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\beppe_mod\sound\rem870",0.891251,1,400};
				begin2[] = {"\beppe_mod\sound\rem870",0.891251,1,400};
				begin3[] = {"\beppe_mod\sound\rem870",0.891251,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\beppe_mod\sound\rem870",0.891251,1,400};
				begin2[] = {"\beppe_mod\sound\rem870",0.891251,1,400};
				begin3[] = {"\beppe_mod\sound\rem870",0.891251,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			sounds[] = {"StandardSound","SilencedSound"};
			reloadTime = 1;
			dispersion = 0.00116;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
		};
		class WeaponSlotsInfo
		{
			mass = 60;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
	};
	class borem870long: BOrem870
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "Remington 870 Wood Stock";
		baseWeapon = "borem870long";
		model = "\beppe_mod\rem870\rem870long.p3d";
		picture = "\beppe_mod\rem870\ico\rem870long.paa";
		reloadAction = "GestureReloadEBR";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_mark\LongRangeRifles\DMR_06\data\Anim\dmr_06.rtm"};
		class WeaponSlotsInfo
		{
			mass = 70;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
	};
	class SMG_02_F;
	class BOMp5A1: SMG_02_F
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "MP5A1";
		baseWeapon = "BOMp5A1";
		model = "\beppe_mod\MP5A1\mp5a1.p3d";
		picture = "\beppe_mod\MP5A1\ico\MP5A1.paa";
		reloadAction = "GestureReloadSMG_05";
		modes[] = {"Single","FullAuto"};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_Reload",1,1,10};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Red_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Green_Mag","CUP_30Rnd_9x19_MP5"};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",1,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",1,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",1.58489,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"Rogue9_Shot_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\mp5sd\MP5_single1.wss",3,1,400};
				begin2[] = {"\beppe_mod\sound\mp5sd\MP5_single1.wss",3,1,400};
				begin3[] = {"\beppe_mod\sound\mp5sd\MP5_single1.wss",3,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",1.58489,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"Rogue9_silencerShot_SoundSet","Rogue9_silencerTail_SoundSet","Rogue9_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\mp5sd\MP5_SD_single1.wss",3,1,400};
				begin2[] = {"\beppe_mod\sound\mp5sd\MP5_SD_single2.wss",3,1,400};
				begin3[] = {"\beppe_mod\sound\mp5sd\MP5_SD_single3.wss",3,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			sounds[] = {"StandardSound","SilencedSound"};
			dispersion = 0.00116;
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			reloadTime = 0.052;
			minRange = 50;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",1,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",1,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",1.58489,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"Rogue9_Shot_SoundSet","Rogue9_Tail_SoundSet","Rogue9_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\mp5sd\MP5_single1.wss",3,1,400};
				begin2[] = {"\beppe_mod\sound\mp5sd\MP5_single1.wss",3,1,400};
				begin3[] = {"\beppe_mod\sound\mp5sd\MP5_single1.wss",3,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",1.58489,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"Rogue9_silencerShot_SoundSet","Rogue9_silencerTail_SoundSet","Rogue9_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\mp5sd\MP5_SD_single1.wss",3,1,400};
				begin2[] = {"\beppe_mod\sound\mp5sd\MP5_SD_single2.wss",3,1,400};
				begin3[] = {"\beppe_mod\sound\mp5sd\MP5_SD_single3.wss",3,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			sounds[] = {"StandardSound","SilencedSound"};
			dispersion = 0.00116;
			recoil = "recoil_auto_smg_02";
			recoilProne = "recoil_auto_prone_smg_02";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			aiRateOfFireDistance = 50;
			reloadTime = 0.052;
		};
		class WeaponSlotsInfo
		{
			mass = 46;
			class MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"kacsil"};
			};
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint5000","aimpoint2000"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"mp5irlaser"};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class BOcoltsmg: BOMp5A1
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "Colt SMG";
		baseWeapon = "BOcoltsmg";
		model = "\beppe_mod\m653\m635smg.p3d";
		picture = "\beppe_mod\m653\ico\coltsmg.paa";
		handAnim[] = {};
		reloadAction = "GestureReloadSMG_02";
		modes[] = {"Single","FullAuto"};
		class WeaponSlotsInfo
		{
			mass = 57;
			class MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"kacsil"};
			};
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint5000","aimpoint2000"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"anpaq4c"};
			};
			class UnderBarrelSlot{};
			allowedSlots[] = {901};
		};
	};
	class BOmp5SD3: SMG_02_F
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "MP5SD3";
		baseWeapon = "BOmp5SD3";
		model = "\beppe_mod\MP5A1\mp5sd3.p3d";
		picture = "\beppe_mod\MP5A1\ico\MP5SD3.paa";
		reloadAction = "GestureReloadSMG_05";
		modes[] = {"Single","FullAuto"};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_Reload",1,1,10};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",1,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",1,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",1.58489,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"Rogue9_silencerShot_SoundSet","Rogue9_silencerTail_SoundSet","Rogue9_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\mp5sd\MP5_SD_single1.wss",3,1,400};
				begin2[] = {"\beppe_mod\sound\mp5sd\MP5_SD_single2.wss",3,1,400};
				begin3[] = {"\beppe_mod\sound\mp5sd\MP5_SD_single3.wss",3,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",1.58489,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"Rogue9_silencerShot_SoundSet","Rogue9_silencerTail_SoundSet","Rogue9_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_01",0.891251,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_02",0.891251,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_03",0.891251,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			sounds[] = {"StandardSound","SilencedSound"};
			dispersion = 0.00116;
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			reloadTime = 0.052;
			minRange = 50;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",1,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",1,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",1.58489,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"Rogue9_silencerShot_SoundSet","Rogue9_silencerTail_SoundSet","Rogue9_silencerInteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\mp5sd\MP5_SD_single1.wss",3,1,400};
				begin2[] = {"\beppe_mod\sound\mp5sd\MP5_SD_single2.wss",3,1,400};
				begin3[] = {"\beppe_mod\sound\mp5sd\MP5_SD_single3.wss",3,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",1.58489,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[] = {"Rogue9_silencerShot_SoundSet","Rogue9_silencerTail_SoundSet","Rogue9_silencerInteriorTail_SoundSet"};
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_01",0.891251,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_02",0.891251,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_03",0.891251,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			sounds[] = {"StandardSound","SilencedSound"};
			dispersion = 0.00116;
			recoil = "recoil_auto_smg_02";
			recoilProne = "recoil_auto_prone_smg_02";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			aiRateOfFireDistance = 50;
			reloadTime = 0.052;
		};
		class WeaponSlotsInfo
		{
			mass = 46;
			class MuzzleSlot{};
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"aimpoint3000","aimpoint5000","aimpoint2000"};
			};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"surefire660mp5sd","mp5irlaser"};
			};
			class UnderBarrelSlot{};
		};
	};
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
	class srifle_EBR_F;
	class boM14: srifle_EBR_F
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M14 Old";
		baseWeapon = "boM14";
		model = "\beppe_mod\M14\m14.p3d";
		picture = "\beppe_mod\M14\m14.paa";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_mark\LongRangeRifles\DMR_06\data\Anim\dmr_06.rtm"};
		class WeaponSlotsInfo
		{
			mass = 90;
			class MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"kacsil"};
			};
			class CowsSlot
			{
				iconPosition[] = {0.5,0.3};
				iconScale = 0.2;
				compatibleItems[] = {"aimpoint3000","aimpoint5000","aimpoint2000","CUP_optic_LeupoldMk4","CUP_optic_Leupold_VX3","CUP_optic_LeupoldM3LR","CUP_optic_LeupoldMk4_10x40_LRT_Desert","CUP_optic_LeupoldMk4_10x40_LRT_Woodland","CUP_optic_LeupoldMk4_CQ_T","CUP_optic_LeupoldMk4_MRT_tan","CUP_optic_AN_PVS_4"};
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "Optics SLOT";
			};
			class PointerSlot{};
			class UnderBarrelSlot
			{
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"bipod_02_F_blk","CUP_bipod_Harris_1A2_L"};
			};
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
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	class PVS5A: NVGoggles
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "AN/PVS5-A";
		model = "\beppe_mod\proxies\nvg\pvs5a_on.p3d";
		picture = "beppe_mod\proxies\nvg\data\icona.paa";
		Uipicture = "beppe_mod\proxies\nvg\data\icona.paa";
		class ItemInfo: ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\beppe_mod\proxies\nvg\pvs5a_on.p3d";
			modelOff = "";
			mass = 4;
		};
	};
	class BOanvis: NVGoggles
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "ANVIS 6";
		model = "\beppe_mod\anvis\anvis_off.p3d";
		picture = "\beppe_mod\anvis\data\ico.paa";
		Uipicture = "\beppe_mod\anvis\data\ico.paa";
		class ItemInfo: ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\beppe_mod\anvis\anvis_on.p3d";
			modelOff = "\beppe_mod\anvis\anvis_off.p3d";
			mass = 4;
		};
	};
	class hgun_ACPC2_F;
	class BO1911: hgun_ACPC2_F
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "Colt 1911";
		baseWeapon = "BO1911";
		model = "\beppe_mod\colt1911\bo1911.p3d";
		picture = "\beppe_mod\colt1911\data\1911ico.paa";
		UIpicture = "\beppe_mod\colt1911\data\1911ico.paa";
		class WeaponSlotsInfo
		{
			mass = 24;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"surefire610"};
			};
			class UnderBarrelSlot{};
		};
	};
	class LMG_Zafir_F;
	class BOm60e3: LMG_Zafir_F
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M60E3";
		baseWeapon = "BOm60e3";
		model = "\beppe_mod\m60e3\m60e3.p3d";
		picture = "\beppe_mod\m60e3\data\ico.paa";
		handAnim[] = {"OFP2_ManSkeleton","\beppe_mod\m60e3\data\M60E4.rtm"};
		reloadAction = "GestureReloadM200";
		reloadMagazineTime = 6;
		hasBipod = 1;
		inertia = 0.8;
		initSpeed = -0.96639;
		dexterity = 0.51;
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		discreteDistance[] = {100,200,300,400,500,600,800};
		discreteDistanceInitIndex = 2;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 431.8;
		AGM_Overheating_allowSwapBarrel = 1;
		AGM_Overheating_JamChance[] = {0,0.0012,0.0059,0.029};
		AGM_Bipod = 1;
		magazines[] = {"100rnd_m60E3","100rnd_m60E3_tracer","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
		modes[] = {"FullAuto","close","short","medium"};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_01",0.562341,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_02",0.562341,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_interior",1.99526,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"Mk200_Shot_SoundSet","Mk200_Tail_SoundSet","Mk200_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\m60.wss",1.77828,1,1200};
				begin2[] = {"\beppe_mod\sound\m60.wss",1.77828,1,1200};
				begin3[] = {"\beppe_mod\sound\m60.wss",1.77828,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			reloadTime = 0.11;
			dispersion = 0.0008;
			recoil = "recoil_auto_mk200";
			recoilProne = "recoil_auto_prone_mk200";
			sounds[] = {"StandardSound"};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			showToPlayer = 1;
		};
		class close: FullAuto
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_01",0.562341,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_02",0.562341,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_interior",1.99526,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"Mk200_Shot_SoundSet","Mk200_Tail_SoundSet","Mk200_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\m60.wss",1.77828,1,1200};
				begin2[] = {"\beppe_mod\sound\m60.wss",1.77828,1,1200};
				begin3[] = {"\beppe_mod\sound\m60.wss",1.77828,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_01",0.562341,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_02",0.562341,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_interior",1.99526,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"Mk200_Shot_SoundSet","Mk200_Tail_SoundSet","Mk200_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\m60.wss",1.77828,1,1200};
				begin2[] = {"\beppe_mod\sound\m60.wss",1.77828,1,1200};
				begin3[] = {"\beppe_mod\sound\m60.wss",1.77828,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_01",0.562341,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_02",0.562341,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_interior",1.99526,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
				soundSetShot[] = {"Mk200_Shot_SoundSet","Mk200_Tail_SoundSet","Mk200_InteriorTail_SoundSet"};
				begin1[] = {"\beppe_mod\sound\m60.wss",1.77828,1,1200};
				begin2[] = {"\beppe_mod\sound\m60.wss",1.77828,1,1200};
				begin3[] = {"\beppe_mod\sound\m60.wss",1.77828,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class WeaponSlotsInfo
		{
			mass = 188;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
	};
	class BoM249e1: BOm60e3
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "M249E1 SAW";
		baseWeapon = "BOm249e1";
		model = "\beppe_mod\m249e1\m249e1.p3d";
		picture = "\beppe_mod\m249e1\data\m249e1.paa";
		handAnim[] = {"OFP2_ManSkeleton","\beppe_mod\m60e3\data\M60E4.rtm"};
		reloadAction = "GestureReloadM200";
		reloadMagazineTime = 6;
		deployedPivot = "bipod";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",0.707946,1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",0.707946,1,20};
		magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Tracer_F","200Rnd_556x45_Box_Tracer_Red_F","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_200Rnd_TE1_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Green_Tracer_556x45_M249","CUP_100Rnd_TE4_Red_Tracer_556x45_M249","CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1","CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1","CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1","CUP_30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green"};
		htMin = 8;
		htMax = 920;
		inertia = 0.7;
		dexterity = 1.3;
		initSpeed = 915;
		recoil = "recoil_lim";
		maxZeroing = 1000;
		cursor = "mg";
		magazineReloadSwitchPhase = 0.4;
		modes[] = {"FullAutoSlow","close","short","medium","far_optic1","far_optic2"};
		class FullAutoSlow: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SyndikatLMG_Shot_SoundSet","SyndikatLMG_Tail_SoundSet","SyndikatLMG_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SyndikatLMG_silencerShot_SoundSet","SyndikatLMG_silencerTail_SoundSet","SyndikatLMG_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.00073;
			sounds[] = {"StandardSound","SilencedSound"};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
		};
		class close: FullAutoSlow
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: FullAutoSlow
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		class WeaponSlotsInfo
		{
			mass = 188;
			class MuzzleSlot{};
			class CowsSlot
                       {
                               iconPosition[] = {0.5,0.3};
                               iconScale = 0.2;
                               compatibleItems[] = {"aimpoint3000","aimpoint5000","aimpoint2000","CUP_optic_AN_PVS_4"};
                               iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                               iconPinpoint = "Bottom";
                               linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                               displayName = "Optics SLOT";
                       };
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
	};
};
class cfgMagazines
{
	class Default;
	class CA_Magazine;
	class rem870slug: CA_Magazine
	{
		scope = 2;
		displayName = "8rnd Rem.870 Slug";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		ammo = "B_12Gauge_Slug";
		count = 8;
		initSpeed = 795;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "8rnd Rem.870 Slug";
	};
	class rem870pellets: CA_Magazine
	{
		scope = 2;
		displayName = "8rnd Rem.870 Pellets";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		ammo = "B_12Gauge_Pellets";
		count = 8;
		initSpeed = 795;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "8rnd Rem.870 Pellets";
	};
	class 30Rnd_556x45_Stanag;
	class cmag_556x45: 30Rnd_556x45_Stanag
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		displayName = "Beta C-MAG 100rnd 5.56 Mag";
		count = 100;
		lastRoundsTracer = 20;
	};
	class 150Rnd_762x51_Box;
	class 100rnd_m60E3: 150Rnd_762x51_Box
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		scope = 2;
		displayName = "100Rnd. M60E3";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		count = 100;
		type = "2 * 256";
		initSpeed = 833;
		tracersEvery = 5;
		lastRoundsTracer = 10;
		nameSound = "mgun";
		descriptionShort = "Caliber: 7.62x51mm NATO Rounds: 100 Used in: M60E3";
		mass = "2/3 * 66";
	};
	class 100rnd_m60E3_tracer: 100rnd_m60E3
	{
		author = "Black Ops Weapons";
		dlc = "BlackOpsWeapons";
		scope = 2;
		displayName = "100Rnd. M60E3 Tracer";
		tracersEvery = 1;
	};
};
//};
