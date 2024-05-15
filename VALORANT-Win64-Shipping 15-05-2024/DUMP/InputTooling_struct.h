// Enum InputTooling.EAimToolingShotTrajectoryFlags
enum class EAimToolingShotTrajectoryFlags : uint8 {
	None = 0,
	IgnoreWeight = 1,
	EAimToolingShotTrajectoryFlags_MAX = 2
};

// Enum InputTooling.EAimToolingStrafeAssistCounterStrafeMode
enum class EAimToolingStrafeAssistCounterStrafeMode : uint8 {
	CounterMovementDirection = 0,
	CounterInputDirection = 1,
	CounterMatchingMovementInputDirection = 2,
	Count = 3,
	Invalid = 254,
	EAimToolingFeature_MAX = 255,
	EAimToolingStrafeAssistCounterStrafeMode_MAX = 256
};

// Enum InputTooling.EAimToolingStrafeAssistMode
enum class EAimToolingStrafeAssistMode : uint8 {
	AlwaysTowardsTarget = 0,
	ConditionalCounterStrafe = 1,
	AlwaysCounterStrafe = 2,
	Count = 3,
	Invalid = 254,
	EAimToolingFeature_MAX = 255,
	EAimToolingStrafeAssistMode_MAX = 256
};

// Enum InputTooling.EAimToolingTargetFrictionAimingScalarMode
enum class EAimToolingTargetFrictionAimingScalarMode : uint8 {
	ApplyBothScalars = 0,
	PreferTargetFriction = 1,
	PreferAimingScalar = 2,
	PreferHighestScalar = 3,
	Count = 4,
	Invalid = 254,
	EAimToolingFeature_MAX = 255,
	EAimToolingTargetFrictionAimingScalarMode_MAX = 256
};

// Enum InputTooling.EAimToolingBendingMode
enum class EAimToolingBendingMode : uint8 {
	SpatialBending = 0,
	TemporalBending = 1,
	EAimToolingBendingMode_MAX = 2
};

// Enum InputTooling.EAimToolingTargetType
enum class EAimToolingTargetType : uint8 {
	Player = 0,
	GenericShootable = 1,
	LightStatic = 2,
	HeavyStatic = 3,
	LightMoving = 4,
	HeavyMoving = 5,
	Count = 6,
	Invalid = 254,
	EAimToolingFeature_MAX = 255,
	EAimToolingTargetType_MAX = 256
};

// Enum InputTooling.EAimToolingCurve
enum class EAimToolingCurve : uint8 {
	REPLACE_WITH_NEW_ENTRY = 0,
	Count = 1,
	Invalid = 254,
	EAimToolingCurve_MAX = 255
};

// Enum InputTooling.EAimToolingFeature
enum class EAimToolingFeature : uint8 {
	TargetManagement = 0,
	PullToCenter = 1,
	Bending = 2,
	AimAccelerationDelay = 3,
	Deceleration = 4,
	FrameOfReference = 5,
	StrafeAssist = 6,
	TargetFriction = 7,
	Count = 8,
	Invalid = 254,
	EAimToolingFeature_MAX = 255
};

// Enum InputTooling.EMovementToolingFeature
enum class EMovementToolingFeature : uint8 {
	ShotRooting = 0,
	FastStrafing = 1,
	FastRelease = 2,
	Count = 3,
	Invalid = 254,
	EMovementToolingFeature_MAX = 255
};

// ScriptStruct InputTooling.AimToolingTelemetryData
// Size: 0x68 (Inherited: 0x00)
struct FAimToolingTelemetryData {
	struct FVector2D StrafeAssist; // 0x00(0x08)
	struct FVector2D TargetFriction; // 0x08(0x08)
	struct FVector2D PullToCenter; // 0x10(0x08)
	struct FVector2D FrameOfReference; // 0x18(0x08)
	struct FVector2D Deceleration; // 0x20(0x08)
	struct FVector2D LookInputVector; // 0x28(0x08)
	struct FVector2D MovementInputVector; // 0x30(0x08)
	struct FVector2D FinalLookInputDelta; // 0x38(0x08)
	int32_t ActiveAimToolingFeatures; // 0x40(0x04)
	float DistanceToTarget; // 0x44(0x04)
	struct FString WeaponTuningTag; // 0x48(0x10)
	struct FString Target; // 0x58(0x10)
};

