// Class VTSPlugin.VTSGameTimelineManager
// Size: 0x40 (Inherited: 0x30)
struct UVTSGameTimelineManager : UObject {
	struct TArray<struct UVTSPlayerTimelineSynchronizer*> PlayerTimelineSynchronizers; // 0x30(0x10)
};

// Class VTSPlugin.VTSAuthorityGameTimelineManager
// Size: 0x50 (Inherited: 0x40)
struct UVTSAuthorityGameTimelineManager : UVTSGameTimelineManager {
	struct UVTSFixedTimeStepTimeline* AuthorityFixedTimeStepTimeline; // 0x40(0x08)
	struct UVTSFixedTimeStepTimelineAPI* AuthorityFixedTimeStepTimelineAPI; // 0x48(0x08)
};

// Class VTSPlugin.VTSPlayerTimelineSynchronizer
// Size: 0xa0 (Inherited: 0x30)
struct UVTSPlayerTimelineSynchronizer : UObject {
	bool bHasBasis; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t Basis; // 0x34(0x04)
	char pad_38[0x68]; // 0x38(0x68)
};

// Class VTSPlugin.VTSAuthorityPlayerTimelineSynchronizer
// Size: 0xb0 (Inherited: 0xa0)
struct UVTSAuthorityPlayerTimelineSynchronizer : UVTSPlayerTimelineSynchronizer {
	struct UVTSFixedTimeStepTimeline* AuthorityFixedTimeStepTimeline; // 0xa0(0x08)
	struct UVTSTimeShiftMonitor* AuthorityTimeShiftMonitor; // 0xa8(0x08)

	void Rebase(); // Function VTSPlugin.VTSAuthorityPlayerTimelineSynchronizer.Rebase // (Final|Native|Public|BlueprintCallable) // @ game+0x2ba1d80
};

// Class VTSPlugin.VTSAutonomousGameTimelineManager
// Size: 0x60 (Inherited: 0x40)
struct UVTSAutonomousGameTimelineManager : UVTSGameTimelineManager {
	struct UVTSFixedTimeStepTimeline* AutonomousFixedTimeStepTimeline; // 0x40(0x08)
	struct UVTSFixedTimeStepTimelineAPI* AutonomousFixedTimeStepTimelineAPI; // 0x48(0x08)
	struct UVTSFixedTimeStepTimeline* RemoteFixedTimeStepTimeline; // 0x50(0x08)
	struct UVTSFixedTimeStepTimelineAPI* RemoteFixedTimeStepTimelineAPI; // 0x58(0x08)
};

// Class VTSPlugin.VTSAutonomousPlayerTimelineSynchronizer
// Size: 0xc0 (Inherited: 0xa0)
struct UVTSAutonomousPlayerTimelineSynchronizer : UVTSPlayerTimelineSynchronizer {
	struct UVTSFixedTimeStepTimeline* AutonomousFixedTimeStepTimeline; // 0xa0(0x08)
	struct UVTSFixedTimeStepTimeline* RemoteFixedTimeStepTimeline; // 0xa8(0x08)
	struct UVTSTimeShiftMonitee* AutonomousTimeShiftMonitee; // 0xb0(0x08)
	struct UVTSRemoteTimeShifter* RemoteTimeShifter; // 0xb8(0x08)

	void Rebase(); // Function VTSPlugin.VTSAutonomousPlayerTimelineSynchronizer.Rebase // (Final|Native|Public|BlueprintCallable) // @ game+0x2ba1da0
};

// Class VTSPlugin.VTSFixedTimeStepTimeline
// Size: 0xb8 (Inherited: 0x30)
struct UVTSFixedTimeStepTimeline : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct TArray<struct TScriptInterface<IVTSTimeSynchronizedInterface>> TimeSynchronizedObjects; // 0x48(0x10)
	struct TMap<struct UObject*, struct UVTSTimeSynchronizedInterfaceBlueprintAdapter*> ObjectAdapterMap; // 0x58(0x50)
	struct TArray<struct FVTSTimeStampDelegate> TimeStampDelegates; // 0xa8(0x10)
};

