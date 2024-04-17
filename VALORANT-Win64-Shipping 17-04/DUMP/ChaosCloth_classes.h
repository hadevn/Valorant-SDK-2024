// Class ChaosCloth.ChaosClothConfig
// Size: 0xd0 (Inherited: 0x30)
struct UChaosClothConfig : UClothConfigCommon {
	enum class EClothMassMode MassMode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float UniformMass; // 0x34(0x04)
	float TotalMass; // 0x38(0x04)
	float Density; // 0x3c(0x04)
	float MinPerParticleMass; // 0x40(0x04)
	float EdgeStiffness; // 0x44(0x04)
	float BendingStiffness; // 0x48(0x04)
	bool bUseBendingElements; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float AreaStiffness; // 0x50(0x04)
	float VolumeStiffness; // 0x54(0x04)
	struct FChaosClothWeightedValue TetherStiffness; // 0x58(0x08)
	float LimitScale; // 0x60(0x04)
	bool bUseGeodesicDistance; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float ShapeTargetStiffness; // 0x68(0x04)
	float CollisionThickness; // 0x6c(0x04)
	float FrictionCoefficient; // 0x70(0x04)
	bool bUseCCD; // 0x74(0x01)
	bool bUseSelfCollisions; // 0x75(0x01)
	char pad_76[0x2]; // 0x76(0x02)
	float SelfCollisionThickness; // 0x78(0x04)
	bool bUseLegacyBackstop; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float DampingCoefficient; // 0x80(0x04)
	bool bUsePointBasedWindModel; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float DragCoefficient; // 0x88(0x04)
	float LiftCoefficient; // 0x8c(0x04)
	bool bUseGravityOverride; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float GravityScale; // 0x94(0x04)
	struct FVector Gravity; // 0x98(0x0c)
	struct FChaosClothWeightedValue AnimDriveStiffness; // 0xa4(0x08)
	struct FChaosClothWeightedValue AnimDriveDamping; // 0xac(0x08)
	struct FVector LinearVelocityScale; // 0xb4(0x0c)
	float AngularVelocityScale; // 0xc0(0x04)
	float FictitiousAngularScale; // 0xc4(0x04)
	bool bUseTetrahedralConstraints; // 0xc8(0x01)
	bool bUseThinShellVolumeConstraints; // 0xc9(0x01)
	bool bUseContinuousCollisionDetection; // 0xca(0x01)
	char pad_CB[0x5]; // 0xcb(0x05)
};

// Class ChaosCloth.ChaosClothSharedSimConfig
// Size: 0x40 (Inherited: 0x30)
struct UChaosClothSharedSimConfig : UClothSharedConfigCommon {
	int32_t IterationCount; // 0x30(0x04)
	int32_t SubdivisionCount; // 0x34(0x04)
	bool bUseLocalSpaceSimulation; // 0x38(0x01)
	bool bUseXPBDConstraints; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// Class ChaosCloth.ChaosClothingSimulationFactory
// Size: 0x30 (Inherited: 0x30)
struct UChaosClothingSimulationFactory : UClothingSimulationFactory {
};

// Class ChaosCloth.ChaosClothingInteractor
// Size: 0x48 (Inherited: 0x38)
struct UChaosClothingInteractor : UClothingInteractor {
	char pad_38[0x10]; // 0x38(0x10)

	void SetVelocityScale(struct FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale); // Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2c44f90
	void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear // (Final|Native|Public|BlueprintCallable) // @ game+0x2c44e70
	void SetLongRangeAttachmentLinear(float TetherStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear // (Final|Native|Public|BlueprintCallable) // @ game+0x2c44df0
	void SetLongRangeAttachment(struct FVector2D TetherStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2c44d70
	void SetGravity(float GravityScale, bool bIsGravityOverridden, struct FVector GravityOverride); // Function ChaosCloth.ChaosClothingInteractor.SetGravity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2c44c40
	void SetDamping(float DampingCoefficient); // Function ChaosCloth.ChaosClothingInteractor.SetDamping // (Final|Native|Public|BlueprintCallable) // @ game+0x2c44bc0
	void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness); // Function ChaosCloth.ChaosClothingInteractor.SetCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x2c44a50
	void SetAnimDriveLinear(float AnimDriveStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear // (Final|Native|Public|BlueprintCallable) // @ game+0x2c449d0
	void SetAnimDrive(struct FVector2D AnimDriveStiffness, struct FVector2D AnimDriveDamping); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2c44910
	void SetAerodynamics(float DragCoefficient, float LiftCoefficient, struct FVector WindVelocity); // Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2c447f0
	void ResetAndTeleport(bool bReset, bool bTeleport); // Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport // (Final|Native|Public|BlueprintCallable) // @ game+0x2c44720
};

// Class ChaosCloth.ChaosClothingSimulationInteractor
// Size: 0xa8 (Inherited: 0x98)
struct UChaosClothingSimulationInteractor : UClothingSimulationInteractor {
	char pad_98[0x10]; // 0x98(0x10)
};

