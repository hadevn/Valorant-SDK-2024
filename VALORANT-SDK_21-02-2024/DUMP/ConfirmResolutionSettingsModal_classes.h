// WidgetBlueprintGeneratedClass ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C
// Size: 0x550 (Inherited: 0x510)
struct UConfirmResolutionSettingsModal_C : UConfirmationModal_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct FText MessageTextFormat; // 0x518(0x18)
	struct FTimerHandle RemainingConfirmationTime; // 0x530(0x08)
	float ConfirmationTimeout; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct FMulticastInlineDelegate OnDisplayConfirmationClosed; // 0x540(0x10)

	void CloseAndDispatch(bool bShouldApplySettings); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.CloseAndDispatch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void UpdateMessageTimer(); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.UpdateMessageTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40ca1b0
	void ConfirmationTimeoutExpired(); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.ConfirmationTimeoutExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void HandleConfirmPressed(); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.HandleConfirmPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void HandleCancelPressed(); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.HandleCancelPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void Construct(); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40ca1b0
	void Destruct(); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40ca1b0
	void ExecuteUbergraph_ConfirmResolutionSettingsModal(int32_t EntryPoint); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.ExecuteUbergraph_ConfirmResolutionSettingsModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x40ca1b0
	void OnDisplayConfirmationClosed__DelegateSignature(bool bShouldApplySettings); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.OnDisplayConfirmationClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
};

