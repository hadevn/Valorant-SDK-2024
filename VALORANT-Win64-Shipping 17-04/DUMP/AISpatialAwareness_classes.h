// Class AISpatialAwareness.AISpatialAwarenessAmortizationInterface
// Size: 0x30 (Inherited: 0x30)
struct UAISpatialAwarenessAmortizationInterface : UInterface {

	void PerformAmortizedWork(); // Function AISpatialAwareness.AISpatialAwarenessAmortizationInterface.PerformAmortizedWork // (Native|Event|Public|BlueprintEvent) // @ game+0x3bcf530
};

// Class AISpatialAwareness.AISpatialAwarenessAmortizationManagerComponent
// Size: 0x140 (Inherited: 0xe8)
struct UAISpatialAwarenessAmortizationManagerComponent : UActorComponent {
	int32_t AmortizedCallsPerQueuePerTick; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TMap<struct UObject*, struct FAISpatialAwarenessAmortizationQueue> AmortizationQueues; // 0xf0(0x50)

	void RegisterAmortizedCall(struct UObject* QueueID, struct UObject* AmortizationInterface); // Function AISpatialAwareness.AISpatialAwarenessAmortizationManagerComponent.RegisterAmortizedCall // (Final|Native|Public|BlueprintCallable) // @ game+0x6a4b1e0
	void DeregisterAmortizedCall(struct UObject* QueueID, struct UObject* AmortizationInterface); // Function AISpatialAwareness.AISpatialAwarenessAmortizationManagerComponent.DeregisterAmortizedCall // (Final|Native|Public|BlueprintCallable) // @ game+0x6a4afc0
};

// Class AISpatialAwareness.AISpatialAwarenessBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAISpatialAwarenessBlueprintLibrary : UBlueprintFunctionLibrary {

	bool EqualEqual_FInfluenceLayerIDFInfluenceLayerID(struct FInfluenceLayerID& A, struct FInfluenceLayerID& B); // Function AISpatialAwareness.AISpatialAwarenessBlueprintLibrary.EqualEqual_FInfluenceLayerIDFInfluenceLayerID // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6a4b0d0
	bool EqualEqual_FInfluenceLayerBlockIDFInfluenceLayerBlockID(struct FInfluenceLayerBlockID& A, struct FInfluenceLayerBlockID& B); // Function AISpatialAwareness.AISpatialAwarenessBlueprintLibrary.EqualEqual_FInfluenceLayerBlockIDFInfluenceLayerBlockID // (Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6a4b0d0
};

// Class AISpatialAwareness.AISpatialAwarenessDebugControllerComponent
// Size: 0x100 (Inherited: 0xe8)
struct UAISpatialAwarenessDebugControllerComponent : UActorComponent {
	struct APlayerController* CachedPlayerController; // 0xe8(0x08)
	struct UInfluenceMapDebuggerComponent* CachedInfluenceMapDebuggerComponent; // 0xf0(0x08)
	struct UMapMarkupWaypointDebuggerComponent* CachedMapMarkupWaypointDebuggerComponent; // 0xf8(0x08)

	void ServerStepPropagation(float PropagationStepAmount); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerStepPropagation // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38568c0
	void ServerSetPropagationPaused(bool bPaused); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetPropagationPaused // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x6a4b470
	void ServerSetLayerID(int32_t LayerID); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetLayerID // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x3b5fe80
	void ServerSetClientRequestedWaypointDebugData(struct FClientRequestedWaypointDebugData ClientRequestedDebugData); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetClientRequestedWaypointDebugData // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x6a4b3e0
	void ServerSetClientRequestedInfluenceMapDebugData(struct FClientRequestedInfluenceMapDebugData ClientRequestedDebugData); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetClientRequestedInfluenceMapDebugData // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x6a4b340
	void ServerSetBlockID(int32_t BlockID); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerSetBlockID // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38ceee0
	void ServerRegisterInfluenceAtPoint(float InfluenceValue); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerRegisterInfluenceAtPoint // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x6a4b2b0
	void ServerCycleToNextActiveLayer(); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerCycleToNextActiveLayer // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38028f0
	void ServerCycleLayer(int32_t CycleAmount); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ServerCycleLayer // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x3d86e00
	void ClientReceiveWaypointDebugData(struct FMapMarkupWaypointDebugData DebugData); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ClientReceiveWaypointDebugData // (Net|Native|Event|Public|NetClient) // @ game+0x6a4aee0
	void ClientReceiveInfluenceDebugData(struct FInfluenceMapDebugData DebugData); // Function AISpatialAwareness.AISpatialAwarenessDebugControllerComponent.ClientReceiveInfluenceDebugData // (Net|Native|Event|Public|NetClient) // @ game+0x6a4ad20
};

