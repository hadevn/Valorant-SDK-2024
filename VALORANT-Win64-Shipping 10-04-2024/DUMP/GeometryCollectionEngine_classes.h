// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x4b0 (Inherited: 0x290)
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x288(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x288(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x288(0x01)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x28c(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x2a4(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x2bc(0x18)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x2d8(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x328(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x378(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x388(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x398(0x10)
	char pad_3A8_3 : 5; // 0x3a8(0x01)
	char pad_3A9[0x107]; // 0x3a9(0x107)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6820670
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6820570
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6820470
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68203d0
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x6820340
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6820210
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x6820180
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68200e0
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x6820050
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x681ffc0
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x3741180
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x681fcd0
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x681fa00
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x3741180
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x3e8 (Inherited: 0x3d8)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x3d8(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x3e0(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x681fe40
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x58 (Inherited: 0x30)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x30(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x40(0x08)
	struct FGuid CompatibleCollectionState; // 0x48(0x10)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0xa20 (Inherited: 0x590)
struct UGeometryCollectionComponent : UMeshComponent {
	char pad_590[0x8]; // 0x590(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x598(0x08)
	char pad_5A0[0xe0]; // 0x5a0(0xe0)
	struct UGeometryCollection* RestCollection; // 0x680(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x688(0x10)
	bool Simulating; // 0x698(0x01)
	char pad_699[0x7]; // 0x699(0x07)
	enum class EObjectStateTypeEnum ObjectType; // 0x6a0(0x01)
	bool EnableClustering; // 0x6a1(0x01)
	char pad_6A2[0x2]; // 0x6a2(0x02)
	int32_t ClusterGroupIndex; // 0x6a4(0x04)
	int32_t MaxClusterLevel; // 0x6a8(0x04)
	char pad_6AC[0x4]; // 0x6ac(0x04)
	struct TArray<float> DamageThreshold; // 0x6b0(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x6c0(0x01)
	char pad_6C1[0x3]; // 0x6c1(0x03)
	int32_t CollisionGroup; // 0x6c4(0x04)
	float CollisionSampleFraction; // 0x6c8(0x04)
	float LinearEtherDrag; // 0x6cc(0x04)
	float AngularEtherDrag; // 0x6d0(0x04)
	char pad_6D4[0x4]; // 0x6d4(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x6d8(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x6e0(0x01)
	char pad_6E1[0x3]; // 0x6e1(0x03)
	struct FVector InitialLinearVelocity; // 0x6e4(0x0c)
	struct FVector InitialAngularVelocity; // 0x6f0(0x0c)
	char pad_6FC[0x4]; // 0x6fc(0x04)
	struct UPhysicalMaterial* PhysicalMaterialOverride; // 0x700(0x08)
	struct FGeomComponentCacheParameters CacheParameters; // 0x708(0x50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x758(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x768(0x10)
	char pad_778[0x18]; // 0x778(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x790(0x10)
	float DesiredCacheTime; // 0x7a0(0x04)
	bool CachePlayback; // 0x7a4(0x01)
	char pad_7A5[0x3]; // 0x7a5(0x03)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x7a8(0x10)
	bool bNotifyBreaks; // 0x7b8(0x01)
	bool bNotifyCollisions; // 0x7b9(0x01)
	bool bEnableReplication; // 0x7ba(0x01)
	bool bEnableAbandonAfterLevel; // 0x7bb(0x01)
	int32_t ReplicationAbandonClusterLevel; // 0x7bc(0x04)
	struct FGeometryCollectionRepData RepData; // 0x7c0(0x18)
	char pad_7D8[0x220]; // 0x7d8(0x220)
	struct UBodySetup* DummyBodySetup; // 0x9f8(0x08)
	char pad_A00[0x20]; // 0xa00(0x20)

	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (Final|Native|Public|BlueprintCallable) // @ game+0x68202b0
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x41999b0
	void OnRep_RepData(struct FGeometryCollectionRepData& OldData); // Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData // (Final|Native|Protected|HasOutParms) // @ game+0x681fd90
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x41999b0
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x41999b0
	void NetAbandonCluster(int32_t TransformIndex); // Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x681fd00
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x681fb70
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x681fa90
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x4c0 (Inherited: 0x3d8)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x3e0(0x18)
	bool bDebugDrawWholeCollection; // 0x3f8(0x01)
	bool bDebugDrawHierarchy; // 0x3f9(0x01)
	bool bDebugDrawClustering; // 0x3fa(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x3fb(0x01)
	bool bShowRigidBodyId; // 0x3fc(0x01)
	bool bShowRigidBodyCollision; // 0x3fd(0x01)
	bool bCollisionAtOrigin; // 0x3fe(0x01)
	bool bShowRigidBodyTransform; // 0x3ff(0x01)
	bool bShowRigidBodyInertia; // 0x400(0x01)
	bool bShowRigidBodyVelocity; // 0x401(0x01)
	bool bShowRigidBodyForce; // 0x402(0x01)
	bool bShowRigidBodyInfos; // 0x403(0x01)
	bool bShowTransformIndex; // 0x404(0x01)
	bool bShowTransform; // 0x405(0x01)
	bool bShowParent; // 0x406(0x01)
	bool bShowLevel; // 0x407(0x01)
	bool bShowConnectivityEdges; // 0x408(0x01)
	bool bShowGeometryIndex; // 0x409(0x01)
	bool bShowGeometryTransform; // 0x40a(0x01)
	bool bShowBoundingBox; // 0x40b(0x01)
	bool bShowFaces; // 0x40c(0x01)
	bool bShowFaceIndices; // 0x40d(0x01)
	bool bShowFaceNormals; // 0x40e(0x01)
	bool bShowSingleFace; // 0x40f(0x01)
	int32_t SingleFaceIndex; // 0x410(0x04)
	bool bShowVertices; // 0x414(0x01)
	bool bShowVertexIndices; // 0x415(0x01)
	bool bShowVertexNormals; // 0x416(0x01)
	bool bUseActiveVisualization; // 0x417(0x01)
	float PointThickness; // 0x418(0x04)
	float LineThickness; // 0x41c(0x04)
	bool bTextShadow; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	float TextScale; // 0x424(0x04)
	float NormalScale; // 0x428(0x04)
	float AxisScale; // 0x42c(0x04)
	float ArrowScale; // 0x430(0x04)
	struct FColor RigidBodyIdColor; // 0x434(0x04)
	float RigidBodyTransformScale; // 0x438(0x04)
	struct FColor RigidBodyCollisionColor; // 0x43c(0x04)
	struct FColor RigidBodyInertiaColor; // 0x440(0x04)
	struct FColor RigidBodyVelocityColor; // 0x444(0x04)
	struct FColor RigidBodyForceColor; // 0x448(0x04)
	struct FColor RigidBodyInfoColor; // 0x44c(0x04)
	struct FColor TransformIndexColor; // 0x450(0x04)
	float TransformScale; // 0x454(0x04)
	struct FColor LevelColor; // 0x458(0x04)
	struct FColor ParentColor; // 0x45c(0x04)
	float ConnectivityEdgeThickness; // 0x460(0x04)
	struct FColor GeometryIndexColor; // 0x464(0x04)
	float GeometryTransformScale; // 0x468(0x04)
	struct FColor BoundingBoxColor; // 0x46c(0x04)
	struct FColor FaceColor; // 0x470(0x04)
	struct FColor FaceIndexColor; // 0x474(0x04)
	struct FColor FaceNormalColor; // 0x478(0x04)
	struct FColor SingleFaceColor; // 0x47c(0x04)
	struct FColor VertexColor; // 0x480(0x04)
	struct FColor VertexIndexColor; // 0x484(0x04)
	struct FColor VertexNormalColor; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x490(0x08)
	char pad_498[0x28]; // 0x498(0x28)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0x100 (Inherited: 0xe8)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xe8(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xf0(0x08)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0x110 (Inherited: 0x30)
struct UGeometryCollection : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	bool EnableClustering; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t ClusterGroupIndex; // 0x3c(0x04)
	int32_t MaxClusterLevel; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<float> DamageThreshold; // 0x48(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct FGeometryCollectionSource> GeometrySource; // 0x60(0x10)
	struct TArray<struct UMaterialInterface*> Materials; // 0x70(0x10)
	enum class ECollisionTypeEnum CollisionType; // 0x80(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	int32_t MinLevelSetResolution; // 0x84(0x04)
	int32_t MaxLevelSetResolution; // 0x88(0x04)
	int32_t MinClusterLevelSetResolution; // 0x8c(0x04)
	int32_t MaxClusterLevelSetResolution; // 0x90(0x04)
	float CollisionObjectReductionPercentage; // 0x94(0x04)
	bool bMassAsDensity; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float Mass; // 0x9c(0x04)
	float MinimumMassClamp; // 0xa0(0x04)
	float CollisionParticlesFraction; // 0xa4(0x04)
	int32_t MaximumCollisionParticles; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0xb0(0x10)
	bool EnableRemovePiecesOnFracture; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0xc8(0x10)
	struct FGuid PersistentGuid; // 0xd8(0x10)
	struct FGuid StateGuid; // 0xe8(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xf8(0x04)
	char pad_FC[0x14]; // 0xfc(0x14)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x470 (Inherited: 0x3d8)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x3d8(0x08)
	struct UMaterial* RayMarchMaterial; // 0x3e0(0x08)
	float SurfaceTolerance; // 0x3e8(0x04)
	float Isovalue; // 0x3ec(0x04)
	bool Enabled; // 0x3f0(0x01)
	bool RenderVolumeBoundingBox; // 0x3f1(0x01)
	char pad_3F2[0x7e]; // 0x3f2(0x7e)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x170 (Inherited: 0xe8)
struct USkeletalMeshSimulationComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xf0(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0xf8(0x08)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0x100(0x08)
	bool bSimulating; // 0x108(0x01)
	bool bNotifyCollisions; // 0x109(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0x10a(0x01)
	char pad_10B[0x1]; // 0x10b(0x01)
	float Density; // 0x10c(0x04)
	float MinMass; // 0x110(0x04)
	float MaxMass; // 0x114(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float ImplicitShapeParticlesPerUnitArea; // 0x11c(0x04)
	int32_t ImplicitShapeMinNumParticles; // 0x120(0x04)
	int32_t ImplicitShapeMaxNumParticles; // 0x124(0x04)
	int32_t MinLevelSetResolution; // 0x128(0x04)
	int32_t MaxLevelSetResolution; // 0x12c(0x04)
	int32_t CollisionGroup; // 0x130(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	struct FVector InitialLinearVelocity; // 0x138(0x0c)
	struct FVector InitialAngularVelocity; // 0x144(0x0c)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x41999b0
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x170 (Inherited: 0xe8)
struct UStaticMeshSimulationComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	bool Simulating; // 0xf0(0x01)
	bool bNotifyCollisions; // 0xf1(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xf2(0x01)
	char pad_F3[0x1]; // 0xf3(0x01)
	float Mass; // 0xf4(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xf8(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0xf9(0x01)
	char pad_FA[0x2]; // 0xfa(0x02)
	int32_t MinLevelSetResolution; // 0xfc(0x04)
	int32_t MaxLevelSetResolution; // 0x100(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct FVector InitialLinearVelocity; // 0x108(0x0c)
	struct FVector InitialAngularVelocity; // 0x114(0x0c)
	float DamageThreshold; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x128(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x130(0x08)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x138(0x10)
	char pad_148[0x10]; // 0x148(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x158(0x10)
	char pad_168[0x8]; // 0x168(0x08)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x41999b0
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState // (Final|Native|Public|BlueprintCallable) // @ game+0x6823110
};

