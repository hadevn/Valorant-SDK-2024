// Class DynamicVolume.DynamicVolumeBuilder
// Size: 0x30 (Inherited: 0x30)
struct UDynamicVolumeBuilder : UObject {
};

// Class DynamicVolume.DynamicVolumeComponent
// Size: 0x350 (Inherited: 0x290)
struct UDynamicVolumeComponent : USceneComponent {
	struct UPrimitiveComponent* VolumeMaxExtentShape; // 0x288(0x08)
	float VolumeResolution; // 0x290(0x04)
	double BuilderTimeLimitPerTick; // 0x298(0x08)
	double OverlapTimeLimitPerTick; // 0x2a0(0x08)
	bool bAxisAligned; // 0x2a8(0x01)
	float DebugDrawFadeTime; // 0x2ac(0x04)
	struct FMulticastInlineDelegate OnVolumeInitialized; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnVolumeFinishedBuilding; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnActorsBeginOverlap; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnActorsEndOverlap; // 0x2e0(0x10)
	char pad_2F1[0x5f]; // 0x2f1(0x5f)

	void SetCollisionEnabled(enum class ECollisionEnabled NewType); // Function DynamicVolume.DynamicVolumeComponent.SetCollisionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x2bbb1e0
	void OnBoundingShapeEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DynamicVolume.DynamicVolumeComponent.OnBoundingShapeEndOverlap // (Final|Native|Private) // @ game+0x2bbb080
	void OnBoundingShapeBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DynamicVolume.DynamicVolumeComponent.OnBoundingShapeBeginOverlap // (Final|Native|Private|HasOutParms) // @ game+0x2bbae60
	bool IsFinishedBuilding(); // Function DynamicVolume.DynamicVolumeComponent.IsFinishedBuilding // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2bbae20
	bool IsActorInsideVolume(struct AActor* ActorToTest); // Function DynamicVolume.DynamicVolumeComponent.IsActorInsideVolume // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2bbad70
	void HandleTransformChanged(struct USceneComponent* InComponent, enum class EUpdateTransformFlags InTransformFlags, enum class ETeleportType InTeleportType); // Function DynamicVolume.DynamicVolumeComponent.HandleTransformChanged // (Final|Native|Private) // @ game+0x2bbac60
	struct FTransform GetVolumeTransform(); // Function DynamicVolume.DynamicVolumeComponent.GetVolumeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2bbac00
	float GetBuildSpreadDistance(); // Function DynamicVolume.DynamicVolumeComponent.GetBuildSpreadDistance // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2bba660
	void DrawDebugLines(struct TArray<struct FBatchedLine> DebugLine); // Function DynamicVolume.DynamicVolumeComponent.DrawDebugLines // (Final|Net|NetReliableNative|Event|NetMulticast|Private|Const) // @ game+0x2bba5b0
};

// Class DynamicVolume.GroundVolumeBuilder
// Size: 0x40 (Inherited: 0x30)
struct UGroundVolumeBuilder : UDynamicVolumeBuilder {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class DynamicVolume.GroundVolumeBuilderLineMethod
// Size: 0x220 (Inherited: 0x40)
struct UGroundVolumeBuilderLineMethod : UGroundVolumeBuilder {
	float WalkHeight; // 0x40(0x04)
	float MaximumFallHeight; // 0x44(0x04)
	float PopUpHeight; // 0x48(0x04)
	int32_t MaximumPopUpEnergy; // 0x4c(0x04)
	bool bUseFallHeightStop; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FallHeightStopFalloffSize; // 0x54(0x04)
	float ZLayerHeightTolerance; // 0x58(0x04)
	float RampAngleTolerance; // 0x5c(0x04)
	float FloorPushDownTolerance; // 0x60(0x04)
	float StairsDetectionTolerance; // 0x64(0x04)
	float WallPushOffTolerance; // 0x68(0x04)
	float FallOffHeightReRaycastTolerance; // 0x6c(0x04)
	float DownwardRampReRaycastHeightTolerance; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FName> IgnoreObjectsWithTag; // 0x78(0x10)
	enum class ECollisionChannel RaycastCollisionChannel; // 0x88(0x01)
	enum class ECollisionChannel PreciseRaycastCollisionChannel; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct TArray<enum class ECollisionChannel> RaycastObjectFilterWithinChannel; // 0x90(0x10)
	char pad_A0[0x180]; // 0xa0(0x180)
};

// Class DynamicVolume.GroundVolumeComponent
// Size: 0x4e0 (Inherited: 0x350)
struct UGroundVolumeComponent : UDynamicVolumeComponent {
	float PlayerJumpOverlapMaxHeight; // 0x348(0x04)
	bool bActivateFragmentsOnCreate; // 0x34c(0x01)
	struct FMulticastInlineDelegate OnGroundVolumeFragmentActivated; // 0x350(0x10)
	struct UGroundVolumeBuilder* GroundVolumeBuilder; // 0x360(0x08)
	int32_t FinalCount; // 0x368(0x04)
	struct FGroundVolumeFragmentArray FragmentInfo; // 0x370(0x170)

	void SetFragmentActive(int32_t SparseFragmentIndex); // Function DynamicVolume.GroundVolumeComponent.SetFragmentActive // (Final|Native|Public|BlueprintCallable) // @ game+0x2bbb260
	struct FVector2D GetFragmentGridLocation(struct FIntPoint GridPos); // Function DynamicVolume.GroundVolumeComponent.GetFragmentGridLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2bbab70
	int32_t GetFragmentCount(); // Function DynamicVolume.GroundVolumeComponent.GetFragmentCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2bbab40
	bool GetFragmentAtWorldPositionIfInside(struct FVector& WorldPosition, float Height, struct FGroundVolumeFragment& OutFragment); // Function DynamicVolume.GroundVolumeComponent.GetFragmentAtWorldPositionIfInside // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2bba9a0
	bool GetFragmentAtSparseIndex(int32_t SparseFragmentIndex, struct FGroundVolumeFragment& OutFragment); // Function DynamicVolume.GroundVolumeComponent.GetFragmentAtSparseIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2bba830
	bool GetFragmentAtFragmentIndex(struct FIntPoint& GridPos, int32_t FragmentIndex, struct FGroundVolumeFragment& OutFragment); // Function DynamicVolume.GroundVolumeComponent.GetFragmentAtFragmentIndex // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2bba6a0
	void DebugDrawText(); // Function DynamicVolume.GroundVolumeComponent.DebugDrawText // (Final|Native|Public) // @ game+0x2162840
};

