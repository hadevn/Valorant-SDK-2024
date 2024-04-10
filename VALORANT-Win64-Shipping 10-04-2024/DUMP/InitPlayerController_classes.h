// BlueprintGeneratedClass InitPlayerController.InitPlayerController_C
// Size: 0x768 (Inherited: 0x750)
struct AInitPlayerController_C : ARNetInitPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x750(0x08)
	struct UInitScreenBase_C* InitScreen; // 0x758(0x08)
	struct UAresShellScreen* InitShell; // 0x760(0x08)

	void RestoreDefaultInputMode(); // Function InitPlayerController.InitPlayerController_C.RestoreDefaultInputMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void OnLoaded_DEE1860746D5138C89FD458AC6ECFF09(struct UObject* Loaded); // Function InitPlayerController.InitPlayerController_C.OnLoaded_DEE1860746D5138C89FD458AC6ECFF09 // (BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void ReceiveBeginPlay(); // Function InitPlayerController.InitPlayerController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x41999b0
	void ExecuteUbergraph_InitPlayerController(int32_t EntryPoint); // Function InitPlayerController.InitPlayerController_C.ExecuteUbergraph_InitPlayerController // (Final|UbergraphFunction|HasDefaults) // @ game+0x41999b0
};

