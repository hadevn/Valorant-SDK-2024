// Enum WwiseResourceLoader.EWwiseEventDestroyOptions
enum class EWwiseEventDestroyOptions : uint8 {
	StopEventOnDestroy = 0,
	WaitForEventEnd = 1,
	EWwiseEventDestroyOptions_MAX = 2
};

// Enum WwiseResourceLoader.EWwiseEventSwitchContainerLoading
enum class EWwiseEventSwitchContainerLoading : uint8 {
	AlwaysLoad = 0,
	LoadOnReference = 1,
	EWwiseEventSwitchContainerLoading_MAX = 2
};

// Enum WwiseResourceLoader.EWwiseGroupType
enum class EWwiseGroupType : uint8 {
	Switch = 0,
	State = 1,
	Unknown = 255,
	EWwiseGroupType_MAX = 256
};

// Enum WwiseResourceLoader.EWwiseReloadLanguage
enum class EWwiseReloadLanguage : uint8 {
	Manual = 0,
	Immediate = 1,
	Safe = 2,
	EWwiseReloadLanguage_MAX = 3
};

// ScriptStruct WwiseResourceLoader.WwiseAcousticTextureCookedData
// Size: 0x10 (Inherited: 0x00)
struct FWwiseAcousticTextureCookedData {
	int32_t ShortId; // 0x00(0x04)
	struct FName DebugName; // 0x04(0x0c)
};

