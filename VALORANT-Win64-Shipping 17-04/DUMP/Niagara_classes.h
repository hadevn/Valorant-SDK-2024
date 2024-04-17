// Class Niagara.MovieSceneNiagaraTrack
// Size: 0xa8 (Inherited: 0x98)
struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
};

// Class Niagara.MovieSceneNiagaraParameterTrack
// Size: 0xc8 (Inherited: 0xa8)
struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	struct FNiagaraVariable Parameter; // 0xa8(0x20)
};

// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// Size: 0xd0 (Inherited: 0xc8)
struct UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class Niagara.MovieSceneNiagaraColorParameterTrack
// Size: 0xd0 (Inherited: 0xc8)
struct UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// Size: 0xd0 (Inherited: 0xc8)
struct UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// Size: 0xd0 (Inherited: 0xc8)
struct UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// Size: 0x100 (Inherited: 0xf0)
struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xf0(0x04)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xf4(0x04)
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf8(0x04)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
};

// Class Niagara.MovieSceneNiagaraSystemTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// Size: 0xd8 (Inherited: 0xc8)
struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C8[0x8]; // 0xc8(0x08)
	int32_t ChannelsUsed; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class Niagara.NiagaraActor
// Size: 0x3c8 (Inherited: 0x3b8)
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent; // 0x3b8(0x08)
	char bDestroyOnSystemFinish : 1; // 0x3c0(0x01)
	char pad_3C0_1 : 7; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish); // Function Niagara.NiagaraActor.SetDestroyOnSystemFinish // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x29722b0
	void OnNiagaraSystemFinished(struct UNiagaraComponent* FinishedComponent); // Function Niagara.NiagaraActor.OnNiagaraSystemFinished // (Final|Native|Private) // @ game+0x2972220
};

// Class Niagara.NiagaraBakerSettings
// Size: 0x120 (Inherited: 0x30)
struct UNiagaraBakerSettings : UObject {
	float StartSeconds; // 0x30(0x04)
	float DurationSeconds; // 0x34(0x04)
	int32_t FramesPerSecond; // 0x38(0x04)
	char bPreviewLooping : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FIntPoint FramesPerDimension; // 0x40(0x08)
	struct TArray<struct FNiagaraBakerTextureSettings> OutputTextures; // 0x48(0x10)
	enum class ENiagaraBakerViewMode CameraViewportMode; // 0x58(0x04)
	struct FVector CameraViewportLocation[0x7]; // 0x5c(0x54)
	struct FRotator CameraViewportRotation[0x7]; // 0xb0(0x54)
	float CameraOrbitDistance; // 0x104(0x04)
	float CameraFOV; // 0x108(0x04)
	float CameraOrthoWidth; // 0x10c(0x04)
	char bUseCameraAspectRatio : 1; // 0x110(0x01)
	char pad_110_1 : 7; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float CameraAspectRatio; // 0x114(0x04)
	char bRenderComponentOnly : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// Class Niagara.NiagaraComponent
// Size: 0x700 (Inherited: 0x550)
struct UNiagaraComponent : UFXSystemComponent {
	struct UNiagaraSystem* Asset; // 0x550(0x08)
	enum class ENiagaraTickBehavior TickBehavior; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	int32_t RandomSeedOffset; // 0x55c(0x04)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x560(0xc8)
	char bForceSolo : 1; // 0x628(0x01)
	char bEnableGpuComputeDebug : 1; // 0x628(0x01)
	char pad_628_2 : 6; // 0x628(0x01)
	char pad_629[0x2f]; // 0x629(0x2f)
	char bAutoDestroy : 1; // 0x658(0x01)
	char bRenderingEnabled : 1; // 0x658(0x01)
	char bAutoManageAttachment : 1; // 0x658(0x01)
	char bAutoAttachWeldSimulatedBodies : 1; // 0x658(0x01)
	char pad_658_4 : 4; // 0x658(0x01)
	char pad_659[0x3]; // 0x659(0x03)
	float MaxTimeBeforeForceUpdateTransform; // 0x65c(0x04)
	struct TArray<struct FNiagaraMaterialOverride> EmitterMaterials; // 0x660(0x10)
	char pad_670[0x8]; // 0x670(0x08)
	struct FMulticastInlineDelegate OnSystemFinished; // 0x678(0x10)
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; // 0x688(0x08)
	struct FName AutoAttachSocketName; // 0x690(0x0c)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x69c(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x69d(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x69e(0x01)
	char pad_69F[0x61]; // 0x69f(0x61)

