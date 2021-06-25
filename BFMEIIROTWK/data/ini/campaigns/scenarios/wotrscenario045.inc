//-------------------------------------------------------------------------------------------------
// Scenario Name:		Fall of Arnor
// Scenario Description:	See if Angmar can crush the splintered kingdoms of Arnor
// Game Type:			Elimination
// Win Conditions:		Player must conquer all the territories of each opposing team member
// Unavailable Territories:	Most territory east of Misty Mountains
// # of Players:		3
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario045

	IsEvilCampaign = No

	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario045
		DisplayDescription 	= LWScenario:WOTRScenario045Description
		DisplayGameType		= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction003  
		DisplayVictoriousText	= LWScenario:WOTREliminationWin001
		DisplayDefeatedText	= LWScenario:WOTREliminationLose001

		RegionCampaign = DefaultCampaign
		
		; UseMpRulesVictoryCondition = No ; force the game to use the victory conditions here
		MinPlayers = 3
		MaxPlayers = 3

		DisableRegions = Anfalas Belfalas Cair_Andros Celduin Dagorlad Dol_Guldur Erebor Fangorn Gap_Of_Rohan Harad Helms_Deep Iron_Hills Isengard Ithilien Minas_Morgul Minas_Tirith Mirkwood Mordor Mount_Doom Osgiliath Rohan Rhun The_Black_Gate The_Brown_Lands The_Dead_Marshes Umbar
		DisabledFactions = FactionArnor FactionDwarves FactionIsengard FactionMordor FactionWild
		DisallowStartInRegions = Buckland Tower_Hills The_Shire Fornost Amon_Sul Barrow_Downs Cardolan Minhiriath Rivendell Forlindon Harlindon Ettenmoors Rhudaur CarnDum Forodwaith MountGundabad Lostriand Carrock High_Pass Redhorn_Pass Dunland Enedwaith
		DefaultStartSpots = Arnor Grey_Havens Angmar

		//HistoricalScenario marks this scenario as following several rules:
		// *Each player must play a unique faction (the list of selectable factions is dicated by the
		//  "DisabledFactions" flag above)
		// *Each faction has a predetermined starting location and team (outlined in the starting
		//  restrictions below)
		// Please read the information below on Starting Restrictions for more information.
		HistoricalScenario = Yes

           	PlayerDefeatCondition
                    Teams = 1 2
                    LoseIfCapitalLost = No
                    NumControlledRegionsLessOrEqualTo = 0
           	End
             
           	TeamDefeatCondition
                    Teams = 1 2
                    NumControlledRegionsLessOrEqualTo = 0
           	End

		//A HistoricalScenario MUST include a Starting Restriction for each faction allowed in the 
		//scenario.  This restriction dictates the starting region and team of each faction.  This is
		//important because users will NOT be able to choose a team or starting location if the 
		//"HistoricalScenario" flag is set.
		//
		//Also note, in this case Starting Restrictions are being used in a different context than what
		//they are used for when the HistoricalScenario flag is not set.  Without the HistoricalScenario
		//flag, starting restrictions restrict selection to starting position only, and the starting
		//position dictates the faction and/or team
		StartingRestriction
		    Factions = FactionMen
		    Regions = Arnor
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionElves
		    Regions = Grey_Havens
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionAngmar
		    Regions = Angmar
		    Teams = 2
		End
		//-----------End Historical starting restrictions
            
           	//----------------------------------------------------------
           	// OwnershipSets
           	//----------------------------------------------------------

           	// OwnershipSets are how you decide who owns which region at the start of the game (and what armies are owned also)
 
           	OwnershipSet 
                    Regions = Arnor Buckland Tower_Hills The_Shire Fornost Amon_Sul Barrow_Downs Cardolan Minhiriath
                    StartRegion = Arnor
                    
                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Fornost
                    End

                    SpawnBuildings
                        Buildings = LW_FORT
                        Region = Arnor
                    End

                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Amon_Sul
                    End

                    SpawnBuildings
                        Buildings = LW_FORT
                        Region = Cardolan
                    End

                    SpawnArmies
                        Armies = HeroArmy1
                        Region = Fornost
                    End

                     SpawnArmies
                        Armies = HeroArmy3
                        Region = Amon_Sul
                    End
           	End
 
                OwnershipSet
                    Regions = Rivendell Forlindon Grey_Havens Harlindon Lothlorien
                    StartRegion = Grey_Havens

                    SpawnBuildings
                        Buildings = LW_ARMORY
                        Region = Rivendell
                    End

                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Grey_Havens 
                    End

                    SpawnArmies
                        Armies = HeroArmy1
                        Region = Grey_Havens
                    End

                    SpawnArmies
                        Armies = GarrisonArmy1
                        Region = Rivendell
                    End

                    SpawnArmies
                        Armies = HeroArmy4
                        Region = Lothlorien
                    End
                End

                OwnershipSet
                    Regions = Angmar Ettenmoors Rhudaur CarnDum Forodwaith MountGundabad
                    StartRegion = Angmar 
             
                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = CarnDum
                    End

                    SpawnBuildings
                        Buildings = LW_ARMORY LW_FORT
                        Region = Angmar
                    End

                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Rhudaur
                    End

                    SpawnArmies
                        Armies = HeroArmy2 HeroArmy3 HeroArmy4
                        Region = Rhudaur
                    End

                    SpawnArmies
                        Armies = HeroArmy1
                        Region = Angmar
                    End

                    SpawnArmies
                        Armies = GarrisonArmy1
                        Region = CarnDum
                    End
                 End
            End

	
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////

