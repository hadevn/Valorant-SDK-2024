// BlueprintGeneratedClass InitGameMode.InitGameMode_C
// Size: 0x4c0 (Inherited: 0x4a8)
struct AInitGameMode_C : AGameMode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UAud_Base_UI_Component_C* Aud_Base_UI_Component; // 0x4b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4b8(0x08)

	void AudSetupComponents(); // Function InitGameMode.InitGameMode_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void ReceiveBeginPlay(); // Function InitGameMode.InitGameMode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x4317a70
	void ExecuteUbergraph_InitGameMode(int32_t EntryPoint); // Function InitGameMode.InitGameMode_C.ExecuteUbergraph_InitGameMode // (Final|UbergraphFunction) // @ game+0x4317a70
};

