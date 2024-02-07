// Class Hotfix.OnlineHotfixManager
// Size: 0x230 (Inherited: 0x30)
struct UOnlineHotfixManager : UObject {
	char pad_30[0x1c0]; // 0x30(0x1c0)
	struct FString OSSName; // 0x1f0(0x10)
	struct FString HotfixManagerClassName; // 0x200(0x10)
	struct FString DebugPrefix; // 0x210(0x10)
	struct TArray<struct UObject*> AssetsHotfixedFromIniFiles; // 0x220(0x10)

	void StartHotfixProcess(); // Function Hotfix.OnlineHotfixManager.StartHotfixProcess // (Native|Public|BlueprintCallable) // @ game+0x211c010
};

// Class Hotfix.UpdateManager
// Size: 0x118 (Inherited: 0x30)
struct UUpdateManager : UObject {
	char pad_30[0x60]; // 0x30(0x60)
	float HotfixCheckCompleteDelay; // 0x90(0x04)
	float UpdateCheckCompleteDelay; // 0x94(0x04)
	float HotfixAvailabilityCheckCompleteDelay; // 0x98(0x04)
	float UpdateCheckAvailabilityCompleteDelay; // 0x9c(0x04)
	char pad_A0[0x4]; // 0xa0(0x04)
	int32_t AppSuspendedUpdateCheckTimeSeconds; // 0xa4(0x04)
	char pad_A8[0x8]; // 0xa8(0x08)
	bool bPlatformEnvironmentDetected; // 0xb0(0x01)
	bool bInitialUpdateFinished; // 0xb1(0x01)
	bool bCheckHotfixAvailabilityOnly; // 0xb2(0x01)
	enum class EUpdateState CurrentUpdateState; // 0xb3(0x01)
	int32_t WorstNumFilesPendingLoadViewed; // 0xb4(0x04)
	char pad_B8[0x4]; // 0xb8(0x04)
	enum class EHotfixResult LastHotfixResult; // 0xbc(0x01)
	char pad_BD[0x23]; // 0xbd(0x23)
	struct FDateTime LastUpdateCheck[0x2]; // 0xe0(0x10)
	enum class EUpdateCompletionStatus LastCompletionResult[0x2]; // 0xf0(0x02)
	char pad_F2[0x16]; // 0xf2(0x16)
	struct UEnum* UpdateStateEnum; // 0x108(0x08)
	struct UEnum* UpdateCompletionEnum; // 0x110(0x08)
};

