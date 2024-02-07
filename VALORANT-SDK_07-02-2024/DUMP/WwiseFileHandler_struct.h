// Enum WwiseFileHandler.EWwiseLanguageRequirement
enum class EWwiseLanguageRequirement : uint8 {
	IsDefault = 0,
	IsOptional = 1,
	SFX = 2,
	EWwiseLanguageRequirement_MAX = 3
};

// Enum WwiseFileHandler.EWwiseSoundBankType
enum class EWwiseSoundBankType : uint8 {
	User = 0,
	Event = 30,
	Bus = 31,
	EWwiseSoundBankType_MAX = 32
};

// ScriptStruct WwiseFileHandler.WwiseExternalSourceCookedData
// Size: 0x10 (Inherited: 0x00)
struct FWwiseExternalSourceCookedData {
	int32_t Cookie; // 0x00(0x04)
	struct FName DebugName; // 0x04(0x0c)
};

// ScriptStruct WwiseFileHandler.WwiseLanguageCookedData
// Size: 0x14 (Inherited: 0x00)
struct FWwiseLanguageCookedData {
	int32_t LanguageId; // 0x00(0x04)
	struct FName LanguageName; // 0x04(0x0c)
	enum class EWwiseLanguageRequirement LanguageRequirement; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct WwiseFileHandler.WwiseMediaCookedData
// Size: 0x28 (Inherited: 0x00)
struct FWwiseMediaCookedData {
	int32_t MediaId; // 0x00(0x04)
	struct FName MediaPathName; // 0x04(0x0c)
	int32_t PrefetchSize; // 0x10(0x04)
	int32_t MemoryAlignment; // 0x14(0x04)
	bool bDeviceMemory; // 0x18(0x01)
	bool bStreaming; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	struct FName DebugName; // 0x1c(0x0c)
};

// ScriptStruct WwiseFileHandler.WwiseSoundBankCookedData
// Size: 0x24 (Inherited: 0x00)
struct FWwiseSoundBankCookedData {
	int32_t SoundBankId; // 0x00(0x04)
	struct FName SoundBankPathName; // 0x04(0x0c)
	int32_t MemoryAlignment; // 0x10(0x04)
	bool bDeviceMemory; // 0x14(0x01)
	bool bContainsMedia; // 0x15(0x01)
	enum class EWwiseSoundBankType SoundBankType; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	struct FName DebugName; // 0x18(0x0c)
};

