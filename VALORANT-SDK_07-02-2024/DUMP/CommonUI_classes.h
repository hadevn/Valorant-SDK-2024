// Class CommonUI.AnalogSlider
// Size: 0x588 (Inherited: 0x568)
struct UAnalogSlider : USlider {
	struct FMulticastInlineDelegate OnAnalogCapture; // 0x568(0x10)
	char pad_578[0x10]; // 0x578(0x10)
};

// Class CommonUI.CommonActionHandlerInterface
// Size: 0x30 (Inherited: 0x30)
struct UCommonActionHandlerInterface : UInterface {
};

// Class CommonUI.CommonActionWidget
// Size: 0x380 (Inherited: 0x148)
struct UCommonActionWidget : UWidget {
	struct FMulticastInlineDelegate OnInputMethodChanged; // 0x148(0x10)
	struct FSlateBrush ProgressMaterialBrush; // 0x158(0x90)
	struct FName ProgressMaterialParam; // 0x1e8(0x0c)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct FSlateBrush IconRimBrush; // 0x1f8(0x90)
	struct TArray<struct FDataTableRowHandle> InputActions; // 0x288(0x10)
	char pad_298[0x8]; // 0x298(0x08)
	struct UMaterialInstanceDynamic* ProgressDynamicMaterial; // 0x2a0(0x08)
	char pad_2A8[0xd8]; // 0x2a8(0xd8)

	void SetInputActions(struct TArray<struct FDataTableRowHandle> NewInputActions); // Function CommonUI.CommonActionWidget.SetInputActions // (Final|Native|Public|BlueprintCallable) // @ game+0x2620e20
	void SetInputAction(struct FDataTableRowHandle InputActionRow); // Function CommonUI.CommonActionWidget.SetInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x2620be0
	void SetIconRimBrush(struct FSlateBrush InIconRimBrush); // Function CommonUI.CommonActionWidget.SetIconRimBrush // (Final|Native|Public|BlueprintCallable) // @ game+0x2620ac0
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	bool IsHeldAction(); // Function CommonUI.CommonActionWidget.IsHeldAction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26205f0
	struct FSlateBrush GetIcon(); // Function CommonUI.CommonActionWidget.GetIcon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x261f890
	struct FText GetDisplayText(); // Function CommonUI.CommonActionWidget.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x261f7e0
};

// Class CommonUI.CommonUserWidget
// Size: 0x2f0 (Inherited: 0x2c8)
struct UCommonUserWidget : UUserWidget {
	bool bConsumePointerInput; // 0x2c8(0x01)
	char pad_2C9[0x27]; // 0x2c9(0x27)

	void SetConsumePointerInput(bool bInConsumePointerInput); // Function CommonUI.CommonUserWidget.SetConsumePointerInput // (Final|Native|Public|BlueprintCallable) // @ game+0x26338f0
};

// Class CommonUI.CommonActivatableWidget
// Size: 0x388 (Inherited: 0x2f0)
struct UCommonActivatableWidget : UCommonUserWidget {
	bool bAutoActivate; // 0x2f0(0x01)
	bool bIsBackHandler; // 0x2f1(0x01)
	bool bSupportsActivationFocus; // 0x2f2(0x01)
	bool bIsModal; // 0x2f3(0x01)
	bool bAutoRestoreFocus; // 0x2f4(0x01)
	bool bSetVisibilityOnActivated; // 0x2f5(0x01)
	enum class ESlateVisibility ActivatedVisibility; // 0x2f6(0x01)
	bool bSetVisibilityOnDeactivated; // 0x2f7(0x01)
	enum class ESlateVisibility DeactivatedVisibility; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FMulticastInlineDelegate BP_OnWidgetActivated; // 0x300(0x10)
	struct FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x310(0x10)
	bool bIsActive; // 0x320(0x01)
	char pad_321[0x67]; // 0x321(0x67)

	bool IsActivated(); // Function CommonUI.CommonActivatableWidget.IsActivated // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26205a0
	void DeactivateWidget(); // Function CommonUI.CommonActivatableWidget.DeactivateWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x261f130
	bool BP_OnHandleBackAction(); // Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void BP_OnDeactivated(); // Function CommonUI.CommonActivatableWidget.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void BP_OnActivated(); // Function CommonUI.CommonActivatableWidget.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget // (Event|Protected|BlueprintEvent|Const) // @ game+0x40572e0
	void ActivateWidget(); // Function CommonUI.CommonActivatableWidget.ActivateWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x261f030
};

// Class CommonUI.CommonActivatableWidgetContainerBase
// Size: 0x260 (Inherited: 0x148)
struct UCommonActivatableWidgetContainerBase : UWidget {
	char pad_148[0x18]; // 0x148(0x18)
	enum class ECommonSwitcherTransition TransitionType; // 0x160(0x01)
	enum class ETransitionCurve TransitionCurveType; // 0x161(0x01)
	char pad_162[0x2]; // 0x162(0x02)
	float TransitionDuration; // 0x164(0x04)
	struct TArray<struct UCommonActivatableWidget*> WidgetList; // 0x168(0x10)
	struct UCommonActivatableWidget* DisplayedWidget; // 0x178(0x08)
	struct FUserWidgetPool GeneratedWidgetsPool; // 0x180(0x80)
	char pad_200[0x60]; // 0x200(0x60)

	void SetTransitionDuration(float Duration); // Function CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x2621890
	void RemoveWidget(struct UCommonActivatableWidget* WidgetToRemove); // Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget // (Final|Native|Private|BlueprintCallable) // @ game+0x2620800
	float GetTransitionDuration(); // Function CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2620410
	struct UCommonActivatableWidget* GetActiveWidget(); // Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x261f230
	void ClearWidgets(); // Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets // (Final|Native|Public|BlueprintCallable) // @ game+0x261f110
	struct UCommonActivatableWidget* BP_AddWidget(struct UCommonActivatableWidget* ActivatableWidgetClass); // Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget // (Final|Native|Private|BlueprintCallable) // @ game+0x261f050
};

// Class CommonUI.CommonActivatableWidgetStack
// Size: 0x270 (Inherited: 0x260)
struct UCommonActivatableWidgetStack : UCommonActivatableWidgetContainerBase {
	struct UCommonActivatableWidget* RootContentWidgetClass; // 0x260(0x08)
	struct UCommonActivatableWidget* RootContentWidget; // 0x268(0x08)
};

