// BlueprintGeneratedClass WidgetFunctionLibrary.WidgetFunctionLibrary_C
// Size: 0x30 (Inherited: 0x30)
struct UWidgetFunctionLibrary_C : UBlueprintFunctionLibrary {

	void GetEquippableName(struct AAresEquippable* Equippable, struct UObject* __WorldContext, struct FText& Equippable Name); // Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.GetEquippableName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x4282c30
	bool GetKeyFromActionMapping(struct FName ActionMapping, struct UObject* __WorldContext, struct FInputChord& OutChordStruture, struct FKey& Key); // Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.GetKeyFromActionMapping // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x4282c30
	void GetAllWidgetChildren(struct UPanelWidget* InWidget, struct UObject* __WorldContext, struct TArray<struct UWidget*>& ChildWidgets); // Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.GetAllWidgetChildren // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x4282c30
	void GetAllWidgetChildrenRecursive(struct UPanelWidget* InWidget, struct UObject* __WorldContext, struct TArray<struct UWidget*>& ChildWidgets); // Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.GetAllWidgetChildrenRecursive // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x4282c30
	void CompleteInitScreen(struct UObject* __WorldContext); // Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.CompleteInitScreen // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void SetImageWidgetImage(struct UImage* ImageWidget, struct UObject* ImageToSet, struct UObject* __WorldContext); // Function WidgetFunctionLibrary.WidgetFunctionLibrary_C.SetImageWidgetImage // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
};