	void SetVariableVec4(struct FName InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2977bb0
	void SetVariableVec3(struct FName InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2977ac0
	void SetVariableVec2(struct FName InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x29779e0
	void SetVariableTextureRenderTarget(struct FName InVariableName, struct UTextureRenderTarget* TextureRenderTarget); // Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x29778f0
	void SetVariableQuat(struct FName InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2977800
	void SetVariableObject(struct FName InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetVariableObject // (Final|Native|Public|BlueprintCallable) // @ game+0x2977270
	void SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface* Object); // Function Niagara.NiagaraComponent.SetVariableMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x2977710
	void SetVariableLinearColor(struct FName InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2977620
	void SetVariableInt(struct FName InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetVariableInt // (Final|Native|Public|BlueprintCallable) // @ game+0x2977540
	void SetVariableFloat(struct FName InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetVariableFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x2977450
	void SetVariableBool(struct FName InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetVariableBool // (Final|Native|Public|BlueprintCallable) // @ game+0x2977360
	void SetVariableActor(struct FName InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetVariableActor // (Final|Native|Public|BlueprintCallable) // @ game+0x2977270
	void SetTickBehavior(enum class ENiagaraTickBehavior NewTickBehavior); // Function Niagara.NiagaraComponent.SetTickBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x29771f0
	void SetSeekDelta(float InSeekDelta); // Function Niagara.NiagaraComponent.SetSeekDelta // (Final|Native|Public|BlueprintCallable) // @ game+0x2977170
	void SetRenderingEnabled(bool bInRenderingEnabled); // Function Niagara.NiagaraComponent.SetRenderingEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x29770e0
	void SetRandomSeedOffset(int32_t NewRandomSeedOffset); // Function Niagara.NiagaraComponent.SetRandomSeedOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x2977050
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance); // Function Niagara.NiagaraComponent.SetPreviewLODDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x2976f80
	void SetPaused(bool bInPaused); // Function Niagara.NiagaraComponent.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0x2976ef0
	void SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2976df0
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2976cf0
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2976c00
	void SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2976b10
	void SetNiagaraVariableObject(struct FString InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetNiagaraVariableObject // (Final|Native|Public|BlueprintCallable) // @ game+0x2976660
	void SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2976a20
	void SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableInt // (Final|Native|Public|BlueprintCallable) // @ game+0x2976930
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x2976840
	void SetNiagaraVariableBool(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableBool // (Final|Native|Public|BlueprintCallable) // @ game+0x2976750
	void SetNiagaraVariableActor(struct FString InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetNiagaraVariableActor // (Final|Native|Public|BlueprintCallable) // @ game+0x2976660
	void SetMaxSimTime(float InMaxTime); // Function Niagara.NiagaraComponent.SetMaxSimTime // (Final|Native|Public|BlueprintCallable) // @ game+0x29765e0
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock); // Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta // (Final|Native|Public|BlueprintCallable) // @ game+0x2976550
	void SetGpuComputeDebug(bool bEnableDebug); // Function Niagara.NiagaraComponent.SetGpuComputeDebug // (Final|Native|Public|BlueprintCallable) // @ game+0x29764c0
	void SetForceSolo(bool bInForceSolo); // Function Niagara.NiagaraComponent.SetForceSolo // (Final|Native|Public|BlueprintCallable) // @ game+0x2976430
	void SetDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SetDesiredAge // (Final|Native|Public|BlueprintCallable) // @ game+0x29763b0
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking); // Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking // (Final|Native|Public|BlueprintCallable) // @ game+0x2976320
	void SetAutoDestroy(bool bInAutoDestroy); // Function Niagara.NiagaraComponent.SetAutoDestroy // (Final|Native|Public|BlueprintCallable) // @ game+0x2976290
	void SetAsset(struct UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters); // Function Niagara.NiagaraComponent.SetAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x29761c0
	void SetAllowScalability(bool bAllow); // Function Niagara.NiagaraComponent.SetAllowScalability // (Final|Native|Public|BlueprintCallable) // @ game+0x2976130
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode); // Function Niagara.NiagaraComponent.SetAgeUpdateMode // (Final|Native|Public|BlueprintCallable) // @ game+0x29760b0
	void SeekToDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SeekToDesiredAge // (Final|Native|Public|BlueprintCallable) // @ game+0x2976030
	void ResetSystem(); // Function Niagara.NiagaraComponent.ResetSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x2976010
	void ReinitializeSystem(); // Function Niagara.NiagaraComponent.ReinitializeSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x2975ff0
	bool IsPaused(); // Function Niagara.NiagaraComponent.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2975fc0
	void InitForPerformanceBaseline(); // Function Niagara.NiagaraComponent.InitForPerformanceBaseline // (Final|Native|Public|BlueprintCallable) // @ game+0x2975fa0
	enum class ENiagaraTickBehavior GetTickBehavior(); // Function Niagara.NiagaraComponent.GetTickBehavior // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2975f80
	float GetSeekDelta(); // Function Niagara.NiagaraComponent.GetSeekDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2975f50
	int32_t GetRandomSeedOffset(); // Function Niagara.NiagaraComponent.GetRandomSeedOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2975f30
	bool GetPreviewLODDistanceEnabled(); // Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2975f10
	float GetPreviewLODDistance(); // Function Niagara.NiagaraComponent.GetPreviewLODDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2975ef0
	struct TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x2975c30
	struct TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x2975d90
	struct TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName); // Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x2975b30
	float GetMaxSimTime(); // Function Niagara.NiagaraComponent.GetMaxSimTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2975b00
	bool GetLockDesiredAgeDeltaTimeToSeekDelta(); // Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2975ad0
	bool GetForceSolo(); // Function Niagara.NiagaraComponent.GetForceSolo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2975aa0
	float GetDesiredAge(); // Function Niagara.NiagaraComponent.GetDesiredAge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2975a70
	struct UNiagaraDataInterface* GetDataInterface(struct FString Name); // Function Niagara.NiagaraComponent.GetDataInterface // (Final|Native|Public|BlueprintCallable) // @ game+0x29759b0
	struct UNiagaraSystem* GetAsset(); // Function Niagara.NiagaraComponent.GetAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2975990
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode(); // Function Niagara.NiagaraComponent.GetAgeUpdateMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2975960
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulationByTime // (Final|Native|Public|BlueprintCallable) // @ game+0x2975890
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulation // (Final|Native|Public|BlueprintCallable) // @ game+0x29757c0
};

// Class Niagara.NiagaraComponentPool
// Size: 0x88 (Inherited: 0x30)
struct UNiagaraComponentPool : UObject {
	struct TMap<struct UNiagaraSystem*, struct FNCPool> WorldParticleSystemPools; // 0x30(0x50)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class Niagara.NiagaraRendererProperties
// Size: 0x80 (Inherited: 0x30)
struct UNiagaraRendererProperties : UNiagaraMergeable {
	struct FNiagaraPlatformSet Platforms; // 0x30(0x30)
	int32_t SortOrderHint; // 0x60(0x04)
	enum class ENiagaraRendererMotionVectorSetting MotionVectorSetting; // 0x64(0x04)
	bool bIsEnabled; // 0x68(0x01)
	bool bMotionBlurEnabled; // 0x69(0x01)
	char pad_6A[0x16]; // 0x6a(0x16)
};

// Class Niagara.NiagaraComponentRendererProperties
// Size: 0x1b8 (Inherited: 0x80)
struct UNiagaraComponentRendererProperties : UNiagaraRendererProperties {
	struct USceneComponent* ComponentType; // 0x80(0x08)
	uint32_t ComponentCountLimit; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FNiagaraVariableAttributeBinding EnabledBinding; // 0x90(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0xe8(0x58)
	bool bAssignComponentsOnParticleID; // 0x140(0x01)
	bool bOnlyCreateComponentsOnParticleSpawn; // 0x141(0x01)
	char pad_142[0x2]; // 0x142(0x02)
	int32_t RendererVisibility; // 0x144(0x04)
	struct USceneComponent* TemplateComponent; // 0x148(0x08)
	struct TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings; // 0x150(0x10)
	char pad_160[0x58]; // 0x160(0x58)
};

// Class Niagara.NiagaraComponentSettings
// Size: 0x120 (Inherited: 0x30)
struct UNiagaraComponentSettings : UObject {
	struct TSet<struct FName> SuppressActivationList; // 0x30(0x50)
	struct TSet<struct FName> ForceAutoPooolingList; // 0x80(0x50)
	struct TSet<struct FNiagaraEmitterNameSettingsRef> SuppressEmitterList; // 0xd0(0x50)
};

// Class Niagara.NiagaraConvertInPlaceUtilityBase
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraConvertInPlaceUtilityBase : UObject {
};

// Class Niagara.NiagaraDataInterface
// Size: 0x40 (Inherited: 0x30)
struct UNiagaraDataInterface : UNiagaraDataInterfaceBase {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Niagara.NiagaraDataInterface2DArrayTexture
// Size: 0x58 (Inherited: 0x40)
struct UNiagaraDataInterface2DArrayTexture : UNiagaraDataInterface {
	struct UTexture2DArray* Texture; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceArray
// Size: 0x58 (Inherited: 0x40)
struct UNiagaraDataInterfaceArray : UNiagaraDataInterface {
	char pad_40[0x8]; // 0x40(0x08)
	int32_t MaxElements; // 0x48(0x04)
	char pad_4C[0xc]; // 0x4c(0x0c)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat
// Size: 0x68 (Inherited: 0x58)
struct UNiagaraDataInterfaceArrayFloat : UNiagaraDataInterfaceArray {
	struct TArray<float> FloatData; // 0x58(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat2
// Size: 0x68 (Inherited: 0x58)
struct UNiagaraDataInterfaceArrayFloat2 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector2D> FloatData; // 0x58(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat3
// Size: 0x68 (Inherited: 0x58)
struct UNiagaraDataInterfaceArrayFloat3 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector> FloatData; // 0x58(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat4
// Size: 0x68 (Inherited: 0x58)
struct UNiagaraDataInterfaceArrayFloat4 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector4> FloatData; // 0x58(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayColor
// Size: 0x68 (Inherited: 0x58)
struct UNiagaraDataInterfaceArrayColor : UNiagaraDataInterfaceArray {
	struct TArray<struct FLinearColor> ColorData; // 0x58(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayQuat
// Size: 0x68 (Inherited: 0x58)
struct UNiagaraDataInterfaceArrayQuat : UNiagaraDataInterfaceArray {
	struct TArray<struct FQuat> QuatData; // 0x58(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraDataInterfaceArrayFunctionLibrary : UBlueprintFunctionLibrary {

	void SetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x297e2e0
	void SetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector4& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x297dff0
	void SetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector4>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x297deb0
	void SetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector2D& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x297dd10
	void SetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector2D>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x297dbd0
	void SetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x297e1a0
	void SetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FQuat& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x297da30
	void SetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FQuat>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x297d8f0
	void SetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x297d750
	void SetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<int32_t>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x297d610
	void SetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, float Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x297d470
	void SetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<float>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x297d330
	void SetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FLinearColor& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x297d190
	void SetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FLinearColor>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x297d050
	void SetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x297ceb0
	void SetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<bool>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x297cd70
	struct FVector GetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x297cc30
	struct FVector4 GetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x297c9d0
	struct TArray<struct FVector4> GetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4 // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x297c8a0
	struct FVector2D GetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x297c780
	struct TArray<struct FVector2D> GetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x297c650
	struct TArray<struct FVector> GetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x297cb00
	struct FQuat GetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x297c520
	struct TArray<struct FQuat> GetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x297c3f0
	int32_t GetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x297c2c0
	struct TArray<int32_t> GetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32 // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x297c190
	float GetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x297c060
	struct TArray<float> GetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x297bf30
	struct FLinearColor GetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x297be00
	struct TArray<struct FLinearColor> GetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x297bcd0
	bool GetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x297bba0
	struct TArray<bool> GetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x297ba70
};

// Class Niagara.NiagaraDataInterfaceArrayInt32
// Size: 0x68 (Inherited: 0x58)
struct UNiagaraDataInterfaceArrayInt32 : UNiagaraDataInterfaceArray {
	struct TArray<int32_t> IntData; // 0x58(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayBool
// Size: 0x68 (Inherited: 0x58)
struct UNiagaraDataInterfaceArrayBool : UNiagaraDataInterfaceArray {
	struct TArray<bool> BoolData; // 0x58(0x10)
};

// Class Niagara.NiagaraDataInterfaceAudioSubmix
// Size: 0x48 (Inherited: 0x40)
struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x40(0x08)
};

// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// Size: 0x50 (Inherited: 0x40)
struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x40(0x08)
	int32_t Resolution; // 0x48(0x04)
	float ScopeInMilliseconds; // 0x4c(0x04)
};

// Class Niagara.NiagaraDataInterfaceAudioPlayer
// Size: 0x78 (Inherited: 0x40)
struct UNiagaraDataInterfaceAudioPlayer : UNiagaraDataInterface {
	struct USoundBase* SoundToPlay; // 0x40(0x08)
	struct USoundAttenuation* Attenuation; // 0x48(0x08)
	struct USoundConcurrency* Concurrency; // 0x50(0x08)
	struct TArray<struct FName> ParameterNames; // 0x58(0x10)
	bool bLimitPlaysPerTick; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32_t MaxPlaysPerTick; // 0x6c(0x04)
	bool bStopWhenComponentIsDestroyed; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// Size: 0x58 (Inherited: 0x48)
struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix {
	int32_t Resolution; // 0x48(0x04)
	float MinimumFrequency; // 0x4c(0x04)
	float MaximumFrequency; // 0x50(0x04)
	float NoiseFloorDb; // 0x54(0x04)
};

// Class Niagara.NiagaraDataInterfaceCamera
// Size: 0x48 (Inherited: 0x40)
struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface {
	int32_t PlayerControllerIndex; // 0x40(0x04)
	bool bRequireCurrentFrameData; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class Niagara.NiagaraDataInterfaceCollisionQuery
// Size: 0x50 (Inherited: 0x40)
struct UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class Niagara.NiagaraDataInterfaceCurveBase
// Size: 0x78 (Inherited: 0x40)
struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface {
	struct TArray<float> ShaderLUT; // 0x40(0x10)
	float LUTMinTime; // 0x50(0x04)
	float LUTMaxTime; // 0x54(0x04)
	float LUTInvTimeRange; // 0x58(0x04)
	float LUTNumSamplesMinusOne; // 0x5c(0x04)
	char bUseLUT : 1; // 0x60(0x01)
	char bExposeCurve : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FName ExposedName; // 0x64(0x0c)
	struct UTexture2D* ExposedTexture; // 0x70(0x08)
};

// Class Niagara.NiagaraDataInterfaceColorCurve
// Size: 0x278 (Inherited: 0x78)
struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve RedCurve; // 0x78(0x80)
	struct FRichCurve GreenCurve; // 0xf8(0x80)
	struct FRichCurve BlueCurve; // 0x178(0x80)
	struct FRichCurve AlphaCurve; // 0x1f8(0x80)
};

// Class Niagara.NiagaraDataInterfaceCubeTexture
// Size: 0x50 (Inherited: 0x40)
struct UNiagaraDataInterfaceCubeTexture : UNiagaraDataInterface {
	struct UTextureCube* Texture; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class Niagara.NiagaraDataInterfaceCurlNoise
// Size: 0x50 (Inherited: 0x40)
struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	uint32_t Seed; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// Class Niagara.NiagaraDataInterfaceCurve
// Size: 0xf8 (Inherited: 0x78)
struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve Curve; // 0x78(0x80)
};

// Class Niagara.NiagaraDataInterfaceDebugDraw
// Size: 0x40 (Inherited: 0x40)
struct UNiagaraDataInterfaceDebugDraw : UNiagaraDataInterface {
};

// Class Niagara.NiagaraParticleCallbackHandler
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraParticleCallbackHandler : UInterface {

	void ReceiveParticleData(struct TArray<struct FBasicParticleData>& Data, struct UNiagaraSystem* NiagaraSystem); // Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2984f20
};

// Class Niagara.NiagaraDataInterfaceExport
// Size: 0x70 (Inherited: 0x40)
struct UNiagaraDataInterfaceExport : UNiagaraDataInterface {
	struct FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x40(0x20)
	enum class ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t GPUAllocationFixedSize; // 0x64(0x04)
	float GPUAllocationPerParticleSize; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Niagara.NiagaraDataInterfaceGBuffer
// Size: 0x40 (Inherited: 0x40)
struct UNiagaraDataInterfaceGBuffer : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceRWBase
// Size: 0xe0 (Inherited: 0x40)
struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
	struct TSet<int32_t> OutputShaderStages; // 0x40(0x50)
	struct TSet<int32_t> IterationShaderStages; // 0x90(0x50)
};

// Class Niagara.NiagaraDataInterfaceGrid2D
// Size: 0x100 (Inherited: 0xe0)
struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase {
	int32_t NumCellsX; // 0xe0(0x04)
	int32_t NumCellsY; // 0xe4(0x04)
	int32_t NumCellsMaxAxis; // 0xe8(0x04)
	int32_t NumAttributes; // 0xec(0x04)
	bool SetGridFromMaxAxis; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FVector2D WorldBBoxSize; // 0xf4(0x08)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// Size: 0x1c8 (Inherited: 0x100)
struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D {
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x100(0x20)
	enum class ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x120(0x01)
	char bOverrideFormat : 1; // 0x121(0x01)
	char pad_121_1 : 7; // 0x121(0x01)
	char pad_122[0x56]; // 0x122(0x56)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x178(0x50)

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2984c60
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x29849a0
	bool FillTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D // (Native|Public|BlueprintCallable) // @ game+0x2984880
	bool FillRawTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2984500
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
// Size: 0x170 (Inherited: 0x100)
struct UNiagaraDataInterfaceGrid2DCollectionReader : UNiagaraDataInterfaceGrid2D {
	struct FString EmitterName; // 0x100(0x10)
	struct FString DIName; // 0x110(0x10)
	char pad_120[0x50]; // 0x120(0x50)
};

// Class Niagara.NiagaraDataInterfaceGrid3D
// Size: 0x108 (Inherited: 0xe0)
struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase {
	struct FIntVector NumCells; // 0xe0(0x0c)
	float CellSize; // 0xec(0x04)
	int32_t NumCellsMaxAxis; // 0xf0(0x04)
	enum class ESetResolutionMethod SetResolutionMethod; // 0xf4(0x04)
	struct FVector WorldBBoxSize; // 0xf8(0x0c)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class Niagara.NiagaraDataInterfaceGrid3DCollection
// Size: 0x188 (Inherited: 0x108)
struct UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D {
	int32_t NumAttributes; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x110(0x20)
	enum class ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x130(0x01)
	char bOverrideFormat : 1; // 0x131(0x01)
	char pad_131_1 : 7; // 0x131(0x01)
	char pad_132[0x56]; // 0x132(0x56)

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2984d90
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2984ad0
	bool FillVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture // (Native|Public|BlueprintCallable) // @ game+0x2984880
	bool FillRawVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2984680
};

// Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
// Size: 0x158 (Inherited: 0xe0)
struct UNiagaraDataInterfaceIntRenderTarget2D : UNiagaraDataInterfaceRWBase {
	struct FIntPoint Size; // 0xe0(0x08)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8(0x20)
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets; // 0x108(0x50)
};

// Class Niagara.NiagaraDataInterfaceLandscape
// Size: 0x60 (Inherited: 0x40)
struct UNiagaraDataInterfaceLandscape : UNiagaraDataInterface {
	struct AActor* SourceLandscape; // 0x40(0x08)
	enum class ENDILandscape_SourceMode SourceMode; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceMeshRendererInfo
// Size: 0x58 (Inherited: 0x40)
struct UNiagaraDataInterfaceMeshRendererInfo : UNiagaraDataInterface {
	struct UNiagaraMeshRendererProperties* MeshRenderer; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// Size: 0x110 (Inherited: 0x108)
struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D {
	uint32_t MaxNeighborsPerCell; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// Class Niagara.NiagaraDataInterfaceOcclusion
// Size: 0x40 (Inherited: 0x40)
struct UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceParticleRead
// Size: 0xf0 (Inherited: 0xe0)
struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterfaceRWBase {
	struct FString EmitterName; // 0xe0(0x10)
};

// Class Niagara.NiagaraDataInterfacePlatformSet
// Size: 0x70 (Inherited: 0x40)
struct UNiagaraDataInterfacePlatformSet : UNiagaraDataInterface {
	struct FNiagaraPlatformSet Platforms; // 0x40(0x30)
};

// Class Niagara.NiagaraDataInterfaceRenderTarget2D
// Size: 0x1b0 (Inherited: 0xe0)
struct UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase {
	struct FIntPoint Size; // 0xe0(0x08)
	enum class ENiagaraMipMapGeneration MipMapGeneration; // 0xe8(0x01)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe9(0x01)
	char bInheritUserParameterSettings : 1; // 0xea(0x01)
	char bOverrideFormat : 1; // 0xea(0x01)
	char pad_EA_2 : 6; // 0xea(0x01)
	char pad_EB[0x5]; // 0xeb(0x05)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xf0(0x20)
	char pad_110[0x50]; // 0x110(0x50)
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets; // 0x160(0x50)
};

// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
// Size: 0x160 (Inherited: 0xe0)
struct UNiagaraDataInterfaceRenderTarget2DArray : UNiagaraDataInterfaceRWBase {
	struct FIntVector Size; // 0xe0(0x0c)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xec(0x01)
	char bInheritUserParameterSettings : 1; // 0xed(0x01)
	char bOverrideFormat : 1; // 0xed(0x01)
	char pad_ED_2 : 6; // 0xed(0x01)
	char pad_EE[0x2]; // 0xee(0x02)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xf0(0x20)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x110(0x50)
};

// Class Niagara.NiagaraDataInterfaceRenderTargetCube
// Size: 0x158 (Inherited: 0xe0)
struct UNiagaraDataInterfaceRenderTargetCube : UNiagaraDataInterfaceRWBase {
	int32_t Size; // 0xe0(0x04)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4(0x01)
	char bInheritUserParameterSettings : 1; // 0xe5(0x01)
	char bOverrideFormat : 1; // 0xe5(0x01)
	char pad_E5_2 : 6; // 0xe5(0x01)
	char pad_E6[0x2]; // 0xe6(0x02)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8(0x20)
	struct TMap<uint64_t, struct UTextureRenderTargetCube*> ManagedRenderTargets; // 0x108(0x50)
};

// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
// Size: 0x160 (Inherited: 0xe0)
struct UNiagaraDataInterfaceRenderTargetVolume : UNiagaraDataInterfaceRWBase {
	struct FIntVector Size; // 0xe0(0x0c)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xec(0x01)
	char bInheritUserParameterSettings : 1; // 0xed(0x01)
	char bOverrideFormat : 1; // 0xed(0x01)
	char pad_ED_2 : 6; // 0xed(0x01)
	char pad_EE[0x2]; // 0xee(0x02)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xf0(0x20)
	struct TMap<uint64_t, struct UTextureRenderTargetVolume*> ManagedRenderTargets; // 0x110(0x50)
};

// Class Niagara.NiagaraDataInterfaceSimpleCounter
// Size: 0x40 (Inherited: 0x40)
struct UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// Size: 0xd8 (Inherited: 0x40)
struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface {
	enum class ENDISkeletalMesh_SourceMode SourceMode; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct AActor* Source; // 0x48(0x08)
	struct FNiagaraUserParameterBinding MeshUserParameter; // 0x50(0x20)
	struct USkeletalMeshComponent* SourceComponent; // 0x70(0x08)
	enum class ENDISkeletalMesh_SkinningMode SkinningMode; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct FName> SamplingRegions; // 0x80(0x10)
	int32_t WholeMeshLOD; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<struct FName> FilteredBones; // 0x98(0x10)
	struct TArray<struct FName> FilteredSockets; // 0xa8(0x10)
	struct FName ExcludeBoneName; // 0xb8(0x0c)
	char bExcludeBone : 1; // 0xc4(0x01)
	char pad_C4_1 : 7; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	int32_t UvSetIndex; // 0xc8(0x04)
	bool bRequireCurrentFrameData; // 0xcc(0x01)
	char pad_CD[0xb]; // 0xcd(0x0b)
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0x68 (Inherited: 0x40)
struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	struct AActor* Source; // 0x40(0x08)
	struct FNiagaraUserParameterBinding SplineUserParameter; // 0x48(0x20)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x90 (Inherited: 0x40)
struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface {
	enum class ENDIStaticMesh_SourceMode SourceMode; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UStaticMesh* DefaultMesh; // 0x48(0x08)
	struct AActor* Source; // 0x50(0x08)
	struct UStaticMeshComponent* SourceComponent; // 0x58(0x08)
	struct FNDIStaticMeshSectionFilter SectionFilter; // 0x60(0x10)
	bool bUsePhysicsBodyVelocity; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FName> FilteredSockets; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)
};

// Class Niagara.NiagaraDataInterfaceTexture
// Size: 0x50 (Inherited: 0x40)
struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	struct UTexture* Texture; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class Niagara.NiagaraDataInterfaceVector2DCurve
// Size: 0x178 (Inherited: 0x78)
struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x78(0x80)
	struct FRichCurve YCurve; // 0xf8(0x80)
};

// Class Niagara.NiagaraDataInterfaceVector4Curve
// Size: 0x278 (Inherited: 0x78)
struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x78(0x80)
	struct FRichCurve YCurve; // 0xf8(0x80)
	struct FRichCurve ZCurve; // 0x178(0x80)
	struct FRichCurve WCurve; // 0x1f8(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorCurve
// Size: 0x1f8 (Inherited: 0x78)
struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x78(0x80)
	struct FRichCurve YCurve; // 0xf8(0x80)
	struct FRichCurve ZCurve; // 0x178(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorField
// Size: 0x50 (Inherited: 0x40)
struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	struct UVectorField* Field; // 0x40(0x08)
	bool bTileX; // 0x48(0x01)
	bool bTileY; // 0x49(0x01)
	bool bTileZ; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
};

// Class Niagara.NiagaraDataInterfaceVolumeTexture
// Size: 0x58 (Inherited: 0x40)
struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface {
	struct UVolumeTexture* Texture; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
};

// Class Niagara.NiagaraDebugHUDSettings
// Size: 0x130 (Inherited: 0x30)
struct UNiagaraDebugHUDSettings : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct FNiagaraDebugHUDSettingsData Data; // 0x50(0xe0)
};

// Class Niagara.NiagaraEditorDataBase
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraEditorDataBase : UObject {
};

// Class Niagara.NiagaraEditorParametersAdapterBase
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraEditorParametersAdapterBase : UObject {
};

// Class Niagara.NiagaraSignificanceHandler
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraSignificanceHandler : UObject {
};

// Class Niagara.NiagaraSignificanceHandlerDistance
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraSignificanceHandlerDistance : UNiagaraSignificanceHandler {
};

// Class Niagara.NiagaraSignificanceHandlerAge
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraSignificanceHandlerAge : UNiagaraSignificanceHandler {
};

// Class Niagara.NiagaraEffectType
// Size: 0xa0 (Inherited: 0x30)
struct UNiagaraEffectType : UObject {
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x30(0x04)
	enum class ENiagaraCullReaction CullReaction; // 0x34(0x04)
	struct UNiagaraSignificanceHandler* SignificanceHandler; // 0x38(0x08)
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x40(0x10)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x50(0x10)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)
	struct UNiagaraBaselineController* PerformanceBaselineController; // 0x78(0x08)
	struct FNiagaraPerfBaselineStats PerfBaselineStats; // 0x80(0x10)
	struct FGuid PerfBaselineVersion; // 0x90(0x10)
};

// Class Niagara.NiagaraEmitter
// Size: 0x2a8 (Inherited: 0x30)
struct UNiagaraEmitter : UObject {
	bool bLocalSpace; // 0x30(0x01)
	bool bDeterminism; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t RandomSeed; // 0x34(0x04)
	enum class EParticleAllocationMode AllocationMode; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t PreAllocationCount; // 0x3c(0x04)
	struct FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x40(0x28)
	struct FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x68(0x28)
	enum class ENiagaraSimTarget SimTarget; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FBox FixedBounds; // 0x94(0x1c)
	int32_t MinDetailLevel; // 0xb0(0x04)
	int32_t MaxDetailLevel; // 0xb4(0x04)
	struct FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; // 0xb8(0x14)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FNiagaraPlatformSet Platforms; // 0xd0(0x30)
	struct FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0x100(0x10)
	char bInterpolatedSpawning : 1; // 0x110(0x01)
	char bFixedBounds : 1; // 0x110(0x01)
	char bUseMinDetailLevel : 1; // 0x110(0x01)
	char bUseMaxDetailLevel : 1; // 0x110(0x01)
	char bOverrideGlobalSpawnCountScale : 1; // 0x110(0x01)
	char bRequiresPersistentIDs : 1; // 0x110(0x01)
	char bCombineEventSpawn : 1; // 0x110(0x01)
	char pad_110_7 : 1; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float MaxDeltaTimePerTick; // 0x114(0x04)
	uint32_t DefaultShaderStageIndex; // 0x118(0x04)
	uint32_t MaxUpdateIterations; // 0x11c(0x04)
	struct TSet<uint32_t> SpawnStages; // 0x120(0x50)
	char bSimulationStagesEnabled : 1; // 0x170(0x01)
	char bDeprecatedShaderStagesEnabled : 1; // 0x170(0x01)
	char bLimitDeltaTime : 1; // 0x170(0x01)
	char pad_170_3 : 5; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct FString UniqueEmitterName; // 0x178(0x10)
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties; // 0x188(0x10)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x198(0x10)
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages; // 0x1a8(0x10)
	struct UNiagaraScript* GPUComputeScript; // 0x1b8(0x08)
	struct TArray<struct FName> SharedEventGeneratorIds; // 0x1c0(0x10)
	char pad_1D0[0xd8]; // 0x1d0(0xd8)
};

// Class Niagara.NiagaraEventReceiverEmitterAction
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraEventReceiverEmitterAction : UObject {
};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// Size: 0x38 (Inherited: 0x30)
struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Niagara.NiagaraFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraFunctionLibrary : UBlueprintFunctionLibrary {

	struct UNiagaraComponent* SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x2993ea0
	struct UNiagaraComponent* SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x2993bc0
	void SetVolumeTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UVolumeTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2993980
	void SetTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTextureObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2993aa0
	void SetTexture2DArrayObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture2DArray* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2993980
	void SetSkeletalMeshDataInterfaceSamplingRegions(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName>& SamplingRegions); // Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2993840
	void OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMeshComponent* StaticMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2993720
	void OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMesh* StaticMesh); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2993600
	void OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x29934e0
	struct UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection); // Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2993410
};

// Class Niagara.NiagaraLightRendererProperties
// Size: 0x338 (Inherited: 0x80)
struct UNiagaraLightRendererProperties : UNiagaraRendererProperties {
	char bUseInverseSquaredFalloff : 1; // 0x80(0x01)
	char bAffectsTranslucency : 1; // 0x80(0x01)
	char bAlphaScalesBrightness : 1; // 0x80(0x01)
	char pad_80_3 : 5; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float RadiusScale; // 0x84(0x04)
	float DefaultExponent; // 0x88(0x04)
	struct FVector ColorAdd; // 0x8c(0x0c)
	int32_t RendererVisibility; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0xa0(0x58)
	struct FNiagaraVariableAttributeBinding LightExponentBinding; // 0xf8(0x58)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x150(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x1a8(0x58)
	struct FNiagaraVariableAttributeBinding RadiusBinding; // 0x200(0x58)
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x258(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x2b0(0x58)
	char pad_308[0x30]; // 0x308(0x30)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x8a0 (Inherited: 0x80)
struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties {
	struct TArray<struct FNiagaraMeshRendererMeshProperties> Meshes; // 0x80(0x10)
	enum class ENiagaraRendererSourceDataMode SourceMode; // 0x90(0x01)
	enum class ENiagaraSortMode SortMode; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	char bOverrideMaterials : 1; // 0x94(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0x94(0x01)
	char bGpuLowLatencyTranslucency : 1; // 0x94(0x01)
	char bSubImageBlend : 1; // 0x94(0x01)
	char bEnableFrustumCulling : 1; // 0x94(0x01)
	char bEnableCameraDistanceCulling : 1; // 0x94(0x01)
	char bEnableMeshFlipbook : 1; // 0x94(0x01)
	char pad_94_7 : 1; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct TArray<struct FNiagaraMeshMaterialOverride> OverrideMaterials; // 0x98(0x10)
	struct FVector2D SubImageSize; // 0xa8(0x08)
	enum class ENiagaraMeshFacingMode FacingMode; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	char bLockedAxisEnable : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct FVector LockedAxis; // 0xb8(0x0c)
	enum class ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float MinCameraDistance; // 0xc8(0x04)
	float MaxCameraDistance; // 0xcc(0x04)
	uint32_t RendererVisibility; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xd8(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x130(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x188(0x58)
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x1e0(0x58)
	struct FNiagaraVariableAttributeBinding ScaleBinding; // 0x238(0x58)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x290(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x2e8(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x340(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x398(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x3f0(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x448(0x58)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x4a0(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x4f8(0x58)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x550(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x5a8(0x58)
	struct FNiagaraVariableAttributeBinding MeshIndexBinding; // 0x600(0x58)
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x658(0x10)
	struct FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x668(0x58)
	struct FNiagaraVariableAttributeBinding PrevScaleBinding; // 0x6c0(0x58)
	struct FNiagaraVariableAttributeBinding PrevMeshOrientationBinding; // 0x718(0x58)
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0x770(0x58)
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x7c8(0x58)
	char pad_820[0x68]; // 0x820(0x68)
	struct UStaticMesh* ParticleMesh; // 0x888(0x08)
	struct FVector PivotOffset; // 0x890(0x0c)
	enum class ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0x89c(0x01)
	char pad_89D[0x3]; // 0x89d(0x03)
};

// Class Niagara.NiagaraMessageDataBase
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraMessageDataBase : UObject {
};

// Class Niagara.NiagaraParameterCollectionInstance
// Size: 0xe8 (Inherited: 0x30)
struct UNiagaraParameterCollectionInstance : UObject {
	struct UNiagaraParameterCollection* Collection; // 0x30(0x08)
	struct TArray<struct FNiagaraVariable> OverridenParameters; // 0x38(0x10)
	struct FNiagaraParameterStore ParameterStorage; // 0x48(0x78)
	char pad_C0[0x28]; // 0xc0(0x28)

	void SetVectorParameter(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x299b770
	void SetVector4Parameter(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x299b670
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x299b580
	void SetQuatParameter(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x299b490
	void SetIntParameter(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x299b310
	void SetFloatParameter(struct FString InVariableName, float InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x299b220
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x299b130
	void SetBoolParameter(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x299b040
	struct FVector GetVectorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x299ad90
	struct FVector4 GetVector4Parameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x299acd0
	struct FVector2D GetVector2DParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x299ac10
	struct FQuat GetQuatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x299ab20
	int32_t GetIntParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x299a9b0
	float GetFloatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x299a8f0
	struct FLinearColor GetColorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x299a830
	bool GetBoolParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x299a770
};

// Class Niagara.NiagaraParameterCollection
// Size: 0x70 (Inherited: 0x30)
struct UNiagaraParameterCollection : UObject {
	struct FName Namespace; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FNiagaraVariable> Parameters; // 0x40(0x10)
	struct UMaterialParameterCollection* SourceMaterialCollection; // 0x50(0x08)
	struct UNiagaraParameterCollectionInstance* DefaultInstance; // 0x58(0x08)
	struct FGuid CompileId; // 0x60(0x10)
};

// Class Niagara.NiagaraParameterDefinitionsBase
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraParameterDefinitionsBase : UObject {
};

// Class Niagara.NiagaraBaselineController
// Size: 0x78 (Inherited: 0x30)
struct UNiagaraBaselineController : UObject {
	float TestDuration; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UNiagaraEffectType* EffectType; // 0x38(0x08)
	struct ANiagaraPerfBaselineActor* Owner; // 0x40(0x08)
	struct TSoftObjectPtr<UNiagaraSystem> System; // 0x48(0x30)

	bool OnTickTest(); // Function Niagara.NiagaraBaselineController.OnTickTest // (Native|Event|Public|BlueprintEvent) // @ game+0x299b000
	void OnOwnerTick(float DeltaTime); // Function Niagara.NiagaraBaselineController.OnOwnerTick // (Native|Event|Public|BlueprintEvent) // @ game+0x299af70
	void OnEndTest(struct FNiagaraPerfBaselineStats Stats); // Function Niagara.NiagaraBaselineController.OnEndTest // (Native|Event|Public|BlueprintEvent) // @ game+0x299aed0
	void OnBeginTest(); // Function Niagara.NiagaraBaselineController.OnBeginTest // (Native|Event|Public|BlueprintEvent) // @ game+0x299aea0
	struct UNiagaraSystem* GetSystem(); // Function Niagara.NiagaraBaselineController.GetSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x299abe0
};

// Class Niagara.NiagaraBaselineController_Basic
// Size: 0x90 (Inherited: 0x78)
struct UNiagaraBaselineController_Basic : UNiagaraBaselineController {
	int32_t NumInstances; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct UNiagaraComponent*> SpawnedComponents; // 0x80(0x10)
};

// Class Niagara.NiagaraPerfBaselineActor
// Size: 0x3c8 (Inherited: 0x3b8)
struct ANiagaraPerfBaselineActor : AActor {
	struct UNiagaraBaselineController* Controller; // 0x3b8(0x08)
	struct UTextRenderComponent* Label; // 0x3c0(0x08)
};

// Class Niagara.NiagaraPrecompileContainer
// Size: 0x48 (Inherited: 0x30)
struct UNiagaraPrecompileContainer : UObject {
	struct TArray<struct UNiagaraScript*> Scripts; // 0x30(0x10)
	struct UNiagaraSystem* System; // 0x40(0x08)
};

// Class Niagara.NiagaraPreviewBase
// Size: 0x3b8 (Inherited: 0x3b8)
struct ANiagaraPreviewBase : AActor {

	void SetSystem(struct UNiagaraSystem* InSystem); // Function Niagara.NiagaraPreviewBase.SetSystem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void SetLabelText(struct FText& InXAxisText, struct FText& InYAxisText); // Function Niagara.NiagaraPreviewBase.SetLabelText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
};

// Class Niagara.NiagaraPreviewAxis
// Size: 0x30 (Inherited: 0x30)
struct UNiagaraPreviewAxis : UObject {

	int32_t Num(); // Function Niagara.NiagaraPreviewAxis.Num // (Native|Event|Public|BlueprintEvent) // @ game+0x299ae60
	void ApplyToPreview(struct UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, struct FString& OutLabelText); // Function Niagara.NiagaraPreviewAxis.ApplyToPreview // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x299a5c0
};

// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// Size: 0x40 (Inherited: 0x30)
struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	struct FName Param; // 0x30(0x0c)
	int32_t Count; // 0x3c(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// Size: 0x48 (Inherited: 0x40)
struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	int32_t Min; // 0x40(0x04)
	int32_t Max; // 0x44(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// Size: 0x48 (Inherited: 0x40)
struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	float Min; // 0x40(0x04)
	float Max; // 0x44(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Size: 0x50 (Inherited: 0x40)
struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector2D Min; // 0x40(0x08)
	struct FVector2D Max; // 0x48(0x08)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// Size: 0x58 (Inherited: 0x40)
struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector Min; // 0x40(0x0c)
	struct FVector Max; // 0x4c(0x0c)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// Size: 0x60 (Inherited: 0x40)
struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector4 Min; // 0x40(0x10)
	struct FVector4 Max; // 0x50(0x10)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Size: 0x60 (Inherited: 0x40)
struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	struct FLinearColor Min; // 0x40(0x10)
	struct FLinearColor Max; // 0x50(0x10)
};

// Class Niagara.NiagaraPreviewGrid
// Size: 0x408 (Inherited: 0x3b8)
struct ANiagaraPreviewGrid : AActor {
	struct UNiagaraSystem* System; // 0x3b8(0x08)
	enum class ENiagaraPreviewGridResetMode ResetMode; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct UNiagaraPreviewAxis* PreviewAxisX; // 0x3c8(0x08)
	struct UNiagaraPreviewAxis* PreviewAxisY; // 0x3d0(0x08)
	struct ANiagaraPreviewBase* PreviewClass; // 0x3d8(0x08)
	float SpacingX; // 0x3e0(0x04)
	float SpacingY; // 0x3e4(0x04)
	int32_t NumX; // 0x3e8(0x04)
	int32_t NumY; // 0x3ec(0x04)
	struct TArray<struct UChildActorComponent*> PreviewComponents; // 0x3f0(0x10)
	char pad_400[0x8]; // 0x400(0x08)

	void SetPaused(bool bPaused); // Function Niagara.NiagaraPreviewGrid.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0x299b400
	void GetPreviews(struct TArray<struct UNiagaraComponent*>& OutPreviews); // Function Niagara.NiagaraPreviewGrid.GetPreviews // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x299aa70
	void DeactivatePreviews(); // Function Niagara.NiagaraPreviewGrid.DeactivatePreviews // (Final|Native|Public|BlueprintCallable) // @ game+0x299a750
	void ActivatePreviews(bool bReset); // Function Niagara.NiagaraPreviewGrid.ActivatePreviews // (Final|Native|Public|BlueprintCallable) // @ game+0x299a530
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x868 (Inherited: 0x80)
struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0x80(0x08)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x88(0x20)
	enum class ENiagaraRibbonFacingMode FacingMode; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	struct FNiagaraRibbonUVSettings UV0Settings; // 0xac(0x24)
	struct FNiagaraRibbonUVSettings UV1Settings; // 0xd0(0x24)
	enum class ENiagaraRibbonDrawDirection DrawDirection; // 0xf4(0x01)
	enum class ENiagaraRibbonShapeMode Shape; // 0xf5(0x01)
	bool bEnableAccurateGeometry; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	int32_t WidthSegmentationCount; // 0xf8(0x04)
	int32_t MultiPlaneCount; // 0xfc(0x04)
	int32_t TubeSubdivisions; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct TArray<struct FNiagaraRibbonShapeCustomVertex> CustomVertices; // 0x108(0x10)
	float CurveTension; // 0x118(0x04)
	enum class ENiagaraRibbonTessellationMode TessellationMode; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	int32_t TessellationFactor; // 0x120(0x04)
	bool bUseConstantFactor; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float TessellationAngle; // 0x128(0x04)
	bool bScreenSpaceTessellation; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x130(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x188(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x1e0(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x238(0x58)
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x290(0x58)
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x2e8(0x58)
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x340(0x58)
	struct FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x398(0x58)
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x3f0(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x448(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x4a0(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x4f8(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x550(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x5a8(0x58)
	struct FNiagaraVariableAttributeBinding RibbonUVDistance; // 0x600(0x58)
	struct FNiagaraVariableAttributeBinding U0OverrideBinding; // 0x658(0x58)
	struct FNiagaraVariableAttributeBinding V0RangeOverrideBinding; // 0x6b0(0x58)
	struct FNiagaraVariableAttributeBinding U1OverrideBinding; // 0x708(0x58)
	struct FNiagaraVariableAttributeBinding V1RangeOverrideBinding; // 0x760(0x58)
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x7b8(0x10)
	char pad_7C8[0xa0]; // 0x7c8(0xa0)
};

// Class Niagara.NiagaraScript
// Size: 0x2e8 (Inherited: 0x30)
struct UNiagaraScript : UNiagaraScriptBase {
	enum class ENiagaraScriptUsage Usage; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FGuid UsageId; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
	struct FNiagaraParameterStore RapidIterationParameters; // 0x48(0x78)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xc0(0x98)
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x158(0x10)
	struct FNiagaraVMExecutableDataId CachedScriptVMId; // 0x168(0x58)
	char pad_1C0[0x10]; // 0x1c0(0x10)
	struct FNiagaraVMExecutableData CachedScriptVM; // 0x1d0(0xf0)
	struct TArray<struct UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x2c0(0x10)
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x2d0(0x10)
	char pad_2E0[0x8]; // 0x2e0(0x08)

	void RaiseOnGPUCompilationComplete(); // Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete // (Final|Native|Public) // @ game+0x2118460
};

// Class Niagara.NiagaraScriptSourceBase
// Size: 0x50 (Inherited: 0x30)
struct UNiagaraScriptSourceBase : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class Niagara.NiagaraSettings
// Size: 0xe0 (Inherited: 0x48)
struct UNiagaraSettings : UDeveloperSettings {
	struct FSoftObjectPath DefaultEffectType; // 0x48(0x20)
	struct TArray<struct FText> QualityLevels; // 0x68(0x10)
	struct TMap<struct FString, struct FText> ComponentRendererWarningsPerClass; // 0x78(0x50)
	enum class ETextureRenderTargetFormat DefaultRenderTargetFormat; // 0xc8(0x01)
	enum class ENiagaraGpuBufferFormat DefaultGridFormat; // 0xc9(0x01)
	char pad_CA[0x2]; // 0xca(0x02)
	enum class ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting; // 0xcc(0x04)
	enum class ENDISkelMesh_GpuMaxInfluences NDISkelMesh_GpuMaxInfluences; // 0xd0(0x01)
	enum class ENDISkelMesh_GpuUniformSamplingFormat NDISkelMesh_GpuUniformSamplingFormat; // 0xd1(0x01)
	enum class ENDISkelMesh_AdjacencyTriangleIndexFormat NDISkelMesh_AdjacencyTriangleIndexFormat; // 0xd2(0x01)
	char pad_D3[0x5]; // 0xd3(0x05)
	struct UNiagaraEffectType* DefaultEffectTypePtr; // 0xd8(0x08)
};

// Class Niagara.NiagaraSimulationStageBase
// Size: 0x48 (Inherited: 0x30)
struct UNiagaraSimulationStageBase : UNiagaraMergeable {
	struct UNiagaraScript* Script; // 0x30(0x08)
	struct FName SimulationStageName; // 0x38(0x0c)
	char bEnabled : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class Niagara.NiagaraSimulationStageGeneric
// Size: 0x78 (Inherited: 0x48)
struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase {
	enum class ENiagaraIterationSource IterationSource; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32_t Iterations; // 0x4c(0x04)
	char bSpawnOnly : 1; // 0x50(0x01)
	char bDisablePartialParticleUpdate : 1; // 0x50(0x01)
	char pad_50_2 : 6; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FNiagaraVariableDataInterfaceBinding DataInterface; // 0x58(0x20)
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0xab8 (Inherited: 0x80)
struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0x80(0x08)
	enum class ENiagaraRendererSourceDataMode SourceMode; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x90(0x20)
	enum class ENiagaraSpriteAlignment Alignment; // 0xb0(0x01)
	enum class ENiagaraSpriteFacingMode FacingMode; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	struct FVector2D PivotInUVSpace; // 0xb4(0x08)
	enum class ENiagaraSortMode SortMode; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct FVector2D SubImageSize; // 0xc0(0x08)
	char bSubImageBlend : 1; // 0xc8(0x01)
	char bRemoveHMDRollInVR : 1; // 0xc8(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0xc8(0x01)
	char bGpuLowLatencyTranslucency : 1; // 0xc8(0x01)
	char pad_C8_4 : 4; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float MinFacingCameraBlendDistance; // 0xcc(0x04)
	float MaxFacingCameraBlendDistance; // 0xd0(0x04)
	char bEnableCameraDistanceCulling : 1; // 0xd4(0x01)
	char pad_D4_1 : 7; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	float MinCameraDistance; // 0xd8(0x04)
	float MaxCameraDistance; // 0xdc(0x04)
	uint32_t RendererVisibility; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xe8(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x140(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x198(0x58)
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x1f0(0x58)
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x248(0x58)
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x2a0(0x58)
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x2f8(0x58)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x350(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x3a8(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x400(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x458(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4b0(0x58)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x508(0x58)
	struct FNiagaraVariableAttributeBinding UVScaleBinding; // 0x560(0x58)
	struct FNiagaraVariableAttributeBinding PivotOffsetBinding; // 0x5b8(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x610(0x58)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x668(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x6c0(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x718(0x58)
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x770(0x10)
	struct FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x780(0x58)
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x7d8(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteRotationBinding; // 0x830(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteSizeBinding; // 0x888(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteFacingBinding; // 0x8e0(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding; // 0x938(0x58)
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0x990(0x58)
	struct FNiagaraVariableAttributeBinding PrevPivotOffsetBinding; // 0x9e8(0x58)
	char pad_A40[0x78]; // 0xa40(0x78)
};

// Class Niagara.NiagaraSystem
// Size: 0x4b8 (Inherited: 0x38)
struct UNiagaraSystem : UFXSystemAsset {
	bool bDumpDebugSystemInfo; // 0x38(0x01)
	bool bDumpDebugEmitterInfo; // 0x39(0x01)
	char pad_3A[0x1]; // 0x3a(0x01)
	bool bRequireCurrentFrameData; // 0x3b(0x01)
	char bFixedBounds : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct UNiagaraEffectType* EffectType; // 0x40(0x08)
	bool bOverrideScalabilitySettings; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x50(0x10)
	struct FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x60(0x10)
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles; // 0x70(0x10)
	struct TArray<struct UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0x80(0x10)
	struct UNiagaraScript* SystemSpawnScript; // 0x90(0x08)
	struct UNiagaraScript* SystemUpdateScript; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)
	struct FNiagaraSystemCompiledData SystemCompiledData; // 0xb0(0x230)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x2e0(0xc8)
	struct FBox FixedBounds; // 0x3a8(0x1c)
	bool bAutoDeactivate; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	float WarmupTime; // 0x3c8(0x04)
	int32_t WarmupTickCount; // 0x3cc(0x04)
	float WarmupTickDelta; // 0x3d0(0x04)
	bool bHasSystemScriptDIsWithPerInstanceData; // 0x3d4(0x01)
	bool bNeedsGPUContextInitForDataInterfaces; // 0x3d5(0x01)
	char pad_3D6[0x2]; // 0x3d6(0x02)
	struct TArray<struct FName> UserDINamesReadInSystemScripts; // 0x3d8(0x10)
	char pad_3E8[0xd0]; // 0x3e8(0xd0)
};

