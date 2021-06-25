//-------------------------------------------------------------------------------------------------
// Scenario Name:		5 Players, All territories claimed
// Scenario Description:	This is a 5 player game with all territories claimed by preset starting locations (Mordor Mirkwood Rohan Arnor Cardolan)
// Unavailable Territories:	None
// # of Players:		5
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario008

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario008
		DisplayDescription 	= LWScenario:WOTRScenario008Description
		DisplayGameType 	= LWScenario:WOTRGameType001
		DisplayObjectives 	= LWScenario:WOTRObjectives001
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = DefaultCampaign
		
		MaxPlayers = 5
		
		DisallowStartInRegions = Buckland Cair_Andros Dagorlad Dol_Guldur Dunland Enedwaith Erebor Ettenmoors Gap_Of_Rohan Anfalas Belfalas Grey_Havens Harlindon Helms_Deep High_Pass Iron_Hills Isengard Ithilien Lothlorien Minas_Morgul Minas_Tirith Mount_Doom Osgiliath Redhorn_Pass Rhun Rivendell The_Black_Gate The_Dead_Marshes The_Shire Tower_Hills Umbar Angmar Carrock The_Brown_Lands Fornost Amon_Sul Lostriand Rhudaur Barrow_Downs CarnDum Forodwaith MountGundabad Forlindon Harad Celduin Minhiriath Fangorn
		DefaultStartSpots = Mordor Mirkwood Rohan Arnor Cardolan
		
		PlayerDefeatCondition
			Teams = 1 2
			LoseIfCapitalLost = Yes
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		TeamDefeatCondition
			Teams = 1 2
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		//----------------------------------------------------------
		// OwnershipSets
		//----------------------------------------------------------

		OwnershipSet
			Regions = Amon_Sul Angmar Arnor Buckland CarnDum Ettenmoors Fornost Forodwaith Lostriand The_Shire 
			StartRegion = Arnor
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Arnor
			End
		End
		
		OwnershipSet
			Regions = Barrow_Downs Cardolan Dunland Forlindon Gap_Of_Rohan Grey_Havens Harlindon Isengard Rhudaur Rivendell Tower_Hills
			StartRegion = Cardolan
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Cardolan
			End
		End

		OwnershipSet
			Regions = Carrock Celduin Dol_Guldur Erebor Fangorn High_Pass Iron_Hills Lothlorien Mirkwood MountGundabad Redhorn_Pass 
			StartRegion = Mirkwood
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Mirkwood
			End
		End

		OwnershipSet
			Regions = Anfalas Belfalas Cair_Andros Enedwaith Helms_Deep Minas_Tirith Minhiriath Osgiliath Rohan Umbar 
			StartRegion = Rohan
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Rohan
			End
		End

		OwnershipSet
			Regions = Dagorlad Harad Ithilien Minas_Morgul Mordor Mount_Doom Rhun The_Black_Gate The_Brown_Lands The_Dead_Marshes
			StartRegion = Mordor
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Mordor
			End
		End
	End
	
	
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////

		;///////////////// Armies ////////////////
		#include "..\Common\LivingWorldDefaultArmies.inc"


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