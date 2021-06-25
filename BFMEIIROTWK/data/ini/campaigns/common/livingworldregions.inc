//-------------------------------------------------------------------------------------------------
// This file is meant to be included for those campaigns that share a common region list.
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Territory definitions
//-------------------------------------------------------------------------------------------------


;////////////////////////////
;// Amon Sul
;////////////////////////////
Region Amon_Sul
	DisplayName				= LW:DisplayNameAmonSul
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR ANG Amon Sul"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Amon_Sul_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Amon_Sul
	RegionPortrait			= LWPAmonSul

	;ResourceBonus			= 0
	LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 5
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Rhudaur
			;DetourPoint = X:-505 Y:1683
			;DetourPoint = X:-505 Y:1860
		End
		Connection
			Region = Lostriand
			;DetourPoint = X:-165 Y:1683
			;DetourPoint = X:-165 Y:1810
		End
		Connection
			Region = Buckland ; North Downs
			;DetourPoint = X:-355 Y:1423
			;DetourPoint = X:-355 Y:1250
		End
		Connection
			Region = Barrow_Downs
			;DetourPoint = X:-165 Y:1563
			;DetourPoint = X:35 Y:1563
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-260 Y:1400

    HeroArmySpot				= X:-400 Y:1480
    HeroArmySpot				= X:-260 Y:1515
    HeroArmySpot				= X:-210 Y:1310
    HeroArmySpot				= X:-340 Y:1460
    GarrisonArmySpot			= X:-340 Y:1310
    BuildingSpot				= X:-160 Y:1400
    BuildingSpot				= X:-400 Y:1400
   
    CPLimit					= 480
    AllyCPLimit				= 360
        
	FortressPortrait			= BPCAmonSul
	FortressDisplayName			= LW:DisplayNameAmonSulCastle
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Angmar
;////////////////////////////
Region Angmar
	DisplayName				= LW:DisplayNameAngmar
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR ANG Angmar"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Angmar_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Angmar
	RegionPortrait			= LWPAngmar

	;ArmyBonus				= 0
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	AttackBonus				= 5
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Ettenmoors
			;DetourPoint = X:-280 Y:2000
			;DetourPoint = X:-505 Y:2000
		End
		Connection
			Region = CarnDum
			;DetourPoint = X:-165 Y:1810
			;DetourPoint = X:-165 Y:1683
		End
		Connection
			Region = Forodwaith
			;DetourPoint = X:40 Y:1950
			;DetourPoint = X:150 Y:1730
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-65 Y:2085

    HeroArmySpot				= X:-180 Y:2125
    HeroArmySpot				= X:-45 Y:2095
    HeroArmySpot				= X:85 Y:2025
    HeroArmySpot				= X:25 Y:2095
    GarrisonArmySpot			= X:-60 Y:2015
    BuildingSpot				= X:20 Y:2010
    BuildingSpot				= X:-140 Y:2085

    CPLimit					= 480
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End




;////////////////////////////
;// Arthedain (was Arnor)
;////////////////////////////
Region Arnor
	DisplayName				= LW:DisplayNameArthedain
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Arnor"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Arnor_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Arthedain
	RegionPortrait			= LWPArnor

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Buckland
			;DetourPoint = X:-505 Y:1860
			;DetourPoint = X:-505 Y:1683
		End
        Connection
			Region = Ettenmoors
			;DetourPoint = X:-505 Y:2000
			;DetourPoint = X:-280 Y:2000
		End
		Connection
			Region = Forlindon
			;DetourPoint = X:-1030 Y:2100
			;DetourPoint = X:-1258 Y:2170
		End
		Connection
			Region = Grey_Havens
			;DetourPoint = X:-1030 Y:2000
			;DetourPoint = X:-1230 Y:1865
		End
		Connection
			Region = The_Shire
			;DetourPoint = X:-800 Y:1860
			;DetourPoint = X:-800 Y:1590
		End
		Connection
			Region = Tower_Hills
			;DetourPoint = X:-1030 Y:1860
			;DetourPoint = X:-1100 Y:1625
		End
		Connection
			Region = Fornost
			;DetourPoint = X:-1030 Y:1860
			;DetourPoint = X:-1100 Y:1625
		End
		Connection
			Region = Forodwaith
			;DetourPoint = X:-1030 Y:1860
			;DetourPoint = X:-1100 Y:1625
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-760 Y:2000

    HeroArmySpot				= X:-910 Y:2075
    HeroArmySpot				= X:-760 Y:2100
    HeroArmySpot				= X:-610 Y:2075
    HeroArmySpot				= X:-1005 Y:2035
    GarrisonArmySpot			= X:-855 Y:1850
    BuildingSpot				= X:-960 Y:1925
    BuildingSpot				= X:-845 Y:1975
    BuildingSpot				= X:-690 Y:1860
    
    CPLimit					= 720		; Each territory can have a custom CP limit (default is 1000)
    AllyCPLimit				= 360		; Each territory can have a custom Ally CP limit (default is 400)
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Barrow Downs
;////////////////////////////
Region Barrow_Downs
	DisplayName				= LW:DisplayNameBarrowDowns
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR ANG Barrow Downs"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Barrow_Downs_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Barrow_Downs
	RegionPortrait			= LWPBarrowDOwns

	;ResourceBonus			= 0
	LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Tower_Hills
			;DetourPoint = X:-505 Y:1683
			;DetourPoint = X:-505 Y:1860
		End
		Connection
			Region = Buckland ; North_Downs
			;DetourPoint = X:-165 Y:1683
			;DetourPoint = X:-165 Y:1810
		End
		Connection
			Region = Amon_Sul
			;DetourPoint = X:-355 Y:1423
			;DetourPoint = X:-355 Y:1250
		End
		Connection
			Region = Rhudaur
			DetourPoint = X:-117 Y:1224
		End
		Connection
			Region = The_Shire
			;DetourPoint = X:-545 Y:1563
			;DetourPoint = X:-725 Y:1563
		End
		Connection
			Region = Cardolan
			;DetourPoint = X:-545 Y:1563
			;DetourPoint = X:-725 Y:1563
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-675 Y:1250

    HeroArmySpot				= X:-700 Y:1300
    HeroArmySpot				= X:-450 Y:1235
    HeroArmySpot				= X:-875 Y:1245
    HeroArmySpot				= X:-620 Y:1305
    GarrisonArmySpot			= X:-650 Y:1200
    BuildingSpot				= X:-565 Y:1255
    BuildingSpot				= X:-775 Y:1235
    
    CPLimit					= 480
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// North Downs (formerly Buckland)
;////////////////////////////
Region Buckland
	DisplayName				= LW:DisplayNameNorthDowns
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR ANG North Downs"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_North_Downs_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= North_Downs
	RegionPortrait			= LWPNorthDowns

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	DefenseBonus			= 5
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Arnor
			;DetourPoint = X:-505 Y:1683
			;DetourPoint = X:-505 Y:1860
		End
		Connection
			Region = Fornost
			;DetourPoint = X:-165 Y:1683
			;DetourPoint = X:-165 Y:1810
		End
		Connection
			Region = Lostriand
			;DetourPoint = X:-355 Y:1423
			;DetourPoint = X:-355 Y:1250
		End
		Connection
			Region = Amon_Sul
			;DetourPoint = X:-165 Y:1563
			;DetourPoint = X:35 Y:1563
		End
		Connection
			Region = Barrow_Downs
			;DetourPoint = X:-165 Y:1563
			;DetourPoint = X:35 Y:1563
		End
		Connection
			Region = The_Shire
			;DetourPoint = X:-545 Y:1563
			;DetourPoint = X:-725 Y:1563
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-545 Y:1583

    HeroArmySpot				= X:-505 Y:1638
    HeroArmySpot				= X:-615 Y:1515
    HeroArmySpot				= X:-555 Y:1700
    HeroArmySpot				= X:-600 Y:1655
    GarrisonArmySpot			= X:-515 Y:1500
    BuildingSpot				= X:-600 Y:1580
    BuildingSpot				= X:-420 Y:1605
    
    CPLimit					= 480
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Cair Andros
;////////////////////////////
Region Cair_Andros
	DisplayName				= LW:DisplayNameCairAndros
	ConqueredNotice				= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Cair Andros"
	;MovieNameFirstTime				= GoodCairAndros_Intro
	;MovieNameRepeat					= GoodCairAndros_Intro
	SkirmishStillImage			= WOR_Cair_Andros_Loadscreen
	;SkirmishVoiceTrack				= GoodIntroCairAndros1
	SkirmishMusicTrack				= Shell2MusicForLoadScreen
	SubObject				= Cair_Andros
	RegionPortrait				= LWPCairAndros  

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	DefenseBonus			= 5
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=   
        Connection
			Region = Minas_Tirith
			;DetourPoint = X:1210 Y:180
			;DetourPoint = X:1210 Y:80
	    End
        Connection
			Region = Osgiliath
			;DetourPoint = X:1410 Y:160
			;DetourPoint = X:1490 Y:60
	    End
		Connection
			Region = Rohan
			;DetourPoint = X:980 Y:228
			;DetourPoint = X:889 Y:346
	    End
	    Connection
			Region = The_Dead_Marshes
			;DetourPoint = X:1210 Y:275
			;DetourPoint = X:1400 Y:490
		End
	    Connection
			Region = The_Brown_Lands
			;DetourPoint = X:1210 Y:275
			;DetourPoint = X:1400 Y:490
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:1210 Y:200

	HeroArmySpot				= X:1060 Y:200
	HeroArmySpot				= X:1160 Y:200
	HeroArmySpot				= X:1260 Y:200
	HeroArmySpot				= X:1090 Y:275
	GarrisonArmySpot			= X:1325 Y:160
	BuildingSpot				= X:1160 Y:275
	BuildingSpot				= X:975 Y:250

    CPLimit					= 480
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Cardolan
;////////////////////////////
Region Cardolan
	DisplayName				= LW:DisplayNameCardolan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Cardolan"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Cardolan_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Cardolan
	RegionPortrait			= LWPCardolan

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Barrow_Downs
			;DetourPoint = X:-505 Y:1683
			;DetourPoint = X:-505 Y:1860
		End
		Connection
			Region = Rhudaur
		End
		Connection
			Region = Dunland
			;DetourPoint = X:-355 Y:1423
			;DetourPoint = X:-355 Y:1250
		End
		Connection
			Region = Enedwaith
			;DetourPoint = X:-165 Y:1563
			;DetourPoint = X:35 Y:1563
		End
		Connection
			Region = Minhiriath
			;DetourPoint = X:-545 Y:1563
			;DetourPoint = X:-725 Y:1563
		End
		Connection
			Region = Tower_Hills
			;DetourPoint = X:-545 Y:1563
			;DetourPoint = X:-725 Y:1563
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-520 Y:1000

    HeroArmySpot				= X:-755 Y:1015
    HeroArmySpot				= X:-650 Y:1075
    HeroArmySpot				= X:-480 Y:1100
    HeroArmySpot				= X:-375 Y:1065
    GarrisonArmySpot			= X:-455 Y:965
    BuildingSpot				= X:-655 Y:970
    BuildingSpot				= X:-520 Y:915
    BuildingSpot				= X:-265 Y:1095
    
    CPLimit					= 720
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Carn Dum
;////////////////////////////
Region CarnDum
	DisplayName				= LW:DisplayNameCarnDum
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR ANG Carn Dum"
	;MovieNameFirstTime		= Good_Lothlorien_Intro
	;MovieNameRepeat		= Good_Lothlorien_Intro
	SkirmishStillImage		= WOR_CarnDum_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Carn_Dum
	RegionPortrait			= LWPCarnDum

	;ResourceBonus			= 0
	LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Angmar
		End
        Connection
			Region = Forodwaith
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-155 Y:2295

    HeroArmySpot				= X:-260 Y:2260
    HeroArmySpot				= X:-190 Y:2225
    HeroArmySpot				= X:-125 Y:2210
    HeroArmySpot				= X:-75 Y:2310
    GarrisonArmySpot				= X:-50 Y:2220
    BuildingSpot				= X:-290 Y:2330

     CPLimit					= 600
    AllyCPLimit				= 360
        
	CreateAutoFort				= Yes		// This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCCarnDum
	FortressDisplayName			= LW:DisplayNameCarnDumCastle
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Carrock
;////////////////////////////
Region Carrock
	DisplayName				= LW:DisplayNameCarrock
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Carrock"
	;MovieNameFirstTime		= Good_Lothlorien_Intro
	;MovieNameRepeat		= Good_Lothlorien_Intro
	SkirmishStillImage		= WOR_Carrock_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Carrock
	RegionPortrait			= LWPCarrock

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	ExperienceBonus			= 5
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = High_Pass
			;DetourPoint = X:825 Y:1490
			;DetourPoint = X:675 Y:1700
		End
        Connection
			Region = Mirkwood
			;DetourPoint = X:945 Y:1470
			;DetourPoint = X:1290 Y:1575
		End
        Connection
			Region = Lothlorien
			;DetourPoint = X:650 Y:1175
			;DetourPoint = X:510 Y:1175
		End
        Connection
			Region = MountGundabad
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:580 Y:1885

    HeroArmySpot				= X:445 Y:2070
    HeroArmySpot				= X:545 Y:1975
    HeroArmySpot				= X:625 Y:2045
    HeroArmySpot				= X:740 Y:1760
    GarrisonArmySpot			= X:605 Y:1860
    BuildingSpot				= X:660 Y:1710
    BuildingSpot				= X:810 Y:1715

    CPLimit					= 480
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Celduin
;////////////////////////////
Region Celduin
	DisplayName				= LW:DisplayNameCelduin
	ConqueredNotice				= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Celduin"
	;MovieNameFirstTime				= Good_Isengard_Intro
	;MovieNameRepeat					= Good_Isengard_Intro
	SkirmishStillImage			= WOR_Celduin_Loadscreen
	;SkirmishVoiceTrack				= GoodIntroIsengard1
	SkirmishMusicTrack				= Shell2MusicForLoadScreen
	SubObject				= Celduin
	RegionPortrait				= LWPCelduin

	ResourceBonus			= 10
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
		Region = Dagorlad
			;DetourPoint = X:1920 Y:1455
			;DetourPoint = X:1920 Y:1300
		End
		Connection
		Region = Erebor
			;DetourPoint = X:1845 Y:1695
			;DetourPoint = X:1780 Y:1850
		End
		Connection
		Region = Iron_Hills
			;DetourPoint = X:2090 Y:1670
			;DetourPoint = X:2270 Y:1780
		End
        Connection
		Region = Mirkwood
			;DetourPoint = X:1730 Y:1575
			;DetourPoint = X:1290 Y:1575
		End
		Connection
		Region = Rhun
			;DetourPoint = X:2090 Y:1575
			;DetourPoint = X:2410 Y:1450
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:1920 Y:1575

        HeroArmySpot				= X:1770 Y:1650
        HeroArmySpot				= X:1920 Y:1675
        HeroArmySpot				= X:2070 Y:1650
    	HeroArmySpot				= X:1670 Y:1695
        GarrisonArmySpot			= X:1920 Y:1475
        BuildingSpot				= X:1770 Y:1500
        BuildingSpot				= X:2070 Y:1500

        CPLimit					= 480
        AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Dagorlad
