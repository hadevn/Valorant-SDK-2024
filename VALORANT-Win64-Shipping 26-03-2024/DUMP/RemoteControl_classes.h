// Class RemoteControl.RemoteControlBinding
// Size: 0x40 (Inherited: 0x30)
struct URemoteControlBinding : UObject {
	struct FString Name; // 0x30(0x10)
};

// Class RemoteControl.RemoteControlLevelIndependantBinding
// Size: 0x70 (Inherited: 0x40)
struct URemoteControlLevelIndependantBinding : URemoteControlBinding {
	struct TSoftObjectPtr<UObject> BoundObject; // 0x40(0x30)
};

// Class RemoteControl.RemoteControlLevelDependantBinding
// Size: 0xc0 (Inherited: 0x40)
struct URemoteControlLevelDependantBinding : URemoteControlBinding {
	struct TMap<struct TSoftObjectPtr<ULevel>, struct TSoftObjectPtr<UObject>> BoundObjectMap; // 0x40(0x50)
	struct TSoftObjectPtr<ULevel> LevelWithLastSuccessfulResolve; // 0x90(0x30)
};

// Class RemoteControl.RemoteControlExposeRegistry
// Size: 0xd0 (Inherited: 0x30)
struct URemoteControlExposeRegistry : UObject {
	struct TSet<struct FRCEntityWrapper> ExposedEntities; // 0x30(0x50)
	struct TMap<struct FName, struct FGuid> LabelToIdCache; // 0x80(0x50)
};

// Class RemoteControl.RemoteControlFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct URemoteControlFunctionLibrary : UBlueprintFunctionLibrary {

	bool ExposeProperty(struct URemoteControlPreset* Preset, struct UObject* SourceObject, struct FString Property, struct FRemoteControlOptionalExposeArgs Args); // Function RemoteControl.RemoteControlFunctionLibrary.ExposeProperty // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x22c0da0
	bool ExposeFunction(struct URemoteControlPreset* Preset, struct UObject* SourceObject, struct FString Function, struct FRemoteControlOptionalExposeArgs Args); // Function RemoteControl.RemoteControlFunctionLibrary.ExposeFunction // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x22c0b80
	bool ExposeActor(struct URemoteControlPreset* Preset, struct AActor* Actor, struct FRemoteControlOptionalExposeArgs Args); // Function RemoteControl.RemoteControlFunctionLibrary.ExposeActor // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x22c09c0
};

// Class RemoteControl.RemoteControlInterceptionTestObject
// Size: 0x60 (Inherited: 0x30)
struct URemoteControlInterceptionTestObject : UObject {
	struct FRemoteControlInterceptionTestStruct CustomStruct; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FRemoteControlInterceptionFunctionParamStruct FunctionParamStruct; // 0x38(0x28)

	struct FRemoteControlInterceptionFunctionParamStruct TestFunction(struct FRemoteControlInterceptionFunctionParamStruct& InStruct, int32_t InTestFactor); // Function RemoteControl.RemoteControlInterceptionTestObject.TestFunction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x22c0fc0
};

// Class RemoteControl.RemoteControlPreset
// Size: 0x4f0 (Inherited: 0x30)
struct URemoteControlPreset : UObject {
	struct FRemoteControlPresetLayout Layout; // 0x30(0xc0)
	struct TMap<struct FString, struct FString> MetaData; // 0xf0(0x50)
	struct TArray<struct URemoteControlBinding*> Bindings; // 0x140(0x10)
	struct FGuid PresetId; // 0x150(0x10)
	struct TMap<struct FName, struct FRemoteControlTarget> RemoteControlTargets; // 0x160(0x50)
	struct TMap<struct FGuid, struct FRCCachedFieldData> FieldCache; // 0x1b0(0x50)
	struct TMap<struct FName, struct FGuid> NameToGuidMap; // 0x200(0x50)
	struct URemoteControlExposeRegistry* Registry; // 0x250(0x08)
	char pad_258[0x298]; // 0x258(0x298)
};

// Class RemoteControl.RemoteControlPresetActor
// Size: 0x3e8 (Inherited: 0x3d8)
struct ARemoteControlPresetActor : AActor {
	struct URemoteControlPreset* Preset; // 0x3d8(0x08)
	char pad_3E0[0x8]; // 0x3e0(0x08)
};

// Class RemoteControl.RemoteControlAPITestObject
// Size: 0x298 (Inherited: 0x30)
struct URemoteControlAPITestObject : UObject {
	int32_t CStyleIntArray[0x3]; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> IntArray; // 0x40(0x10)
	struct TArray<struct FRemoteControlTestStructOuter> StructOuterArray; // 0x50(0x10)
	struct TSet<int32_t> IntSet; // 0x60(0x50)
	struct TMap<int32_t, int32_t> IntMap; // 0xb0(0x50)
	struct TMap<int32_t, struct FRemoteControlTestStructOuter> StructOuterMap; // 0x100(0x50)
	struct TMap<struct FString, struct FColor> StringColorMap; // 0x150(0x50)
	struct TArray<struct FVector> ArrayOfVectors; // 0x1a0(0x10)
	int8_t Int8Value; // 0x1b0(0x01)
	char pad_1B1[0x1]; // 0x1b1(0x01)
	int16_t Int16Value; // 0x1b2(0x02)
	int32_t Int32Value; // 0x1b4(0x04)
	float FloatValue; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	double DoubleValue; // 0x1c0(0x08)
	struct FRemoteControlTestStructOuter RemoteControlTestStructOuter; // 0x1c8(0x78)
	struct FString StringValue; // 0x240(0x10)
	struct FName NameValue; // 0x250(0x0c)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct FText TextValue; // 0x260(0x18)
	bool bValue; // 0x278(0x01)
	char ByteValue; // 0x279(0x01)
	enum class ERemoteControlEnum RemoteControlEnumByteValue; // 0x27a(0x01)
	enum class ERemoteControlEnumClass RemoteControlEnumValue; // 0x27b(0x01)
	struct FVector VectorValue; // 0x27c(0x0c)
	struct FRotator RotatorValue; // 0x288(0x0c)
	char pad_294[0x4]; // 0x294(0x04)
};

// Class RemoteControl.RemoteControlTestObject
// Size: 0x1a0 (Inherited: 0x30)
struct URemoteControlTestObject : UObject {
	int32_t CStyleIntArray[0x3]; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> IntArray; // 0x40(0x10)
	struct TArray<float> FloatArray; // 0x50(0x10)
	struct TSet<int32_t> IntSet; // 0x60(0x50)
	struct TMap<int32_t, int32_t> IntMap; // 0xb0(0x50)
	struct TMap<int32_t, struct FRemoteControlTestInnerStruct> IntInnerStructMap; // 0x100(0x50)
	struct TMap<struct FString, struct FColor> StringColorMap; // 0x150(0x50)
};