// Class AISpatialAwareness.BTService_RunWaypointQuery
// Size: 0x1d0 (Inherited: 0x78)
struct UBTService_RunWaypointQuery : UBTService {
	struct UEnvQuery* PrimaryQueryTemplate; // 0x78(0x08)
	struct FBlackboardKeySelector PrimaryQueryBlackboardKey; // 0x80(0x30)
	struct UEnvQuery* SecondaryQueryTemplate; // 0xb0(0x08)
	struct FBlackboardKeySelector SecondaryQueryBlackboardKey; // 0xb8(0x30)
	float SecondaryQueryCombinedScoreWeight; // 0xe8(0x04)
	float SecondaryQueryScoreTolerance; // 0xec(0x04)
	bool bDiscardPrimaryResultWithFailedSecondaryQuery; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float FoundWaypointTimeoutDuration; // 0xf4(0x04)
	bool bRunQueryIfFoundWaypointValid; // 0xf8(0x01)
	bool bUsePreviousWaypointOnNoneFound; // 0xf9(0x01)
	enum class EInfluenceLayerTag InfluenceTypeCheckTag; // 0xfa(0x01)
	char pad_FB[0x5]; // 0xfb(0x05)
	struct UWaypointQueryEventsHelperBase* GameplayEventsHelperType; // 0x100(0x08)
	char pad_108[0x20]; // 0x108(0x20)
	struct UWaypointQueryEventsHelperBase* GameplayEventsHelper; // 0x128(0x08)
	struct TMap<int32_t, struct FWaypointQueryInfo> CachedWaypointQueryInfo; // 0x130(0x50)
	struct FWaypointQueryInfo CachedPreviousWaypointInfo; // 0x180(0x28)
	struct APawn* CachedOwnerPawn; // 0x1a8(0x08)
	struct AAIController* CachedOwnerController; // 0x1b0(0x08)
	char pad_1B8[0x18]; // 0x1b8(0x18)

	void InvalidatePreviousWaypointInfo(); // Function AISpatialAwareness.BTService_RunWaypointQuery.InvalidatePreviousWaypointInfo // (Final|Native|Public|BlueprintCallable) // @ game+0x6a4b1c0
	struct APawn* GetOwnerPawn(); // Function AISpatialAwareness.BTService_RunWaypointQuery.GetOwnerPawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3afa7b0
};

// Class AISpatialAwareness.EnvQueryContext_QuerierOccupiedRooms
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_QuerierOccupiedRooms : UEnvQueryContext {
};

// Class AISpatialAwareness.EnvQueryContext_SecondaryWaypointQueryPawn
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_SecondaryWaypointQueryPawn : UEnvQueryContext {
};

// Class AISpatialAwareness.EnvQueryContext_SecondaryWaypointQueryWaypoint
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_SecondaryWaypointQueryWaypoint : UEnvQueryContext {
};

// Class AISpatialAwareness.EnvQueryGenerator_ConnectedWaypoints
// Size: 0x60 (Inherited: 0x58)
struct UEnvQueryGenerator_ConnectedWaypoints : UEnvQueryGenerator {
	struct UEnvQueryContext* Context; // 0x58(0x08)
};

// Class AISpatialAwareness.EnvQueryGenerator_WaypointsInRoom
// Size: 0x60 (Inherited: 0x58)
struct UEnvQueryGenerator_WaypointsInRoom : UEnvQueryGenerator {
	struct UEnvQueryContext* MarkupRoomContext; // 0x58(0x08)
};

// Class AISpatialAwareness.EnvQueryTest_WaypointInfluenceValue
// Size: 0x240 (Inherited: 0x238)
struct UEnvQueryTest_WaypointInfluenceValue : UEnvQueryTest {
	enum class EInfluenceLayerTag LayerTag; // 0x238(0x01)
	enum class EWaypointInfluenceQueryReturnType QueryReturnType; // 0x239(0x01)
	bool bIgnoreQuerierInfluenceContribution; // 0x23a(0x01)
	bool bDiscardZeroInfluenceWaypoints; // 0x23b(0x01)
	char pad_23C[0x4]; // 0x23c(0x04)
};

// Class AISpatialAwareness.EnvQueryTest_WaypointType
// Size: 0x248 (Inherited: 0x238)
struct UEnvQueryTest_WaypointType : UEnvQueryTest {
	char WaypointTypeFlags; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct AMapMarkupWaypoint* WaypointClass; // 0x240(0x08)
};

// Class AISpatialAwareness.EnvQueryTest_WaypointVisibility
// Size: 0x240 (Inherited: 0x238)
struct UEnvQueryTest_WaypointVisibility : UEnvQueryTest {
	enum class EEnvTestWaypointVisibilityMode CheckMode; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
};

// Class AISpatialAwareness.InfluenceClearerComponentBase
// Size: 0x110 (Inherited: 0xe8)
struct UInfluenceClearerComponentBase : UActorComponent {
	float ClearTickRate; // 0xe8(0x04)
	enum class EInfluenceLayerTag ClearLayerTag; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct TArray<enum class EInfluenceSourceTag> ClearSourceTags; // 0xf0(0x10)
	struct FInfluenceLayerBlockID OwnerLayerBlockID; // 0x100(0x04)
	enum class ELayerBlockBehavior LayerBlockBehavior; // 0x104(0x01)
	bool bEnabled; // 0x105(0x01)
	char pad_106[0xa]; // 0x106(0x0a)

