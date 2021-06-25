//---------------------------------------------------------------------------------------------
// Servants Of Sauron Class
//---------------------------------------------------------------------------------------------
CreateAHeroClass	
	NameTag			= CreateAHero:ClassName_OlogHai
	DescriptionTag		= CreateAHero:ClassDesc_OlogHai
	PowersDescTag		= CreateAHero:ClassPowersDesc_OlogHai
	UpgradeName			= Upgrade_CreateAHero_ClassOlogHai
	IconImage	   = CPTroll ;Archetype_OlogHai
																						
	SubClass	// Troll
		NameTag			  =	CreateAHero:SubClassName_Troll
		DescriptionTag	  =	CreateAHero:SubClassDesc_Troll
		IconImage         = CPTroll
		ButtonImage       = HICAHTroll
		//DefaultFaction              = Mordor 
		UsableFactions              = Isengard Mordor Wild Angmar
		SpendableAttributePoints        = 20
		// In UI it should be  		=  HICAHTroll_wotr

		UpgradeName			  =	Upgrade_CreateAHero_SubClass_0
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = ScourgeOfMiddleEarth


		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW12 Upgrade_CHW13 Upgrade_CHW14 Upgrade_CHW15 Upgrade_CHW29 Upgrade_CHW30
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_TRLL_CHH01 @Upgrade_TRLL_CHH02 Upgrade_TRLL_CHH03 Upgrade_TRLL_CHH08
		//-------------------------------
		// Shoulder	Plates
		BlingUpgrades = Upgrade_NoShoulderPlates Upgrade_TRLL_CHSP01 Upgrade_TRLL_CHSP02 Upgrade_TRLL_CHSP03 Upgrade_TRLL_CHSP04 Upgrade_TRLL_CHSP05 Upgrade_TRLL_CHSP06
		//-------------------------------
		// Gauntlets
		BlingUpgrades = Upgrade_NoGauntlets Upgrade_TRLL_CHG01 Upgrade_TRLL_CHG02 Upgrade_TRLL_CHG03 Upgrade_TRLL_CHG04 Upgrade_TRLL_CHG05 Upgrade_TRLL_CHG10
		//-------------------------------
		// Shield
		BlingUpgrades = Upgrade_NoShield
		//-------------------------------
		// Boots
		BlingUpgrades = Upgrade_NoBoots Upgrade_TRLL_CHBO01
		//-------------------------------
		// Body
		BlingUpgrades = Upgrade_URUK_CHBOD01 Upgrade_TRLL_CHBOD02
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute03
			MaxValueUpgrade		= Upgrade_ArmorAttribute17
			DefaultValueUpgrade	= Upgrade_ArmorAttribute09
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute13
			MaxValueUpgrade		= Upgrade_DamageMultAttribute20
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute18
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute02
			MaxValueUpgrade		= Upgrade_HealthMultAttribute13
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute09
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute07
			MaxValueUpgrade		= Upgrade_AutoHealAttribute20
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute09
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute02
			MaxValueUpgrade		= Upgrade_VisionAttribute08
			DefaultValueUpgrade	= Upgrade_VisionAttribute02
		End
        

		// Camera used to view object with in create a hero
		ViewInfo
				FarPitch  = -0.106
		        FarZoom   = 0.192
		        FarFloor  = 15.760
		        FarDist   = 56.500
		        FarShift  = 13.000
		        NearPitch = -0.046
		        NearZoom  = 0.262
		        NearFloor = 78.260
		        NearDist  = 56.000
		        NearShift = 6.300
		        CloseUpPitch = -0.330
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 96.000
		        CloseUpShift = -1.700
		        PortraitPitch = -0.090
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 152.00
		        PortraitShift = -1.20
		        //NormalCam = 1.00

			
			CameraAngle	= -0.1
			MapLocation	= 0	   
		End
	End
	
	SubClass	// Snow Troll
		NameTag			  =	CreateAHero:SubClassName_SnowTroll
		DescriptionTag	  =	CreateAHero:SubClassDesc_SnowTroll
		IconImage         = KUSnowTrollPortrait
		ButtonImage       = WOR_SnowTrollIcon
		//DefaultFaction              = Angmar 
		UsableFactions              = Isengard Mordor Wild Angmar
		SpendableAttributePoints        = 20
		// In UI it should be  		=  HICAHTroll_wotr

		UpgradeName			  =	Upgrade_CreateAHero_SubClass_1
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = ScourgeOfMiddleEarth


		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW33 Upgrade_CHW34 Upgrade_CHW42
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_TRLL_CHH04 Upgrade_TRLL_CHH05 Upgrade_TRLL_CHH06 Upgrade_TRLL_CHH07 Upgrade_TRLL_CHH08
		//-------------------------------
		// Shoulder	Plates
		BlingUpgrades = Upgrade_NoShoulderPlates Upgrade_TRLL_CHSP02
		//-------------------------------
		// Gauntlets
		BlingUpgrades = Upgrade_NoGauntlets Upgrade_TRLL_CHG06 Upgrade_TRLL_CHG07 Upgrade_TRLL_CHG08 Upgrade_TRLL_CHG09 Upgrade_TRLL_CHG10
		//-------------------------------
		// Shield
		BlingUpgrades = Upgrade_NoShield
		//-------------------------------
		// Boots
		BlingUpgrades = Upgrade_NoBoots Upgrade_TRLL_CHBO01
		//-------------------------------
		// Body
		//BlingUpgrades = Upgrade_TRLL_CHBOD01 // Upgrade_URUK_CHBOD01 Upgrade_TRLL_CHBOD01 Upgrade_TRLL_CHBOD02
		BlingUpgrades = @Upgrade_TRLL_CHBOD05 Upgrade_TRLL_CHBOD06 Upgrade_TRLL_CHBOD08 Upgrade_TRLL_CHBOD09 Upgrade_TRLL_CHBOD04 Upgrade_TRLL_CHBOD07 Upgrade_TRLL_CHBOD01 Upgrade_TRLL_CHBOD02
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute05
			MaxValueUpgrade		= Upgrade_ArmorAttribute17
			DefaultValueUpgrade	= Upgrade_ArmorAttribute11
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute10
			MaxValueUpgrade		= Upgrade_DamageMultAttribute17
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute15
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute02
			MaxValueUpgrade		= Upgrade_HealthMultAttribute13
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute09
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute05
			MaxValueUpgrade		= Upgrade_AutoHealAttribute20
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute07
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute04
			MaxValueUpgrade		= Upgrade_VisionAttribute10
			DefaultValueUpgrade	= Upgrade_VisionAttribute04
		End


		// Camera used to view object with in create a hero
		ViewInfo
		        FarPitch  = -0.036
		        FarZoom   = 0.192
		        FarFloor  = 15.760
		        FarDist   = 56.500
		        FarShift  = 15.000
		        NearPitch = 0.334
		        NearZoom  = 0.262
		        NearFloor = 78.260
		        NearDist  = 56.000
		        NearShift = 6.300
		        CloseUpPitch = -0.200
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 66.000
		        CloseUpShift = -1.700
		        PortraitPitch = -0.020
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 96.00
		        PortraitShift = -1.20
		        //NormalCam = 0.50

			CameraAngle	= -0.1
			MapLocation	= 0	   
		End
	End
	
	SubClass	// Hill Troll
		NameTag			  =	CreateAHero:SubClassName_HillTroll
		DescriptionTag	  =	CreateAHero:SubClassDesc_HillTroll
		IconImage         = KUHillTrollPortrait
		ButtonImage       = WOR_HillTrollIcon
		//DefaultFaction              = Angmar 
		UsableFactions              = Isengard Mordor Wild Angmar
		SpendableAttributePoints        = 20
		// In UI it should be  		=  HICAHTroll_wotr

		UpgradeName			  =	Upgrade_CreateAHero_SubClass_2
		//-------------------------------
		// Awards common to all heros.
		#include "CreateAHeroSystemCommonStatsAndAwards.inc"
		// Class specific awards
		Awards = ScourgeOfMiddleEarth


		//-------------------------------
		// Weapons
		BlingUpgrades		  =	Upgrade_CHW33 Upgrade_CHW34 Upgrade_CHW42
		//-------------------------------
		// Head	Gear
		BlingUpgrades = Upgrade_NoHelmet Upgrade_TRLL_CHH04 Upgrade_TRLL_CHH05 Upgrade_TRLL_CHH06 Upgrade_TRLL_CHH07 Upgrade_TRLL_CHH08
		//-------------------------------
		// Shoulder	Plates
		BlingUpgrades = Upgrade_NoShoulderPlates Upgrade_TRLL_CHSP02
		//-------------------------------
		// Gauntlets
		BlingUpgrades = Upgrade_NoGauntlets Upgrade_TRLL_CHG06 Upgrade_TRLL_CHG07 Upgrade_TRLL_CHG08 Upgrade_TRLL_CHG09 Upgrade_TRLL_CHG10
		//-------------------------------
		// Shield
		BlingUpgrades = Upgrade_NoShield
		//-------------------------------
		// Boots
		BlingUpgrades = Upgrade_NoBoots Upgrade_TRLL_CHBO01
		//-------------------------------
		// Body
		BlingUpgrades = @Upgrade_TRLL_CHBOD05 Upgrade_TRLL_CHBOD06 Upgrade_TRLL_CHBOD07 Upgrade_TRLL_CHBOD08 Upgrade_TRLL_CHBOD09 Upgrade_TRLL_CHBOD04 Upgrade_TRLL_CHBOD01 Upgrade_TRLL_CHBOD02
		DefaultPrimaryColor	  =	R:160 G:160 B:160
		DefaultSecondaryColor =	R:160 G:160 B:160
		DefaultTertiaryColor  =	R:160 G:160 B:160

		Attribute
			GroupName			= CreateAHero_ArmorAttribute
			MinValueUpgrade		= Upgrade_ArmorAttribute06
			MaxValueUpgrade		= Upgrade_ArmorAttribute20
			DefaultValueUpgrade	= Upgrade_ArmorAttribute12
		End
		
		Attribute
			GroupName			= CreateAHero_DamageMultAttribute
			MinValueUpgrade		= Upgrade_DamageMultAttribute13
			MaxValueUpgrade		= Upgrade_DamageMultAttribute20
			DefaultValueUpgrade	= Upgrade_DamageMultAttribute18
		End

		Attribute
			GroupName			= CreateAHero_HealthMultAttribute
			MinValueUpgrade		= Upgrade_HealthMultAttribute04
			MaxValueUpgrade		= Upgrade_HealthMultAttribute15
			DefaultValueUpgrade	= Upgrade_HealthMultAttribute11
		End

		Attribute
			GroupName			= CreateAHero_AutoHealAttribute
			MinValueUpgrade		= Upgrade_AutoHealAttribute05
			MaxValueUpgrade		= Upgrade_AutoHealAttribute20
			DefaultValueUpgrade	= Upgrade_AutoHealAttribute07
		End

		Attribute
			GroupName			= CreateAHero_VisionAttribute
			MinValueUpgrade		= Upgrade_VisionAttribute02
			MaxValueUpgrade		= Upgrade_VisionAttribute08
			DefaultValueUpgrade	= Upgrade_VisionAttribute02
		End

		// Camera used to view object with in create a hero
		ViewInfo
		        FarPitch  = -0.026
		        FarZoom   = 0.192
		        FarFloor  = 15.760
		        FarDist   = 56.500
		        FarShift  = 17.400
		        NearPitch = 0.274
		        NearZoom  = 0.262
		        NearFloor = 78.260
		        NearDist  = 56.000
		        NearShift = 6.300
		        CloseUpPitch = -0.290
		        CloseUpZoom  = 0.200
		        CloseUpFloor = 50.000
		        CloseUpDist  = 57.000
		        CloseUpShift = -0.600
		        PortraitPitch = -0.050
		        PortraitZoom  = 0.200
		        PortraitFloor = 50.000
		        PortraitDist  = 91.00
		        PortraitShift = -1.20
		        //NormalCam = 0.50

			CameraAngle	= -0.1
			MapLocation	= 0	   
		End
	End

End
