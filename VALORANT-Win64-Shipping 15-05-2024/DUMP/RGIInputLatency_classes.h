// Class RGIInputLatency.RGIInputLatencyBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct URGIInputLatencyBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetTargetFrametimeOverheadPercentage(int32_t InTargetFrametimeOverheadPercentage); // Function RGIInputLatency.RGIInputLatencyBlueprintLibrary.SetTargetFrametimeOverheadPercentage // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x2b926a0
	void SetRGIInputLatencyEnabled(bool bEnabled); // Function RGIInputLatency.RGIInputLatencyBlueprintLibrary.SetRGIInputLatencyEnabled // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x2b92620
	bool IsRGIInputLatencyPluginSupported(); // Function RGIInputLatency.RGIInputLatencyBlueprintLibrary.IsRGIInputLatencyPluginSupported // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0x25a4bc0
	int32_t GetTargetFrametimeOverheadPercentage(); // Function RGIInputLatency.RGIInputLatencyBlueprintLibrary.GetTargetFrametimeOverheadPercentage // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0x2b925f0
	bool GetRGIInputLatencyEnabled(); // Function RGIInputLatency.RGIInputLatencyBlueprintLibrary.GetRGIInputLatencyEnabled // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0x2b925c0
};

// Class RGIInputLatency.RGIMaxTickRateHandler
// Size: 0x58 (Inherited: 0x30)
struct URGIMaxTickRateHandler : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	uint32_t TargetFrametimeOverheadPercentage; // 0x48(0x04)
	float WorkEstimateSmoothingFactor; // 0x4c(0x04)
	uint32_t FrameHistoryLength; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

