class CfgPatches
{
	class ZSN_ColdWarWest_DHI
	{
		author = "ZluskeN";
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_ColdWarWest"};
		magazines[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class ZSN_SoldierW: B_Soldier_base_F
	{
		uniformClass = "usm_bdu_wdl";
		Items[] = {"usm_bdu_cap_WDL","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"usm_bdu_cap_WDL","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"usm_bdu_cap_WDL","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"usm_bdu_cap_WDL","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWOfficer: ZSN_SoldierW
	{
		linkedItems[] = {"usm_bdu_cap_WDL","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"usm_bdu_cap_WDL","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierWcrew: ZSN_SoldierW
	{
		Items[] = {"usm_bdu_cap_WDL","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
		RespawnItems[] = {"usm_bdu_cap_WDL","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
	};
	class ZSN_SoldierWD: B_Soldier_base_F
	{
		uniformClass = "usm_bdu_des";
		Items[] = {"usm_bdu_cap_des","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"usm_bdu_cap_des","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"usm_bdu_cap_des","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"usm_bdu_cap_des","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_SoldierWDOfficer: ZSN_SoldierWD
	{
		linkedItems[] = {"usm_bdu_cap_des","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"usm_bdu_cap_des","CUP_V_B_ALICE","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_SoldierWDcrew: ZSN_SoldierWD
	{
		Items[] = {"usm_bdu_cap_des","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
		RespawnItems[] = {"usm_bdu_cap_des","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
	};
	class ZSN_MarineW: B_Soldier_base_F
	{
		uniformClass = "usm_bdu_srl_wdl_m";
		Items[] = {"usm_bdu_8point_wdl_m","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"usm_bdu_8point_wdl_m","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"usm_bdu_8point_wdl_m","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"usm_bdu_8point_wdl_m","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWMedic: ZSN_MarineW
	{
		Items[] = {"usm_bdu_8point_wdl","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"usm_bdu_8point_wdl","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
	};
	class ZSN_MarineWOfficer: ZSN_MarineW
	{
		linkedItems[] = {"usm_bdu_8point_wdl_m","CUP_V_B_PASGT","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"usm_bdu_8point_wdl_m","CUP_V_B_PASGT","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_MarineWCrew: ZSN_MarineW
	{
		Items[] = {"usm_bdu_8point_wdl_m","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
		RespawnItems[] = {"usm_bdu_8point_wdl_m","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
	};
	class ZSN_MarineWD: B_Soldier_base_F
	{
		uniformClass = "usm_bdu_srl_des_m";
		Items[] = {"usm_bdu_8point_des_m","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"usm_bdu_8point_des_m","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"usm_bdu_8point_des_m","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"usm_bdu_8point_des_m","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_MarineWDMedic: ZSN_MarineWD
	{
		Items[] = {"usm_bdu_8point_des","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"usm_bdu_8point_des","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
	};
	class ZSN_MarineWDOfficer: ZSN_MarineWD
	{
		linkedItems[] = {"usm_bdu_8point_des_m","CUP_V_B_PASGT_desert","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"usm_bdu_8point_des_m","CUP_V_B_PASGT_desert","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_MarineWDCrew: ZSN_MarineWD
	{
		Items[] = {"usm_bdu_8point_des_m","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
		RespawnItems[] = {"usm_bdu_8point_des_m","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs"};
	};
	class ZSN_Rangerw: B_Soldier_base_F
	{
		uniformClass = "usm_bdu_srh_wdl2";
		Items[] = {"usm_bdu_boonie_wdl","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"usm_bdu_boonie_wdl","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"usm_bdu_boonie_wdl","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"usm_bdu_boonie_wdl","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWOfficer: ZSN_Rangerw
	{
		linkedItems[] = {"usm_bdu_boonie_wdl","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"usm_bdu_boonie_wdl","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
	class ZSN_RangerWD: B_Soldier_base_F
	{
		uniformClass = "usm_bdu_srh_des2";
		Items[] = {"usm_bdu_boonie_des","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		RespawnItems[] = {"usm_bdu_boonie_des","Firstaidkit","Firstaidkit","ACE_Flashlight_MX991","ACE_EarPlugs","ACE_EntrenchingTool"};
		linkedItems[] = {"usm_bdu_boonie_des","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"usm_bdu_boonie_des","ItemMap","ItemCompass","ItemWatch"};
	};
	class ZSN_RangerWDOfficer: ZSN_RangerWD
	{
		linkedItems[] = {"usm_bdu_boonie_des","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","Itemradio"};
		respawnLinkedItems[] = {"usm_bdu_boonie_des","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","Itemradio"};
	};
};
//};
