// Class UMG.Visual
// Size: 0x30 (Inherited: 0x30)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x148 (Inherited: 0x30)
struct UWidget : UVisual {
	struct UPanelSlot* Slot; // 0x30(0x08)
	struct FName TagOverride; // 0x38(0x0c)
	struct FName Tag; // 0x44(0x0c)
	struct FDelegate bIsEnabledDelegate; // 0x50(0x14)
	char pad_64[0x4]; // 0x64(0x04)
	struct FText ToolTipText; // 0x68(0x18)
	struct FDelegate ToolTipTextDelegate; // 0x80(0x14)
	char pad_94[0x4]; // 0x94(0x04)
	struct UWidget* ToolTipWidget; // 0x98(0x08)
	struct FDelegate ToolTipWidgetDelegate; // 0xa0(0x14)
	struct FDelegate VisibilityDelegate; // 0xb4(0x14)
	struct FWidgetTransform RenderTransform; // 0xc8(0x1c)
	struct FVector2D RenderTransformPivot; // 0xe4(0x08)
	char bIsVariable : 1; // 0xec(0x01)
	char bCreatedByConstructionScript : 1; // 0xec(0x01)
	char bIsEnabled : 1; // 0xec(0x01)
	char bOverride_Cursor : 1; // 0xec(0x01)
	char pad_EC_4 : 4; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0xf0(0x08)
	char bIsVolatile : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	enum class EMouseCursor Cursor; // 0xf9(0x01)
	enum class EWidgetClipping Clipping; // 0xfa(0x01)
	enum class ESlateVisibility Visibility; // 0xfb(0x01)
	enum class ESlateQuality Quality; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float RenderOpacity; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct UWidgetNavigation* Navigation; // 0x108(0x08)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0x110(0x01)
	char pad_111[0x27]; // 0x111(0x27)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0x138(0x10)

	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility // (Native|Public|BlueprintCallable) // @ game+0x3960080
	void SetUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.SetUserFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x56a1160
	void SetToolTipText(struct FText& InToolTipText); // Function UMG.Widget.SetToolTipText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x56a1080
	void SetToolTip(struct UWidget* Widget); // Function UMG.Widget.SetToolTip // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0ff0
	void SetTagOverride(struct FName InTag); // Function UMG.Widget.SetTagOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0f50
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x56a0e40
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x56a0dc0
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0d40
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0c60
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x56a0be0
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x56a0b60
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0ae0
	void SetQuality(enum class ESlateQuality InQuality); // Function UMG.Widget.SetQuality // (Native|Public|BlueprintCallable) // @ game+0x56a0a50
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget* InWidget); // Function UMG.Widget.SetNavigationRuleExplicit // (Final|Native|Public|BlueprintCallable) // @ game+0x56a08f0
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0800
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0710
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule); // Function UMG.Widget.SetNavigationRuleBase // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0640
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0510
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x56a04f0
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled // (Native|Public|BlueprintCallable) // @ game+0x24349d0
	void SetFocus(); // Function UMG.Widget.SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0450
	void SetCursor(enum class EMouseCursor InCursor); // Function UMG.Widget.SetCursor // (Final|Native|Public|BlueprintCallable) // @ game+0x56a03d0
	void SetClipping(enum class EWidgetClipping InClipping); // Function UMG.Widget.SetClipping // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0350
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0260
	void ResetCursor(); // Function UMG.Widget.ResetCursor // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0240
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // (Native|Public|BlueprintCallable) // @ game+0x36b81f0
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x40572e0
	bool IsVisible(); // Function UMG.Widget.IsVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56a0210
	bool IsHovered(); // Function UMG.Widget.IsHovered // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x382d4e0
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // (Final|Native|Public|BlueprintCallable) // @ game+0x56a01f0
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56a0150
	bool HasUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56a00b0
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569ffe0
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569ffb0
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569ff80
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569ff50
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569ff20
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fef0
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fdd0
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fda0
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fd70
	enum class ESlateQuality GetQuality(); // Function UMG.Widget.GetQuality // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fd40
	struct UPanelWidget* GetParent(); // Function UMG.Widget.GetParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fd10
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fcd0
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fc90
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a85770
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // (Public|Delegate|HasDefaults) // @ game+0x40572e0
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fc60
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	struct UGameInstance* GetGameInstance(); // Function UMG.Widget.GetGameInstance // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fc30
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fbf0
	enum class EWidgetClipping GetClipping(); // Function UMG.Widget.GetClipping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fbc0
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fb80
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	struct FText GetAccessibleText(); // Function UMG.Widget.GetAccessibleText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fad0
	struct FText GetAccessibleSummaryText(); // Function UMG.Widget.GetAccessibleSummaryText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fa20
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile // (Final|Native|Public|BlueprintCallable) // @ game+0x569f990
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // (Final|Native|Public|BlueprintCallable) // @ game+0x569f970
};

// Class UMG.UserWidget
// Size: 0x2c8 (Inherited: 0x148)
struct UUserWidget : UWidget {
	char pad_148[0x8]; // 0x148(0x08)
	struct FLinearColor ColorAndOpacity; // 0x150(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x160(0x14)
	char pad_174[0x4]; // 0x174(0x04)
	struct FSlateColor ForegroundColor; // 0x178(0x28)
	struct FDelegate ForegroundColorDelegate; // 0x1a0(0x14)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct FMulticastInlineDelegate OnVisibilityChanged; // 0x1b8(0x10)
	char pad_1C8[0x18]; // 0x1c8(0x18)
	struct FMargin Padding; // 0x1e0(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1f0(0x10)
	struct UUMGSequenceTickManager* AnimationTickManager; // 0x200(0x08)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x208(0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x218(0x10)
	struct UWidgetTree* WidgetTree; // 0x228(0x08)
	int32_t Priority; // 0x230(0x04)
	char bSupportsKeyboardFocus : 1; // 0x234(0x01)
	char bIsFocusable : 1; // 0x234(0x01)
	char bFlushPressedKeysOnAcquiringFocusFromViewport : 1; // 0x234(0x01)
	char bStopAction : 1; // 0x234(0x01)
	char bHasScriptImplementedTick : 1; // 0x234(0x01)
	char bHasScriptImplementedPaint : 1; // 0x234(0x01)
	char pad_234_6 : 2; // 0x234(0x01)
	char pad_235[0xb]; // 0x235(0x0b)
	enum class EWidgetTickFrequency TickFrequency; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct UInputComponent* InputComponent; // 0x248(0x08)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x250(0x10)
	char pad_260[0x48]; // 0x260(0x48)
	bool bCreateWidgetOnInitAndKeepInMemory; // 0x2a8(0x01)
	char pad_2A9[0x1f]; // 0x2a9(0x1f)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x569bb80
	void UnpinSlateWidget(); // Function UMG.UserWidget.UnpinSlateWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x569bb60
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x569ba70
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x569b980
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x569b8f0
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x569b860
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	void StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // Function UMG.UserWidget.StopListeningForInputAction // (Final|Native|Protected|BlueprintCallable) // @ game+0x569b770
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // (Final|Native|Protected|BlueprintCallable) // @ game+0x569b750
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions // (Final|Native|Public|BlueprintCallable) // @ game+0x569b730
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.StopAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x569b6a0
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // (Final|Native|Public|BlueprintCallable) // @ game+0x569b680
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x569af40
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x569ae70
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x569ade0
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x569ad50
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x569ab70
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority // (Final|Native|Protected|BlueprintCallable) // @ game+0x569a800
	void SetInputActionBlocking(bool bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking // (Final|Native|Protected|BlueprintCallable) // @ game+0x569a770
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x569a5f0
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x569a340
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x569a220
	void SetAnimationCurrentTime(struct UWidgetAnimation* InAnimation, float InTime); // Function UMG.UserWidget.SetAnimationCurrentTime // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5699fc0
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5699d80
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5699d00
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.ReverseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5699c70
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5699c50
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x5699c30
	void PreConstruct(bool IsDesignTime); // Function UMG.UserWidget.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	void PlaySound(struct USoundBase* SoundToPlay); // Function UMG.UserWidget.PlaySound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5699ba0
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5699980
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5699860
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5699740
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5699570
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.PauseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x56994d0
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchStarted // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchMoved // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // Function UMG.UserWidget.OnTouchGesture // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchEnded // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnPreviewMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown // (Event|Public|BlueprintEvent) // @ game+0x40572e0
	void OnPaint(struct FPaintContext& Context); // Function UMG.UserWidget.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x40572e0
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDrop // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragOver // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UMG.UserWidget.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationStarted // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0x5699440
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationFinished // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0x56993b0
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged // (Event|Public|BlueprintEvent) // @ game+0x40572e0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	struct UUserWidget* LookupUserWidgetWithInterface(struct UInterface* InterfaceClass, bool bRecurse); // Function UMG.UserWidget.LookupUserWidgetWithInterface // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5699080
	void LookupUserWidgetsWithInterface(struct UInterface* InterfaceClass, struct TArray<struct UUserWidget*>& OutWidgets, bool bRecurse); // Function UMG.UserWidget.LookupUserWidgetsWithInterface // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5699280
	void LookupUserWidgets(struct UUserWidget* WidgetClass, struct TArray<struct UUserWidget*>& OutWidgets, bool bRecurse); // Function UMG.UserWidget.LookupUserWidgets // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5699150
	struct UUserWidget* LookupUserWidget(struct UUserWidget* WidgetClass, bool bRecurse); // Function UMG.UserWidget.LookupUserWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5698fb0
	void ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction // (Final|Native|Protected|BlueprintCallable) // @ game+0x5698e20
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5698df0
	bool IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x5698d40
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5698930
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable // (BlueprintCosmetic|Event|Public|BlueprintEvent|Const) // @ game+0x40572e0
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5698d10
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5698c70
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5698bd0
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5698990
	struct APlayerCameraManager* GetOwningPlayerCameraManager(); // Function UMG.UserWidget.GetOwningPlayerCameraManager // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5698960
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5698930
	struct UInputComponent* GetInputComponent(); // Function UMG.UserWidget.GetInputComponent // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x5698900
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56987c0
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5698780
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5698740
	void FlushAnimations(); // Function UMG.UserWidget.FlushAnimations // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5698720
	void Destruct(); // Function UMG.UserWidget.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	void Construct(); // Function UMG.UserWidget.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40572e0
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions // (Final|Native|Public|BlueprintCallable) // @ game+0x56986c0
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x56985d0
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x56984e0
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x5698360
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x56982d0
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x5698230
};

// Class UMG.PanelWidget
// Size: 0x160 (Inherited: 0x148)
struct UPanelWidget : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x148(0x10)
	char pad_158[0x8]; // 0x158(0x08)

	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt // (Final|Native|Public|BlueprintCallable) // @ game+0x567e120
	bool RemoveChild(struct UWidget* Content); // Function UMG.PanelWidget.RemoveChild // (Final|Native|Public|BlueprintCallable) // @ game+0x567e080
	bool HasChild(struct UWidget* Content); // Function UMG.PanelWidget.HasChild // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x567ded0
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2620570
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ba4870
	int32_t GetChildIndex(struct UWidget* Content); // Function UMG.PanelWidget.GetChildIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x567da70
	struct UWidget* GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x567d9d0
	struct TArray<struct UWidget*> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x567d950
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren // (Native|Public|BlueprintCallable) // @ game+0x3702790
	struct UPanelSlot* AddChild(struct UWidget* Content); // Function UMG.PanelWidget.AddChild // (Final|Native|Public|BlueprintCallable) // @ game+0x567d760
};

// Class UMG.ContentWidget
// Size: 0x160 (Inherited: 0x160)
struct UContentWidget : UPanelWidget {

	struct UPanelSlot* SetContent(struct UWidget* Content); // Function UMG.ContentWidget.SetContent // (Final|Native|Public|BlueprintCallable) // @ game+0x566fdf0
	struct UPanelSlot* GetContentSlot(); // Function UMG.ContentWidget.GetContentSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x566f720
	struct UWidget* GetContent(); // Function UMG.ContentWidget.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x566f6b0
};

