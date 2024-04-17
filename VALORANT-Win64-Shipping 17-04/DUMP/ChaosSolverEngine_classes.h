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

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x68db190
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x30 (Inherited: 0x30)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x4b0 (Inherited: 0x3b8)
struct AChaosSolverActor : AActor {
	struct FChaosSolverConfiguration Properties; // 0x3b8(0x68)
	float TimeStepMultiplier; // 0x420(0x04)
	int32_t CollisionIterations; // 0x424(0x04)
	int32_t PushOutIterations; // 0x428(0x04)
	int32_t PushOutPairIterations; // 0x42c(0x04)
	float ClusterConnectionFactor; // 0x430(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x434(0x01)
	bool DoGenerateCollisionData; // 0x435(0x01)
	char pad_436[0x2]; // 0x436(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x438(0x10)
	bool DoGenerateBreakingData; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x44c(0x10)
	bool DoGenerateTrailingData; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x460(0x10)
	float MassScale; // 0x470(0x04)
	bool bGenerateContactGraph; // 0x474(0x01)
	bool bHasFloor; // 0x475(0x01)
	char pad_476[0x2]; // 0x476(0x02)
	float FloorHeight; // 0x478(0x04)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x47c(0x03)
	char pad_47F[0x1]; // 0x47f(0x01)
	struct UBillboardComponent* SpriteComponent; // 0x480(0x08)
	char pad_488[0x18]; // 0x488(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x4a0(0x08)
	char pad_4A8[0x8]; // 0x4a8(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // @ game+0x2a99a10
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|Native|Public|BlueprintCallable) // @ game+0x68db280
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x70 (Inherited: 0x48)
struct UChaosSolverSettings : UDeveloperSettings {
	char pad_48[0x8]; // 0x48(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x50(0x20)
};

