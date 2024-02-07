// Enum GameplayMessageRuntime.EGameplayMessageMatch
enum class EGameplayMessageMatch : uint8 {
	ExactMatch = 0,
	PartialMatch = 1,
	EGameplayMessageMatch_MAX = 2
};

// ScriptStruct GameplayMessageRuntime.GameplayMessageListenerData
// Size: 0x60 (Inherited: 0x00)
struct FGameplayMessageListenerData {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct GameplayMessageRuntime.GameplayMessageListenerHandle
// Size: 0x20 (Inherited: 0x00)
struct FGameplayMessageListenerHandle {
	struct TWeakObjectPtr<struct UGameplayMessageSubsystem> Subsystem; // 0x00(0x08)
	struct FGameplayTag Channel; // 0x08(0x0c)
	int32_t ID; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)
};

