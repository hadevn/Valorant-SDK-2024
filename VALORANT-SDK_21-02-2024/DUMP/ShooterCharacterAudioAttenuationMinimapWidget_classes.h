// WidgetBlueprintGeneratedClass ShooterCharacterAudioAttenuationMinimapWidget.ShooterCharacterAudioAttenuationMinimapWidget_C
// Size: 0x42d (Inherited: 0x3b1)
struct UShooterCharacterAudioAttenuationMinimapWidget_C : UAresMinimapWidget_C {
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UWidgetAnimation* ConstantFadeIn; // 0x3c0(0x08)
	struct UWidgetAnimation* ConstantFadeOut; // 0x3c8(0x08)
	struct UImage* Constant; // 0x3d0(0x08)
	struct UOverlay* ConstantOverlay; // 0x3d8(0x08)
	float LifeSpan; // 0x3e0(0x04)
	float CreationTime; // 0x3e4(0x04)
	struct TArray<struct FStruct_AttenuationInformation> ConstantVisualizations; // 0x3e8(0x10)
	struct FStruct_AttenuationInformation OneShotVisualization; // 0x3f8(0x18)
	struct FStruct_AttenuationInformation NewVar_1; // 0x410(0x18)
	float AnimSpeeds; // 0x428(0x04)
	bool VisualizerActive; // 0x42c(0x01)

	void NewFunction_1(); // Function ShooterCharacterAudioAttenuationMinimapWidget.ShooterCharacterAudioAttenuationMinimapWidget_C.NewFunction_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void GetDesiredAttenuationSize(float& DesiredRadius); // Function ShooterCharacterAudioAttenuationMinimapWidget.ShooterCharacterAudioAttenuationMinimapWidget_C.GetDesiredAttenuationSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x40ca1b0
	void UpdateVisualization(struct TArray<struct FStruct_AttenuationInformation>& Attenuations); // Function ShooterCharacterAudioAttenuationMinimapWidget.ShooterCharacterAudioAttenuationMinimapWidget_C.UpdateVisualization // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x40ca1b0
	void ExecuteUbergraph_ShooterCharacterAudioAttenuationMinimapWidget(int32_t EntryPoint); // Function ShooterCharacterAudioAttenuationMinimapWidget.ShooterCharacterAudioAttenuationMinimapWidget_C.ExecuteUbergraph_ShooterCharacterAudioAttenuationMinimapWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x40ca1b0
};

