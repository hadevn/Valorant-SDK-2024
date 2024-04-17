// Class WwiseResourceLoader.WwiseEventInfoLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWwiseEventInfoLibrary : UBlueprintFunctionLibrary {

	struct FWwiseEventInfo SetWwiseShortId(struct FWwiseEventInfo& Ref, int32_t WwiseShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c8600
	struct FWwiseEventInfo SetWwiseName(struct FWwiseEventInfo& Ref, struct FString WwiseName); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c81b0
	struct FWwiseEventInfo SetWwiseGuid(struct FWwiseEventInfo& Ref, struct FGuid& WwiseGuid); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c7f30
	struct FWwiseEventInfo SetSwitchContainerLoading(struct FWwiseEventInfo& Ref, enum class EWwiseEventSwitchContainerLoading& SwitchContainerLoading); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetSwitchContainerLoading // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c7e00
	struct FWwiseEventInfo SetHardCodedSoundBankShortId(struct FWwiseEventInfo& Ref, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetHardCodedSoundBankShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c7bb0
	struct FWwiseEventInfo SetDestroyOptions(struct FWwiseEventInfo& Ref, enum class EWwiseEventDestroyOptions& DestroyOptions); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetDestroyOptions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c7960
	struct FWwiseEventInfo MakeStruct(struct FGuid& WwiseGuid, int32_t WwiseShortId, struct FString WwiseName, enum class EWwiseEventSwitchContainerLoading SwitchContainerLoading, enum class EWwiseEventDestroyOptions DestroyOptions, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.MakeStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c7250
	int32_t GetWwiseShortID(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseShortID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c7070
	struct FString GetWwiseName(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c6d70
	struct FGuid GetWwiseGuid(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c6c30
	enum class EWwiseEventSwitchContainerLoading GetSwitchContainerLoading(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetSwitchContainerLoading // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c6b90
	int32_t GetHardCodedSoundBankShortId(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetHardCodedSoundBankShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c6a50
	enum class EWwiseEventDestroyOptions GetDestroyOptions(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetDestroyOptions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c6910
	void BreakStruct(struct FWwiseEventInfo Ref, struct FGuid& OutWwiseGuid, int32_t& OutWwiseShortId, struct FString& OutWwiseName, enum class EWwiseEventSwitchContainerLoading& OutSwitchContainerLoading, enum class EWwiseEventDestroyOptions& OutDestroyOptions, int32_t& OutHardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.BreakStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c6060
};

// Class WwiseResourceLoader.WwiseGroupValueInfoLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWwiseGroupValueInfoLibrary : UBlueprintFunctionLibrary {

	struct FWwiseGroupValueInfo SetWwiseShortId(struct FWwiseGroupValueInfo& Ref, int32_t WwiseShortId); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c8730
	struct FWwiseGroupValueInfo SetWwiseName(struct FWwiseGroupValueInfo& Ref, struct FString WwiseName); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c8330
	struct FWwiseGroupValueInfo SetGroupShortId(struct FWwiseGroupValueInfo& Ref, int32_t GroupShortId); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetGroupShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c7a90
	struct FWwiseGroupValueInfo SetAssetGuid(struct FWwiseGroupValueInfo& Ref, struct FGuid& AssetGuid); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetAssetGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c7820
	struct FWwiseGroupValueInfo MakeStruct(struct FGuid& AssetGuid, int32_t GroupShortId, int32_t WwiseShortId, struct FString WwiseName); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.MakeStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c74a0
	int32_t GetWwiseShortID(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseShortID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c7110
	struct FString GetWwiseName(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c6e70
	int32_t GetGroupShortId(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetGroupShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c69b0
	struct FGuid GetAssetGuid(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetAssetGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c6870
	void BreakStruct(struct FWwiseGroupValueInfo Ref, struct FGuid& OutAssetGuid, int32_t& OutGroupShortId, int32_t& OutWwiseShortId, struct FString& OutWwiseName); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.BreakStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c6390
};

// Class WwiseResourceLoader.WwiseObjectInfoLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWwiseObjectInfoLibrary : UBlueprintFunctionLibrary {

	struct FWwiseObjectInfo SetWwiseShortId(struct FWwiseObjectInfo& Ref, int32_t WwiseShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c8850
	struct FWwiseObjectInfo SetWwiseName(struct FWwiseObjectInfo& Ref, struct FString WwiseName); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c84a0
	struct FWwiseObjectInfo SetWwiseGuid(struct FWwiseObjectInfo& Ref, struct FGuid& WwiseGuid); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c8080
	struct FWwiseObjectInfo SetHardCodedSoundBankShortId(struct FWwiseObjectInfo& Ref, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetHardCodedSoundBankShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c7ce0
	struct FWwiseObjectInfo MakeStruct(struct FGuid& WwiseGuid, int32_t WwiseShortId, struct FString WwiseName, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.MakeStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c7660
	int32_t GetWwiseShortID(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseShortID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c71b0
	struct FString GetWwiseName(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c6f70
	struct FGuid GetWwiseGuid(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c6cd0
	int32_t GetHardCodedSoundBankShortId(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetHardCodedSoundBankShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x25c6af0
	void BreakStruct(struct FWwiseObjectInfo Ref, struct FGuid& OutWwiseGuid, int32_t& OutWwiseShortId, struct FString& OutWwiseName, int32_t& OutHardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.BreakStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c6600
};