// ScriptStruct WwiseResourceLoader.WwiseAuxBusCookedData
// Size: 0x38 (Inherited: 0x00)
struct FWwiseAuxBusCookedData {
	int32_t AuxBusId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FWwiseSoundBankCookedData> SoundBanks; // 0x08(0x10)
	struct TArray<struct FWwiseMediaCookedData> Media; // 0x18(0x10)
	struct FName DebugName; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct WwiseResourceLoader.WwiseEventCookedData
// Size: 0xa8 (Inherited: 0x00)
struct FWwiseEventCookedData {
	int32_t EventID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FWwiseSoundBankCookedData> SoundBanks; // 0x08(0x10)
	struct TArray<struct FWwiseMediaCookedData> Media; // 0x18(0x10)
	struct TArray<struct FWwiseExternalSourceCookedData> ExternalSources; // 0x28(0x10)
	struct TArray<struct FWwiseSwitchContainerLeafCookedData> SwitchContainerLeaves; // 0x38(0x10)
	struct TSet<struct FWwiseGroupValueCookedData> RequiredGroupValueSet; // 0x48(0x50)
	enum class EWwiseEventDestroyOptions DestroyOptions; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FName DebugName; // 0x9c(0x0c)
};

// ScriptStruct WwiseResourceLoader.WwiseGroupValueCookedData
// Size: 0x18 (Inherited: 0x00)
struct FWwiseGroupValueCookedData {
	enum class EWwiseGroupType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t GroupId; // 0x04(0x04)
	int32_t ID; // 0x08(0x04)
	struct FName DebugName; // 0x0c(0x0c)
};

// ScriptStruct WwiseResourceLoader.WwiseSwitchContainerLeafCookedData
// Size: 0x80 (Inherited: 0x00)
struct FWwiseSwitchContainerLeafCookedData {
	struct TSet<struct FWwiseGroupValueCookedData> GroupValueSet; // 0x00(0x50)
	struct TArray<struct FWwiseSoundBankCookedData> SoundBanks; // 0x50(0x10)
	struct TArray<struct FWwiseMediaCookedData> Media; // 0x60(0x10)
	struct TArray<struct FWwiseExternalSourceCookedData> ExternalSources; // 0x70(0x10)
};

// ScriptStruct WwiseResourceLoader.WwiseObjectInfo
// Size: 0x24 (Inherited: 0x00)
struct FWwiseObjectInfo {
	struct FGuid WwiseGuid; // 0x00(0x10)
	uint32_t WwiseShortId; // 0x10(0x04)
	struct FName WwiseName; // 0x14(0x0c)
	uint32_t HardCodedSoundBankShortId; // 0x20(0x04)
};

// ScriptStruct WwiseResourceLoader.WwiseEventInfo
// Size: 0x28 (Inherited: 0x24)
struct FWwiseEventInfo : FWwiseObjectInfo {
	enum class EWwiseEventSwitchContainerLoading SwitchContainerLoading; // 0x24(0x01)
	enum class EWwiseEventDestroyOptions DestroyOptions; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

// ScriptStruct WwiseResourceLoader.WwiseGameParameterCookedData
// Size: 0x10 (Inherited: 0x00)
struct FWwiseGameParameterCookedData {
	int32_t ShortId; // 0x00(0x04)
	struct FName DebugName; // 0x04(0x0c)
};

// ScriptStruct WwiseResourceLoader.WwiseGroupValueInfo
// Size: 0x28 (Inherited: 0x24)
struct FWwiseGroupValueInfo : FWwiseObjectInfo {
	uint32_t GroupShortId; // 0x24(0x04)
};

// ScriptStruct WwiseResourceLoader.WwiseInitBankCookedData
// Size: 0x48 (Inherited: 0x24)
struct FWwiseInitBankCookedData : FWwiseSoundBankCookedData {
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FWwiseMediaCookedData> Media; // 0x28(0x10)
	struct TArray<struct FWwiseLanguageCookedData> Language; // 0x38(0x10)
};

// ScriptStruct WwiseResourceLoader.WwiseLanguageId
// Size: 0x10 (Inherited: 0x00)
struct FWwiseLanguageId {
	int32_t LanguageId; // 0x00(0x04)
	struct FName LanguageName; // 0x04(0x0c)
};

// ScriptStruct WwiseResourceLoader.WwiseLocalizedAuxBusCookedData
// Size: 0x60 (Inherited: 0x00)
struct FWwiseLocalizedAuxBusCookedData {
	struct TMap<struct FWwiseLanguageCookedData, struct FWwiseAuxBusCookedData> AuxBusLanguageMap; // 0x00(0x50)
	struct FName DebugName; // 0x50(0x0c)
	int32_t AuxBusId; // 0x5c(0x04)
};

// ScriptStruct WwiseResourceLoader.WwiseLocalizedEventCookedData
// Size: 0x60 (Inherited: 0x00)
struct FWwiseLocalizedEventCookedData {
	struct TMap<struct FWwiseLanguageCookedData, struct FWwiseEventCookedData> EventLanguageMap; // 0x00(0x50)
	struct FName DebugName; // 0x50(0x0c)
	int32_t EventID; // 0x5c(0x04)
};

// ScriptStruct WwiseResourceLoader.WwiseLocalizedShareSetCookedData
// Size: 0x60 (Inherited: 0x00)
struct FWwiseLocalizedShareSetCookedData {
	struct TMap<struct FWwiseLanguageCookedData, struct FWwiseShareSetCookedData> ShareSetLanguageMap; // 0x00(0x50)
	struct FName DebugName; // 0x50(0x0c)
	int32_t ShareSetId; // 0x5c(0x04)
};

// ScriptStruct WwiseResourceLoader.WwiseShareSetCookedData
// Size: 0x38 (Inherited: 0x00)
struct FWwiseShareSetCookedData {
	int32_t ShareSetId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FWwiseSoundBankCookedData> SoundBanks; // 0x08(0x10)
	struct TArray<struct FWwiseMediaCookedData> Media; // 0x18(0x10)
	struct FName DebugName; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct WwiseResourceLoader.WwiseLocalizedSoundBankCookedData
// Size: 0x60 (Inherited: 0x00)
struct FWwiseLocalizedSoundBankCookedData {
	struct TMap<struct FWwiseLanguageCookedData, struct FWwiseSoundBankCookedData> SoundBankLanguageMap; // 0x00(0x50)
	struct FName DebugName; // 0x50(0x0c)
	int32_t SoundBankId; // 0x5c(0x04)
};

// ScriptStruct WwiseResourceLoader.WwisePlatformId
// Size: 0x1c (Inherited: 0x00)
struct FWwisePlatformId {
	struct FGuid PlatformGuid; // 0x00(0x10)
	struct FName PlatformName; // 0x10(0x0c)
};

// ScriptStruct WwiseResourceLoader.WwiseSharedGroupValueKey
// Size: 0x10 (Inherited: 0x00)
struct FWwiseSharedGroupValueKey {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct WwiseResourceLoader.WwiseSharedLanguageId
// Size: 0x18 (Inherited: 0x00)
struct FWwiseSharedLanguageId {
	char pad_0[0x10]; // 0x00(0x10)
	enum class EWwiseLanguageRequirement LanguageRequirement; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct WwiseResourceLoader.WwiseSharedPlatformId
// Size: 0x10 (Inherited: 0x00)
struct FWwiseSharedPlatformId {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct WwiseResourceLoader.WwiseTriggerCookedData
// Size: 0x10 (Inherited: 0x00)
struct FWwiseTriggerCookedData {
	int32_t TriggerId; // 0x00(0x04)
	struct FName DebugName; // 0x04(0x0c)
};

