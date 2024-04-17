// Class CinematicCamera.CameraRig_Crane
// Size: 0x3e8 (Inherited: 0x3b8)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x3b8(0x04)
	float CraneYaw; // 0x3bc(0x04)
	float CraneArmLength; // 0x3c0(0x04)
	bool bLockMountPitch; // 0x3c4(0x01)
	bool bLockMountYaw; // 0x3c5(0x01)
	char pad_3C6[0x2]; // 0x3c6(0x02)
	struct USceneComponent* TransformComponent; // 0x3c8(0x08)
	struct USceneComponent* CraneYawControl; // 0x3d0(0x08)
	struct USceneComponent* CranePitchControl; // 0x3d8(0x08)
	struct USceneComponent* CraneCameraMount; // 0x3e0(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x3d8 (Inherited: 0x3b8)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x3b8(0x04)
	bool bLockOrientationToRail; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	struct USceneComponent* TransformComponent; // 0x3c0(0x08)
	struct USplineComponent* RailSplineComponent; // 0x3c8(0x08)
	struct USceneComponent* RailCameraMount; // 0x3d0(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x58e3410
};

// Class CinematicCamera.CineCameraActor
// Size: 0xa70 (Inherited: 0xa00)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0xa00(0x58)
	char pad_A58[0x18]; // 0xa58(0x18)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58e3030
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xa20 (Inherited: 0x920)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0x920(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0x92c(0x0c)
	struct FCameraLensSettings LensSettings; // 0x938(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x950(0x60)
	float CurrentFocalLength; // 0x9b0(0x04)
	float CurrentAperture; // 0x9b4(0x04)
	float CurrentFocusDistance; // 0x9b8(0x04)
	char pad_9BC[0xc]; // 0x9bc(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x9c8(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x9d8(0x10)
	struct FString DefaultFilmbackPresetName; // 0x9e8(0x10)
	struct FString DefaultFilmbackPreset; // 0x9f8(0x10)
	struct FString DefaultLensPresetName; // 0xa08(0x10)
	float DefaultLensFocalLength; // 0xa18(0x04)
	float DefaultLensFStop; // 0xa1c(0x04)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x58e3590
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x58e34e0
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|BlueprintCallable) // @ game+0x58e3460
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58e3430
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x58e3330
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58e32b0
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58e3280
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x58e31a0
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58e3120
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x58e3050
};

