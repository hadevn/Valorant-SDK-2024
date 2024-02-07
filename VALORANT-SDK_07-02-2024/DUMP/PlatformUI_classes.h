// Class PlatformUI.BinaryAsset
// Size: 0x40 (Inherited: 0x30)
struct UBinaryAsset : UObject {
	struct TArray<char> Asset; // 0x30(0x10)
};

// Class PlatformUI.PlatformUI
// Size: 0x338 (Inherited: 0x2c8)
struct UPlatformUI : UUserWidget {
	struct FString SdkInstanceId; // 0x2c8(0x10)
	char pad_2D8[0x60]; // 0x2d8(0x60)
};

// Class PlatformUI.PlatformUIFRE
// Size: 0x460 (Inherited: 0x338)
struct UPlatformUIFRE : UPlatformUI {
	struct FLinearColor AccentColor; // 0x338(0x10)
	struct FLinearColor AccentColor2; // 0x348(0x10)
	struct FLinearColor CardOpenGradientStartColor; // 0x358(0x10)
	struct FLinearColor CardOpenGradientEndColor; // 0x368(0x10)
	struct FLinearColor LoadingFillGradientStartColor; // 0x378(0x10)
	struct FLinearColor LoadingFillGradientEndColor; // 0x388(0x10)
	struct UTexture* BackgroundTexture; // 0x398(0x08)
	struct UXamlAsset* GameLogoBig; // 0x3a0(0x08)
	struct UXamlAsset* GameLogoSmall; // 0x3a8(0x08)
	struct FString ProductName; // 0x3b0(0x10)
	char pad_3C0[0xa0]; // 0x3c0(0xa0)
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

