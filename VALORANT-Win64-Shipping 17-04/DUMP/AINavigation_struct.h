// Enum AINavigation.ENavAreaFlag
enum class ENavAreaFlag : uint8 {
	Default = 0,
	Jump = 1,
	Crouch = 2,
	Teleport = 3,
	Drop = 4,
	Fly = 5,
	ENavAreaFlag_MAX = 6
};

// ScriptStruct AINavigation.NavQuerierClassOverride
// Size: 0x20 (Inherited: 0x00)
struct FNavQuerierClassOverride {
	struct FString QuerierClassName; // 0x00(0x10)
	struct TArray<struct FNavigationFilterArea> Overrides; // 0x10(0x10)
};

// ScriptStruct AINavigation.GeneratedNavigationLinkInfo
// Size: 0x48 (Inherited: 0x30)
struct FGeneratedNavigationLinkInfo : FNavigationLinkBase {
	struct FVector Left; // 0x30(0x0c)
	struct FVector Right; // 0x3c(0x0c)
};

