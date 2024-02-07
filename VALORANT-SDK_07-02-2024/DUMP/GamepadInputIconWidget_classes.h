// WidgetBlueprintGeneratedClass GamepadInputIconWidget.GamepadInputIconWidget_C
// Size: 0x388 (Inherited: 0x2f8)
struct UGamepadInputIconWidget_C : UGamepadInputIconBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UWidgetAnimation* OnUnpressed; // 0x300(0x08)
	struct UWidgetAnimation* OnPressed; // 0x308(0x08)
	struct UOverlay* DoubleTapPlaceHolder; // 0x310(0x08)
	struct UImage* HoldArrow; // 0x318(0x08)
	struct UImage* Icon; // 0x320(0x08)
	struct UImage* RadialProgress; // 0x328(0x08)
	struct FKey Key; // 0x330(0x20)
	struct FVector2D Size; // 0x350(0x08)
	struct UMaterialInstanceDynamic* ProgressFill; // 0x358(0x08)
	struct FMulticastInlineDelegate OnHoldTimeChanged; // 0x360(0x10)
	float Total Hold Time; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct FMulticastInlineDelegate OnInputPress; // 0x378(0x10)

	void SetupDoubleTapInputGraphics(bool Enable); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.SetupDoubleTapInputGraphics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void UpdateTapHoldType(enum class EActionChordTapHoldType NewTapHoldType); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.UpdateTapHoldType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void SetupHoldInputGraphics(bool Enable); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.SetupHoldInputGraphics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void Set Total Hold Time(float New Total Hold Time); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.Set Total Hold Time // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void UpdateInputIcon(); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.UpdateInputIcon // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void SetKey(struct FKey Key); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.SetKey // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void PreConstruct(bool IsDesignTime); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	void OnInternalKeyUpdate(); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.OnInternalKeyUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void OnInitialized(); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	void Update Progress Fill(float New Hold Time); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.Update Progress Fill // (BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void On Input Pressed(); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.On Input Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void On Input Released(); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.On Input Released // (BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void ExecuteUbergraph_GamepadInputIconWidget(int32_t EntryPoint); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.ExecuteUbergraph_GamepadInputIconWidget // (Final|UbergraphFunction) // @ game+0x40572e0
	void OnInputPress__DelegateSignature(); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.OnInputPress__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
	void OnHoldTimeChanged__DelegateSignature(float New Hold Time); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.OnHoldTimeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x40572e0
};

