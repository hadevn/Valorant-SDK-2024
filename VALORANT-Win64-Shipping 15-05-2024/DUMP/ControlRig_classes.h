// Class ControlRig.ControlRig
// Size: 0x660 (Inherited: 0x30)
struct UControlRig : UObject {
	char pad_30[0x1d]; // 0x30(0x1d)
	enum class ERigExecutionType ExecutionType; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct URigVM* VM; // 0x50(0x08)
	struct FRigHierarchyContainer Hierarchy; // 0x58(0x368)
	struct TSoftObjectPtr<UControlRigGizmoLibrary> GizmoLibrary; // 0x3c0(0x30)
	char pad_3F0[0x10]; // 0x3f0(0x10)
	struct TMap<struct FName, struct FCachedPropertyPath> InputProperties; // 0x400(0x50)
	struct TMap<struct FName, struct FCachedPropertyPath> OutputProperties; // 0x450(0x50)
	struct FControlRigDrawContainer DrawContainer; // 0x4a0(0x18)
	char pad_4B8[0x18]; // 0x4b8(0x18)
	struct UAnimationDataSourceRegistry* DataSourceRegistry; // 0x4d0(0x08)
	struct TArray<struct FName> EventQueue; // 0x4d8(0x10)
	char pad_4E8[0x78]; // 0x4e8(0x78)
	struct FRigInfluenceMapPerEvent Influences; // 0x560(0x60)
	struct UControlRig* InteractionRig; // 0x5c0(0x08)
	struct UControlRig* InteractionRigClass; // 0x5c8(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x5d0(0x10)
	char pad_5E0[0x80]; // 0x5e0(0x80)

	void SetInteractionRigClass(struct UControlRig* InInteractionRigClass); // Function ControlRig.ControlRig.SetInteractionRigClass // (Final|Native|Public|BlueprintCallable) // @ game+0x2ad8830
	void SetInteractionRig(struct UControlRig* InInteractionRig); // Function ControlRig.ControlRig.SetInteractionRig // (Final|Native|Public|BlueprintCallable) // @ game+0x2ad87a0
	struct UControlRig* GetInteractionRigClass(); // Function ControlRig.ControlRig.GetInteractionRigClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ad7320
	struct UControlRig* GetInteractionRig(); // Function ControlRig.ControlRig.GetInteractionRig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ad7300
};

// Class ControlRig.AdditiveControlRig
// Size: 0x670 (Inherited: 0x660)
struct UAdditiveControlRig : UControlRig {
	char pad_660[0x10]; // 0x660(0x10)
};

// Class ControlRig.ControlRigAnimInstance
// Size: 0x300 (Inherited: 0x300)
struct UControlRigAnimInstance : UAnimInstance {
};

// Class ControlRig.ControlRigBlueprintGeneratedClass
// Size: 0x338 (Inherited: 0x338)
struct UControlRigBlueprintGeneratedClass : UBlueprintGeneratedClass {
};

// Class ControlRig.ControlRigComponent
// Size: 0x630 (Inherited: 0x550)
struct UControlRigComponent : UPrimitiveComponent {
	struct UControlRig* ControlRigClass; // 0x550(0x08)
	struct FMulticastInlineDelegate OnPostInitializeDelegate; // 0x558(0x10)
	struct FMulticastInlineDelegate OnPreSetupDelegate; // 0x568(0x10)
	struct FMulticastInlineDelegate OnPostSetupDelegate; // 0x578(0x10)
	struct FMulticastInlineDelegate OnPreUpdateDelegate; // 0x588(0x10)
	struct FMulticastInlineDelegate OnPostUpdateDelegate; // 0x598(0x10)
	struct TArray<struct FControlRigComponentMappedElement> MappedElements; // 0x5a8(0x10)
	bool bResetTransformBeforeTick; // 0x5b8(0x01)
	bool bResetInitialsBeforeSetup; // 0x5b9(0x01)
	bool bUpdateRigOnTick; // 0x5ba(0x01)
	bool bUpdateInEditor; // 0x5bb(0x01)
	bool bDrawBones; // 0x5bc(0x01)
	bool bShowDebugDrawing; // 0x5bd(0x01)
	char pad_5BE[0x2]; // 0x5be(0x02)
	struct UControlRig* ControlRig; // 0x5c0(0x08)
	char pad_5C8[0x68]; // 0x5c8(0x68)

