
	Behavior = SpecialAbilityUpdate ModuleTag_ChargeUpdate
		SpecialPowerTemplate		= SpecialAbilityAngmarCharge
		StartAbilityRange		= 150.0 ;Negative distances will cause the unit to overshoot the destination.
		AbilityAbortRange		= 50.0 ;
		PreparationTime			= 0 ;
		PackTime			= 3000; without this pack time, the charge would not complete
;		TriggerSound			= GondorSoldierVoiceEnterStateAttackCharge
		TriggerAttributeModifier	= AngmarChargeBonus
		AttributeModifierDuration	= 10000
		ChargeAttackSpeedBoost		= Yes
		IgnoreFacingCheck		= Yes
	End