	void Enable(); // Function AISpatialAwareness.InfluenceClearerComponentBase.Enable // (Final|Native|Public|BlueprintCallable) // @ game+0x6a4b0b0
	void Disable(); // Function AISpatialAwareness.InfluenceClearerComponentBase.Disable // (Final|Native|Public|BlueprintCallable) // @ game+0x6a4b090
};

// Class AISpatialAwareness.InfluenceMap
// Size: 0x3f8 (Inherited: 0x3b8)
struct AInfluenceMap : AActor {
	struct UInfluenceMapNodeGraphComponent* InfluenceMapNodeGraphComponent; // 0x3b8(0x08)
	struct UInfluenceMapSourceManagerComponent* InfluenceMapSourceManagerComponent; // 0x3c0(0x08)
	struct UInfluencePropagationComponent* InfluencePropagationComponent; // 0x3c8(0x08)
	struct UInfluenceMapRoomManagerComponent* InfluenceMapRoomManagerComponent; // 0x3d0(0x08)
	struct UInfluenceMapDebuggerComponent* InfluenceMapDebuggerComponent; // 0x3d8(0x08)
	struct UMapMarkupWaypointDebuggerComponent* MapMarkupWaypointDebuggerComponent; // 0x3e0(0x08)
	struct UAISpatialAwarenessAmortizationManagerComponent* AmortizationManagerComponent; // 0x3e8(0x08)
	int32_t NumExpectedPropagatingLayers; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)

	int32_t GetNumExpectedPropagatingLayers(); // Function AISpatialAwareness.InfluenceMap.GetNumExpectedPropagatingLayers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c74a60
	struct AInfluenceMap* AuthGetInfluenceMap(struct UObject* WorldContextObject); // Function AISpatialAwareness.InfluenceMap.AuthGetInfluenceMap // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6a4ac90
};

// Class AISpatialAwareness.InfluenceMapDebuggerComponent
// Size: 0x2e8 (Inherited: 0xe8)
struct UInfluenceMapDebuggerComponent : UActorComponent {
	char pad_E8[0x38]; // 0xe8(0x38)
	struct AInfluenceMap* CachedInfluenceMap; // 0x120(0x08)
	struct ULayerBlockAssignerComponentBase* CachedBlockAssignerComponent; // 0x128(0x08)
	struct UInfluenceMapNodeGraphComponent* CachedNodeGraphComp; // 0x130(0x08)
	struct UInfluenceMapSourceManagerComponent* CachedSourceManagerComp; // 0x138(0x08)
	struct UInfluencePropagationComponent* CachedPropagationComp; // 0x140(0x08)
	struct ARecastNavMesh* CachedNavMesh; // 0x148(0x08)
	struct FInfluenceMapDebugData InfluenceMapDebugData; // 0x150(0x98)
	struct TMap<struct APlayerController*, int32_t> FocusedNodeIndexMap; // 0x1e8(0x50)
	struct TArray<struct FSavedInfoMap> SavedInfoArray; // 0x238(0x10)
	struct TMap<int32_t, struct AMapMarkupWaypoint*> NodeIndexToWaypointMap; // 0x248(0x50)
	struct TMap<struct APlayerController*, struct FClientRequestedInfluenceMapDebugData> ClientRequestedDebugDataMap; // 0x298(0x50)
};

// Class AISpatialAwareness.InfluenceMapNodeGraphComponent
// Size: 0x1b0 (Inherited: 0xe8)
struct UInfluenceMapNodeGraphComponent : UActorComponent {
	struct UNodePlacementStrategyBase* NodePlacementStrategyClass; // 0xe8(0x08)
	struct TMap<struct FIntVector, int32_t> InfluenceMapNodeIndices; // 0xf0(0x50)
	struct TArray<struct FInfluenceMapNode> InfluenceMapNodes; // 0x140(0x10)
	struct TMap<int32_t, struct FNodeOperationsList> PendingNodeOperations; // 0x150(0x50)
	struct UNodePlacementStrategyBase* NodePlacementStrategy; // 0x1a0(0x08)
	struct UInfluencePropagationComponent* CachedPropagationComponent; // 0x1a8(0x08)

	struct TArray<int32_t> GetSurroundingNodeIndicesAtLocation(struct FVector& Location); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetSurroundingNodeIndicesAtLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a52b10
	int32_t GetNumNodes(); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetNumNodes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b076b0
	struct FVector GetNodeLocation(int32_t NodeIndex); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetNodeLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a529c0
	int32_t GetNearestInfluenceMapNodeIndex(struct FVector& Location); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetNearestInfluenceMapNodeIndex // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a52920
	struct TArray<int32_t> GetInfluenceMapNodeIndicesInSphere(struct FVector& Location, float Radius); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetInfluenceMapNodeIndicesInSphere // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a52740
	struct TArray<int32_t> GetInfluenceMapNodeIndicesInCone(struct FVector& Location, struct FVector& ViewDirection, float PeripheralVisionAngleCos, float PointOfViewBackwardOffset, float NearClippingRadiusSq, float SightRadiusSq); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetInfluenceMapNodeIndicesInCone // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a52500
	struct TArray<int32_t> GetInfluenceMapNodeIndicesInBox(struct FBox& Box); // Function AISpatialAwareness.InfluenceMapNodeGraphComponent.GetInfluenceMapNodeIndicesInBox // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a52420
};

