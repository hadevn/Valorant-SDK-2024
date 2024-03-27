// WidgetBlueprintGeneratedClass TransitionManagerWidgetBP.TransitionManagerWidgetBP_C
// Size: 0x30c (Inherited: 0x2e0)
struct UTransitionManagerWidgetBP_C : UTransitionManagerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* LetterboxBottom; // 0x2e8(0x08)
	struct UImage* LetterboxLeft; // 0x2f0(0x08)
	struct UImage* LetterboxRight; // 0x2f8(0x08)
	struct UImage* LetterboxTop; // 0x300(0x08)
	float TargetAspectRatio; // 0x308(0x04)

	void HandleWidgetAddedToContainerWidget(struct USimpleLifecycleWidget* TransitionWidget, struct UPanelSlot* LayoutSlot); // Function TransitionManagerWidgetBP.TransitionManagerWidgetBP_C.HandleWidgetAddedToContainerWidget // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TransitionManagerWidgetBP.TransitionManagerWidgetBP_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x41999b0
	void ExecuteUbergraph_TransitionManagerWidgetBP(int32_t EntryPoint); // Function TransitionManagerWidgetBP.TransitionManagerWidgetBP_C.ExecuteUbergraph_TransitionManagerWidgetBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x41999b0
};

