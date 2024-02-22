// BlueprintGeneratedClass GamepadUIData_Type.GamepadUIData_Type_C
// Size: 0xc8 (Inherited: 0x50)
struct UGamepadUIData_Type_C : UAresBasePrimaryDataAsset {
	struct UDataTable* InputIconTable_XboxOne; // 0x50(0x08)
	struct UDataTable* InputIconTable_PlayStation4; // 0x58(0x08)
	struct TMap<struct FName, struct FText> ActionDisplayTextMap; // 0x60(0x50)
	struct FText InvalidActionText; // 0xb0(0x18)

	void GetPlatformSpecificIcons(struct UDataTable*& PlatformIconTable); // Function GamepadUIData_Type.GamepadUIData_Type_C.GetPlatformSpecificIcons // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x40ca1b0
	void GetActionDisplayText(struct FName& ActionName, struct FText& Value); // Function GamepadUIData_Type.GamepadUIData_Type_C.GetActionDisplayText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x40ca1b0
	void GetPlatformInputIcon(struct FKey Input, struct UTexture2D*& Icon); // Function GamepadUIData_Type.GamepadUIData_Type_C.GetPlatformInputIcon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x40ca1b0
};