// Class VTSPlugin.VTSFixedTimeStepTimelineAPI
// Size: 0x38 (Inherited: 0x30)
struct UVTSFixedTimeStepTimelineAPI : UObject {
	struct UVTSFixedTimeStepTimeline* FixedTimeStepTimeline; // 0x30(0x08)

	void UnregisterTimeSynchronizedObjectBlueprint(struct UObject* TimeSynchronizedObjectBlueprint); // Function VTSPlugin.VTSFixedTimeStepTimelineAPI.UnregisterTimeSynchronizedObjectBlueprint // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x2ba1f60
	bool SetTimeStampDelegateBlueprint(struct FVTSTimeStampIndex& TimeStampIndex, struct FDelegate TimeStampActionDynamicDelegate); // Function VTSPlugin.VTSFixedTimeStepTimelineAPI.SetTimeStampDelegateBlueprint // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ba1e50
	void RegisterTimeSynchronizedObjectBlueprint(struct UObject* TimeSynchronizedObjectBlueprint); // Function VTSPlugin.VTSFixedTimeStepTimelineAPI.RegisterTimeSynchronizedObjectBlueprint // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x2ba1dc0
	float GetRemainingRequiredSimulationTime(); // Function VTSPlugin.VTSFixedTimeStepTimelineAPI.GetRemainingRequiredSimulationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ba1d50
	float GetInterpolationValue(); // Function VTSPlugin.VTSFixedTimeStepTimelineAPI.GetInterpolationValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ba1d20
	float GetFixedTimeStepSize(); // Function VTSPlugin.VTSFixedTimeStepTimelineAPI.GetFixedTimeStepSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ba1cf0
	struct FVTSTimeStampIndex GetCurrentTimeStampIndex(); // Function VTSPlugin.VTSFixedTimeStepTimelineAPI.GetCurrentTimeStampIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ba1cb0
};

// Class VTSPlugin.VTSMoniteeTimeShiftCoreInterface
// Size: 0x30 (Inherited: 0x30)
struct UVTSMoniteeTimeShiftCoreInterface : UInterface {
};

// Class VTSPlugin.VTSMonitorTimeShiftCoreInterface
// Size: 0x30 (Inherited: 0x30)
struct UVTSMonitorTimeShiftCoreInterface : UInterface {
};

// Class VTSPlugin.VTSRemoteTimeShifter
// Size: 0x58 (Inherited: 0x30)
struct UVTSRemoteTimeShifter : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TScriptInterface<IVTSMonitorTimeShiftCoreInterface> MonitorCoreInterface; // 0x38(0x10)
	struct TScriptInterface<IVTSMoniteeTimeShiftCoreInterface> MoniteeCoreInterface; // 0x48(0x10)
};

// Class VTSPlugin.VTSTAppEmulationData
// Size: 0x30 (Inherited: 0x30)
struct UVTSTAppEmulationData : UObject {
};

