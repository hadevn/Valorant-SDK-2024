// Class WwiseResourceLoader.WwiseEventInfoLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWwiseEventInfoLibrary : UBlueprintFunctionLibrary {

	struct FWwiseEventInfo SetWwiseShortId(struct FWwiseEventInfo& Ref, int32_t WwiseShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b8360
	struct FWwiseEventInfo SetWwiseName(struct FWwiseEventInfo& Ref, struct FString WwiseName); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b7f10
	struct FWwiseEventInfo SetWwiseGuid(struct FWwiseEventInfo& Ref, struct FGuid& WwiseGuid); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b7c90
	struct FWwiseEventInfo SetSwitchContainerLoading(struct FWwiseEventInfo& Ref, enum class EWwiseEventSwitchContainerLoading& SwitchContainerLoading); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetSwitchContainerLoading // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b7b60
	struct FWwiseEventInfo SetHardCodedSoundBankShortId(struct FWwiseEventInfo& Ref, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetHardCodedSoundBankShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b7910
	struct FWwiseEventInfo SetDestroyOptions(struct FWwiseEventInfo& Ref, enum class EWwiseEventDestroyOptions& DestroyOptions); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetDestroyOptions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b76c0
	struct FWwiseEventInfo MakeStruct(struct FGuid& WwiseGuid, int32_t WwiseShortId, struct FString WwiseName, enum class EWwiseEventSwitchContainerLoading SwitchContainerLoading, enum class EWwiseEventDestroyOptions DestroyOptions, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.MakeStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b6fb0
	int32_t GetWwiseShortID(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseShortID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b6dd0
	struct FString GetWwiseName(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b6ad0
	struct FGuid GetWwiseGuid(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b6990
	enum class EWwiseEventSwitchContainerLoading GetSwitchContainerLoading(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetSwitchContainerLoading // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b68f0
	int32_t GetHardCodedSoundBankShortId(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetHardCodedSoundBankShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b67b0
	enum class EWwiseEventDestroyOptions GetDestroyOptions(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetDestroyOptions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b6670
	void BreakStruct(struct FWwiseEventInfo Ref, struct FGuid& OutWwiseGuid, int32_t& OutWwiseShortId, struct FString& OutWwiseName, enum class EWwiseEventSwitchContainerLoading& OutSwitchContainerLoading, enum class EWwiseEventDestroyOptions& OutDestroyOptions, int32_t& OutHardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.BreakStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b5dc0
};

// Class WwiseResourceLoader.WwiseGroupValueInfoLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWwiseGroupValueInfoLibrary : UBlueprintFunctionLibrary {

	struct FWwiseGroupValueInfo SetWwiseShortId(struct FWwiseGroupValueInfo& Ref, int32_t WwiseShortId); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b8490
	struct FWwiseGroupValueInfo SetWwiseName(struct FWwiseGroupValueInfo& Ref, struct FString WwiseName); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b8090
	struct FWwiseGroupValueInfo SetGroupShortId(struct FWwiseGroupValueInfo& Ref, int32_t GroupShortId); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetGroupShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b77f0
	struct FWwiseGroupValueInfo SetAssetGuid(struct FWwiseGroupValueInfo& Ref, struct FGuid& AssetGuid); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetAssetGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b7580
	struct FWwiseGroupValueInfo MakeStruct(struct FGuid& AssetGuid, int32_t GroupShortId, int32_t WwiseShortId, struct FString WwiseName); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.MakeStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b7200
	int32_t GetWwiseShortID(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseShortID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b6e70
	struct FString GetWwiseName(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b6bd0
	int32_t GetGroupShortId(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetGroupShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b6710
	struct FGuid GetAssetGuid(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetAssetGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b65d0
	void BreakStruct(struct FWwiseGroupValueInfo Ref, struct FGuid& OutAssetGuid, int32_t& OutGroupShortId, int32_t& OutWwiseShortId, struct FString& OutWwiseName); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.BreakStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b60f0
};

// Class WwiseResourceLoader.WwiseObjectInfoLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWwiseObjectInfoLibrary : UBlueprintFunctionLibrary {

	struct FWwiseObjectInfo SetWwiseShortId(struct FWwiseObjectInfo& Ref, int32_t WwiseShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b85b0
	struct FWwiseObjectInfo SetWwiseName(struct FWwiseObjectInfo& Ref, struct FString WwiseName); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b8200
	struct FWwiseObjectInfo SetWwiseGuid(struct FWwiseObjectInfo& Ref, struct FGuid& WwiseGuid); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b7de0
	struct FWwiseObjectInfo SetHardCodedSoundBankShortId(struct FWwiseObjectInfo& Ref, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetHardCodedSoundBankShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b7a40
	struct FWwiseObjectInfo MakeStruct(struct FGuid& WwiseGuid, int32_t WwiseShortId, struct FString WwiseName, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.MakeStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b73c0
	int32_t GetWwiseShortID(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseShortID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b6f10
	struct FString GetWwiseName(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b6cd0
	struct FGuid GetWwiseGuid(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseGuid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b6a30
	int32_t GetHardCodedSoundBankShortId(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetHardCodedSoundBankShortId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x24b6850
	void BreakStruct(struct FWwiseObjectInfo Ref, struct FGuid& OutWwiseGuid, int32_t& OutWwiseShortId, struct FString& OutWwiseName, int32_t& OutHardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.BreakStruct // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x24b6360
};

