// WidgetBlueprintGeneratedClass CustomCloseButton.CustomCloseButton_C
// Size: 0x341 (Inherited: 0x2c8)
struct UCustomCloseButton_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* HoverAnim; // 0x2d0(0x08)
	struct UButton* BackButton; // 0x2d8(0x08)
	struct UButton* BackgroundBackButton; // 0x2e0(0x08)
	struct UImage* BackImage; // 0x2e8(0x08)
	struct UHorizontalBox* CloseButtonMode; // 0x2f0(0x08)
	struct UImage* Image_406; // 0x2f8(0x08)
	struct UVerticalBox* KeybindClose; // 0x300(0x08)
	struct UMenuAnchor* MenuAnchor_127; // 0x308(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x310(0x10)
	bool ListenToEscapeKey; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct UAkAudioEvent* AUD_Hovered; // 0x328(0x08)
	struct UAkAudioEvent* AUD_Unhovered; // 0x330(0x08)
	struct UAkAudioEvent* AUD_Click; // 0x338(0x08)
	bool ShowKeybind; // 0x340(0x01)

	struct UWidget* OnGetMenuContent_1(); // Function CustomCloseButton.CustomCloseButton_C.OnGetMenuContent_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CustomCloseButton.CustomCloseButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4317a70
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function CustomCloseButton.CustomCloseButton_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x4317a70
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function CustomCloseButton.CustomCloseButton_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x4317a70
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function CustomCloseButton.CustomCloseButton_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x4317a70
	void BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function CustomCloseButton.CustomCloseButton_C.BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x4317a70
	void BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function CustomCloseButton.CustomCloseButton_C.BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x4317a70
	void BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function CustomCloseButton.CustomCloseButton_C.BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x4317a70
	void OnSynchronizeProperties(); // Function CustomCloseButton.CustomCloseButton_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x4317a70
	void ExecuteUbergraph_CustomCloseButton(int32_t EntryPoint); // Function CustomCloseButton.CustomCloseButton_C.ExecuteUbergraph_CustomCloseButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x4317a70
	void OnClicked__DelegateSignature(); // Function CustomCloseButton.CustomCloseButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
};