// Class CommonUI.CommonActivatableWidgetQueue
// Size: 0x260 (Inherited: 0x260)
struct UCommonActivatableWidgetQueue : UCommonActivatableWidgetContainerBase {
};

// Class CommonUI.CommonAnimatedSwitcher
// Size: 0x1e8 (Inherited: 0x178)
struct UCommonAnimatedSwitcher : UWidgetSwitcher {
	char pad_178[0x30]; // 0x178(0x30)
	enum class ECommonSwitcherTransition TransitionType; // 0x1a8(0x01)
	enum class ETransitionCurve TransitionCurveType; // 0x1a9(0x01)
	char pad_1AA[0x2]; // 0x1aa(0x02)
	float TransitionDuration; // 0x1ac(0x04)
	char pad_1B0[0x38]; // 0x1b0(0x38)

	void SetDisableTransitionAnimation(bool bDisableAnimation); // Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x2620910
	bool IsTransitionPlaying(); // Function CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2620680
	bool IsCurrentlySwitching(); // Function CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26205c0
	bool HasWidgets(); // Function CommonUI.CommonAnimatedSwitcher.HasWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2620570
	void ActivatePreviousWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x261efa0
	void ActivateNextWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x261ef10
};

// Class CommonUI.CommonActivatableWidgetSwitcher
// Size: 0x1f8 (Inherited: 0x1e8)
struct UCommonActivatableWidgetSwitcher : UCommonAnimatedSwitcher {
	char pad_1E8[0x10]; // 0x1e8(0x10)
};

// Class CommonUI.CommonBorderStyle
// Size: 0xc0 (Inherited: 0x30)
struct UCommonBorderStyle : UObject {
	struct FSlateBrush Background; // 0x30(0x90)

	void GetBackgroundBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonBorderStyle.GetBackgroundBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x261f260
};

// Class CommonUI.CommonBorder
// Size: 0x2f0 (Inherited: 0x2d0)
struct UCommonBorder : UBorder {
	struct UCommonBorderStyle* Style; // 0x2d0(0x08)
	bool bReducePaddingBySafezone; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	struct FMargin MinimumPadding; // 0x2dc(0x10)
	char pad_2EC[0x4]; // 0x2ec(0x04)

	void SetStyle(struct UCommonBorderStyle* InStyle); // Function CommonUI.CommonBorder.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x26216f0
};

// Class CommonUI.CommonBoundActionBar
// Size: 0x228 (Inherited: 0x218)
struct UCommonBoundActionBar : UDynamicEntryBoxBase {
	struct UCommonBoundActionButton* ActionButtonClass; // 0x218(0x08)
	bool bDisplayOwningPlayerActionsOnly; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)

	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions); // Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x26209a0
};

// Class CommonUI.CommonButtonBase
// Size: 0xce8 (Inherited: 0x2f0)
struct UCommonButtonBase : UCommonUserWidget {
	int32_t MinWidth; // 0x2f0(0x04)
	int32_t MinHeight; // 0x2f4(0x04)
	struct UCommonButtonStyle* Style; // 0x2f8(0x08)
	bool bHideInputAction; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct FSlateSound PressedSlateSoundOverride; // 0x308(0x20)
	struct FSlateSound HoveredSlateSoundOverride; // 0x328(0x20)
	char bApplyAlphaOnDisable : 1; // 0x348(0x01)
	char bSelectable : 1; // 0x348(0x01)
	char bShouldSelectUponReceivingFocus : 1; // 0x348(0x01)
	char bInteractableWhenSelected : 1; // 0x348(0x01)
	char bToggleable : 1; // 0x348(0x01)
	char bDisplayInputActionWhenNotInteractable : 1; // 0x348(0x01)
	char bHideInputActionWithKeyboard : 1; // 0x348(0x01)
	char bShouldUseFallbackDefaultInputAction : 1; // 0x348(0x01)
	char pad_349[0x1]; // 0x349(0x01)
	enum class EButtonClickMethod ClickMethod; // 0x34a(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x34b(0x01)
	enum class EButtonPressMethod PressMethod; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	int32_t InputPriority; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct FDataTableRowHandle TriggeringInputAction; // 0x358(0x18)
	char pad_370[0x18]; // 0x370(0x18)
	struct FMulticastInlineDelegate OnSelectedChangedBase; // 0x388(0x10)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x398(0x10)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnButtonBaseHovered; // 0x3b8(0x10)
	struct FMulticastInlineDelegate OnButtonBaseUnhovered; // 0x3c8(0x10)
	char pad_3D8[0x4]; // 0x3d8(0x04)
	bool bIsPersistentBinding; // 0x3dc(0x01)
	enum class ECommonInputMode InputModeOverride; // 0x3dd(0x01)
	char pad_3DE[0x32]; // 0x3de(0x32)
	struct UMaterialInstanceDynamic* SingleMaterialStyleMID; // 0x410(0x08)
	struct FButtonStyle NormalStyle; // 0x418(0x2a8)
	struct FButtonStyle SelectedStyle; // 0x6c0(0x2a8)
	struct FButtonStyle DisabledStyle; // 0x968(0x2a8)
	char bStopDoubleClickPropagation : 1; // 0xc10(0x01)
	char pad_C10_1 : 7; // 0xc10(0x01)
	char pad_C11[0xcf]; // 0xc11(0xcf)
	struct UCommonActionWidget* InputActionWidget; // 0xce0(0x08)

