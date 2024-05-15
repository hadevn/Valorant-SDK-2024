// WidgetBlueprintGeneratedClass Countdowntimer.CountdownTimer_C
// Size: 0x35c (Inherited: 0x2c8)
struct UCountdownTimer_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UTextBlock* TimerTextBlock; // 0x2d0(0x08)
	struct FDateTime ExpirationDateTime; // 0x2d8(0x08)
	struct FMulticastInlineDelegate TimerExpired; // 0x2e0(0x10)
	bool HasExpired; // 0x2f0(0x01)
	bool UsingUTC; // 0x2f1(0x01)
	char pad_2F2[0x2]; // 0x2f2(0x02)
	int32_t HideSecondsDisplayWhenRemainingMinutesGreaterThan; // 0x2f4(0x04)
	struct FSlateFontInfo Font; // 0x2f8(0x60)
	int32_t HideDaysDisplayWhenRemainingDaysLessThan1; // 0x358(0x04)

	void SetFormattedTimerValue(struct FTimespan CountdownTimeSpan); // Function Countdowntimer.CountdownTimer_C.SetFormattedTimerValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void UpdateTimerDisplay(); // Function Countdowntimer.CountdownTimer_C.UpdateTimerDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void UpdateRemainingDuration(struct FDateTime OffersExpirationTime); // Function Countdowntimer.CountdownTimer_C.UpdateRemainingDuration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void Construct(); // Function Countdowntimer.CountdownTimer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4317a70
	void PreConstruct(bool IsDesignTime); // Function Countdowntimer.CountdownTimer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4317a70
	void ExecuteUbergraph_CountdownTimer(int32_t EntryPoint); // Function Countdowntimer.CountdownTimer_C.ExecuteUbergraph_CountdownTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0x4317a70
	void TimerExpired__DelegateSignature(); // Function Countdowntimer.CountdownTimer_C.TimerExpired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
};

