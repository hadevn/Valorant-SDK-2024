// Class RemoteControlCommon.RCPropertyContainerBase
// Size: 0x58 (Inherited: 0x30)
struct URCPropertyContainerBase : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class RemoteControlCommon.RCPropertyContainerRegistry
// Size: 0x88 (Inherited: 0x38)
struct URCPropertyContainerRegistry : UEngineSubsystem {
	struct TMap<struct FRCPropertyContainerKey, struct URCPropertyContainerBase*> CachedContainerClasses; // 0x38(0x50)
};

// Class RemoteControlCommon.PropertyContainerTestObject
// Size: 0xa8 (Inherited: 0x30)
struct UPropertyContainerTestObject : UObject {
	bool bSomeBool; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	uint32_t SomeUInt32; // 0x34(0x04)
	float SomeFloat; // 0x38(0x04)
	struct FVector SomeVector; // 0x3c(0x0c)
	struct FRotator SomeRotator; // 0x48(0x0c)
	int32_t SomeClampedInt; // 0x54(0x04)
	int32_t SomeClampedInt2; // 0x58(0x04)
	int32_t SomeUIClampedInt; // 0x5c(0x04)
	float SomeClampedFloat; // 0x60(0x04)
	float SomeUIClampedFloat; // 0x64(0x04)
	float SomeClampedFloat2; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString SomeString; // 0x70(0x10)
	struct FText SomeText; // 0x80(0x18)
	struct TArray<float> SomeFloatArray; // 0x98(0x10)
};

// Class RemoteControlCommon.RemoteControlSettings
// Size: 0x68 (Inherited: 0x48)
struct URemoteControlSettings : UDeveloperSettings {
	bool bProtocolsGenerateTransactions; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	uint32_t RemoteControlWebInterfacePort; // 0x4c(0x04)
	bool bForceWebAppBuildAtStartup; // 0x50(0x01)
	bool bAutoStartWebServer; // 0x51(0x01)
	bool bAutoStartWebSocketServer; // 0x52(0x01)
	char pad_53[0x1]; // 0x53(0x01)
	uint32_t RemoteControlHttpServerPort; // 0x54(0x04)
	uint32_t RemoteControlWebSocketServerPort; // 0x58(0x04)
	bool bDisplayInEditorOnlyWarnings; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float TreeBindingSplitRatio; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

