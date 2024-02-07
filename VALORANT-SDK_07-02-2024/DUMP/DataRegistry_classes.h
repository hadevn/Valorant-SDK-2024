// Class DataRegistry.DataRegistry
// Size: 0xd0 (Inherited: 0x30)
struct UDataRegistry : UObject {
	struct FName RegistryType; // 0x30(0x0c)
	struct FDataRegistryIdFormat IdFormat; // 0x3c(0x0c)
	struct UScriptStruct* ItemStruct; // 0x48(0x08)
	struct TArray<struct UDataRegistrySource*> DataSources; // 0x50(0x10)
	struct TArray<struct UDataRegistrySource*> RuntimeSources; // 0x60(0x10)
	float TimerUpdateFrequency; // 0x70(0x04)
	struct FDataRegistryCachePolicy DefaultCachePolicy; // 0x74(0x14)
	char pad_88[0x48]; // 0x88(0x48)
};

// Class DataRegistry.DataRegistrySettings
// Size: 0x60 (Inherited: 0x48)
struct UDataRegistrySettings : UDeveloperSettings {
	struct TArray<struct FDirectoryPath> DirectoriesToScan; // 0x48(0x10)
	bool bInitializeAllLoadedRegistries; // 0x58(0x01)
	bool bIgnoreMissingCookedAssetRegistryData; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class DataRegistry.DataRegistrySource
// Size: 0x40 (Inherited: 0x30)
struct UDataRegistrySource : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UDataRegistrySource* ParentSource; // 0x38(0x08)
};

// Class DataRegistry.MetaDataRegistrySource
// Size: 0x110 (Inherited: 0x40)
struct UMetaDataRegistrySource : UDataRegistrySource {
	enum class EMetaDataRegistrySourceAssetUsage AssetUsage; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FAssetManagerSearchRules SearchRules; // 0x48(0x50)
	struct TMap<struct FName, struct UDataRegistrySource*> RuntimeChildren; // 0x98(0x50)
	char pad_E8[0x28]; // 0xe8(0x28)
};

// Class DataRegistry.DataRegistrySource_CurveTable
// Size: 0xb0 (Inherited: 0x40)
struct UDataRegistrySource_CurveTable : UDataRegistrySource {
	struct TSoftObjectPtr<UCurveTable> SourceTable; // 0x40(0x30)
	struct FDataRegistrySource_DataTableRules TableRules; // 0x70(0x08)
	struct UCurveTable* CachedTable; // 0x78(0x08)
	struct UCurveTable* PreloadTable; // 0x80(0x08)
	char pad_88[0x28]; // 0x88(0x28)
};

// Class DataRegistry.MetaDataRegistrySource_CurveTable
// Size: 0x120 (Inherited: 0x110)
struct UMetaDataRegistrySource_CurveTable : UMetaDataRegistrySource {
	struct UDataRegistrySource_CurveTable* CreatedSource; // 0x110(0x08)
	struct FDataRegistrySource_DataTableRules TableRules; // 0x118(0x08)
};

// Class DataRegistry.DataRegistrySource_DataTable
// Size: 0xb0 (Inherited: 0x40)
struct UDataRegistrySource_DataTable : UDataRegistrySource {
	struct TSoftObjectPtr<UDataTable> SourceTable; // 0x40(0x30)
	struct FDataRegistrySource_DataTableRules TableRules; // 0x70(0x08)
	struct UDataTable* CachedTable; // 0x78(0x08)
	struct UDataTable* PreloadTable; // 0x80(0x08)
	char pad_88[0x28]; // 0x88(0x28)
};

// Class DataRegistry.MetaDataRegistrySource_DataTable
// Size: 0x120 (Inherited: 0x110)
struct UMetaDataRegistrySource_DataTable : UMetaDataRegistrySource {
	struct UDataRegistrySource_DataTable* CreatedSource; // 0x110(0x08)
	struct FDataRegistrySource_DataTableRules TableRules; // 0x118(0x08)
};

// Class DataRegistry.DataRegistrySubsystem
// Size: 0xd0 (Inherited: 0x38)
struct UDataRegistrySubsystem : UEngineSubsystem {
	char pad_38[0x98]; // 0x38(0x98)

	bool NotEqual_DataRegistryType(struct FDataRegistryType A, struct FDataRegistryType B); // Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x20765b0
	bool NotEqual_DataRegistryId(struct FDataRegistryId A, struct FDataRegistryId B); // Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x20764a0
	bool IsValidDataRegistryType(struct FDataRegistryType DataRegistryType); // Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2076400
	bool IsValidDataRegistryId(struct FDataRegistryId DataRegistryId); // Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2076350
	bool GetCachedItemFromLookupBP(struct FDataRegistryId ItemId, struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase& OutItem); // Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2070b10
	bool GetCachedItemBP(struct FDataRegistryId ItemId, struct FTableRowBase& OutItem); // Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2070920
	void FindCachedItemBP(struct FDataRegistryId ItemId, enum class EDataRegistrySubsystemGetItemResult& OutResult, struct FTableRowBase& OutItem); // Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2070710
	void EvaluateDataRegistryCurve(struct FDataRegistryId ItemId, float InputValue, float DefaultValue, enum class EDataRegistrySubsystemGetItemResult& OutResult, float& OutValue); // Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x20761a0
	bool EqualEqual_DataRegistryType(struct FDataRegistryType A, struct FDataRegistryType B); // Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x20760a0
	bool EqualEqual_DataRegistryId(struct FDataRegistryId A, struct FDataRegistryId B); // Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2075f90
	struct FString Conv_DataRegistryTypeToString(struct FDataRegistryType DataRegistryType); // Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2075eb0
	struct FString Conv_DataRegistryIdToString(struct FDataRegistryId DataRegistryId); // Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2075dc0
	bool AcquireItemBP(struct FDataRegistryId ItemId, struct FDelegate AcquireCallback); // Function DataRegistry.DataRegistrySubsystem.AcquireItemBP // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2075cb0
};