// Class UMG.Slider
// Size: 0x568 (Inherited: 0x148)
struct USlider : UWidget {
	float Value; // 0x148(0x04)
	struct FDelegate ValueDelegate; // 0x14c(0x14)
	float MinValue; // 0x160(0x04)
	float MaxValue; // 0x164(0x04)
	struct FSliderStyle WidgetStyle; // 0x168(0x370)
	enum class EOrientation Orientation; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	struct FLinearColor SliderBarColor; // 0x4dc(0x10)
	struct FLinearColor SliderHandleColor; // 0x4ec(0x10)
	bool IndentHandle; // 0x4fc(0x01)
	bool Locked; // 0x4fd(0x01)
	bool MouseUsesStep; // 0x4fe(0x01)
	bool RequiresControllerLock; // 0x4ff(0x01)
	float StepSize; // 0x500(0x04)
	bool IsFocusable; // 0x504(0x01)
	char pad_505[0x3]; // 0x505(0x03)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x508(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x518(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x528(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x538(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x548(0x10)
	char pad_558[0x10]; // 0x558(0x10)

	void SetValue(float InValue); // Function UMG.Slider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x568d260
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x568d1e0
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x568d150
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x568d0c0
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x568ceb0
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x568cb20
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x568c800
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x568c770
	float GetValue(); // Function UMG.Slider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x568bbd0
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x568bba0
};

// Class UMG.WidgetSwitcher
// Size: 0x178 (Inherited: 0x160)
struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x160(0x04)
	char pad_164[0x14]; // 0x164(0x14)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // @ game+0x2633860
	void SetActiveWidget(struct UWidget* Widget); // Function UMG.WidgetSwitcher.SetActiveWidget // (Native|Public|BlueprintCallable) // @ game+0x2633740
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26332f0
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56b35a0
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56b3570
	struct UWidget* GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56b3540
};

// Class UMG.Border
// Size: 0x2d0 (Inherited: 0x160)
struct UBorder : UContentWidget {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x160(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x161(0x01)
	char bShowEffectWhenDisabled : 1; // 0x162(0x01)
	char pad_162_1 : 7; // 0x162(0x01)
	char pad_163[0x1]; // 0x163(0x01)
	struct FLinearColor ContentColorAndOpacity; // 0x164(0x10)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x174(0x14)
	struct FMargin Padding; // 0x188(0x10)
	struct FSlateBrush Background; // 0x198(0x90)
	struct FDelegate BackgroundDelegate; // 0x228(0x14)
	struct FLinearColor BrushColor; // 0x23c(0x10)
	struct FDelegate BrushColorDelegate; // 0x24c(0x14)
	struct FVector2D DesiredSizeScale; // 0x260(0x08)
	bool bFlipForRightToLeftFlowDirection; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x26c(0x14)
	struct FDelegate OnMouseButtonUpEvent; // 0x280(0x14)
	struct FDelegate OnMouseMoveEvent; // 0x294(0x14)
	struct FDelegate OnMouseDoubleClickEvent; // 0x2a8(0x14)
	char pad_2BC[0x14]; // 0x2bc(0x14)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5669a80
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x5669360
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5668b00
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5668980
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x56688f0
	void SetBrushFromTexture(struct UTexture2D* Texture); // Function UMG.Border.SetBrushFromTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x5668650
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Border.SetBrushFromMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x5668650
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Border.SetBrushFromAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x56685c0
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5668530
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Border.SetBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5668400
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x5667d20
};

// Class UMG.DynamicEntryBoxBase
// Size: 0x218 (Inherited: 0x148)
struct UDynamicEntryBoxBase : UWidget {
	enum class EDynamicBoxType EntryBoxType; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	struct FVector2D EntrySpacing; // 0x14c(0x08)
	char pad_154[0x4]; // 0x154(0x04)
	struct TArray<struct FVector2D> SpacingPattern; // 0x158(0x10)
	struct FSlateChildSize EntrySizeRule; // 0x168(0x08)
	enum class EHorizontalAlignment EntryHorizontalAlignment; // 0x170(0x01)
	enum class EVerticalAlignment EntryVerticalAlignment; // 0x171(0x01)
	char pad_172[0x2]; // 0x172(0x02)
	int32_t MaxElementSize; // 0x174(0x04)
	struct FRadialBoxSettings RadialBoxSettings; // 0x178(0x10)
	char pad_188[0x10]; // 0x188(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x198(0x80)

	void SetRadialSettings(struct FRadialBoxSettings& InSettings); // Function UMG.DynamicEntryBoxBase.SetRadialSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5670760
	void SetEntrySpacing(struct FVector2D& InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x566fe90
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x566f790
	struct TArray<struct UUserWidget*> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x566f620
};

// Class UMG.Button
// Size: 0x498 (Inherited: 0x160)
struct UButton : UContentWidget {
	struct USlateWidgetStyleAsset* Style; // 0x160(0x08)
	struct FButtonStyle WidgetStyle; // 0x168(0x2a8)
	struct FLinearColor ColorAndOpacity; // 0x410(0x10)
	struct FLinearColor BackgroundColor; // 0x420(0x10)
	enum class EButtonClickMethod ClickMethod; // 0x430(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x431(0x01)
	enum class EButtonPressMethod PressMethod; // 0x432(0x01)
	bool IsFocusable; // 0x433(0x01)
	enum class EButtonInputPriority InteractionPriority; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct FMulticastInlineDelegate OnClicked; // 0x438(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x448(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x458(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x468(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x478(0x10)
	char pad_488[0x10]; // 0x488(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x5669880
	void SetStyle(struct FButtonStyle& InStyle); // Function UMG.Button.SetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5669710
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.Button.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x5669590
	void SetInteractionPriority(enum class EButtonInputPriority NewValue); // Function UMG.Button.SetInteractionPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x5668c80
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5668860
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.Button.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x5668760
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5668250
	bool IsPressed(); // Function UMG.Button.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5667fc0
};

// Class UMG.TextLayoutWidget
// Size: 0x168 (Inherited: 0x148)
struct UTextLayoutWidget : UWidget {
	struct FShapedTextOptions ShapedTextOptions; // 0x148(0x03)
	enum class ETextJustify Justification; // 0x14b(0x01)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x14c(0x01)
	char AutoWrapText : 1; // 0x14d(0x01)
	char pad_14D_1 : 7; // 0x14d(0x01)
	char pad_14E[0x2]; // 0x14e(0x02)
	float WrapTextAt; // 0x150(0x04)
	struct FMargin Margin; // 0x154(0x10)
	float LineHeightPercentage; // 0x164(0x04)

	void SetJustification(enum class ETextJustify InJustification); // Function UMG.TextLayoutWidget.SetJustification // (Native|Public|BlueprintCallable) // @ game+0x569a960
};

// Class UMG.TextBlock
// Size: 0x310 (Inherited: 0x168)
struct UTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x168(0x18)
	struct FDelegate TextDelegate; // 0x180(0x14)
	char pad_194[0x4]; // 0x194(0x04)
	struct FSlateColor ColorAndOpacity; // 0x198(0x28)
	struct FDelegate ColorAndOpacityDelegate; // 0x1c0(0x14)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct FSlateFontInfo Font; // 0x1d8(0x60)
	struct FSlateBrush StrikeBrush; // 0x238(0x90)
	struct FVector2D ShadowOffset; // 0x2c8(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x2d0(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x2e0(0x14)
	float MinDesiredWidth; // 0x2f4(0x04)
	bool bWrapWithInvalidationPanel; // 0x2f8(0x01)
	bool bAutoWrapText; // 0x2f9(0x01)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x2fa(0x01)
	bool bSimpleTextMode; // 0x2fb(0x01)
	char pad_2FC[0x14]; // 0x2fc(0x14)

	void SetWrapTextAt(float InWrapTextAt); // Function UMG.TextBlock.SetWrapTextAt // (Final|Native|Public|BlueprintCallable) // @ game+0x569b600
	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.TextBlock.SetTextTransformPolicy // (Final|Native|Public|BlueprintCallable) // @ game+0x569b460
	void SetText(struct FText InText); // Function UMG.TextBlock.SetText // (Native|Public|BlueprintCallable) // @ game+0x569b360
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush // (Final|Native|Public|BlueprintCallable) // @ game+0x569b240
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x569b130
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x569b0a0
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x569acd0
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x569aaf0
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont // (Final|Native|Public|BlueprintCallable) // @ game+0x569a4c0
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x569a120
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // @ game+0x569a090
	struct FText GetText(); // Function UMG.TextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5698a40
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x5698890
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x5698860
};

// Class UMG.ScrollBox
// Size: 0x928 (Inherited: 0x160)
struct UScrollBox : UPanelWidget {
	struct FScrollBoxStyle WidgetStyle; // 0x160(0x248)
	struct FScrollBarStyle WidgetBarStyle; // 0x3a8(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x8c0(0x08)
	struct USlateWidgetStyleAsset* BarStyle; // 0x8c8(0x08)
	enum class EOrientation Orientation; // 0x8d0(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x8d1(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x8d2(0x01)
	char pad_8D3[0x1]; // 0x8d3(0x01)
	struct FVector2D ScrollbarThickness; // 0x8d4(0x08)
	struct FMargin ScrollbarPadding; // 0x8dc(0x10)
	bool AlwaysShowScrollbar; // 0x8ec(0x01)
	bool AlwaysShowScrollbarTrack; // 0x8ed(0x01)
	bool AllowOverscroll; // 0x8ee(0x01)
	bool bAnimateWheelScrolling; // 0x8ef(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0x8f0(0x01)
	char pad_8F1[0x3]; // 0x8f1(0x03)
	float NavigationScrollPadding; // 0x8f4(0x04)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x8f8(0x01)
	bool bAllowRightClickDragScrolling; // 0x8f9(0x01)
	char pad_8FA[0x2]; // 0x8fa(0x02)
	float WheelScrollMultiplier; // 0x8fc(0x04)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x900(0x10)
	char pad_910[0x18]; // 0x910(0x18)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x5685260
	void SetScrollWhenFocusChanges(enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges); // Function UMG.ScrollBox.SetScrollWhenFocusChanges // (Final|Native|Public|BlueprintCallable) // @ game+0x56849c0
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x5684940
	void SetScrollBarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollBarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x56848c0
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5684ae0
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5684a40
	void SetOrientation(enum class EOrientation NewOrientation); // Function UMG.ScrollBox.SetOrientation // (Final|Native|Public|BlueprintCallable) // @ game+0x5684540
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel // (Final|Native|Public|BlueprintCallable) // @ game+0x5683c60
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x5683b40
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar // (Final|Native|Public|BlueprintCallable) // @ game+0x5683ab0
	void SetAllowOverscroll(bool NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll // (Final|Native|Public|BlueprintCallable) // @ game+0x5683a20
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView // (Final|Native|Public|BlueprintCallable) // @ game+0x56838c0
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // (Final|Native|Public|BlueprintCallable) // @ game+0x56838a0
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x5683880
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5683830
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5683750
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5683720
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x5683630
};

// Class UMG.Image
// Size: 0x268 (Inherited: 0x148)
struct UImage : UWidget {
	struct FSlateBrush Brush; // 0x148(0x90)
	struct FDelegate BrushDelegate; // 0x1d8(0x14)
	struct FLinearColor ColorAndOpacity; // 0x1ec(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x1fc(0x14)
	bool bFlipForRightToLeftFlowDirection; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x214(0x14)
	char pad_228[0x40]; // 0x228(0x40)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x5678150
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5677b70
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor // (Final|Native|Public|BlueprintCallable) // @ game+0x56779e0
	void SetBrushSize(struct FVector2D DesiredSize); // Function UMG.Image.SetBrushSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5677960
	void SetBrushResourceObject(struct UObject* ResourceObject); // Function UMG.Image.SetBrushResourceObject // (Final|Native|Public|BlueprintCallable) // @ game+0x56778d0
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic // (Native|Public|BlueprintCallable) // @ game+0x56777f0
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture // (Native|Public|BlueprintCallable) // @ game+0x5677710
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture // (Native|Public|BlueprintCallable) // @ game+0x5677590
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial // (Native|Public|BlueprintCallable) // @ game+0x5677460
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Image.SetBrushFromMaterial // (Native|Public|BlueprintCallable) // @ game+0x2633740
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface // (Native|Public|BlueprintCallable) // @ game+0x5677360
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Image.SetBrushFromAsset // (Native|Public|BlueprintCallable) // @ game+0x56772d0
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Image.SetBrush // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x56771a0
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x5676990
};

// Class UMG.ListViewBase
// Size: 0x258 (Inherited: 0x148)
struct UListViewBase : UWidget {
	struct UUserWidget* EntryWidgetClass; // 0x148(0x08)
	float WheelScrollMultiplier; // 0x150(0x04)
	bool bEnableScrollAnimation; // 0x154(0x01)
	bool bEnableFixedLineOffset; // 0x155(0x01)
	char pad_156[0x2]; // 0x156(0x02)
	float FixedLineScrollOffset; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x160(0x10)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x170(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x180(0x80)
	char pad_200[0x58]; // 0x200(0x58)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x567eeb0
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x567e8c0
	void SetScrollBarVisibility(enum class ESlateVisibility InVisibility); // Function UMG.ListViewBase.SetScrollBarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x567e940
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop // (Final|Native|Public|BlueprintCallable) // @ game+0x567e200
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom // (Final|Native|Public|BlueprintCallable) // @ game+0x567e1e0
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh // (Final|Native|Public|BlueprintCallable) // @ game+0x567e1c0
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries // (Final|Native|Public|BlueprintCallable) // @ game+0x567e060
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x567db10
};

// Class UMG.ListView
// Size: 0x3a8 (Inherited: 0x258)
struct UListView : UListViewBase {
	char pad_258[0xc0]; // 0x258(0xc0)
	enum class EOrientation Orientation; // 0x318(0x01)
	enum class ESelectionMode SelectionMode; // 0x319(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x31a(0x01)
	bool bClearSelectionOnClick; // 0x31b(0x01)
	bool bIsFocusable; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	float EntrySpacing; // 0x320(0x04)
	bool bReturnFocusToSelection; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	struct TArray<struct UObject*> ListItems; // 0x328(0x10)
	char pad_338[0x10]; // 0x338(0x10)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x348(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x358(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x368(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x378(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x388(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x398(0x10)

