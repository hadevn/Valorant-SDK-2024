// BlueprintGeneratedClass InitGameMode.InitGameMode_C
// Size: 0x4e0 (Inherited: 0x4c8)
struct AInitGameMode_C : AGameMode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct UAud_Base_UI_Component_C* Aud_Base_UI_Component; // 0x4d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4d8(0x08)

	void AudSetupComponents(); // Function InitGameMode.InitGameMode_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void ReceiveBeginPlay(); // Function InitGameMode.InitGameMode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x41999b0
	void ExecuteUbergraph_InitGameMode(int32_t EntryPoint); // Function InitGameMode.InitGameMode_C.ExecuteUbergraph_InitGameMode // (Final|UbergraphFunction) // @ game+0x41999b0
};

