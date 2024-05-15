// WidgetBlueprintGeneratedClass InitScreen.InitScreen_C
// Size: 0x400 (Inherited: 0x2d0)
struct UInitScreen_C : UInitScreenBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* HealthyGamingAnim; // 0x2d8(0x08)
	struct UWidgetAnimation* PhotoSensitivity; // 0x2e0(0x08)
	struct UWidgetAnimation* AgeRating; // 0x2e8(0x08)
	struct UWidgetAnimation* Intro; // 0x2f0(0x08)
	struct UCanvasPanel* AgeRatingDisplay; // 0x2f8(0x08)
	struct UImage* BackgroundTint3; // 0x300(0x08)
	struct UImage* BootingSplashCN; // 0x308(0x08)
	struct UImage* BootingSplashRoW; // 0x310(0x08)
	struct UWidgetSwitcher* BootSplashWidgetSwitcher; // 0x318(0x08)
	struct UTextBlock* BuildTagText; // 0x320(0x08)
	struct UTextBlock* CopyrightText; // 0x328(0x08)
	struct UFatalVanguardErrorNotification_C* FatalVanguardErrorNotification; // 0x330(0x08)
	struct UFatalVanguardRebootNotification_C* FatalVanguardRebootNotification; // 0x338(0x08)
	struct UTextBlock* GameVersionText; // 0x340(0x08)
	struct UHealthyGamingMessagePopup_C* HealthyGamingMessageScreen; // 0x348(0x08)
	struct UInitFailure_C* InitFailure; // 0x350(0x08)
	struct UImage* Localized_Boot_Logo; // 0x358(0x08)
	struct ULoginQueue_C* LoginQueue; // 0x360(0x08)
	struct ULoadingThrobberSmall_C* NativePlatformLoadingIndicator; // 0x368(0x08)
	struct UTextBlock* OnlineSubsystemEnvironmentText; // 0x370(0x08)
	struct UTextBlock* PatchlineText; // 0x378(0x08)
	struct UPhotoSensitivityWarning_C* PhotoSensitivityWarning; // 0x380(0x08)
	struct UImage* PlayerAlias_Boot_Logo; // 0x388(0x08)
	struct UOverlay* PlayerAliasInitContainer; // 0x390(0x08)
	struct USizeBox* RegionalLogoSizeBox; // 0x398(0x08)
	struct UVerticalBox* RegionalRiotLogos; // 0x3a0(0x08)
	struct UCanvasPanel* Spinner; // 0x3a8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_2; // 0x3b0(0x08)
	bool WarningPeriodComplete; // 0x3b8(0x01)
	char pad_3B9[0x3]; // 0x3b9(0x03)
	struct FName HealthWarningEnabledKey; // 0x3bc(0x0c)
	struct FName HealthWarningSecondsKey; // 0x3c8(0x0c)
	bool IntroFinished; // 0x3d4(0x01)
	char pad_3D5[0x3]; // 0x3d5(0x03)
	float LogoYAnchor; // 0x3d8(0x04)
	float LogoXAnchor; // 0x3dc(0x04)
	bool PreviewChinaLayout; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct UWidget* Target; // 0x3e8(0x08)
	bool EnableNativePlatformProgressIndicator; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct UInitScreenViewModel* InitScreenVM; // 0x3f8(0x08)

	void SequenceEvent__ENTRYPOINTInitScreen_1(); // Function InitScreen.InitScreen_C.SequenceEvent__ENTRYPOINTInitScreen_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void MakeInitScreenVM(); // Function InitScreen.InitScreen_C.MakeInitScreenVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void SetupNativePlatformProgressIndicator(); // Function InitScreen.InitScreen_C.SetupNativePlatformProgressIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void RefreshOnlineSubsystemEnvironmentText(); // Function InitScreen.InitScreen_C.RefreshOnlineSubsystemEnvironmentText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void SetBuildAndEnvironmentInfo(); // Function InitScreen.InitScreen_C.SetBuildAndEnvironmentInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void ShouldUseChinaLayout(bool& IsChinaLayout); // Function InitScreen.InitScreen_C.ShouldUseChinaLayout // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x4317a70
	void CreatePlayerAliasInitWidget(); // Function InitScreen.InitScreen_C.CreatePlayerAliasInitWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void UpdateLocalizationOverrides(); // Function InitScreen.InitScreen_C.UpdateLocalizationOverrides // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void UpdateState(); // Function InitScreen.InitScreen_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void SequenceEvent_1(); // Function InitScreen.InitScreen_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void GetInitializingWidget(struct UWidget*& NewParam); // Function InitScreen.InitScreen_C.GetInitializingWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x4317a70
	void GetErrorWidget(struct UWidget*& Widget); // Function InitScreen.InitScreen_C.GetErrorWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x4317a70
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function InitScreen.InitScreen_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x4317a70
	void ShowSplashScreens(); // Function InitScreen.InitScreen_C.ShowSplashScreens // (BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void HandlePhotoSensitivityWarningDismissed(); // Function InitScreen.InitScreen_C.HandlePhotoSensitivityWarningDismissed // (BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void Construct(); // Function InitScreen.InitScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4317a70
	void PreConstruct(bool IsDesignTime); // Function InitScreen.InitScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4317a70
	void HandleHealthyGamingPopupDismissed(); // Function InitScreen.InitScreen_C.HandleHealthyGamingPopupDismissed // (BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void HandlePhotosensitivityWarningDismissedNative(struct FGuid& ModalID); // Function InitScreen.InitScreen_C.HandlePhotosensitivityWarningDismissedNative // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void ExecuteUbergraph_InitScreen(int32_t EntryPoint); // Function InitScreen.InitScreen_C.ExecuteUbergraph_InitScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x4317a70
};

