// ScriptStruct WwiseSimpleExternalSource.WwiseExternalSourceCookieDefaultMedia
// Size: 0x38 (Inherited: 0x08)
struct FWwiseExternalSourceCookieDefaultMedia : FTableRowBase {
	int32_t ExternalSourceCookie; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ExternalSourceName; // 0x10(0x10)
	int32_t MediaInfoId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString MediaName; // 0x28(0x10)
};

// ScriptStruct WwiseSimpleExternalSource.WwiseExternalSourceMediaInfo
// Size: 0x28 (Inherited: 0x08)
struct FWwiseExternalSourceMediaInfo : FTableRowBase {
	int32_t ExternalSourceMediaInfoId; // 0x08(0x04)
	struct FName MediaName; // 0x0c(0x0c)
	int32_t CodecID; // 0x18(0x04)
	bool bIsStreamed; // 0x1c(0x01)
	bool bUseDeviceMemory; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	int32_t MemoryAlignment; // 0x20(0x04)
	int32_t PrefetchSize; // 0x24(0x04)
};

