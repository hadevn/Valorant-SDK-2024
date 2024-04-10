// BlueprintGeneratedClass GlobalAudioManagerBP.GlobalAudioManagerBP_C
// Size: 0xf0 (Inherited: 0x80)
struct UGlobalAudioManagerBP_C : UGlobalAudioManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x80(0x08)
	bool TEMP_HasBoundPartyStuff; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UAkInitBank* InitBank; // 0x90(0x08)
	bool IsApplicationActive; // 0x98(0x01)
	bool IsInPregame; // 0x99(0x01)
	bool IsPregameObserver; // 0x9a(0x01)
	char pad_9B[0x5]; // 0x9b(0x05)
	struct TMap<struct FString, struct UAkAudioEvent*> MapIntroStingers; // 0xa0(0x50)

	void SetHRTFBasedOnAudioSetup(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.SetHRTFBasedOnAudioSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void InitWwiseSpeakerConfiguration(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.InitWwiseSpeakerConfiguration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void UpdateMenuAudio(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.UpdateMenuAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void GetMainMenuNavigationMusic(enum class EAresMainMenuTopNavigationState State, struct FMenuMusic& NewParam); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.GetMainMenuNavigationMusic // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void UpdatePregameMusic(struct UPregameViewModel* PregameViewModel); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.UpdatePregameMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void BeginMainMenu(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.BeginMainMenu // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void PartySizeChanged(struct UPartyPlayerModel* Player); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.PartySizeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void BeginPregame(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.BeginPregame // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void OnLockInChanged(bool NewValue); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnLockInChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void BeginTransitionToInGame(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.BeginTransitionToInGame // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void BeginInGame(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.BeginInGame // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void BeginInitialization(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.BeginInitialization // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void OnWinningTeam(struct UBaseTeamComponent* WinningTeam); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnWinningTeam // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void UpdateMenuMusic(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.UpdateMenuMusic // (BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void OnMatchFound(bool NewValue); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnMatchFound // (BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void BeginTransitionToPregame(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.BeginTransitionToPregame // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void OnMatchmakingChanged(bool NewValue); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnMatchmakingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void EndPregame(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.EndPregame // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void OnApplicationActivationStateChange(bool bActive); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnApplicationActivationStateChange // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void HandleCurrentMenuMusicChanged(struct FMenuMusic& NewValue); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.HandleCurrentMenuMusicChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void OnIsObserverChanged(bool NewValue); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnIsObserverChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void HandleNavStateChange(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.HandleNavStateChange // (BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void OnPregameMapSelectStateChanged(enum class EPregameMatchState State); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnPregameMapSelectStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void OnEnableHRTFSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnEnableHRTFSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void OnAudioDeviceChanged(int32_t NumAudioChannels, bool bSpatialAudio, bool bPassthroughAudio); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.OnAudioDeviceChanged // (Event|Public|BlueprintEvent) // @ game+0x41999b0
	void SetWwiseOutputConfigState(); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.SetWwiseOutputConfigState // (BlueprintCallable|BlueprintEvent) // @ game+0x41999b0
	void ExecuteUbergraph_GlobalAudioManagerBP(int32_t EntryPoint); // Function GlobalAudioManagerBP.GlobalAudioManagerBP_C.ExecuteUbergraph_GlobalAudioManagerBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x41999b0
};