	void SetSelectionMode(enum class ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode // (Final|Native|Public|BlueprintCallable) // @ game+0x56784e0
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x5678330
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView // (Final|Native|Public|BlueprintCallable) // @ game+0x5676ff0
	void RemoveItem(struct UObject* Item); // Function UMG.ListView.RemoveItem // (Final|Native|Public|BlueprintCallable) // @ game+0x5676f60
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x5676ed0
	bool IsRefreshPending(); // Function UMG.ListView.IsRefreshPending // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5676ea0
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5676c30
	struct TArray<struct UObject*> GetListItems(); // Function UMG.ListView.GetListItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5676c00
	struct UObject* GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5676ac0
	int32_t GetIndexForItem(struct UObject* Item); // Function UMG.ListView.GetIndexForItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56769c0
	void ClearListItems(); // Function UMG.ListView.ClearListItems // (Final|Native|Public|BlueprintCallable) // @ game+0x5676920
	void BP_SetSelectedItem(struct UObject* Item); // Function UMG.ListView.BP_SetSelectedItem // (Final|Native|Private|BlueprintCallable) // @ game+0x5676890
	void BP_SetListItems(struct TArray<struct UObject*>& InListItems); // Function UMG.ListView.BP_SetListItems // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x56767e0
	void BP_SetItemSelection(struct UObject* Item, bool bSelected); // Function UMG.ListView.BP_SetItemSelection // (Final|Native|Private|BlueprintCallable) // @ game+0x5676710
	void BP_ScrollItemIntoView(struct UObject* Item); // Function UMG.ListView.BP_ScrollItemIntoView // (Final|Native|Private|BlueprintCallable) // @ game+0x5676680
	void BP_NavigateToItem(struct UObject* Item); // Function UMG.ListView.BP_NavigateToItem // (Final|Native|Private|BlueprintCallable) // @ game+0x56765f0
	bool BP_IsItemVisible(struct UObject* Item); // Function UMG.ListView.BP_IsItemVisible // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x5676550
	bool BP_GetSelectedItems(struct TArray<struct UObject*>& Items); // Function UMG.ListView.BP_GetSelectedItems // (Final|Native|Private|HasOutParms|BlueprintCallable|Const) // @ game+0x5676490
	struct UObject* BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x5676460
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x5676430
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection // (Final|Native|Private|BlueprintCallable) // @ game+0x5676410
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView // (Final|Native|Private|BlueprintCallable) // @ game+0x56763f0
	void AddItem(struct UObject* Item); // Function UMG.ListView.AddItem // (Final|Native|Public|BlueprintCallable) // @ game+0x5676360
};

// Class UMG.PanelSlot
// Size: 0x40 (Inherited: 0x30)
struct UPanelSlot : UVisual {
	struct UPanelWidget* Parent; // 0x30(0x08)
	struct UWidget* Content; // 0x38(0x08)
};

// Class UMG.RichTextBlock
// Size: 0x6f8 (Inherited: 0x168)
struct URichTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x168(0x18)
	struct UDataTable* TextStyleSet; // 0x180(0x08)
	struct TArray<struct URichTextBlockDecorator*> DecoratorClasses; // 0x188(0x10)
	bool bOverrideDefaultStyle; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x1a0(0x290)
	float MinDesiredWidth; // 0x430(0x04)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct FTextBlockStyle DefaultTextStyle; // 0x438(0x290)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0x6c8(0x10)
	char pad_6D8[0x20]; // 0x6d8(0x20)