	void StopDoubleClickPropagation(); // Function CommonUI.CommonButtonBase.StopDoubleClickPropagation // (Final|Native|Protected|BlueprintCallable) // @ game+0x2621a50
	void SetTriggeringInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeringInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26219b0
	void SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeredInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2621910
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function CommonUI.CommonButtonBase.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x2621810
	void SetStyle(struct UCommonButtonStyle* InStyle); // Function CommonUI.CommonButtonBase.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x2621780
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction); // Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x2621660
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus); // Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x26215d0
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast); // Function CommonUI.CommonButtonBase.SetSelectedInternal // (Final|Native|Protected|BlueprintCallable) // @ game+0x26214a0
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function CommonUI.CommonButtonBase.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x2621390
	void SetPressedSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetPressedSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x2621410
	void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight); // Function CommonUI.CommonButtonBase.SetMinDimensions // (Final|Native|Public|BlueprintCallable) // @ game+0x26212c0
	void SetIsToggleable(bool bInIsToggleable); // Function CommonUI.CommonButtonBase.SetIsToggleable // (Final|Native|Public|BlueprintCallable) // @ game+0x2621230
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback); // Function CommonUI.CommonButtonBase.SetIsSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x2621160
	void SetIsSelectable(bool bInIsSelectable); // Function CommonUI.CommonButtonBase.SetIsSelectable // (Final|Native|Public|BlueprintCallable) // @ game+0x26210d0
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled); // Function CommonUI.CommonButtonBase.SetIsInteractionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x2621040
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected); // Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x2620fb0
	void SetIsFocusable(bool bInIsFocusable); // Function CommonUI.CommonButtonBase.SetIsFocusable // (Final|Native|Public|BlueprintCallable) // @ game+0x2620f20
	void SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, struct FName& InProgressMaterialParam); // Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2620c90
	void SetHoveredSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetHoveredSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x2620a30
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function CommonUI.CommonButtonBase.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x2620890
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x40572e0
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType); // Function CommonUI.CommonButtonBase.OnInputMethodChanged // (Native|Protected) // @ game+0x2620770
	void OnCurrentTextStyleChanged(); // Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void OnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void OnActionComplete(); // Function CommonUI.CommonButtonBase.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void NativeOnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.NativeOnActionProgress // (Native|Protected) // @ game+0x26206e0
	void NativeOnActionComplete(); // Function CommonUI.CommonButtonBase.NativeOnActionComplete // (Native|Protected) // @ game+0x26206b0
	bool IsPressed(); // Function CommonUI.CommonButtonBase.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2620650
	bool IsInteractionEnabled(); // Function CommonUI.CommonButtonBase.IsInteractionEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2620620
	void HandleTriggeringActionCommited(bool& bPassThrough); // Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited // (Native|Protected|HasOutParms) // @ game+0x26204d0
	void HandleFocusReceived(); // Function CommonUI.CommonButtonBase.HandleFocusReceived // (Native|Protected) // @ game+0x26204a0
	void HandleButtonReleased(); // Function CommonUI.CommonButtonBase.HandleButtonReleased // (Final|Native|Protected) // @ game+0x2620480
	void HandleButtonPressed(); // Function CommonUI.CommonButtonBase.HandleButtonPressed // (Final|Native|Protected) // @ game+0x2620460
	void HandleButtonClicked(); // Function CommonUI.CommonButtonBase.HandleButtonClicked // (Final|Native|Protected) // @ game+0x2620440
	struct UCommonButtonStyle* GetStyle(); // Function CommonUI.CommonButtonBase.GetStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26203e0
	struct UMaterialInstanceDynamic* GetSingleMaterialStyleMID(); // Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26203b0
	bool GetShouldSelectUponReceivingFocus(); // Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2620380
	bool GetSelected(); // Function CommonUI.CommonButtonBase.GetSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x261ff60
	bool GetIsFocusable(); // Function CommonUI.CommonButtonBase.GetIsFocusable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x261fa10
	bool GetInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.GetInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x261f960
	struct UCommonTextStyle* GetCurrentTextStyleClass(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x261f5a0
	struct UCommonTextStyle* GetCurrentTextStyle(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x261f570
	void GetCurrentCustomPadding(struct FMargin& OutCustomPadding); // Function CommonUI.CommonButtonBase.GetCurrentCustomPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x261f4d0
	void GetCurrentButtonPadding(struct FMargin& OutButtonPadding); // Function CommonUI.CommonButtonBase.GetCurrentButtonPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x261f430
	void DisableButtonWithReason(struct FText& DisabledReason); // Function CommonUI.CommonButtonBase.DisableButtonWithReason // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x261f150
	void ClearSelection(); // Function CommonUI.CommonButtonBase.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x261f0f0
	void BP_OnUnhovered(); // Function CommonUI.CommonButtonBase.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void BP_OnSelected(); // Function CommonUI.CommonButtonBase.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void BP_OnReleased(); // Function CommonUI.CommonButtonBase.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void BP_OnPressed(); // Function CommonUI.CommonButtonBase.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void BP_OnHovered(); // Function CommonUI.CommonButtonBase.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void BP_OnEnabled(); // Function CommonUI.CommonButtonBase.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void BP_OnDoubleClicked(); // Function CommonUI.CommonButtonBase.BP_OnDoubleClicked // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void BP_OnDisabled(); // Function CommonUI.CommonButtonBase.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void BP_OnDeselected(); // Function CommonUI.CommonButtonBase.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void BP_OnClicked(); // Function CommonUI.CommonButtonBase.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
};

// Class CommonUI.CommonBoundActionButton
// Size: 0xcf8 (Inherited: 0xce8)
struct UCommonBoundActionButton : UCommonButtonBase {
	struct UCommonTextBlock* Text_ActionName; // 0xce8(0x08)
	char pad_CF0[0x8]; // 0xcf0(0x08)

	void OnUpdateInputAction(); // Function CommonUI.CommonBoundActionButton.OnUpdateInputAction // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
};

// Class CommonUI.CommonButtonStyle
// Size: 0x5e8 (Inherited: 0x30)
struct UCommonButtonStyle : UObject {
	bool bSingleMaterial; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FSlateBrush SingleMaterialBrush; // 0x38(0x90)
	struct FSlateBrush NormalBase; // 0xc8(0x90)
	struct FSlateBrush NormalHovered; // 0x158(0x90)
	struct FSlateBrush NormalPressed; // 0x1e8(0x90)
	struct FSlateBrush SelectedBase; // 0x278(0x90)
	struct FSlateBrush SelectedHovered; // 0x308(0x90)
	struct FSlateBrush SelectedPressed; // 0x398(0x90)
	struct FSlateBrush Disabled; // 0x428(0x90)
	struct FMargin ButtonPadding; // 0x4b8(0x10)
	struct FMargin CustomPadding; // 0x4c8(0x10)
	int32_t MinWidth; // 0x4d8(0x04)
	int32_t MinHeight; // 0x4dc(0x04)
	struct UCommonTextStyle* NormalTextStyle; // 0x4e0(0x08)
	struct UCommonTextStyle* NormalHoveredTextStyle; // 0x4e8(0x08)
	struct UCommonTextStyle* SelectedTextStyle; // 0x4f0(0x08)
	struct UCommonTextStyle* SelectedHoveredTextStyle; // 0x4f8(0x08)
	struct UCommonTextStyle* DisabledTextStyle; // 0x500(0x08)
	struct FSlateSound PressedSlateSound; // 0x508(0x20)
	struct FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound; // 0x528(0x28)
	struct FCommonButtonStyleOptionalSlateSound DisabledPressedSlateSound; // 0x550(0x28)
	struct FSlateSound HoveredSlateSound; // 0x578(0x20)
	struct FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound; // 0x598(0x28)
	struct FCommonButtonStyleOptionalSlateSound DisabledHoveredSlateSound; // 0x5c0(0x28)

	struct UCommonTextStyle* GetSelectedTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2620350
	void GetSelectedPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2620220
	struct UCommonTextStyle* GetSelectedHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26201f0
	void GetSelectedHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x26200c0
	void GetSelectedBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x261ff90
	struct UCommonTextStyle* GetNormalTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x261ff30
	void GetNormalPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalPressedBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x261fe00
	struct UCommonTextStyle* GetNormalHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x261fdd0
	void GetNormalHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x261fca0
	void GetNormalBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalBaseBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x261fb70
	void GetMaterialBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetMaterialBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x261fa40
	struct UCommonTextStyle* GetDisabledTextStyle(); // Function CommonUI.CommonButtonStyle.GetDisabledTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x261f7b0
	void GetDisabledBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetDisabledBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x261f680
	void GetCustomPadding(struct FMargin& OutCustomPadding); // Function CommonUI.CommonButtonStyle.GetCustomPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x261f5e0
	void GetButtonPadding(struct FMargin& OutButtonPadding); // Function CommonUI.CommonButtonStyle.GetButtonPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x261f390
};

// Class CommonUI.CommonButtonInternalBase
// Size: 0x4f8 (Inherited: 0x498)
struct UCommonButtonInternalBase : UButton {
	char pad_498[0x10]; // 0x498(0x10)
	struct FMulticastInlineDelegate OnDoubleClicked; // 0x4a8(0x10)
	char pad_4B8[0x10]; // 0x4b8(0x10)
	int32_t MinWidth; // 0x4c8(0x04)
	int32_t MinHeight; // 0x4cc(0x04)
	bool bButtonEnabled; // 0x4d0(0x01)
	bool bInteractionEnabled; // 0x4d1(0x01)
	char pad_4D2[0x26]; // 0x4d2(0x26)
};

// Class CommonUI.CommonWidgetGroupBase
// Size: 0x30 (Inherited: 0x30)
struct UCommonWidgetGroupBase : UObject {

	void RemoveWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.RemoveWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x2633620
	void RemoveAll(); // Function CommonUI.CommonWidgetGroupBase.RemoveAll // (Final|Native|Public|BlueprintCallable) // @ game+0x2633600
	void AddWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.AddWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x2633050
};

// Class CommonUI.CommonButtonGroupBase
// Size: 0x118 (Inherited: 0x30)
struct UCommonButtonGroupBase : UCommonWidgetGroupBase {
	struct FMulticastInlineDelegate OnSelectedButtonBaseChanged; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)
	struct FMulticastInlineDelegate OnHoveredButtonBaseChanged; // 0x58(0x10)
	char pad_68[0x18]; // 0x68(0x18)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0xa8(0x10)
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FMulticastInlineDelegate OnSelectionCleared; // 0xd0(0x10)
	char pad_E0[0x18]; // 0xe0(0x18)
	bool bSelectionRequired; // 0xf8(0x01)
	char pad_F9[0x1f]; // 0xf9(0x1f)

	void SetSelectionRequired(bool bRequireSelection); // Function CommonUI.CommonButtonGroupBase.SetSelectionRequired // (Final|Native|Public|BlueprintCallable) // @ game+0x2628e30
	void SelectPreviousButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectPreviousButton // (Final|Native|Public|BlueprintCallable) // @ game+0x2628240
	void SelectNextButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectNextButton // (Final|Native|Public|BlueprintCallable) // @ game+0x26281b0
	void SelectButtonAtIndex(int32_t ButtonIndex); // Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x2628120
	void OnSelectionStateChangedBase(struct UCommonButtonBase* BaseButton, bool bIsSelected); // Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase // (Native|Protected) // @ game+0x2627eb0
	void OnHandleButtonBaseDoubleClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked // (Native|Protected) // @ game+0x2627df0
	void OnHandleButtonBaseClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked // (Native|Protected) // @ game+0x2627d60
	void OnButtonBaseUnhovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered // (Native|Protected) // @ game+0x2627cd0
	void OnButtonBaseHovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered // (Native|Protected) // @ game+0x2627c40
	bool HasAnyButtons(); // Function CommonUI.CommonButtonGroupBase.HasAnyButtons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26279c0
	int32_t GetSelectedButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2627890
	struct UCommonButtonBase* GetSelectedButtonBase(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2627860
	int32_t GetHoveredButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2627830
	int32_t GetButtonCount(); // Function CommonUI.CommonButtonGroupBase.GetButtonCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26277a0
	struct UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index); // Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2627700
	int32_t FindButtonIndex(struct UCommonButtonBase* ButtonToFind); // Function CommonUI.CommonButtonGroupBase.FindButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2627660
	void DeselectAll(); // Function CommonUI.CommonButtonGroupBase.DeselectAll // (Final|Native|Public|BlueprintCallable) // @ game+0x2627640
};

