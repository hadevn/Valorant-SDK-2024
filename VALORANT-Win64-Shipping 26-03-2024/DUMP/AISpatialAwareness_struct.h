// Enum AISpatialAwareness.ELayerBlockBehavior
enum class ELayerBlockBehavior : uint8 {
	AffectNone = 0,
	AffectBlockID = 1,
	AffectOtherBlockIDs = 2,
	AffectAllBlockIDs = 3,
	Count = 4,
	ELayerBlockBehavior_MAX = 5
};

// Enum AISpatialAwareness.EInfluenceLayerTag
enum class EInfluenceLayerTag : uint8 {
	Debug = 0,
	Hazard = 1,
	Position = 2,
	AllyThreat = 3,
	Count = 4,
	EInfluenceLayerTag_MAX = 5
};

// Enum AISpatialAwareness.EInfluenceSourceTag
enum class EInfluenceSourceTag : uint8 {
	TestTagA = 0,
	Count = 1,
	EInfluenceSourceTag_MAX = 2
};

// Enum AISpatialAwareness.EPropagationModifierTag
enum class EPropagationModifierTag : uint8 {
	Count = 0,
	EPropagationModifierTag_MAX = 1
};

// Enum AISpatialAwareness.EEnvTestWaypointVisibilityMode
enum class EEnvTestWaypointVisibilityMode : uint8 {
	Perception = 0,
	EEnvTestWaypointVisibilityMode_MAX = 1
};

// Enum AISpatialAwareness.EWaypointTypeFlags
enum class EWaypointTypeFlags : uint8 {
	None = 0,
	RoomEntrance = 1,
	DefensePoint = 2,
	ObjectivePoint = 4,
	All = 255,
	EWaypointTypeFlags_MAX = 256
};

// Enum AISpatialAwareness.EWaypointInfluenceQueryReturnType
enum class EWaypointInfluenceQueryReturnType : uint8 {
	Sum = 0,
	Average = 1,
	Count = 2,
	EWaypointInfluenceQueryReturnType_MAX = 3
};

// Enum AISpatialAwareness.ENodeOperation
enum class ENodeOperation : uint8 {
	Set = 0,
	SetWithModulation = 1,
	Increment = 2,
	Decrement = 3,
	Clear = 4,
	ENodeOperation_MAX = 5
};

// ScriptStruct AISpatialAwareness.InfluenceSourceRegistrationData
// Size: 0xe0 (Inherited: 0x00)
struct FInfluenceSourceRegistrationData {
	struct FPropagationParameters PropagationParameters; // 0x00(0x10)
	enum class EPropagationModifierTag PropagationTag; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FInfluenceIdentifiers InfluenceIdentifiers; // 0x18(0x28)
	struct TMap<int32_t, struct FStampedValue> StampedNodes; // 0x40(0x50)
	struct TMap<int32_t, float> InitialStampedNodeValues; // 0x90(0x50)
};

