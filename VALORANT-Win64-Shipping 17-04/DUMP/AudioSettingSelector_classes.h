// WidgetBlueprintGeneratedClass AudioSettingSelector.AudioSettingSelector_C
// Size: 0x34c (Inherited: 0x2c8)
struct UAudioSettingSelector_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* Background; // 0x2d0(0x08)
	struct UTextBlock* CurrentAudioChannelsTextBlock; // 0x2d8(0x08)
	struct UTextBlock* DisplayNameText; // 0x2e0(0x08)
	struct UImage* Image_1; // 0x2e8(0x08)
	struct UComboBoxString* SettingDropdown; // 0x2f0(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x2f8(0x08)
	bool IsInitialized; // 0x300(0x01)
	enum class EAresIntSettingName SettingName; // 0x301(0x01)
	char pad_302[0x6]; // 0x302(0x06)
	struct TArray<struct FAudioSetting> SettingValues; // 0x308(0x10)
	struct FText DisplayText; // 0x318(0x18)
	struct FText DisplayTooltip; // 0x330(0x18)
	int32_t ValueToSave; // 0x348(0x04)

	void SetupHRTFCheckbox(); // Function AudioSettingSelector.AudioSettingSelector_C.SetupHRTFCheckbox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	bool ShouldDisplay(); // Function AudioSettingSelector.AudioSettingSelector_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void SetStaticText(); // Function AudioSettingSelector.AudioSettingSelector_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void GetDirectoryForDisplayName(struct FText DisplayName, struct FString& Directory); // Function AudioSettingSelector.AudioSettingSelector_C.GetDirectoryForDisplayName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void GetDisplayNameForDirectory(struct FString Directory, struct FText& DisplayName); // Function AudioSettingSelector.AudioSettingSelector_C.GetDisplayNameForDirectory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void GetLanguageFromDirectory(struct FString Directory); // Function AudioSettingSelector.AudioSettingSelector_C.GetLanguageFromDirectory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void Construct(); // Function AudioSettingSelector.AudioSettingSelector_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4282c30
	void BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function AudioSettingSelector.AudioSettingSelector_C.BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x4282c30
	void SaveSetting(); // Function AudioSettingSelector.AudioSettingSelector_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void SetupCurrentAudioChannelsTextBlock(); // Function AudioSettingSelector.AudioSettingSelector_C.SetupCurrentAudioChannelsTextBlock // (BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void ExecuteUbergraph_AudioSettingSelector(int32_t EntryPoint); // Function AudioSettingSelector.AudioSettingSelector_C.ExecuteUbergraph_AudioSettingSelector // (Final|UbergraphFunction|HasDefaults) // @ game+0x4282c30
};

