// Class TimeManagement.FixedFrameRateCustomTimeStep
// Size: 0x30 (Inherited: 0x30)
struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep {
};

// Class TimeManagement.GenlockedCustomTimeStep
// Size: 0x30 (Inherited: 0x30)
struct UGenlockedCustomTimeStep : UFixedFrameRateCustomTimeStep {
};

// Class TimeManagement.GenlockedFixedRateCustomTimeStep
// Size: 0x50 (Inherited: 0x30)
struct UGenlockedFixedRateCustomTimeStep : UGenlockedCustomTimeStep {
	struct FFrameRate FrameRate; // 0x30(0x08)
	char pad_38[0x18]; // 0x38(0x18)
};

// Class TimeManagement.GenlockedTimecodeProvider
// Size: 0x60 (Inherited: 0x38)
struct UGenlockedTimecodeProvider : UTimecodeProvider {
	bool bUseGenlockToCount; // 0x38(0x01)
	char pad_39[0x27]; // 0x39(0x27)
};

// Class TimeManagement.TimeManagementBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FFrameTime TransformTime(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& DestinationRate); // Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x54979a0
	struct FFrameNumber Subtract_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x54978e0
	struct FFrameNumber Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5497820
	struct FFrameTime SnapFrameTimeToRate(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& SnapToRate); // Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x54976d0
	struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate& FrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x54975f0
	struct FFrameNumber Multiply_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5497530
	bool IsValid_MultipleOf(struct FFrameRate& InFrameRate, struct FFrameRate& OtherFramerate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5497430
	bool IsValid_Framerate(struct FFrameRate& InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5497390
	struct FFrameRate GetTimecodeFrameRate(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5497350
	struct FTimecode GetTimecode(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5497310
	struct FFrameNumber Divide_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5497250
	struct FString Conv_TimecodeToString(struct FTimecode& InTimecode, bool bForceSignDisplay); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5497120
	float Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime& InFrameTime); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5497070
	float Conv_FrameRateToSeconds(struct FFrameRate& InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5496fd0
	int32_t Conv_FrameNumberToInteger(struct FFrameNumber& InFrameNumber); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5496f40
	struct FFrameNumber Add_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5496e80
	struct FFrameNumber Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5496dc0
};

// Class TimeManagement.TimeSynchronizationSource
// Size: 0x38 (Inherited: 0x30)
struct UTimeSynchronizationSource : UObject {
	bool bUseForSynchronization; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t FrameOffset; // 0x34(0x04)
};