// ScriptStruct InputTooling.AimToolingTemporalBendingWeaponTuningSet
// Size: 0x18 (Inherited: 0x00)
struct FAimToolingTemporalBendingWeaponTuningSet {
	bool bTemporalBendingForWeapon; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float PrecisionFiringErrorCutoff; // 0x04(0x04)
	float PrecisionMovementErrorCutoff; // 0x08(0x04)
	float PrecisionRecoilPitchCutoff; // 0x0c(0x04)
	float PrecisionRecoilYawCutoff; // 0x10(0x04)
	float OffTargetTimeCutoff; // 0x14(0x04)
};

// ScriptStruct InputTooling.AimToolingSpatialBendingWeaponTuningSet
// Size: 0x08 (Inherited: 0x00)
struct FAimToolingSpatialBendingWeaponTuningSet {
	float SpatialBendingExponent; // 0x00(0x04)
	float SpatialBendingMovePenaltyScale; // 0x04(0x04)
};

// ScriptStruct InputTooling.AimToolingSpatialBendingFeatureTuningSet
// Size: 0x18 (Inherited: 0x00)
struct FAimToolingSpatialBendingFeatureTuningSet {
	float SpatialBendingInnerRadiusCm; // 0x00(0x04)
	float SpatialBendingOuterRadiusCm; // 0x04(0x04)
	float SpatialBendingMaxAngleDegs; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* SpatialBendingEfficacyScaleForErrorCurve; // 0x10(0x08)
};

// ScriptStruct InputTooling.AimToolingBendingSharedTuningSet
// Size: 0x01 (Inherited: 0x00)
struct FAimToolingBendingSharedTuningSet {
	enum class EAimToolingBendingMode BendingMode; // 0x00(0x01)
};

// ScriptStruct InputTooling.AimToolingPullToCenterWeaponTuningSet
// Size: 0x10 (Inherited: 0x00)
struct FAimToolingPullToCenterWeaponTuningSet {
	struct UCurveFloat* PullToCenterWorldDistFromTargetCurve; // 0x00(0x08)
	struct UCurveFloat* PullToCenterStickDeflectionCurve; // 0x08(0x08)
};

// ScriptStruct InputTooling.AimToolingPullToCenterFeatureTuningSet
// Size: 0x68 (Inherited: 0x00)
struct FAimToolingPullToCenterFeatureTuningSet {
	bool AimToolingPullToCenterNewImplementation; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* AimToolingPullToCenterAngleToTargetCurve; // 0x08(0x08)
	struct UCurveFloat* AimToolingPullToCenterOverTargetPctCurve; // 0x10(0x08)
	float AimToolingPullToCenterRadialTowardExponent; // 0x18(0x04)
	float AimToolingPullToCenterRadialTowardScale; // 0x1c(0x04)
	float AimToolingPullToCenterRadialAwayExponent; // 0x20(0x04)
	float AimToolingPullToCenterRadialAwayScale; // 0x24(0x04)
	float AimToolingPullToCenterTangentialTowardExponent; // 0x28(0x04)
	float AimToolingPullToCenterTangentialTowardScale; // 0x2c(0x04)
	float AimToolingPullToCenterTangentialAwayExponent; // 0x30(0x04)
	float AimToolingPullToCenterTangentialAwayScale; // 0x34(0x04)
	float AimToolingPullToCenterMovePenaltyScale; // 0x38(0x04)
	float AimToolingPullToCenterRecoilEfficacyScale; // 0x3c(0x04)
	float AimToolingPullToCenterAdjustmentClampThreshold; // 0x40(0x04)
	float AimToolingPullToCenterAdjustmentClampScale; // 0x44(0x04)
	struct UCurveFloat* PullToCenterRadialTowardCurve; // 0x48(0x08)
	struct UCurveFloat* PullToCenterRadialAwayCurve; // 0x50(0x08)
	struct UCurveFloat* PullToCenterTangentialTowardCurve; // 0x58(0x08)
	struct UCurveFloat* PullToCenterTangentialAwayCurve; // 0x60(0x08)
};