;////////////////////////////
Region Dagorlad
	DisplayName				= LW:DisplayNameDagorlad
	ConqueredNotice				= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dagorlad"
	;MovieNameFirstTime				= GoodDagorlad_Intro
	;MovieNameRepeat					= GoodDagorlad_Intro
	SkirmishStillImage			= WOR_Dagorlad_Loadscreen
	;SkirmishVoiceTrack				= GoodIntroDagorlad1
	SkirmishMusicTrack				= Shell2MusicForLoadScreen
	SubObject				= Dagorlad
	RegionPortrait				= LWPDagorlad

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	AttackBonus			= 5
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
		Region = Celduin
			;DetourPoint = X:1920 Y:1300
			;DetourPoint = X:1920 Y:1455
		End
		Connection
		Region = Dol_Guldur
			;DetourPoint = X:1700 Y:1100
			;DetourPoint = X:1395 Y:1100
		End
        Connection
		Region = Mirkwood
			;DetourPoint = X:1700 Y:1200
			;DetourPoint = X:1290 Y:1575
		End
		Connection
		Region = Rhun
			;DetourPoint = X:2165 Y:1060
			;DetourPoint = X:2450 Y:1060
		End
		Connection
		Region = The_Dead_Marshes
			;DetourPoint = X:1790 Y:901
			;DetourPoint = X:1595 Y:769
		End
		Connection
		Region = The_Brown_Lands
			;DetourPoint = X:1210 Y:275
			;DetourPoint = X:1400 Y:490
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:1975 Y:1060

        HeroArmySpot				= X:1825 Y:1135
        HeroArmySpot				= X:1975 Y:1160
        HeroArmySpot				= X:2125 Y:1135
    	HeroArmySpot				= X:1700 Y:1125
        GarrisonArmySpot			= X:1975 Y:960
        BuildingSpot				= X:1825 Y:985
        BuildingSpot				= X:2125 Y:985

        CPLimit					= 480
        AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Dol Guldur
