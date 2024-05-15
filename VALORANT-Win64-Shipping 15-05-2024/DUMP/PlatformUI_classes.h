// Class PlatformUI.BinaryAsset
// Size: 0x40 (Inherited: 0x30)
struct UBinaryAsset : UObject {
	struct TArray<char> Asset; // 0x30(0x10)
};

// Class PlatformUI.PlatformUI
// Size: 0x340 (Inherited: 0x2c8)
struct UPlatformUI : UUserWidget {
	struct FString SdkInstanceId; // 0x2c8(0x10)
	struct UPlatformUIPrimaryDataAsset* PrimaryAsset; // 0x2d8(0x08)
	char pad_2E0[0x60]; // 0x2e0(0x60)
};

// Class PlatformUI.PlatformUIFRE
// Size: 0x508 (Inherited: 0x340)
struct UPlatformUIFRE : UPlatformUI {
	struct FLinearColor AccentColor; // 0x340(0x10)
	struct FLinearColor AccentColor2; // 0x350(0x10)
	struct FLinearColor CardOpenGradientStartColor; // 0x360(0x10)
	struct FLinearColor CardOpenGradientEndColor; // 0x370(0x10)
	struct FLinearColor LoadingFillGradientStartColor; // 0x380(0x10)
	struct FLinearColor LoadingFillGradientEndColor; // 0x390(0x10)
	struct FLinearColor LoadingTextColor; // 0x3a0(0x10)
	struct UTexture* BackgroundTexture; // 0x3b0(0x08)
	struct UXamlAsset* GameLogoBig; // 0x3b8(0x08)
	struct UXamlAsset* GameLogoSmall; // 0x3c0(0x08)
	struct FString ProductName; // 0x3c8(0x10)
	float AuthLoadingTextAnchorX; // 0x3d8(0x04)
	float AuthLoadingTextAnchorY; // 0x3dc(0x04)
	float AuthLoadingTextPositionX; // 0x3e0(0x04)
	float AuthLoadingTextPositionY; // 0x3e4(0x04)
	float AuthLoadingIndicatorAnchorX; // 0x3e8(0x04)
	float AuthLoadingIndicatorAnchorY; // 0x3ec(0x04)
	float AuthLoadingIndicatorPositionX; // 0x3f0(0x04)
	float AuthLoadingIndicatorPositionY; // 0x3f4(0x04)
	enum class LoadingIndicatorType AuthLoadingIndicatorType; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	float AuthLoadingWidth; // 0x3fc(0x04)
	float AuthLoadingIndicatorHeight; // 0x400(0x04)
	bool bDisplayGamepadDisconnectNotifications; // 0x404(0x01)
	char pad_405[0x103]; // 0x405(0x103)

	bool SetHotfixAvailability(enum class EPlatformUIHotFixAvailability HotfixAvailability); // Function PlatformUI.PlatformUIFRE.SetHotfixAvailability // (Final|Native|Public|BlueprintCallable) // @ game+0x24b40b0
};

// Class PlatformUI.PlatformUIPrimaryDataAsset
// Size: 0x88 (Inherited: 0x38)
struct UPlatformUIPrimaryDataAsset : UPrimaryDataAsset {
	struct TMap<struct FString, struct UObject*> Assets; // 0x38(0x50)
};

// Class PlatformUI.XamlAsset
// Size: 0x40 (Inherited: 0x30)
struct UXamlAsset : UObject {
	struct FString String; // 0x30(0x10)
};