	void SetWrapTextAt(float InWrapTextAt); // Function UMG.RichTextBlock.SetWrapTextAt // (Final|Native|Protected|BlueprintCallable) // @ game+0x56852e0
	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.RichTextBlock.SetTextTransformPolicy // (Final|Native|Public|BlueprintCallable) // @ game+0x5685040
	void SetTextStyleSet(struct UDataTable* NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet // (Final|Native|Public|BlueprintCallable) // @ game+0x5684fb0
	void SetText(struct FText& InText); // Function UMG.RichTextBlock.SetText // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5684ec0
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x56844c0
	void SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5684150
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5684020
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5683fa0
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5683f10
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont // (Final|Native|Public|BlueprintCallable) // @ game+0x5683de0
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x5683ce0
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // @ game+0x5683bd0
	struct FText GetText(); // Function UMG.RichTextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5683780
	struct URichTextBlockDecorator* GetDecoratorByClass(struct URichTextBlockDecorator* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x5683650
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides // (Final|Native|Public) // @ game+0x5683610
};

// Class UMG.TileView
// Size: 0x3c8 (Inherited: 0x3a8)
struct UTileView : UListView {
	float EntryHeight; // 0x3a8(0x04)
	float EntryWidth; // 0x3ac(0x04)
	enum class EListItemAlignment TileAlignment; // 0x3b0(0x01)
	bool bWrapHorizontalNavigation; // 0x3b1(0x01)
	char pad_3B2[0x16]; // 0x3b2(0x16)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x569a440
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x569a3c0
	float GetEntryWidth(); // Function UMG.TileView.GetEntryWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56988e0
	float GetEntryHeight(); // Function UMG.TileView.GetEntryHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56988c0
};

// Class UMG.TreeView
// Size: 0x408 (Inherited: 0x3a8)
struct UTreeView : UListView {
	char pad_3A8[0x10]; // 0x3a8(0x10)
	struct FDelegate BP_OnGetItemChildren; // 0x3b8(0x14)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x3d0(0x10)
	char pad_3E0[0x28]; // 0x3e0(0x28)

	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion // (Final|Native|Public|BlueprintCallable) // @ game+0x569a890
	void ExpandAll(); // Function UMG.TreeView.ExpandAll // (Final|Native|Public|BlueprintCallable) // @ game+0x5698700
	void CollapseAll(); // Function UMG.TreeView.CollapseAll // (Final|Native|Public|BlueprintCallable) // @ game+0x56986e0
};

// Class UMG.Overlay
// Size: 0x170 (Inherited: 0x160)
struct UOverlay : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)

	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay // (Final|Native|Public|BlueprintCallable) // @ game+0x567d800
};

// Class UMG.OverlaySlot
// Size: 0x60 (Inherited: 0x40)
struct UOverlaySlot : UPanelSlot {
	char pad_40[0x8]; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x567ec50
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x567e7b0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x567e4f0
};

// Class UMG.SizeBox
// Size: 0x198 (Inherited: 0x160)
struct USizeBox : UContentWidget {
	char pad_160[0x10]; // 0x160(0x10)
	float WidthOverride; // 0x170(0x04)
	float HeightOverride; // 0x174(0x04)
	float MinDesiredWidth; // 0x178(0x04)
	float MinDesiredHeight; // 0x17c(0x04)
	float MaxDesiredWidth; // 0x180(0x04)
	float MaxDesiredHeight; // 0x184(0x04)
	float MinAspectRatio; // 0x188(0x04)
	float MaxAspectRatio; // 0x18c(0x04)
	char bOverride_WidthOverride : 1; // 0x190(0x01)
	char bOverride_HeightOverride : 1; // 0x190(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x190(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x190(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x190(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x190(0x01)
	char bOverride_MinAspectRatio : 1; // 0x190(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x568d3e0
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x568cd20
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x568cca0
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x568cc20
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x568c990
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x568c910
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x568c890
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x568c670
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x568b5a0
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x568b540
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x568b520
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x568b500
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x568b4a0
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x568b480
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x568b460
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x568b440
};

// Class UMG.ComboBoxString
// Size: 0xf08 (Inherited: 0x148)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> DefaultOptions; // 0x148(0x10)
	struct FString SelectedOption; // 0x158(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x168(0x440)
	struct FTableRowStyle ItemStyle; // 0x5a8(0x838)
	struct FMargin ContentPadding; // 0xde0(0x10)
	float MaxListHeight; // 0xdf0(0x04)
	bool HasDownArrow; // 0xdf4(0x01)
	bool EnableGamepadNavigationMode; // 0xdf5(0x01)
	char pad_DF6[0x2]; // 0xdf6(0x02)
	struct FSlateFontInfo Font; // 0xdf8(0x60)
	struct FSlateColor ForegroundColor; // 0xe58(0x28)
	bool bIsFocusable; // 0xe80(0x01)
	char pad_E81[0x3]; // 0xe81(0x03)
	struct FDelegate OnGenerateWidgetEvent; // 0xe84(0x14)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xe98(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0xea8(0x10)
	char pad_EB8[0x50]; // 0xeb8(0x50)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0x5670920
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x5670890
	bool RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption // (Final|Native|Public|BlueprintCallable) // @ game+0x566fca0
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x566fbf0
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	bool IsOpen(); // Function UMG.ComboBoxString.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x566fbc0
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x566f900
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x566f8d0
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x566f8a0
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x566f7c0
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x566f560
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x566f150
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x566f130
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption // (Final|Native|Public|BlueprintCallable) // @ game+0x566ef90
};

// Class UMG.MenuAnchor
// Size: 0x1b8 (Inherited: 0x160)
struct UMenuAnchor : UContentWidget {
	struct UUserWidget* MenuClass; // 0x160(0x08)
	struct FDelegate OnGetMenuContentEvent; // 0x168(0x14)
	struct FDelegate OnGetUserMenuContentEvent; // 0x17c(0x14)
	enum class EMenuPlacement Placement; // 0x190(0x01)
	bool bFitInWindow; // 0x191(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x192(0x01)
	bool UseApplicationMenuStack; // 0x193(0x01)
	char pad_194[0x4]; // 0x194(0x04)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x198(0x10)
	char pad_1A8[0x10]; // 0x1a8(0x10)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen // (Final|Native|Public|BlueprintCallable) // @ game+0x567f010
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x567efe0
	void SetPlacement(enum class EMenuPlacement InPlacement); // Function UMG.MenuAnchor.SetPlacement // (Final|Native|Public|BlueprintCallable) // @ game+0x567e840
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open // (Final|Native|Public|BlueprintCallable) // @ game+0x567dfd0
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x567dfa0
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x567df70
	struct UUserWidget* GetUserWidget__DelegateSignature(); // DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x567dd00
	void FitInWindow(bool bFit); // Function UMG.MenuAnchor.FitInWindow // (Final|Native|Public|BlueprintCallable) // @ game+0x567d8c0
	void Close(); // Function UMG.MenuAnchor.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x567d8a0
};

// Class UMG.TableViewBase
// Size: 0x148 (Inherited: 0x148)
struct UTableViewBase : UWidget {
};

// Class UMG.RichTextBlockDecorator
// Size: 0x30 (Inherited: 0x30)
struct URichTextBlockDecorator : UObject {
};

// Class UMG.WidgetComponent
// Size: 0x6c0 (Inherited: 0x590)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0x590(0x01)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x591(0x01)
	char pad_592[0x6]; // 0x592(0x06)
	struct UUserWidget* WidgetClass; // 0x598(0x08)
	struct FIntPoint DrawSize; // 0x5a0(0x08)
	bool bManuallyRedraw; // 0x5a8(0x01)
	bool bRedrawRequested; // 0x5a9(0x01)
	char pad_5AA[0x2]; // 0x5aa(0x02)
	float RedrawTime; // 0x5ac(0x04)
	char pad_5B0[0x8]; // 0x5b0(0x08)
	struct FIntPoint CurrentDrawSize; // 0x5b8(0x08)
	bool bDrawAtDesiredSize; // 0x5c0(0x01)
	char pad_5C1[0x3]; // 0x5c1(0x03)
	struct FVector2D Pivot; // 0x5c4(0x08)
	bool bReceiveHardwareInput; // 0x5cc(0x01)
	bool bWindowFocusable; // 0x5cd(0x01)
	enum class EWindowVisibility WindowVisibility; // 0x5ce(0x01)
	bool bApplyGammaCorrection; // 0x5cf(0x01)
	struct ULocalPlayer* OwnerPlayer; // 0x5d0(0x08)
	struct FLinearColor BackgroundColor; // 0x5d8(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x5e8(0x10)
	float OpacityFromTexture; // 0x5f8(0x04)
	enum class EWidgetBlendMode BlendMode; // 0x5fc(0x01)
	bool bIsTwoSided; // 0x5fd(0x01)
	bool TickWhenOffscreen; // 0x5fe(0x01)
	char pad_5FF[0x1]; // 0x5ff(0x01)
	struct UBodySetup* BodySetup; // 0x600(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0x608(0x08)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x610(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0x618(0x08)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x620(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0x628(0x08)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x630(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x638(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x640(0x08)
	bool bAddedToScreen; // 0x648(0x01)
	bool bEditTimeUsable; // 0x649(0x01)
	char pad_64A[0x2]; // 0x64a(0x02)
	struct FName SharedLayerName; // 0x64c(0x0c)
	int32_t LayerZOrder; // 0x658(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0x65c(0x01)
	char pad_65D[0x3]; // 0x65d(0x03)
	float CylinderArcAngle; // 0x660(0x04)
	enum class ETickMode TickMode; // 0x664(0x01)
	char pad_665[0x23]; // 0x665(0x23)
	struct UUserWidget* Widget; // 0x688(0x08)
	char pad_690[0x30]; // 0x690(0x30)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x56b0770
	void SetWindowFocusable(bool bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable // (Final|Native|Public|BlueprintCallable) // @ game+0x56b06e0
	void SetWidgetSpace(enum class EWidgetSpace NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace // (Final|Native|Public|BlueprintCallable) // @ game+0x56b0660
	void SetWidget(struct UUserWidget* Widget); // Function UMG.WidgetComponent.SetWidget // (Native|Public|BlueprintCallable) // @ game+0x56b05d0
	void SetTwoSided(bool bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided // (Final|Native|Public|BlueprintCallable) // @ game+0x56b0540
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x56b04b0
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable) // @ game+0x56b0420
	void SetTickMode(enum class ETickMode InTickMode); // Function UMG.WidgetComponent.SetTickMode // (Final|Native|Public|BlueprintCallable) // @ game+0x56b03a0
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime // (Final|Native|Public|BlueprintCallable) // @ game+0x56b0320
	void SetPivot(struct FVector2D& InPivot); // Function UMG.WidgetComponent.SetPivot // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x56b0290
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x56b0200
	void SetManuallyRedraw(bool bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw // (Final|Native|Public|BlueprintCallable) // @ game+0x56b0170
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode // (Final|Native|Public|BlueprintCallable) // @ game+0x56b00f0
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x56affe0
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable) // @ game+0x56aff50
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x56afed0
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x56afd70
	void RequestRenderUpdate(); // Function UMG.WidgetComponent.RequestRenderUpdate // (Native|Public|BlueprintCallable) // @ game+0x56afb50
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw // (Native|Public|BlueprintCallable) // @ game+0x56afb20
	bool IsWidgetVisible(); // Function UMG.WidgetComponent.IsWidgetVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56af330
	enum class EWindowVisibility GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56af280
	bool GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56af260
	enum class EWidgetSpace GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5008630
	struct UUserWidget* GetWidget(); // Function UMG.WidgetComponent.GetWidget // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56af220
	struct UUserWidget* GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x369efa0
	bool GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56af030
	bool GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56af010
	struct UTextureRenderTarget2D* GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x373b340
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56aeff0
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x56aef10
	struct ULocalPlayer* GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56aeee0
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x373af60
	bool GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56aecd0
	enum class EWidgetGeometryMode GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56aec30
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x56aebf0
	bool GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56aebd0
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56aebb0
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x56aeb70
};

// Class UMG.RichTextBlockImageDecorator
// Size: 0x38 (Inherited: 0x30)
struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	struct UDataTable* ImageSet; // 0x30(0x08)
};

// Class UMG.AsyncTaskDownloadImage
// Size: 0x58 (Inherited: 0x38)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x48(0x10)

	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5667b40
};

// Class UMG.BackgroundBlur
// Size: 0x350 (Inherited: 0x160)
struct UBackgroundBlur : UContentWidget {
	struct FMargin Padding; // 0x160(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x170(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x171(0x01)
	bool bApplyAlphaToBlur; // 0x172(0x01)
	char pad_173[0x1]; // 0x173(0x01)
	float BlurStrength; // 0x174(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	int32_t BlurRadius; // 0x17c(0x04)
	struct FSlateBrush LowQualityFallbackBrush; // 0x180(0x90)
	struct FSlateBrush MaskImage; // 0x210(0x90)
	struct FLinearColor Tint; // 0x2a0(0x10)
	struct FSlateBrush LowQualityMaskedFallbackBrush; // 0x2b0(0x90)
	char pad_340[0x10]; // 0x340(0x10)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5669980
	void SetTint(struct FLinearColor& InTint); // Function UMG.BackgroundBlur.SetTint // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x56697f0
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x5669240
	void SetMaskImage(struct FSlateBrush& InBrush); // Function UMG.BackgroundBlur.SetMaskImage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5668f80
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5668e50
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5668a00
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength // (Native|Public|BlueprintCallable) // @ game+0x5668370
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x56682e0
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // (Final|Native|Public|BlueprintCallable) // @ game+0x5668130
};

// Class UMG.BackgroundBlurSlot
// Size: 0x68 (Inherited: 0x40)
struct UBackgroundBlurSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5669a00
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x56692d0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5668a80
};

// Class UMG.PropertyBinding
// Size: 0x70 (Inherited: 0x30)
struct UPropertyBinding : UObject {
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x30(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x38(0x28)
	struct FName DestinationProperty; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class UMG.BoolBinding
// Size: 0x70 (Inherited: 0x70)
struct UBoolBinding : UPropertyBinding {

	bool GetValue(); // Function UMG.BoolBinding.GetValue // (Final|Native|Public|Const) // @ game+0x5667e60
};

// Class UMG.BorderSlot
// Size: 0x68 (Inherited: 0x40)
struct UBorderSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5669b00
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x56693f0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5668b80
};

// Class UMG.BrushBinding
// Size: 0x78 (Inherited: 0x70)
struct UBrushBinding : UPropertyBinding {
	char pad_70[0x8]; // 0x70(0x08)

	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue // (Final|Native|Public|Const) // @ game+0x5667e90
};

// Class UMG.ButtonSlot
// Size: 0x68 (Inherited: 0x40)
struct UButtonSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5669b80
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x5669480
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5668c00
};

// Class UMG.CanvasPanel
// Size: 0x170 (Inherited: 0x160)
struct UCanvasPanel : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas // (Final|Native|Public|BlueprintCallable) // @ game+0x5667aa0
};

// Class UMG.CanvasPanelSlot
// Size: 0x78 (Inherited: 0x40)
struct UCanvasPanelSlot : UPanelSlot {
	struct FAnchorData LayoutData; // 0x40(0x28)
	bool bAutoSize; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32_t ZOrder; // 0x6c(0x04)
	char pad_70[0x8]; // 0x70(0x08)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder // (Final|Native|Public|BlueprintCallable) // @ game+0x5669c00
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5669690
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5669510
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets // (Final|Native|Public|BlueprintCallable) // @ game+0x56691b0
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum // (Final|Native|Public|HasDefaults) // @ game+0x5669130
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum // (Final|Native|Public|HasDefaults) // @ game+0x56690b0
	void SetLayout(struct FAnchorData& InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5668d90
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize // (Final|Native|Public|BlueprintCallable) // @ game+0x56681c0
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors // (Final|Native|Public|BlueprintCallable) // @ game+0x56680a0
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5668020
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5667f60
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5667e20
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5667de0
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5667da0
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5667d50
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5667cc0
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5667c80
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5667c40
};

// Class UMG.CheckBox
// Size: 0x810 (Inherited: 0x160)
struct UCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	struct FDelegate CheckedStateDelegate; // 0x164(0x14)
	struct FCheckBoxStyle WidgetStyle; // 0x178(0x5e0)
	struct USlateWidgetStyleAsset* Style; // 0x758(0x08)
	struct USlateBrushAsset* UncheckedImage; // 0x760(0x08)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x768(0x08)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x770(0x08)
	struct USlateBrushAsset* CheckedImage; // 0x778(0x08)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x780(0x08)
	struct USlateBrushAsset* CheckedPressedImage; // 0x788(0x08)
	struct USlateBrushAsset* UndeterminedImage; // 0x790(0x08)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x798(0x08)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x7a0(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x7a8(0x01)
	char pad_7A9[0x3]; // 0x7a9(0x03)
	struct FMargin Padding; // 0x7ac(0x10)
	char pad_7BC[0x4]; // 0x7bc(0x04)
	struct FSlateColor BorderBackgroundColor; // 0x7c0(0x28)
	enum class EButtonClickMethod ClickMethod; // 0x7e8(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x7e9(0x01)
	enum class EButtonPressMethod PressMethod; // 0x7ea(0x01)
	bool IsFocusable; // 0x7eb(0x01)
	char pad_7EC[0x4]; // 0x7ec(0x04)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x7f0(0x10)
	char pad_800[0x10]; // 0x800(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.CheckBox.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x5669900
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.CheckBox.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x5669610
	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0x5668d00
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.CheckBox.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x56687e0
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function UMG.CheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0x56686e0
	bool IsPressed(); // Function UMG.CheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5667ff0
	bool IsChecked(); // Function UMG.CheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5667f90
	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5667cf0
};