//-------------------------------------------------------------------------------------------------
// Men of the West (= Arnor)
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerMen		
	HeroTemplateName = GondorAragornMP
	PlayerArmy = MenAragornArmy_Historical
	Icon = HeroAragornIcon
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerMen
	HeroTemplateName = GondorBoromir
	PlayerArmy = MenBoromirArmy_Historical
	Icon = HeroBoromirIcon
	Banner = BannerMen
End

//-------------------------------------------------------------------------------------------------
// Elves
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerElves
	HeroTemplateName = ElvenHaldir
	PlayerArmy = ElvenHaldirArmy_Historical
	Icon = HeroHaldirIcon
	Banner = BannerElves
End

SpawnArmy
	ScriptingName = HeroArmy4
	SpawnForTemplates = PlayerElves
	HeroTemplateName = ElvenGlorfindel
	PlayerArmy = GlorfindelPlayerArmy
	Icon = HeroGlorfindelIcon
	Banner = BannerElves
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerElves
	PlayerArmy = Elven_StartingArmy
	Icon = ElfArmyIcon
End

//-------------------------------------------------------------------------------------------------
// Angmar
//-------------------------------------------------------------------------------------------------

SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerAngmar
	HeroTemplateName = AngmarRogash
	PlayerArmy = AngmarRogashArmy_Historical
	Icon = HeroRogashIcon
	Banner = BannerAngmar
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerAngmar
	HeroTemplateName = AngmarMorgramir
	PlayerArmy = AngmarMorgramirArmy_Historical
	Icon = HeroMorgramirIcon
	Banner = BannerAngmar
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerAngmar
	HeroTemplateName = AngmarWitchking
	PlayerArmy = AngmarWitchKingArmy_Historical
	Icon = HeroAngmarWitchkingIcon
	Banner = BannerAngmar
End

SpawnArmy
	ScriptingName = HeroArmy4
	SpawnForTemplates = PlayerAngmar
	HeroTemplateName = AngmarHwaldar
	PlayerArmy = HwaldarPlayerArmy
	Icon = HeroHwaldarIcon
	Banner = BannerAngmar
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerAngmar
	PlayerArmy = Angmar_StartingArmy
	Icon = AngmarArmyIcon
End


		;//////////////// Cities (Yes, this is a hack for mouse over movies.) ////////////////
		//#include "..\Common\LivingWorldCities.inc"


		;//////////////// VISUAL FLUFF ////////////////
		EyeTowerPoints
			LookPoint = X:436 Y:687 ; Rohan
			LookPoint = X:481 Y:287
			LookPoint = X:1179 Y:461
			LookPoint = X:947 Y:917
			LookPoint = X:172 Y:573 ; Isengard
			LookPoint = X:160 Y:560 ; Isengard
			LookPoint = X:175 Y:557 ; Isengard
			LookPoint = X:171 Y:348 ; Helm's Deep
			LookPoint = X:257 Y:535 ; Helm's Deep
			LookPoint = X:120 Y:350 ; Helm's Deep
			LookPoint = X:157 Y:420 ; Helm's Deep
		End		
	End
End
