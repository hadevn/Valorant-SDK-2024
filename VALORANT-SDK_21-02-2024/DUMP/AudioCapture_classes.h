// Class AudioCapture.AudioCapture
// Size: 0xb8 (Inherited: 0xb0)
struct UAudioCapture : UAudioGenerator {
	char pad_B0[0x8]; // 0xb0(0x08)

	void StopCapturingAudio(); // Function AudioCapture.AudioCapture.StopCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x2c6fbe0
	void StartCapturingAudio(); // Function AudioCapture.AudioCapture.StartCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x2c6fbc0
	bool IsCapturingAudio(); // Function AudioCapture.AudioCapture.IsCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x2c6fb90
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo& OutInfo); // Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c6fae0
};

// Class AudioCapture.AudioCaptureFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary {

	struct UAudioCapture* CreateAudioCapture(); // Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2c6fab0
};

// Class AudioCapture.AudioCaptureComponent
// Size: 0x820 (Inherited: 0x760)
struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x760(0x04)
	char pad_764[0xbc]; // 0x764(0xbc)
};

