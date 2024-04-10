// Enum CommonUI.ECommonNumericType
enum class ECommonNumericType : uint8 {
	Number = 0,
	Percentage = 1,
	Seconds = 2,
	Distance = 3,
	ECommonNumericType_MAX = 4
};

// Enum CommonUI.ECommonInputMode
enum class ECommonInputMode : uint8 {
	Menu = 0,
	Game = 1,
	All = 2,
	MAX = 3
};

// Enum CommonUI.ERichTextInlineIconDisplayMode
enum class ERichTextInlineIconDisplayMode : uint8 {
	IconOnly = 0,
	TextOnly = 1,
	IconAndText = 2,
	MAX = 3
};

// Enum CommonUI.EInputActionState
enum class EInputActionState : uint8 {
	Enabled = 0,
	Disabled = 1,
	Hidden = 2,
	HiddenAndDisabled = 3,
	EInputActionState_MAX = 4
};

// Enum CommonUI.ETransitionCurve
enum class ETransitionCurve : uint8 {
	Linear = 0,
	QuadIn = 1,
	QuadOut = 2,
	QuadInOut = 3,
	CubicIn = 4,
	CubicOut = 5,
	CubicInOut = 6,
	ETransitionCurve_MAX = 7
};

// Enum CommonUI.ECommonSwitcherTransition
enum class ECommonSwitcherTransition : uint8 {
	FadeOnly = 0,
	Horizontal = 1,
	Vertical = 2,
	Zoom = 3,
	ECommonSwitcherTransition_MAX = 4
};

// ScriptStruct CommonUI.CommonNumberFormattingOptions
// Size: 0x14 (Inherited: 0x00)
struct FCommonNumberFormattingOptions {
	enum class ERoundingMode RoundingMode; // 0x00(0x01)
	bool UseGrouping; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t MinimumIntegralDigits; // 0x04(0x04)
	int32_t MaximumIntegralDigits; // 0x08(0x04)
	int32_t MinimumFractionalDigits; // 0x0c(0x04)
	int32_t MaximumFractionalDigits; // 0x10(0x04)
};

// ScriptStruct CommonUI.CommonRegisteredTabInfo
// Size: 0x18 (Inherited: 0x00)
struct FCommonRegisteredTabInfo {
	int32_t TabIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCommonButtonBase* TabButton; // 0x08(0x08)
	struct UWidget* ContentInstance; // 0x10(0x08)
};

// ScriptStruct CommonUI.CommonInputActionHandlerData
// Size: 0x28 (Inherited: 0x00)
struct FCommonInputActionHandlerData {
	struct FDataTableRowHandle InputActionRow; // 0x00(0x18)
	enum class EInputActionState State; // 0x18(0x01)
	char pad_19[0xf]; // 0x19(0x0f)
};

// ScriptStruct CommonUI.CommonButtonStyleOptionalSlateSound
// Size: 0x28 (Inherited: 0x00)
struct FCommonButtonStyleOptionalSlateSound {
	bool bHasSound; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSlateSound Sound; // 0x08(0x20)
};

// ScriptStruct CommonUI.CommonAnalogCursorSettings
// Size: 0x24 (Inherited: 0x00)
struct FCommonAnalogCursorSettings {
	int32_t PreprocessorPriority; // 0x00(0x04)
	bool bEnableCursorAcceleration; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float CursorAcceleration; // 0x08(0x04)
	float CursorMaxSpeed; // 0x0c(0x04)
	float CursorDeadZone; // 0x10(0x04)
	float HoverSlowdownFactor; // 0x14(0x04)
	float ScrollDeadZone; // 0x18(0x04)
	float ScrollUpdatePeriod; // 0x1c(0x04)
	float ScrollMultiplier; // 0x20(0x04)
};

// ScriptStruct CommonUI.UIInputAction
// Size: 0x38 (Inherited: 0x00)
struct FUIInputAction {
	struct FUIActionTag ActionTag; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DefaultDisplayName; // 0x10(0x18)
	struct TArray<struct FUIActionKeyMapping> KeyMappings; // 0x28(0x10)
};

// ScriptStruct CommonUI.UIActionKeyMapping
// Size: 0x28 (Inherited: 0x00)
struct FUIActionKeyMapping {
	struct FKey Key; // 0x00(0x20)
	float HoldTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CommonUI.UITag
// Size: 0x0c (Inherited: 0x0c)
struct FUITag : FGameplayTag {
};

// ScriptStruct CommonUI.UIActionTag
// Size: 0x0c (Inherited: 0x0c)
struct FUIActionTag : FUITag {
};

// ScriptStruct CommonUI.RichTextIconData
// Size: 0x58 (Inherited: 0x08)
struct FRichTextIconData : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	struct TSoftObjectPtr<UObject> ResourceObject; // 0x20(0x30)
	struct FVector2D ImageSize; // 0x50(0x08)
};

// ScriptStruct CommonUI.CommonInputActionDataBase
// Size: 0x2b0 (Inherited: 0x08)
struct FCommonInputActionDataBase : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	struct FText HoldDisplayName; // 0x20(0x18)
	struct FCommonInputTypeInfo KeyboardInputTypeInfo; // 0x38(0xb8)
	struct FCommonInputTypeInfo DefaultGamepadInputTypeInfo; // 0xf0(0xb8)
	struct TMap<struct FName, struct FCommonInputTypeInfo> GamepadInputOverrides; // 0x1a8(0x50)
	struct FCommonInputTypeInfo TouchInputTypeInfo; // 0x1f8(0xb8)
};

// ScriptStruct CommonUI.CommonInputTypeInfo
// Size: 0xb8 (Inherited: 0x00)
struct FCommonInputTypeInfo {
	struct FKey Key; // 0x00(0x20)
	enum class EInputActionState OverrrideState; // 0x20(0x01)
	bool bActionRequiresHold; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float HoldTime; // 0x24(0x04)
	struct FSlateBrush OverrideBrush; // 0x28(0x90)
};