// ScriptStruct InputTooling.AimToolingPullToCenterSharedTuningSet
// Size: 0x04 (Inherited: 0x00)
struct FAimToolingPullToCenterSharedTuningSet {
	float AimToolingPullToCenterInAirScale; // 0x00(0x04)
};

// ScriptStruct InputTooling.AimToolingFrameOfReferenceWeaponTuningSet
// Size: 0x30 (Inherited: 0x00)
struct FAimToolingFrameOfReferenceWeaponTuningSet {
	struct FAimToolingFrameOfReferenceWeaponTuningCurves TowardTargetCurves; // 0x00(0x18)
	struct FAimToolingFrameOfReferenceWeaponTuningCurves AwayFromTargetCurves; // 0x18(0x18)
};

// ScriptStruct InputTooling.AimToolingFrameOfReferenceWeaponTuningCurves
// Size: 0x18 (Inherited: 0x00)
struct FAimToolingFrameOfReferenceWeaponTuningCurves {
	struct UCurveFloat* FrameOfReferenceWorldDistFromTargetCurve; // 0x00(0x08)
	struct UCurveFloat* FrameOfReferenceStickDeflectionCurve; // 0x08(0x08)
	struct UCurveFloat* FrameOfReferenceOverTargetPctCurve; // 0x10(0x08)
};

// ScriptStruct InputTooling.AimToolingFrameOfReferenceFeatureTuningSet
// Size: 0x28 (Inherited: 0x00)
struct FAimToolingFrameOfReferenceFeatureTuningSet {
	float AimToolingFrameOfReferenceMinOverTargetPct; // 0x00(0x04)
	float AimToolingFrameOfReferenceMovementDeltaScale; // 0x04(0x04)
	struct FVector2D AimToolingFrameOfReferenceScale; // 0x08(0x08)
	struct FVector2D AimToolingFrameOfReferenceMaxDelta; // 0x10(0x08)
	float AimToolingFrameOfReferenceHighVelocityStrengthMinBias; // 0x18(0x04)
	float AimToolingFrameOfReferenceHighVelocityStrengthMaxBias; // 0x1c(0x04)
	struct UCurveFloat* AimToolingFrameOfReferenceHighVelocityStrengthCurve; // 0x20(0x08)
};

// ScriptStruct InputTooling.AimToolingFrameOfReferenceSharedTuningSet
// Size: 0x0c (Inherited: 0x00)
struct FAimToolingFrameOfReferenceSharedTuningSet {
	float AimToolingFrameOfReferenceGlobalScale; // 0x00(0x04)
	float AimToolingFrameOfReferenceVisionBlockedScale; // 0x04(0x04)
	float AimToolingFrameOfReferenceInAirScale; // 0x08(0x04)
};

// ScriptStruct InputTooling.AimToolingStrafeAssistWeaponTuningSet
// Size: 0x38 (Inherited: 0x00)
struct FAimToolingStrafeAssistWeaponTuningSet {
	struct FAimToolingStrafeAssistWeaponTuningCurves TowardTargetCurves; // 0x00(0x18)
	struct FAimToolingStrafeAssistWeaponTuningCurves AwayFromTargetCurves; // 0x18(0x18)
	float AimToolingStrafeAssistNewTargetDelaySeconds; // 0x30(0x04)
	float AimToolingStrafeAssistNewTargetRampUpSeconds; // 0x34(0x04)
};

// ScriptStruct InputTooling.AimToolingStrafeAssistWeaponTuningCurves
// Size: 0x18 (Inherited: 0x00)
struct FAimToolingStrafeAssistWeaponTuningCurves {
	struct UCurveFloat* StrafeAssistOverTargetPctCurve; // 0x00(0x08)
	struct UCurveFloat* StrafeAssistWorldDistFromTargetCurve; // 0x08(0x08)
	struct UCurveFloat* StrafeAssistPlayerSpeedCurve; // 0x10(0x08)
};

