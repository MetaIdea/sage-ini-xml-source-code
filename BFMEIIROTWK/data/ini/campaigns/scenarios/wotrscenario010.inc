//-------------------------------------------------------------------------------------------------
// Scenario Name:		3 Players, All territories claimed
// Scenario Description:	This is a 3 player game with all territories claimed by preset starting locations (Arnor Iron_Hills Belfalas)
// Unavailable Territories:	None
// # of Players:		3
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario010

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario010
		DisplayDescription 	= LWScenario:WOTRScenario010Description
		DisplayGameType 	= LWScenario:WOTRGameType001
		DisplayObjectives 	= LWScenario:WOTRObjectives001
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = DefaultCampaign
		
		MaxPlayers = 3
		
		DisallowStartInRegions = Anfalas Buckland Cair_Andros Celduin Dagorlad Dol_Guldur Dunland Enedwaith Erebor Ettenmoors Fangorn Forlindon Gap_Of_Rohan Grey_Havens Harad Harlindon Helms_Deep High_Pass Isengard Ithilien Lothlorien Minas_Morgul Minas_Tirith Minhiriath Mirkwood Mordor Mount_Doom Osgiliath Redhorn_Pass Rhun Rivendell Rohan The_Black_Gate The_Dead_Marshes The_Shire Tower_Hills Umbar Angmar Cardolan Carrock The_Brown_Lands Fornost Amon_Sul Lostriand Rhudaur Barrow_Downs CarnDum Forodwaith MountGundabad
		DefaultStartSpots = Arnor Iron_Hills Belfalas
		
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
			Regions = Amon_Sul Angmar Arnor Barrow_Downs Buckland Cardolan Ettenmoors Forlindon Fornost Grey_Havens Lostriand Harlindon Minhiriath Rhudaur Rivendell The_Shire Tower_Hills
			StartRegion = Arnor
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Arnor
			End
		End

		OwnershipSet
			Regions =  Anfalas Belfalas Cair_Andros Dunland Enedwaith Gap_Of_Rohan Harad Helms_Deep Isengard Ithilien Minas_Tirith Minas_Morgul Mordor Mount_Doom Osgiliath Redhorn_Pass The_Black_Gate Umbar
			StartRegion = Belfalas
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Belfalas
			End
		End
		
		OwnershipSet
			Regions = CarnDum Carrock Celduin Dagorlad Dol_Guldur Erebor Fangorn Forodwaith High_Pass Iron_Hills Lothlorien Mirkwood MountGundabad Rohan Rhun The_Dead_Marshes The_Brown_Lands 
			StartRegion = Iron_Hills
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Iron_Hills
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