;////////////////////////////
Region Dol_Guldur
	DisplayName				= LW:DisplayNameDolGuldur
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dol Guldur"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Dol_Guldur_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Dol_Guldur
	RegionPortrait			= LWPDolGuldor

	;ResourceBonus			= 0
	LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Dagorlad
			;DetourPoint = X:1395 Y:1100
			;DetourPoint = X:1700 Y:1100
		End
        Connection
			Region = Fangorn
			;DetourPoint = X:1070 Y:1002
			;DetourPoint = X:920 Y:853
		End
		Connection
			Region = Lothlorien
			;DetourPoint = X:1065 Y:1100
			;DetourPoint = X:945 Y:1225
		End
        Connection
			Region = Mirkwood
			;DetourPoint = X:1230 Y:1215
			;DetourPoint = X:1290 Y:1575
		End
		Connection
			Region = The_Brown_Lands
			;DetourPoint = X:1230 Y:985
			;DetourPoint = X:1400 Y:770
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:1230 Y:1100

    HeroArmySpot				= X:1230 Y:1175
    HeroArmySpot				= X:1355 Y:1150
    HeroArmySpot				= X:1105 Y:1050        
    HeroArmySpot				= X:1425 Y:1110
    GarrisonArmySpot			= X:1230 Y:1025
	BuildingSpot				= X:1355 Y:1050

    CPLimit					= 600
    AllyCPLimit				= 360
        
	CreateAutoFort				= Yes		// This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCDolGuldurCastle
	FortressDisplayName			= LW:DisplayNameDolGuldur		; OBJECT:DolGoldurCastle
	FortressDisplayDescription		= CONTROLBAR:LW_ToolTip_GenericStronghold
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Dunland
;////////////////////////////
Region Dunland
	DisplayName				= LW:DisplayNameDunland
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dunland"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Dunland_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Dunland
	RegionPortrait			= LWPDunland

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	AttackBonus				= 5
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Enedwaith
			;DetourPoint = X:-280 Y:850
			;DetourPoint = X:-360 Y:625
		End
		Connection
			Region = Gap_Of_Rohan
			;DetourPoint = X:-85 Y:810
			;DetourPoint = X:-85 Y:540
		End
        Connection
			Region = Isengard
			;DetourPoint = X:-85 Y:810
			;DetourPoint = X:70 Y:720
		End
		Connection
			Region = Cardolan
			;DetourPoint = X:-190 Y:950
			;DetourPoint = X:-420 Y:1060
		End
        Connection
			Region = Rhudaur
			;DetourPoint = X:120 Y:1140
			;DetourPoint = X:300 Y:1200
		End
		Connection
			Region = Rivendell
			;DetourPoint = X:50 Y:1140
			;DetourPoint = X:50 Y:1360
		End
		Connection
			Region = Redhorn_Pass
			;DetourPoint = X:300 Y:1200
			;DetourPoint = X:120 Y:1140
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-60 Y:950

    HeroArmySpot				= X:-20 Y:1100
    HeroArmySpot				= X:120 Y:1100
    HeroArmySpot				= X:-150 Y:950
    HeroArmySpot				= X:90 Y:1020
    GarrisonArmySpot			= X:30 Y:950
    BuildingSpot				= X:-240 Y:850
    BuildingSpot				= X:-20 Y:850

    CPLimit					= 480
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Enedwaith
;////////////////////////////
Region Enedwaith
	DisplayName				= LW:DisplayNameEnedwaith
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Enedwaith"
	;MovieNameFirstTime		= EvilEdendwaith_Intro
	;MovieNameRepeat		= EvilEdendwaith_Intro
	SkirmishStillImage		= WOR_Enedwaith_Loadscreen
	;SkirmishVoiceTrack		= EvilIntroEnedwaith1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Enedwaith
	RegionPortrait			= LWPEnedwaith   

	ResourceBonus			= 10
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Dunland
			;DetourPoint = X:-360 Y:625
			;DetourPoint = X:-280 Y:850
		End
        Connection
			Region = Gap_Of_Rohan
			;DetourPoint = X:-360 Y:465
			;DetourPoint = X:-85 Y:540
		End
        Connection
			Region = Anfalas
			;DetourPoint = X:-356 Y:162
			;DetourPoint = X:-296 Y:-98
	        End
        Connection
			Region = Helms_Deep
			;DetourPoint = X:-100 Y:290
			;DetourPoint = X:5 Y:290
		End
		Connection
			Region = Minhiriath
			;DetourPoint = X:-510 Y:625
			;DetourPoint = X:-700 Y:800
		End
		Connection
			Region = Cardolan
			;DetourPoint = X:-510 Y:625
			;DetourPoint = X:-700 Y:800
		End
	
	CustomCenterPoint			= Yes
    CenterPoint				= X:-360 Y:325

    HeroArmySpot				= X:-510 Y:400
	HeroArmySpot				= X:-360 Y:425
	HeroArmySpot				= X:-210 Y:400
    HeroArmySpot				= X:-300 Y:590
	GarrisonArmySpot			= X:-360 Y:225
	BuildingSpot				= X:-510 Y:250
	BuildingSpot				= X:-210 Y:250

    CPLimit					= 480
    AllyCPLimit				= 360
    
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Erebor
;////////////////////////////
Region Erebor
	DisplayName				= LW:DisplayNameErebor
	ConqueredNotice				= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Erebor"
	;MovieNameFirstTime				= Good_Isengard_Intro
	;MovieNameRepeat					= Good_Isengard_Intro
	SkirmishStillImage			= WOR_Erebor_Loadscreen
	;SkirmishVoiceTrack				= GoodIntroIsengard1
	SkirmishMusicTrack				= Shell2MusicForLoadScreen
	SubObject				= Erebor
	RegionPortrait				= LWPErebor

	;ArmyBonus			= 0
	;ResourceBonus			= 0
	LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Celduin
			;DetourPoint = X:1780 Y:1850
			;DetourPoint = X:1845 Y:1695
		End
		Connection
			Region = Iron_Hills
			;DetourPoint = X:1895 Y:1925
			;DetourPoint = X:2200 Y:1925
		End
		Connection
			Region = Mirkwood
			;DetourPoint = X:1365 Y:1900
			;DetourPoint = X:1190 Y:1900
		End

	CustomCenterPoint			= Yes
    CenterPoint				= X:1628 Y:1925

    HeroArmySpot				= X:1405 Y:2000
    HeroArmySpot				= X:1550 Y:2000
    HeroArmySpot				= X:1705 Y:2000
    HeroArmySpot				= X:1895 Y:1895
    GarrisonArmySpot			= X:1855 Y:2000
	BuildingSpot				= X:1780 Y:1925
    
    CPLimit					= 600
    AllyCPLimit				= 360

	CreateAutoFort				= Yes		// This region can defend itself, no need to build a fort.	
	FortressPortrait			= BPCThroneofErebor
	FortressDisplayName			= LW:DisplayNameErebor		; OBJECT:ThroneOfErebor
	FortressDisplayDescription		= CONTROLBAR:LW_ToolTip_GenericStronghold
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Ettenmoors
;////////////////////////////
Region Ettenmoors
	DisplayName				= LW:DisplayNameEttenmoors
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Ettenmoors"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Ettenmoors_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Ettenmoors
	RegionPortrait			= LWPEttenmoors

	;ArmyBonus				= 0
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	DefenseBonus			= 5
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Angmar
			;DetourPoint = X:-280 Y:2000
			;DetourPoint = X:-505 Y:2000
		End
		Connection
			Region = Rhudaur
			;DetourPoint = X:-165 Y:1810
			;DetourPoint = X:-165 Y:1683
		End
		Connection
			Region = Lostriand
			;DetourPoint = X:40 Y:1950
			;DetourPoint = X:150 Y:1730
		End
		Connection
			Region = Fornost
			;DetourPoint = X:40 Y:1950
			;DetourPoint = X:150 Y:1730
		End
		Connection
			Region = Arnor
			;DetourPoint = X:40 Y:1950
			;DetourPoint = X:150 Y:1730
		End
		Connection
			Region = Forodwaith
			;DetourPoint = X:40 Y:1950
			;DetourPoint = X:150 Y:1730
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-137 Y:1900

    HeroArmySpot				= X:-325 Y:2055
    HeroArmySpot				= X:-120 Y:1835
    HeroArmySpot				= X:80 Y:1881
    HeroArmySpot				= X:-200 Y:1915
    GarrisonArmySpot			= X:-210 Y:1995
    BuildingSpot				= X:-210 Y:1840
    BuildingSpot				= X:-20 Y:1820

    CPLimit					= 480
    AllyCPLimit				= 360
    
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Fangorn
;////////////////////////////
Region Fangorn
	DisplayName				= LW:DisplayNameFangorn
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Fangorn"
	;MovieNameFirstTime		= GoodFangorn_Intro
	;MovieNameRepeat		= GoodFangorn_Intro
	SkirmishStillImage		= WOR_Fangorn_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroFangorn1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Fangorn
	RegionPortrait			= LWPFangorn

	;ArmyBonus			= 0
	ResourceBonus			= 10
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS


	ConnectsTo				=
        Connection
			Region = Dol_Guldur
			;DetourPoint = X:920 Y:853
			;DetourPoint = X:1070 Y:1002
		End
        Connection
			Region = Gap_Of_Rohan
			;DetourPoint = X:405 Y:700
			;DetourPoint = X:405 Y:460
	        End
        Connection
			Region = Isengard
			;DetourPoint = X:405 Y:700
			;DetourPoint = X:250 Y:660
		End
		Connection
			Region = Lothlorien
			;DetourPoint = X:725 Y:915
			;DetourPoint = X:725 Y:1110
		End
		Connection
			Region = Rohan
			;DetourPoint = X:725 Y:725
			;DetourPoint = X:770 Y:600
		End
        Connection
			Region = The_Brown_Lands
			;DetourPoint = X:920 Y:853
			;DetourPoint = X:1155 Y:783
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:660 Y:800

    HeroArmySpot				= X:535 Y:825
    HeroArmySpot				= X:660 Y:875
    HeroArmySpot				= X:785 Y:875
    HeroArmySpot				= X:880 Y:860
    GarrisonArmySpot			= X:660 Y:725
    BuildingSpot				= X:535 Y:725
    BuildingSpot				= X:785 Y:775

    CPLimit					= 480
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Forlindon
;////////////////////////////
Region Forlindon
	DisplayName				= LW:DisplayNameForlindon
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Forlindon"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Forlindon_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Forlindon
	RegionPortrait			= LWPForlindon

	;ArmyBonus			= 0
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	ExperienceBonus			= 5
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Arnor
			;DetourPoint = X:-1258 Y:2170
			;DetourPoint = X:-1030 Y:2100
		End
		Connection
			Region = Grey_Havens
			;DetourPoint = X:-1258 Y:2170
			;DetourPoint = X:-1330 Y:1905
		End

	CustomCenterPoint			= Yes
    CenterPoint				= X:-1680 Y:2050

    HeroArmySpot				= X:-1342 Y:2250
    HeroArmySpot				= X:-1174 Y:2250
    HeroArmySpot				= X:-2024 Y:1790
    HeroArmySpot				= X:-1255 Y:2300
    GarrisonArmySpot			= X:-1856 Y:1790
    BuildingSpot				= X:-1960 Y:1640
    BuildingSpot				= X:-1278 Y:2100

    CPLimit					= 480
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Fornost
;////////////////////////////
Region Fornost
	DisplayName				= LW:DisplayNameFornost
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR ANG Fornost"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Fornost_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Fornost
	RegionPortrait			= LWPFornost

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	DefenseBonus			= 5
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Arnor
			;DetourPoint = X:-505 Y:1683
			;DetourPoint = X:-505 Y:1860
		End
		Connection
			Region = Ettenmoors
			;DetourPoint = X:-165 Y:1683
			;DetourPoint = X:-165 Y:1810
		End
		Connection
			Region = Lostriand
			;DetourPoint = X:-355 Y:1423
			;DetourPoint = X:-355 Y:1250
		End
		Connection
			Region = Buckland
			;DetourPoint = X:-165 Y:1563
			;DetourPoint = X:35 Y:1563
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-415 Y:1835

    HeroArmySpot				= X:-550 Y:1920
    HeroArmySpot				= X:-490 Y:1950
    HeroArmySpot				= X:-450 Y:1750
    HeroArmySpot				= X:-300 Y:1770
    GarrisonArmySpot			= X:-390 Y:1760
    BuildingSpot				= X:-510 Y:1850
   
    CPLimit					= 600
    AllyCPLimit				= 360
        
	CreateAutoFort				= Yes		// This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCFornost
	FortressDisplayName			= LW:DisplayNameFornostCastle		; OBJECT:DolGoldurCastle
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End

