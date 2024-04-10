// Class AICopilot.AICopilotComponent
// Size: 0x100 (Inherited: 0xe8)
struct UAICopilotComponent : UActorComponent {
	struct AAIController* AIControllerClass; // 0xe8(0x08)
	struct APawn* OwningPawn; // 0xf0(0x08)
	struct AAIController* SpawnedAIController; // 0xf8(0x08)

	struct AAIController* GetAIController(); // Function AICopilot.AICopilotComponent.GetAIController // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x297b5d0
	void ClientOnOwningPawnChanged(struct APawn* NewPawn); // Function AICopilot.AICopilotComponent.ClientOnOwningPawnChanged // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x297b540
};

// Class AICopilot.AICopilotLifecycleInterface
// Size: 0x30 (Inherited: 0x30)
struct UAICopilotLifecycleInterface : UInterface {

	void InitializeForCopilotActivation(struct APawn* PossessedPawn); // Function AICopilot.AICopilotLifecycleInterface.InitializeForCopilotActivation // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void CleanupForCopilotDeactivation(struct APawn* UnPossessedPawn); // Function AICopilot.AICopilotLifecycleInterface.CleanupForCopilotDeactivation // (Event|Public|BlueprintEvent) // @ game+0x41999b0
};

