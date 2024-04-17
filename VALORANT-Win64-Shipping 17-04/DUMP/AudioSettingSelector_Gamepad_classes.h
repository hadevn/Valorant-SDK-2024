// WidgetBlueprintGeneratedClass AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C
// Size: 0x364 (Inherited: 0x2e0)
struct UAudioSettingSelector_Gamepad_C : UBaseSettingsWidgetGamepad {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* Background; // 0x2e8(0x08)
	struct UTextBlock* CurrentAudioChannelsTextBlock; // 0x2f0(0x08)
	struct UTextBlock* DisplayNameText; // 0x2f8(0x08)
	struct UImage* Image_1; // 0x300(0x08)
	struct UComboBoxString* SettingDropdown; // 0x308(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x310(0x08)
	bool IsInitialized; // 0x318(0x01)
	enum class EAresIntSettingName SettingName; // 0x319(0x01)
	char pad_31A[0x6]; // 0x31a(0x06)
	struct TArray<struct FAudioSetting> SettingValues; // 0x320(0x10)
	struct FText DisplayText; // 0x330(0x18)
	struct FText DisplayTooltip; // 0x348(0x18)
	int32_t ValueToSave; // 0x360(0x04)

	void SetupHRTFCheckbox(); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.SetupHRTFCheckbox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	bool ShouldDisplay(); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void SetStaticText(); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void GetDirectoryForDisplayName(struct FText DisplayName, struct FString& Directory); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.GetDirectoryForDisplayName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void GetDisplayNameForDirectory(struct FString Directory, struct FText& DisplayName); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.GetDisplayNameForDirectory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void GetLanguageFromDirectory(struct FString Directory); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.GetLanguageFromDirectory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void Construct(); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4282c30
	void BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x4282c30
	void SaveSetting(); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x4282c30
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x4282c30
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4282c30
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4282c30
	void OnInitialized(); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4282c30
	void SetupCurrentAudioChannelsTextBlock(); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.SetupCurrentAudioChannelsTextBlock // (BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void ExecuteUbergraph_AudioSettingSelector_Gamepad(int32_t EntryPoint); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.ExecuteUbergraph_AudioSettingSelector_Gamepad // (Final|UbergraphFunction|HasDefaults) // @ game+0x4282c30
};