;////////////////////////////
;// Forodwaith
;////////////////////////////
Region Forodwaith
	DisplayName			= LW:DisplayNameForodwaith
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				= "MAP WOR Forodwaith"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Forodwaith_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject			= Forodwaith
	RegionPortrait			= LWPForodwaith

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	AttackBonus			= 5
	;DefenseBonus			= 5
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Arnor
		End
		Connection
			Region = Ettenmoors
		End
		Connection
			Region = Angmar
		End
		Connection
			Region = MountGundabad
			DetourPoint = X:-10 Y:2480
		End
		Connection
			Region = CarnDum
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-465 Y:2340

    HeroArmySpot				= X:-430 Y:2450
    HeroArmySpot				= X:-385 Y:2500
    HeroArmySpot				= X:40 Y:2480
    HeroArmySpot				= X:-475 Y:2420
    GarrisonArmySpot			= X:135 Y:2480
    BuildingSpot				= X:-645 Y:2355
    BuildingSpot				= X:-500 Y:2350
   
    CPLimit					= 480
    AllyCPLimit				= 360
        
	CreateAutoFort				= No
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Gap of Rohan
;////////////////////////////
Region Gap_Of_Rohan
	DisplayName				= LW:DisplayNameGapofRohan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Gap of Rohan"
	;MovieNameFirstTime		= EvilGapOfRohan_Intro
	;MovieNameRepeat		= EvilGapOfRohan_Intro
	SkirmishStillImage		= WOR_Gap_Of_Rohan_Loadscreen
	;SkirmishVoiceTrack		= EvilIntroGapOfRohan1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Gap_Of_Rohan
	RegionPortrait			= LWPGapofRohan

	;ArmyBonus				= 0
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS


	ConnectsTo				=
        Connection
			Region = Dunland
			;DetourPoint = X:-85 Y:540
			;DetourPoint = X:-85 Y:810
		End
		Connection
			Region = Enedwaith
			;DetourPoint = X:-85 Y:540
			;DetourPoint = X:-360 Y:465			
		End
        Connection
			Region = Fangorn
			;DetourPoint = X:405 Y:460
			;DetourPoint = X:405 Y:700
	        End
	    Connection
			Region = Helms_Deep
			;DetourPoint = X:140 Y:460
			;DetourPoint = X:140 Y:380
		End
		Connection
			Region = Isengard
			;DetourPoint = X:140 Y:460
			;DetourPoint = X:140 Y:580
		End
        Connection
			Region = Rohan
			;DetourPoint = X:405 Y:460
			;DetourPoint = X:580 Y:460
	    End

	CustomCenterPoint			= Yes
	CenterPoint				= X:140 Y:460
        
	HeroArmySpot				= X:-85 Y:500
    HeroArmySpot				= X:65 Y:460
    HeroArmySpot				= X:215 Y:460
    HeroArmySpot				= X:-115 Y:620
    GarrisonArmySpot			= X:415 Y:460
    BuildingSpot				= X:365 Y:505
    
    CPLimit					= 360
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Anfalas (formerly part of Gondor)
;////////////////////////////
Region Anfalas
	DisplayName				= LW:DisplayNameAnfalas
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map mp anfalas"
	;MovieNameFirstTime		= EvilBelfalas_Intro
	;MovieNameRepeat		= EvilBelfalas_Intro
	SkirmishStillImage		= WOR_Anfalas_Loadscreen ; need Anfalas
	;SkirmishVoiceTrack		= EvilIntroBelfalas1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Anfalas
	RegionPortrait			= LWPAnfalas

	;ArmyBonus				= 0
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	DefenseBonus			= 5
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection	
			Region = Enedwaith
			;DetourPoint = X:-296 Y:-98
			;DetourPoint = X:-356 Y:162
		End
		Connection	
			Region = Belfalas
			;DetourPoint = X:-296 Y:-98
			;DetourPoint = X:-356 Y:162
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-150 Y:-135

	HeroArmySpot				= X:-300 Y:-260
	HeroArmySpot				= X:00 Y:-260
	HeroArmySpot				= X:135 Y:-205
    HeroArmySpot				= X:-345 Y:-125
	GarrisonArmySpot			= X:-140 Y:-135
	BuildingSpot				= X:-150 Y:-230
	BuildingSpot				= X:-430 Y:-300

    CPLimit					= 480
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Belfalas (also formerly Gondor)
;////////////////////////////
Region Belfalas
	DisplayName				= LW:DisplayNameBelfalas
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Belfalas"
	;MovieNameFirstTime		= EvilBelfalas_Intro
	;MovieNameRepeat		= EvilBelfalas_Intro
	SkirmishStillImage		= WOR_Gondor_Loadscreen
	;SkirmishVoiceTrack		= EvilIntroBelfalas1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Belfalas
	RegionPortrait			= LWPGondor

	;ArmyBonus				= 0
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection	
			Region = Umbar
			;DetourPoint = X:-296 Y:-98
			;DetourPoint = X:-356 Y:162
		End
		Connection	
			Region = Anfalas
			;DetourPoint = X:-296 Y:-98
			;DetourPoint = X:-356 Y:162
		End
		Connection	
			Region = Osgiliath
			;DetourPoint = X:-296 Y:-98
			;DetourPoint = X:-356 Y:162
		End
		Connection
			Region = Ithilien
			;DetourPoint = X:1200 Y:-380
			;DetourPoint = X:1400 Y:-380
		End
        Connection
			Region = Minas_Tirith
			;DetourPoint = X:1123 Y:-303
			;DetourPoint = X:1210 Y:-140
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:790 Y:-410

	HeroArmySpot				= X:520 Y:-360
	HeroArmySpot				= X:840 Y:-320
	HeroArmySpot				= X:1080 Y:-400
    HeroArmySpot				= X:395 Y:-505
	GarrisonArmySpot			= X:800 Y:-460
	BuildingSpot				= X:645 Y:-465
	BuildingSpot				= X:955 Y:-410
	BuildingSpot				= X:1170 Y:-360

        CPLimit					= 720
        AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Grey_Havens
