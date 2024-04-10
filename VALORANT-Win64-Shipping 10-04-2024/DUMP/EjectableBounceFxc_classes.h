// BlueprintGeneratedClass EjectableBounceFxc.EjectableBounceFxc_C
// Size: 0x598 (Inherited: 0x550)
struct AEjectableBounceFxc_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x558(0x08)
	struct UAresAudioComponent* ReusableAudioComponent; // 0x560(0x08)
	struct UAkAudioEvent* BounceAudioEvent; // 0x568(0x08)
	enum class EAresSurfaceType BounceSurfaceType; // 0x570(0x01)
	char pad_571[0x3]; // 0x571(0x03)
	int32_t NumBounces; // 0x574(0x04)
	float BounceSpeed; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct AAresEjectable* Ejectable; // 0x580(0x08)
	struct FString WWisePerspective; // 0x588(0x10)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function EjectableBounceFxc.EjectableBounceFxc_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function EjectableBounceFxc.EjectableBounceFxc_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void ExecuteUbergraph_EjectableBounceFxc(int32_t EntryPoint); // Function EjectableBounceFxc.EjectableBounceFxc_C.ExecuteUbergraph_EjectableBounceFxc // (Final|UbergraphFunction) // @ game+0x41999b0
};

