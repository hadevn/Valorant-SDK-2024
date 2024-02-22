// WidgetBlueprintGeneratedClass AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C
// Size: 0x343 (Inherited: 0x2e0)
struct UAudioCheckboxSettingsWidget_Gamepad_C : UBaseSettingsWidgetGamepad {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* Background; // 0x2e8(0x08)
	struct UTextBlock* DisplayNameText; // 0x2f0(0x08)
	struct UImage* Image_1; // 0x2f8(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x300(0x08)
	struct USharedCheckboxButton_C* SharedCheckboxButton; // 0x308(0x08)
	struct FText DisplayText; // 0x310(0x18)
	struct FText DisplayTooltip; // 0x328(0x18)
	enum class EAresBoolSettingName SettingName; // 0x340(0x01)
	bool DefaultValue; // 0x341(0x01)
	bool IsChecked; // 0x342(0x01)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	bool ShouldDisplay(); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void SetCheckmark(bool IsChecked); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.SetCheckmark // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void GetRoamingSettingsManager(struct URoamingSettingsManager*& RoamingSettingsManager); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.GetRoamingSettingsManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void SetStaticText(); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void OnSynchronizeProperties(); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x40ca1b0
	void Construct(); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40ca1b0
	void BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x40ca1b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40ca1b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40ca1b0
	void SaveSetting(); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40ca1b0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40ca1b0
	void ExecuteUbergraph_AudioCheckboxSettingsWidget_Gamepad(int32_t EntryPoint); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.ExecuteUbergraph_AudioCheckboxSettingsWidget_Gamepad // (Final|UbergraphFunction|HasDefaults) // @ game+0x40ca1b0
};

