// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary {

	void UpdateExternalTrackingHMDPosition(struct FTransform& ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5096e70
	void SetXRTimedInputActionDelegate(struct FName& ActionName, struct FDelegate& InDelegate); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5096d60
	void SetXRDisconnectDelegate(struct FDelegate& InDisconnectedDelegate); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5096cb0
	void SetWorldToMetersScale(struct UObject* WorldContext, float NewScale); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5096bf0
	void SetTrackingOrigin(enum class EHMDTrackingOrigin Origin); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5096b80
	void SetSpectatorScreenTexture(struct UTexture* InTexture); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5096b00
	void SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x50968f0
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5096880
	void SetClippingPlanes(float Near, float Far); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x50967c0
	void ResetOrientationAndPosition(float Yaw, enum class EOrientPositionSelector OPTIONS); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5096700
	bool IsSpectatorScreenModeControllable(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x50966d0
	bool IsInLowPersistenceMode(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2865b20
	bool IsHeadMountedDisplayEnabled(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x50966a0
	bool IsHeadMountedDisplayConnected(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5096670
	bool IsDeviceTracking(struct FXRDeviceId& XRDeviceId); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x50965d0
	bool HasValidTrackingPosition(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x50965a0
	int32_t GetXRSystemFlags(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5096570
	float GetWorldToMetersScale(struct UObject* WorldContext); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x50964e0
	void GetVRFocusState(bool& bUseFocus, bool& bHasFocus); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5096380
	struct FString GetVersionString(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5096460
	struct FTransform GetTrackingToWorldTransform(struct UObject* WorldContext); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x50962c0
	void GetTrackingSensorParameters(struct FVector& Origin, struct FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5095f10
	enum class EHMDTrackingOrigin GetTrackingOrigin(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5095ed0
	float GetScreenPercentage(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5095ea0
	void GetPositionalTrackingCameraParameters(struct FVector& CameraOrigin, struct FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5095c30
	struct FVector2D GetPlayAreaBounds(enum class EHMDTrackingOrigin Origin); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5095ba0
	float GetPixelDensity(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5095b70
	void GetOrientationAndPosition(struct FRotator& DeviceRotation, struct FVector& DevicePosition); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5095aa0
	int32_t GetNumOfTrackingSensors(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5095a70
	void GetMotionControllerData(struct UObject* WorldContext, enum class EControllerHand Hand, struct FXRMotionControllerData& MotionControllerData); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x50958e0
	enum class EHMDWornState GetHMDWornState(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x50958b0
	struct FName GetHMDDeviceName(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5095870
	void GetHMDData(struct UObject* WorldContext, struct FXRHMDData& HMDData); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5095780
	void GetDeviceWorldPose(struct UObject* WorldContext, struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& Position); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5095550
	void GetDevicePose(struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& Position); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5095360
	bool GetControllerTransformForTime(struct UObject* WorldContext, int32_t ControllerIndex, struct FName MotionSource, struct FTimespan Time, bool& bTimeWasUsed, struct FRotator& Orientation, struct FVector& Position, bool& bProvidedLinearVelocity, struct FVector& LinearVelocity, bool& bProvidedAngularVelocity, struct FVector& AngularVelocityRadPerSec); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5094fd0
	struct TArray<struct FXRDeviceId> EnumerateTrackedDevices(struct FName SystemId, enum class EXRTrackedDeviceType DeviceType); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5094ea0
	void EnableLowPersistenceMode(bool bEnable); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5094e30
	bool EnableHMD(bool bEnable); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5094da0
	void DisconnectRemoteXRDevice(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5094d80
	enum class EXRDeviceConnectionResult ConnectRemoteXRDevice(struct FString IpAddress, int32_t BitRate); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5094c10
	bool ConfigureGestures(struct FXRGestureConfig& GestureConfig); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5094b70
	void ClearXRTimedInputActionDelegate(struct FName& ActionPath); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5094ae0
	void CalibrateExternalTrackingToHMD(struct FTransform& ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5094a10
	void BreakKey(struct FKey InKey, struct FString& InteractionProfile, enum class EControllerHand& Hand, struct FName& MotionSource, struct FString& Indentifier, struct FString& Component); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x5094730
};

// Class HeadMountedDisplay.HandKeypointConversion
// Size: 0x30 (Inherited: 0x30)
struct UHandKeypointConversion : UBlueprintFunctionLibrary {

	int32_t Conv_HandKeypointToInt32(enum class EHandKeypoint Input); // Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5094d00
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

	void SetTrackingSource(enum class EControllerHand NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource // (Final|Native|Public|BlueprintCallable) // @ game+0x509bc00
	void SetTrackingMotionSource(struct FName NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource // (Final|Native|Public|BlueprintCallable) // @ game+0x509bb60
	void SetShowDeviceModel(bool bShowControllerModel); // Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel // (Final|Native|Public|BlueprintCallable) // @ game+0x509bad0
	void SetDisplayModelSource(struct FName NewDisplayModelSource); // Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource // (Final|Native|Public|BlueprintCallable) // @ game+0x509b7f0
	void SetCustomDisplayMesh(struct UStaticMesh* NewDisplayMesh); // Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x509b760
	void SetAssociatedPlayerIndex(int32_t NewPlayer); // Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x509b6d0
	void OnMotionControllerUpdated(); // Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated // (Event|Protected|BlueprintEvent) // @ game+0x40572e0
	bool IsTracked(); // Function HeadMountedDisplay.MotionControllerComponent.IsTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x509b6b0
	enum class EControllerHand GetTrackingSource(); // Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x509b310
	float GetParameterValue(struct FName InName, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x509b210
	struct FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x509b0c0
};

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UMotionTrackedDeviceFunctionLibrary : UBlueprintFunctionLibrary {

	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x509b890
	bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x509b5d0
	bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x509b500
	bool IsMotionTrackingEnabledForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x509b470
	bool IsMotionTrackedDeviceCountManagementNecessary(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x509b440
	bool IsMotionSourceTracking(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x509b360
	int32_t GetMotionTrackingEnabledControllerCount(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x509b1e0
	int32_t GetMaximumMotionTrackedControllerCount(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x509b1b0
	struct FName GetActiveTrackingSystemName(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x509b080
	struct TArray<struct FName> EnumerateMotionSources(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x509b000
	bool EnableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x509af20
	bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x509ae50
	bool EnableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x509adc0
	void DisableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x509acf0
	void DisableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x509ac30
	void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x509abb0
	void DisableMotionTrackingOfAllControllers(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x509ab90
	void DisableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x509ab10
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

	struct UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x509a890
	struct UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x509a200
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// Size: 0x68 (Inherited: 0x38)
struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnModelLoaded; // 0x38(0x10)
	struct FMulticastInlineDelegate OnLoadFailure; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	struct UPrimitiveComponent* SpawnedComponent; // 0x60(0x08)

	struct UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent*& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x509a5d0
	struct UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform, struct UPrimitiveComponent*& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5099fd0
};

// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UXRLoadingScreenFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x509bc80
	void SetLoadingScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x509b910
	void HideLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x509b340
	void ClearLoadingScreenSplashes(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x509aaf0
	void AddLoadingScreenSplash(struct UTexture* Texture, struct FVector Translation, struct FRotator Rotation, struct FVector2D Size, struct FRotator DeltaRotation, bool bClearBeforeAdd); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x509a3d0
};

