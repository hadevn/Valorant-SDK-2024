// WidgetBlueprintGeneratedClass AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C
// Size: 0x32c (Inherited: 0x2c8)
struct UAudioCheckboxSettingsWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* Background; // 0x2d0(0x08)
	struct UTextBlock* DisplayNameText; // 0x2d8(0x08)
	struct UImage* Image_1; // 0x2e0(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x2e8(0x08)
	struct USharedCheckboxButton_C* SharedCheckboxButton; // 0x2f0(0x08)
	struct FText DisplayText; // 0x2f8(0x18)
	struct FText DisplayTooltip; // 0x310(0x18)
	enum class EAresBoolSettingName SettingName; // 0x328(0x01)
	bool DefaultValue; // 0x329(0x01)
	bool IsChecked; // 0x32a(0x01)
	enum class ESlateVisibility DefaultVisibility; // 0x32b(0x01)

	bool ShouldDisplay(); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void SetCheckmark(bool IsChecked); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.SetCheckmark // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void GetRoamingSettingsManager(struct URoamingSettingsManager*& RoamingSettingsManager); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.GetRoamingSettingsManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void SetStaticText(); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void OnSynchronizeProperties(); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x40572e0
	void Construct(); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	void BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x40572e0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	void SaveSetting(); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void ExecuteUbergraph_AudioCheckboxSettingsWidget(int32_t EntryPoint); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.ExecuteUbergraph_AudioCheckboxSettingsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x40572e0
};

