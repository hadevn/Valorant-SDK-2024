// Class Renderer.AresLightMapPolicyBase
// Size: 0x90 (Inherited: 0x30)
struct UAresLightMapPolicyBase : UObject {
	struct TArray<struct FString> ShouldCompileWithVertexFactory; // 0x30(0x10)
	struct TMap<struct FString, struct FString> CompilationEnvironment; // 0x40(0x50)
};

// Class Renderer.AresEnvironmentLightMapPolicy
// Size: 0x90 (Inherited: 0x90)
struct UAresEnvironmentLightMapPolicy : UAresLightMapPolicyBase {
};

// Class Renderer.AresEnvironmentFallbackPolicy
// Size: 0x90 (Inherited: 0x90)
struct UAresEnvironmentFallbackPolicy : UAresLightMapPolicyBase {
};

// Class Renderer.AresEnvironmentCachedLightingPolicy
// Size: 0x90 (Inherited: 0x90)
struct UAresEnvironmentCachedLightingPolicy : UAresLightMapPolicyBase {
};

// Class Renderer.AresCharacterPolicy
// Size: 0x90 (Inherited: 0x90)
struct UAresCharacterPolicy : UAresLightMapPolicyBase {
};

// Class Renderer.AresFirstPersonPolicy
// Size: 0x90 (Inherited: 0x90)
struct UAresFirstPersonPolicy : UAresLightMapPolicyBase {
};

// Class Renderer.AresFirstPersonFallbackPolicy
// Size: 0x90 (Inherited: 0x90)
struct UAresFirstPersonFallbackPolicy : UAresLightMapPolicyBase {
};

// Class Renderer.AresFirstPersonCsmPolicy
// Size: 0x90 (Inherited: 0x90)
struct UAresFirstPersonCsmPolicy : UAresLightMapPolicyBase {
};

// Class Renderer.AresOutlineRendering
// Size: 0x30 (Inherited: 0x30)
struct UAresOutlineRendering : UObject {

	void SetOutlineColorsForRender(struct UObject* WorldContextObject, struct FLinearColor& AllyColor, struct FLinearColor& EnemyColor); // Function Renderer.AresOutlineRendering.SetOutlineColorsForRender // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4aa0f20
};

