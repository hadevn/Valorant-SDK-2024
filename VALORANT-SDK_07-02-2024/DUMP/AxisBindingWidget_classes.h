// WidgetBlueprintGeneratedClass AxisBindingWidget.AxisBindingWidget_C
// Size: 0x398 (Inherited: 0x2c8)
struct UAxisBindingWidget_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* Background; // 0x2d0(0x08)
	struct UTextBlock* DisplayNameText; // 0x2d8(0x08)
	struct UAresKeyboardKeyBindWidget_C* PrimaryBinding; // 0x2e0(0x08)
	struct UAresKeyboardKeyBindWidget_C* SecondaryBinding; // 0x2e8(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x2f0(0x08)
	struct FText DisplayText; // 0x2f8(0x18)
	struct FText DisplayTooltip; // 0x310(0x18)
	struct FName SettingName; // 0x328(0x0c)
	bool IsPositiveScale; // 0x334(0x01)
	bool AllowModifierKeys; // 0x335(0x01)
	enum class EActionBindSetUserLayer Layer; // 0x336(0x01)
	char pad_337[0x1]; // 0x337(0x01)
	struct FName CharacterName; // 0x338(0x0c)
	bool bFallBackToLowerLayers; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	struct TMap<enum class EActionBindSetUserLayer, struct FLinearColor> HighlightColorsForLayers; // 0x348(0x50)

	void UpdateCharacter(struct UCharacterHandle* Character); // Function AxisBindingWidget.AxisBindingWidget_C.UpdateCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void SetStaticUI(); // Function AxisBindingWidget.AxisBindingWidget_C.SetStaticUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void Construct(); // Function AxisBindingWidget.AxisBindingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	void OnSynchronizeProperties(); // Function AxisBindingWidget.AxisBindingWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x40572e0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AxisBindingWidget.AxisBindingWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AxisBindingWidget.AxisBindingWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	void ExecuteUbergraph_AxisBindingWidget(int32_t EntryPoint); // Function AxisBindingWidget.AxisBindingWidget_C.ExecuteUbergraph_AxisBindingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x40572e0
};

