
//-------------------------------------------------------------------------------------------------
// Victory Types usable by scenarios
// Created by: JHamel based on contents of old WOTRScenario001 through WOTRScenario044
//-------------------------------------------------------------------------------------------------

// VERY,VERY, VERY important since the MPRules uses hardcoded values the order that these load in must match them!!!!

LivingWorldVictoryType
	DisplayGameType 	= LWScenario:WOTRGameType002		// Elimination, pulled from WOTRScenario012 through 022
									// Also 044 (Historical)
									// Can historical *really* be played with *any* victory type?
	DisplayObjectives 	= LWScenario:WOTRObjectives002
	DisplayVictoriousText	= LWScenario:WOTREliminationWin001
	DisplayDefeatedText	= LWScenario:WOTREliminationLose001

	PlayerDefeatCondition
		Teams = 1 2
		LoseIfCapitalLost = No
		NumControlledRegionsLessOrEqualTo = 0
	End
		
	TeamDefeatCondition
		Teams = 1 2
		NumControlledRegionsLessOrEqualTo = 0
	End
End

LivingWorldVictoryType		
	DisplayGameType 	= LWScenario:WOTRGameType001		// Capital Assault, pulled from WOTRScenario001 through 011
									// Also 042 and 043 (War in the North and South)
									
	DisplayObjectives 	= LWScenario:WOTRObjectives001
	DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
	DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001
		
	PlayerDefeatCondition
		Teams = 1 2
		LoseIfCapitalLost = Yes
		NumControlledRegionsLessOrEqualTo = 0
	End
		
	TeamDefeatCondition
		Teams = 1 2
		NumControlledRegionsLessOrEqualTo = 0
	End
End

LivingWorldVictoryType
	DisplayGameType 	= LWScenario:WOTRGameType004		// Conquest, used only in WOTRScenario041 (Strongholds)
	DisplayObjectives 	= LWScenario:WOTRObjectives006
	DisplayVictoriousText	= LWScenario:WOTRGenericWin002
	DisplayDefeatedText	= LWScenario:WOTRGenericLose002
								
									// It might be interesting to let the *scenario* override
									// the required territories here, *if* victory type "Conquest" is chosen
									// We could then use this Victory type to create symmetric or even
									// assymmetric "Race" scenarios similar to capital assault, but where
									// you must defend a territory you don't start in,
									// That is:  Player 1 starts in Gondor and loses if the Shire is taken.
									//      vs.  Player 2 starts in Mordor and loses if Moria is taken
									// (as an example)
	
	// This is what Scenario41 currently has, so if we move it to the victory type, it would be the only victory conditions for "Conquest"
	PlayerDefeatCondition
		Teams = 1 2
		LoseIfCapitalLost = No
		NumControlledRegionsLessOrEqualTo = 0
	End

	TeamDefeatCondition
		Teams = 1 2
		NumControlledRegionsLessOrEqualTo = 0
	End

	TeamVictoryCondition
		Teams = 1 2
		ControlledRegions = Dol_Guldur Erebor Helms_Deep Isengard Minas_Morgul Minas_Tirith Rivendell CarnDum Fornost
		//ControlledRegionsHeldForTurns = 3
	End
End

LivingWorldVictoryType
	DisplayGameType 	= LWScenario:WOTRGameType003		// Oops, we need a unique game type if we use DisplayGameType for lookup
									// This refers to MpGameRules enum WORLD_DOM_A
									// Pulled from WOTRScenario023 through 028
	DisplayObjectives 	= LWScenario:WOTRObjectives003		// Matches VALUE:WorldDomB, aka World Domination - 20 		
	DisplayVictoriousText	= LWScenario:WOTRGenericWin001
	DisplayDefeatedText	= LWScenario:WOTRGenericLose001
	
	PlayerDefeatCondition
		Teams = 1 2
		LoseIfCapitalLost = No
		NumControlledRegionsLessOrEqualTo = 0
	End
		
	TeamDefeatCondition
		Teams = 1 2
		NumControlledRegionsLessOrEqualTo = 0
	End
		
	TeamVictoryCondition
		Teams = 1 2
		NumControlledRegionsGreaterOrEqualTo = 20
	End
End

LivingWorldVictoryType
	DisplayGameType 	= LWScenario:WOTRGameType003		// Oops, we need a unique game type if we use DisplayGameType for lookup
									// This refers to MpGameRules enum WORLD_DOM_B
									// Pulled from WOTRScenario029 through 034
	DisplayObjectives 	= LWScenario:WOTRObjectives004		// Matches VALUE:WorldDomB, aka World Domination - 30 
	DisplayVictoriousText	= LWScenario:WOTRGenericWin001
	DisplayDefeatedText	= LWScenario:WOTRGenericLose001

	PlayerDefeatCondition
		Teams = 1 2
		LoseIfCapitalLost = No
		NumControlledRegionsLessOrEqualTo = 0
	End
		
	TeamDefeatCondition
		Teams = 1 2
		NumControlledRegionsLessOrEqualTo = 0
	End
		
	TeamVictoryCondition
		Teams = 1 2
		NumControlledRegionsGreaterOrEqualTo = 30
	End
End


LivingWorldVictoryType
	DisplayGameType 	= LWScenario:WOTRGameType003		// Oops, we need a unique game type if we use DisplayGameType for lookup
									// This refers to MpGameRules enum WORLD_DOM_C
									// Not used by any scenario right now
	DisplayObjectives 	= LWScenario:WOTRObjectives007		// Matches VALUE:WorldDomC, aka World Domination - 40 
	DisplayVictoriousText	= LWScenario:WOTRGenericWin001
	DisplayDefeatedText	= LWScenario:WOTRGenericLose001

	PlayerDefeatCondition
		Teams = 1 2
		LoseIfCapitalLost = No
		NumControlledRegionsLessOrEqualTo = 0
	End
		
	TeamDefeatCondition
		Teams = 1 2
		NumControlledRegionsLessOrEqualTo = 0
	End
		
	TeamVictoryCondition
		Teams = 1 2
		NumControlledRegionsGreaterOrEqualTo = 40
	End
End

LivingWorldVictoryType
	DisplayGameType 	= LWScenario:WOTRGameType003		// Oops, we need a unique game type if we use DisplayGameType for lookup
									// This refers to MpGameRules enum WORLD_DOM_ALL
									// Pulled from WOTRScenario035 through 040
	DisplayObjectives 	= LWScenario:WOTRObjectives005		// Matches VALUE:WorldDomAll, aka World Domination - All 
	DisplayObjectives 	= LWScenario:WOTRObjectives005
	DisplayVictoriousText	= LWScenario:WOTRGenericWin001
	DisplayDefeatedText	= LWScenario:WOTRGenericLose001

	PlayerDefeatCondition
		Teams = 1 2
		LoseIfCapitalLost = No
		NumControlledRegionsLessOrEqualTo = 0
	End
		
	TeamDefeatCondition
		Teams = 1 2
		NumControlledRegionsLessOrEqualTo = 0
	End
		
	TeamVictoryCondition
		Teams = 1 2
		NumControlledRegionsGreaterOrEqualTo = 52		// matches Design Doc.  Is this right?
	End
End





















