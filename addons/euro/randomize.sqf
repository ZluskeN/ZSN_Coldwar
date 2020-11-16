_this setVariable ["BIS_enableRandomization", false];
sleep 0.2;
_class = typeOf _this;
_randomWeapon = floor (random 3); 
if (isServer) then
{			
	switch _class do 
	{
		case "ZSN_EurosolGB": 
		{
			switch (_randomWeapon) do 
			{
				case (0):
				{
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo	
					_this addWeapon "CUP_arifle_AKMS_Early";
				};
				case (2): 
				{ 
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo			
					_this addWeapon "CUP_arifle_AKS";
				};
			};
		};
		case "ZSN_EurosolGR": 
		{
			switch (_randomWeapon) do 
			{
				case (0):
				{
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo		
					_magnumber = {_x == "CUP_10Rnd_762x39_SKS_M"} count magazines _this;
					for "_i" from 1 to _magnumber do {
						_this removemagazine "CUP_10Rnd_762x39_SKS_M"; 
						_this addmagazine "CUP_20Rnd_762x51_FNFAL_M";
					};		
					_this addWeapon "CUP_arifle_FNFAL5061_wooden";	
				};
				case (2): 
				{ 
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo		
					_magnumber = {_x == "CUP_10Rnd_762x39_SKS_M"} count magazines _this;
					for "_i" from 1 to _magnumber do {
						_this removemagazine "CUP_10Rnd_762x39_SKS_M"; 
						_this addmagazine "CUP_20Rnd_762x51_DMR";
					};	
					_this addWeapon "CUP_srifle_M14";
				};
			};
		};
		case "ZSN_EurosolGLeader": 
		{
			switch (_randomWeapon) do 
			{
				case (0):
				{
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo				
					_this addWeapon "CUP_arifle_AK47_Early";			
				};
				case (2): 
				{ 
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo			
					_this addWeapon "CUP_arifle_AKM_Early";
				};
			};
		};
		case "ZSN_EurosolGSniper": 
		{
			switch (_randomWeapon) do 
			{
				case (0):
				{
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo		
					_magnumber = {_x == "CUP_5Rnd_762x54_Mosin_M"} count magazines _this;
					for "_i" from 1 to _magnumber do {
						_this removemagazine "CUP_5Rnd_762x54_Mosin_M"; 
						_this addmagazine "CUP_6Rnd_762x51_R700";
					};		
					_this addWeapon "CUP_srifle_Remington700_scoped";
				};
				case (2): 
				{ 
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo	
					_magnumber = {_x == "CUP_5Rnd_762x54_Mosin_M"} count magazines _this;
					for "_i" from 1 to _magnumber do {
						_this removemagazine "CUP_5Rnd_762x54_Mosin_M"; 
						_this addmagazine "CUP_5x_22_LR_17_HMR_M";
					};		
					_this addWeapon "CUP_srifle_CZ550";
				};
			};
		};
		case "ZSN_EurosolGDB": 
		{
			switch (_randomWeapon) do 
			{
				case (0):
				{
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo				
					_this addWeapon "CUP_arifle_AK47_Early";
				};
				case (2): 
				{ 
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo			
					_this addWeapon "CUP_arifle_AKS";
				};
			};
		};
		case "ZSN_EurosolGDR": 
		{
			switch (_randomWeapon) do 
			{
				case (0):
				{
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo	
					_magnumber = {_x == "CUP_10Rnd_762x39_SKS_M"} count magazines _this;
					for "_i" from 1 to _magnumber do {
						_this removemagazine "CUP_10Rnd_762x39_SKS_M"; 
						_this addmagazine "CUP_20Rnd_762x51_FNFAL_M";
					};			
					_this addWeapon "CUP_arifle_FNFAL5061_wooden";	
				};
				case (2): 
				{ 
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo	
					_magnumber = {_x == "CUP_10Rnd_762x39_SKS_M"} count magazines _this;
					for "_i" from 1 to _magnumber do {
						_this removemagazine "CUP_10Rnd_762x39_SKS_M"; 
						_this addmagazine "CUP_20Rnd_762x51_DMR";
					};		
					_this addWeapon "CUP_srifle_M14";
				};
			};
		};
		case "ZSN_EurosolGDLeader": 
		{
			switch (_randomWeapon) do 
			{
				case (0):
				{
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo				
					_this addWeapon "CUP_arifle_AKMS_Early";
				};
				case (2): 
				{ 
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo			
					_this addWeapon "CUP_arifle_AKM_Early";
				};
			};
		};
		case "ZSN_EurosolGDSniper": 
		{
			switch (_randomWeapon) do 
			{
				case (0):
				{
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo	
					_magnumber = {_x == "CUP_5Rnd_762x54_Mosin_M"} count magazines _this;
					for "_i" from 1 to _magnumber do {
						_this removemagazine "CUP_5Rnd_762x54_Mosin_M"; 
						_this addmagazine "CUP_6Rnd_762x51_R700";
					};			
					_this addWeapon "CUP_srifle_Remington700_scoped";
				};
				case (2): 
				{ 
					_this removeWeapon primaryweapon _this;  // delete default weapons / ammo		
					_magnumber = {_x == "CUP_5Rnd_762x54_Mosin_M"} count magazines _this;
					for "_i" from 1 to _magnumber do {
						_this removemagazine "CUP_5Rnd_762x54_Mosin_M"; 
						_this addmagazine "CUP_5x_22_LR_17_HMR_M";
					};	
					_this addWeapon "CUP_srifle_CZ550";
				};
			};
		};
	};
};