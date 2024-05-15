// Enum DataRegistry.EDataRegistryAcquireStatus
enum class EDataRegistryAcquireStatus : uint8 {
	NotStarted = 0,
	WaitingForInitialAcquire = 1,
	InitialAcquireFinished = 2,
	WaitingForResources = 3,
	AcquireFinished = 4,
	AcquireError = 5,
	DoesNotExist = 6,
	EDataRegistryAcquireStatus_MAX = 7
};

// Enum DataRegistry.EMetaDataRegistrySourceAssetUsage
enum class EMetaDataRegistrySourceAssetUsage : uint8 {
	NoAssets = 0,
	SearchAssets = 1,
	RegisterAssets = 2,
	SearchAndRegisterAssets = 3,
	EMetaDataRegistrySourceAssetUsage_MAX = 4
};

// Enum DataRegistry.EDataRegistrySubsystemGetItemResult
enum class EDataRegistrySubsystemGetItemResult : uint8 {
	Found = 0,
	NotFound = 1,
	EDataRegistrySubsystemGetItemResult_MAX = 2
};

// Enum DataRegistry.EDataRegistryAvailability
enum class EDataRegistryAvailability : uint8 {
	DoesNotExist = 0,
	Unknown = 1,
	Remote = 2,
	OnDisk = 3,
	LocalAsset = 4,
	PreCached = 5,
	EDataRegistryAvailability_MAX = 6
};

// ScriptStruct DataRegistry.DataRegistryLookup
// Size: 0x20 (Inherited: 0x00)
struct FDataRegistryLookup {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct DataRegistry.DataRegistryId
// Size: 0x18 (Inherited: 0x00)
struct FDataRegistryId {
	struct FDataRegistryType RegistryType; // 0x00(0x0c)
	struct FName ItemName; // 0x0c(0x0c)
};

// ScriptStruct DataRegistry.DataRegistryType
// Size: 0x0c (Inherited: 0x00)
struct FDataRegistryType {
	struct FName Name; // 0x00(0x0c)
};

// ScriptStruct DataRegistry.DataRegistrySource_DataTableRules
// Size: 0x08 (Inherited: 0x00)
struct FDataRegistrySource_DataTableRules {
	bool bPrecacheTable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CachedTableKeepSeconds; // 0x04(0x04)
};

// ScriptStruct DataRegistry.DataRegistrySourceItemId
// Size: 0x50 (Inherited: 0x00)
struct FDataRegistrySourceItemId {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct DataRegistry.DataRegistryCachePolicy
// Size: 0x14 (Inherited: 0x00)
struct FDataRegistryCachePolicy {
	bool bCacheIsAlwaysVolatile; // 0x00(0x01)
	bool bUseCurveTableCacheVersion; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t MinNumberKept; // 0x04(0x04)
	int32_t MaxNumberKept; // 0x08(0x04)
	float ForceKeepSeconds; // 0x0c(0x04)
	float ForceReleaseSeconds; // 0x10(0x04)
};

// ScriptStruct DataRegistry.DataRegistryIdFormat
// Size: 0x0c (Inherited: 0x00)
struct FDataRegistryIdFormat {
	struct FGameplayTag BaseGameplayTag; // 0x00(0x0c)
};