// Class CommonUI.CommonCustomNavigation
// Size: 0x2e8 (Inherited: 0x2d0)
struct UCommonCustomNavigation : UBorder {
	struct FDelegate OnNavigationEvent; // 0x2d0(0x14)
	char pad_2E4[0x4]; // 0x2e4(0x04)
};

// Class CommonUI.CommonTextBlock
// Size: 0x338 (Inherited: 0x310)
struct UCommonTextBlock : UTextBlock {
	struct UCommonTextStyle* Style; // 0x310(0x08)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x318(0x08)
	bool bDisplayAllCaps; // 0x320(0x01)
	bool bAutoCollapseWithEmptyText; // 0x321(0x01)
	char pad_322[0x2]; // 0x322(0x02)
	float MobileFontSizeMultiplier; // 0x324(0x04)
	char pad_328[0x10]; // 0x328(0x10)

	void SetWrapTextWidth(int32_t InWrapTextAt); // Function CommonUI.CommonTextBlock.SetWrapTextWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x262f960
	void SetTextCase(bool bUseAllCaps); // Function CommonUI.CommonTextBlock.SetTextCase // (Final|Native|Public|BlueprintCallable) // @ game+0x262f8d0
	void SetStyle(struct UCommonTextStyle* InStyle); // Function CommonUI.CommonTextBlock.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x262f570
	void ResetScrollState(); // Function CommonUI.CommonTextBlock.ResetScrollState // (Final|Native|Public|BlueprintCallable) // @ game+0x262f320
};

