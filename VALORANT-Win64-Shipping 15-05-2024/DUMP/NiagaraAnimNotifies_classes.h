// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// Size: 0xa0 (Inherited: 0x40)
struct UAnimNotify_PlayNiagaraEffect : UAnimNotify {
	struct UNiagaraSystem* Template; // 0x40(0x08)
	struct FVector LocationOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	struct FVector Scale; // 0x60(0x0c)
	bool bAbsoluteScale; // 0x6c(0x01)
	char pad_6D[0x23]; // 0x6d(0x23)
	char Attached : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FName SocketName; // 0x94(0x0c)

	struct UFXSystemComponent* GetSpawnedEffect(); // Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x29f73c0
};

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// Size: 0x68 (Inherited: 0x38)
struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState {
	struct UNiagaraSystem* Template; // 0x38(0x08)
	struct FName SocketName; // 0x40(0x0c)
	struct FVector LocationOffset; // 0x4c(0x0c)
	struct FRotator RotationOffset; // 0x58(0x0c)
	bool bDestroyAtEnd; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)

	struct UFXSystemComponent* GetSpawnedEffect(struct UMeshComponent* MeshComp); // Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x29f7320
};

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
// Size: 0xb8 (Inherited: 0x68)
struct UAnimNotifyState_TimedNiagaraEffectAdvanced : UAnimNotifyState_TimedNiagaraEffect {
	char pad_68[0x50]; // 0x68(0x50)

	float GetNotifyProgress(struct UMeshComponent* MeshComp); // Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x29f7280
};