// Class AISpatialAwareness.InfluenceMapRoomManagerComponent
// Size: 0x150 (Inherited: 0xe8)
struct UInfluenceMapRoomManagerComponent : UActorComponent {
	struct AActor* RoomOccupierClass; // 0xe8(0x08)
	struct TSet<struct AActor*> WaypointVisCheckIgnoreTypes; // 0xf0(0x50)
	struct TArray<struct AMapMarkupRoom*> MapMarkupRooms; // 0x140(0x10)

	struct TArray<struct AMapMarkupRoom*> GetMapMarkupRooms(); // Function AISpatialAwareness.InfluenceMapRoomManagerComponent.GetMapMarkupRooms // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a52890
	struct TArray<struct AMapMarkupRoom*> AuthGetRoomsForActor(struct AActor* InActor); // Function AISpatialAwareness.InfluenceMapRoomManagerComponent.AuthGetRoomsForActor // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3da6600
};

// Class AISpatialAwareness.InfluenceMapSourceManagerComponent
// Size: 0x140 (Inherited: 0xe8)
struct UInfluenceMapSourceManagerComponent : UActorComponent {
	struct FMulticastInlineDelegate OnInfluenceSourceRegistered; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnInfluenceSourceDeregistered; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnInfluenceValuesCleared; // 0x108(0x10)
	bool bPropagatingSourceStampedNodesImmuneToClears; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct TArray<struct FInfluenceMapLayer> InfluenceSourceLayers; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)

	bool IsValidBlockID(struct FInfluenceLayerBlockID& BlockID); // Function AISpatialAwareness.InfluenceMapSourceManagerComponent.IsValidBlockID // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a52cc0
	bool IsInfluenceSourceRegistered(struct UInfluenceSourceComponentBase* SourceComp); // Function AISpatialAwareness.InfluenceMapSourceManagerComponent.IsInfluenceSourceRegistered // (Final|Native|Public|BlueprintCallable) // @ game+0x38cb7f0
};

// Class AISpatialAwareness.InfluenceNodeVisibilityCheckerInterface
// Size: 0x30 (Inherited: 0x30)
struct UInfluenceNodeVisibilityCheckerInterface : UInterface {
};

// Class AISpatialAwareness.InfluenceNodeVisibilityCheckerLineTrace
// Size: 0x38 (Inherited: 0x30)
struct UInfluenceNodeVisibilityCheckerLineTrace : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AISpatialAwareness.InfluenceSourceComponentBase
// Size: 0x1f8 (Inherited: 0xe8)
struct UInfluenceSourceComponentBase : UActorComponent {
	struct FInfluenceSourceRegistrationData RegistrationData; // 0xe8(0xe0)
	float ReseedTickRate; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct TArray<struct FInfluenceLayerBlockID> ReseedBlockIDs; // 0x1d0(0x10)
	char pad_1E0[0x18]; // 0x1e0(0x18)

	bool IsReseedingOnBlock(struct FInfluenceLayerBlockID& InBlock); // Function AISpatialAwareness.InfluenceSourceComponentBase.IsReseedingOnBlock // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a52bf0
	struct FInfluenceIdentifiers GetSourceIdentifiers(); // Function AISpatialAwareness.InfluenceSourceComponentBase.GetSourceIdentifiers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a52aa0
	struct FInfluenceSourceRegistrationData GetRegistrationData(); // Function AISpatialAwareness.InfluenceSourceComponentBase.GetRegistrationData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a52a70
	void AuthUpdateReseedBlockIDs(struct TArray<struct FInfluenceLayerBlockID>& InNewReseed); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthUpdateReseedBlockIDs // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x3b35dc0
	void AuthStopPropagationReseedTimer(); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthStopPropagationReseedTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x2118460
	void AuthStartPropagationReseedTimer(); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthStartPropagationReseedTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x2118460
	void AuthSetInfluencePropagationPaused(bool bPaused); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthSetInfluencePropagationPaused // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3802470
	void AuthResetReseedBlockIDs(bool bAllBlocksReseed); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthResetReseedBlockIDs // (Final|Native|Protected|BlueprintCallable) // @ game+0x3802470
	bool AuthRegisterSource(struct FName Reason); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthRegisterSource // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x6a521d0
	void AuthRegisterOnPropagatingBlocks(struct TArray<struct FInfluenceLayerBlockID>& InRegisterBlockIDs, struct FName Reason); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthRegisterOnPropagatingBlocks // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x6a52310
	void AuthModifyPropagationParameters(struct FPropagationParameters& NewPropagationParameters); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthModifyPropagationParameters // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6a52280
	bool AuthDeregisterSource(struct FName Reason); // Function AISpatialAwareness.InfluenceSourceComponentBase.AuthDeregisterSource // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x6a521d0
};

