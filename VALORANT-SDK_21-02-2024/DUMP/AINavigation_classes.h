// Class AINavigation.JumpingPathFollowingComponent
// Size: 0x2e0 (Inherited: 0x298)
struct UJumpingPathFollowingComponent : UPathFollowingComponent {
	float FlyingAcceptanceRadius; // 0x298(0x04)
	float HeightAcceptanceModifier; // 0x29c(0x04)
	struct FMulticastInlineDelegate JumpSignal; // 0x2a0(0x10)
	struct FMulticastInlineDelegate CrouchSignal; // 0x2b0(0x10)
	struct UObject* DebuggerClass; // 0x2c0(0x08)
	struct UCharacterMovementComponent* CharacterMoveComp; // 0x2c8(0x08)
	struct UObject* DebuggerObject; // 0x2d0(0x08)
	char pad_2D8[0x8]; // 0x2d8(0x08)

	void OnPostProcessMove(struct UPathFollowingComponent* PathFollower, struct FVector& InOutVelocity); // Function AINavigation.JumpingPathFollowingComponent.OnPostProcessMove // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0x2688740
};

// Class AINavigation.NavArea_Crouch
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Crouch : UNavArea {
};

// Class AINavigation.NavArea_FallDamage
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_FallDamage : UNavArea {
};

// Class AINavigation.NavArea_Fly
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Fly : UNavArea {
};

// Class AINavigation.NavArea_Jump
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Jump : UNavArea {
};

// Class AINavigation.NavArea_JumpWithFallDamage
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_JumpWithFallDamage : UNavArea_Jump {
};

// Class AINavigation.NavFilter_Flyer
// Size: 0x50 (Inherited: 0x50)
struct UNavFilter_Flyer : UNavigationQueryFilter {
};

// Class AINavigation.NavFilter_Jumper
// Size: 0x50 (Inherited: 0x50)
struct UNavFilter_Jumper : UNavigationQueryFilter {
};

// Class AINavigation.NavFilter_Jumper_IgnoreFallDamage
// Size: 0x50 (Inherited: 0x50)
struct UNavFilter_Jumper_IgnoreFallDamage : UNavFilter_Jumper {
};

// Class AINavigation.NavFilter_QuerierClassOverrides
// Size: 0x60 (Inherited: 0x50)
struct UNavFilter_QuerierClassOverrides : UNavigationQueryFilter {
	struct TArray<struct FNavQuerierClassOverride> QuerierClassOverrides; // 0x50(0x10)
};

// Class AINavigation.NavLinkDropOff
// Size: 0x408 (Inherited: 0x3d8)
struct ANavLinkDropOff : AActor {
	char pad_3D8[0x10]; // 0x3d8(0x10)
	float DropOffDistance; // 0x3e8(0x04)
	float MaxDropOff; // 0x3ec(0x04)
	float MaxJumpHeight; // 0x3f0(0x04)
	char pad_3F4[0x14]; // 0x3f4(0x14)
};

// Class AINavigation.NavLinkDropOffGenerator
// Size: 0x430 (Inherited: 0x3d8)
struct ANavLinkDropOffGenerator : AActor {
	char pad_3D8[0x10]; // 0x3d8(0x10)
	float DropOffSeparation; // 0x3e8(0x04)
	float DropOffDistance; // 0x3ec(0x04)
	float MaxStepUpHeight; // 0x3f0(0x04)
	float MinStepDownHeight; // 0x3f4(0x04)
	float MaxDropOff; // 0x3f8(0x04)
	float MaxJumpHeight; // 0x3fc(0x04)
	float FallDamageHeight; // 0x400(0x04)
	float BaseLift; // 0x404(0x04)
	float BaseBackOff; // 0x408(0x04)
	struct FName IgnoreObjectsWithTag; // 0x40c(0x0c)
	struct TArray<struct FGeneratedNavigationLinkInfo> PointLinks; // 0x418(0x10)
	char pad_428[0x8]; // 0x428(0x08)

	void OnNavigationGenerated(struct ANavigationData* NavData); // Function AINavigation.NavLinkDropOffGenerator.OnNavigationGenerated // (Final|Native|Private) // @ game+0x26886b0
	bool HasValidData(); // Function AINavigation.NavLinkDropOffGenerator.HasValidData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2688680
	bool DoesMapHaveHealthyJumpLinks(); // Function AINavigation.NavLinkDropOffGenerator.DoesMapHaveHealthyJumpLinks // (Final|Native|Public|BlueprintCallable) // @ game+0x2688650
};

// Class AINavigation.NavLinkDropOffIgnoreVolumeBase
// Size: 0x3e0 (Inherited: 0x3d8)
struct ANavLinkDropOffIgnoreVolumeBase : AActor {
	struct UBoxComponent* IgnoreVolume; // 0x3d8(0x08)
};

// Class AINavigation.NavLinkDropOffIgnoreVolume
// Size: 0x3e0 (Inherited: 0x3e0)
struct ANavLinkDropOffIgnoreVolume : ANavLinkDropOffIgnoreVolumeBase {
};

// Class AINavigation.PathFollowingDebuggerInterface
// Size: 0x30 (Inherited: 0x30)
struct UPathFollowingDebuggerInterface : UInterface {
};

