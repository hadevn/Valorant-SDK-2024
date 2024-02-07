// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xf0 (Inherited: 0xe8)
struct UChaosDebugDrawComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xf0 (Inherited: 0xe8)
struct UChaosEventListenerComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x2a8 (Inherited: 0xf0)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	char pad_F0[0x110]; // 0xf0(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x200(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x250(0x50)
	char pad_2A0[0x8]; // 0x2a0(0x08)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x30 (Inherited: 0x30)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x66b2a70
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x30 (Inherited: 0x30)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x4d0 (Inherited: 0x3d8)
struct AChaosSolverActor : AActor {
	struct FChaosSolverConfiguration Properties; // 0x3d8(0x68)
	float TimeStepMultiplier; // 0x440(0x04)
	int32_t CollisionIterations; // 0x444(0x04)
	int32_t PushOutIterations; // 0x448(0x04)
	int32_t PushOutPairIterations; // 0x44c(0x04)
	float ClusterConnectionFactor; // 0x450(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x454(0x01)
	bool DoGenerateCollisionData; // 0x455(0x01)
	char pad_456[0x2]; // 0x456(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x458(0x10)
	bool DoGenerateBreakingData; // 0x468(0x01)
	char pad_469[0x3]; // 0x469(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x46c(0x10)
	bool DoGenerateTrailingData; // 0x47c(0x01)
	char pad_47D[0x3]; // 0x47d(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x480(0x10)
	float MassScale; // 0x490(0x04)
	bool bGenerateContactGraph; // 0x494(0x01)
	bool bHasFloor; // 0x495(0x01)
	char pad_496[0x2]; // 0x496(0x02)
	float FloorHeight; // 0x498(0x04)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x49c(0x03)
	char pad_49F[0x1]; // 0x49f(0x01)
	struct UBillboardComponent* SpriteComponent; // 0x4a0(0x08)
	char pad_4A8[0x18]; // 0x4a8(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x4c0(0x08)
	char pad_4C8[0x8]; // 0x4c8(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // @ game+0x2979380
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|Native|Public|BlueprintCallable) // @ game+0x66b2b60
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x70 (Inherited: 0x48)
struct UChaosSolverSettings : UDeveloperSettings {
	char pad_48[0x8]; // 0x48(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x50(0x20)
};