// Class AISpatialAwareness.InfluencePointSourceComponent
// Size: 0x208 (Inherited: 0x1f8)
struct UInfluencePointSourceComponent : UInfluenceSourceComponentBase {
	float InfluenceValue; // 0x1f8(0x04)
	char pad_1FC[0xc]; // 0x1fc(0x0c)

	float GetInfluenceValue(); // Function AISpatialAwareness.InfluencePointSourceComponent.GetInfluenceValue // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x6a52870
};

// Class AISpatialAwareness.InfluencePropagationComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UInfluencePropagationComponent : UActorComponent {
	struct UInfluencePropagatorMovement* InfluencePropagatorMovement; // 0xe8(0x08)
	bool bAllPropagationPaused; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float PropagationTimeOffset; // 0xf4(0x04)

	void OnInfluenceValuesCleared(struct TArray<int32_t>& LayerIndices, struct TArray<int32_t>& ClearedNodes); // Function AISpatialAwareness.InfluencePropagationComponent.OnInfluenceValuesCleared // (Final|Native|Public|HasOutParms) // @ game+0x6a53230
	void OnInfluenceSourceRegistered(struct TArray<int32_t>& LayerIndices, struct FInfluenceSourceRegistrationData& RegistrationData); // Function AISpatialAwareness.InfluencePropagationComponent.OnInfluenceSourceRegistered // (Final|Native|Public|HasOutParms) // @ game+0x6a52fd0
	void OnInfluenceSourceDeregistered(struct TArray<int32_t>& LayerIndices, struct FInfluenceSourceRegistrationData& RegistrationData); // Function AISpatialAwareness.InfluencePropagationComponent.OnInfluenceSourceDeregistered // (Final|Native|Public|HasOutParms) // @ game+0x6a52d70
};

// Class AISpatialAwareness.InfluencePropagatorBase
// Size: 0x48 (Inherited: 0x30)
struct UInfluencePropagatorBase : UObject {
	struct UInfluenceMapSourceManagerComponent* CachedInfluenceMapSourceManagerComponent; // 0x30(0x08)
	struct UInfluenceMapNodeGraphComponent* CachedInfluenceMapNodeGraphComponent; // 0x38(0x08)
	struct UInfluencePropagationComponent* CachedPropagationComponent; // 0x40(0x08)
};

// Class AISpatialAwareness.InfluencePropagatorMovement
// Size: 0xb0 (Inherited: 0x48)
struct UInfluencePropagatorMovement : UInfluencePropagatorBase {
	char pad_48[0x8]; // 0x48(0x08)
	struct TMap<int32_t, struct FMovementLayerPropagationInfo> PropagatingLayerInfo; // 0x50(0x50)
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class AISpatialAwareness.InfluenceSphereClearerComponent
// Size: 0x128 (Inherited: 0x110)
struct UInfluenceSphereClearerComponent : UInfluenceClearerComponentBase {
	float SphereRadius; // 0x110(0x04)
	char pad_114[0x14]; // 0x114(0x14)
};

// Class AISpatialAwareness.InfluenceStaticMeshClearerComponent
// Size: 0x138 (Inherited: 0x110)
struct UInfluenceStaticMeshClearerComponent : UInfluenceClearerComponentBase {
	bool bCacheInitialNodeLocations; // 0x110(0x01)
	char pad_111[0x27]; // 0x111(0x27)
};

// Class AISpatialAwareness.InfluenceVisionConeClearerComponent
// Size: 0x118 (Inherited: 0x110)
struct UInfluenceVisionConeClearerComponent : UInfluenceClearerComponentBase {
	struct UInfluenceMapSourceManagerComponent* CachedSourceManagerComp; // 0x110(0x08)

	void OnNodesInConeUpdated(struct TArray<int32_t>& NodesInCone, struct TArray<int32_t>& VisibleNodes); // Function AISpatialAwareness.InfluenceVisionConeClearerComponent.OnNodesInConeUpdated // (Final|Native|Private|HasOutParms) // @ game+0x6a58d70
};

// Class AISpatialAwareness.InfluenceVisionConeSourceComponent
// Size: 0x208 (Inherited: 0x1f8)
struct UInfluenceVisionConeSourceComponent : UInfluenceSourceComponentBase {
	float InfluenceValue; // 0x1f8(0x04)
	bool bEnabled; // 0x1fc(0x01)
	char pad_1FD[0xb]; // 0x1fd(0x0b)