// Class VTSPlugin.VTSTBasicTestAppEmulationData
// Size: 0x40 (Inherited: 0x30)
struct UVTSTBasicTestAppEmulationData : UVTSTAppEmulationData {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class VTSPlugin.VTSTTest
// Size: 0x30 (Inherited: 0x30)
struct UVTSTTest : UObject {
};

// Class VTSPlugin.VTSTBasicTestEnvironmentEmulatorTest
// Size: 0x50 (Inherited: 0x30)
struct UVTSTBasicTestEnvironmentEmulatorTest : UVTSTTest {
	struct FVTSTBasicTestEnvironmentEmulatorTrackingData TrackingData; // 0x30(0x10)
	struct TArray<struct UVTSTBasicTestTestParticipant*> Participants; // 0x40(0x10)
};

// Class VTSPlugin.VTSTBasicTestTest
// Size: 0x50 (Inherited: 0x30)
struct UVTSTBasicTestTest : UVTSTTest {
	struct UVTSTBasicTestTestParticipant* Participant; // 0x30(0x08)
	char pad_38[0x18]; // 0x38(0x18)
};

// Class VTSPlugin.VTSTTestParticipant
// Size: 0x40 (Inherited: 0x30)
struct UVTSTTestParticipant : UObject {
	struct UVTSTAppEmulationData* AppData; // 0x30(0x08)
	struct UVTSTTransportEmulationData* TransportData; // 0x38(0x08)
};

// Class VTSPlugin.VTSTBasicTestTestParticipant
// Size: 0x48 (Inherited: 0x40)
struct UVTSTBasicTestTestParticipant : UVTSTTestParticipant {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class VTSPlugin.VTSTTransportEmulationData
// Size: 0x38 (Inherited: 0x30)
struct UVTSTTransportEmulationData : UObject {
	struct UVTSTTestParticipant* Destination; // 0x30(0x08)
};

// Class VTSPlugin.VTSTBasicTestTransportEmulationData
// Size: 0x48 (Inherited: 0x38)
struct UVTSTBasicTestTransportEmulationData : UVTSTTransportEmulationData {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class VTSPlugin.VTSTClientManager
// Size: 0x48 (Inherited: 0x40)
struct UVTSTClientManager : UVTSTTestParticipant {
	struct UVTSAutonomousGameTimelineManager* AutonomousTimelineManager; // 0x40(0x08)
};

// Class VTSPlugin.VTSTClientPlayerTimelineSynchronizer
// Size: 0x48 (Inherited: 0x40)
struct UVTSTClientPlayerTimelineSynchronizer : UVTSTTestParticipant {
	struct UVTSAutonomousPlayerTimelineSynchronizer* AutonomousPlayerTimelineSynchronizer; // 0x40(0x08)
};

// Class VTSPlugin.VTSTConstantDeltaTimeAppEmulationData
// Size: 0x38 (Inherited: 0x30)
struct UVTSTConstantDeltaTimeAppEmulationData : UVTSTAppEmulationData {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class VTSPlugin.VTSTConstantLatencyTransportEmulationData
// Size: 0x48 (Inherited: 0x38)
struct UVTSTConstantLatencyTransportEmulationData : UVTSTTransportEmulationData {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class VTSPlugin.VTSTEnvironmentEmulator
// Size: 0x58 (Inherited: 0x30)
struct UVTSTEnvironmentEmulator : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct TArray<struct UVTSTSimulationInstruction*> SimulationInstructions; // 0x48(0x10)
};

// Class VTSPlugin.VTSTimeShiftMonitee
// Size: 0x48 (Inherited: 0x30)
struct UVTSTimeShiftMonitee : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TScriptInterface<IVTSMoniteeTimeShiftCoreInterface> MoniteeCoreInterface; // 0x38(0x10)
};

// Class VTSPlugin.VTSTimeShiftMonitor
// Size: 0x40 (Inherited: 0x30)
struct UVTSTimeShiftMonitor : UObject {
	struct TScriptInterface<IVTSMonitorTimeShiftCoreInterface> MonitorCoreInterface; // 0x30(0x10)
};

// Class VTSPlugin.VTSTimeSynchronizedInterface
// Size: 0x30 (Inherited: 0x30)
struct UVTSTimeSynchronizedInterface : UInterface {
};

// Class VTSPlugin.VTSTimeSynchronizedInterfaceBlueprint
// Size: 0x30 (Inherited: 0x30)
struct UVTSTimeSynchronizedInterfaceBlueprint : UInterface {

