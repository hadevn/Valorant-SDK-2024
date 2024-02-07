// Enum CommonInput.ECommonInputType
enum class ECommonInputType : uint8 {
	MouseAndKeyboard = 0,
	Gamepad = 1,
	Touch = 2,
	Count = 3,
	ECommonInputType_MAX = 4
};

// ScriptStruct CommonInput.CommonInputPlatformBaseData
// Size: 0x40 (Inherited: 0x00)
struct FCommonInputPlatformBaseData {
	char pad_0[0x8]; // 0x00(0x08)
	bool bSupported; // 0x08(0x01)
	enum class ECommonInputType DefaultInputType; // 0x09(0x01)
	bool bSupportsMouseAndKeyboard; // 0x0a(0x01)
	bool bSupportsGamepad; // 0x0b(0x01)
	struct FName DefaultGamepadName; // 0x0c(0x0c)
	bool bCanChangeGamepadType; // 0x18(0x01)
	bool bSupportsTouch; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TArray<struct TSoftClassPtr<UObject>> ControllerData; // 0x20(0x10)
	struct TArray<struct UCommonInputBaseControllerData*> ControllerDataClasses; // 0x30(0x10)
};

// ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
// Size: 0xa0 (Inherited: 0x00)
struct FCommonInputKeySetBrushConfiguration {
	struct TArray<struct FKey> Keys; // 0x00(0x10)
	struct FSlateBrush KeyBrush; // 0x10(0x90)
};

// ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
// Size: 0xb0 (Inherited: 0x00)
struct FCommonInputKeyBrushConfiguration {
	struct FKey Key; // 0x00(0x20)
	struct FSlateBrush KeyBrush; // 0x20(0x90)
};