	void OnNodesInConeUpdated(struct TArray<int32_t>& NodesInCone, struct TArray<int32_t>& VisibleNodes); // Function AISpatialAwareness.InfluenceVisionConeSourceComponent.OnNodesInConeUpdated // (Final|Native|Private|HasOutParms) // @ game+0x6a58d70
	float GetInfluenceValue(); // Function AISpatialAwareness.InfluenceVisionConeSourceComponent.GetInfluenceValue // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x6a52870
	void Enable(); // Function AISpatialAwareness.InfluenceVisionConeSourceComponent.Enable // (Final|Native|Public|BlueprintCallable) // @ game+0x6a57ed0
	void Disable(); // Function AISpatialAwareness.InfluenceVisionConeSourceComponent.Disable // (Final|Native|Public|BlueprintCallable) // @ game+0x6a57eb0
};

// Class AISpatialAwareness.LayerBlockAssignerComponentBase
// Size: 0xe8 (Inherited: 0xe8)
struct ULayerBlockAssignerComponentBase : UActorComponent {

	struct FString GetStringIdentifierForBlockID(struct FInfluenceLayerBlockID BlockID); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.GetStringIdentifierForBlockID // (Event|Public|BlueprintEvent|Const) // @ game+0x4282c30
	int32_t GetNumLayerBlocks(); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.GetNumLayerBlocks // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3ea8750
	struct FInfluenceLayerBlockID GetNextLayerBlockID(); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.GetNextLayerBlockID // (Final|Native|Protected|BlueprintCallable|Const) // @ game+0x6a58450
	struct FInfluenceLayerBlockID GetLayerBlockIDForActor(struct AActor* InActor); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.GetLayerBlockIDForActor // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6a58370
	struct ULayerBlockAssignerComponentBase* AuthGetLayerBlockAssigner(struct UObject* WorldContextObject); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.AuthGetLayerBlockAssigner // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6a57c90
	void AssignLayerBlockIDs(); // Function AISpatialAwareness.LayerBlockAssignerComponentBase.AssignLayerBlockIDs // (Event|Public|BlueprintEvent|Const) // @ game+0x4282c30
};

// Class AISpatialAwareness.MapMarkupRoom
// Size: 0x450 (Inherited: 0x3b8)
struct AMapMarkupRoom : AActor {
	struct FGameplayTagContainer RoomTags; // 0x3b8(0x20)
	struct TArray<struct AMapMarkupRoom*> NavConnectedRooms; // 0x3d8(0x10)
	struct TArray<struct AMapMarkupWaypoint*> RoomWaypoints; // 0x3e8(0x10)
	struct TSet<struct AActor*> OccupyingActors; // 0x3f8(0x50)
	struct UInfluenceMapRoomManagerComponent* CachedRoomManagerComponent; // 0x448(0x08)

	bool IsActorInRoom(struct AActor* InActor); // Function AISpatialAwareness.MapMarkupRoom.IsActorInRoom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a58a60
	struct TArray<struct AMapMarkupWaypoint*> GetWaypointsOfType(char TypeFlags); // Function AISpatialAwareness.MapMarkupRoom.GetWaypointsOfType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a58860
	struct TArray<struct AMapMarkupWaypoint*> GetWaypointsOfClass(struct AMapMarkupWaypoint* WaypointType); // Function AISpatialAwareness.MapMarkupRoom.GetWaypointsOfClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a58780
	struct TArray<struct AMapMarkupWaypoint*> GetWaypoints(); // Function AISpatialAwareness.MapMarkupRoom.GetWaypoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a586f0
	struct TArray<struct AMapMarkupRoom*> GetNavConnectedRooms(); // Function AISpatialAwareness.MapMarkupRoom.GetNavConnectedRooms // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a58410
	struct TArray<struct AActor*> GetActorsInRoom(); // Function AISpatialAwareness.MapMarkupRoom.GetActorsInRoom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a58090
};

// Class AISpatialAwareness.MapMarkupWaypoint
// Size: 0x448 (Inherited: 0x3b8)
struct AMapMarkupWaypoint : AActor {
	struct TMap<struct FName, struct FEnvNamedValue> WaypointQueryNamedParams; // 0x3b8(0x50)
	float MinValueAfterDecay; // 0x408(0x04)
	float MaxValueAfterGrowth; // 0x40c(0x04)
	struct TArray<struct AMapMarkupWaypoint*> ConnectedWaypoints; // 0x410(0x10)
	struct TArray<struct AMapMarkupRoom*> OwningRooms; // 0x420(0x10)
	int32_t CachedNodeIndex; // 0x430(0x04)
	char WaypointTypeFlags; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct UInfluenceMapNodeGraphComponent* CachedNodeGraphComponent; // 0x438(0x08)
	struct UInfluenceMapSourceManagerComponent* CachedSourceManagerComponent; // 0x440(0x08)