// Class UMG.CheckedStateBinding
// Size: 0x78 (Inherited: 0x70)
struct UCheckedStateBinding : UPropertyBinding {
	char pad_70[0x8]; // 0x70(0x08)

	enum class ECheckBoxState GetValue(); // Function UMG.CheckedStateBinding.GetValue // (Final|Native|Public|Const) // @ game+0x566fb60
};

// Class UMG.CircularThrobber
// Size: 0x208 (Inherited: 0x148)
struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x148(0x04)
	float Period; // 0x14c(0x04)
	float Radius; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct USlateBrushAsset* PieceImage; // 0x158(0x08)
	struct FSlateBrush Image; // 0x160(0x90)
	bool bEnableRadius; // 0x1f0(0x01)
	char pad_1F1[0x17]; // 0x1f1(0x17)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x5670810
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod // (Final|Native|Public|BlueprintCallable) // @ game+0x56706e0
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // @ game+0x5670650
};

// Class UMG.ColorBinding
// Size: 0x78 (Inherited: 0x70)
struct UColorBinding : UPropertyBinding {
	char pad_70[0x8]; // 0x70(0x08)

	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue // (Final|Native|Public|Const) // @ game+0x566f980
	struct FLinearColor GetLinearValue(); // Function UMG.ColorBinding.GetLinearValue // (Final|Native|Public|HasDefaults|Const) // @ game+0x566f750
};

// Class UMG.ComboBox
// Size: 0x180 (Inherited: 0x148)
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items; // 0x148(0x10)
	struct FDelegate OnGenerateWidgetEvent; // 0x158(0x14)
	bool bIsFocusable; // 0x16c(0x01)
	char pad_16D[0x13]; // 0x16d(0x13)
};

// Class UMG.DragDropOperation
// Size: 0x90 (Inherited: 0x30)
struct UDragDropOperation : UObject {
	struct FString Tag; // 0x30(0x10)
	struct UObject* Payload; // 0x40(0x08)
	struct UWidget* DefaultDragVisual; // 0x48(0x08)
	enum class EDragPivot Pivot; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FVector2D Offset; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FMulticastInlineDelegate OnDrop; // 0x60(0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x70(0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x80(0x10)

	void Drop(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Drop // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x566f410
	void Dragged(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Dragged // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x566f2c0
	void DragCancelled(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.DragCancelled // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x566f170
};

// Class UMG.DynamicEntryBox
// Size: 0x220 (Inherited: 0x218)
struct UDynamicEntryBox : UDynamicEntryBoxBase {
	struct UUserWidget* EntryWidgetClass; // 0x218(0x08)

	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x566fd60
	void RemoveEntry(struct UUserWidget* EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry // (Final|Native|Public|BlueprintCallable) // @ game+0x566fc10
	struct UUserWidget* BP_CreateEntryOfClass(struct UUserWidget* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass // (Final|Native|Private|BlueprintCallable) // @ game+0x566f070
	struct UUserWidget* BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry // (Final|Native|Private|BlueprintCallable) // @ game+0x566f040
};

// Class UMG.EditableText
// Size: 0x508 (Inherited: 0x148)
struct UEditableText : UWidget {
	struct FText Text; // 0x148(0x18)
	struct FDelegate TextDelegate; // 0x160(0x14)
	char pad_174[0x4]; // 0x174(0x04)
	struct FText HintText; // 0x178(0x18)
	struct FDelegate HintTextDelegate; // 0x190(0x14)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct FEditableTextStyle WidgetStyle; // 0x1a8(0x240)
	struct USlateWidgetStyleAsset* Style; // 0x3e8(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3f0(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x3f8(0x08)
	struct USlateBrushAsset* CaretImage; // 0x400(0x08)
	struct FSlateFontInfo Font; // 0x408(0x60)
	struct FSlateColor ColorAndOpacity; // 0x468(0x28)
	bool IsReadOnly; // 0x490(0x01)
	bool IsPassword; // 0x491(0x01)
	char pad_492[0x2]; // 0x492(0x02)
	struct FUnicodeStringLength MaximumTextEntryLimit; // 0x494(0x08)
	float MinimumDesiredWidth; // 0x49c(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x4a0(0x01)
	bool SelectAllTextWhenFocused; // 0x4a1(0x01)
	bool RevertTextOnEscape; // 0x4a2(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x4a3(0x01)
	bool SelectAllTextOnCommit; // 0x4a4(0x01)
	bool AllowContextMenu; // 0x4a5(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x4a6(0x01)
	char pad_4A7[0x1]; // 0x4a7(0x01)
	struct FText VirtualKeyboardCommitText; // 0x4a8(0x18)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x4c0(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x4c1(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x4c2(0x01)
	enum class ETextJustify Justification; // 0x4c3(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x4c4(0x03)
	char pad_4C7[0x1]; // 0x4c7(0x01)
	struct FMulticastInlineDelegate OnTextChanged; // 0x4c8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x4d8(0x10)
	struct FMulticastInlineDelegate OnTextOverflowed; // 0x4e8(0x10)
	char pad_4F8[0x10]; // 0x4f8(0x10)

	void SetVirtualKeyboardCommitText(struct FText CommitText); // Function UMG.EditableText.SetVirtualKeyboardCommitText // (Final|Native|Public|BlueprintCallable) // @ game+0x5670c00
	void SetText(struct FText InText); // Function UMG.EditableText.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x5670a20
	void SetMaximumTextEntryLimit(struct FUnicodeStringLength InMaximumTextEntryLimit); // Function UMG.EditableText.SetMaximumTextEntryLimit // (Final|Native|Public|BlueprintCallable) // @ game+0x5670530
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableText.SetJustification // (Final|Native|Public|BlueprintCallable) // @ game+0x5670430
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x5670310
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword // (Final|Native|Public|BlueprintCallable) // @ game+0x56701f0
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x5670010
	void OnEditableTextOverflowedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextOverflowedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x40572e0
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x40572e0
	struct FText GetText(); // Function UMG.EditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x566fa00
};

// Class UMG.EditableTextBox
// Size: 0xb30 (Inherited: 0x148)
struct UEditableTextBox : UWidget {
	struct FText Text; // 0x148(0x18)
	struct FDelegate TextDelegate; // 0x160(0x14)
	char pad_174[0x4]; // 0x174(0x04)
	struct FEditableTextBoxStyle WidgetStyle; // 0x178(0x868)
	struct USlateWidgetStyleAsset* Style; // 0x9e0(0x08)
	struct FText HintText; // 0x9e8(0x18)
	struct FDelegate HintTextDelegate; // 0xa00(0x14)
	char pad_A14[0x4]; // 0xa14(0x04)
	struct FSlateFontInfo Font; // 0xa18(0x60)
	struct FLinearColor ForegroundColor; // 0xa78(0x10)
	struct FLinearColor BackgroundColor; // 0xa88(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xa98(0x10)
	bool IsReadOnly; // 0xaa8(0x01)
	bool IsPassword; // 0xaa9(0x01)
	char pad_AAA[0x2]; // 0xaaa(0x02)
	struct FUnicodeStringLength MaximumTextEntryLimit; // 0xaac(0x08)
	float MinimumDesiredWidth; // 0xab4(0x04)
	struct FMargin Padding; // 0xab8(0x10)
	bool IsCaretMovedWhenGainFocus; // 0xac8(0x01)
	bool SelectAllTextWhenFocused; // 0xac9(0x01)
	bool RevertTextOnEscape; // 0xaca(0x01)
	bool ClearKeyboardFocusOnCommit; // 0xacb(0x01)
	bool SelectAllTextOnCommit; // 0xacc(0x01)
	bool AllowContextMenu; // 0xacd(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0xace(0x01)
	char pad_ACF[0x1]; // 0xacf(0x01)
	struct FText VirtualKeyboardCommitText; // 0xad0(0x18)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xae8(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xae9(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xaea(0x01)
	enum class ETextJustify Justification; // 0xaeb(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0xaec(0x03)
	char pad_AEF[0x1]; // 0xaef(0x01)
	struct FMulticastInlineDelegate OnTextChanged; // 0xaf0(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xb00(0x10)
	struct FMulticastInlineDelegate OnTextOverflowed; // 0xb10(0x10)
	char pad_B20[0x10]; // 0xb20(0x10)

	void SetVirtualKeyboardCommitText(struct FText CommitText); // Function UMG.EditableTextBox.SetVirtualKeyboardCommitText // (Final|Native|Public|BlueprintCallable) // @ game+0x5670cf0
	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x5670b10
	void SetMaximumTextEntryLimit(struct FUnicodeStringLength InMaximumTextEntryLimit); // Function UMG.EditableTextBox.SetMaximumTextEntryLimit // (Final|Native|Public|BlueprintCallable) // @ game+0x56705c0
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableTextBox.SetJustification // (Final|Native|Public|BlueprintCallable) // @ game+0x56704b0
	void SetIsReadOnly(bool bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x56703a0
	void SetIsPassword(bool bIsPassword); // Function UMG.EditableTextBox.SetIsPassword // (Final|Native|Public|BlueprintCallable) // @ game+0x5670280
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x5670100
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // @ game+0x566ff20
	void OnEditableTextBoxOverflowedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxOverflowedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x40572e0
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x40572e0
	bool HasError(); // Function UMG.EditableTextBox.HasError // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x566fb90
	struct FText GetText(); // Function UMG.EditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x566fab0
	struct FVector2D GetContentSize(); // Function UMG.EditableTextBox.GetContentSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x566f6e0
	void ClearError(); // Function UMG.EditableTextBox.ClearError // (Final|Native|Public|BlueprintCallable) // @ game+0x566f110
};

// Class UMG.ExpandableArea
// Size: 0x390 (Inherited: 0x148)
struct UExpandableArea : UWidget {
	char pad_148[0x8]; // 0x148(0x08)
	struct FExpandableAreaStyle Style; // 0x150(0x130)
	struct FSlateBrush BorderBrush; // 0x280(0x90)
	struct FSlateColor BorderColor; // 0x310(0x28)
	bool bIsExpanded; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	float MaxHeight; // 0x33c(0x04)
	struct FMargin HeaderPadding; // 0x340(0x10)
	struct FMargin AreaPadding; // 0x350(0x10)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x360(0x10)
	struct UWidget* HeaderContent; // 0x370(0x08)
	struct UWidget* BodyContent; // 0x378(0x08)
	char pad_380[0x10]; // 0x380(0x10)

	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated // (Final|Native|Public|BlueprintCallable) // @ game+0x5677ee0
	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded // (Final|Native|Public|BlueprintCallable) // @ game+0x5677e50
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5676a60
};

// Class UMG.FloatBinding
// Size: 0x70 (Inherited: 0x70)
struct UFloatBinding : UPropertyBinding {

	float GetValue(); // Function UMG.FloatBinding.GetValue // (Final|Native|Public|Const) // @ game+0x5676d00
};

// Class UMG.GridPanel
// Size: 0x190 (Inherited: 0x160)
struct UGridPanel : UPanelWidget {
	struct TArray<float> ColumnFill; // 0x160(0x10)
	struct TArray<float> RowFill; // 0x170(0x10)
	char pad_180[0x10]; // 0x180(0x10)

	void SetRowFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill // (Final|Native|Public|BlueprintCallable) // @ game+0x5678260
	void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill // (Final|Native|Public|BlueprintCallable) // @ game+0x5677c00
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid // (Final|Native|Public|BlueprintCallable) // @ game+0x56761b0
};

// Class UMG.GridSlot
// Size: 0x78 (Inherited: 0x40)
struct UGridSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32_t Row; // 0x54(0x04)
	int32_t RowSpan; // 0x58(0x04)
	int32_t Column; // 0x5c(0x04)
	int32_t ColumnSpan; // 0x60(0x04)
	int32_t Layer; // 0x64(0x04)
	struct FVector2D Nudge; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3951e00
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan // (Final|Native|Public|BlueprintCallable) // @ game+0x3951d70
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // @ game+0x3951c10
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3951b80
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3951a80
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer // (Final|Native|Public|BlueprintCallable) // @ game+0x39518e0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3951760
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan // (Final|Native|Public|BlueprintCallable) // @ game+0x39516d0
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // @ game+0x3951570
};

// Class UMG.HorizontalBox
// Size: 0x170 (Inherited: 0x160)
struct UHorizontalBox : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)

	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox // (Final|Native|Public|BlueprintCallable) // @ game+0x56762c0
};

// Class UMG.HorizontalBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UHorizontalBoxSlot : UPanelSlot {
	char pad_40[0x8]; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	struct FSlateChildSize Size; // 0x58(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5678670
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0x5678560
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x56781d0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5677dd0
};

// Class UMG.InputKeySelector
// Size: 0x7c0 (Inherited: 0x148)
struct UInputKeySelector : UWidget {
	struct FButtonStyle WidgetStyle; // 0x148(0x2a8)
	struct FTextBlockStyle TextStyle; // 0x3f0(0x290)
	struct FInputChord SelectedKey; // 0x680(0x38)
	struct FSlateFontInfo Font; // 0x6b8(0x60)
	struct FMargin Margin; // 0x718(0x10)
	struct FLinearColor ColorAndOpacity; // 0x728(0x10)
	struct FText KeySelectionText; // 0x738(0x18)
	struct FText NoKeySpecifiedText; // 0x750(0x18)
	bool bAllowModifierKeys; // 0x768(0x01)
	bool bAllowGamepadKeys; // 0x769(0x01)
	char pad_76A[0x6]; // 0x76a(0x06)
	struct TArray<struct FKey> EscapeKeys; // 0x770(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x780(0x10)
	struct FMulticastInlineDelegate OnKeySelectionSuccessful; // 0x790(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x7a0(0x10)
	char pad_7B0[0x10]; // 0x7b0(0x10)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x56785f0
	void SetSelectedKey(struct FInputChord& InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x56783c0
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText // (Final|Native|Public|BlueprintCallable) // @ game+0x5678060
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText // (Final|Native|Public|BlueprintCallable) // @ game+0x5677f70
	void SetEscapeKeys(struct TArray<struct FKey>& InKeys); // Function UMG.InputKeySelector.SetEscapeKeys // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5677cd0
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys // (Final|Native|Public|BlueprintCallable) // @ game+0x5677110
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys // (Final|Native|Public|BlueprintCallable) // @ game+0x5677080
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5676a90
	void ClearSelectedKey(); // Function UMG.InputKeySelector.ClearSelectedKey // (Final|Native|Public|BlueprintCallable) // @ game+0x5676940
};

// Class UMG.Int32Binding
// Size: 0x70 (Inherited: 0x70)
struct UInt32Binding : UPropertyBinding {

	int32_t GetValue(); // Function UMG.Int32Binding.GetValue // (Final|Native|Public|Const) // @ game+0x5676d30
};

// Class UMG.InvalidationBox
// Size: 0x178 (Inherited: 0x160)
struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x160(0x01)
	bool CacheRelativeTransforms; // 0x161(0x01)
	char pad_162[0x16]; // 0x162(0x16)

	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache // (Final|Native|Public|BlueprintCallable) // @ game+0x5677ae0
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // (Final|Native|Public|BlueprintCallable) // @ game+0x2024060
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5676960
};

// Class UMG.UserListEntry
// Size: 0x30 (Inherited: 0x30)
struct UUserListEntry : UInterface {

	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG.UserListEntry.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG.UserListEntry.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void BP_OnEntryReleased(); // Function UMG.UserListEntry.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
};

// Class UMG.UserListEntryLibrary
// Size: 0x30 (Inherited: 0x30)
struct UUserListEntryLibrary : UBlueprintFunctionLibrary {

	bool IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemSelected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5676e00
	bool IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemExpanded // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5676d60
	struct UListViewBase* GetOwningListView(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.GetOwningListView // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5676c60
};

// Class UMG.UserObjectListEntry
// Size: 0x30 (Inherited: 0x30)
struct UUserObjectListEntry : UUserListEntry {

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG.UserObjectListEntry.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
};

// Class UMG.UserObjectListEntryLibrary
// Size: 0x30 (Inherited: 0x30)
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary {

	struct UObject* GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry); // Function UMG.UserObjectListEntryLibrary.GetListItemObject // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5676b60
};

// Class UMG.ListViewDesignerPreviewItem
// Size: 0x30 (Inherited: 0x30)
struct UListViewDesignerPreviewItem : UObject {
};

// Class UMG.MouseCursorBinding
// Size: 0x70 (Inherited: 0x70)
struct UMouseCursorBinding : UPropertyBinding {

	enum class EMouseCursor GetValue(); // Function UMG.MouseCursorBinding.GetValue // (Final|Native|Public|Const) // @ game+0x567dea0
};

// Class UMG.MovieScene2DTransformPropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieScene2DTransformPropertySystem : UMovieScenePropertySystem {
};

// Class UMG.MovieScene2DTransformSection
// Size: 0x560 (Inherited: 0xf0)
struct UMovieScene2DTransformSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieScene2DTransformMask TransformMask; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FMovieSceneFloatChannel Translation[0x2]; // 0x100(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x240(0xa0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x2e0(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x420(0x140)
};

