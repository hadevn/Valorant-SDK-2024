// Enum DynamicVolume.EGroundVolumeFragmentStatus
enum class EGroundVolumeFragmentStatus : uint8 {
	AllInside = 0,
	PartiallyOutside = 1,
	PartiallyBlocked = 2,
	Invalid = 3,
	Count = 4,
	EGroundVolumeFragmentStatus_MAX = 5
};

// Enum DynamicVolume.EDynamicVolumeBuildStatus
enum class EDynamicVolumeBuildStatus : uint8 {
	BuildNotStarted = 0,
	BuildInProgress = 1,
	BuildComplete = 2,
	BuildError = 3,
	Count = 4,
	EDynamicVolumeBuildStatus_MAX = 5
};

// ScriptStruct DynamicVolume.GroundVolumeFragment
// Size: 0x68 (Inherited: 0x0c)
struct FGroundVolumeFragment : FFastArraySerializerItem {
	bool bIsActive; // 0x0c(0x01)
	enum class EGroundVolumeFragmentStatus Status; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct FVector> ConvexHullPoints; // 0x10(0x10)
	struct FIntPoint GridPos; // 0x20(0x08)
	float TravelDistance; // 0x28(0x04)
	struct FBox InsideBoundingBox; // 0x2c(0x1c)
	struct FVector Center; // 0x48(0x0c)
	float Ceiling; // 0x54(0x04)
	float Floor; // 0x58(0x04)
	struct FVector Normal; // 0x5c(0x0c)
};

// ScriptStruct DynamicVolume.GroundVolumeFragmentArray
// Size: 0x170 (Inherited: 0x108)
struct FGroundVolumeFragmentArray : FFastArraySerializer {
	struct TArray<struct FGroundVolumeFragment> Items; // 0x108(0x10)
	char pad_118[0x58]; // 0x118(0x58)
};