	void OnRebaseBlueprint(); // Function VTSPlugin.VTSTimeSynchronizedInterfaceBlueprint.OnRebaseBlueprint // (Event|Public|BlueprintEvent) // @ game+0x4317a70
	void OnPreFixedTimeStepsBlueprint(float ResidualTimeSeconds); // Function VTSPlugin.VTSTimeSynchronizedInterfaceBlueprint.OnPreFixedTimeStepsBlueprint // (Event|Public|BlueprintEvent) // @ game+0x4317a70
	void OnPostFixedTimeStepsBlueprint(float ResidualTimeSeconds); // Function VTSPlugin.VTSTimeSynchronizedInterfaceBlueprint.OnPostFixedTimeStepsBlueprint // (Event|Public|BlueprintEvent) // @ game+0x4317a70
	void OnFixedTimeStepBlueprint(struct FVTSTimeStampIndex& TimeStampIndex); // Function VTSPlugin.VTSTimeSynchronizedInterfaceBlueprint.OnFixedTimeStepBlueprint // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x4317a70
	int32_t GetFixedTimeStepPriorityBlueprint(); // Function VTSPlugin.VTSTimeSynchronizedInterfaceBlueprint.GetFixedTimeStepPriorityBlueprint // (Event|Public|BlueprintEvent|Const) // @ game+0x4317a70
};

// Class VTSPlugin.VTSTimeSynchronizedInterfaceBlueprintAdapter
// Size: 0x40 (Inherited: 0x30)
struct UVTSTimeSynchronizedInterfaceBlueprintAdapter : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UObject* TimeSynchronizedBlueprintObject; // 0x38(0x08)
};

// Class VTSPlugin.VTSTServerManager
// Size: 0x50 (Inherited: 0x40)
struct UVTSTServerManager : UVTSTTestParticipant {
	struct UVTSAuthorityGameTimelineManager* AuthorityTimelineManager; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class VTSPlugin.VTSTServerPlayerTimelineSynchronizer
// Size: 0x48 (Inherited: 0x40)
struct UVTSTServerPlayerTimelineSynchronizer : UVTSTTestParticipant {
	struct UVTSAuthorityPlayerTimelineSynchronizer* AuthorityPlayerTimelineSynchronizer; // 0x40(0x08)
};

// Class VTSPlugin.VTSTSimulationInstruction
// Size: 0x110 (Inherited: 0x30)
struct UVTSTSimulationInstruction : UObject {
	char pad_30[0xe0]; // 0x30(0xe0)
};

// Class VTSPlugin.VTSTTestResult
// Size: 0x58 (Inherited: 0x30)
struct UVTSTTestResult : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class VTSPlugin.VTSTVALGameObjectTest
// Size: 0x50 (Inherited: 0x30)
struct UVTSTVALGameObjectTest : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString LogPrefix; // 0x38(0x10)
	struct FVTSTimeStampIndex MostRecentTimeStampIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class VTSPlugin.VTSTValTest
// Size: 0xc8 (Inherited: 0x30)
struct UVTSTValTest : UVTSTTest {
	struct UVTSTServerManager* ServerManager; // 0x30(0x08)
	struct TArray<struct UVTSTClientManager*> ClientManagers; // 0x38(0x10)
	struct TArray<struct UVTSTServerPlayerTimelineSynchronizer*> ServerPlayers; // 0x48(0x10)
	struct TArray<struct UVTSTClientPlayerTimelineSynchronizer*> ClientPlayers; // 0x58(0x10)
	struct TArray<struct UVTSTVALGameObjectTest*> ServerPlayerGameObjects; // 0x68(0x10)
	struct TArray<struct UVTSTVALGameObjectTest*> ClientPlayerGameObjects; // 0x78(0x10)
	struct FVTSTValTestTrackingData TrackingData; // 0x88(0x40)
};

// Class VTSPlugin.VTSVALHeartbeatQueue
// Size: 0x60 (Inherited: 0x30)
struct UVTSVALHeartbeatQueue : UObject {
	char pad_30[0x30]; // 0x30(0x30)
};

// Class VTSPlugin.VTSVALMaxTimeShiftMagnitudeStrategyConfig
// Size: 0x30 (Inherited: 0x30)
struct UVTSVALMaxTimeShiftMagnitudeStrategyConfig : UObject {
};

// Class VTSPlugin.VTSVALMaxTimeShiftMagnitudeStrategy
// Size: 0x38 (Inherited: 0x30)
struct UVTSVALMaxTimeShiftMagnitudeStrategy : UObject {
	struct UVTSVALMaxTimeShiftMagnitudeStrategyConfig* MaxTimeShiftMagnitudeStrategyConfig; // 0x30(0x08)
};

// Class VTSPlugin.VTSVALMoniteeTimeShiftCoreConfig
// Size: 0x30 (Inherited: 0x30)
struct UVTSVALMoniteeTimeShiftCoreConfig : UObject {
};

// Class VTSPlugin.VTSVALMoniteeTimeShiftCore
// Size: 0x48 (Inherited: 0x30)
struct UVTSVALMoniteeTimeShiftCore : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UVTSVALMoniteeTimeShiftCoreConfig* MoniteeTimeShiftCoreConfig; // 0x38(0x08)
	struct UVTSVALMaxTimeShiftMagnitudeStrategy* MaxTimeShiftMagnitudeStrategy; // 0x40(0x08)
};

// Class VTSPlugin.VTSVALMonitorTimeShiftCoreConfig
// Size: 0x40 (Inherited: 0x30)
struct UVTSVALMonitorTimeShiftCoreConfig : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class VTSPlugin.VTSVALMonitorTimeShiftCore
// Size: 0x68 (Inherited: 0x30)
struct UVTSVALMonitorTimeShiftCore : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UVTSVALMonitorTimeShiftCoreConfig* MonitorTimeShiftCoreConfig; // 0x38(0x08)
	struct UVTSVALMaxTimeShiftMagnitudeStrategy* MaxTimeShiftMagnitudeStrategy; // 0x40(0x08)
	struct UVTSVALTimeShiftMonitorQueueEvaluationStrategy* TimeShiftMonitorQueueEvaluationStrategy; // 0x48(0x08)
	struct UVTSVALTimeShiftMonitorQueueSizeTargetStrategy* TimeShiftMonitorQueueSizeTargetStrategy; // 0x50(0x08)
	struct UVTSVALTimeShiftMonitorRebaseStrategy* TimeShiftMonitorRebaseStrategy; // 0x58(0x08)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class VTSPlugin.VTSVALNoOpTimeShiftCore
// Size: 0x40 (Inherited: 0x30)
struct UVTSVALNoOpTimeShiftCore : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class VTSPlugin.VTSVALRichCurveMaxTimeShiftMagnitudeStrategyConfig
// Size: 0x48 (Inherited: 0x30)
struct UVTSVALRichCurveMaxTimeShiftMagnitudeStrategyConfig : UVTSVALMaxTimeShiftMagnitudeStrategyConfig {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class VTSPlugin.VTSVALRichCurveMaxTimeShiftMagnitudeStrategy
// Size: 0xc8 (Inherited: 0x38)
struct UVTSVALRichCurveMaxTimeShiftMagnitudeStrategy : UVTSVALMaxTimeShiftMagnitudeStrategy {
	struct UVTSVALRichCurveMaxTimeShiftMagnitudeStrategyConfig* RichCurveMaxTimeShiftMagnitudeStrategyConfig; // 0x38(0x08)
	struct FRuntimeFloatCurve ShiftApplyRateCurve; // 0x40(0x88)
};

// Class VTSPlugin.VTSVALMonitorTimeShiftCorePreset
// Size: 0x58 (Inherited: 0x30)
struct UVTSVALMonitorTimeShiftCorePreset : UObject {
	struct UVTSVALMonitorTimeShiftCoreConfig* MonitorTimeShiftCoreConfig; // 0x30(0x08)
	struct UVTSVALRichCurveMaxTimeShiftMagnitudeStrategy* MaxTimeShiftMagnitudeStrategy; // 0x38(0x08)
	struct UVTSVALTimeShiftMonitorFixedQueueSizeTargetStrategy* QueueSizeTargetStrategy; // 0x40(0x08)
	struct UVTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategy* QueueEvaluationStrategy; // 0x48(0x08)
	struct UVTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategy* RebaseStrategy; // 0x50(0x08)
};

// Class VTSPlugin.VTSVALMoniteeTimeShiftCorePreset
// Size: 0x40 (Inherited: 0x30)
struct UVTSVALMoniteeTimeShiftCorePreset : UObject {
	struct UVTSVALMoniteeTimeShiftCoreConfig* MoniteeTimeShiftCoreConfig; // 0x30(0x08)
	struct UVTSVALRichCurveMaxTimeShiftMagnitudeStrategy* MaxTimeShiftMagnitudeStrategy; // 0x38(0x08)
};

// Class VTSPlugin.VTSVALRemoteTimeShifterMonitorTimeShiftCorePreset
// Size: 0x58 (Inherited: 0x30)
struct UVTSVALRemoteTimeShifterMonitorTimeShiftCorePreset : UObject {
	struct UVTSVALMonitorTimeShiftCoreConfig* MonitorTimeShiftCoreConfig; // 0x30(0x08)
	struct UVTSVALRichCurveMaxTimeShiftMagnitudeStrategy* MaxTimeShiftMagnitudeStrategy; // 0x38(0x08)
	struct UVTSVALTimeShiftMonitorFixedQueueSizeTargetStrategy* QueueSizeTargetStrategy; // 0x40(0x08)
	struct UVTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategy* QueueEvaluationStrategy; // 0x48(0x08)
	struct UVTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategy* RebaseStrategy; // 0x50(0x08)
};

// Class VTSPlugin.VTSVALRemoteTimeShifterMoniteeTimeShiftCorePreset
// Size: 0x40 (Inherited: 0x30)
struct UVTSVALRemoteTimeShifterMoniteeTimeShiftCorePreset : UObject {
	struct UVTSVALMoniteeTimeShiftCoreConfig* MoniteeTimeShiftCoreConfig; // 0x30(0x08)
	struct UVTSVALRichCurveMaxTimeShiftMagnitudeStrategy* MaxTimeShiftMagnitudeStrategy; // 0x38(0x08)
};

// Class VTSPlugin.VTSVALTimeShiftMonitorQueueSizeTargetStrategyConfig
// Size: 0x30 (Inherited: 0x30)
struct UVTSVALTimeShiftMonitorQueueSizeTargetStrategyConfig : UObject {
};

// Class VTSPlugin.VTSVALTimeShiftMonitorFixedQueueSizeTargetStrategyConfig
// Size: 0x38 (Inherited: 0x30)
struct UVTSVALTimeShiftMonitorFixedQueueSizeTargetStrategyConfig : UVTSVALTimeShiftMonitorQueueSizeTargetStrategyConfig {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class VTSPlugin.VTSVALTimeShiftMonitorQueueSizeTargetStrategy
// Size: 0x38 (Inherited: 0x30)
struct UVTSVALTimeShiftMonitorQueueSizeTargetStrategy : UObject {
	struct UVTSVALTimeShiftMonitorQueueSizeTargetStrategyConfig* TimeShiftMonitorQueueSizeTargetStrategyConfig; // 0x30(0x08)
};

// Class VTSPlugin.VTSVALTimeShiftMonitorFixedQueueSizeTargetStrategy
// Size: 0x40 (Inherited: 0x38)
struct UVTSVALTimeShiftMonitorFixedQueueSizeTargetStrategy : UVTSVALTimeShiftMonitorQueueSizeTargetStrategy {
	struct UVTSVALTimeShiftMonitorFixedQueueSizeTargetStrategyConfig* TimeShiftMonitorFixedQueueSizeTargetStrategyConfig; // 0x38(0x08)
};

// Class VTSPlugin.VTSVALTimeShiftMonitorQueueEvaluationStrategyConfig
// Size: 0x48 (Inherited: 0x30)
struct UVTSVALTimeShiftMonitorQueueEvaluationStrategyConfig : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class VTSPlugin.VTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategyConfig
// Size: 0x58 (Inherited: 0x48)
struct UVTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategyConfig : UVTSVALTimeShiftMonitorQueueEvaluationStrategyConfig {
	char pad_48[0x10]; // 0x48(0x10)
};

// Class VTSPlugin.VTSVALTimeShiftMonitorQueueEvaluationStrategy
// Size: 0x38 (Inherited: 0x30)
struct UVTSVALTimeShiftMonitorQueueEvaluationStrategy : UObject {
	struct UVTSVALTimeShiftMonitorQueueEvaluationStrategyConfig* TimeShiftMonitorQueueEvaluationStrategyConfig; // 0x30(0x08)
};

// Class VTSPlugin.VTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategy
// Size: 0x70 (Inherited: 0x38)
struct UVTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategy : UVTSVALTimeShiftMonitorQueueEvaluationStrategy {
	struct UVTSVALTimeShiftMonitorMinAbsDistanceQueueEvaluationStrategyConfig* TimeShiftMonitorMinAbsDistanceQueueEvaluationStrategyConfig; // 0x38(0x08)
	struct UVTSVALHeartbeatQueue* HeartbeatQueue; // 0x40(0x08)
	char pad_48[0x28]; // 0x48(0x28)
};

// Class VTSPlugin.VTSVALTimeShiftMonitorRebaseStrategyConfig
// Size: 0x30 (Inherited: 0x30)
struct UVTSVALTimeShiftMonitorRebaseStrategyConfig : UObject {
};

// Class VTSPlugin.VTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategyConfig
// Size: 0x40 (Inherited: 0x30)
struct UVTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategyConfig : UVTSVALTimeShiftMonitorRebaseStrategyConfig {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class VTSPlugin.VTSVALTimeShiftMonitorRebaseStrategy
// Size: 0x38 (Inherited: 0x30)
struct UVTSVALTimeShiftMonitorRebaseStrategy : UObject {
	struct UVTSVALTimeShiftMonitorRebaseStrategyConfig* TimeShiftMonitorRebaseStrategyConfig; // 0x30(0x08)
};

// Class VTSPlugin.VTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategy
// Size: 0x50 (Inherited: 0x38)
struct UVTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategy : UVTSVALTimeShiftMonitorRebaseStrategy {
	struct UVTSVALTimeShiftMonitorOverqueuedFailedInsertionRebaseStrategyConfig* TimeShiftMonitorOverqueuedFailedInsertionRebaseStrategyConfig; // 0x38(0x08)
	struct UVTSVALHeartbeatQueue* HeartbeatQueue; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class VTSPlugin.VTSVALTimeShiftMonitorRemoteDelayQueueSizeTargetStrategyConfig
// Size: 0x50 (Inherited: 0x30)
struct UVTSVALTimeShiftMonitorRemoteDelayQueueSizeTargetStrategyConfig : UVTSVALTimeShiftMonitorQueueSizeTargetStrategyConfig {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class VTSPlugin.VTSVALTimeShiftMonitorRemoteDelayQueueSizeTargetStrategy
// Size: 0x40 (Inherited: 0x38)
struct UVTSVALTimeShiftMonitorRemoteDelayQueueSizeTargetStrategy : UVTSVALTimeShiftMonitorQueueSizeTargetStrategy {
	struct UVTSVALTimeShiftMonitorRemoteDelayQueueSizeTargetStrategyConfig* TimeShiftMonitorFixedQueueSizeTargetStrategyConfig; // 0x38(0x08)
};