// Class UMG.MovieScene2DTransformTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneMarginPropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneMarginPropertySystem : UMovieScenePropertySystem {
};

// Class UMG.MovieSceneMarginSection
// Size: 0x378 (Inherited: 0xf0)
struct UMovieSceneMarginSection : UMovieSceneSection {
	char pad_F0[0x8]; // 0xf0(0x08)
	struct FMovieSceneFloatChannel TopCurve; // 0xf8(0xa0)
	struct FMovieSceneFloatChannel LeftCurve; // 0x198(0xa0)
	struct FMovieSceneFloatChannel RightCurve; // 0x238(0xa0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2d8(0xa0)
};

// Class UMG.MovieSceneMarginTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0xd0 (Inherited: 0xa8)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
	struct TArray<struct FName> BrushPropertyNamePath; // 0xb0(0x10)
	struct FName TrackName; // 0xc0(0x0c)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class UMG.MultiLineEditableText
// Size: 0x518 (Inherited: 0x168)
struct UMultiLineEditableText : UTextLayoutWidget {
	struct FText Text; // 0x168(0x18)
	struct FText HintText; // 0x180(0x18)
	struct FDelegate HintTextDelegate; // 0x198(0x14)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FTextBlockStyle WidgetStyle; // 0x1b0(0x290)
	bool bIsReadOnly; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	struct FUnicodeStringLength MaximumTextEntryLimit; // 0x444(0x08)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct FSlateFontInfo Font; // 0x450(0x60)
	bool SelectAllTextWhenFocused; // 0x4b0(0x01)
	bool ClearTextSelectionOnFocusLoss; // 0x4b1(0x01)
	bool RevertTextOnEscape; // 0x4b2(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x4b3(0x01)
	bool AllowContextMenu; // 0x4b4(0x01)
	char pad_4B5[0x3]; // 0x4b5(0x03)
	struct FText VirtualKeyboardCommitText; // 0x4b8(0x18)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x4d0(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x4d1(0x01)
	char pad_4D2[0x6]; // 0x4d2(0x06)
	struct FMulticastInlineDelegate OnTextChanged; // 0x4d8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x4e8(0x10)
	struct FMulticastInlineDelegate OnTextOverflowed; // 0x4f8(0x10)
	char pad_508[0x10]; // 0x508(0x10)

	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x567ef30
	void SetVirtualKeyboardCommitText(struct FText CommitText); // Function UMG.MultiLineEditableText.SetVirtualKeyboardCommitText // (Final|Native|Public|BlueprintCallable) // @ game+0x567ecd0
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x567e9c0
	void SetMaximumTextEntryLimit(struct FUnicodeStringLength InMaximumTextEntryLimit); // Function UMG.MultiLineEditableText.SetMaximumTextEntryLimit // (Final|Native|Public|BlueprintCallable) // @ game+0x567e690
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x567e570
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x567e310
	void OnMultiLineEditableTextOverflowedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextOverflowedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x40572e0
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x40572e0
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x567dd40
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x567dba0
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xdb0 (Inherited: 0x168)
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	struct FText Text; // 0x168(0x18)
	struct FText HintText; // 0x180(0x18)
	struct FDelegate HintTextDelegate; // 0x198(0x14)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FEditableTextBoxStyle WidgetStyle; // 0x1b0(0x868)
	struct FTextBlockStyle TextStyle; // 0xa18(0x290)
	bool bIsReadOnly; // 0xca8(0x01)
	char pad_CA9[0x3]; // 0xca9(0x03)
	struct FUnicodeStringLength MaximumTextEntryLimit; // 0xcac(0x08)
	bool AllowContextMenu; // 0xcb4(0x01)
	char pad_CB5[0x3]; // 0xcb5(0x03)
	struct FText VirtualKeyboardCommitText; // 0xcb8(0x18)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xcd0(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xcd1(0x01)
	char pad_CD2[0x6]; // 0xcd2(0x06)
	struct USlateWidgetStyleAsset* Style; // 0xcd8(0x08)
	struct FSlateFontInfo Font; // 0xce0(0x60)
	struct FLinearColor ForegroundColor; // 0xd40(0x10)
	struct FLinearColor BackgroundColor; // 0xd50(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xd60(0x10)
	struct FMulticastInlineDelegate OnTextChanged; // 0xd70(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xd80(0x10)
	struct FMulticastInlineDelegate OnTextOverflowed; // 0xd90(0x10)
	char pad_DA0[0x10]; // 0xda0(0x10)

