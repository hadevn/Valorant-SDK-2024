// ScriptStruct RGIClassUtils.ClassInclusionExclusionFilter
// Size: 0x50 (Inherited: 0x00)
struct FClassInclusionExclusionFilter {
	struct TArray<struct TSoftClassPtr<UObject>> IncludedClasses; // 0x00(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> ExcludedClasses; // 0x10(0x10)
	struct TSoftClassPtr<UObject> MustHaveComponent; // 0x20(0x30)
};

