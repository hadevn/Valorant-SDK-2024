// WidgetBlueprintGeneratedClass SharedCheckboxButton.SharedCheckboxButton_C
// Size: 0x3a0 (Inherited: 0x2c8)
struct USharedCheckboxButton_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* Default; // 0x2d0(0x08)
	struct UWidgetAnimation* Disabled; // 0x2d8(0x08)
	struct UWidgetAnimation* OnClick; // 0x2e0(0x08)
	struct UWidgetAnimation* hover; // 0x2e8(0x08)
	struct UButton* Button; // 0x2f0(0x08)
	struct UOverlay* ButtonContainer; // 0x2f8(0x08)
	struct UImage* CheckboxBG; // 0x300(0x08)
	struct UImage* CheckboxMG; // 0x308(0x08)
	struct UImage* IconButton; // 0x310(0x08)
	struct UOverlay* Overlay_1; // 0x318(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x320(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x330(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x340(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x350(0x10)
	bool Enabled; // 0x360(0x01)
	enum class EUMGSequencePlayMode NewVar_1; // 0x361(0x01)
	bool DarkHoverEnable; // 0x362(0x01)
	bool ShadowEnable; // 0x363(0x01)
	char pad_364[0x4]; // 0x364(0x04)
	struct FMulticastInlineDelegate OnDisabled; // 0x368(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x378(0x10)
	struct UTexture2D* Icon; // 0x388(0x08)
	struct FLinearColor IconColor; // 0x390(0x10)

	void StopAllAnimationsBlueprint(); // Function SharedCheckboxButton.SharedCheckboxButton_C.StopAllAnimationsBlueprint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void SetIsEnabledOverride(bool InIsEnabled); // Function SharedCheckboxButton.SharedCheckboxButton_C.SetIsEnabledOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void SetImage(); // Function SharedCheckboxButton.SharedCheckboxButton_C.SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void SetButtonEnabled(bool IsEnabled); // Function SharedCheckboxButton.SharedCheckboxButton_C.SetButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void SetButtonVisibility(enum class ESlateVisibility Visibility); // Function SharedCheckboxButton.SharedCheckboxButton_C.SetButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_203_OnButtonHoverEvent__DelegateSignature(); // Function SharedCheckboxButton.SharedCheckboxButton_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_203_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x4282c30
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_257_OnButtonHoverEvent__DelegateSignature(); // Function SharedCheckboxButton.SharedCheckboxButton_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_257_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x4282c30
	void Construct(); // Function SharedCheckboxButton.SharedCheckboxButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4282c30
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature(); // Function SharedCheckboxButton.SharedCheckboxButton_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x4282c30
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature(); // Function SharedCheckboxButton.SharedCheckboxButton_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x4282c30
	void OnSynchronizeProperties(); // Function SharedCheckboxButton.SharedCheckboxButton_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x4282c30
	void BndEvt__Button_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature(); // Function SharedCheckboxButton.SharedCheckboxButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x4282c30
	void ExecuteUbergraph_SharedCheckboxButton(int32_t EntryPoint); // Function SharedCheckboxButton.SharedCheckboxButton_C.ExecuteUbergraph_SharedCheckboxButton // (Final|UbergraphFunction) // @ game+0x4282c30
	void OnReleased__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function SharedCheckboxButton.SharedCheckboxButton_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void OnDisabled__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function SharedCheckboxButton.SharedCheckboxButton_C.OnDisabled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void OnPressed__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function SharedCheckboxButton.SharedCheckboxButton_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void OnUnHovered__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function SharedCheckboxButton.SharedCheckboxButton_C.OnUnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void OnHovered__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function SharedCheckboxButton.SharedCheckboxButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void OnClicked__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function SharedCheckboxButton.SharedCheckboxButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
};

