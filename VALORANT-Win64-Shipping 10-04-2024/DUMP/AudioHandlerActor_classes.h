// BlueprintGeneratedClass AudioHandlerActor.AudioHandlerActor_C
// Size: 0x600 (Inherited: 0x438)
struct AAudioHandlerActor_C : AAresSoundHandler {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	float TimeSinceStatUpdate; // 0x440(0x04)
	float StatUpdateInterval; // 0x444(0x04)
	bool StatsEnabled; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	float Whiz_MaxDistance; // 0x44c(0x04)
	float Whiz_MidMaxDist; // 0x450(0x04)
	float Whiz_CloseMaxDist; // 0x454(0x04)
	struct TArray<struct UObject*> AudioMessageListeners; // 0x458(0x10)
	float LastBulletWhizTime; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct UAkAudioEvent* Aud_PingEvent; // 0x470(0x08)
	bool MultiSource; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct FExplicitFloatCurve OcclusionCurveByDistance; // 0x480(0x88)
	struct TMap<struct UAresAudioComponent*, struct FAudioEventList> OcclusionQueries; // 0x508(0x50)
	struct FAudioEventList NewEventList; // 0x558(0x10)
	struct FExplicitFloatCurve OcclusionCurveByDifference; // 0x568(0x88)
	struct FAkChannelMask LeftChannelMask; // 0x5f0(0x04)
	struct FAkChannelMask RightChannelMask; // 0x5f4(0x04)
	float BaseFootstepRadius; // 0x5f8(0x04)
	float CurrentFootstepRadius; // 0x5fc(0x04)

	void TriggerHUDError(struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* Event, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerHUDError // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void DidPlayBulletWhiz(); // Function AudioHandlerActor.AudioHandlerActor_C.DidPlayBulletWhiz // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void ShouldPlayBulletWhiz(float WhizByChance, bool BypassWhizCooldown, bool& ShouldPlayBulletWhiz); // Function AudioHandlerActor.AudioHandlerActor_C.ShouldPlayBulletWhiz // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x41999b0
	void TriggerBulletWhizSound(struct UBulletWhizByComponent* WhizByComponent, struct FAresWhizBySoundTuning& WhizByTuning, struct FVector& ShotStart, struct FVector& ShotEnd, struct FVector& ClosestPoint, float ClosestPointDistance, struct FVector& ListenerPoint, struct AShooterCharacter* InstigatorShooterCharacter, struct AShooterCharacter* LocalShooterCharacter, bool bIsFriendlyFire, enum class EAresImpactOrder ImpactOrder); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerBulletWhizSound // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void TriggerHUDPing(struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* Event, struct FVector& Location, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerHUDPing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void TriggerHUDKillConfirmSound(struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* Event, int32_t MultikillLevel, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerHUDKillConfirmSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void TriggerExplosionEffectSound(struct AShooterExplosionEffect* ExplosionEffect, struct UAkAudioEvent* Event, struct FVector& Location, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerExplosionEffectSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void TriggerEjectableBounceSound(struct AAresEjectable* Ejectable, struct UAkAudioEvent* Event, struct FVector& Location, enum class EAresSurfaceType SurfaceType, int32_t NumBounces, float BounceSpeed, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerEjectableBounceSound // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void TriggerCharacterEquippableSound(struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* Event, struct USceneComponent* AttachComponent, struct FName AttachPoint, struct FString Perspective, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerCharacterEquippableSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void TriggerCharacterHitConfirmSound(struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* Event, struct USkeletalMeshComponent* AttachComponent, enum class EAresHitConfirmLocality HitLocality, enum class EAresRegionalDamage RegionalDamage, float FalloffMultiplier, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerCharacterHitConfirmSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void TriggerCharacterImpactEffectSound(struct AActor* InstigatorActor, struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* Event, struct FVector& ImpactPoint, enum class EAresImpactEffectHitspace HitSpace, enum class EAresRegionalDamage RegionalDamage, enum class EAresImpactEffectWithArmor HitImpactArmor, enum class EAresImpactEffectAllies Allies, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerCharacterImpactEffectSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void TriggerCharacterRespawnSound(struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* Event, struct FVector& RespawnLocation, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerCharacterRespawnSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void TriggerEquippablePickupSound(struct AActor* OwnerActor, struct AAresEquippable* NewEquippable, struct UAkAudioEvent* Event, struct USceneComponent* AttachComponent, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerEquippablePickupSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void TriggerWorldEquippableSound(struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* Event, struct USceneComponent* AttachComponent, struct FName AttachPoint, struct FString Perspective, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerWorldEquippableSound // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void TriggerWorldImpactEffectSound(struct AActor* InstigatorActor, struct UWorld* World, struct UAkAudioEvent* Event, struct FVector& ImpactPoint, struct FString Perspective, enum class EAresSurfaceType SurfaceType, bool bEnableOcclusion, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerWorldImpactEffectSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void TriggerCharacterGroundSound(struct AShooterCharacter* ShooterCharacter, struct TArray<struct UAkAudioEvent*>& Events, struct FVector& SoundLocation, struct FRotator& SoundRotation, struct FString Perspective, enum class EAresSurfaceType SurfaceType, float VolumeMultiplier, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerCharacterGroundSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void ReceiveTick(float DeltaSeconds); // Function AudioHandlerActor.AudioHandlerActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void PostGroundEvent(struct UAresAudioComponent* AudioComponent, struct AShooterCharacter* Character, struct TArray<struct UAkAudioEvent*>& Events); // Function AudioHandlerActor.AudioHandlerActor_C.PostGroundEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void ExecuteUbergraph_AudioHandlerActor(int32_t EntryPoint); // Function AudioHandlerActor.AudioHandlerActor_C.ExecuteUbergraph_AudioHandlerActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x41999b0
};

