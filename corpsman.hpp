class corpsman : rifleman
{
	name    = "Corpsman";
	picture =  __EVAL(MCCPATH +"mcc\roleSelection\data\Corpsman.paa");
	minPlayersForKit = 2;
	maxKitsInGroup = 2;
	maxKitsInSide = 999;
	allowMg = 0;
	allowAT = 0;
	allowSniper = 0;
	allowPilot = 0;
	allowCrew = 0;

	class west : west
	{
		class primary
		{
			class rhs_weap_M590_5RD
			{
				unlockLevel = 0;
				cfgname = "rhs_weap_M590_5RD";
				magazines[]= {"rhsusf_5Rnd_00Buck",4,"rhsusf_5Rnd_Slug",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class rhs_weap_m16a4_carryhandle
			{
				unlockLevel = 5;
				cfgname = "rhs_weap_m16a4_carryhandle";
				magazines[]= {"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,"rhs_mag_30Rnd_556x45_Mk262_Stanag",2};
				attachments1[]= {{0,""},{5,"rhsusf_acc_eotech_552"},{10,"rhsusf_acc_compm4"},{15,"rhsusf_acc_ACOG"},{20,"rhsusf_acc_ACOG_RMR"}};
				attachments2[]= {{0,""},{15,"rhsusf_acc_nt4_black"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};

			class rhs_weap_m4a1_blockII
			{
				unlockLevel = 10;
				cfgname = "rhs_weap_m4a1_blockII";
				magazines[]= {"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,"rhs_mag_30Rnd_556x45_Mk262_Stanag",2};
				attachments1[]= {{0,""},{5,"rhsusf_acc_eotech_552"},{10,"rhsusf_acc_compm4"},{15,"rhsusf_acc_ACOG"},{20,"rhsusf_acc_ACOG_RMR"}};
				attachments2[]= {{0,""},{15,"rhsusf_acc_nt4_black"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};
			
			class rhs_weap_m4a1_m203s_d
			{
				unlockLevel = 20;
				cfgname = "rhs_weap_m4a1_m203s_d";
				magazines[]= {"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,"rhs_mag_30Rnd_556x45_Mk262_Stanag",2,"rhs_mag_M441_HE",4};
				attachments1[]= {{0,""},{20,"rhsusf_acc_compm4"},{21,"rhsusf_acc_eotech_552_d"},{22,"rhsusf_acc_ACOG_d"},{23,"rhsusf_acc_ACOG_RMR"}};
				attachments2[]= {{0,""},{22,"rhsusf_acc_nt4_tan"}};
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


		items1[]={{0,""},{6,"Binocular", {}},{20,"Rangefinder", {}}};
		items2[]={{0,"SmokeShell", 4},{0,"ACE_morphine", 2},{0,"ACE_epinephrine", 1},{3,"MiniGrenade", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		items3[]={{3,"SmokeShell", 2},{5,"ACE_morphine", 5},{5,"ACE_epinephrine", 2},{5,"ACE_packingBandage",10},{5,"ACE_elasticBandage",10},{5,"ACE_bloodIV_250",2},{7,"HandGrenade", 2},{10,"APERSTripMine_Wire_Mag", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"tf_anprc152",1},{0,"ACE_packingBandage",5},{0,"ACE_elasticBandage",5},{0,"ACE_EarPlugs",1}};
		nightVision[]= {{0,""},{40,"NVGoggles"}};
		headgear[]= {{0,"rhsusf_patrolcap_ocp"},{5,"rhsusf_mich_bare_tan"},{10,"rhsusf_ach_bare_tan_headset"},{15,"rhsusf_cvc_alt_helmet"}};
		googles[]= {{0,""},{0,"rhs_googles_black"},{6,"rhsusf_shemagh2_tan"}};
		vests[]= {{0,"rhsusf_mbav"},{9,"rhsusf_mbav_medic"},{13,"rhsusf_spc"},{19,"rhsusf_spc_rifleman"}};
		backpacks[]= {{0,"rhs_medic_bag"},{10,"rhsusf_assault_eagleaiii_ocp"},{30,"B_Kitbag_cbr"},{20,"B_Carryall_cbr"},{30,"B_Bergen_mcamo_F"}};
		uniforms[]= {{0,"rhs_uniform_cu_ocp"},{11,"rhs_uniform_FROG01_d"},{25,"rhs_uniform_g3_mc"}};
		insigna[]= {{0,""},{0,"111thID"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};

	class east : east
	{
		class primary
		{
			class rhs_weap_aks74
			{
				unlockLevel = 0;
				cfgname = "rhs_weap_aks74";
				magazines[]= {"rhs_30Rnd_545x39_AK",4,"rhs_30Rnd_545x39_AK_green",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{4,"rhs_acc_uuk"},{9,"rhs_acc_ak5"}};
				attachments3[]= {{0,""},{1,"rhs_acc_2dpZenit"},{7,"rhs_acc_perst1ik"}};
				attachments4[]= {};
			};

			class rhs_weap_akm_zenitco01_b33 
			{
				unlockLevel = 5;
				cfgname = "rhs_weap_akm_zenitco01_b33";
				magazines[]= {"rhs_30Rnd_762x39mm",4,"rhs_30Rnd_762x39mm_89",2};
				attachments1[]= {{0,""},{5,"rhs_acc_rakursPM"},{10,"rhs_acc_1p87"}};
				attachments2[]= {{0,""},{6,"rhs_acc_dtkakm"},{11,"rhs_acc_dtk1l"},{15,"rhs_acc_pbs1"}};
				attachments3[]= {{0,""},{1,"rhs_acc_2dpZenit_ris"},{7,"rhs_acc_perst3"}};
				attachments4[]= {};
			};

			class rhs_weap_ak103_zenitco01_b33
			{
				unlockLevel = 10;
				cfgname = "rhs_weap_ak103_zenitco01_b33";
				magazines[]= {"rhs_30Rnd_762x39mm",9,"rhs_30Rnd_762x39mm_89",2};
				attachments1[]= {{0,""},{5,"rhs_acc_rakursPM"},{10,"rhs_acc_1p87"},{25,"rhs_acc_dh520x56"}};
				attachments2[]= {{0,""},{21,"rhs_acc_dtk1"},{23,"rhs_acc_dtk2"},{25,"rhs_acc_dtk3"},{29,"rhs_acc_dtk4screws"}};
				attachments3[]= {{0,""},{1,"rhs_acc_2dpZenit"},{7,"rhs_acc_perst3"}};
				attachments4[]= {};
			};
			
			class rhs_weap_ak103_gp25_npz
			{
				unlockLevel = 20;
				cfgname = "rhs_weap_ak103_gp25_npz";
				magazines[]= {"rhs_30Rnd_762x39mm",9,"rhs_30Rnd_762x39mm_89",2,"rhs_VOG25",4};
				attachments1[]= {{0,""},{5,"rhs_acc_rakursPM"},{10,"rhs_acc_1p87"},{25,"rhs_acc_dh520x56"}};
				attachments2[]= {{0,""},{16,"rhs_acc_dtk1"},{17,"rhs_acc_dtk2"},{19,"rhs_acc_dtk3"},{22,"rhs_acc_dtk4screws"}};
				attachments3[]= {{0,""},{1,"rhs_acc_2dpZenit"},{7,"rhs_acc_perst3"}};
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
		items2[]={{0,"rhs_mag_rdg2_white", 4},{0,"ACE_morphine", 2},{0,"ACE_epinephrine", 1},{2,"rhs_mag_rdg2_black", 4},{3,"rhs_mag_rgn", 2},{7,"rhs_mag_rgo", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"O_IR_Grenade", 2}};
		items3[]={{3,"rhs_mag_rgo", 2},{5,"ACE_morphine", 5},{5,"ACE_epinephrine", 2},{5,"rhs_mag_rdg2_black", 4},{5,"ACE_packingBandage",10},{5,"ACE_elasticBandage",10},{5,"ACE_bloodIV_250",2},{7,"rhs_mag_rgn", 2},{10,"APERSTripMine_Wire_Mag", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"O_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"tf_microdagr",1},{0,"tf_fadak",1},{0,"ACE_packingBandage",5},{0,"ACE_elasticBandage",5},{0,"ACE_EarPlugs",1}};
		nightVision[]= {{0,""},{40,"NVGoggles"}};
		headgear[]= {{0,"rhs_beanie_green"},{2,"rhs_ssh68"},{5,"rhs_6b26_ess_bala_green"},{10,"rhs_6b47_ess"},{15,"H_HelmetB_Enh_tna_F"}};
		googles[]= {{0,""},{6,"rhs_balaclava"},{10,"G_Balaclava_oli"}};
		vests[]= {{0,"rhs_6sh92_radio"},{9,"rhs_6b23_medic"},{13,"rhs_6b13_flora_6sh92_radio"},{19,"rhs_6b13_flora_6sh92_vog"}};
		backpacks[]= {{0,"rhs_medic_bag"},{5,"rhs_sidor"},{10,"rhs_assault_umbts"},{20,"B_Kitbag_sgg"},{20,"B_Carryall_oli"},{30,"B_Bergen_tna_F"}};
		uniforms[]= {{0,"rhs_uniform_flora"},{11,"rhs_uniform_gorka_r_g"},{25,"rhs_uniform_vdv_mflora"}};
		insigna[]= {{0,""},{0,"GryffinRegiment"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};

	class guer : guer
	{
		class primary
		{
			class arifle_Mk20_F
			{
				unlockLevel = 0;
				cfgname = "arifle_Mk20_F";
				magazines[]= {"30Rnd_556x45_Stanag",9,"30Rnd_556x45_Stanag_Tracer_Green",2};
				attachments1[]= {{0,""},{3,"optic_Aco"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_M"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};

			class arifle_MX_F
			{
				unlockLevel = 13;
				cfgname = "arifle_MX_F";
				magazines[]= {"30Rnd_65x39_caseless_mag",9,"30Rnd_65x39_caseless_mag_Tracer",2};
				attachments1[]= {{0,""},{3,"optic_Aco"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};

			class arifle_MX_Black_F
			{
				unlockLevel = 13;
				cfgname = "arifle_MX_Black_F";
				magazines[]= {"30Rnd_65x39_caseless_mag",9,"30Rnd_65x39_caseless_mag_Tracer",2};
				attachments1[]= {{0,""},{3,"optic_Aco"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_M"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};
		};

		class secondary
		{

		};

		class handgun
		{

		};


		items1[]={{0,""},{20,"Binocular", {}},{40,"Rangefinder", {}}};
		items2[]={{0,"SmokeShell", 2},{3,"MiniGrenade", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		items3[]={{0,"MiniGrenade", 2},{3,"SmokeShell", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"ItemRadio",1},{0,"FirstAidKit",10},{"Medikit",1}};
		nightVision[]= {{0,""},{0,"NVGoggles"}};
		headgear[]= {{0,"H_Booniehat_khk"},{12,"H_Booniehat_mcamo"},{18,"H_HelmetIA_camo"}};
		googles[]= {{0,""},{0,"G_Combat"},{6,"G_Tactical_Black"},{13,"G_Sport_Blackred"}};
		vests[]= {{0,"V_PlateCarrier1_rgr"},{9,"V_PlateCarrierSpec_rgr"},{13,"V_TacVest_oli"},{19,"V_TacVestIR_blk"}};
		backpacks[]= {{0,"B_AssaultPack_mcamo"},{7,"B_Kitbag_mcamo"},{14,"B_Bergen_mcamo"},{18,"B_AssaultPack_blk"}};
		uniforms[]= {{0,"U_I_CombatUniform"},{8,"U_I_CombatUniform_tshirt"}};
		insigna[]= {{0,""},{0,"TFAegis"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};
};
