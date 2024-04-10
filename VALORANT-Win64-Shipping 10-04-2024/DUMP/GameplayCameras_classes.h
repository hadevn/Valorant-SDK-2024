// Class GameplayCameras.TestCameraShake
// Size: 0xb0 (Inherited: 0xb0)
struct UTestCameraShake : UCameraShakeBase {
};

// Class GameplayCameras.SimpleCameraShakePattern
// Size: 0x40 (Inherited: 0x30)
struct USimpleCameraShakePattern : UCameraShakePattern {
	float Duration; // 0x30(0x04)
	float BlendInTime; // 0x34(0x04)
	float BlendOutTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class GameplayCameras.ConstantCameraShakePattern
// Size: 0x58 (Inherited: 0x40)
struct UConstantCameraShakePattern : USimpleCameraShakePattern {
	struct FVector LocationOffset; // 0x40(0x0c)
	struct FRotator RotationOffset; // 0x4c(0x0c)
};

// Class GameplayCameras.CompositeCameraShakePattern
// Size: 0x50 (Inherited: 0x30)
struct UCompositeCameraShakePattern : UCameraShakePattern {
	struct TArray<struct UCameraShakePattern*> ChildPatterns; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
};

// Class GameplayCameras.DefaultCameraShakeBase
// Size: 0xb0 (Inherited: 0xb0)
struct UDefaultCameraShakeBase : UCameraShakeBase {
};

// Class GameplayCameras.MatineeCameraShake
// Size: 0x1b0 (Inherited: 0xb0)
struct UMatineeCameraShake : UCameraShakeBase {
	float OscillationDuration; // 0xa8(0x04)
	float OscillationBlendInTime; // 0xac(0x04)
	float OscillationBlendOutTime; // 0xb0(0x04)
	struct FROscillator RotOscillation; // 0xb4(0x24)
	struct FVOscillator LocOscillation; // 0xd8(0x24)
	struct FFOscillator FOVOscillation; // 0xfc(0x0c)
	float AnimPlayRate; // 0x108(0x04)
	float AnimScale; // 0x10c(0x04)
	float AnimBlendInTime; // 0x110(0x04)
	float AnimBlendOutTime; // 0x114(0x04)
	float RandomAnimSegmentDuration; // 0x118(0x04)
	struct UCameraAnim* Anim; // 0x120(0x08)
	struct UCameraAnimationSequence* AnimSequence; // 0x128(0x08)
	char bRandomAnimSegment : 1; // 0x130(0x01)
	float OscillatorTimeRemaining; // 0x134(0x04)
	struct UCameraAnimInst* AnimInst; // 0x138(0x08)
	char pad_140_1 : 7; // 0x140(0x01)
	char pad_141[0x3f]; // 0x141(0x3f)
	struct USequenceCameraShakePattern* SequenceShakePattern; // 0x180(0x08)
	char pad_188[0x28]; // 0x188(0x28)

	struct UMatineeCameraShake* StartMatineeCameraShakeFromSource(struct APlayerCameraManager* PlayerCameraManager, struct UMatineeCameraShake* ShakeClass, struct UCameraShakeSourceComponent* SourceComponent, float Scale, enum class ECameraShakePlaySpace Playspace, struct FRotator UserPlaySpaceRot); // Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x2b36580
	struct UMatineeCameraShake* StartMatineeCameraShake(struct APlayerCameraManager* PlayerCameraManager, struct UMatineeCameraShake* ShakeClass, float Scale, enum class ECameraShakePlaySpace Playspace, struct FRotator UserPlaySpaceRot); // Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x2b363b0
	void ReceiveStopShake(bool bImmediately); // Function GameplayCameras.MatineeCameraShake.ReceiveStopShake // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void ReceivePlayShake(float Scale); // Function GameplayCameras.MatineeCameraShake.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	bool ReceiveIsFinished(); // Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x2b36370
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo& ModifiedPOV); // Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x41999b0
};

// Class GameplayCameras.MatineeCameraShakePattern
// Size: 0x30 (Inherited: 0x30)
struct UMatineeCameraShakePattern : UCameraShakePattern {
};

// Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneMatineeCameraShakeEvaluator : UMovieSceneCameraShakeEvaluator {
};

// Class GameplayCameras.MatineeCameraShakeFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UMatineeCameraShakeFunctionLibrary : UBlueprintFunctionLibrary {

	struct UMatineeCameraShake* Conv_MatineeCameraShake(struct UCameraShakeBase* CameraShake); // Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2b362f0
};

// Class GameplayCameras.PerlinNoiseCameraShakePattern
// Size: 0xc0 (Inherited: 0x40)
struct UPerlinNoiseCameraShakePattern : USimpleCameraShakePattern {
	float LocationAmplitudeMultiplier; // 0x40(0x04)
	float LocationFrequencyMultiplier; // 0x44(0x04)
	struct FPerlinNoiseShaker X; // 0x48(0x08)
	struct FPerlinNoiseShaker Y; // 0x50(0x08)
	struct FPerlinNoiseShaker Z; // 0x58(0x08)
	float RotationAmplitudeMultiplier; // 0x60(0x04)
	float RotationFrequencyMultiplier; // 0x64(0x04)
	struct FPerlinNoiseShaker Pitch; // 0x68(0x08)
	struct FPerlinNoiseShaker Yaw; // 0x70(0x08)
	struct FPerlinNoiseShaker Roll; // 0x78(0x08)
	struct FPerlinNoiseShaker FOV; // 0x80(0x08)
	char pad_88[0x38]; // 0x88(0x38)
};

// Class GameplayCameras.WaveOscillatorCameraShakePattern
// Size: 0xe0 (Inherited: 0x40)
struct UWaveOscillatorCameraShakePattern : USimpleCameraShakePattern {
	float LocationAmplitudeMultiplier; // 0x40(0x04)
	float LocationFrequencyMultiplier; // 0x44(0x04)
	struct FWaveOscillator X; // 0x48(0x0c)
	struct FWaveOscillator Y; // 0x54(0x0c)
	struct FWaveOscillator Z; // 0x60(0x0c)
	float RotationAmplitudeMultiplier; // 0x6c(0x04)
	float RotationFrequencyMultiplier; // 0x70(0x04)
	struct FWaveOscillator Pitch; // 0x74(0x0c)
	struct FWaveOscillator Yaw; // 0x80(0x0c)
	struct FWaveOscillator Roll; // 0x8c(0x0c)
	struct FWaveOscillator FOV; // 0x98(0x0c)
	char pad_A4[0x3c]; // 0xa4(0x3c)
};