;////////////////////////////
Region Grey_Havens
	DisplayName				= LW:DisplayNameGreyHavens
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Grey Havens"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Grey_Havens_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Grey_Havens
	RegionPortrait			= LWPGreyHavens

	;ArmyBonus				= 0
	;ResourceBonus			= 0
	LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Arnor
			;DetourPoint = X:-1230 Y:1865
			;DetourPoint = X:-1030 Y:2000
		End
		Connection
			Region = Forlindon
			;DetourPoint = X:-1330 Y:1905
			;DetourPoint = X:-1258 Y:2170
		End
		Connection
			Region = Harlindon
			;DetourPoint = X:-1470 Y:1560
			;DetourPoint = X:-1470 Y:1420
			;DetourPoint = X:-1570 Y:1360
		End
		Connection
			Region = Tower_Hills
			;DetourPoint = X:-1330 Y:1675
			;DetourPoint = X:-1170 Y:1625
		End
		
	CustomCenterPoint			= Yes
	CenterPoint				= X:-1430 Y:1715

	HeroArmySpot				= X:-1430 Y:1790
    HeroArmySpot				= X:-1330 Y:1865
    HeroArmySpot				= X:-1230 Y:1790
    HeroArmySpot				= X:-1580 Y:1550
    GarrisonArmySpot			= X:-1330 Y:1715
    BuildingSpot				= X:-1430 Y:1600
    BuildingSpot				= X:-1730 Y:1600

    CPLimit					= 480
    AllyCPLimit				= 360
            
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Harad
;////////////////////////////
Region Harad
	DisplayName				= LW:DisplayNameHarad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Harad"
	;MovieNameFirstTime		= GoodNearHarad_Intro
	;MovieNameRepeat		= GoodNearHarad_Intro
	SkirmishStillImage		= WOR_Harad_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroNearHarad1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Harad
	RegionPortrait			= LWPHarad

	;ArmyBonus				= 0
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Umbar
			;DetourPoint = X:1057 Y:-703
			;DetourPoint = X:1003 Y:-500
		End
		Connection
			Region = Ithilien
			;DetourPoint = X:1525 Y:-860
			;DetourPoint = X:1525 Y:-520
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1870 Y:-900

    HeroArmySpot				= X:1550 Y:-800
    HeroArmySpot				= X:1720 Y:-900
    HeroArmySpot				= X:1620 Y:-650
    HeroArmySpot				= X:2030 Y:-970
    GarrisonArmySpot			= X:1765 Y:-715
    BuildingSpot				= X:2425 Y:-1000
    BuildingSpot				= X:1880 Y:-1000
    BuildingSpot				= X:2170 Y:-1000

    CPLimit					= 720
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Harlindon
;////////////////////////////
Region Harlindon
	DisplayName				= LW:DisplayNameHarlindon
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Harlindon" 
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Harlindon_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Harlindon
	RegionPortrait			= LWPHarlindon

	;ArmyBonus				= 0
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	ExperienceBonus			= 5
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS
	
	ConnectsTo				=
		Connection
			Region = Grey_Havens
			;DetourPoint = X:-1570 Y:1360
			;DetourPoint = X:-1470 Y:1420
			;DetourPoint = X:-1470 Y:1560
		End
		Connection
			Region = Minhiriath
			;DetourPoint = X:-1010 Y:1060
			;DetourPoint = X:-875 Y:900
		End
		Connection
			Region = Tower_Hills
			;DetourPoint = X:-1135 Y:1190
			;DetourPoint = X:-1135 Y:1365
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-1475 Y:1000

    HeroArmySpot				= X:-1780 Y:1260
    HeroArmySpot				= X:-1630 Y:1260
    HeroArmySpot				= X:-1420 Y:925
    HeroArmySpot				= X:-1500 Y:955
    GarrisonArmySpot			= X:-1575 Y:985
    BuildingSpot				= X:-1650 Y:1100
    BuildingSpot				= X:-1300 Y:930

    CPLimit					= 480
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Helm's Deep
;////////////////////////////
Region Helms_Deep
	DisplayName				= LW:DisplayNameHelmsDeep
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Helms Deep"
	;MovieNameFirstTime		= Good_HelmsDeep_Intro
	;MovieNameRepeat		= Good_HelmsDeep_Intro
	SkirmishStillImage		= WOR_Helms_Deep_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroHelmsDeep1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Helms_Deep
	RegionPortrait			= LWPHelmsDeep

	;ArmyBonus				= 0
	;ResourceBonus			= 0
	LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Enedwaith
			;DetourPoint = X:5 Y:290
			;DetourPoint = X:-100 Y:290
		End
		Connection
			Region = Gap_Of_Rohan
			;DetourPoint = X:140 Y:380
			;DetourPoint = X:140 Y:460
		End
		Connection
			Region = Rohan
			;DetourPoint = X:295 Y:290
			;DetourPoint = X:580 Y:290
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:140 Y:300

	HeroArmySpot				= X:25 Y:310
	HeroArmySpot				= X:65 Y:345
	HeroArmySpot				= X:140 Y:360
    HeroArmySpot				= X:70 Y:280
	GarrisonArmySpot			= X:215 Y:345
	BuildingSpot				= X:275 Y:290

    CPLimit					= 600
    AllyCPLimit				= 360

	CreateAutoFort				= Yes		// This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCHelmsDeep
	FortressDisplayName			= LW:DisplayNameHelmsDeep		; OBJECT:HelmsDeepArcade
	FortressDisplayDescription		= CONTROLBAR:LW_ToolTip_GenericStronghold
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// High_Pass
;////////////////////////////
Region High_Pass
	DisplayName				= LW:DisplayNameHighPass
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR High Pass"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_High_Pass_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= High_Pass
	RegionPortrait			= LWPHighPass

	;ArmyBonus				= 0
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Rhudaur
			;DetourPoint = X:675 Y:1700
			;DetourPoint = X:825 Y:1490
		End
		Connection
			Region = Carrock
			;DetourPoint = X:620 Y:1890
			;DetourPoint = X:860 Y:1890
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:415 Y:1725

    HeroArmySpot			= X:360 Y:1770
    HeroArmySpot			= X:400 Y:1780
    HeroArmySpot			= X:440 Y:1820
    HeroArmySpot				= X:445 Y:1765
    GarrisonArmySpot		= X:490 Y:1715
    BuildingSpot			= X:425 Y:1670

    CPLimit					= 360
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Iron Hills
;////////////////////////////
Region Iron_Hills
	DisplayName				= LW:DisplayNameIronHills
	ConqueredNotice				= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Iron Hills"
	;MovieNameFirstTime				= Good_Isengard_Intro
	;MovieNameRepeat					= Good_Isengard_Intro
	SkirmishStillImage			= WOR_Iron_Hills_Loadscreen
	;SkirmishVoiceTrack				= GoodIntroIsengard1
	SkirmishMusicTrack				= Shell2MusicForLoadScreen
	SubObject				= Iron_Hills
	RegionPortrait				= LWPIronHills

	;ArmyBonus			= 0
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
		Region = Celduin
			;DetourPoint = X:2270 Y:1780
			;DetourPoint = X:2090 Y:1670
		End
		Connection
		Region = Erebor
			;DetourPoint = X:2200 Y:1925
			;DetourPoint = X:1895 Y:1925
		End
		Connection
		Region = Rhun
			;DetourPoint = X:2600 Y:1755
			;DetourPoint = X:2600 Y:1590
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:2460 Y:1895

        HeroArmySpot				= X:2310 Y:1970
        HeroArmySpot				= X:2460 Y:1995
        HeroArmySpot				= X:2610 Y:1970
    HeroArmySpot				= X:2170 Y:1950
        GarrisonArmySpot			= X:2360 Y:1765
        BuildingSpot				= X:2260 Y:1820
        BuildingSpot				= X:2460 Y:1820
        BuildingSpot				= X:2660 Y:1820

        CPLimit					= 720
	AllyCPLimit				= 360        
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Isengard
;////////////////////////////
Region Isengard
	DisplayName				= LW:DisplayNameIsengard
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Isengard"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Isengard_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Isengard
	RegionPortrait			= LWPIsengard

	;ArmyBonus				= 0
	;ResourceBonus			= 0
	LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Dunland
			;DetourPoint = X:70 Y:720
			;DetourPoint = X:-85 Y:810
		End
        Connection
			Region = Fangorn
			;DetourPoint = X:250 Y:660
			;DetourPoint = X:405 Y:700
		End
		Connection
			Region = Gap_Of_Rohan
			;DetourPoint = X:140 Y:580
			;DetourPoint = X:140 Y:460
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:140 Y:640

	HeroArmySpot				= X:70 Y:660
	HeroArmySpot				= X:90 Y:600
	HeroArmySpot				= X:210 Y:600
    HeroArmySpot				= X:125 Y:710
	GarrisonArmySpot			= X:230 Y:660
	BuildingSpot				= X:150 Y:560

    CPLimit					= 600
	AllyCPLimit				= 360        
       
	CreateAutoFort				= Yes		// This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCOrthanc
	FortressDisplayName			= LW:DisplayNameIsengard		; OBJECT:IsengardOrthanc
	FortressDisplayDescription		= CONTROLBAR:LW_ToolTip_GenericStronghold
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Ithilien
;////////////////////////////
Region Ithilien
	DisplayName				= LW:DisplayNameIthilien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Ithilien"
	;MovieNameFirstTime		= GoodSouthernIthilien_Intro
	;MovieNameRepeat		= GoodSouthernIthilien_Intro
	SkirmishStillImage		= WOR_Ithilien_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroSouthernIthilien1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Ithilien
	RegionPortrait			= LWPIthilien

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	ExperienceBonus			= 5
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Belfalas
			;DetourPoint = X:1400 Y:-380
			;DetourPoint = X:1200 Y:-380
		End
		Connection
			Region = Harad
			;DetourPoint = X:1525 Y:-520
			;DetourPoint = X:1525 Y:-860
		End
		Connection
			Region = Umbar
			;DetourPoint = X:1525 Y:-520
			;DetourPoint = X:1525 Y:-860
		End
	    Connection
			Region = Osgiliath
			;DetourPoint = X:1525 Y:-240
			;DetourPoint = X:1490 Y:-140
		End
	    Connection
			Region = The_Dead_Marshes
			;DetourPoint = X:1525 Y:-240
			;DetourPoint = X:1490 Y:-140
		End
	    Connection
			Region = Minas_Morgul
			;DetourPoint = X:1525 Y:-240
			;DetourPoint = X:1490 Y:-140
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1525 Y:-380

	HeroArmySpot				= X:1400 Y:-340
	HeroArmySpot				= X:1525 Y:-335
	HeroArmySpot				= X:1650 Y:-340
    HeroArmySpot				= X:1570 Y:-210
	GarrisonArmySpot			= X:1525 Y:-480
	BuildingSpot				= X:1400 Y:-455
	BuildingSpot				= X:1650 Y:-455

    CPLimit					= 480
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Lostriand
;////////////////////////////
Region Lostriand
	DisplayName				= LW:DisplayNameLostriand
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Lostriand"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Lostriand_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Lostriand
	RegionPortrait			= LWPLostriand

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus			= 5
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Fornost
			;DetourPoint = X:-505 Y:1683
			;DetourPoint = X:-505 Y:1860
		End
		Connection
			Region = Ettenmoors
			;DetourPoint = X:-165 Y:1683
			;DetourPoint = X:-165 Y:1810
		End
		Connection
			Region = Rhudaur
			;DetourPoint = X:-355 Y:1423
			;DetourPoint = X:-355 Y:1250
		End
		Connection
			Region = Amon_Sul
			;DetourPoint = X:-165 Y:1563
			;DetourPoint = X:35 Y:1563
		End
		Connection
			Region = Buckland
			;DetourPoint = X:-545 Y:1563
			;DetourPoint = X:-725 Y:1563
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-145 Y:1663

    HeroArmySpot				= X:-225 Y:1680
    HeroArmySpot				= X:-165 Y:1700
    HeroArmySpot				= X:-100 Y:1680
    HeroArmySpot				= X:-260 Y:1645
    GarrisonArmySpot			= X:-170 Y:1620
    BuildingSpot				= X:-80 Y:1635
    
    CPLimit					= 360
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Lothlorien
;////////////////////////////
Region Lothlorien
	DisplayName				= LW:DisplayNameLothlorien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Lorien"
	;MovieNameFirstTime		= Good_Lothlorien_Intro
	;MovieNameRepeat		= Good_Lothlorien_Intro
	SkirmishStillImage		= WOR_Lorien_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Lothlorien
	RegionPortrait			= LWPLorien

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Dol_Guldur
			;DetourPoint = X:945 Y:1225
			;DetourPoint = X:1065 Y:1100
		End
		Connection
			Region = Fangorn
			;DetourPoint = X:725 Y:1110
			;DetourPoint = X:725 Y:915
		End
		Connection
			Region = Carrock
			;DetourPoint = X:825 Y:1490
			;DetourPoint = X:675 Y:1700
		End
        Connection
			Region = Mirkwood
			;DetourPoint = X:945 Y:1470
			;DetourPoint = X:1290 Y:1575
		End
        Connection
			Region = Redhorn_Pass
			;DetourPoint = X:650 Y:1175
			;DetourPoint = X:510 Y:1175
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:825 Y:1300

    HeroArmySpot				= X:725 Y:1450
    HeroArmySpot				= X:925 Y:1450
    HeroArmySpot				= X:725 Y:1300
    HeroArmySpot				= X:770 Y:1055
    GarrisonArmySpot			= X:925 Y:1300
    BuildingSpot				= X:575 Y:1050
    BuildingSpot				= X:725 Y:1150
    BuildingSpot				= X:875 Y:1150

    CPLimit					= 720
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Minas Morgul
;////////////////////////////
Region Minas_Morgul
	DisplayName				= LW:DisplayNameMinasMorgul
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Minas Morgul"
	;MovieNameFirstTime		= Evil_ShelobsLair_Intro
	;MovieNameRepeat		= Evil_ShelobsLair_Intro
	SkirmishStillImage		= WOR_Minas_Morgul_Loadscreen
	;SkirmishVoiceTrack		= EvilIntroCirithUngol2
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Minas_Morgul
	RegionPortrait			= LWPMinasMorgul
	
	;ResourceBonus			= 0
	LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Mount_Doom
			;DetourPoint = X:1820 Y:30
			;DetourPoint = X:1930 Y:30
		End
		Connection
			Region = The_Dead_Marshes
			;DetourPoint = X:1650 Y:-40
			;DetourPoint = X:1565 Y:-40
		End
		Connection
			Region = Ithilien
			;DetourPoint = X:1650 Y:-40
			;DetourPoint = X:1565 Y:-40
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1740 Y:30

	HeroArmySpot				= X:1760 Y:120
	HeroArmySpot				= X:1780 Y:60
	HeroArmySpot				= X:1800 Y:0
    HeroArmySpot				= X:1740 Y:-55
	GarrisonArmySpot			= X:1820 Y:-60
	BuildingSpot				= X:1670 Y:0

    CPLimit					= 600
    AllyCPLimit				= 360

	CreateAutoFort				= Yes		// This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCMinasMorgulTower
	FortressDisplayName			= LW:DisplayNameMinasMorgul		; OBJECT:MinasMorgalTower
	FortressDisplayDescription		= CONTROLBAR:LW_ToolTip_GenericStronghold
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Minas Tirith
;////////////////////////////
Region Minas_Tirith
	DisplayName				= LW:DisplayNameMinasTirith
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Minas Tirith"
	;MovieNameFirstTime		= Good_MinasTirith_Intro
	;MovieNameRepeat		= Good_MinasTirith_Intro
	SkirmishStillImage		= WOR_Minas_Tirith_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroMinasTirith1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Minas_Tirith
	RegionPortrait			= LWPMinas_Tirith

	;ResourceBonus			= 0
	LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Cair_Andros
			;DetourPoint = X:1210 Y:80
			;DetourPoint = X:1210 Y:180
	    End
        Connection
			Region = Belfalas
			;DetourPoint = X:1210 Y:-140
			;DetourPoint = X:1123 Y:-303
	    End
	    Connection
			Region = Osgiliath
			;DetourPoint = X:1340 Y:-25
			;DetourPoint = X:1415 Y:-40
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:1200 Y:-25

	HeroArmySpot				= X:1270 Y:60
    HeroArmySpot				= X:1320 Y:10
    HeroArmySpot				= X:1320 Y:-60
     HeroArmySpot				= X:1220 Y:55
   GarrisonArmySpot			= X:1270 Y:-110
    BuildingSpot				= X:1220 Y:-160

    CPLimit					= 600
    AllyCPLimit				= 360
        
	CreateAutoFort				= Yes		// This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameMinasTirith		; OBJECT:GondorCampKeep
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Minhiriath
;////////////////////////////
Region Minhiriath
	DisplayName				= LW:DisplayNameMinhiriath
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Minhiriath"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Minhiriath_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Minhiriath
	RegionPortrait			= LWPMinhiriath

	ResourceBonus			= 10
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				= 
		Connection
			Region = Cardolan
			;DetourPoint = X:-355 Y:1250
			;DetourPoint = X:-355 Y:1423
		End
		Connection
			Region = Tower_Hills
			;DetourPoint = X:-420 Y:1060
			;DetourPoint = X:-190 Y:950
		End
		Connection
			Region = Enedwaith
			;DetourPoint = X:-700 Y:800
			;DetourPoint = X:-510 Y:625
		End
		Connection
			Region = Harlindon
			;DetourPoint = X:-875 Y:900
			;DetourPoint = X:-1010 Y:1060
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-875 Y:720

    HeroArmySpot				= X:-915 Y:910
    HeroArmySpot				= X:-810 Y:830
    HeroArmySpot				= X:-700 Y:760
    HeroArmySpot				= X:-735 Y:560
    GarrisonArmySpot			= X:-940 Y:630
    BuildingSpot				= X:-980 Y:800
    BuildingSpot				= X:-785 Y:650

    CPLimit					= 480
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Mirkwood
;////////////////////////////
Region Mirkwood
	DisplayName				= LW:DisplayNameMirkwood
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Mirkwood"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Mirkwood_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Mirkwood
	RegionPortrait			= LWPMirkwood

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Celduin
			;DetourPoint = X:1290 Y:1575
			;DetourPoint = X:1730 Y:1575
		End
        Connection
			Region = Dagorlad
			;DetourPoint = X:1290 Y:1575
			;DetourPoint = X:1700 Y:1200
		End
        Connection
			Region = Dol_Guldur
			;DetourPoint = X:1290 Y:1575
			;DetourPoint = X:1230 Y:1215
		End
		Connection
			Region = Erebor
			;DetourPoint = X:1190 Y:1900
			;DetourPoint = X:1365 Y:1900
		End
		Connection
			Region = Carrock
			;DetourPoint = X:860 Y:1890
			;DetourPoint = X:620 Y:1890
		End
        Connection
			Region = Lothlorien
			;DetourPoint = X:1290 Y:1575
			;DetourPoint = X:945 Y:1470
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1175 Y:1700

        HeroArmySpot				= X:920 Y:1900
        HeroArmySpot				= X:1150 Y:1900
        HeroArmySpot				= X:1060 Y:1700
     HeroArmySpot				= X:1265 Y:1580
       GarrisonArmySpot			= X:1290 Y:1700
        BuildingSpot				= X:1150 Y:1500
        BuildingSpot				= X:1310 Y:1400
        BuildingSpot				= X:1480 Y:1500

        CPLimit					= 720
        AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Mount Gundabad
