// Class CommonInput.CommonUIInputData
// Size: 0x60 (Inherited: 0x30)
struct UCommonUIInputData : UObject {
	struct FDataTableRowHandle DefaultClickAction; // 0x30(0x18)
	struct FDataTableRowHandle DefaultBackAction; // 0x48(0x18)
};

// Class CommonInput.CommonInputBaseControllerData
// Size: 0xc0 (Inherited: 0x30)
struct UCommonInputBaseControllerData : UObject {
	enum class ECommonInputType InputType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName GamepadName; // 0x34(0x0c)
	struct TSoftObjectPtr<UTexture2D> ControllerTexture; // 0x40(0x30)
	struct TSoftObjectPtr<UTexture2D> ControllerButtonMaskTexture; // 0x70(0x30)
	struct TArray<struct FCommonInputKeyBrushConfiguration> InputBrushDataMap; // 0xa0(0x10)
	struct TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets; // 0xb0(0x10)

	struct TArray<struct FName> GetRegisteredGamepads(); // Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads // (Final|Native|Static|Public) // @ game+0x274cbd0
};

// Class CommonInput.CommonInputSettings
// Size: 0x118 (Inherited: 0x30)
struct UCommonInputSettings : UObject {
	struct TSoftClassPtr<UObject> InputData; // 0x30(0x30)
	struct TMap<struct FName, struct FCommonInputPlatformBaseData> CommonInputPlatformData; // 0x60(0x50)
	bool bEnableInputMethodThrashingProtection; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	int32_t InputMethodThrashingLimit; // 0xb4(0x04)
	double InputMethodThrashingWindowInSeconds; // 0xb8(0x08)
	double InputMethodThrashingCooldownInSeconds; // 0xc0(0x08)
	bool bAllowOutOfFocusDeviceInput; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct UCommonUIInputData* InputDataClass; // 0xd0(0x08)
	struct FCommonInputPlatformBaseData CurrentPlatform; // 0xd8(0x40)

	struct TArray<struct FName> GetRegisteredPlatforms(); // Function CommonInput.CommonInputSettings.GetRegisteredPlatforms // (Final|Native|Static|Private) // @ game+0x274cc10
};

// Class CommonInput.CommonInputSubsystem
// Size: 0x100 (Inherited: 0x38)
struct UCommonInputSubsystem : ULocalPlayerSubsystem {
	char pad_38[0x20]; // 0x38(0x20)
	struct FMulticastInlineDelegate OnInputMethodChanged; // 0x58(0x10)
	int32_t NumberOfInputMethodChangesRecently; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	double LastInputMethodChangeTime; // 0x70(0x08)
	double LastTimeInputMethodThrashingBegan; // 0x78(0x08)
	enum class ECommonInputType LastInputType; // 0x80(0x01)
	enum class ECommonInputType CurrentInputType; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	struct FName GamepadInputType; // 0x84(0x0c)
	struct TMap<struct FName, enum class ECommonInputType> CurrentInputLocks; // 0x90(0x50)
	char pad_E0[0x18]; // 0xe0(0x18)
	bool bIsGamepadSimulatedClick; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)

	bool ShouldShowInputKeys(); // Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x274ce30
	void SetGamepadInputType(struct FName& InGamepadInputType); // Function CommonInput.CommonInputSubsystem.SetGamepadInputType // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x274cd90
	void SetCurrentInputType(enum class ECommonInputType NewInputType); // Function CommonInput.CommonInputSubsystem.SetCurrentInputType // (Final|Native|Public|BlueprintCallable) // @ game+0x274cd10
	bool IsUsingPointerInput(); // Function CommonInput.CommonInputSubsystem.IsUsingPointerInput // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x274cce0
	bool IsInputMethodActive(enum class ECommonInputType InputMethod); // Function CommonInput.CommonInputSubsystem.IsInputMethodActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x274cc50
	enum class ECommonInputType GetDefaultInputType(); // Function CommonInput.CommonInputSubsystem.GetDefaultInputType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x274cba0
	enum class ECommonInputType GetCurrentInputType(); // Function CommonInput.CommonInputSubsystem.GetCurrentInputType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x274cb70
	struct FName GetCurrentGamepadName(); // Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x274cb30
};