// Class CommonUI.CommonDateTimeTextBlock
// Size: 0x378 (Inherited: 0x338)
struct UCommonDateTimeTextBlock : UCommonTextBlock {
	char pad_338[0x40]; // 0x338(0x40)

	void SetTimespanValue(struct FTimespan InTimespan); // Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2628ec0
	void SetDateTimeValue(struct FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay); // Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2628740
	void SetCountDownCompletionText(struct FText InCompletionText); // Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText // (Final|Native|Public|BlueprintCallable) // @ game+0x26285d0
	struct FDateTime GetDateTime(); // Function CommonUI.CommonDateTimeTextBlock.GetDateTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x26277f0
};

// Class CommonUI.CommonGameViewportClient
// Size: 0x3c0 (Inherited: 0x380)
struct UCommonGameViewportClient : UGameViewportClient {
	char pad_380[0x40]; // 0x380(0x40)
};

// Class CommonUI.CommonHierarchicalScrollBox
// Size: 0x928 (Inherited: 0x928)
struct UCommonHierarchicalScrollBox : UScrollBox {
};

// Class CommonUI.CommonLazyImage
// Size: 0x340 (Inherited: 0x268)
struct UCommonLazyImage : UImage {
	struct FSlateBrush LoadingBackgroundBrush; // 0x268(0x90)
	struct FName MaterialTextureParamName; // 0x2f8(0x0c)
	char pad_304[0x4]; // 0x304(0x04)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x308(0x10)
	char pad_318[0x28]; // 0x318(0x28)

	void SetMaterialTextureParamName(struct FName TextureParamName); // Function CommonUI.CommonLazyImage.SetMaterialTextureParamName // (Final|Native|Public|BlueprintCallable) // @ game+0x2628bf0
	void SetBrushFromLazyTexture(struct TSoftObjectPtr<UTexture2D>& LazyTexture, bool bMatchSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26284b0
	void SetBrushFromLazyMaterial(struct TSoftObjectPtr<UMaterialInterface>& LazyMaterial); // Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26283f0
	void SetBrushFromLazyDisplayAsset(struct TSoftObjectPtr<UObject>& LazyObject, bool bMatchTextureSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26282d0
	bool IsLoading(); // Function CommonUI.CommonLazyImage.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2627b80
};

// Class CommonUI.CommonLazyWidget
// Size: 0x260 (Inherited: 0x148)
struct UCommonLazyWidget : UWidget {
	struct FSlateBrush LoadingBackgroundBrush; // 0x148(0x90)
	struct UUserWidget* Content; // 0x1d8(0x08)
	char pad_1E0[0x30]; // 0x1e0(0x30)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x210(0x10)
	char pad_220[0x40]; // 0x220(0x40)

	void SetLazyContent(struct TSoftClassPtr<UObject> SoftWidget); // Function CommonUI.CommonLazyWidget.SetLazyContent // (Final|Native|Public|BlueprintCallable) // @ game+0x26289e0
	bool IsLoading(); // Function CommonUI.CommonLazyWidget.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2627bb0
	struct UUserWidget* GetContent(); // Function CommonUI.CommonLazyWidget.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26277d0
};

// Class CommonUI.CommonListView
// Size: 0x3a8 (Inherited: 0x3a8)
struct UCommonListView : UListView {

	void SetEntrySpacing(float InEntrySpacing); // Function CommonUI.CommonListView.SetEntrySpacing // (Final|Native|Public|BlueprintCallable) // @ game+0x2628850
};

// Class CommonUI.LoadGuardSlot
// Size: 0x68 (Inherited: 0x40)
struct ULoadGuardSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function CommonUI.LoadGuardSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x2628f40
	void SetPadding(struct FMargin InPadding); // Function CommonUI.LoadGuardSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x2628d10
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function CommonUI.LoadGuardSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x26288d0
};

// Class CommonUI.CommonLoadGuard
// Size: 0x280 (Inherited: 0x160)
struct UCommonLoadGuard : UContentWidget {
	struct FSlateBrush LoadingBackgroundBrush; // 0x160(0x90)
	enum class EHorizontalAlignment ThrobberAlignment; // 0x1f0(0x01)
	char pad_1F1[0x3]; // 0x1f1(0x03)
	struct FMargin ThrobberPadding; // 0x1f4(0x10)
	char pad_204[0x4]; // 0x204(0x04)
	struct FText LoadingText; // 0x208(0x18)
	struct UCommonTextStyle* TextStyle; // 0x220(0x08)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x228(0x10)
	struct FSoftObjectPath SpinnerMaterialPath; // 0x238(0x20)
	char pad_258[0x28]; // 0x258(0x28)

