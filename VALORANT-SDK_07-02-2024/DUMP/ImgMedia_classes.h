// Class ImgMedia.ImgMediaSource
// Size: 0xd8 (Inherited: 0x98)
struct UImgMediaSource : UBaseMediaSource {
	bool IsPathRelativeToProjectRoot; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FFrameRate FrameRateOverride; // 0x9c(0x08)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FString ProxyOverride; // 0xa8(0x10)
	struct FDirectoryPath SequencePath; // 0xb8(0x10)
	char pad_C8[0x10]; // 0xc8(0x10)

	void SetSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetSequencePath // (Final|Native|Public|BlueprintCallable) // @ game+0x2bba7a0
	void SetMipLevelDistance(float Distance); // Function ImgMedia.ImgMediaSource.SetMipLevelDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x2bba720
	void RemoveTargetObject(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.RemoveTargetObject // (Final|Native|Public|BlueprintCallable) // @ game+0x2bba690
	void RemoveGlobalCamera(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.RemoveGlobalCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x2bba600
	struct FString GetSequencePath(); // Function ImgMedia.ImgMediaSource.GetSequencePath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2bba550
	void GetProxies(struct TArray<struct FString>& OutProxies); // Function ImgMedia.ImgMediaSource.GetProxies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2bba480
	void AddTargetObject(struct AActor* InActor, float Width); // Function ImgMedia.ImgMediaSource.AddTargetObject // (Final|Native|Public|BlueprintCallable) // @ game+0x2bba3b0
	void AddGlobalCamera(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.AddGlobalCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x2bba320
};

