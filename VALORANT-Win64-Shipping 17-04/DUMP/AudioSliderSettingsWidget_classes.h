// WidgetBlueprintGeneratedClass AudioSliderSettingsWidget.AudioSliderSettingsWidget_C
// Size: 0x341 (Inherited: 0x2c8)
struct UAudioSliderSettingsWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* Background; // 0x2d0(0x08)
	struct UTextBlock* DisplayNameText; // 0x2d8(0x08)
	struct UImage* Image_1; // 0x2e0(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x2e8(0x08)
	struct USharedCheckboxButton_C* SharedCheckboxButton; // 0x2f0(0x08)
	struct USlider* ValueSlider; // 0x2f8(0x08)
	struct FText DisplayText; // 0x300(0x18)
	struct FText DisplayTooltip; // 0x318(0x18)
	enum class EAresFloatSettingName SettingName; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	int32_t ValueMultiplier; // 0x334(0x04)
	float DefaultValue; // 0x338(0x04)
	float StepSize; // 0x33c(0x04)
	bool IsChecked; // 0x340(0x01)

	bool ShouldDisplay(); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void SetCheckmark(bool IsChecked); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.SetCheckmark // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void SetStaticText(); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void BndEvt__ValueSlider_K2Node_ComponentBoundEvent_18_OnMouseCaptureEndEvent__DelegateSignature(); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.BndEvt__ValueSlider_K2Node_ComponentBoundEvent_18_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x4282c30
	void OnSynchronizeProperties(); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x4282c30
	void Construct(); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4282c30
	void BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x4282c30
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x4282c30
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x4282c30
	void SaveSetting(); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void ExecuteUbergraph_AudioSliderSettingsWidget(int32_t EntryPoint); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.ExecuteUbergraph_AudioSliderSettingsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x4282c30
};