	void SetLoadingText(struct FText& InLoadingText); // Function CommonUI.CommonLoadGuard.SetLoadingText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2628b10
	void SetIsLoading(bool bInIsLoading); // Function CommonUI.CommonLoadGuard.SetIsLoading // (Final|Native|Public|BlueprintCallable) // @ game+0x2628950
	void OnAssetLoaded__DelegateSignature(struct UObject* Object); // DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature // (Public|Delegate) // @ game+0x40572e0
	bool IsLoading(); // Function CommonUI.CommonLoadGuard.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2627be0
	void BP_GuardAndLoadAsset(struct TSoftObjectPtr<UObject>& InLazyAsset, struct FDelegate& OnAssetLoaded); // Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x2627500
};

// Class CommonUI.CommonNumericTextBlock
// Size: 0x3d8 (Inherited: 0x338)
struct UCommonNumericTextBlock : UCommonTextBlock {
	struct FMulticastInlineDelegate OnInterpolationStartedEvent; // 0x338(0x10)
	struct FMulticastInlineDelegate OnInterpolationUpdatedEvent; // 0x348(0x10)
	struct FMulticastInlineDelegate OnOutroEvent; // 0x358(0x10)
	struct FMulticastInlineDelegate OnInterpolationEndedEvent; // 0x368(0x10)
	float CurrentNumericValue; // 0x378(0x04)
	enum class ECommonNumericType NumericType; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
	struct FCommonNumberFormattingOptions FormattingSpecification; // 0x380(0x14)
	float EaseOutInterpolationExponent; // 0x394(0x04)
	float InterpolationUpdateInterval; // 0x398(0x04)
	float PostInterpolationShrinkDuration; // 0x39c(0x04)
	bool PerformSizeInterpolation; // 0x3a0(0x01)
	bool IsPercentage; // 0x3a1(0x01)
	char pad_3A2[0x36]; // 0x3a2(0x36)

	void SetNumericType(enum class ECommonNumericType InNumericType); // Function CommonUI.CommonNumericTextBlock.SetNumericType // (Final|Native|Public|BlueprintCallable) // @ game+0x2628c90
	void SetCurrentValue(float NewValue); // Function CommonUI.CommonNumericTextBlock.SetCurrentValue // (Final|Native|Public|BlueprintCallable) // @ game+0x26286c0
	void OnOutro__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	void OnInterpolationUpdated__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	void OnInterpolationStarted__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	void OnInterpolationEnded__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	bool IsInterpolatingNumericValue(); // Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2627b50
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // Function CommonUI.CommonNumericTextBlock.InterpolateToValue // (Final|Native|Public|BlueprintCallable) // @ game+0x26279f0
	float GetTargetValue(); // Function CommonUI.CommonNumericTextBlock.GetTargetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2627990
};

// Class CommonUI.CommonPoolableWidgetInterface
// Size: 0x30 (Inherited: 0x30)
struct UCommonPoolableWidgetInterface : UInterface {

	void OnReleaseToPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool // (Native|Event|Protected|BlueprintEvent) // @ game+0x2627e80
	void OnAcquireFromPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool // (Native|Event|Protected|BlueprintEvent) // @ game+0x2627c10
};

// Class CommonUI.CommonRichTextBlock
// Size: 0x730 (Inherited: 0x6f8)
struct UCommonRichTextBlock : URichTextBlock {
	enum class ERichTextInlineIconDisplayMode InlineIconDisplayMode; // 0x6f8(0x01)
	bool bTintInlineIcon; // 0x6f9(0x01)
	char pad_6FA[0x6]; // 0x6fa(0x06)
	struct UCommonTextStyle* DefaultTextStyleOverrideClass; // 0x700(0x08)
	float MobileTextBlockScale; // 0x708(0x04)
	char pad_70C[0x4]; // 0x70c(0x04)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x710(0x08)
	bool bDisplayAllCaps; // 0x718(0x01)
	char pad_719[0x17]; // 0x719(0x17)
};

// Class CommonUI.CommonRotator
// Size: 0xd40 (Inherited: 0xce8)
struct UCommonRotator : UCommonButtonBase {
	char pad_CE8[0x10]; // 0xce8(0x10)
	struct FMulticastInlineDelegate OnRotated; // 0xcf8(0x10)
	char pad_D08[0x18]; // 0xd08(0x18)
	struct UCommonTextBlock* MyText; // 0xd20(0x08)
	char pad_D28[0x18]; // 0xd28(0x18)

	void ShiftTextRight(); // Function CommonUI.CommonRotator.ShiftTextRight // (Final|Native|Public|BlueprintCallable) // @ game+0x2628fe0
	void ShiftTextLeft(); // Function CommonUI.CommonRotator.ShiftTextLeft // (Final|Native|Public|BlueprintCallable) // @ game+0x2628fc0
	void SetSelectedItem(int32_t InValue); // Function CommonUI.CommonRotator.SetSelectedItem // (Native|Public|BlueprintCallable) // @ game+0x2628da0
	void PopulateTextLabels(struct TArray<struct FText> Labels); // Function CommonUI.CommonRotator.PopulateTextLabels // (Final|Native|Public|BlueprintCallable) // @ game+0x2627f90
	struct FText GetSelectedText(); // Function CommonUI.CommonRotator.GetSelectedText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26278e0
	int32_t GetSelectedIndex(); // Function CommonUI.CommonRotator.GetSelectedIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26278c0
	void BP_OnOptionsPopulated(int32_t Count); // Function CommonUI.CommonRotator.BP_OnOptionsPopulated // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void BP_OnOptionSelected(int32_t Index); // Function CommonUI.CommonRotator.BP_OnOptionSelected // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
};

// Class CommonUI.CommonTabListWidgetBase
// Size: 0x3d8 (Inherited: 0x2f0)
struct UCommonTabListWidgetBase : UCommonUserWidget {
	struct FMulticastInlineDelegate OnTabSelected; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnTabButtonCreation; // 0x300(0x10)
	struct FMulticastInlineDelegate OnTabButtonRemoval; // 0x310(0x10)
	struct FDataTableRowHandle NextTabInputActionData; // 0x320(0x18)
	struct FDataTableRowHandle PreviousTabInputActionData; // 0x338(0x18)
	bool bAutoListenForInput; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	struct TWeakObjectPtr<struct UCommonAnimatedSwitcher> LinkedSwitcher; // 0x354(0x08)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct UCommonButtonGroupBase* TabButtonGroup; // 0x360(0x08)
	char pad_368[0x8]; // 0x368(0x08)
	struct TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID; // 0x370(0x50)
	char pad_3C0[0x18]; // 0x3c0(0x18)