// ScriptStruct AISpatialAwareness.StampedValue
// Size: 0x18 (Inherited: 0x00)
struct FStampedValue {
	struct TArray<int32_t> StampedLayers; // 0x00(0x10)
	float StampedValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct AISpatialAwareness.InfluenceIdentifiers
// Size: 0x28 (Inherited: 0x00)
struct FInfluenceIdentifiers {
	struct TArray<enum class EInfluenceSourceTag> SourceTags; // 0x00(0x10)
	struct AActor* SourceActor; // 0x10(0x08)
	enum class EInfluenceLayerTag LayerTag; // 0x18(0x01)
	enum class ELayerBlockBehavior LayerBlockBehavior; // 0x19(0x01)
	char pad_1A[0xe]; // 0x1a(0x0e)
};

// ScriptStruct AISpatialAwareness.PropagationParameters
// Size: 0x10 (Inherited: 0x00)
struct FPropagationParameters {
	float MovementSpeed; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCurveFloat* ValueModulationCurve; // 0x08(0x08)
};

// ScriptStruct AISpatialAwareness.AISpatialAwarenessAmortizationQueue
// Size: 0x10 (Inherited: 0x00)
struct FAISpatialAwarenessAmortizationQueue {
	struct TArray<struct UObject*> AmortizationQueue; // 0x00(0x10)
};

// ScriptStruct AISpatialAwareness.WaypointQueryInfo
// Size: 0x28 (Inherited: 0x00)
struct FWaypointQueryInfo {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct AISpatialAwareness.InfluenceMapDebugData
// Size: 0x98 (Inherited: 0x00)
struct FInfluenceMapDebugData {
	struct TArray<int32_t> FocusedNodeIndices; // 0x00(0x10)
	struct FInfluenceLayerDebugInfo LayerDebugInfo; // 0x10(0x48)
	struct TArray<int32_t> NodeIndicesToDebugDraw; // 0x58(0x10)
	struct TArray<struct FInfluenceNodeSimpleDebugInfo> InfluenceNodeSimpleDebugInfo; // 0x68(0x10)
	struct TArray<struct FInfluenceNodeComplexDebugInfo> InfluenceNodeComplexDebugInfo; // 0x78(0x10)
	struct TArray<struct FInfluenceNodeNeighborDebugInfo> InfluenceNodeNeighborDebugInfo; // 0x88(0x10)
};

// ScriptStruct AISpatialAwareness.InfluenceNodeNeighborDebugInfo
// Size: 0x20 (Inherited: 0x00)
struct FInfluenceNodeNeighborDebugInfo {
	int32_t NodeIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> NodeNeighborIndices; // 0x08(0x10)
	int32_t NumHopsToOriginNode; // 0x18(0x04)
	float DistanceToOriginNode; // 0x1c(0x04)
};

// ScriptStruct AISpatialAwareness.InfluenceNodeComplexDebugInfo
// Size: 0x40 (Inherited: 0x00)
struct FInfluenceNodeComplexDebugInfo {
	int32_t NodeIndex; // 0x00(0x04)
	int32_t SeedNumber; // 0x04(0x04)
	float PropagatedToTimestamp; // 0x08(0x04)
	float ClearedTimestamp; // 0x0c(0x04)
	bool bPropagationFrontierNode; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString WaypointName; // 0x18(0x10)
	float WaypointValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FPropagationProgressDebugInfo> PropagationProgress; // 0x30(0x10)
};

// ScriptStruct AISpatialAwareness.PropagationProgressDebugInfo
// Size: 0x08 (Inherited: 0x00)
struct FPropagationProgressDebugInfo {
	int32_t NodeNeighborIndex; // 0x00(0x04)
	float DistanceTravelled; // 0x04(0x04)
};

// ScriptStruct AISpatialAwareness.InfluenceNodeSimpleDebugInfo
// Size: 0x0c (Inherited: 0x00)
struct FInfluenceNodeSimpleDebugInfo {
	int32_t NodeIndex; // 0x00(0x04)
	float Value; // 0x04(0x04)
	bool bRecentlyCleared; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct AISpatialAwareness.InfluenceLayerDebugInfo
// Size: 0x48 (Inherited: 0x00)
struct FInfluenceLayerDebugInfo {
	int32_t BlockID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString BlockIDDebugString; // 0x08(0x10)
	int32_t LayerID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString LayerIDDebugString; // 0x20(0x10)
	struct FString ActiveSourcesDebugString; // 0x30(0x10)
	bool bLayerPropagates; // 0x40(0x01)
	bool bPropagationPaused; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// ScriptStruct AISpatialAwareness.SavedInfoMap
// Size: 0x50 (Inherited: 0x00)
struct FSavedInfoMap {
	struct TMap<int32_t, struct FPropagationSavedInfo> LayerToPropagationSavedInfo; // 0x00(0x50)
};

// ScriptStruct AISpatialAwareness.PropagationSavedInfo
// Size: 0x08 (Inherited: 0x00)
struct FPropagationSavedInfo {
	float PropagatedToTimestamp; // 0x00(0x04)
	float ClearedTimestamp; // 0x04(0x04)
};

// ScriptStruct AISpatialAwareness.ClientRequestedInfluenceMapDebugData
// Size: 0x08 (Inherited: 0x00)
struct FClientRequestedInfluenceMapDebugData {
	bool bNodeDebuggingEnabled; // 0x00(0x01)
	bool bDrawNodeConnectivityEnabled; // 0x01(0x01)
	bool bFocusedNodeIndexLocked; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t NumHopsToShow; // 0x04(0x04)
};

// ScriptStruct AISpatialAwareness.InfluenceMapLayer
// Size: 0x38 (Inherited: 0x00)
struct FInfluenceMapLayer {
	struct TArray<struct UInfluenceSourceComponentBase*> ActiveSources; // 0x00(0x10)
	struct TArray<enum class EInfluenceSourceTag> SourceTags; // 0x10(0x10)
	enum class EInfluenceLayerTag Tag; // 0x20(0x01)
	char pad_21[0xb]; // 0x21(0x0b)
	enum class EPropagationModifierTag PropagationTag; // 0x2c(0x01)
	bool bPropagates; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	int32_t SeedNumber; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct AISpatialAwareness.InfluenceLayerID
// Size: 0x04 (Inherited: 0x00)
struct FInfluenceLayerID {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct AISpatialAwareness.InfluenceLayerBlockID
// Size: 0x04 (Inherited: 0x00)
struct FInfluenceLayerBlockID {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct AISpatialAwareness.InfluenceMapNode
// Size: 0x30 (Inherited: 0x00)
struct FInfluenceMapNode {
	struct FVector NodeLocation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FLayerValue> LayerValueMap; // 0x10(0x10)
	struct TArray<struct FNodeConnectionInfo> NodeConnectionInfo; // 0x20(0x10)
};

// ScriptStruct AISpatialAwareness.NodeConnectionInfo
// Size: 0x08 (Inherited: 0x00)
struct FNodeConnectionInfo {
	int32_t NodeIndex; // 0x00(0x04)
	float Distance; // 0x04(0x04)
};

// ScriptStruct AISpatialAwareness.LayerValue
// Size: 0x18 (Inherited: 0x00)
struct FLayerValue {
	int32_t SeedNumber; // 0x00(0x04)
	float Value; // 0x04(0x04)
	float ModulationStartTimestamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* ModulationCurve; // 0x10(0x08)
};

// ScriptStruct AISpatialAwareness.NodeOperationsList
// Size: 0x10 (Inherited: 0x00)
struct FNodeOperationsList {
	struct TArray<struct FNodeOperation> Operations; // 0x00(0x10)
};

// ScriptStruct AISpatialAwareness.NodeOperation
// Size: 0x28 (Inherited: 0x00)
struct FNodeOperation {
	enum class ENodeOperation Operation; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
	int32_t SeedNumber; // 0x08(0x04)
	float ModulationTimestamp; // 0x0c(0x04)
	struct UCurveFloat* ModulationCurve; // 0x10(0x08)
	struct TArray<int32_t> AffectedLayerIndices; // 0x18(0x10)
};

// ScriptStruct AISpatialAwareness.InfluenceMapQuery
// Size: 0x0c (Inherited: 0x00)
struct FInfluenceMapQuery {
	struct FVector SourcePosition; // 0x00(0x0c)
};

// ScriptStruct AISpatialAwareness.MovementLayerPropagationInfo
// Size: 0x78 (Inherited: 0x00)
struct FMovementLayerPropagationInfo {
	int32_t SeedNumber; // 0x00(0x04)
	bool bPaused; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FPropagationParameters PropagationParameters; // 0x08(0x10)
	struct TArray<struct FFrontierNodePropagationInfo> FrontierNodePropagationInfo; // 0x18(0x10)
	struct TMap<int32_t, float> ClearedNodeTimestamps; // 0x28(0x50)
};

// ScriptStruct AISpatialAwareness.FrontierNodePropagationInfo
// Size: 0x08 (Inherited: 0x00)
struct FFrontierNodePropagationInfo {
	int32_t NodeIndex; // 0x00(0x04)
	float PropagatedToTimestamp; // 0x04(0x04)
};

// ScriptStruct AISpatialAwareness.MapMarkupWaypointDebugData
// Size: 0x30 (Inherited: 0x00)
struct FMapMarkupWaypointDebugData {
	struct TArray<struct AMapMarkupWaypoint*> FocusedWaypoints; // 0x00(0x10)
	struct TArray<struct AMapMarkupRoom*> FocusedRooms; // 0x10(0x10)
	struct TArray<struct AMapMarkupWaypoint*> WaypointsToDebugDraw; // 0x20(0x10)
};

// ScriptStruct AISpatialAwareness.ClientRequestedWaypointDebugData
// Size: 0x05 (Inherited: 0x00)
struct FClientRequestedWaypointDebugData {
	bool bWaypointDebuggingEnabled; // 0x00(0x01)
	bool bDrawVisibilityConnectionsEnabled; // 0x01(0x01)
	bool bRelevantWaypointsByRoom; // 0x02(0x01)
	bool bLockOriginWaypoint; // 0x03(0x01)
	bool bLockOriginRoom; // 0x04(0x01)
};

// ScriptStruct AISpatialAwareness.WaypointsForNavMeshPoly
// Size: 0x10 (Inherited: 0x00)
struct FWaypointsForNavMeshPoly {
	struct TArray<struct AMapMarkupWaypoint*> Waypoints; // 0x00(0x10)
};

// ScriptStruct AISpatialAwareness.NodeInfo
// Size: 0x28 (Inherited: 0x00)
struct FNodeInfo {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AMapMarkupWaypoint* Waypoint; // 0x10(0x08)
	struct TArray<struct FNeighboringNodeInfo> NeighboringNodesInfo; // 0x18(0x10)
};

// ScriptStruct AISpatialAwareness.NeighboringNodeInfo
// Size: 0x10 (Inherited: 0x00)
struct FNeighboringNodeInfo {
	struct FVector Location; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
};

// ScriptStruct AISpatialAwareness.RoomPathfinderData
// Size: 0x28 (Inherited: 0x00)
struct FRoomPathfinderData {
	struct AMapMarkupRoom* DestinationRoom; // 0x00(0x08)
	struct TArray<struct AMapMarkupRoom*> PreferredPathRooms; // 0x08(0x10)
	struct TArray<struct AMapMarkupRoom*> AvoidPathRooms; // 0x18(0x10)
};

