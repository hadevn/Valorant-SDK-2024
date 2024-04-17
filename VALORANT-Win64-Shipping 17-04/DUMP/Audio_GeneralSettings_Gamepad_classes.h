// WidgetBlueprintGeneratedClass Audio_GeneralSettings_Gamepad.Audio_GeneralSettings_Gamepad_C
// Size: 0x358 (Inherited: 0x2c8)
struct UAudio_GeneralSettings_Gamepad_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UAudioSettingSelector_Gamepad_C* AudioSpeakerConfigSelector; // 0x2d0(0x08)
	struct UAudioSliderSettingsWidget_Gamepad_C* CharacterSelectMusicVolume; // 0x2d8(0x08)
	struct USettingsV2_Subheader_C* GeneralHeader; // 0x2e0(0x08)
	struct UVerticalBox* GeneralSubsection; // 0x2e8(0x08)
	struct UAudioCheckboxSettingsWidget_Gamepad_C* HRTFEnabled; // 0x2f0(0x08)
	struct UAudioSliderSettingsWidget_Gamepad_C* MasterVolumeWidget; // 0x2f8(0x08)
	struct UAudioSliderSettingsWidget_Gamepad_C* MenuLobbyMusicVolumeWidget; // 0x300(0x08)
	struct UAudioSliderSettingsWidget_Gamepad_C* MusicVolumeWidget; // 0x308(0x08)
	struct UAudioCheckboxSettingsWidget_Gamepad_C* MuteMusicOnWindopwDeactivate; // 0x310(0x08)
	struct USettingsV2_SettingsMessage_C* RestartToApplyAudioSettingsText; // 0x318(0x08)
	struct UAudioSliderSettingsWidget_Gamepad_C* SFXVolumeWidget; // 0x320(0x08)
	struct UAudioSliderSettingsWidget_Gamepad_C* VideoVolume; // 0x328(0x08)
	struct UAudioCheckboxSettingsWidget_Gamepad_C* VoipDucksMusic; // 0x330(0x08)
	struct UAudioSliderSettingsWidget_Gamepad_C* VOVolumeWidget; // 0x338(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x340(0x10)
	struct UConfirmResolutionSettingsModal_C* ResolutionConfirmationPopup; // 0x350(0x08)

	void HandleGameFeatureToggle(enum class EGameFeatureToggleName GameFeatureToggleName, bool Enabled); // Function Audio_GeneralSettings_Gamepad.Audio_GeneralSettings_Gamepad_C.HandleGameFeatureToggle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void Construct(); // Function Audio_GeneralSettings_Gamepad.Audio_GeneralSettings_Gamepad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4282c30
	void OnGameFeatureToggleChanged(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function Audio_GeneralSettings_Gamepad.Audio_GeneralSettings_Gamepad_C.OnGameFeatureToggleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void EnableOrDisableHrtfBasedOnSpeakerConfig(); // Function Audio_GeneralSettings_Gamepad.Audio_GeneralSettings_Gamepad_C.EnableOrDisableHrtfBasedOnSpeakerConfig // (BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void AllowHRTF(); // Function Audio_GeneralSettings_Gamepad.Audio_GeneralSettings_Gamepad_C.AllowHRTF // (BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void DoNotAllowHRTF(); // Function Audio_GeneralSettings_Gamepad.Audio_GeneralSettings_Gamepad_C.DoNotAllowHRTF // (BlueprintCallable|BlueprintEvent) // @ game+0x4282c30
	void ExecuteUbergraph_Audio_GeneralSettings_Gamepad(int32_t EntryPoint); // Function Audio_GeneralSettings_Gamepad.Audio_GeneralSettings_Gamepad_C.ExecuteUbergraph_Audio_GeneralSettings_Gamepad // (Final|UbergraphFunction|HasDefaults) // @ game+0x4282c30
};

