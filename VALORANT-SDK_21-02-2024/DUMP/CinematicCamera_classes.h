// Class CinematicCamera.CameraRig_Crane
// Size: 0x408 (Inherited: 0x3d8)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x3d8(0x04)
	float CraneYaw; // 0x3dc(0x04)
	float CraneArmLength; // 0x3e0(0x04)
	bool bLockMountPitch; // 0x3e4(0x01)
	bool bLockMountYaw; // 0x3e5(0x01)
	char pad_3E6[0x2]; // 0x3e6(0x02)
	struct USceneComponent* TransformComponent; // 0x3e8(0x08)
	struct USceneComponent* CraneYawControl; // 0x3f0(0x08)
	struct USceneComponent* CranePitchControl; // 0x3f8(0x08)
	struct USceneComponent* CraneCameraMount; // 0x400(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x3f8 (Inherited: 0x3d8)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x3d8(0x04)
	bool bLockOrientationToRail; // 0x3dc(0x01)
	char pad_3DD[0x3]; // 0x3dd(0x03)
	struct USceneComponent* TransformComponent; // 0x3e0(0x08)
	struct USplineComponent* RailSplineComponent; // 0x3e8(0x08)
	struct USceneComponent* RailCameraMount; // 0x3f0(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3ae9440
};

// Class CinematicCamera.CineCameraActor
// Size: 0xa90 (Inherited: 0xa20)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0xa20(0x58)
	char pad_A78[0x18]; // 0xa78(0x18)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x572bc50
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

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x572c190
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x572c0e0
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|BlueprintCallable) // @ game+0x572c060
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x572c030
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x572bf50
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x572bed0
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x572bea0
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x572bdc0
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x572bd40
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x572bc70
};