;////////////////////////////
Region MountGundabad
	DisplayName			= LW:DisplayNameMountGundabad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				= "MAP WOR ANG Gundabad"
	;MovieNameFirstTime		= GoodNurn_Intro
	;MovieNameRepeat		= GoodNurn_Intro
	SkirmishStillImage		= WOR_Gundabad_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroNurn1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject			= Mount_Gundabad
	RegionPortrait			= LWPMountGundabad

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Carrock
		End
		Connection
			Region = Forodwaith
			DetourPoint = X:-10 Y:2480
		End
	
	CustomCenterPoint			= Yes
	CenterPoint				= X:475 Y:2265
	
	HeroArmySpot				= X:405 Y:2240
    HeroArmySpot				= X:465 Y:2230
    HeroArmySpot				= X:560 Y:2225
    HeroArmySpot				= X:350 Y:2280
    GarrisonArmySpot			= X:635 Y:2230
	BuildingSpot				= X:345 Y:2445

    CPLimit					= 360
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Mordor
;////////////////////////////
Region Mordor
	DisplayName				= LW:DisplayNameMordor
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Mordor"
	;MovieNameFirstTime		= GoodNurn_Intro
	;MovieNameRepeat		= GoodNurn_Intro
	SkirmishStillImage		= WOR_Mordor_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroNurn1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Mordor
	RegionPortrait			= LWPMordor

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Mount_Doom
			;DetourPoint = X:2425 Y:-50
			;DetourPoint = X:2220 Y:40
		End
	
	CustomCenterPoint			= Yes
	CenterPoint				= X:2620 Y:-230
	
	HeroArmySpot				= X:2230 Y:-320
    HeroArmySpot				= X:2360 Y:-230
    HeroArmySpot				= X:2490 Y:-140
    HeroArmySpot				= X:2120 Y:-325
    GarrisonArmySpot			= X:2620 Y:-50
	BuildingSpot				= X:2230 Y:-420
	BuildingSpot				= X:2480 Y:-230
    BuildingSpot				= X:2720 Y:-50

    CPLimit					= 720
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Mount Doom
;////////////////////////////
Region Mount_Doom
	DisplayName				= LW:DisplayNameMountDoom
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Mount Doom"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Mount_Doom_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Mount_Doom
	RegionPortrait			= LWPMount_Doom

	;ResourceBonus			= 0
	LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Minas_Morgul
			;DetourPoint = X:1930 Y:30
			;DetourPoint = X:1820 Y:30
		End
		Connection
			Region = Mordor
			;DetourPoint = X:2220 Y:40
			;DetourPoint = X:2425 Y:-50
		End
		Connection
			Region = The_Black_Gate
			;DetourPoint = X:1930 Y:260
			;DetourPoint = X:1855 Y:330
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:2100 Y:130

	HeroArmySpot				= X:1930 Y:130
	HeroArmySpot				= X:2030 Y:260
	HeroArmySpot				= X:2170 Y:260
    HeroArmySpot				= X:1965 Y:50
	GarrisonArmySpot			= X:2270 Y:130
	BuildingSpot				= X:2030 Y:-50
	BuildingSpot				= X:2170 Y:-50

    CPLimit					= 480
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Osgiliath
;////////////////////////////
Region Osgiliath
	DisplayName				= LW:DisplayNameOsgiliath
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Osgiliath"
	;MovieNameFirstTime		= Good_Osgiliath_Intro
	;MovieNameRepeat		= Good_Osgiliath_Intro
	SkirmishStillImage		= WOR_Osgiliath_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroOsgiliath1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Oshiliath ; mispelled
	RegionPortrait			= LWPOsgiliath

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
		Region = Cair_Andros
			;DetourPoint = X:1490 Y:60
			;DetourPoint = X:1410 Y:160
	        End
	    Connection
		Region = Ithilien
			;DetourPoint = X:1490 Y:-140
			;DetourPoint = X:1525 Y:-240
		End
		Connection
		Region = Minas_Tirith
			;DetourPoint = X:1415 Y:-40
			;DetourPoint = X:1340 Y:-25
		End
	    Connection
		Region = The_Dead_Marshes
			;DetourPoint = X:1525 Y:-240
			;DetourPoint = X:1490 Y:-140
		End
	    Connection
		Region = Belfalas
			;DetourPoint = X:1525 Y:-240
			;DetourPoint = X:1490 Y:-140
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1417 Y:-120

	HeroArmySpot				= X:1380 Y:-175
    HeroArmySpot				= X:1425 Y:-100
	HeroArmySpot				= X:1465 Y:-55
    HeroArmySpot				= X:1430 Y:-180
	GarrisonArmySpot			= X:1325 Y:-220
	BuildingSpot				= X:1430 Y:-5

    CPLimit					= 360
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 1
	End
End


;////////////////////////////
;// Redhorn_Pass
;////////////////////////////
Region Redhorn_Pass
	DisplayName				= LW:DisplayNameRedhornPass
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Redhorn Pass"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Redhorn_Pass_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Redhorn_Pass
	RegionPortrait			= LWPRedhornPass

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				= 
        Connection
			Region = Dunland
			;DetourPoint = X:300 Y:1200
			;DetourPoint = X:120 Y:1140
		End
        Connection
			Region = Lothlorien
			;DetourPoint = X:510 Y:1175
			;DetourPoint = X:650 Y:1175
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:400 Y:1190

    HeroArmySpot				= X:330 Y:1240
    HeroArmySpot				= X:385 Y:1290
    HeroArmySpot				= X:460 Y:1290
    HeroArmySpot				= X:460 Y:1120
    GarrisonArmySpot			= X:515 Y:1240
    BuildingSpot				= X:300 Y:1120

    CPLimit					= 360
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 1
	End
