// BlueprintGeneratedClass EjectableBounceFxc.EjectableBounceFxc_C
// Size: 0x578 (Inherited: 0x530)
struct AEjectableBounceFxc_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x538(0x08)
	struct UAresAudioComponent* ReusableAudioComponent; // 0x540(0x08)
	struct UAkAudioEvent* BounceAudioEvent; // 0x548(0x08)
	enum class EAresSurfaceType BounceSurfaceType; // 0x550(0x01)
	char pad_551[0x3]; // 0x551(0x03)
	int32_t NumBounces; // 0x554(0x04)
	float BounceSpeed; // 0x558(0x04)
	char pad_55C[0x4]; // 0x55c(0x04)
	struct AAresEjectable* Ejectable; // 0x560(0x08)
	struct FString WWisePerspective; // 0x568(0x10)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function EjectableBounceFxc.EjectableBounceFxc_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x4317a70
	void StopEffect(enum class EStopEffectType StopEffectType); // Function EjectableBounceFxc.EjectableBounceFxc_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x4317a70
	void ExecuteUbergraph_EjectableBounceFxc(int32_t EntryPoint); // Function EjectableBounceFxc.EjectableBounceFxc_C.ExecuteUbergraph_EjectableBounceFxc // (Final|UbergraphFunction) // @ game+0x4317a70
};

