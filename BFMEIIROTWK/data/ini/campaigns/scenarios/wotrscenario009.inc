//-------------------------------------------------------------------------------------------------
// Scenario Name:		4 Players, All territories claimed
// Scenario Description:	This is a 4 player game with all territories claimed by preset starting locations (Arnor Mordor Rohan Lothlorien)
// Unavailable Territories:	None
// # of Players:		4
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario009

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario009
		DisplayDescription 	= LWScenario:WOTRScenario009Description
		DisplayGameType 	= LWScenario:WOTRGameType001
		DisplayObjectives 	= LWScenario:WOTRObjectives001
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = DefaultCampaign
		
		MaxPlayers = 4
		
		DisallowStartInRegions = Buckland Cair_Andros Celduin Dagorlad Dol_Guldur Dunland Enedwaith Erebor Ettenmoors Fangorn Forlindon Gap_Of_Rohan Anfalas Belfalas Harad Harlindon Iron_Hills Isengard Ithilien Minas_Morgul Minas_Tirith Minhiriath Mirkwood Mount_Doom Osgiliath Redhorn_Pass Rhun Rivendell The_Black_Gate The_Dead_Marshes The_Shire Tower_Hills Umbar Angmar Cardolan Carrock The_Brown_Lands Fornost Amon_Sul Lostriand Rhudaur Barrow_Downs CarnDum Forodwaith MountGundabad Grey_Havens Helms_Deep High_Pass
		DefaultStartSpots = Arnor Mordor Rohan Lothlorien
		
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
			Regions = Amon_Sul Arnor Barrow_Downs Buckland Forlindon Fornost Forodwaith Grey_Havens Harlindon Rhudaur Rivendell The_Shire Tower_Hills
			StartRegion = Arnor
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Arnor
			End
		End
		
		OwnershipSet
			Regions = Angmar CarnDum Carrock Ettenmoors Fangorn Gap_Of_Rohan High_Pass Isengard Lostriand Lothlorien Mirkwood MountGundabad Redhorn_Pass 
			StartRegion = Lothlorien
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Lothlorien
			End
		End

		OwnershipSet
			Regions = Anfalas Belfalas Cair_Andros Cardolan Dunland Enedwaith Helms_Deep Minas_Tirith Minhiriath Osgiliath Rohan The_Brown_Lands Umbar
			StartRegion = Rohan
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Rohan
			End
		End

		OwnershipSet
			Regions = Celduin Dagorlad Dol_Guldur Erebor Harad Iron_Hills Ithilien Minas_Morgul Mordor Mount_Doom Rhun The_Black_Gate The_Dead_Marshes
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