	void SetTabVisibility(struct FName TabNameID, enum class ESlateVisibility NewVisibility); // Function CommonUI.CommonTabListWidgetBase.SetTabVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x262f7e0
	void SetTabInteractionEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x262f6f0
	void SetTabEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x262f600
	void SetListeningForInput(bool bShouldListen); // Function CommonUI.CommonTabListWidgetBase.SetListeningForInput // (Native|Public|BlueprintCallable) // @ game+0x262f4d0
	void SetLinkedSwitcher(struct UCommonAnimatedSwitcher* CommonSwitcher); // Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher // (Native|Public|BlueprintCallable) // @ game+0x262f440
	bool SelectTabByID(struct FName TabNameID, bool bSuppressClickFeedback); // Function CommonUI.CommonTabListWidgetBase.SelectTabByID // (Final|Native|Public|BlueprintCallable) // @ game+0x262f340
	bool RemoveTab(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.RemoveTab // (Final|Native|Public|BlueprintCallable) // @ game+0x262f270
	void RemoveAllTabs(); // Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs // (Final|Native|Public|BlueprintCallable) // @ game+0x262f250
	bool RegisterTab(struct FName TabNameID, struct UCommonButtonBase* ButtonWidgetType, struct UWidget* ContentWidget); // Function CommonUI.CommonTabListWidgetBase.RegisterTab // (Final|Native|Public|BlueprintCallable) // @ game+0x262f120
	void OnTabSelected__DelegateSignature(struct FName TabId); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	void OnTabButtonRemoval__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	void OnTabButtonCreation__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x40572e0
	void HandleTabRemoval(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval // (Native|Event|Protected|BlueprintEvent) // @ game+0x262f030
	void HandleTabCreation(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabCreation // (Native|Event|Protected|BlueprintEvent) // @ game+0x262ef40
	void HandleTabButtonSelected(struct UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex); // Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected // (Final|Native|Protected) // @ game+0x262ee70
	void HandlePreviousTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction // (Final|Native|Protected|HasOutParms) // @ game+0x262ede0
	void HandlePreLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void HandlePostLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	void HandleNextTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction // (Final|Native|Protected|HasOutParms) // @ game+0x262ed50
	struct FName GetTabIdAtIndex(int32_t Index); // Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x262eca0
	int32_t GetTabCount(); // Function CommonUI.CommonTabListWidgetBase.GetTabCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x262ec70
	struct UCommonButtonBase* GetTabButtonBaseByID(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID // (Final|Native|Protected|BlueprintCallable) // @ game+0x262ebc0
	struct FName GetSelectedTabId(); // Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x262e930
	struct UCommonAnimatedSwitcher* GetLinkedSwitcher(); // Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x262e860
	struct FName GetActiveTab(); // Function CommonUI.CommonTabListWidgetBase.GetActiveTab // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x262e490
	void DisableTabWithReason(struct FName TabNameID, struct FText& Reason); // Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x262e280
};

// Class CommonUI.CommonTextStyle
// Size: 0x168 (Inherited: 0x30)
struct UCommonTextStyle : UObject {
	struct FSlateFontInfo Font; // 0x30(0x60)
	struct FLinearColor Color; // 0x90(0x10)
	bool bUsesDropShadow; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FVector2D ShadowOffset; // 0xa4(0x08)
	struct FLinearColor ShadowColor; // 0xac(0x10)
	struct FMargin Margin; // 0xbc(0x10)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FSlateBrush StrikeBrush; // 0xd0(0x90)
	float LineHeightPercentage; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)

	void GetStrikeBrush(struct FSlateBrush& OutStrikeBrush); // Function CommonUI.CommonTextStyle.GetStrikeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x262ea90
	void GetShadowOffset(struct FVector2D& OutShadowOffset); // Function CommonUI.CommonTextStyle.GetShadowOffset // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x262ea00
	void GetShadowColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetShadowColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x262e970
	void GetMargin(struct FMargin& OutMargin); // Function CommonUI.CommonTextStyle.GetMargin // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x262e890
	float GetLineHeightPercentage(); // Function CommonUI.CommonTextStyle.GetLineHeightPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x262e830
	void GetFont(struct FSlateFontInfo& OutFont); // Function CommonUI.CommonTextStyle.GetFont // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x262e550
	void GetColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x262e4c0
};

// Class CommonUI.CommonTextScrollStyle
// Size: 0x48 (Inherited: 0x30)
struct UCommonTextScrollStyle : UObject {
	float Speed; // 0x30(0x04)
	float StartDelay; // 0x34(0x04)
	float EndDelay; // 0x38(0x04)
	float FadeInDelay; // 0x3c(0x04)
	float FadeOutDelay; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class CommonUI.CommonTileView
// Size: 0x3c8 (Inherited: 0x3c8)
struct UCommonTileView : UTileView {
};

// Class CommonUI.CommonTreeView
// Size: 0x408 (Inherited: 0x408)
struct UCommonTreeView : UTreeView {
};

// Class CommonUI.CommonUIActionRouterBase
// Size: 0x108 (Inherited: 0x38)
struct UCommonUIActionRouterBase : ULocalPlayerSubsystem {
	char pad_38[0xd0]; // 0x38(0xd0)
};

// Class CommonUI.CommonUIEditorSettings
// Size: 0xc8 (Inherited: 0x30)
struct UCommonUIEditorSettings : UObject {
	struct TSoftClassPtr<UObject> TemplateTextStyle; // 0x30(0x30)
	struct TSoftClassPtr<UObject> TemplateButtonStyle; // 0x60(0x30)
	struct TSoftClassPtr<UObject> TemplateBorderStyle; // 0x90(0x30)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class CommonUI.CommonUIInputSettings
// Size: 0x80 (Inherited: 0x30)
struct UCommonUIInputSettings : UObject {
	bool bLinkCursorToGamepadFocus; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t UIActionProcessingPriority; // 0x34(0x04)
	struct TArray<struct FUIInputAction> InputActions; // 0x38(0x10)
	struct TArray<struct FUIInputAction> ActionOverrides; // 0x48(0x10)
	struct FCommonAnalogCursorSettings AnalogCursorSettings; // 0x58(0x24)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class CommonUI.CommonUILibrary
// Size: 0x30 (Inherited: 0x30)
struct UCommonUILibrary : UBlueprintFunctionLibrary {

	struct UWidget* FindParentWidgetOfType(struct UWidget* StartingWidget, struct UWidget* Type); // Function CommonUI.CommonUILibrary.FindParentWidgetOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x262e3c0
};

// Class CommonUI.CommonUIRichTextData
// Size: 0x38 (Inherited: 0x30)
struct UCommonUIRichTextData : UObject {
	struct UDataTable* InlineIconSet; // 0x30(0x08)
};

// Class CommonUI.CommonUISettings
// Size: 0x178 (Inherited: 0x30)
struct UCommonUISettings : UObject {
	bool bAutoLoadData; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TSoftObjectPtr<UObject> DefaultImageResourceObject; // 0x38(0x30)
	struct TSoftObjectPtr<UMaterialInterface> DefaultThrobberMaterial; // 0x68(0x30)
	struct TSoftClassPtr<UObject> DefaultRichTextDataClass; // 0x98(0x30)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct UObject* DefaultImageResourceObjectInstance; // 0xd0(0x08)
	struct UMaterialInterface* DefaultThrobberMaterialInstance; // 0xd8(0x08)
	struct FSlateBrush DefaultThrobberBrush; // 0xe0(0x90)
	struct UCommonUIRichTextData* RichTextDataInstance; // 0x170(0x08)
};

// Class CommonUI.CommonUISubsystemBase
// Size: 0x48 (Inherited: 0x38)
struct UCommonUISubsystemBase : UGameInstanceSubsystem {
	char pad_38[0x10]; // 0x38(0x10)

	struct FSlateBrush GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType, struct FName& GamepadName); // Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x262e640
};

// Class CommonUI.CommonVideoPlayer
// Size: 0x260 (Inherited: 0x148)
struct UCommonVideoPlayer : UWidget {
	struct UMediaSource* Video; // 0x148(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x150(0x08)
	struct UMediaTexture* MediaTexture; // 0x158(0x08)
	struct UMaterial* VideoMaterial; // 0x160(0x08)
	struct UMediaSoundComponent* SoundComponent; // 0x168(0x08)
	struct FSlateBrush VideoBrush; // 0x170(0x90)
	char pad_200[0x60]; // 0x200(0x60)
};

// Class CommonUI.CommonVisibilitySwitcher
// Size: 0x198 (Inherited: 0x170)
struct UCommonVisibilitySwitcher : UOverlay {
	enum class ESlateVisibility ShownVisibility; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	int32_t ActiveWidgetIndex; // 0x174(0x04)
	bool bAutoActivateSlot; // 0x178(0x01)
	bool bActivateFirstSlotOnAdding; // 0x179(0x01)
	char pad_17A[0x1e]; // 0x17a(0x1e)

	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x26337d0
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x26336b0
	void IncrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x2633530
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2633260
	struct UWidget* GetActiveWidget(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2633230
	void DecrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x2633180
	void DeactivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x2633160
	void ActivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x2633030
};

// Class CommonUI.CommonVisibilitySwitcherSlot
// Size: 0x70 (Inherited: 0x60)
struct UCommonVisibilitySwitcherSlot : UOverlaySlot {
	char pad_60[0x10]; // 0x60(0x10)
};

// Class CommonUI.CommonVisibilityWidgetBase
// Size: 0x348 (Inherited: 0x2f0)
struct UCommonVisibilityWidgetBase : UCommonBorder {
	struct TMap<struct FName, bool> VisibilityControls; // 0x2f0(0x50)
	bool bShowForGamepad; // 0x340(0x01)
	bool bShowForMouseAndKeyboard; // 0x341(0x01)
	bool bShowForTouch; // 0x342(0x01)
	enum class ESlateVisibility VisibleType; // 0x343(0x01)
	enum class ESlateVisibility HiddenType; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)

	struct TArray<struct FName> GetRegisteredPlatforms(); // Function CommonUI.CommonVisibilityWidgetBase.GetRegisteredPlatforms // (Final|Native|Static|Protected) // @ game+0x26332b0
};

// Class CommonUI.CommonVisualAttachment
// Size: 0x1b0 (Inherited: 0x198)
struct UCommonVisualAttachment : USizeBox {
	struct FVector2D ContentAnchor; // 0x198(0x08)
	char pad_1A0[0x10]; // 0x1a0(0x10)
};

// Class CommonUI.CommonWidgetCarousel
// Size: 0x1a0 (Inherited: 0x160)
struct UCommonWidgetCarousel : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FMulticastInlineDelegate OnCurrentPageIndexChanged; // 0x168(0x10)
	char pad_178[0x28]; // 0x178(0x28)

	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // @ game+0x2633860
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonWidgetCarousel.SetActiveWidget // (Native|Public|BlueprintCallable) // @ game+0x2633740
	void PreviousPage(); // Function CommonUI.CommonWidgetCarousel.PreviousPage // (Final|Native|Public|BlueprintCallable) // @ game+0x26335e0
	void NextPage(); // Function CommonUI.CommonWidgetCarousel.NextPage // (Final|Native|Public|BlueprintCallable) // @ game+0x26335c0
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26332f0
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2633280
	void EndAutoScrolling(); // Function CommonUI.CommonWidgetCarousel.EndAutoScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x2633210
	void BeginAutoScrolling(float ScrollInterval); // Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x26330e0
};

// Class CommonUI.CommonWidgetCarouselNavBar
// Size: 0x190 (Inherited: 0x148)
struct UCommonWidgetCarouselNavBar : UWidget {
	struct UCommonButtonBase* ButtonWidgetType; // 0x148(0x08)
	struct FMargin ButtonPadding; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)
	struct UCommonWidgetCarousel* LinkedCarousel; // 0x170(0x08)
	struct UCommonButtonGroupBase* ButtonGroup; // 0x178(0x08)
	struct TArray<struct UCommonButtonBase*> Buttons; // 0x180(0x10)

	void SetLinkedCarousel(struct UCommonWidgetCarousel* CommonCarousel); // Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel // (Final|Native|Public|BlueprintCallable) // @ game+0x2633980
	void HandlePageChanged(struct UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged // (Final|Native|Protected) // @ game+0x2633460
	void HandleButtonClicked(struct UCommonButtonBase* AssociatedButton, int32_t ButtonIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked // (Final|Native|Protected) // @ game+0x2633390
};

