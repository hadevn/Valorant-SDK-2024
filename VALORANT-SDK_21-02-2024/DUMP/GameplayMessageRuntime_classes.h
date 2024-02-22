// Class GameplayMessageRuntime.AsyncAction_ListenForGameplayMessage
// Size: 0x90 (Inherited: 0x38)
struct UAsyncAction_ListenForGameplayMessage : UCancellableAsyncAction {
	struct FMulticastInlineDelegate OnMessageReceived; // 0x38(0x10)
	char pad_48[0x48]; // 0x48(0x48)

	struct UAsyncAction_ListenForGameplayMessage* ListenForGameplayMessages(struct UObject* WorldContextObject, struct FGameplayTag Channel, struct UScriptStruct* PayloadType, enum class EGameplayMessageMatch MatchType); // Function GameplayMessageRuntime.AsyncAction_ListenForGameplayMessage.ListenForGameplayMessages // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2bee5e0
	bool GetPayload(int32_t& OutPayload); // Function GameplayMessageRuntime.AsyncAction_ListenForGameplayMessage.GetPayload // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2bece50
};

// Class GameplayMessageRuntime.GameplayMessageSubsystem
// Size: 0x88 (Inherited: 0x38)
struct UGameplayMessageSubsystem : UGameInstanceSubsystem {
	char pad_38[0x50]; // 0x38(0x50)

	void K2_BroadcastMessage(struct FGameplayTag Channel, int32_t& Message); // Function GameplayMessageRuntime.GameplayMessageSubsystem.K2_BroadcastMessage // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x2becf50
};

