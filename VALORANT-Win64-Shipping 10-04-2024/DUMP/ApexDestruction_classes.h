// Class ApexDestruction.DestructibleActor
// Size: 0x3f0 (Inherited: 0x3d8)
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x3d8(0x08)
	struct FMulticastInlineDelegate OnActorFracture; // 0x3e0(0x10)
};

// Class ApexDestruction.DestructibleComponent
// Size: 0x8a0 (Inherited: 0x7c0)
struct UDestructibleComponent : USkinnedMeshComponent {
	char pad_7C0[0x8]; // 0x7c0(0x08)
	char bFractureEffectOverride : 1; // 0x7c8(0x01)
	char pad_7C8_1 : 7; // 0x7c8(0x01)
	char pad_7C9[0x7]; // 0x7c9(0x07)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x7d0(0x10)
	bool bEnableHardSleeping; // 0x7e0(0x01)
	char pad_7E1[0x3]; // 0x7e1(0x03)
	float LargeChunkThreshold; // 0x7e4(0x04)
	char pad_7E8[0x10]; // 0x7e8(0x10)
	struct FMulticastInlineDelegate OnComponentFracture; // 0x7f8(0x10)
	char pad_808[0x98]; // 0x808(0x98)

	void SetDestructibleMesh(struct UDestructibleMesh* NewMesh); // Function ApexDestruction.DestructibleComponent.SetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1fd6ae0
	struct UDestructibleMesh* GetDestructibleMesh(); // Function ApexDestruction.DestructibleComponent.GetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1fd6ab0
	void ApplyRadiusDamage(float BaseDamage, struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1fd68d0
	void ApplyDamage(float DamageAmount, struct FVector& HitLocation, struct FVector& ImpulseDir, float ImpulseStrength); // Function ApexDestruction.DestructibleComponent.ApplyDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1fd6750
};

// Class ApexDestruction.DestructibleFractureSettings
// Size: 0xc0 (Inherited: 0x30)
struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; // 0x30(0x04)
	struct FFractureMaterial FractureMaterialDesc; // 0x34(0x24)
	int32_t RandomSeed; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FVector> VoronoiSites; // 0x60(0x10)
	int32_t OriginalSubmeshCount; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x78(0x10)
	struct TArray<struct FDestructibleChunkParameters> ChunkParameters; // 0x88(0x10)
	char pad_98[0x28]; // 0x98(0x28)
};

// Class ApexDestruction.DestructibleMesh
// Size: 0x450 (Inherited: 0x3b0)
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x3b0(0x88)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x438(0x10)
	char pad_448[0x8]; // 0x448(0x08)
};

