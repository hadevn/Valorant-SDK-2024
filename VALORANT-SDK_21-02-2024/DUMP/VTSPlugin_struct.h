// Enum VTSPlugin.EVTSPlayerSynchronizationEventType
enum class EVTSPlayerSynchronizationEventType : uint8 {
	AutonomousHeartbeat = 0,
	RemoteHeartbeat = 1,
	TimeShift = 2,
	FixedTimeStepSizeChange = 3,
	Count = 4,
	EVTSPlayerSynchronizationEventType_MAX = 5
};

// Enum VTSPlugin.EVTSSerializeResult
enum class EVTSSerializeResult : uint8 {
	SuccessWithPayload = 0,
	SuccessEmptyPayload = 1,
	SerializationError = 2,
	EVTSSerializeResult_MAX = 3
};

// Enum VTSPlugin.EVTSTSerializationChannel
enum class EVTSTSerializationChannel : uint8 {
	Reliable = 0,
	Unreliable = 1,
	EVTSTSerializationChannel_MAX = 2
};

// Enum VTSPlugin.EVTSTInstructionType
enum class EVTSTInstructionType : uint8 {
	Delivery = 0,
	Tick = 1,
	EVTSTInstructionType_MAX = 2
};

// Enum VTSPlugin.EVTSVALHeartbeatDequeueHealth
enum class EVTSVALHeartbeatDequeueHealth : uint8 {
	Good = 0,
	ForwardPredictedGap = 1,
	ForwardPredicted = 2,
	NoBasis = 3,
	EVTSVALHeartbeatDequeueHealth_MAX = 4
};

// Enum VTSPlugin.EVTSVALHeartbeatEnqueueHealth
enum class EVTSVALHeartbeatEnqueueHealth : uint8 {
	Perfect = 0,
	Good = 1,
	Outdated = 2,
	Duplicate = 3,
	OverCapacity = 4,
	EVTSVALHeartbeatEnqueueHealth_MAX = 5
};

// Enum VTSPlugin.EVTSVALTimeShiftMonitorRemoteDelayCondition
enum class EVTSVALTimeShiftMonitorRemoteDelayCondition : uint8 {
	Optimal = 0,
	Average = 1,
	Poor = 2,
	EVTSVALTimeShiftMonitorRemoteDelayCondition_MAX = 3
};

// ScriptStruct VTSPlugin.VTSTimeStampIndex
// Size: 0x04 (Inherited: 0x00)
struct FVTSTimeStampIndex {
	uint32_t Value; // 0x00(0x04)
};

// ScriptStruct VTSPlugin.VTSPlayerSynchronizationEvent
// Size: 0x14 (Inherited: 0x00)
struct FVTSPlayerSynchronizationEvent {
	enum class EVTSPlayerSynchronizationEventType EventType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVTSTimeStampIndex TimeStampIndex; // 0x04(0x04)
	uint32_t HeartbeatCount; // 0x08(0x04)
	float AutonomousTimeShiftAmount; // 0x0c(0x04)
	float FixedTimeStepSize; // 0x10(0x04)
};

// ScriptStruct VTSPlugin.VTSTBasicTestEnvironmentEmulatorTrackingData
// Size: 0x10 (Inherited: 0x00)
struct FVTSTBasicTestEnvironmentEmulatorTrackingData {
	struct TArray<struct FVTSTBasicTestEnvironmentEmulatorInstructionTrackingData> PostInstructionStates; // 0x00(0x10)
};

// ScriptStruct VTSPlugin.VTSTBasicTestEnvironmentEmulatorInstructionTrackingData
// Size: 0x20 (Inherited: 0x00)
struct FVTSTBasicTestEnvironmentEmulatorInstructionTrackingData {
	enum class EVTSTInstructionType InstructionType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ModifiedParticipantIndex; // 0x04(0x04)
	float ExecutionTime; // 0x08(0x04)
	float DeltaTime; // 0x0c(0x04)
	struct FVTSTBasicTestTestParticipantTrackingData FirstParticipant; // 0x10(0x08)
	struct FVTSTBasicTestTestParticipantTrackingData SecondParticipant; // 0x18(0x08)
};

// ScriptStruct VTSPlugin.VTSTBasicTestTestParticipantTrackingData
// Size: 0x08 (Inherited: 0x00)
struct FVTSTBasicTestTestParticipantTrackingData {
	float LastLoadedValue; // 0x00(0x04)
	float LastDeltaTime; // 0x04(0x04)
};

// ScriptStruct VTSPlugin.VTSTBasicTestTestTrackingData
// Size: 0x10 (Inherited: 0x00)
struct FVTSTBasicTestTestTrackingData {
	struct TArray<struct FVTSTBasicTestTestParticipantTrackingData> ParticipantStates; // 0x00(0x10)
};

// ScriptStruct VTSPlugin.VTSTimeStampDelegate
// Size: 0x18 (Inherited: 0x00)
struct FVTSTimeStampDelegate {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct VTSPlugin.VTSTSimulationInstructionPredicate
// Size: 0x01 (Inherited: 0x00)
struct FVTSTSimulationInstructionPredicate {
	char pad_0[0x1]; // 0x00(0x01)
};