End


;////////////////////////////
;// Rhudaur
;////////////////////////////
Region Rhudaur
	DisplayName				= LW:DisplayNameRhudaur
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR ANG Rhudaur"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Rhudaur_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Rhudaul ; (sic)
	RegionPortrait			= LWPRhudaur

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 5
	;ExperienceBonus		= 0
	FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = High_Pass
			;DetourPoint = X:-505 Y:1683
			;DetourPoint = X:-505 Y:1860
		End
		Connection
			Region = Ettenmoors
			;DetourPoint = X:-165 Y:1683
			;DetourPoint = X:-165 Y:1810
		End
		Connection
			Region = Lostriand
			;DetourPoint = X:-355 Y:1423
			;DetourPoint = X:-355 Y:1250
		End
		Connection
			Region = Amon_Sul
			;DetourPoint = X:-165 Y:1563
			;DetourPoint = X:35 Y:1563
		End
		Connection
			Region = Rivendell
			;DetourPoint = X:-545 Y:1563
			;DetourPoint = X:-725 Y:1563
		End
		Connection
			Region = Dunland
			;DetourPoint = X:-545 Y:1563
			;DetourPoint = X:-725 Y:1563
		End
		Connection
			Region = Cardolan
		End
		Connection
			Region = Barrow_Downs
			DetourPoint = X:-117 Y:1224
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:20 Y:1550

    HeroArmySpot				= X:210 Y:1800
    HeroArmySpot				= X:0 Y:1495
    HeroArmySpot				= X:70 Y:1650
    HeroArmySpot				= X:-10 Y:1430
    GarrisonArmySpot			= X:-25 Y:1330
    BuildingSpot				= X:60 Y:1315
    BuildingSpot				= X:130 Y:1750
    BuildingSpot				= X:-80 Y:1215
    
    CPLimit					= 720
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Rhun
;////////////////////////////
Region Rhun
	DisplayName				= LW:DisplayNameRhun
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Rhun"
	;MovieNameFirstTime		= GoodRhun_Intro
	;MovieNameRepeat		= GoodRhun_Intro
	SkirmishStillImage		= WOR_Rhun_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroRhun1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Rhun
	RegionPortrait			= LWPRhun

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Celduin
			;DetourPoint = X:2410 Y:1450
			;DetourPoint = X:2090 Y:1575
		End
		Connection
			Region = Dagorlad
			;DetourPoint = X:2450 Y:1060
			;DetourPoint = X:2165 Y:1060
		End
		Connection
			Region = Iron_Hills
			;DetourPoint = X:2600 Y:1590
			;DetourPoint = X:2600 Y:1755
		End

    HeroArmySpot				= X:2450 Y:1450
    HeroArmySpot				= X:2600 Y:1550
    HeroArmySpot				= X:2750 Y:1450
    HeroArmySpot				= X:2450 Y:1305
    GarrisonArmySpot			= X:2600 Y:1350
    BuildingSpot				= X:2450 Y:675
    BuildingSpot				= X:2600 Y:825
    BuildingSpot				= X:2750 Y:675

    CPLimit					= 720
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Rivendell
;////////////////////////////
Region Rivendell
	DisplayName				= LW:DisplayNameRivendell
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Rivendell"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Rivendell_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Rivendell
	RegionPortrait			= LWPRivendell

	;ResourceBonus			= 0
	LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS


	ConnectsTo				=
		Connection
			Region = Rhudaur
			;DetourPoint = X:35 Y:1563
			;DetourPoint = X:-165 Y:1563
		End
		Connection
			Region = Dunland
			;DetourPoint = X:50 Y:1360
			;DetourPoint = X:50 Y:1140
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:185 Y:1505

    HeroArmySpot				= X:160 Y:1550
    HeroArmySpot				= X:140 Y:1505
    HeroArmySpot				= X:170 Y:1405
    HeroArmySpot				= X:210 Y:1435
    GarrisonArmySpot			= X:240 Y:1510
    BuildingSpot				= X:215 Y:1590

    CPLimit					= 600
    AllyCPLimit				= 360
        
	CreateAutoFort				= Yes		// This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCElrondsHouse
	FortressDisplayName			= LW:DisplayNameRivendell		; OBJECT:ElrondsHouse
	FortressDisplayDescription		= CONTROLBAR:LW_ToolTip_GenericStronghold
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Rohan
;////////////////////////////
Region Rohan
	DisplayName				= LW:DisplayNameRohan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Rohan"
	;MovieNameFirstTime		= EvilRohan_Intro
	;MovieNameRepeat		= EvilRohan_Intro
	SkirmishStillImage		= WOR_Rohan_Loadscreen
	;SkirmishVoiceTrack		= EvilIntroRohan1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Rohan
	RegionPortrait			= LWPRohan

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Cair_Andros
			;DetourPoint = X:889 Y:346
			;DetourPoint = X:980 Y:228
	    End
	    Connection
			Region = Fangorn
			;DetourPoint = X:770 Y:600
			;DetourPoint = X:725 Y:725
		End
        Connection
			Region = Gap_Of_Rohan
			;DetourPoint = X:580 Y:460
			;DetourPoint = X:405 Y:460
	   	End
	   	Connection
			Region = Helms_Deep
			;DetourPoint = X:580 Y:290
			;DetourPoint = X:295 Y:290
		End
		Connection
			Region = The_Brown_Lands
			;DetourPoint = X:960 Y:460
			;DetourPoint = X:1210 Y:555
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:770 Y:460

        HeroArmySpot				= X:620 Y:535
        HeroArmySpot				= X:770 Y:560
        HeroArmySpot				= X:920 Y:535
     HeroArmySpot				= X:710 Y:310
       GarrisonArmySpot			= X:540 Y:320
        BuildingSpot				= X:620 Y:385
        BuildingSpot				= X:770 Y:410
        BuildingSpot				= X:920 Y:385

        CPLimit					= 720
        AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// The Black Gate
;////////////////////////////
Region The_Black_Gate
	DisplayName				= LW:DisplayNameBlackGate
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Black Gate"
	;MovieNameFirstTime		= Good_BlackGate_Intro
	;MovieNameRepeat		= Good_BlackGate_Intro
	SkirmishStillImage		= WOR_Black_Gate_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroBlackGate1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= The_Black_Gate
	RegionPortrait			= LWPBlackGate

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Mount_Doom
			;DetourPoint = X:1855 Y:330
			;DetourPoint = X:1930 Y:260
		End
		Connection
			Region = The_Dead_Marshes
			;DetourPoint = X:1730 Y:480
			;DetourPoint = X:1600 Y:630
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:1780 Y:420
	
	HeroArmySpot				= X:1780 Y:310
    HeroArmySpot				= X:1830 Y:360
    HeroArmySpot				= X:1880 Y:410
    HeroArmySpot				= X:1800 Y:505
    GarrisonArmySpot			= X:1930 Y:460
	BuildingSpot				= X:1680 Y:430

    CPLimit					= 360
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// The Dead Marshes
;////////////////////////////
Region The_Dead_Marshes
	DisplayName				= LW:DisplayNameDeadMarshes
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dead Marshes"
	;MovieNameFirstTime		= GoodDeadMarshes_Intro
	;MovieNameRepeat		= GoodDeadMarshes_Intro
	SkirmishStillImage		= WOR_Dead_Marshes_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroDeadMarshes1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Dead_Marshes
	RegionPortrait	= LWPDeadMarshes

	;ResourceBonus			= 0
	LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=	
        Connection
			Region = Cair_Andros
			;DetourPoint = X:1400 Y:490
			;DetourPoint = X:1210 Y:275
		End
		Connection
			Region = Dagorlad
			;DetourPoint = X:1595 Y:769
			;DetourPoint = X:1790 Y:901
		End
		Connection
			Region = The_Brown_Lands
			;DetourPoint = X:1400 Y:770
			;DetourPoint = X:1230 Y:985
		End
		Connection
			Region = The_Black_Gate
			;DetourPoint = X:1600 Y:630
			;DetourPoint = X:1730 Y:480
		End
		Connection
			Region = Osgiliath
			;DetourPoint = X:1600 Y:630
			;DetourPoint = X:1730 Y:480
		End
		Connection
			Region = Ithilien
			;DetourPoint = X:1600 Y:630
			;DetourPoint = X:1730 Y:480
		End
		Connection
			Region = Minas_Morgul
			;DetourPoint = X:1600 Y:630
			;DetourPoint = X:1730 Y:480
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1470 Y:430

	HeroArmySpot			= X:1340 Y:350
	HeroArmySpot			= X:1450 Y:515
	HeroArmySpot			= X:1640 Y:625
    HeroArmySpot				= X:1450 Y:255
	GarrisonArmySpot		= X:1520 Y:110
	BuildingSpot			= X:1425 Y:365
	BuildingSpot			= X:1730 Y:660

    CPLimit					= 480
    AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// The Brown Lands (part of the old Dead Marshes)
;////////////////////////////
Region The_Brown_Lands
	DisplayName				= LW:DisplayNameBrownLands
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map mp brown lands"
	;MovieNameFirstTime		= GoodDeadMarshes_Intro
	;MovieNameRepeat		= GoodDeadMarshes_Intro
	SkirmishStillImage		= WOR_Brownlands_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroDeadMarshes1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Brown_Lands
	RegionPortrait			= LWPBrownLands

	ResourceBonus			= 10
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Cair_Andros
			;DetourPoint = X:1400 Y:490
			;DetourPoint = X:1210 Y:275
		End
		Connection
			Region = Dagorlad
			;DetourPoint = X:1595 Y:769
			;DetourPoint = X:1790 Y:901
		End
		Connection
			Region = Dol_Guldur
			;DetourPoint = X:1400 Y:770
			;DetourPoint = X:1230 Y:985
		End
        Connection
			Region = Fangorn
			;DetourPoint = X:1155 Y:783
			;DetourPoint = X:920 Y:853
		End
		Connection
			Region = Rohan
			;DetourPoint = X:1210 Y:555
			;DetourPoint = X:960 Y:460
		End
		Connection
			Region = The_Dead_Marshes
			;DetourPoint = X:1600 Y:630
			;DetourPoint = X:1730 Y:480
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:1330 Y:720

	HeroArmySpot				= X:1130 Y:765
	HeroArmySpot				= X:1325 Y:860
	HeroArmySpot				= X:1230 Y:835
    HeroArmySpot				= X:1105 Y:605
	GarrisonArmySpot			= X:1380 Y:690
	BuildingSpot				= X:1250 Y:555
	BuildingSpot				= X:1500 Y:800

	CPLimit					= 480
	AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// The Shire
