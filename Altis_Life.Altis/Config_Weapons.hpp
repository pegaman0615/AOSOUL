/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 20000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 25000, 500 },
            { "hgun_ACPC2_F", "", 25000, 500 },
            { "hgun_PDW2000_F", "", 35000, 500 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 160 },
            { "6Rnd_45ACP_Cylinder", "", 600 },
            { "9Rnd_45ACP_Mag", "", 750 },
            { "30Rnd_9x21_Mag", "", 1500 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 350000, 20000 },
            { "arifle_Katiba_F", "", 380000, 20000 },
            { "srifle_DMR_01_F", "", 475000, 20000 },
            { "arifle_SDAR_F", "", 400000, 20000 },
            { "arifle_MXC_SOS_point_snds_F", "", 900000, 20000 },
            { "launch_RPG32_F", "", 1800000, 20000 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 3000 },
            { "30Rnd_65x39_caseless_green", "", 2800 },
            { "10Rnd_762x54_Mag", "", 3500 },
            { "20Rnd_556x45_UW_mag", "", 3000 },
            { "30Rnd_65x39_caseless_mag", "", 3000 },
            { "RPG32_F", "", 50000 },
            { "RPG32_HE_F", "", 50000 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 35000 },
            { "optic_Holosight", "", 36000 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 },
            { "optic_Nightstalker", "", 250000, 1000 },
            { "optic_SOS", "", 150000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 35000, 3100 },
            { "hgun_Pistol_heavy_02_F", "", 42500, 2200 },
            { "hgun_ACPC2_F", "", 54500, 3000 },
            { "hgun_PDW2000_F", "", 155000, 20000 },
            { "arifle_SDAR_F", "", 450000, 20000 },
            { "launch_RPG32_F", "", 1800000, 20000 },
            { "FirstAidKit", "", 550, 65 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
            { "30Rnd_556x45_Stanag", "", 3000 },
            { "RPG32_F", "", 50000 },
            { "RPG32_HE_F", "", 50000 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "",  10950 },
            { "optic_SOS", "", 150000 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, 10 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, 10 },
            { "ItemRadio", "", 2500, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 550, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, 50 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, 100 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, 25 },
            { "ItemRadio", "", 2500, 25 },
            { "FirstAidKit", "", 550, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, 50 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, 10 },
            { "ItemGPS", "", 100, 45 },
            { "ItemRadio", "", 3000, 980 },
            { "FirstAidKit", "", 550, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "hgun_P07_F", "", 7500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Laserdesignator", "", 3000, 980 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
            { "30Rnd_556x45_Stanag", "Weight Rifle Magazine", 45 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "RED Rifle Magazine", 45 },
            { "30Rnd_65x39_caseless_green", "", 45 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_9x21_Mag", "", 25 },
            { "11Rnd_45ACP_Mag", "", 25 },
            { "Laserbatteries", "", 45 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650 },
            { "optic_MRD", "", 1000, 45 },
            { "optic_Yorris", "", 2000, 980 },
            { "optic_NVS", "", 3000, 980 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "hgun_Pistol_heavy_02_Yorris_F", "Yorris권총", 30000, 15000 },
            { "arifle_MX_F", "", 135000, 7500 },
            { "SMG_02_ACO_F", "", 130000, 7500 },
            { "arifle_Mk20C_F", "", 230000, 7500 },
            { "SMG_01_F", "", 60000, 5000 },
            { "arifle_MX_SW_Hamr_pointer_F", "", 130000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, 100 },
            { "MineDetector", "", 1000, 500 }
        };
        mags[] = {
            { "6Rnd_45ACP_Cylinder", "", 45 },
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 },
            { "30Rnd_556x45_Stanag", "", 60 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 100 },
            { "100Rnd_65x39_caseless_mag", "", 450 },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 100}
        };
        accs[] = {
            { "acc_flashlight", "", 750, 100 },
            { "optic_ACO_grn_smg", "", 2500, 1000 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, 1000 },
            { "optic_MRCO", "", 2500, 1000 },
            { "muzzle_snds_H", "", 2750, 1000 },
            { "muzzle_snds_L", "", 2750, 1000 },
            { "muzzle_snds_M", "", 2750, 1000 },
            { "muzzle_snds_B", "", 2750, 1000 },
            { "Rangefinder", "", 2750, 1000 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "srifle_EBR_DMS_pointer_snds_F", "", 200000, 25000 },
            { "srifle_DMR_01_F", "", 350000, 25000 },
            { "LMG_Mk200_F", "", 430000, 25000 }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "", 60 },
            { "10Rnd_762x54_Mag", "", 450 },
            { "200Rnd_65x39_cased_Box", "", 1000 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 1000 }
        };
        accs[] = {
            { "optic_SOS", "", 2500, 1000 },
            { "optic_DMS", "", 30000, 5000 },
            { "optic_Hamr", "", 2500, 1000 },
            { "optic_Nightstalker", "", 25000, 1000 },
            { "acc_pointer_IR", "", 30000, 5000 }
        };
    };

    class cop_mastershop {
	name = "Altis police master Shop";
	side = "cop";
	license = "";
	level[] = { "life_coplevel", "SCALAR", 4, "You must be a master Rank!" };
	items[] = {
	    { "srifle_GM6_F", "", 600000, 25000 },
	    { "srifle_LRR_LRPS_F", "", 600000, 25000 },
	    { "LMG_Zafir_pointer_F", "", 700000, 25000 },
	    { "launch_Titan_F", "", 700000, 25000 },
	    { "launch_B_Titan_short_F", "", 800000, 25000 }
	};
	mags[] = {
	    { "5Rnd_127x108_Mag", "", 450 },
	    { "5Rnd_127x108_APDS_Mag", "", 450 },
	    { "7Rnd_408_Mag", "", 450 },
	    { "150Rnd_762x54_Box", "", 1450 },
	    { "150Rnd_762x54_Box_Tracer", "", 1450 },
	    { "Titan_AA", "", 10000 },
	    { "Titan_AT", "", 10000 },
	    { "Titan_AP", "", 10000 }
	};
	accs[] = {
	    { "optic_LRPS", "", 2500, 1000 },
	    { "optic_Hamr", "", 2500, 1000 },
	    { "optic_tws", "", 2500, 1000 },
	    { "acc_pointer_IR", "", 30000, 5000 }
	};
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "FirstAidKit", "", 550, 65 },
            { "NVGoggles", "", 1200, 980 },
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, 50 },
            { "hgun_P07_F", "Pistol", 35000, 2000 },
            { "ItemMap", "", 250, 35 },
            { "Medikit", "", 1000, 35 },
            { "ItemRadio", "", 2500, 25 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, 10 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 55 }
        };
        accs[] = {};
    };
};