	bool WaypointIsType(char TypeFlags); // Function AISpatialAwareness.MapMarkupWaypoint.WaypointIsType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a59210
	float QueryInfluence(struct AActor* Querent, struct FInfluenceLayerBlockID& BlockID, enum class EInfluenceLayerTag InfluenceType, enum class EWaypointInfluenceQueryReturnType ReturnType, bool bIgnoreQuerent); // Function AISpatialAwareness.MapMarkupWaypoint.QueryInfluence // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a58e90
	bool IsInRoom(struct AMapMarkupRoom* InRoom); // Function AISpatialAwareness.MapMarkupWaypoint.IsInRoom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a58b00
	bool HasInfluenceOfType(struct FInfluenceLayerBlockID& BlockID, enum class EInfluenceLayerTag LayerTag); // Function AISpatialAwareness.MapMarkupWaypoint.HasInfluenceOfType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a58940
	struct TArray<struct AMapMarkupRoom*> GetOwningRooms(); // Function AISpatialAwareness.MapMarkupWaypoint.GetOwningRooms // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a58490
	float GetInfluenceValue(struct FInfluenceLayerBlockID& BlockID, struct FInfluenceLayerID& LayerID); // Function AISpatialAwareness.MapMarkupWaypoint.GetInfluenceValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a58270
	struct FString GetDebugString(); // Function AISpatialAwareness.MapMarkupWaypoint.GetDebugString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a581f0
};

// Class AISpatialAwareness.MapMarkupWaypointDebuggerComponent
// Size: 0x1d0 (Inherited: 0xe8)
struct UMapMarkupWaypointDebuggerComponent : UActorComponent {
	struct FMapMarkupWaypointDebugData WaypointDebugData; // 0xe8(0x30)
	struct AInfluenceMap* CachedInfluenceMap; // 0x118(0x08)
	struct TArray<struct AMapMarkupWaypoint*> CachedWaypoints; // 0x120(0x10)
	struct TMap<struct APlayerController*, struct AMapMarkupWaypoint*> FocusedWaypointsMap; // 0x130(0x50)
	struct TMap<struct APlayerController*, struct FClientRequestedWaypointDebugData> ClientRequestedDebugDataMap; // 0x180(0x50)
};

// Class AISpatialAwareness.NodePlacementStrategyBase
// Size: 0x98 (Inherited: 0x30)
struct UNodePlacementStrategyBase : UObject {
	struct TMap<uint64_t, struct FWaypointsForNavMeshPoly> CachedWaypoints; // 0x30(0x50)
	char pad_80[0x18]; // 0x80(0x18)

	void OnNavDataRegistered(struct ANavigationData* NavData); // Function AISpatialAwareness.NodePlacementStrategyBase.OnNavDataRegistered // (Final|Native|Private) // @ game+0x6a58ce0
};

// Class AISpatialAwareness.NodePlacementStrategyNavMeshPolys
// Size: 0xa0 (Inherited: 0x98)
struct UNodePlacementStrategyNavMeshPolys : UNodePlacementStrategyBase {
	float UpwardNavLinkConnectionLimit; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class AISpatialAwareness.RoomAssignerComponent
// Size: 0x120 (Inherited: 0xe8)
struct URoomAssignerComponent : UActorComponent {
	float ReadyCheckResponseTimerDuration; // 0xe8(0x04)
	float ImmediatePassAfterReadyTimerDuration; // 0xec(0x04)
	struct TArray<struct APlayerState*> PendingRoomReadyChecks; // 0xf0(0x10)
	struct TArray<struct APlayerState*> PassedRoomReadyChecks; // 0x100(0x10)
	char pad_110[0x10]; // 0x110(0x10)

	void ServerUpdateReadyCheck(struct APlayerState* InPlayerState, bool bIsReady); // Function AISpatialAwareness.RoomAssignerComponent.ServerUpdateReadyCheck // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x6a59130
	void ReceiveReadyCheckUpdate(struct APlayerState* InPlayerState, bool bIsReady); // Function AISpatialAwareness.RoomAssignerComponent.ReceiveReadyCheckUpdate // (Final|Native|Protected|BlueprintCallable) // @ game+0x6a59060
	bool HasPendingReadyChecks(); // Function AISpatialAwareness.RoomAssignerComponent.HasPendingReadyChecks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a58a30
	bool HasPassedReadyChecks(); // Function AISpatialAwareness.RoomAssignerComponent.HasPassedReadyChecks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2737d90
	struct TArray<struct APlayerState*> GetPendingReadyChecks(); // Function AISpatialAwareness.RoomAssignerComponent.GetPendingReadyChecks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a58540
	struct TArray<struct APlayerState*> GetPassedReadyChecks(); // Function AISpatialAwareness.RoomAssignerComponent.GetPassedReadyChecks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a584c0
	void AuthRemoveFromReadyCheck(struct APlayerState* InPlayerState); // Function AISpatialAwareness.RoomAssignerComponent.AuthRemoveFromReadyCheck // (Final|Native|Protected|BlueprintCallable) // @ game+0x3802110
	void AuthOnReadyCheckPassedResponse(struct APlayerState* InPlayerState); // Function AISpatialAwareness.RoomAssignerComponent.AuthOnReadyCheckPassedResponse // (Native|Event|Protected|BlueprintEvent) // @ game+0x38cc160
	void AuthOnAllReadyChecksPassedResponse(); // Function AISpatialAwareness.RoomAssignerComponent.AuthOnAllReadyChecksPassedResponse // (Native|Event|Protected|BlueprintEvent) // @ game+0x38221f0
	void AuthInitPendingReadyChecks(struct TArray<struct APlayerState*> InNewPendingReadyChecks); // Function AISpatialAwareness.RoomAssignerComponent.AuthInitPendingReadyChecks // (Final|Native|Protected|BlueprintCallable) // @ game+0x6a57d20
	void AuthImmediatePassAllPendingReadyChecks(); // Function AISpatialAwareness.RoomAssignerComponent.AuthImmediatePassAllPendingReadyChecks // (Final|Native|Protected|BlueprintCallable) // @ game+0x2118460
	void AuthCleanReadyCheckData(); // Function AISpatialAwareness.RoomAssignerComponent.AuthCleanReadyCheckData // (Final|Native|Protected|BlueprintCallable) // @ game+0x2118460
};

// Class AISpatialAwareness.RoomPathFinderComponent
// Size: 0xf0 (Inherited: 0xe8)
struct URoomPathFinderComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)