// ScriptStruct InputTooling.AimToolingStrafeAssistFeatureTuningSet
// Size: 0x10 (Inherited: 0x00)
struct FAimToolingStrafeAssistFeatureTuningSet {
	float AimToolingStrafeAssistMovementDeltaScale; // 0x00(0x04)
	float AimToolingStrafeAssistMinimumMaxSpeedThreshold; // 0x04(0x04)
	float AimToolingStrafeAssistMinimumMaxSpeedOverride; // 0x08(0x04)
	enum class EAimToolingStrafeAssistMode AimToolingStrafeAssistMode; // 0x0c(0x01)
	enum class EAimToolingStrafeAssistCounterStrafeMode AimToolingStrafeAssistCounterStrafeMode; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct InputTooling.AimToolingStrafeAssistSharedTuningSet
// Size: 0x0c (Inherited: 0x00)
struct FAimToolingStrafeAssistSharedTuningSet {
	float AimToolingStrafeAssistGlobalScale; // 0x00(0x04)
	float AimToolingStrafeAssistVisionBlockedScale; // 0x04(0x04)
	float AimToolingStrafeAssistInAirScale; // 0x08(0x04)
};

// ScriptStruct InputTooling.AimToolingTargetFrictionWeaponTuningSet
// Size: 0x30 (Inherited: 0x00)
struct FAimToolingTargetFrictionWeaponTuningSet {
	struct FAimToolingTargetFrictionWeaponTuningCurves TowardTargetCurves; // 0x00(0x18)
	struct FAimToolingTargetFrictionWeaponTuningCurves AwayFromTargetCurves; // 0x18(0x18)
};

// ScriptStruct InputTooling.AimToolingTargetFrictionWeaponTuningCurves
// Size: 0x18 (Inherited: 0x00)
struct FAimToolingTargetFrictionWeaponTuningCurves {
	struct UCurveFloat* TargetFrictionOverTargetPctCurve; // 0x00(0x08)
	struct UCurveFloat* TargetFrictionWorldDistFromTargetCurve; // 0x08(0x08)
	struct UCurveFloat* TargetFrictionStickDeflectionCurve; // 0x10(0x08)
};

// ScriptStruct InputTooling.AimToolingTargetFrictionFeatureTuningSet
// Size: 0x08 (Inherited: 0x00)
struct FAimToolingTargetFrictionFeatureTuningSet {
	bool bAimToolingTargetFrictionOverrideGlobalScale; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AimToolingTargetFrictionGlobalScaleOverride; // 0x04(0x04)
};

// ScriptStruct InputTooling.AimToolingTargetFrictionSharedTuningSet
// Size: 0x10 (Inherited: 0x00)
struct FAimToolingTargetFrictionSharedTuningSet {
	float AimToolingTargetFrictionGlobalScale; // 0x00(0x04)
	float AimToolingTargetFrictionVisionBlockedScale; // 0x04(0x04)
	float AimToolingTargetFrictionInAirScale; // 0x08(0x04)
	enum class EAimToolingTargetFrictionAimingScalarMode TargetFrictionPrecisionAimingScalarMode; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct InputTooling.AimToolingDecelerationSharedTuningSet
// Size: 0x1c (Inherited: 0x00)
struct FAimToolingDecelerationSharedTuningSet {
	float DecelerationTime; // 0x00(0x04)
	float DecelerationAverageWindow; // 0x04(0x04)
	float DecelerationExponent; // 0x08(0x04)
	float DecelerationHalfAngle; // 0x0c(0x04)
	float DecelerationMaxShift; // 0x10(0x04)
	float DecelerationStartThreshold; // 0x14(0x04)
	float DecelerationVisionBlockedScale; // 0x18(0x04)
};

// ScriptStruct InputTooling.AimToolingAimAccelerationDelaySharedTuningSet
// Size: 0x08 (Inherited: 0x00)
struct FAimToolingAimAccelerationDelaySharedTuningSet {
	float AimAccelerationDelayScaleDecayRate; // 0x00(0x04)
	float AimAccelerationDelayMinOverTargetPct; // 0x04(0x04)
};

// ScriptStruct InputTooling.AimToolingMoveErrorSharedTuningSet
// Size: 0x08 (Inherited: 0x00)
struct FAimToolingMoveErrorSharedTuningSet {
	float MoveErrorMax; // 0x00(0x04)
	float MoveErrorExponent; // 0x04(0x04)
};

// ScriptStruct InputTooling.AimToolingTargetManagementWeaponTuningSet
// Size: 0x08 (Inherited: 0x00)
struct FAimToolingTargetManagementWeaponTuningSet {
	float TargetManagementMaxQueryDist; // 0x00(0x04)
	float TargetManagementMinQueryDist; // 0x04(0x04)
};

// ScriptStruct InputTooling.AimToolingTargetManagementSharedTuningSet
// Size: 0xa0 (Inherited: 0x00)
struct FAimToolingTargetManagementSharedTuningSet {
	struct UCurveFloat* TargetManagementAssistRadiusXCurve; // 0x00(0x08)
	struct UCurveFloat* TargetManagementAssistRadiusYCurve; // 0x08(0x08)
	struct UCurveFloat* TargetManagementAssistRadiusXRecoilScaleCurve; // 0x10(0x08)
	struct UCurveFloat* TargetManagementAssistRadiusYRecoilScaleCurve; // 0x18(0x08)
	float TargetManagementMinBiasDistance; // 0x20(0x04)
	float TargetManagementMaxBiasDistance; // 0x24(0x04)
	float TargetManagementOverTargetWeight; // 0x28(0x04)
	bool bIsTargetManagementOverTargetNormalized; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float TargetManagementDistanceWeight; // 0x30(0x04)
	bool bIsTargetManagementDistanceNormalized; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float TargetManagementPreviousTargetWeight; // 0x38(0x04)
	float TargetManagementPreviousTargetDecay; // 0x3c(0x04)
	struct TMap<enum class EAimToolingTargetType, float> TargetManagementShootableTargetScoreModifiers; // 0x40(0x50)
	float AimToolingCloseRangeTuningDistance; // 0x90(0x04)
	bool ENGINEERING_ONLY_CHECK_TO_MODIFY_VALUES_BELOW; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct UCurveFloat* TargetManagementQueryAngleCurve; // 0x98(0x08)
};

// ScriptStruct InputTooling.AimToolingNewTargetRampUpSharedTuningSet
// Size: 0x0c (Inherited: 0x00)
struct FAimToolingNewTargetRampUpSharedTuningSet {
	bool IsNewTargetRampUpEnabled; // 0x00(0x01)
	bool NewTargetRampUpDeceleration; // 0x01(0x01)
	bool NewTargetRampUpFrameOfReference; // 0x02(0x01)
	bool NewTargetRampUpStrafeAssist; // 0x03(0x01)
	bool NewTargetRampUpTargetFriction; // 0x04(0x01)
	bool NewTargetRampUpPullToCenter; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float NewTargetRampUpTime; // 0x08(0x04)
};

// ScriptStruct InputTooling.AimToolingNoTargetFalloffSharedTuningSet
// Size: 0x0c (Inherited: 0x00)
struct FAimToolingNoTargetFalloffSharedTuningSet {
	bool IsNoTargetFalloffEnabled; // 0x00(0x01)
	bool NoTargetFalloffDeceleration; // 0x01(0x01)
	bool NoTargetFalloffFrameOfReference; // 0x02(0x01)
	bool NoTargetFalloffStrafeAssist; // 0x03(0x01)
	bool NoTargetFalloffTargetFriction; // 0x04(0x01)
	bool NoTargetFalloffPullToCenter; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float NoTargetFalloffTime; // 0x08(0x04)
};

// ScriptStruct InputTooling.AimToolingDecelerationState
// Size: 0x40 (Inherited: 0x00)
struct FAimToolingDecelerationState {
	struct TArray<struct FAimToolingDecelerationEntry> InputEntries; // 0x00(0x10)
	struct FVector2D AverageInput; // 0x10(0x08)
	float TimeTotal; // 0x18(0x04)
	bool bIsDecelerating; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float DecelerationAmount; // 0x20(0x04)
	struct FVector2D DecelerationStartDirection; // 0x24(0x08)
	struct FVector2D DecelerationLastKnownDirection; // 0x2c(0x08)
	float DecelerationStartSize; // 0x34(0x04)
	struct FVector2D ToTargetStartVector; // 0x38(0x08)
};

// ScriptStruct InputTooling.AimToolingDecelerationEntry
// Size: 0x0c (Inherited: 0x00)
struct FAimToolingDecelerationEntry {
	struct FVector2D Input; // 0x00(0x08)
	float Duration; // 0x08(0x04)
};

// ScriptStruct InputTooling.AimToolingAxis
// Size: 0x24 (Inherited: 0x00)
struct FAimToolingAxis {
	struct FName TopBone; // 0x00(0x0c)
	struct FName MiddleBone; // 0x0c(0x0c)
	struct FName BottomBone; // 0x18(0x0c)
};

// ScriptStruct InputTooling.AimToolingTargetPointDef
// Size: 0x14 (Inherited: 0x00)
struct FAimToolingTargetPointDef {
	struct FName TargetPointName; // 0x00(0x0c)
	float Weight; // 0x0c(0x04)
	float RadiusScale; // 0x10(0x04)
};

// ScriptStruct InputTooling.AimToolingBoneDef
// Size: 0x14 (Inherited: 0x00)
struct FAimToolingBoneDef {
	struct FName Bone; // 0x00(0x0c)
	float Weight; // 0x0c(0x04)
	float RadiusScale; // 0x10(0x04)
};

// ScriptStruct InputTooling.AimToolingQueriedTarget
// Size: 0x10 (Inherited: 0x00)
struct FAimToolingQueriedTarget {
	struct UAimToolingTargetComponentBase* TargetComponent; // 0x00(0x08)
	bool bInDirectVision; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct InputTooling.AimToolingTarget
// Size: 0x28 (Inherited: 0x00)
struct FAimToolingTarget {
	struct UAimToolingTargetComponentBase* TargetComponent; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	float OverTargetPercent; // 0x0c(0x04)
	float Dist; // 0x10(0x04)
	float DistPercent; // 0x14(0x04)
	struct FVector AssistLocation; // 0x18(0x0c)
	bool bInDirectVision; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct InputTooling.AimToolingPullToCenterResult
// Size: 0x24 (Inherited: 0x00)
struct FAimToolingPullToCenterResult {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct InputTooling.AimToolingCachedProjectionData
// Size: 0x120 (Inherited: 0x00)
struct FAimToolingCachedProjectionData {
	struct APlayerController* OwningPC; // 0x00(0x08)
	char pad_8[0x118]; // 0x08(0x118)
};

// ScriptStruct InputTooling.AimToolingModifiers
// Size: 0x28 (Inherited: 0x00)
struct FAimToolingModifiers {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct InputTooling.MovementToolingFastReleaseSharedTuningSet
// Size: 0x08 (Inherited: 0x00)
struct FMovementToolingFastReleaseSharedTuningSet {
	float FastReleasePower; // 0x00(0x04)
	float FastReleaseMinSpeed; // 0x04(0x04)
};

// ScriptStruct InputTooling.MovementToolingFastStrafingSharedTuningSet
// Size: 0x28 (Inherited: 0x00)
struct FMovementToolingFastStrafingSharedTuningSet {
	float FastStrafingStickDeltaInitialThreshold; // 0x00(0x04)
	float FastStrafingStickDeltaReleaseThreshold; // 0x04(0x04)
	float FastStrafingYInitialThreshold; // 0x08(0x04)
	float FastStrafingYReleaseThreshold; // 0x0c(0x04)
	float FastStrafingHorizontalToTotalSpeedInitialThreshold; // 0x10(0x04)
	float FastStrafingCounterStrafeThreshold; // 0x14(0x04)
	float FastStrafingCounterStrafeMaxSpeed; // 0x18(0x04)
	float FastStrafingCounterStrafeHoldSpeed; // 0x1c(0x04)
	float InitialFastStrafingStickDeltaThreshold; // 0x20(0x04)
	float InitialFastStrafingPlayerSpeedCutoff; // 0x24(0x04)
};

// ScriptStruct InputTooling.MovementToolingShotRootingSharedTuningSet
// Size: 0x10 (Inherited: 0x00)
struct FMovementToolingShotRootingSharedTuningSet {
	float ShotRootingDeadzone; // 0x00(0x04)
	float ShotRootingDuration; // 0x04(0x04)
	float ShotRootingFalloffSeconds; // 0x08(0x04)
	float ShotRootingFalloffExponent; // 0x0c(0x04)
};

