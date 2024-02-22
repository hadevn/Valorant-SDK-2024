// WidgetBlueprintGeneratedClass AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C
// Size: 0x458 (Inherited: 0x2c8)
struct UAresKeyboardKeyBindWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* hover; // 0x2d0(0x08)
	struct UImage* Background; // 0x2d8(0x08)
	struct UImage* Backing; // 0x2e0(0x08)
	struct UImage* Border; // 0x2e8(0x08)
	struct UButton* ClearBindingBtn; // 0x2f0(0x08)
	struct UImage* ConflictHighlight; // 0x2f8(0x08)
	struct UInputKeySelector* InputKeySelector; // 0x300(0x08)
	struct UImage* LayerHighlight; // 0x308(0x08)
	struct UMenuAnchor* MenuAnchor_60; // 0x310(0x08)
	struct UButton* RevertBindingBtn; // 0x318(0x08)
	struct UVerticalBox* TapHoldContainer; // 0x320(0x08)
	struct UAresComboBox* TapHoldTypeComboBox; // 0x328(0x08)
	struct FMulticastInlineDelegate OnKeySelected; // 0x330(0x10)
	struct FName SettingName; // 0x340(0x0c)
	int32_t BindIndex; // 0x34c(0x04)
	bool Initialized; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct FActionChord LastBoundKey; // 0x358(0x28)
	struct FActionChord UnbindKey; // 0x380(0x28)
	bool IsAxis; // 0x3a8(0x01)
	bool IsPositiveAxis; // 0x3a9(0x01)
	char pad_3AA[0x6]; // 0x3aa(0x06)
	struct UActionBindSet* ActionBindSet; // 0x3b0(0x08)
	struct FMulticastInlineDelegate ConflictStateChanged; // 0x3b8(0x10)
	enum class EActionBindSetUserLayer Layer; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	struct FName CharacterName; // 0x3cc(0x0c)
	bool bFallBackToLowerLayers; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct TMap<enum class EActionBindSetUserLayer, struct FLinearColor> HighlightColorsForLayers; // 0x3e0(0x50)
	struct FActionChord CurrentBinding; // 0x430(0x28)

	void Handle GFT Changed(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.Handle GFT Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void SaveSetting(); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.SaveSetting // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void UpdateClearButtonVisibility(); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.UpdateClearButtonVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void SetCurrentBinding(struct FActionChord NewValue); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.SetCurrentBinding // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void HasConflictForCurrentCharacter(bool& bHasConflict); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.HasConflictForCurrentCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x40ca1b0
	void UpdateCharacter(struct FName CharacterName); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.UpdateCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	bool ShouldDisplay(); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void UpdateConflictState(bool HasConflicts, struct FName Character); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.UpdateConflictState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	struct UWidget* GetUnbindTooltip(); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.GetUnbindTooltip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void Initialize(struct FName SettingName, int32_t BindIndex, bool IsAxis, bool IsPositiveAxis, bool AllowModifierKeys, enum class EActionBindSetUserLayer Layer, struct FName CharacterName, bool bFallBackToLowerLayers, struct TMap<enum class EActionBindSetUserLayer, struct FLinearColor> HighlightColorsForLayers); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void UpdateActionFromSettings(); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.UpdateActionFromSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40ca1b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40ca1b0
	void BndEvt__InputKeySelector_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature(); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.BndEvt__InputKeySelector_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0x40ca1b0
	void BndEvt__ClearBindingBtn_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.BndEvt__ClearBindingBtn_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x40ca1b0
	void AresKeyBindWidgetInitialized(); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.AresKeyBindWidgetInitialized // (BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void ActionBindingChanged(struct UActionBindSet* ActionBindSet, int32_t BindIndex, enum class EActionBindChangeSource ChangeSource, struct FName Character); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.ActionBindingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void Destruct(); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40ca1b0
	void BndEvt__InputKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.BndEvt__InputKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature // (BlueprintEvent) // @ game+0x40ca1b0
	void ConflictStateupdated(struct UActionBindSet* ActionBindSet, int32_t BindIndex, bool bHasConflict, struct FName Character); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.ConflictStateupdated // (BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void BndEvt__RevertBindingBtn_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature(); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.BndEvt__RevertBindingBtn_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x40ca1b0
	void BndEvt__AresKeyboardKeyBindWidget_TapHoldTypeComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.BndEvt__AresKeyboardKeyBindWidget_TapHoldTypeComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x40ca1b0
	void ExecuteUbergraph_AresKeyboardKeyBindWidget(int32_t EntryPoint); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.ExecuteUbergraph_AresKeyboardKeyBindWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x40ca1b0
	void ConflictStateChanged__DelegateSignature(bool bIsConflicted, struct FName Character, bool bIsUpdateForCurrentCharacter); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.ConflictStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function AresKeyboardKeyBindWidget.AresKeyboardKeyBindWidget_C.OnKeySelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
};