	float GetCostBetweenRooms(struct AMapMarkupRoom* FromRoom, struct AMapMarkupRoom* ToRoom); // Function AISpatialAwareness.RoomPathFinderComponent.GetCostBetweenRooms // (Native|Event|Protected|BlueprintEvent) // @ game+0x6a58110
	bool FindRoomPath(struct AMapMarkupRoom* Start, struct AMapMarkupRoom* Dest, struct TArray<struct AMapMarkupRoom*>& OutPath, float& OutDistance); // Function AISpatialAwareness.RoomPathFinderComponent.FindRoomPath // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6a57ef0
};

// Class AISpatialAwareness.RoomPathfinderDataComponent
// Size: 0x140 (Inherited: 0xe8)
struct URoomPathfinderDataComponent : UActorComponent {
	struct TMap<struct APlayerState*, struct FRoomPathfinderData> AssignedRoomPathfindingData; // 0xe8(0x50)
	char pad_138[0x8]; // 0x138(0x08)

	void MulticastSetRoomData(struct TArray<struct APlayerState*> InPlayerStates, struct TArray<struct FRoomPathfinderData> InData); // Function AISpatialAwareness.RoomPathfinderDataComponent.MulticastSetRoomData // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x6a58ba0
	struct FRoomPathfinderData GetRoomData(struct APlayerState* InPlayerState); // Function AISpatialAwareness.RoomPathfinderDataComponent.GetRoomData // (Final|Native|Public|BlueprintCallable) // @ game+0x6a585c0
	void ClearRoomData(struct APlayerState* InPlayerState); // Function AISpatialAwareness.RoomPathfinderDataComponent.ClearRoomData // (Final|Native|Public|BlueprintCallable) // @ game+0x6a57e20
	void AssignRoomData(struct APlayerState* InPlayerState, struct FRoomPathfinderData& InData); // Function AISpatialAwareness.RoomPathfinderDataComponent.AssignRoomData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6a57b50
};

// Class AISpatialAwareness.VisionConeNodeDetectorComponent
// Size: 0x160 (Inherited: 0xe8)
struct UVisionConeNodeDetectorComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnInfluenceNodesInConeUpdated; // 0xf0(0x10)
	struct UObject* VisibilityCheckerClass; // 0x100(0x08)
	float RefreshTickRate; // 0x108(0x04)
	float SightRadius; // 0x10c(0x04)
	float PeripheralVisionHalfAngleDegrees; // 0x110(0x04)
	float PointOfViewBackwardOffset; // 0x114(0x04)
	float NearClippingRadius; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct UObject* VisibilityCheckerObject; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)
	struct TArray<int32_t> CachedNodesInCone; // 0x130(0x10)
	struct TArray<int32_t> CachedVisibleNodes; // 0x140(0x10)
	struct UInfluenceMapNodeGraphComponent* CachedNodeGraphComp; // 0x150(0x08)
	char pad_158[0x8]; // 0x158(0x08)

	void AuthSetRefreshTickRate(float NewRefreshTickRate); // Function AISpatialAwareness.VisionConeNodeDetectorComponent.AuthSetRefreshTickRate // (Final|Native|Public|BlueprintCallable) // @ game+0x38707e0
	void AuthSetRefreshTickActive(bool bActivate); // Function AISpatialAwareness.VisionConeNodeDetectorComponent.AuthSetRefreshTickActive // (Final|Native|Public|BlueprintCallable) // @ game+0x3802470
};

// Class AISpatialAwareness.WaypointQueryEventsHelperBase
// Size: 0x38 (Inherited: 0x30)
struct UWaypointQueryEventsHelperBase : UObject {
	struct UBTService_RunWaypointQuery* OwnerService; // 0x30(0x08)

	void UnbindGameplayEvents(); // Function AISpatialAwareness.WaypointQueryEventsHelperBase.UnbindGameplayEvents // (Event|Protected|BlueprintEvent) // @ game+0x4282c30
	void BindGameplayEvents(); // Function AISpatialAwareness.WaypointQueryEventsHelperBase.BindGameplayEvents // (Event|Protected|BlueprintEvent) // @ game+0x4282c30
};