	void SetVirtualKeyboardCommitText(struct FText CommitText); // Function UMG.MultiLineEditableTextBox.SetVirtualKeyboardCommitText // (Final|Native|Public|BlueprintCallable) // @ game+0x567edc0
	void SetTextStyle(struct FTextBlockStyle& InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x567eba0
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x567eab0
	void SetMaximumTextEntryLimit(struct FUnicodeStringLength InMaximumTextEntryLimit); // Function UMG.MultiLineEditableTextBox.SetMaximumTextEntryLimit // (Final|Native|Public|BlueprintCallable) // @ game+0x567e720
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x567e600
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x567e400
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // @ game+0x567e220
	void OnMultiLineEditableTextBoxOverflowedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxOverflowedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x40572e0
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x40572e0
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x567ddf0
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x567dc50
};

// Class UMG.NamedSlot
// Size: 0x170 (Inherited: 0x160)
struct UNamedSlot : UContentWidget {
	char pad_160[0x10]; // 0x160(0x10)
};

// Class UMG.NamedSlotInterface
// Size: 0x30 (Inherited: 0x30)
struct UNamedSlotInterface : UInterface {
};

// Class UMG.NativeWidgetHost
// Size: 0x158 (Inherited: 0x148)
struct UNativeWidgetHost : UWidget {
	char pad_148[0x10]; // 0x148(0x10)
};

// Class UMG.ProgressBar
// Size: 0x378 (Inherited: 0x148)
struct UProgressBar : UWidget {
	struct FProgressBarStyle WidgetStyle; // 0x148(0x1b8)
	struct USlateWidgetStyleAsset* Style; // 0x300(0x08)
	struct USlateBrushAsset* BackgroundImage; // 0x308(0x08)
	struct USlateBrushAsset* FillImage; // 0x310(0x08)
	struct USlateBrushAsset* MarqueeImage; // 0x318(0x08)
	float Percent; // 0x320(0x04)
	enum class EProgressBarFillType BarFillType; // 0x324(0x01)
	bool bIsMarquee; // 0x325(0x01)
	char pad_326[0x2]; // 0x326(0x02)
	struct FVector2D BorderPadding; // 0x328(0x08)
	struct FDelegate PercentDelegate; // 0x330(0x14)
	struct FLinearColor FillColorAndOpacity; // 0x344(0x10)
	struct FDelegate FillColorAndOpacityDelegate; // 0x354(0x14)
	char pad_368[0x10]; // 0x368(0x10)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent // (Final|Native|Public|BlueprintCallable) // @ game+0x56846e0
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee // (Final|Native|Public|BlueprintCallable) // @ game+0x5684430
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5684290
};

// Class UMG.RetainerBox
// Size: 0x198 (Inherited: 0x160)
struct URetainerBox : UContentWidget {
	bool bRetainRender; // 0x160(0x01)
	bool RenderOnInvalidation; // 0x161(0x01)
	bool RenderOnPhase; // 0x162(0x01)
	char pad_163[0x1]; // 0x163(0x01)
	int32_t Phase; // 0x164(0x04)
	int32_t PhaseCount; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x170(0x08)
	struct FName TextureParameter; // 0x178(0x0c)
	char pad_184[0x14]; // 0x184(0x14)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x56850c0
	void SetRetainRendering(bool bInRetainRendering); // Function UMG.RetainerBox.SetRetainRendering // (Final|Native|Public|BlueprintCallable) // @ game+0x5684830
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase // (Final|Native|Public|BlueprintCallable) // @ game+0x5684760
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x5684200
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // (Final|Native|Public|BlueprintCallable) // @ game+0x5683860
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56836f0
};

// Class UMG.SafeZone
// Size: 0x178 (Inherited: 0x160)
struct USafeZone : UContentWidget {
	bool PadLeft; // 0x160(0x01)
	bool PadRight; // 0x161(0x01)
	bool PadTop; // 0x162(0x01)
	bool PadBottom; // 0x163(0x01)
	char pad_164[0x14]; // 0x164(0x14)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad // (Final|Native|Public|BlueprintCallable) // @ game+0x5684b70
};

// Class UMG.SafeZoneSlot
// Size: 0x68 (Inherited: 0x40)
struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FMargin SafeAreaScale; // 0x44(0x10)
	enum class EHorizontalAlignment HAlign; // 0x54(0x01)
	enum class EVerticalAlignment VAlign; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct FMargin Padding; // 0x58(0x10)
};

// Class UMG.ScaleBox
// Size: 0x180 (Inherited: 0x160)
struct UScaleBox : UContentWidget {
	enum class EStretch Stretch; // 0x160(0x01)
	enum class EStretchDirection StretchDirection; // 0x161(0x01)
	char pad_162[0x2]; // 0x162(0x02)
	float UserSpecifiedScale; // 0x164(0x04)
	bool IgnoreInheritedScale; // 0x168(0x01)
	char pad_169[0x17]; // 0x169(0x17)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale // (Final|Native|Public|BlueprintCallable) // @ game+0x5685160
	void SetStretchDirection(enum class EStretchDirection InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x5684e40
	void SetStretch(enum class EStretch InStretch); // Function UMG.ScaleBox.SetStretch // (Final|Native|Public|BlueprintCallable) // @ game+0x5684dc0
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale // (Final|Native|Public|BlueprintCallable) // @ game+0x56843a0
};

// Class UMG.ScaleBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UScaleBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5669b80
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x56845c0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5668c00
};

// Class UMG.ScrollBar
// Size: 0x698 (Inherited: 0x148)
struct UScrollBar : UWidget {
	struct FScrollBarStyle WidgetStyle; // 0x148(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x660(0x08)
	bool bAlwaysShowScrollbar; // 0x668(0x01)
	bool bAlwaysShowScrollbarTrack; // 0x669(0x01)
	enum class EOrientation Orientation; // 0x66a(0x01)
	char pad_66B[0x1]; // 0x66b(0x01)
	struct FVector2D Thickness; // 0x66c(0x08)
	struct FMargin Padding; // 0x674(0x10)
	char pad_684[0x14]; // 0x684(0x14)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState // (Final|Native|Public|BlueprintCallable) // @ game+0x5684cf0
};

// Class UMG.ScrollBoxSlot
// Size: 0x60 (Inherited: 0x40)
struct UScrollBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x56851e0
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x5684650
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x5684320
};

// Class UMG.SizeBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct USizeBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x568d360
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x568cfb0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x568c6f0
};

// Class UMG.SlateBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalVector); // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x568d760
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteVector); // Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x568d660
	float TransformScalarLocalToAbsolute(struct FGeometry& Geometry, float LocalScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x568d560
	float TransformScalarAbsoluteToLocal(struct FGeometry& Geometry, float AbsoluteScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x568d460
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x568c280
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x568c120
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.ScreenToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x568c020
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.LocalToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x568be30
	struct FVector2D LocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalCoordinate); // Function UMG.SlateBlueprintLibrary.LocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x568bd30
	bool IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.IsUnderLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x568bc30
	struct FVector2D GetLocalTopLeft(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalTopLeft // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x568b9c0
	struct FVector2D GetLocalSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x568b900
	struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetAbsoluteSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x568b7e0
	bool EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B); // Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x568b5c0
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.AbsoluteToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x568b2e0
	struct FVector2D AbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.AbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x568b1e0
};

// Class UMG.SlateVectorArtData
// Size: 0x68 (Inherited: 0x30)
struct USlateVectorArtData : UObject {
	struct TArray<struct FSlateMeshVertex> VertexData; // 0x30(0x10)
	struct TArray<uint32_t> IndexData; // 0x40(0x10)
	struct UMaterialInterface* Material; // 0x50(0x08)
	struct FVector2D ExtentMin; // 0x58(0x08)
	struct FVector2D ExtentMax; // 0x60(0x08)
};

// Class UMG.SlateAccessibleWidgetData
// Size: 0x98 (Inherited: 0x30)
struct USlateAccessibleWidgetData : UObject {
	bool bCanChildrenBeAccessible; // 0x30(0x01)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x31(0x01)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct FText AccessibleText; // 0x38(0x18)
	struct FDelegate AccessibleTextDelegate; // 0x50(0x14)
	char pad_64[0x4]; // 0x64(0x04)
	struct FText AccessibleSummaryText; // 0x68(0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x80(0x14)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class UMG.Spacer
// Size: 0x160 (Inherited: 0x148)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x148(0x08)
	char pad_150[0x10]; // 0x150(0x10)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x568d040
};

// Class UMG.SpinBox
// Size: 0x590 (Inherited: 0x148)
struct USpinBox : UWidget {
	float Value; // 0x148(0x04)
	struct FDelegate ValueDelegate; // 0x14c(0x14)
	struct FSpinBoxStyle WidgetStyle; // 0x160(0x310)
	struct USlateWidgetStyleAsset* Style; // 0x470(0x08)
	int32_t MinFractionalDigits; // 0x478(0x04)
	int32_t MaxFractionalDigits; // 0x47c(0x04)
	bool bAlwaysUsesDeltaSnap; // 0x480(0x01)
	char pad_481[0x3]; // 0x481(0x03)
	float Delta; // 0x484(0x04)
	float SliderExponent; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct FSlateFontInfo Font; // 0x490(0x60)
	enum class ETextJustify Justification; // 0x4f0(0x01)
	char pad_4F1[0x3]; // 0x4f1(0x03)
	float MinDesiredWidth; // 0x4f4(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x4f8(0x01)
	bool SelectAllTextOnCommit; // 0x4f9(0x01)
	char pad_4FA[0x6]; // 0x4fa(0x06)
	struct FSlateColor ForegroundColor; // 0x500(0x28)
	struct FMulticastInlineDelegate OnValueChanged; // 0x528(0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x538(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x548(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x558(0x10)
	char bOverride_MinValue : 1; // 0x568(0x01)
	char bOverride_MaxValue : 1; // 0x568(0x01)
	char bOverride_MinSliderValue : 1; // 0x568(0x01)
	char bOverride_MaxSliderValue : 1; // 0x568(0x01)
	char pad_568_4 : 4; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	float MinValue; // 0x56c(0x04)
	float MaxValue; // 0x570(0x04)
	float MinSliderValue; // 0x574(0x04)
	float MaxSliderValue; // 0x578(0x04)
	char pad_57C[0x14]; // 0x57c(0x14)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x568d2e0
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x568cf30
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x568ce30
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits // (Final|Native|Public|BlueprintCallable) // @ game+0x568cda0
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x568cba0
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x568caa0
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable) // @ game+0x568ca10
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor // (Final|Native|Public|BlueprintCallable) // @ game+0x568c570
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta // (Final|Native|Public|BlueprintCallable) // @ game+0x568c4f0
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable) // @ game+0x568c460
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	float GetValue(); // Function UMG.SpinBox.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x568bc00
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x568bb70
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x568bb40
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x568bb10
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x568bae0
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x568bab0
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x568ba80
	float GetDelta(); // Function UMG.SpinBox.GetDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x568b8d0
	bool GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x568b8a0
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x568b580
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x568b560
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x568b4e0
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x568b4c0
};

// Class UMG.TextBinding
// Size: 0x78 (Inherited: 0x70)
struct UTextBinding : UPropertyBinding {
	char pad_70[0x8]; // 0x70(0x08)

	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue // (Final|Native|Public|Const) // @ game+0x5698af0
	struct FString GetStringValue(); // Function UMG.TextBinding.GetStringValue // (Final|Native|Public|Const) // @ game+0x56989c0
};

// Class UMG.Throbber
// Size: 0x1f8 (Inherited: 0x148)
struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x148(0x04)
	bool bAnimateHorizontally; // 0x14c(0x01)
	bool bAnimateVertically; // 0x14d(0x01)
	bool bAnimateOpacity; // 0x14e(0x01)
	char pad_14F[0x1]; // 0x14f(0x01)
	struct USlateBrushAsset* PieceImage; // 0x150(0x08)
	struct FSlateBrush Image; // 0x158(0x90)
	char pad_1E8[0x10]; // 0x1e8(0x10)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // @ game+0x569ac40
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically // (Final|Native|Public|BlueprintCallable) // @ game+0x5699f30
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x5699ea0
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally // (Final|Native|Public|BlueprintCallable) // @ game+0x5699e10
};

// Class UMG.UMGSequencePlayer
// Size: 0x3d8 (Inherited: 0x30)
struct UUMGSequencePlayer : UObject {
	char pad_30[0x238]; // 0x30(0x238)
	struct UWidgetAnimation* Animation; // 0x268(0x08)
	char pad_270[0x8]; // 0x270(0x08)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x278(0xe8)
	char pad_360[0x78]; // 0x360(0x78)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag // (Final|Native|Public|BlueprintCallable) // @ game+0x569b4e0
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5698ba0
};

// Class UMG.UMGSequenceTickManager
// Size: 0x128 (Inherited: 0x30)
struct UUMGSequenceTickManager : UObject {
	struct TMap<struct TWeakObjectPtr<struct UUserWidget>, struct FSequenceTickManagerWidgetData> WeakUserWidgetData; // 0x30(0x50)
	struct UMovieSceneEntitySystemLinker* Linker; // 0x80(0x08)
	char pad_88[0xa0]; // 0x88(0xa0)
};

// Class UMG.UniformGridPanel
// Size: 0x188 (Inherited: 0x160)
struct UUniformGridPanel : UPanelWidget {
	struct FMargin SlotPadding; // 0x160(0x10)
	float MinDesiredSlotWidth; // 0x170(0x04)
	float MinDesiredSlotHeight; // 0x174(0x04)
	char pad_178[0x10]; // 0x178(0x10)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x569b1b0
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x569aa70
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x569a9f0
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid // (Final|Native|Public|BlueprintCallable) // @ game+0x5698120
};

