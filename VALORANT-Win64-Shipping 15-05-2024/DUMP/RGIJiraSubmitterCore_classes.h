// Class RGIJiraSubmitterCore.RGIJiraSubmitterConfig
// Size: 0x68 (Inherited: 0x48)
struct URGIJiraSubmitterConfig : UDeveloperSettings {
	struct FString Hostname; // 0x48(0x10)
	struct FString Project; // 0x58(0x10)
};

// Class RGIJiraSubmitterCore.RGIJiraSubmitterPerProjectUser
// Size: 0x50 (Inherited: 0x30)
struct URGIJiraSubmitterPerProjectUser : UObject {
	struct FString Username; // 0x30(0x10)
	struct FString Token; // 0x40(0x10)
};

