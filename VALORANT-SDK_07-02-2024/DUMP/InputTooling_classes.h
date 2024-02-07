// Class InputTooling.AimToolingTracker
// Size: 0xf8 (Inherited: 0xe8)
struct UAimToolingTracker : UActorComponent {
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class InputTooling.BaseInputToolingComponent
// Size: 0xf0 (Inherited: 0xe8)
struct UBaseInputToolingComponent : UActorComponent {
	struct APlayerController* OwningPC; // 0xe8(0x08)
};

// Class InputTooling.AimToolingComponent
// Size: 0x8d0 (Inherited: 0xf0)
struct UAimToolingComponent : UBaseInputToolingComponent {
	char pad_F0[0x550]; // 0xf0(0x550)
	struct TArray<bool> FeaturesEnabledValues; // 0x640(0x10)
	struct TArray<float> FeatureConfigValues; // 0x650(0x10)
	struct TArray<struct UCurveFloat*> FeatureConfigCurves; // 0x660(0x10)
	char pad_670[0x10]; // 0x670(0x10)
	struct FAimToolingCachedProjectionData CachedProjectionData; // 0x680(0x120)
	struct FAimToolingDecelerationState DecelerationState; // 0x7a0(0x40)
	bool bAimToolingEnabled; // 0x7e0(0x01)
	char pad_7E1[0x3]; // 0x7e1(0x03)
	float CurrentAimAccelerationDelayScale; // 0x7e4(0x04)
	struct FVector2D GamepadPreviousWalkStickVector; // 0x7e8(0x08)
	struct TArray<struct FAimToolingTarget> Targets; // 0x7f0(0x10)
	struct FAimToolingTarget PreviousTarget; // 0x800(0x28)
	float PreviousTargetLostTime; // 0x828(0x04)
	float NewTargetAcquiredTime; // 0x82c(0x04)
	bool bCurrentlyOverTarget; // 0x830(0x01)
	char pad_831[0x3]; // 0x831(0x03)
	float LastOverTargetTimestamp; // 0x834(0x04)
	float CurrentOverTargetTimestamp; // 0x838(0x04)
	char pad_83C[0x4]; // 0x83c(0x04)
	struct TArray<struct FVector> CachedFiringLocations; // 0x840(0x10)
	struct TArray<struct FVector> CachedFiringDirections; // 0x850(0x10)
	int32_t FiringLocationAndDirectionCacheSize; // 0x860(0x04)
	char pad_864[0x6c]; // 0x864(0x6c)

	bool IsFeatureEnabled(enum class EAimToolingFeature Feature, struct UAimToolingTargetComponentBase* TargetComponent); // Function InputTooling.AimToolingComponent.IsFeatureEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67fe710
	bool IsAimToolingEnabled(); // Function InputTooling.AimToolingComponent.IsAimToolingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67fe6e0
};

// Class InputTooling.AimToolingControllerInterface
// Size: 0x30 (Inherited: 0x30)
struct UAimToolingControllerInterface : UInterface {
};

// Class InputTooling.AimToolingTargetComponentBase
// Size: 0x2e0 (Inherited: 0x290)
struct UAimToolingTargetComponentBase : USceneComponent {
	enum class EAimToolingTargetType TargetType; // 0x288(0x01)
	struct TArray<enum class EAimToolingFeature> DisabledFeatures; // 0x290(0x10)
	struct FString TuningOverrideTag; // 0x2a0(0x10)
	struct UCurveFloat* TargetAssistRadiusOverrideXCurve; // 0x2b0(0x08)
	struct UCurveFloat* TargetAssistRadiusOverrideYCurve; // 0x2b8(0x08)
	struct FString TuningOverrideTagADS; // 0x2c0(0x10)
	char TargetId; // 0x2d0(0x01)
	char pad_2D2[0xe]; // 0x2d2(0x0e)

	void EnableAimToolingFeature(enum class EAimToolingFeature AimToolingFeature); // Function InputTooling.AimToolingTargetComponentBase.EnableAimToolingFeature // (Final|Native|Public|BlueprintCallable) // @ game+0x67ff9b0
	void DisableAimToolingFeature(enum class EAimToolingFeature AimToolingFeature); // Function InputTooling.AimToolingTargetComponentBase.DisableAimToolingFeature // (Final|Native|Public|BlueprintCallable) // @ game+0x67ff930
};

// Class InputTooling.AimToolingPointsTargetComponent
// Size: 0x300 (Inherited: 0x2e0)
struct UAimToolingPointsTargetComponent : UAimToolingTargetComponentBase {
	struct FName CenterTargetPointName; // 0x2d8(0x0c)
	struct TArray<struct UActorComponent*> AimToolingTargetPoints; // 0x2e8(0x10)
	struct AActor* OwningActor; // 0x2f8(0x08)
};

// Class InputTooling.AimToolingSkeletalTargetComponent
// Size: 0x320 (Inherited: 0x2e0)
struct UAimToolingSkeletalTargetComponent : UAimToolingTargetComponentBase {
	struct TArray<struct FAimToolingBoneDef> AimToolingBones; // 0x2d8(0x10)
	struct FAimToolingAxis AimToolingAxis; // 0x2e8(0x24)
	char pad_314[0xc]; // 0x314(0x0c)
};

// Class InputTooling.AimToolingStatics
// Size: 0x30 (Inherited: 0x30)
struct UAimToolingStatics : UBlueprintFunctionLibrary {
};

// Class InputTooling.AimToolingTargetManager
// Size: 0x100 (Inherited: 0xe8)
struct UAimToolingTargetManager : UActorComponent {
	char LastUsedTargetID; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TArray<struct UAimToolingTargetComponentBase*> TrackedTargets; // 0xf0(0x10)
};

// Class InputTooling.AimToolingTargetPoint
// Size: 0x2a0 (Inherited: 0x290)
struct UAimToolingTargetPoint : USceneComponent {
	struct FAimToolingTargetPointDef TargetPoint; // 0x288(0x14)
};

// Class InputTooling.BaseInputToolingControllerInterface
// Size: 0x30 (Inherited: 0x30)
struct UBaseInputToolingControllerInterface : UInterface {
};

// Class InputTooling.MovementToolingComponent
// Size: 0x160 (Inherited: 0xf0)
struct UMovementToolingComponent : UBaseInputToolingComponent {
	struct TArray<bool> FeaturesEnabledValues; // 0xf0(0x10)
	struct TArray<float> FeatureConfigValues; // 0x100(0x10)
	bool bMovementToolingEnabled; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FVector2D FastStrafingPreviousInputVector; // 0x114(0x08)
	float FastStrafeDirection; // 0x11c(0x04)
	bool bInitialFastStrafingActive; // 0x120(0x01)
	char pad_121[0x3f]; // 0x121(0x3f)

	bool IsMovementToolingEnabled(); // Function InputTooling.MovementToolingComponent.IsMovementToolingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x399fe00
	bool IsFeatureEnabled(enum class EMovementToolingFeature Feature); // Function InputTooling.MovementToolingComponent.IsFeatureEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6807080
};

// Class InputTooling.MovementToolingControllerInterface
// Size: 0x30 (Inherited: 0x30)
struct UMovementToolingControllerInterface : UInterface {
};

// Class InputTooling.MovementToolingStatics
// Size: 0x30 (Inherited: 0x30)
struct UMovementToolingStatics : UBlueprintFunctionLibrary {
};

