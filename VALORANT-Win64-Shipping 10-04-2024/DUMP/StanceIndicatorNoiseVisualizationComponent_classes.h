// BlueprintGeneratedClass StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C
// Size: 0x139 (Inherited: 0xe8)
struct UStanceIndicatorNoiseVisualizationComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FStruct_AttenuationInformation CurrentOneShotVisualization; // 0xf0(0x18)
	float DefaultVisualizeDuration; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FTimerHandle ClearTimer; // 0x110(0x08)
	struct TArray<struct FStruct_AttenuationInformation> ConstantVisualizations; // 0x118(0x10)
	struct FMulticastInlineDelegate OnAudioVisualizationStateChanged; // 0x128(0x10)
	bool bIsVisualizingAudio; // 0x138(0x01)

	bool IsCurrentlyVisualizingAudio(); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.IsCurrentlyVisualizingAudio // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x41999b0
	void PruneConstantArray(); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.PruneConstantArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void UpdateVisualizations(); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.UpdateVisualizations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void RemoveAttenuationVisual(struct UAkComponent* AkComponent, struct AActor* Actor); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.RemoveAttenuationVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void AddNewAttenuationVisual(struct UAkComponent* AkComponent, struct AActor* OwningActor, enum class Enum_AttenuationVisualization Type, float VisualizationDurationOverride); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.AddNewAttenuationVisual // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void ClearCurrentOneShotVisualization(); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.ClearCurrentOneShotVisualization // (BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void ExecuteUbergraph_StanceIndicatorNoiseVisualizationComponent(int32_t EntryPoint); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.ExecuteUbergraph_StanceIndicatorNoiseVisualizationComponent // (Final|UbergraphFunction) // @ game+0x41999b0
	void OnAudioVisualizationStateChanged__DelegateSignature(bool IsVisualizingAudio); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.OnAudioVisualizationStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
};

