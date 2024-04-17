// Enum RTPPlugin.ERTPEventFlags
enum class ERTPEventFlags : uint8 {
	None = 0,
	CollectClientIpAddress = 1,
	SendToDatadog = 2,
	SendToAp = 4,
	ERTPEventFlags_MAX = 5
};

// ScriptStruct RTPPlugin.RTPClientPlatformDefault
// Size: 0x20 (Inherited: 0x00)
struct FRTPClientPlatformDefault {
	struct FRTPClientPlatformDetails clientPlatformDetails; // 0x00(0x20)
};

// ScriptStruct RTPPlugin.RTPClientPlatformDetails
// Size: 0x20 (Inherited: 0x00)
struct FRTPClientPlatformDetails {
	struct FString PlatformType; // 0x00(0x10)
	struct FString platformMetadata; // 0x10(0x10)
};

// ScriptStruct RTPPlugin.RTPClientPlatformMetadata
// Size: 0x40 (Inherited: 0x00)
struct FRTPClientPlatformMetadata {
	struct FString platformOS; // 0x00(0x10)
	struct FString platformOSVersion; // 0x10(0x10)
	struct FString platformChipset; // 0x20(0x10)
	struct FString PlatformType; // 0x30(0x10)
};

// ScriptStruct RTPPlugin.RTPEventMetadataDefault
// Size: 0x70 (Inherited: 0x00)
struct FRTPEventMetadataDefault {
	struct FRTPEventMetadata MetaData; // 0x00(0x70)
};

// ScriptStruct RTPPlugin.RTPEventMetadata
// Size: 0x70 (Inherited: 0x00)
struct FRTPEventMetadata {
	struct FString schema; // 0x00(0x10)
	struct FRTPScopeMetadata scope; // 0x10(0x50)
	struct FString Timestamp; // 0x60(0x10)
};

// ScriptStruct RTPPlugin.RTPScopeMetadata
// Size: 0x50 (Inherited: 0x00)
struct FRTPScopeMetadata {
	struct FString environment; // 0x00(0x10)
	struct FString datacenter; // 0x10(0x10)
	struct FString deployment; // 0x20(0x10)
	struct FString Product; // 0x30(0x10)
	struct FString Component; // 0x40(0x10)
};

