class ar : rifleman
{
	name    = "Automatic Rifleman";
	picture =  __EVAL(MCCPATH +"mcc\roleSelection\data\AR.paa");
	minPlayersForKit = 2;
	maxKitsInGroup = 2;
	maxKitsInSide = 999;
	allowMg = 1;
	allowAT = 0;
	allowSniper = 0;
	allowPilot = 0;
	allowCrew = 0;

	class west : west
	{
		class primary
		{
			class rhs_weap_m240B
			{
				unlockLevel = 0;
				cfgname = "rhs_weap_m240B";
				magazines[]= {"rhsusf_50Rnd_762x51_m62_tracer",2};
				attachments1[]= {{0,""},{5,"rhsusf_acc_T1_high"},{10,"rhsusf_acc_compm4"},{15,"rhsusf_acc_elcan_3d"},{20,"rhsusf_acc_ACOG_RMR"}};
				attachments2[]= {{0,""},{9,"rhsusf_acc_ARDEC_M240"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};

			class rhs_weap_m240G
			{
				unlockLevel = 7;
				cfgname = "rhs_weap_m240G";
				magazines[]= {"rhsusf_100Rnd_762x51_m61_ap",2,"rhsusf_50Rnd_762x51_m62_tracer",2};
				attachments1[]= {{0,""},{5,"rhsusf_acc_T1_high"},{10,"rhsusf_acc_compm4"},{15,"rhsusf_acc_elcan_3d"},{20,"rhsusf_acc_ACOG_RMR"}};
				attachments2[]= {{0,""},{9,"rhsusf_acc_ARDEC_M240"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};

			class rhs_weap_m249_pip_L_para
			{
				unlockLevel = 13;
				cfgname = "rhs_weap_m249_pip_L_para";
				magazines[]= {"rhs_200rnd_556x45_T_SAW",2,"rhs_200rnd_556x45_M_SAW",2};
				attachments1[]= {{0,""},{5,"rhsusf_acc_T1_high"},{10,"rhsusf_acc_compm4"},{15,"rhsusf_acc_elcan_3d"},{20,"rhsusf_acc_ACOG_RMR"}};
				attachments2[]= {{0,""},{9,"rhsusf_acc_nt4_black"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};
		};

		class secondary
		{

		};

		class handgun
		{
			class none
			{
				unlockLevel = 0;
				cfgname = "";
				magazines[]= {};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Rook40_F
			{
				unlockLevel = 4;
				cfgname = "hgun_Rook40_F";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_L"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_P07_F
			{
				unlockLevel = 8;
				cfgname = "hgun_P07_F";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_L"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_ACPC2_F
			{
				unlockLevel = 12;
				cfgname = "hgun_ACPC2_F";
				magazines[]= {"9Rnd_45ACP_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Pistol_heavy_02_F
			{
				unlockLevel = 16;
				cfgname = "hgun_Pistol_heavy_02_F";
				magazines[]= {"6Rnd_45ACP_Cylinder",2};
				attachments1[]= {{0,""},{2,"optic_Yorris"}};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Pistol_heavy_01_F
			{
				unlockLevel = 16;
				cfgname = "hgun_Pistol_heavy_01_F";
				magazines[]= {"11Rnd_45ACP_Mag",2};
				attachments1[]= {{0,""},{4,"optic_MRD"}};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};
		};

		items1[]={{0,""},{6,"Binocular", {}},{20,"Rangefinder", {}}};
		items2[]={{0,"ACE_epinephrine", 1},{0,"SmokeShell", 2},{3,"MiniGrenade", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		items3[]={{0,"ACE_morphine", 2},{0,"ACE_epinephrine", 1},{3,"SmokeShell", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"tf_anprc152",1},{0,"ACE_packingBandage",5},{0,"ACE_elasticBandage",5},{0,"ACE_EarPlugs",1}};
		nightVision[]= {{0,""},{40,"NVGoggles"}};
		headgear[]= {{0,"rhsusf_patrolcap_ocp"},{5,"rhsusf_mich_bare_tan"},{10,"rhsusf_ach_bare_tan_headset"},{15,"rhsusf_cvc_alt_helmet"}};
		googles[]= {{0,""},{0,"rhs_googles_black"},{6,"rhsusf_shemagh2_tan"}};
		vests[]= {{0,"rhsusf_mbav"},{9,"rhsusf_mbav_mg"},{13,"rhsusf_spc"},{19,"rhsusf_spc_mg"}};
		backpacks[]= {{0,"rhsusf_assault_eagleaiii_ocp"},{10,"B_Kitbag_cbr"},{20,"B_Carryall_cbr"},{30,"B_Bergen_mcamo_F"}};
		uniforms[]= {{0,"rhs_uniform_cu_ocp"},{11,"rhs_uniform_FROG01_d"},{25,"rhs_uniform_g3_mc"}};
		insigna[]= {{0,""},{0,"111thID"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};

	class east : east
	{
		class primary
		{
			class rhs_weap_pkm
			{
				unlockLevel = 0;
				cfgname = "rhs_weap_pkm";
				magazines[]= {"rhs_100Rnd_762x54mmR",2,"rhs_100Rnd_762x54mmR_7N26",1};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class rhs_weap_pkp
			{
				unlockLevel = 9;
				cfgname = "rhs_weap_pkp";
				magazines[]= {"rhs_100Rnd_762x54mmR",2,"rhs_100Rnd_762x54mmR_7N26",1};
				attachments1[]= {{0,""},{10,"rhs_acc_ekp1"},{15,"rhs_acc_ekp8_02"},{20,"rhs_acc_1p63"},{25,"rhs_acc_pso1m2"}};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};
		};

		class secondary
		{

		};

		class handgun
		{
			class none
			{
				unlockLevel = 0;
				cfgname = "";
				magazines[]= {};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class rhs_weap_makarov_pm
			{
				unlockLevel = 4;
				cfgname = "rhs_weap_makarov_pm";
				magazines[]= {"rhs_mag_9x18_8_57N181S",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class rhs_weap_pya
			{
				unlockLevel = 8;
				cfgname = "rhs_weap_pya";
				magazines[]= {"rhs_mag_9x19_17",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};
		};

		items1[]={{0,""},{6,"Binocular", {}},{20,"Rangefinder", {}}};
		items2[]={{0,"ACE_epinephrine", 1},{0,"rhs_mag_rdg2_white", 2},{2,"rhs_mag_rdg2_black", 2},{3,"rhs_mag_rgn", 2},{7,"rhs_mag_rgo", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"O_IR_Grenade", 2}};
		items3[]={{0,"ACE_morphine", 2},{0,"ACE_epinephrine", 1},{2,"rhs_mag_rdg2_black", 2},{3,"rhs_mag_rgn", 2},{7,"rhs_mag_rgo", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"O_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"tf_microdagr",1},{0,"tf_fadak",1},{0,"ACE_packingBandage",5},{0,"ACE_elasticBandage",5},{0,"ACE_EarPlugs",1}};
		nightVision[]= {{0,""},{40,"NVGoggles"}};
		headgear[]= {{0,"rhs_beanie_green"},{2,"rhs_ssh68"},{5,"rhs_6b26_ess_bala_green"},{10,"rhs_6b47_ess"},{15,"H_HelmetB_Enh_tna_F"}};
		googles[]= {{0,""},{6,"rhs_balaclava"},{10,"G_Balaclava_oli"}};
		vests[]= {{0,"rhs_6sh92_radio"},{9,"rhs_6b23_rifleman"},{13,"rhs_6b13_flora_6sh92_radio"},{19,"rhs_6b13_flora_6sh92_vog"}};
		backpacks[]= {{0,"rhs_sidorMG"},{5,"rhs_assault_umbts"},{10,"B_Kitbag_sgg"},{20,"B_Carryall_oli"},{30,"B_Bergen_tna_F"}};
		uniforms[]= {{0,"rhs_uniform_flora"},{11,"rhs_uniform_gorka_r_g"},{25,"rhs_uniform_vdv_mflora"}};
		insigna[]= {{0,""},{0,"GryffinRegiment"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};

	class guer : guer
	{
		class primary
		{
			class LMG_Mk200_F
			{
				unlockLevel = 0;
				cfgname = "LMG_Mk200_F";
				magazines[]= {"200Rnd_65x39_cased_Box",3,"200Rnd_65x39_cased_Box_Tracer",2};
				attachments1[]= {{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {{0,""}};
			};

			class arifle_MX_SW_F
			{
				unlockLevel = 13;
				cfgname = "arifle_MX_SW_F";
				magazines[]= {"100Rnd_65x39_caseless_mag",6,"100Rnd_65x39_caseless_mag_Tracer",2};
				attachments1[]= {{0,""},{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {{0,""}};
			};

			class LMG_Zafir_F
			{
				unlockLevel = 23;
				cfgname = "LMG_Zafir_F";
				magazines[]= {"150Rnd_762x51_Box",3,"150Rnd_762x51_Box_Tracer",2};
				attachments1[]= {{0,""},{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {{0,""}};
			};
		};

		class secondary
		{

		};

		class handgun
		{
			class none
			{
				unlockLevel = 0;
				cfgname = "";
				magazines[]= {};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Rook40_F
			{
				unlockLevel = 4;
				cfgname = "hgun_Rook40_F";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_L"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_P07_F
			{
				unlockLevel = 8;
				cfgname = "hgun_P07_F";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_L"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_ACPC2_F
			{
				unlockLevel = 12;
				cfgname = "hgun_ACPC2_F";
				magazines[]= {"9Rnd_45ACP_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Pistol_heavy_02_F
			{
				unlockLevel = 16;
				cfgname = "hgun_Pistol_heavy_02_F";
				magazines[]= {"6Rnd_45ACP_Cylinder",2};
				attachments1[]= {{0,""},{2,"optic_Yorris"}};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Pistol_heavy_01_F
			{
				unlockLevel = 16;
				cfgname = "hgun_Pistol_heavy_01_F";
				magazines[]= {"11Rnd_45ACP_Mag",2};
				attachments1[]= {{0,""},{4,"optic_MRD"}};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};
		};

		items1[]={{0,""},{20,"Binocular", {}},{40,"Rangefinder", {}}};
		items2[]={{0,"SmokeShell", 2},{3,"MiniGrenade", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		items3[]={{0,"MiniGrenade", 2},{3,"SmokeShell", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"ItemRadio",1},{0,"FirstAidKit",2}};
		nightVision[]= {{0,""},{0,"NVGoggles"}};
		headgear[]= {{0,"H_Bandanna_khk"},{12,"H_Bandanna_mcamo"},{18,"H_HelmetSpecO_blk"}};
		googles[]= {{0,""},{0,"G_Combat"},{6,"G_Tactical_Black"},{13,"G_Sport_Blackred"}};
		vests[]= {{0,"V_PlateCarrier1_rgr"},{9,"V_PlateCarrierSpec_rgr"},{13,"V_TacVest_oli"},{19,"V_TacVestIR_blk"}};
		backpacks[]= {{0,"B_AssaultPack_mcamo"},{7,"B_Kitbag_mcamo"},{14,"B_Bergen_mcamo"},{18,"B_AssaultPack_blk"}};
		uniforms[]= {{0,"U_I_CombatUniform"},{8,"U_I_CombatUniform_tshirt"}};
		insigna[]= {{0,""},{0,"TFAegis"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};
};
