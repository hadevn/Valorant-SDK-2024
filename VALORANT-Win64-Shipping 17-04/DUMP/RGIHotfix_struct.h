// ScriptStruct RGIHotfix.PatchsieveVersionSetDTO
// Size: 0x10 (Inherited: 0x00)
struct FPatchsieveVersionSetDTO {
	struct TArray<struct FReleaseDTO> Releases; // 0x00(0x10)
};

// ScriptStruct RGIHotfix.ReleaseDTO
// Size: 0x28 (Inherited: 0x00)
struct FReleaseDTO {
	struct FReleaseDetailsDTO Release; // 0x00(0x10)
	struct FDownloadDetailsDTO Download; // 0x10(0x18)
};

// ScriptStruct RGIHotfix.DownloadDetailsDTO
// Size: 0x18 (Inherited: 0x00)
struct FDownloadDetailsDTO {
	struct FString URL; // 0x00(0x10)
	bool SCD_Required; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct RGIHotfix.ReleaseDetailsDTO
// Size: 0x10 (Inherited: 0x00)
struct FReleaseDetailsDTO {
	struct FString ID; // 0x00(0x10)
};

