// Class CableComponent.CableActor
// Size: 0x3c0 (Inherited: 0x3b8)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x3b8(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x640 (Inherited: 0x590)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x590(0x01)
	bool bAttachEnd; // 0x591(0x01)
	char pad_592[0x6]; // 0x592(0x06)
	struct FComponentReference AttachEndTo; // 0x598(0x30)
	struct FName AttachEndToSocketName; // 0x5c8(0x0c)
	struct FVector EndLocation; // 0x5d4(0x0c)
	float CableLength; // 0x5e0(0x04)
	int32_t NumSegments; // 0x5e4(0x04)
	float SubstepTime; // 0x5e8(0x04)
	int32_t SolverIterations; // 0x5ec(0x04)
	bool bEnableStiffness; // 0x5f0(0x01)
	bool bUseSubstepping; // 0x5f1(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0x5f2(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x5f3(0x01)
	bool bEnableCollision; // 0x5f4(0x01)
	char pad_5F5[0x3]; // 0x5f5(0x03)
	float CollisionFriction; // 0x5f8(0x04)
	struct FVector CableForce; // 0x5fc(0x0c)
	float CableGravityScale; // 0x608(0x04)
	float CableWidth; // 0x60c(0x04)
	int32_t NumSides; // 0x610(0x04)
	float TileMaterial; // 0x614(0x04)
	char pad_618[0x28]; // 0x618(0x28)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x2d60ad0
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo // (Final|Native|Public|BlueprintCallable) // @ game+0x2d60990
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2d608e0
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2d608b0
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2d60880
};

