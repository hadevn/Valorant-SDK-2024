// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary {

	void UpdateExternalTrackingHMDPosition(struct FTransform& ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x51d97e0
	void SetXRTimedInputActionDelegate(struct FName& ActionName, struct FDelegate& InDelegate); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x51d96d0
	void SetXRDisconnectDelegate(struct FDelegate& InDisconnectedDelegate); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x51d9620
	void SetWorldToMetersScale(struct UObject* WorldContext, float NewScale); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51d9560
	void SetTrackingOrigin(enum class EHMDTrackingOrigin Origin); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51d94f0
	void SetSpectatorScreenTexture(struct UTexture* InTexture); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51d9470
	void SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x51d9260
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51d91f0
	void SetClippingPlanes(float Near, float Far); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51d9130
	void ResetOrientationAndPosition(float Yaw, enum class EOrientPositionSelector OPTIONS); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51d9070
	bool IsSpectatorScreenModeControllable(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51d9040
	bool IsInLowPersistenceMode(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2908d20
	bool IsHeadMountedDisplayEnabled(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51d9010
	bool IsHeadMountedDisplayConnected(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51d8fe0
	bool IsDeviceTracking(struct FXRDeviceId& XRDeviceId); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x51d8f40
	bool HasValidTrackingPosition(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51d8f10
	int32_t GetXRSystemFlags(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51d8ee0
	float GetWorldToMetersScale(struct UObject* WorldContext); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51d8e50
	void GetVRFocusState(bool& bUseFocus, bool& bHasFocus); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x51d8cf0
	struct FString GetVersionString(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51d8dd0
	struct FTransform GetTrackingToWorldTransform(struct UObject* WorldContext); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x51d8c30
	void GetTrackingSensorParameters(struct FVector& Origin, struct FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x51d8880
	enum class EHMDTrackingOrigin GetTrackingOrigin(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51d8840
	float GetScreenPercentage(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51d8810
	void GetPositionalTrackingCameraParameters(struct FVector& CameraOrigin, struct FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x51d85a0
	struct FVector2D GetPlayAreaBounds(enum class EHMDTrackingOrigin Origin); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x51d8510
	float GetPixelDensity(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51d84e0
	void GetOrientationAndPosition(struct FRotator& DeviceRotation, struct FVector& DevicePosition); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x51d8410
	int32_t GetNumOfTrackingSensors(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51d83e0
	void GetMotionControllerData(struct UObject* WorldContext, enum class EControllerHand Hand, struct FXRMotionControllerData& MotionControllerData); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x51d8250
	enum class EHMDWornState GetHMDWornState(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51d8220
	struct FName GetHMDDeviceName(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51d81e0
	void GetHMDData(struct UObject* WorldContext, struct FXRHMDData& HMDData); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x51d80f0
	void GetDeviceWorldPose(struct UObject* WorldContext, struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& Position); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x51d7ec0
	void GetDevicePose(struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& Position); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x51d7cd0
	bool GetControllerTransformForTime(struct UObject* WorldContext, int32_t ControllerIndex, struct FName MotionSource, struct FTimespan Time, bool& bTimeWasUsed, struct FRotator& Orientation, struct FVector& Position, bool& bProvidedLinearVelocity, struct FVector& LinearVelocity, bool& bProvidedAngularVelocity, struct FVector& AngularVelocityRadPerSec); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x51d7940
	struct TArray<struct FXRDeviceId> EnumerateTrackedDevices(struct FName SystemId, enum class EXRTrackedDeviceType DeviceType); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51d7810
	void EnableLowPersistenceMode(bool bEnable); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51d77a0
	bool EnableHMD(bool bEnable); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51d7710
	void DisconnectRemoteXRDevice(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51d76f0
	enum class EXRDeviceConnectionResult ConnectRemoteXRDevice(struct FString IpAddress, int32_t BitRate); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51d7580
	bool ConfigureGestures(struct FXRGestureConfig& GestureConfig); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x51d74e0
	void ClearXRTimedInputActionDelegate(struct FName& ActionPath); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x51d7450
	void CalibrateExternalTrackingToHMD(struct FTransform& ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x51d7380
	void BreakKey(struct FKey InKey, struct FString& InteractionProfile, enum class EControllerHand& Hand, struct FName& MotionSource, struct FString& Indentifier, struct FString& Component); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x51d70a0
};

// Class HeadMountedDisplay.HandKeypointConversion
// Size: 0x30 (Inherited: 0x30)
struct UHandKeypointConversion : UBlueprintFunctionLibrary {

	int32_t Conv_HandKeypointToInt32(enum class EHandKeypoint Input); // Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51d7670
};

// Class HeadMountedDisplay.MotionControllerComponent
// Size: 0x610 (Inherited: 0x550)
struct UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; // 0x550(0x04)
	enum class EControllerHand Hand; // 0x554(0x01)
	char pad_555[0x3]; // 0x555(0x03)
	struct FName MotionSource; // 0x558(0x0c)
	char bDisableLowLatencyUpdate : 1; // 0x564(0x01)
	char pad_564_1 : 7; // 0x564(0x01)
	char pad_565[0x3]; // 0x565(0x03)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x568(0x01)
	bool bDisplayDeviceModel; // 0x569(0x01)
	char pad_56A[0x2]; // 0x56a(0x02)
	struct FName DisplayModelSource; // 0x56c(0x0c)
	struct UStaticMesh* CustomDisplayMesh; // 0x578(0x08)
	struct TArray<struct UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x580(0x10)
	char pad_590[0x60]; // 0x590(0x60)
	struct UPrimitiveComponent* DisplayComponent; // 0x5f0(0x08)
	char pad_5F8[0x18]; // 0x5f8(0x18)

	void SetTrackingSource(enum class EControllerHand NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource // (Final|Native|Public|BlueprintCallable) // @ game+0x51de570
	void SetTrackingMotionSource(struct FName NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource // (Final|Native|Public|BlueprintCallable) // @ game+0x51de4d0
	void SetShowDeviceModel(bool bShowControllerModel); // Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel // (Final|Native|Public|BlueprintCallable) // @ game+0x51de440
	void SetDisplayModelSource(struct FName NewDisplayModelSource); // Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource // (Final|Native|Public|BlueprintCallable) // @ game+0x51de160
	void SetCustomDisplayMesh(struct UStaticMesh* NewDisplayMesh); // Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x51de0d0
	void SetAssociatedPlayerIndex(int32_t NewPlayer); // Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x51de040
	void OnMotionControllerUpdated(); // Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated // (Event|Protected|BlueprintEvent) // @ game+0x41999b0
	bool IsTracked(); // Function HeadMountedDisplay.MotionControllerComponent.IsTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51de020
	enum class EControllerHand GetTrackingSource(); // Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x51ddc80
	float GetParameterValue(struct FName InName, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x51ddb80
	struct FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x51dda30
};

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UMotionTrackedDeviceFunctionLibrary : UBlueprintFunctionLibrary {

	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51de200
	bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51ddf40
	bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51dde70
	bool IsMotionTrackingEnabledForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51ddde0
	bool IsMotionTrackedDeviceCountManagementNecessary(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51dddb0
	bool IsMotionSourceTracking(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51ddcd0
	int32_t GetMotionTrackingEnabledControllerCount(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51ddb50
	int32_t GetMaximumMotionTrackedControllerCount(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x51ddb20
	struct FName GetActiveTrackingSystemName(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51dd9f0
	struct TArray<struct FName> EnumerateMotionSources(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51dd970
	bool EnableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51dd890
	bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51dd7c0
	bool EnableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51dd730
	void DisableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51dd660
	void DisableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51dd5a0
	void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51dd520
	void DisableMotionTrackingOfAllControllers(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51dd500
	void DisableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51dd480
};

// Class HeadMountedDisplay.VRNotificationsComponent
// Size: 0x178 (Inherited: 0xe8)
struct UVRNotificationsComponent : UActorComponent {
	struct FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xe8(0x10)
	struct FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0xf8(0x10)
	struct FMulticastInlineDelegate HMDRecenteredDelegate; // 0x108(0x10)
	struct FMulticastInlineDelegate HMDLostDelegate; // 0x118(0x10)
	struct FMulticastInlineDelegate HMDReconnectedDelegate; // 0x128(0x10)
	struct FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x138(0x10)
	struct FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x148(0x10)
	struct FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x158(0x10)
	struct FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x168(0x10)
};

// Class HeadMountedDisplay.XRAssetFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UXRAssetFunctionLibrary : UBlueprintFunctionLibrary {

	struct UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x51dd200
	struct UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x51dcb70
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// Size: 0x68 (Inherited: 0x38)
struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnModelLoaded; // 0x38(0x10)
	struct FMulticastInlineDelegate OnLoadFailure; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	struct UPrimitiveComponent* SpawnedComponent; // 0x60(0x08)

	struct UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent*& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x51dcf40
	struct UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform, struct UPrimitiveComponent*& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x51dc940
};

// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UXRLoadingScreenFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51de5f0
	void SetLoadingScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x51de280
	void HideLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51ddcb0
	void ClearLoadingScreenSplashes(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x51dd460
	void AddLoadingScreenSplash(struct UTexture* Texture, struct FVector Translation, struct FRotator Rotation, struct FVector2D Size, struct FRotator DeltaRotation, bool bClearBeforeAdd); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x51dcd40
};

