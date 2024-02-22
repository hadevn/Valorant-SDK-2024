// WidgetBlueprintGeneratedClass ActionBindingWidget.ActionBindingWidget_C
// Size: 0x3b0 (Inherited: 0x2c8)
struct UActionBindingWidget_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* Background; // 0x2d0(0x08)
	struct UTextBlock* DisplayNameText; // 0x2d8(0x08)
	struct USizeBox* IconSizeBox; // 0x2e0(0x08)
	struct UImage* Image_102; // 0x2e8(0x08)
	struct UAresKeyboardKeyBindWidget_C* PrimaryBinding; // 0x2f0(0x08)
	struct UAresKeyboardKeyBindWidget_C* SecondaryBinding; // 0x2f8(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x300(0x08)
	struct FText DisplayText; // 0x308(0x18)
	struct FText DisplayTooltip; // 0x320(0x18)
	struct FName SettingName; // 0x338(0x0c)
	bool AllowModifierKeys; // 0x344(0x01)
	enum class EActionBindSetUserLayer Layer; // 0x345(0x01)
	char pad_346[0x2]; // 0x346(0x02)
	struct FName CharacterName; // 0x348(0x0c)
	bool bFallBackToLowerLayers; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	struct UTexture2D* Icon; // 0x358(0x08)
	struct TMap<enum class EActionBindSetUserLayer, struct FLinearColor> HighlightColorsForLayers; // 0x360(0x50)

	void UpdateCharacter(struct UCharacterHandle* Character); // Function ActionBindingWidget.ActionBindingWidget_C.UpdateCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void SetIcon(struct UTexture2D* NewIcon); // Function ActionBindingWidget.ActionBindingWidget_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void SetStaticUI(); // Function ActionBindingWidget.ActionBindingWidget_C.SetStaticUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void Construct(); // Function ActionBindingWidget.ActionBindingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40ca1b0
	void OnSynchronizeProperties(); // Function ActionBindingWidget.ActionBindingWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x40ca1b0
	void ChangeSettingName(struct FName NewSettingName); // Function ActionBindingWidget.ActionBindingWidget_C.ChangeSettingName // (BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ActionBindingWidget.ActionBindingWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40ca1b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ActionBindingWidget.ActionBindingWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40ca1b0
	void ExecuteUbergraph_ActionBindingWidget(int32_t EntryPoint); // Function ActionBindingWidget.ActionBindingWidget_C.ExecuteUbergraph_ActionBindingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x40ca1b0
};

