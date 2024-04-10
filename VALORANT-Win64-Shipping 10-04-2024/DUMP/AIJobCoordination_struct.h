// Enum AIJobCoordination.EAIJobCoordination_JobStatus
enum class EAIJobCoordination_JobStatus : uint8 {
	NotClaimed = 0,
	InProgress = 1,
	Completed = 2,
	Failed = 3,
	Aborted = 4,
	Discarded = 5,
	Count = 6,
	EAIJobCoordination_MAX = 7
};

