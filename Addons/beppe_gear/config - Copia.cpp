#define LOAD(weight,capacity) maximumLoad = ##capacity##; \
							  mass = ##weight##;

class CfgPatches
{
	class BO_gear
	{
		units[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {};
	};
};


class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;

	class HeadgearItem: InventoryItem_Base_F
	{	
		allowedSlots[] = {BACKPACK_SLOT, HEADGEAR_SLOT}; /// defines where can be the cap placed, it is small enough to fit in backpack
		type = HEADGEAR_SLOT;		/// standard slot for the cap is on head
		hiddenSelections[] = {};	/// default caps don't have any changeable selections
		hitpointName = "HitHead";	/// what hitpoint is covered with the cap to have additional protection
	};

	class BOprotecfullcut: ItemCore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		dlc="BlackOpsWeapons";
		author="Black Ops Weapons";
		displayName  = "Protec Full Cut"; /// how would the stuff be displayed in inventory and on ground
		picture = "\beppe_mod_gear\protec\ico\protec.paa"; /// this looks fairly similar
		model   = "\beppe_mod_gear\protec\protec.p3d"; /// what model does the cap use
		
		class ItemInfo: HeadgearItem
		{
			mass = 10; /// combined weight and volume of the cap, this equals to single magazine
			uniformModel = "\beppe_mod_gear\protec\protec.p3d";	/// what model is used for this cap
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	/// this cap is so small and flexible that it fits everywhere
			modelSides[] = {6}; /// available for all sides

		
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
					armor		= 1; // addition to armor of referenced hitpoint
					passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
			};
		};
	};
	
	class BOprotechalfcut: ItemCore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		dlc="BlackOpsWeapons";
		author="Black Ops Weapons";
		displayName  = "Protec Half Cut"; /// how would the stuff be displayed in inventory and on ground
		picture = "\beppe_mod_gear\protec\ico\protec_half.paa"; /// this looks fairly similar
		model   = "\beppe_mod_gear\protec\protec_half.p3d"; /// what model does the cap use
		
		class ItemInfo: HeadgearItem
		{
			mass = 10; /// combined weight and volume of the cap, this equals to single magazine
			uniformModel = "\beppe_mod_gear\protec\protec_half.p3d";	/// what model is used for this cap
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	/// this cap is so small and flexible that it fits everywhere
			modelSides[] = {6}; /// available for all sides

		
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
					armor		= 1; // addition to armor of referenced hitpoint
					passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
			};
		};
	};
	
		class BOprotechalfsdu: ItemCore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		dlc="BlackOpsWeapons";
		author="Black Ops Weapons";
		displayName  = "Protec Half Cut SDU5/E"; /// how would the stuff be displayed in inventory and on ground
		picture = "\beppe_mod_gear\protec\ico\protec_half_sdu.paa"; /// this looks fairly similar
		model   = "\beppe_mod_gear\protec\protec_half_sdu.p3d"; /// what model does the cap use
		
		class ItemInfo: HeadgearItem
		{
			mass = 10; /// combined weight and volume of the cap, this equals to single magazine
			uniformModel = "\beppe_mod_gear\protec\protec_half_sdu.p3d";	/// what model is used for this cap
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	/// this cap is so small and flexible that it fits everywhere
			modelSides[] = {6}; /// available for all sides

		
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
					armor		= 1; // addition to armor of referenced hitpoint
					passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
			};
		};
	};
	
	class BOprotechalftaped: ItemCore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		dlc="BlackOpsWeapons";
		author="Black Ops Weapons";
		displayName  = "Protec Half Cut SDU5/E Taped"; /// how would the stuff be displayed in inventory and on ground
		picture = "\beppe_mod_gear\protec\ico\protec_half_sdu.paa"; /// this looks fairly similar
		model   = "\beppe_mod_gear\protec\protec_half_taped.p3d"; /// what model does the cap use
		
		class ItemInfo: HeadgearItem
		{
			mass = 10; /// combined weight and volume of the cap, this equals to single magazine
			uniformModel = "\beppe_mod_gear\protec\protec_half_taped.p3d";	/// what model is used for this cap
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	/// this cap is so small and flexible that it fits everywhere
			modelSides[] = {6}; /// available for all sides

		
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
					armor		= 1; // addition to armor of referenced hitpoint
					passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
			};
		};
	};
	
	
	class BOprotecfullsdu: ItemCore{
		scope = 2; /// scope needs to be 2 to have a visible class
		dlc="BlackOpsWeapons";
		author="Black Ops Weapons";
		displayName  = "Protec Full Cut SDU 5/E"; /// how would the stuff be displayed in inventory and on ground
		picture = "\beppe_mod_gear\protec\ico\protsdu.paa"; /// this looks fairly similar
		model   = "\beppe_mod_gear\protec\protecsdu5.p3d"; /// what model does the cap use
		
		class ItemInfo: HeadgearItem
		{
			mass = 10; /// combined weight and volume of the cap, this equals to single magazine
			uniformModel = "\beppe_mod_gear\protec\protecsdu5.p3d";	/// what model is used for this cap
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	/// this cap is so small and flexible that it fits everywhere
			modelSides[] = {6}; /// available for all sides

		
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
					armor		= 1; // addition to armor of referenced hitpoint
					passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
			};
		};
		
	};
	
	class BOprotecfullsdu_taped: ItemCore{
		
		scope = 2; /// scope needs to be 2 to have a visible class
		dlc="BlackOpsWeapons";
		author="Black Ops Weapons";
		displayName  = "Protec Full Cut SDU 5/E Taped"; /// how would the stuff be displayed in inventory and on ground
		picture = "\beppe_mod_gear\protec\ico\protsdu.paa"; /// this looks fairly similar
		model   = "\beppe_mod_gear\protec\protecsdu5_taped.p3d"; /// what model does the cap use
		
		class ItemInfo: HeadgearItem
		{
			mass = 10; /// combined weight and volume of the cap, this equals to single magazine
			uniformModel = "\beppe_mod_gear\protec\protecsdu5_taped.p3d";	/// what model is used for this cap
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	/// this cap is so small and flexible that it fits everywhere
			modelSides[] = {6}; /// available for all sides

		
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
					armor		= 1; // addition to armor of referenced hitpoint
					passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
			};
		};
		
	};
	
	class VestItem: InventoryItem_Base_F
	{
		type = VEST_SLOT;			/// vests fit into vest slot
		hiddenSelections[] = {};	/// no changeable selections by default
	    armor = 5*0;				/// what protection does the vest provide	
		passThrough = 1;			/// coef of damage passed to total damage
		hitpointName = "HitBody";	/// name of hitpoint shielded by the vest
	};

	class Vest_Camo_Base: ItemCore /// base class for vests with changeable textures
	{
		scope = 0;	/// base classes should not be visible in editor
		allowedSlots[] = {BACKPACK_SLOT}; /// you should be able to put a vest into backpack
		//hiddenSelections[] = {"camo"}; /// what selection in model could have different textures

		class ItemInfo: VestItem
		{
			//hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
			//LOAD(0,0) /// macro from basicdefines_A3.hpp
		};
	};
	
	class BOtgfaust: Vest_Camo_Base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "TG FAUST"; /// how would the stuff be displayed in inventory and on ground
	picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa"; /// this icon fits the vest surprisingly well
	model   = "\beppe_mod_gear\tgfaust\tgfaust.p3d"; /// what model does the vest use

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\beppe_mod_gear\tgfaust\tgfaust.p3d"; /// what model does the vest use
		maximumLoad = 100; 
		mass = 100;
		
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
				armor		= 8; // addition to armor of referenced hitpoint
				passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor		= 8;
				passThrough	= 0.5;
			};
			class Chest 
			{
				hitpointName	= "HitChest"; 
				armor		= 24; 
				passThrough	= 0.1; 
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor		= 24;
				passThrough	= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen"; 
				armor		= 24;
				passThrough	= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough	= 0.1;
			};
		};
	};
};

class BOanite: Vest_Camo_Base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "ANITE Co. M14 Chest rig"; /// how would the stuff be displayed in inventory and on ground
	picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa"; /// this icon fits the vest surprisingly well
	model   = "\beppe_mod_gear\anite\anite.p3d"; /// what model does the vest use

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\beppe_mod_gear\anite\anite.p3d"; /// what model does the vest use
		maximumLoad = 100; 
		mass = 100;
		
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
				armor		= 8; // addition to armor of referenced hitpoint
				passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor		= 8;
				passThrough	= 0.5;
			};
			class Chest 
			{
				hitpointName	= "HitChest"; 
				armor		= 24; 
				passThrough	= 0.1; 
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor		= 24;
				passThrough	= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen"; 
				armor		= 24;
				passThrough	= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough	= 0.1;
			};
		};
	};
};

	
	

};