	void Update(float DeltaTime); // Function ControlRig.ControlRigComponent.Update // (Final|Native|Public|BlueprintCallable) // @ game+0x2ad89c0
	void SetMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.SetMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x2ad88c0
	void SetInitialSpaceTransform(struct FName SpaceName, struct FTransform InitialTransform, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetInitialSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2ad8620
	void SetInitialBoneTransform(struct FName BoneName, struct FTransform InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetInitialBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2ad8460
	void SetControlVector2D(struct FName ControlName, struct FVector2D Value); // Function ControlRig.ControlRigComponent.SetControlVector2D // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2ad8380
	void SetControlTransform(struct FName ControlName, struct FTransform Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2ad8200
	void SetControlScale(struct FName ControlName, struct FVector Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2ad80c0
	void SetControlRotator(struct FName ControlName, struct FRotator Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlRotator // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2ad7f80
	void SetControlPosition(struct FName ControlName, struct FVector Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2ad7e40
	void SetControlOffset(struct FName ControlName, struct FTransform OffsetTransform, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2ad7cc0
	void SetControlInt(struct FName ControlName, int32_t Value); // Function ControlRig.ControlRigComponent.SetControlInt // (Final|Native|Public|BlueprintCallable) // @ game+0x2ad7be0
	void SetControlFloat(struct FName ControlName, float Value); // Function ControlRig.ControlRigComponent.SetControlFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x2ad7af0
	void SetControlBool(struct FName ControlName, bool Value); // Function ControlRig.ControlRigComponent.SetControlBool // (Final|Native|Public|BlueprintCallable) // @ game+0x2ad7a00
	void SetBoneTransform(struct FName BoneName, struct FTransform Transform, enum class EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2ad77f0
	void SetBoneInitialTransformsFromSkeletalMesh(struct USkeletalMesh* InSkeletalMesh); // Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x2ad7760
	void OnPreUpdate(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreUpdate // (Native|Event|Public|BlueprintEvent) // @ game+0x2ad76d0
	void OnPreSetup(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreSetup // (Native|Event|Public|BlueprintEvent) // @ game+0x2ad7640
	void OnPostUpdate(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostUpdate // (Native|Event|Public|BlueprintEvent) // @ game+0x2ad75b0
	void OnPostSetup(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostSetup // (Native|Event|Public|BlueprintEvent) // @ game+0x2ad7520
	void OnPostInitialize(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostInitialize // (Native|Event|Public|BlueprintEvent) // @ game+0x2ad7490
	void Initialize(); // Function ControlRig.ControlRigComponent.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x2ad7470
	struct FTransform GetSpaceTransform(struct FName SpaceName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2ad7340
	struct FTransform GetInitialSpaceTransform(struct FName SpaceName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetInitialSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2ad71d0
	struct FTransform GetInitialBoneTransform(struct FName BoneName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetInitialBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2ad70a0
	struct TArray<struct FName> GetElementNames(enum class ERigElementType ElementType); // Function ControlRig.ControlRigComponent.GetElementNames // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2ad6fc0
	struct FVector2D GetControlVector2D(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlVector2D // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2ad6f00
	struct FTransform GetControlTransform(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2ad6dd0
	struct FVector GetControlScale(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlScale // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2ad6cc0
	struct FRotator GetControlRotator(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlRotator // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2ad6bb0
	struct UControlRig* GetControlRig(); // Function ControlRig.ControlRigComponent.GetControlRig // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2ad6b80
	struct FVector GetControlPosition(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2ad6a70
	struct FTransform GetControlOffset(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2ad6940
	int32_t GetControlInt(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlInt // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2ad6890
	float GetControlFloat(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlFloat // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2ad67e0
	bool GetControlBool(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlBool // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2ad6730
	struct FTransform GetBoneTransform(struct FName BoneName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2ad6600
	float GetAbsoluteTime(); // Function ControlRig.ControlRigComponent.GetAbsoluteTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ad65d0
	bool DoesElementExist(struct FName Name, enum class ERigElementType ElementType); // Function ControlRig.ControlRigComponent.DoesElementExist // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2ad64d0
	void ClearMappedElements(); // Function ControlRig.ControlRigComponent.ClearMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x2ad64b0
	void AddMappedSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent, struct TArray<struct FControlRigComponentMappedBone> Bones, struct TArray<struct FControlRigComponentMappedCurve> Curves); // Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x2ad62f0
	void AddMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.AddMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x2ad61f0
	void AddMappedComponents(struct TArray<struct FControlRigComponentMappedComponent> Components); // Function ControlRig.ControlRigComponent.AddMappedComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x2ad60f0
	void AddMappedCompleteSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent); // Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x2ad6060
};

// Class ControlRig.ControlRigControlActor
// Size: 0x458 (Inherited: 0x3b8)
struct AControlRigControlActor : AActor {
	struct AActor* ActorToTrack; // 0x3b8(0x08)
	struct UControlRig* ControlRigClass; // 0x3c0(0x08)
	bool bRefreshOnTick; // 0x3c8(0x01)
	bool bIsSelectable; // 0x3c9(0x01)
	char pad_3CA[0x6]; // 0x3ca(0x06)
	struct UMaterialInterface* MaterialOverride; // 0x3d0(0x08)
	struct FString ColorParameter; // 0x3d8(0x10)
	bool bCastShadows; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct USceneComponent* ActorRootComponent; // 0x3f0(0x08)
	struct UControlRig* ControlRig; // 0x3f8(0x08)
	struct TArray<struct FName> ControlNames; // 0x400(0x10)
	struct TArray<struct FTransform> GizmoTransforms; // 0x410(0x10)
	struct TArray<struct UStaticMeshComponent*> Components; // 0x420(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x430(0x10)
	struct FName ColorParameterName; // 0x440(0x0c)
	char pad_44C[0xc]; // 0x44c(0x0c)

	void Refresh(); // Function ControlRig.ControlRigControlActor.Refresh // (Final|Native|Public|BlueprintCallable) // @ game+0x2ae4520
	void Clear(); // Function ControlRig.ControlRigControlActor.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x2ae43e0
};

// Class ControlRig.ControlRigGizmoActor
// Size: 0x3e8 (Inherited: 0x3b8)
struct AControlRigGizmoActor : AActor {
	struct USceneComponent* ActorRootComponent; // 0x3b8(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x3c0(0x08)
	uint32_t ControlRigIndex; // 0x3c8(0x04)
	struct FName ControlName; // 0x3cc(0x0c)
	struct FName ColorParameterName; // 0x3d8(0x0c)
	char bEnabled : 1; // 0x3e4(0x01)
	char bSelected : 1; // 0x3e4(0x01)
	char bSelectable : 1; // 0x3e4(0x01)
	char bHovered : 1; // 0x3e4(0x01)
	char pad_3E4_4 : 4; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)

	void SetSelected(bool bInSelected); // Function ControlRig.ControlRigGizmoActor.SetSelected // (Native|Public|BlueprintCallable) // @ game+0x2ae4800
	void SetSelectable(bool bInSelectable); // Function ControlRig.ControlRigGizmoActor.SetSelectable // (Native|Public|BlueprintCallable) // @ game+0x2ae4760
	void SetHovered(bool bInHovered); // Function ControlRig.ControlRigGizmoActor.SetHovered // (Native|Public|BlueprintCallable) // @ game+0x2ae46c0
	void SetGlobalTransform(struct FTransform& InTransform); // Function ControlRig.ControlRigGizmoActor.SetGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2ae45e0
	void SetEnabled(bool bInEnabled); // Function ControlRig.ControlRigGizmoActor.SetEnabled // (Native|Public|BlueprintCallable) // @ game+0x2ae4540
	void OnTransformChanged(struct FTransform& NewTransform); // Function ControlRig.ControlRigGizmoActor.OnTransformChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x4317a70
	void OnSelectionChanged(bool bIsSelected); // Function ControlRig.ControlRigGizmoActor.OnSelectionChanged // (Event|Public|BlueprintEvent) // @ game+0x4317a70
	void OnManipulatingChanged(bool bIsManipulating); // Function ControlRig.ControlRigGizmoActor.OnManipulatingChanged // (Event|Public|BlueprintEvent) // @ game+0x4317a70
	void OnHoveredChanged(bool bIsSelected); // Function ControlRig.ControlRigGizmoActor.OnHoveredChanged // (Event|Public|BlueprintEvent) // @ game+0x4317a70
	void OnEnabledChanged(bool bIsEnabled); // Function ControlRig.ControlRigGizmoActor.OnEnabledChanged // (Event|Public|BlueprintEvent) // @ game+0x4317a70
	bool IsSelectedInEditor(); // Function ControlRig.ControlRigGizmoActor.IsSelectedInEditor // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ae44e0
	bool IsHovered(); // Function ControlRig.ControlRigGizmoActor.IsHovered // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ae44a0
	bool IsEnabled(); // Function ControlRig.ControlRigGizmoActor.IsEnabled // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ae4460
	struct FTransform GetGlobalTransform(); // Function ControlRig.ControlRigGizmoActor.GetGlobalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ae4400
};

// Class ControlRig.ControlRigGizmoLibrary
// Size: 0x100 (Inherited: 0x30)
struct UControlRigGizmoLibrary : UObject {
	struct FControlRigGizmoDefinition DefaultGizmo; // 0x30(0x70)
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0xa0(0x30)
	struct FName MaterialColorParameter; // 0xd0(0x0c)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TArray<struct FControlRigGizmoDefinition> Gizmos; // 0xe0(0x10)
	char pad_F0[0x10]; // 0xf0(0x10)
};

// Class ControlRig.ControlRigLayerInstance
// Size: 0x310 (Inherited: 0x300)
struct UControlRigLayerInstance : UAnimInstance {
	char pad_300[0x10]; // 0x300(0x10)
};

// Class ControlRig.ControlRigValidationPass
// Size: 0x30 (Inherited: 0x30)
struct UControlRigValidationPass : UObject {
};

// Class ControlRig.ControlRigNumericalValidationPass
// Size: 0x70 (Inherited: 0x30)
struct UControlRigNumericalValidationPass : UControlRigValidationPass {
	bool bCheckControls; // 0x30(0x01)
	bool bCheckBones; // 0x31(0x01)
	bool bCheckCurves; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	float TranslationPrecision; // 0x34(0x04)
	float RotationPrecision; // 0x38(0x04)
	float ScalePrecision; // 0x3c(0x04)
	float CurvePrecision; // 0x40(0x04)
	struct FName EventNameA; // 0x44(0x0c)
	struct FName EventNameB; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FRigPose Pose; // 0x60(0x10)
};

// Class ControlRig.ControlRigObjectHolder
// Size: 0x40 (Inherited: 0x30)
struct UControlRigObjectHolder : UObject {
	struct TArray<struct UObject*> Objects; // 0x30(0x10)
};

// Class ControlRig.ControlRigSequence
// Size: 0x238 (Inherited: 0x1d0)
struct UControlRigSequence : ULevelSequence {
	struct TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence; // 0x1d0(0x30)
	struct TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh; // 0x200(0x30)
	float LastExportedFrameRate; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
};

// Class ControlRig.ControlRigSequencerAnimInstance
// Size: 0x310 (Inherited: 0x310)
struct UControlRigSequencerAnimInstance : UAnimSequencerInstance {
};

// Class ControlRig.ControlRigSettings
// Size: 0x48 (Inherited: 0x48)
struct UControlRigSettings : UDeveloperSettings {
};

// Class ControlRig.ControlRigValidator
// Size: 0x70 (Inherited: 0x30)
struct UControlRigValidator : UObject {
	struct TArray<struct UControlRigValidationPass*> Passes; // 0x30(0x10)
	char pad_40[0x30]; // 0x40(0x30)
};

// Class ControlRig.FKControlRig
// Size: 0x678 (Inherited: 0x660)
struct UFKControlRig : UControlRig {
	struct TArray<bool> IsControlActive; // 0x660(0x10)
	enum class EControlRigFKRigExecuteMode ApplyMode; // 0x670(0x01)
	char pad_671[0x7]; // 0x671(0x07)
};

// Class ControlRig.MovieSceneControlRigParameterSection
// Size: 0x2f0 (Inherited: 0x150)
struct UMovieSceneControlRigParameterSection : UMovieSceneParameterSection {
	struct UControlRig* ControlRig; // 0x150(0x08)
	struct UControlRig* ControlRigClass; // 0x158(0x08)
	struct TArray<bool> ControlsMask; // 0x160(0x10)
	struct FMovieSceneTransformMask TransformMask; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FMovieSceneFloatChannel Weight; // 0x178(0xa0)
	struct TMap<struct FName, struct FChannelMapInfo> ControlChannelMap; // 0x218(0x50)
	struct TArray<struct FEnumParameterNameAndCurve> EnumParameterNamesAndCurves; // 0x268(0x10)
	struct TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves; // 0x278(0x10)
	char pad_288[0x68]; // 0x288(0x68)
};

// Class ControlRig.MovieSceneControlRigParameterTrack
// Size: 0xd8 (Inherited: 0x98)
struct UMovieSceneControlRigParameterTrack : UMovieSceneNameableTrack {
	char pad_98[0x10]; // 0x98(0x10)
	struct UControlRig* ControlRig; // 0xa8(0x08)
	struct UMovieSceneSection* SectionToKey; // 0xb0(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	struct FName TrackName; // 0xc8(0x0c)
	char pad_D4[0x4]; // 0xd4(0x04)
};
