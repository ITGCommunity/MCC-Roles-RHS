class marksman : rifleman
{
	name    = "marksman";
	picture =  __EVAL(MCCPATH +"mcc\roleSelection\data\Marksman.paa");
	minPlayersForKit = 4;
	maxKitsInGroup = 1;
	maxKitsInSide = 999;
	allowMg = 0;
	allowAT = 0;
	allowSniper = 1;
	allowPilot = 0;
	allowCrew = 0;

	class west : west
	{
		class primary
		{
			class rhs_weap_m40a5_d
			{
				unlockLevel = 0;
				cfgname = "rhs_weap_m40a5_d";
				magazines[]= {"rhsusf_10Rnd_762x51_m118_special_Mag",3,"rhsusf_10Rnd_762x51_m993_Mag",2,"rhsusf_10Rnd_762x51_m62_Mag",1};
				attachments1[]= {{0,"rhsusf_acc_ACOG_d"},{6,"rhsusf_acc_LEUPOLDMK4"},{11,"rhsusf_acc_LEUPOLDMK4_2_d"},{18,"rhsusf_acc_M8541_low_d"},{26,"rhsusf_acc_premier"}};
				attachments2[]= {};
				attachments3[]= {{0,""},{1,"rhsusf_acc_M952V"},{7,"rhsusf_acc_anpeq16a"}};
				attachments4[]= {{3,"rhsusf_acc_harris_swivel"}};
			};

			class rhs_weap_m24sws_ghillie
			{
				unlockLevel = 4;
				cfgname = "rhs_weap_m24sws_ghillie";
				magazines[]= {"rhsusf_10Rnd_762x51_m118_special_Mag",3,"rhsusf_10Rnd_762x51_m993_Mag",2,"rhsusf_10Rnd_762x51_m62_Mag",1};
				attachments1[]= {{0,"rhsusf_acc_ACOG_d"},{6,"rhsusf_acc_LEUPOLDMK4"},{11,"rhsusf_acc_LEUPOLDMK4_2_d"},{18,"rhsusf_acc_M8541_low_d"},{26,"rhsusf_acc_premier"}};
				attachments2[]= {};
				attachments3[]= {{0,""},{1,"rhsusf_acc_M952V"},{7,"rhsusf_acc_anpeq16a"}};
				attachments4[]= {{3,"rhsusf_acc_harris_swivel"}};
			};

			class rhs_weap_XM2010_d
			{
				unlockLevel = 8;
				cfgname = "rhs_weap_XM2010_d";
				magazines[]= {"rhsusf_5Rnd_300winmag_xm2010",6};
				attachments1[]= {{0,"rhsusf_acc_ACOG_d"},{6,"rhsusf_acc_LEUPOLDMK4"},{11,"rhsusf_acc_LEUPOLDMK4_2_d"},{18,"rhsusf_acc_M8541_low_d"},{26,"rhsusf_acc_premier"}};
				attachments2[]= {};
				attachments3[]= {{0,""},{1,"rhsusf_acc_M952V"},{7,"rhsusf_acc_anpeq16a"}};
				attachments4[]= {{3,"rhsusf_acc_harris_swivel"}};
			};
			
			class rhs_weap_M107_d
			{
				unlockLevel = 16;
				cfgname = "rhs_weap_M107_d";
				magazines[]= {"rhsusf_mag_10Rnd_STD_50BMG_mk211",2,"rhsusf_mag_10Rnd_STD_50BMG_M33",2};
				attachments1[]= {{0,"rhsusf_acc_ACOG_d"},{6,"rhsusf_acc_LEUPOLDMK4"},{11,"rhsusf_acc_LEUPOLDMK4_2_d"},{18,"rhsusf_acc_M8541_low_d"},{26,"rhsusf_acc_premier"}};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};
			
			class rhs_weap_sr25_ec_d
			{
				unlockLevel = 26;
				cfgname = "rhs_weap_sr25_ec_d";
				magazines[]= {"rhsusf_20Rnd_762x51_m118_special_Mag",3,"rhsusf_20Rnd_762x51_m993_Mag",2,"rhsusf_20Rnd_762x51_m62_Mag",1};
				attachments1[]= {{0,"rhsusf_acc_ACOG_d"},{6,"rhsusf_acc_LEUPOLDMK4"},{11,"rhsusf_acc_LEUPOLDMK4_2_d"},{18,"rhsusf_acc_M8541_low_d"},{26,"rhsusf_acc_premier"}};
				attachments2[]= {};
				attachments3[]= {{0,""},{1,"rhsusf_acc_M952V"},{7,"rhsusf_acc_anpeq16a"}};
				attachments4[]= {{3,"rhsusf_acc_harris_swivel"}};
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

			class rhsusf_weap_m9
			{
				unlockLevel = 4;
				cfgname = "rhsusf_weap_m9";
				magazines[]= {"rhsusf_mag_15Rnd_9x19_JHP",2};
				attachments1[]= {};
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

		items1[]={{0,"Binocular"},{7,"Rangefinder", {}}};
		items2[]={{0,"ACE_epinephrine", 1},{0,"ACE_Kestrel4500", 1},{0,"ACE_DAGR", 1},{0,"ACE_ATragMX", 1},{0,"ACE_RangeCard", 1},{0,"SmokeShell", 2},{3,"MiniGrenade", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		items3[]={{0,"ACE_morphine", 2},{3,"SmokeShell", 2},{7,"HandGrenade", 2},{10,"APERSTripMine_Wire_Mag", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{16,"ACE_SpottingScope", 1},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2},{27,"ACE_Tripod", 1}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"tf_anprc152",1},{0,"ACE_packingBandage",5},{0,"ACE_elasticBandage",5},{0,"ACE_EarPlugs",1}};
		nightVision[]= {{0,""},{40,"NVGoggles"}};
		headgear[]= {{0,"rhs_Booniehat_ocp"},{5,"rhsusf_mich_bare_tan"},{10,"rhsusf_ach_bare_tan_headset"},{15,"rhsusf_cvc_alt_helmet"}};
		googles[]= {{0,""},{0,"rhs_googles_black"},{6,"rhsusf_shemagh2_tan"}};
		vests[]= {{0,"rhsusf_mbav"},{9,"rhsusf_mbav_rifleman"},{13,"rhsusf_spc"},{19,"rhsusf_spc_marksman"}};
		backpacks[]= {{0,"tf_rt1523g_rhs"},{10,"rhsusf_assault_eagleaiii_ocp"},{30,"B_Kitbag_cbr"}};
		uniforms[]= {{0,"rhs_uniform_cu_ocp"},{11,"rhs_uniform_FROG01_d"},{19,"rhs_uniform_g3_mc"},{26,"U_B_FullGhillie_ard"}};
		insigna[]= {{0,""},{0,"111thID"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};

	class east : east
	{
		class primary
		{
			class rhs_weap_svdp_wd
			{
				unlockLevel = 0;
				cfgname = "rhs_weap_svdp_wd";
				magazines[]= {"rhs_10Rnd_762x54mmR_7N1",6};
				attachments1[]= {{0,""},{4,"rhs_acc_pso1m2"},{6,"rhs_acc_pso1m21_svd"}};
				attachments2[]= {{0,""},{9,"rhs_acc_tgpv"},{12,"rhs_acc_tgpv2"};
				attachments3[]= {};
				attachments4[]= {};
			};
			
			class rhs_weap_svdp_wd_npz
			{
				unlockLevel = 6;
				cfgname = "rhs_weap_svdp_wd_npz";
				magazines[]= {"rhs_10Rnd_762x54mmR_7N1",6};
				attachments1[]= {{0,"rhs_acc_rakursPM"},{4,"rhs_acc_pso1m2"},{6,"rhs_acc_pso1m21_svd"},{16,"rhs_acc_dh520x56"}};
				attachments2[]= {{0,""},{9,"rhs_acc_tgpv"},{12,"rhs_acc_tgpv2"};
				attachments3[]= {};
				attachments4[]= {};
			};

			class rhs_weap_t5000
			{
				unlockLevel = 23;
				cfgname = "rhs_weap_t5000";
				magazines[]= {"rhs_5Rnd_338lapua_t5000",6};
				attachments1[]= {{0,"rhs_acc_rakursPM"},{4,"rhs_acc_pso1m2"},{6,"rhs_acc_pso1m21_svd"},{26,"rhs_acc_dh520x56"}};
				attachments2[]= {{0,""},{9,"rhs_acc_tgpv"},{12,"rhs_acc_tgpv2"};
				attachments3[]= {};
				attachments4[]= {{24,"rhs_acc_harris_swivel"}};
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

		items1[]={{0,"Binocular"},{7,"Rangefinder", {}}};
		items2[]={{0,"ACE_epinephrine", 1},{0,"ACE_Kestrel4500", 1},{0,"ACE_DAGR", 1},{0,"ACE_ATragMX", 1},{0,"ACE_RangeCard", 1},{0,"rhs_mag_rdg2_white", 2},{2,"rhs_mag_rdg2_black", 2},{3,"rhs_mag_rgn", 2},{7,"rhs_mag_rgo", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"O_IR_Grenade", 2}};
		items3[]={{0,"ACE_morphine", 2},{0,"ACE_epinephrine", 1},{2,"rhs_mag_rdg2_black", 2},{3,"rhs_mag_rgo", 2},{7,"rhs_mag_rgn", 2},{10,"APERSTripMine_Wire_Mag", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{16,"ACE_SpottingScope", 1},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"O_IR_Grenade", 2},{27,"ACE_Tripod", 1}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"tf_microdagr",1},{0,"tf_fadak",1},{0,"ACE_packingBandage",5},{0,"ACE_elasticBandage",5},{0,"ACE_EarPlugs",1}};
		nightVision[]= {{0,""},{40,"NVGoggles"}};
		headgear[]= {{0,"rhs_beanie_green"},{2,"rhs_ssh68"},{5,"rhs_6b26_ess_bala_green"},{10,"rhs_6b47_ess"},{15,"H_HelmetB_Enh_tna_F"}};
		googles[]= {{0,""},{6,"rhs_balaclava"},{10,"G_Balaclava_oli"}};
		vests[]= {{0,"rhs_6sh92_radio"},{9,"rhs_6b23_rifleman"},{13,"rhs_6b13_flora_6sh92_radio"},{19,"rhs_6b13_flora_6sh92_vog"}};
		backpacks[]= {{0,""},{5,"rhs_sidor"},{10,"rhs_assault_umbts"},{20,"B_Kitbag_sgg"}};
		uniforms[]= {{0,"rhs_uniform_flora"},{11,"rhs_uniform_gorka_r_g"},{25,"rhs_uniform_vdv_mflora"}};
		insigna[]= {{0,""},{0,"GryffinRegiment"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};

	class guer : guer
	{
		class primary
		{
			class srifle_EBR_F
			{
				unlockLevel = 0;
				cfgname = "srifle_EBR_F";
				magazines[]= {"20Rnd_762x51_Mag",9};
				attachments1[]= {{0,"optic_Hamr"},{4,"optic_MRCO"},{6,"optic_DMS"},{8,"optic_SOS"},{10,"optic_Holosight"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_B"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {{3,"bipod_02_F_hex"},{5,"bipod_01_F_snd"},{8,"bipod_02_F_blk"}};
			};

			class arifle_MXM_F
			{
				unlockLevel = 13;
				cfgname = "arifle_MXM_F";
				magazines[]= {"30Rnd_65x39_caseless_mag",9,"30Rnd_65x39_caseless_mag_Tracer",2};
				attachments1[]= {{0,"optic_Hamr"},{4,"optic_MRCO"},{6,"optic_DMS"},{8,"optic_SOS"},{10,"optic_Holosight"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {{3,"bipod_02_F_hex"},{5,"bipod_01_F_snd"},{8,"bipod_02_F_blk"}};
			};

			class srifle_LRR_F
			{
				unlockLevel = 23;
				cfgname = "srifle_LRR_F";
				magazines[]= {"7Rnd_408_Mag",9};
				attachments1[]= {{0,"optic_MRCO"},{4,"optic_DMS"},{6,"optic_SOS"},{8,"optic_Holosight"}};
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

		items1[]={{0,"Rangefinder", {}},{10,"Laserdesignator", {"Laserbatteries",2}}};
		items2[]={{0,"SmokeShell", 2},{3,"MiniGrenade", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		items3[]={{0,"MiniGrenade", 2},{3,"SmokeShell", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"ItemRadio",1},{0,"FirstAidKit",2}};
		nightVision[]= {{0,""},{0,"NVGoggles"}};
		headgear[]= {{0,"H_HelmetIA"},{12,"H_Shemag_olive"},{18,"H_HelmetIA_camo"}};
		googles[]= {{0,""},{0,"G_Combat"},{6,"G_Tactical_Black"},{13,"G_Sport_Blackred"}};
		vests[]= {{0,"V_PlateCarrier1_rgr"},{9,"V_PlateCarrierSpec_rgr"},{13,"V_TacVest_oli"},{19,"V_TacVestIR_blk"}};
		backpacks[]= {{0,"B_AssaultPack_mcamo"},{7,"B_Kitbag_mcamo"},{14,"B_Bergen_mcamo"},{18,"B_AssaultPack_blk"}};
		uniforms[]= {{0,"U_I_CombatUniform"},{8,"U_I_CombatUniform_tshirt"},{15,"U_I_GhillieSuit"}};
		insigna[]= {{0,""},{0,"TFAegis"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};
};