// Class UMG.UniformGridSlot
// Size: 0x58 (Inherited: 0x40)
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x40(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32_t Row; // 0x44(0x04)
	int32_t Column; // 0x48(0x04)
	char pad_4C[0xc]; // 0x4c(0x0c)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x569b580
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // @ game+0x569b010
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x569a6f0
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // @ game+0x569a2b0
};

// Class UMG.VerticalBox
// Size: 0x170 (Inherited: 0x160)
struct UVerticalBox : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)

	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Function UMG.VerticalBox.AddChildToVerticalBox // (Final|Native|Public|BlueprintCallable) // @ game+0x569f8d0
};

// Class UMG.VerticalBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UVerticalBoxSlot : UPanelSlot {
	struct FSlateChildSize Size; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x56a11f0
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0ec0
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x56a09c0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x56a0470
};

// Class UMG.Viewport
// Size: 0x1a8 (Inherited: 0x160)
struct UViewport : UContentWidget {
	struct FLinearColor BackgroundColor; // 0x160(0x10)
	char pad_170[0x38]; // 0x170(0x38)

	struct AActor* Spawn(struct AActor* ActorClass); // Function UMG.Viewport.Spawn // (Final|Native|Public|BlueprintCallable) // @ game+0x56a1390
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x56a1300
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x56a1270
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fe80
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fec0
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x569fe40
};

// Class UMG.VisibilityBinding
// Size: 0x70 (Inherited: 0x70)
struct UVisibilityBinding : UPropertyBinding {

	enum class ESlateVisibility GetValue(); // Function UMG.VisibilityBinding.GetValue // (Final|Native|Public|Const) // @ game+0x569fe10
};

// Class UMG.WidgetAnimation
// Size: 0x98 (Inherited: 0x68)
struct UWidgetAnimation : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x68(0x08)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x70(0x10)
	bool bLegacyFinishOnStop; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString DisplayLabel; // 0x88(0x10)

	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x56a9470
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x56a9380
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x56a92f0
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x56a9260
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56a7c30
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56a7460
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x56a5200
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x56a5110
};

// Class UMG.WidgetAnimationDelegateBinding
// Size: 0x40 (Inherited: 0x30)
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x30(0x10)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x50 (Inherited: 0x30)
struct UWidgetAnimationPlayCallbackProxy : UObject {
	struct FMulticastInlineDelegate Finished; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)

	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x56a5aa0
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x56a5880
};

// Class UMG.WidgetBinding
// Size: 0x70 (Inherited: 0x70)
struct UWidgetBinding : UPropertyBinding {

	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue // (Final|Native|Public|Const) // @ game+0x56a7c60
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x378 (Inherited: 0x338)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x338(0x08)
	char bClassRequiresNativeTick : 1; // 0x340(0x01)
	char pad_340_1 : 7; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x348(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x358(0x10)
	struct TArray<struct FName> NamedSlots; // 0x368(0x10)
};

// Class UMG.WidgetBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FEventReply UnlockMouse(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a95d0
	struct FEventReply Unhandled(); // Function UMG.WidgetBlueprintLibrary.Unhandled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56a9560
	void SetWindowTitleBarState(struct UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x56a90c0
	void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x56a9020
	void SetWindowTitleBarCloseButtonActive(bool bActive); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x56a8fa0
	struct FEventReply SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.SetUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a5310
	struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition); // Function UMG.WidgetBlueprintLibrary.SetMousePosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x56a8e70
	void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x56a8d70
	void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x56a8c70
	void SetInputMode_GameOnly(struct APlayerController* PlayerController); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x56a8bf0
	void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x56a8aa0
	void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x56a8940
	bool SetHardwareCursor(struct UObject* WorldContextObject, enum class EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot); // Function UMG.WidgetBlueprintLibrary.SetHardwareCursor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x56a87e0
	void SetFocusToGameViewport(); // Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x56a87c0
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x56a8660
	void SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x56a84f0
	void SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x56a84f0
	void RestorePreviousWindowTitleBarState(); // Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x56a84d0
	struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a83e0
	struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a55c0
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	struct FSlateBrush NoResourceBrush(); // Function UMG.WidgetBlueprintLibrary.NoResourceBrush // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56a8310
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56a8150
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56a7f90
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56a7e60
	struct FEventReply LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.LockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a7d30
	bool IsDragDropping(); // Function UMG.WidgetBlueprintLibrary.IsDragDropping // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56a7d00
	struct FEventReply Handled(); // Function UMG.WidgetBlueprintLibrary.Handled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56a7c90
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding); // Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x56a7ab0
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a78e0
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a7780
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a76a0
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a7570
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a7490
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a7330
	struct UDragDropOperation* GetDragDroppingContent(); // Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56a7300
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a71d0
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a70a0
	struct UObject* GetBrushResource(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResource // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a6f70
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UInterface* Interface, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x56a6df0
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UUserWidget* WidgetClass, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x56a6c70
	struct FEventReply EndDragDrop(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.EndDragDrop // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a6b80
	void DrawTextFormatted(struct FPaintContext& Context, struct FText& Text, struct FVector2D Position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawTextFormatted // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x56a68e0
	void DrawText(struct FPaintContext& Context, struct FString inString, struct FVector2D Position, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawText // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x56a6750
	void DrawLines(struct FPaintContext& Context, struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLines // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x56a6570
	void DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLine // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x56a6360
	void DrawBox(struct FPaintContext& Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawBox // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x56a61a0
	void DismissAllMenus(); // Function UMG.WidgetBlueprintLibrary.DismissAllMenus // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x56a6180
	struct FEventReply DetectDragIfPressed(struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x56a5f00
	struct FEventReply DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDrag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a5d00
	struct UDragDropOperation* CreateDragDropOperation(struct UDragDropOperation* OperationClass); // Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x56a57f0
	struct UUserWidget* Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer); // Function UMG.WidgetBlueprintLibrary.Create // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x56a56f0
	struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.ClearUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a55c0
	struct FEventReply CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.CaptureMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a5490
	struct FEventReply CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.CaptureJoystick // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56a5310
	void CancelDragDrop(); // Function UMG.WidgetBlueprintLibrary.CancelDragDrop // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x56a52f0
};

// Class UMG.WidgetInteractionComponent
// Size: 0x490 (Inherited: 0x290)
struct UWidgetInteractionComponent : USceneComponent {
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x288(0x10)
	char pad_2A0[0x8]; // 0x2a0(0x08)
	int32_t VirtualUserIndex; // 0x2a8(0x04)
	int32_t PointerIndex; // 0x2ac(0x04)
	enum class ECollisionChannel TraceChannel; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float InteractionDistance; // 0x2b4(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x2b8(0x01)
	bool bEnableHitTesting; // 0x2b9(0x01)
	bool bShowDebug; // 0x2ba(0x01)
	char pad_2BB[0x1]; // 0x2bb(0x01)
	float DebugSphereLineThickness; // 0x2bc(0x04)
	float DebugLineThickness; // 0x2c0(0x04)
	struct FLinearColor DebugColor; // 0x2c4(0x10)
	char pad_2D4[0x7c]; // 0x2d4(0x7c)
	struct FHitResult CustomHitResult; // 0x350(0x90)
	struct FVector2D LocalHitLocation; // 0x3e0(0x08)
	struct FVector2D LastLocalHitLocation; // 0x3e8(0x08)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x3f0(0x08)
	struct FHitResult LastHitResult; // 0x3f8(0x90)
	bool bIsHoveredWidgetInteractable; // 0x488(0x01)
	bool bIsHoveredWidgetFocusable; // 0x489(0x01)
	bool bIsHoveredWidgetHitTestVisible; // 0x48a(0x01)
	char pad_48B[0x5]; // 0x48b(0x05)

	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x56b0060
	void SetCustomHitResult(struct FHitResult& HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x56afe00
	bool SendKeyChar(struct FString Characters, bool bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar // (Native|Public|BlueprintCallable) // @ game+0x56afc10
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel // (Native|Public|BlueprintCallable) // @ game+0x56afb80
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey // (Native|Public|BlueprintCallable) // @ game+0x56af990
	bool ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey // (Native|Public|BlueprintCallable) // @ game+0x56af870
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey // (Native|Public|BlueprintCallable) // @ game+0x56af5f0
	bool PressKey(struct FKey Key, bool bRepeat); // Function UMG.WidgetInteractionComponent.PressKey // (Native|Public|BlueprintCallable) // @ game+0x56af480
	bool PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey // (Native|Public|BlueprintCallable) // @ game+0x56af360
	bool IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56af300
	bool IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56af2d0
	bool IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56af2a0
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x56aec50
	struct UWidgetComponent* GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36a0340
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x56aeb30
};

// Class UMG.WidgetLayoutLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary {

	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b0eb0
	struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b0e20
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b0d90
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b0d00
	struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b0c70
	struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b0be0
	struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b0b50
	struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b0ac0
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b0a30
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b09a0
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b0910
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b0880
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56b07f0
	void RemoveAllWidgets(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.RemoveAllWidgets // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x56afaa0
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition, bool bPlayerViewportRelative); // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x56af700
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x56af170
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportSize // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x56af0e0
	float GetViewportScale(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportScale // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x56af050
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController); // Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x56aef40
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY); // Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x56aedc0
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x56aed30
	struct FVector2D GetMousePositionOnPlatform(); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x56aecf0
};

// Class UMG.WidgetNavigation
// Size: 0x138 (Inherited: 0x30)
struct UWidgetNavigation : UObject {
	struct FWidgetNavigationData Up; // 0x30(0x2c)
	struct FWidgetNavigationData Down; // 0x5c(0x2c)
	struct FWidgetNavigationData Left; // 0x88(0x2c)
	struct FWidgetNavigationData Right; // 0xb4(0x2c)
	struct FWidgetNavigationData Next; // 0xe0(0x2c)
	struct FWidgetNavigationData Previous; // 0x10c(0x2c)
};

// Class UMG.WidgetSwitcherSlot
// Size: 0x60 (Inherited: 0x40)
struct UWidgetSwitcherSlot : UPanelSlot {
	char pad_40[0x8]; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x56b3980
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x56b37d0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x56b35d0
};

// Class UMG.WidgetTree
// Size: 0x38 (Inherited: 0x30)
struct UWidgetTree : UObject {
	struct UWidget* RootWidget; // 0x30(0x08)
};

// Class UMG.WindowTitleBarArea
// Size: 0x180 (Inherited: 0x160)
struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x160(0x01)
	bool bDoubleClickTogglesFullscreen; // 0x161(0x01)
	char pad_162[0x1e]; // 0x162(0x1e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x56b3a00
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x56b3860
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x56b3650
};

// Class UMG.WindowTitleBarAreaSlot
// Size: 0x68 (Inherited: 0x40)
struct UWindowTitleBarAreaSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x56b3a80
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x56b38f0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x56b36d0
};

// Class UMG.WrapBox
// Size: 0x188 (Inherited: 0x160)
struct UWrapBox : UPanelWidget {
	struct FVector2D InnerSlotPadding; // 0x160(0x08)
	float WrapWidth; // 0x168(0x04)
	float WrapSize; // 0x16c(0x04)
	bool bExplicitWrapWidth; // 0x170(0x01)
	bool bExplicitWrapSize; // 0x171(0x01)
	enum class EOrientation Orientation; // 0x172(0x01)
	char pad_173[0x15]; // 0x173(0x15)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x56b3750
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildToWrapBox // (Final|Native|Public|BlueprintCallable) // @ game+0x56b34a0
};

// Class UMG.WrapBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UWrapBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	bool bFillEmptySpace; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FillSpanWhenLessThan; // 0x54(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3c7ec20
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3c7e9b0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3c7e890
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan // (Final|Native|Public|BlueprintCallable) // @ game+0x3c7e690
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace // (Final|Native|Public|BlueprintCallable) // @ game+0x3c7e570
};