;////////////////////////////
Region The_Shire
	DisplayName				= LW:DisplayNameTheShire
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Shire"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Shire_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= The_Shire
	RegionPortrait			= LWPShire

	;ResourceBonus			= 0
	LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=  
		Connection
			Region = Arnor
			;DetourPoint = X:-800 Y:1590
			;DetourPoint = X:-800 Y:1860
		End
		Connection
			Region = Buckland
			;DetourPoint = X:-725 Y:1563
			;DetourPoint = X:-545 Y:1563
		End
		Connection
			Region = Barrow_Downs
			;DetourPoint = X:-875 Y:1260
			;DetourPoint = X:-1010 Y:1140
		End
		Connection
			Region = Tower_Hills
			;DetourPoint = X:-915 Y:1505
			;DetourPoint = X:-1040 Y:1505
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-830 Y:1530

	HeroArmySpot				= X:-875 Y:1595
	HeroArmySpot				= X:-800 Y:1620
	HeroArmySpot				= X:-725 Y:1525
    HeroArmySpot				= X:-755 Y:1690
	GarrisonArmySpot			= X:-800 Y:1420
	BuildingSpot				= X:-875 Y:1445
	BuildingSpot				= X:-725 Y:1445

	CPLimit					= 480
	AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End


;////////////////////////////
;// Tower Hills
;////////////////////////////
Region Tower_Hills
	DisplayName				= LW:DisplayNameTowerHills
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Tower Hills"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Tower_Hills_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Tower_Hills
	RegionPortrait			= LWPTowerHills

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 5
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Arnor
			;DetourPoint = X:-1100 Y:1625
			;DetourPoint = X:-1030 Y:1860
		End
		Connection
			Region = Grey_Havens
			;DetourPoint = X:-1170 Y:1625
			;DetourPoint = X:-1330 Y:1675
		End
		Connection
			Region = Harlindon
			;DetourPoint = X:-1135 Y:1365
			;DetourPoint = X:-1135 Y:1190
		End
		Connection
			Region = The_Shire
			;DetourPoint = X:-1040 Y:1505
			;DetourPoint = X:-915 Y:1505
		End
		Connection
			Region = Barrow_Downs
			;DetourPoint = X:-1040 Y:1505
			;DetourPoint = X:-915 Y:1505
		End
		Connection
			Region = Cardolan
			;DetourPoint = X:-1040 Y:1505
			;DetourPoint = X:-915 Y:1505
		End
		Connection
			Region = Minhiriath
			;DetourPoint = X:-1040 Y:1505
			;DetourPoint = X:-915 Y:1505
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-1135 Y:1345

	HeroArmySpot				= X:-1210 Y:1580
	HeroArmySpot				= X:-1135 Y:1605
	HeroArmySpot				= X:-1060 Y:1580
    HeroArmySpot				= X:-1055 Y:1190
	GarrisonArmySpot			= X:-1210 Y:1190
	BuildingSpot				= X:-1140 Y:1430

	CPLimit					= 360
	AllyCPLimit				= 360
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End

;////////////////////////////
;// Umbar (split from Harad)
;////////////////////////////
Region Umbar
	DisplayName				= LW:DisplayNameUmbar
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP MP Umbar"
	;MovieNameFirstTime		= GoodNearHarad_Intro
	;MovieNameRepeat		= GoodNearHarad_Intro
	SkirmishStillImage		= WOR_Umbar_Loadscreen
	;SkirmishVoiceTrack		= GoodIntroNearHarad1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Umbar
	RegionPortrait			= LWPUmbar

	;ArmyBonus				= 0
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	AttackBonus			= 5
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Belfalas
			;DetourPoint = X:1057 Y:-703
			;DetourPoint = X:1003 Y:-500
		End
		Connection
			Region = Ithilien
			;DetourPoint = X:1525 Y:-860
			;DetourPoint = X:1525 Y:-520
		End
		Connection
			Region = Harad
			;DetourPoint = X:1525 Y:-860
			;DetourPoint = X:1525 Y:-520
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1130 Y:-860

	HeroArmySpot		= X:930 Y:-740
	HeroArmySpot		= X:1085 Y:-665
	HeroArmySpot		= X:1245 Y:-725
    HeroArmySpot				= X:1340 Y:-860
	GarrisonArmySpot	= X:1095 Y:-795
	BuildingSpot		= X:985 Y:-870
	BuildingSpot		= X:1255 Y:-870

	CPLimit				= 480
	AllyCPLimit			= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End



//-------------------------------------------------------------------------------------------------
// Region definitions
//-------------------------------------------------------------------------------------------------

;////////////////////////////
;// Arnor
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryArnor
	EffectName				= Arnor
	Regions					= Arnor Buckland Ettenmoors The_Shire Tower_Hills Amon_Sul Fornost Lostriand Rhudaur Barrow_Downs Fornost Cardolan
	;ArmyBonus				= 0
	;ResourceBonus				= 0
	;LegendaryBonus				= 0
	;AttackBonus				= 0
	;DefenseBonus				= 0
	;ExperienceBonus				= 20
	BuildingDiscountBonus = 200
	UnifiedEvaEvent				= WorldUnifyArnor    ; Played when local player gains all the regions in this territory
	LostEvaEvent				= WorldLostArnor     ; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1121 Y:2072
	LookAtHeading			= 0
	LookAtZoom				= 0.55
End


;////////////////////////////
;// Eriador
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryEriador
	EffectName				= Eriador
	Regions					= Dunland Enedwaith Forlindon Grey_Havens Harlindon Minhiriath Rivendell
	;ArmyBonus				= 0
	;ResourceBonus				= 0
	;LegendaryBonus				= 0
	;AttackBonus				= 15
	;DefenseBonus				= 0
	;ExperienceBonus				= 0
	ExtraStartResourcesBonus = 1000	
	UnifiedEvaEvent			= WorldUnifyEriador    ; Played when local player gains all the regions in this territory
	LostEvaEvent			= WorldLostEriador     ; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1670 Y:-332
	LookAtHeading			= 0
	LookAtZoom				= 0.83
End


;////////////////////////////
;// Gondor
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryGondor
	EffectName				= Gondor
	Regions					= Cair_Andros Gap_Of_Rohan Helms_Deep Minas_Tirith Osgiliath Rohan Belfalas Anfalas
	;ArmyBonus				= 0
	;ResourceBonus				= 0
	;LegendaryBonus				= 0
	;AttackBonus				= 0
	;DefenseBonus				= 20
	;ExperienceBonus				= 0
	DiscountedHeroUnitsBonus = 1
	UnifiedEvaEvent			= WorldUnifyGondor    ; Played when local player gains all the regions in this territory
	LostEvaEvent			= WorldLostGondor     ; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:455 Y:-630
	LookAtHeading			= 0
	LookAtZoom				= 0.37
End


;////////////////////////////
;// Mordor
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryMordor
	EffectName				= Mordor
	Regions					= Harad Ithilien Minas_Morgul Mordor Mount_Doom The_Black_Gate Umbar
	;ArmyBonus				= 0
	;ResourceBonus				= 0
	;LegendaryBonus				= 0
	;AttackBonus				= 0
	;DefenseBonus				= 0
	;ExperienceBonus				= 20
	DiscountedBarracksUnitsBonus = 100
	UnifiedEvaEvent			= WorldUnifyMordor    ; Played when local player gains all the regions in this territory
	LostEvaEvent			= WorldLostMordor     ; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:1850 Y:-630
	LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End


;////////////////////////////
;// Rhovanion
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryRhovanion
	EffectName				= Rhovanion
	Regions					= Dol_Guldur Fangorn High_Pass Isengard Lothlorien Mirkwood Redhorn_Pass Carrock
	;ArmyBonus				= 0
	;ResourceBonus				= 0
	;LegendaryBonus				= 0
	;AttackBonus				= 0
	;DefenseBonus				= 20
	;ExperienceBonus				= 0
	DiscountedSeigeUnitsBonus = 1
	UnifiedEvaEvent			= WorldUnifyRhovanion    ; Played when local player gains all the regions in this territory
	LostEvaEvent			= WorldLostRhovanion     ; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:1048 Y:1685
	LookAtHeading			= 0
	LookAtZoom				= 0.65
End


;////////////////////////////
;// Rhun
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryRhun
	EffectName				= Rhun
	Regions					= Celduin Erebor Dagorlad Iron_Hills Rhun The_Dead_Marshes The_Brown_Lands
	;ArmyBonus				= 0
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 15
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	FreeBuilderBonus		= 1
	UnifiedEvaEvent			= WorldUnifyRhun    ; Played when local player gains all the regions in this territory
	LostEvaEvent			= WorldLostRhun     ; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:2122 Y:1442
	LookAtHeading			= -0.47
	LookAtZoom				= 0.71
End

;////////////////////////////
;// Northern Wastes (I am not putting this in till there is more than one region in it)
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryNorthernWaste
	EffectName				= Forodwaith
	Regions					= Angmar MountGundabad CarnDum Forodwaith
	;ArmyBonus				= 0
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 15
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	FreeInnUnitsBonus		= 1
	UnifiedEvaEvent			= WorldUnifyNorthernWastes    ; Played when local player gains all the regions in this territory
	LostEvaEvent			= WorldLostNorthernWastes     ; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-65 Y:2085
	LookAtHeading			= 0
	LookAtZoom				= 0.71
End
