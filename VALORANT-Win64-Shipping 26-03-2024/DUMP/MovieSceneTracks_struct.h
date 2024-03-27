// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	NEG_X = 3,
	NEG_Y = 4,
	NEG_Z = 5,
	MovieScene3DPathSection_MAX = 6
};

// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8 {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3
};

// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8 {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2
};

// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8 {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size: 0x80 (Inherited: 0x20)
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	struct TArray<struct FScalarParameterNameAndCurve> Scalars; // 0x20(0x10)
	struct TArray<struct FBoolParameterNameAndCurve> Bools; // 0x30(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2Ds; // 0x40(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> Vectors; // 0x50(0x10)
	struct TArray<struct FColorParameterNameAndCurves> Colors; // 0x60(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> Transforms; // 0x70(0x10)
};

// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// Size: 0x5b0 (Inherited: 0x00)
struct FTransformParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneFloatChannel Translation[0x3]; // 0x10(0x1e0)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x1f0(0x1e0)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x3d0(0x1e0)
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// Size: 0x290 (Inherited: 0x00)
struct FColorParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneFloatChannel RedCurve; // 0x10(0xa0)
	struct FMovieSceneFloatChannel GreenCurve; // 0xb0(0xa0)
	struct FMovieSceneFloatChannel BlueCurve; // 0x150(0xa0)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x1f0(0xa0)
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// Size: 0x1f0 (Inherited: 0x00)
struct FVectorParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneFloatChannel XCurve; // 0x10(0xa0)
	struct FMovieSceneFloatChannel YCurve; // 0xb0(0xa0)
	struct FMovieSceneFloatChannel ZCurve; // 0x150(0xa0)
};

// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
// Size: 0x150 (Inherited: 0x00)
struct FVector2DParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneFloatChannel XCurve; // 0x10(0xa0)
	struct FMovieSceneFloatChannel YCurve; // 0xb0(0xa0)
};

// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
// Size: 0xa0 (Inherited: 0x00)
struct FBoolParameterNameAndCurve {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneBoolChannel ParameterCurve; // 0x10(0x90)
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// Size: 0xb0 (Inherited: 0x00)
struct FScalarParameterNameAndCurve {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneFloatChannel ParameterCurve; // 0x10(0xa0)
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size: 0xe0 (Inherited: 0x20)
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID PathBindingID; // 0x20(0x18)
	struct FMovieSceneFloatChannel TimingCurve; // 0x38(0xa0)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0xd8(0x01)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0xd9(0x01)
	char pad_DA[0x2]; // 0xda(0x02)
	char bFollow : 1; // 0xdc(0x01)
	char bReverse : 1; // 0xdc(0x01)
	char bForceUpright : 1; // 0xdc(0x01)
	char pad_DC_3 : 5; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x00(0x04)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// Size: 0x48 (Inherited: 0x08)
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector Scale; // 0x20(0x0c)
	struct FFrameNumber Time; // 0x2c(0x04)
	char pad_30[0x18]; // 0x30(0x18)
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	struct FVector Scale; // 0x08(0x0c)
	struct FFrameNumber Time; // 0x14(0x04)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	struct FRotator Rotation; // 0x08(0x0c)
	struct FFrameNumber Time; // 0x14(0x04)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; // 0x08(0x0c)
	struct FFrameNumber Time; // 0x14(0x04)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// Size: 0xb8 (Inherited: 0x08)
struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x08(0x10)
	struct FMovieSceneActorReferenceKey DefaultValue; // 0x18(0x30)
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues; // 0x48(0x10)
	char pad_58[0x60]; // 0x58(0x60)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneActorReferenceKey {
	struct FMovieSceneObjectBindingID Object; // 0x00(0x18)
	struct FName ComponentName; // 0x18(0x0c)
	struct FName SocketName; // 0x24(0x0c)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Size: 0xf8 (Inherited: 0x20)
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x20(0x20)
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0x40(0xb8)
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAudioSection* AudioSection; // 0x20(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneCameraAnimSectionData {
	struct UCameraAnim* CameraAnim; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float PlayScale; // 0x0c(0x04)
	float BlendInTime; // 0x10(0x04)
	float BlendOutTime; // 0x14(0x04)
	bool bLooping; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneCameraAnimSectionData SourceData; // 0x20(0x20)
	struct FFrameNumber SectionStartTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneCameraShakeSectionData {
	struct UCameraShakeBase* ShakeClass; // 0x00(0x08)
	float PlayScale; // 0x08(0x04)
	enum class ECameraShakePlaySpace Playspace; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneCameraShakeSectionData SourceData; // 0x20(0x20)
	struct FFrameNumber SectionStartTime; // 0x40(0x04)
	struct FFrameNumber SectionEndTime; // 0x44(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
// Size: 0x88 (Inherited: 0x08)
struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x08(0x10)
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x18(0x10)
	char pad_28[0x60]; // 0x28(0x60)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneCameraShakeSourceTrigger {
	struct UCameraShakeBase* ShakeClass; // 0x00(0x08)
	float PlayScale; // 0x08(0x04)
	enum class ECameraShakePlaySpace Playspace; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
// Size: 0x40 (Inherited: 0x20)
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate {
	struct TArray<struct FFrameNumber> TriggerTimes; // 0x20(0x10)
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x30(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneCameraShakeSectionData SourceData; // 0x20(0x20)
	struct FFrameNumber SectionStartTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// Size: 0x38 (Inherited: 0x08)
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	struct FLinearColor Color; // 0x08(0x10)
	struct FFrameNumber Time; // 0x18(0x04)
	char pad_1C[0x1c]; // 0x1c(0x1c)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// Size: 0x2c8 (Inherited: 0x40)
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel Curves[0x4]; // 0x40(0x280)
	enum class EMovieSceneBlendType BlendType; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneEvent
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneEvent {
	struct FMovieSceneEventPtrs Ptrs; // 0x00(0x28)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneEventPtrs {
	struct UFunction* Function; // 0x00(0x08)
	struct TFieldPath<FProperty> BoundObjectProperty; // 0x08(0x20)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneEventPayloadVariable {
	struct FString Value; // 0x00(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// Size: 0x88 (Inherited: 0x08)
struct FMovieSceneEventChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x08(0x10)
	struct TArray<struct FMovieSceneEvent> KeyValues; // 0x18(0x10)
	char pad_28[0x60]; // 0x28(0x60)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Size: 0x88 (Inherited: 0x08)
struct FMovieSceneEventSectionData : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x08(0x10)
	struct TArray<struct FEventPayload> KeyValues; // 0x18(0x10)
	char pad_28[0x60]; // 0x28(0x60)
};

// ScriptStruct MovieSceneTracks.EventPayload
// Size: 0x40 (Inherited: 0x00)
struct FEventPayload {
	struct FName EventName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneEventParameters Parameters; // 0x10(0x30)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneEventParameters {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerData
// Size: 0x48 (Inherited: 0x00)
struct FMovieSceneEventTriggerData {
	struct FMovieSceneEventPtrs Ptrs; // 0x00(0x28)
	struct FGuid ObjectBindingID; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Size: 0xb0 (Inherited: 0x20)
struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneEventSectionData EventData; // 0x20(0x88)
	char bFireEventsWhenForwards : 1; // 0xa8(0x01)
	char bFireEventsWhenBackwards : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// Size: 0xd8 (Inherited: 0x20)
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel FadeCurve; // 0x20(0xa0)
	struct FLinearColor FadeColor; // 0xc0(0x10)
	char bFadeAudio : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// Size: 0x88 (Inherited: 0x80)
struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	struct UMaterialParameterCollection* MPC; // 0x80(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// Size: 0x108 (Inherited: 0x40)
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0x40(0xc8)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// Size: 0x88 (Inherited: 0x80)
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Size: 0x80 (Inherited: 0x80)
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate {
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// Size: 0x98 (Inherited: 0x98)
struct FMovieSceneParticleChannel : FMovieSceneByteChannel {
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// Size: 0xb8 (Inherited: 0x20)
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneParticleChannel ParticleKeys; // 0x20(0x98)
};

// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// Size: 0xf0 (Inherited: 0x20)
struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0x28(0xc8)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// Size: 0xe0 (Inherited: 0x40)
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneStringChannel StringCurve; // 0x40(0xa0)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// Size: 0xa0 (Inherited: 0x08)
struct FMovieSceneStringChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x08(0x10)
	struct TArray<struct FString> Values; // 0x18(0x10)
	struct FString DefaultValue; // 0x28(0x10)
	bool bHasDefaultValue; // 0x38(0x01)
	char pad_39[0x67]; // 0x39(0x67)
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size: 0xd0 (Inherited: 0x40)
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneBoolChannel BoolCurve; // 0x40(0x90)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size: 0xd8 (Inherited: 0x00)
struct FMovieSceneSkeletalAnimationParams {
	struct UAnimSequenceBase* Animation; // 0x00(0x08)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x08(0x04)
	struct FFrameNumber StartFrameOffset; // 0x0c(0x04)
	struct FFrameNumber EndFrameOffset; // 0x10(0x04)
	float PlayRate; // 0x14(0x04)
	char bReverse : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName SlotName; // 0x1c(0x0c)
	struct FMovieSceneFloatChannel Weight; // 0x28(0xa0)
	bool bSkipAnimNotifiers; // 0xc8(0x01)
	bool bForceCustomMode; // 0xc9(0x01)
	char pad_CA[0x2]; // 0xca(0x02)
	float StartOffset; // 0xcc(0x04)
	float EndOffset; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// Size: 0x100 (Inherited: 0x20)
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20(0xe0)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// Size: 0xe0 (Inherited: 0xd8)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	struct FFrameNumber SectionStartTime; // 0xd8(0x04)
	struct FFrameNumber SectionEndTime; // 0xdc(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneSkeletalAnimRootMotionTrackParams {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Size: 0xc0 (Inherited: 0x20)
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel SlomoCurve; // 0x20(0xa0)
};

// ScriptStruct MovieSceneTracks.LevelVisibilityComponentData
// Size: 0x08 (Inherited: 0x00)
struct FLevelVisibilityComponentData {
	struct UMovieSceneLevelVisibilitySection* Section; // 0x00(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Size: 0x28 (Inherited: 0x08)
struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	struct FFrameNumber Time; // 0x08(0x04)
	char pad_C[0x1c]; // 0x0c(0x1c)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// Size: 0x40 (Inherited: 0x28)
struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	char pad_28[0x8]; // 0x28(0x08)
	struct FVector4 Vector; // 0x30(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// Size: 0x38 (Inherited: 0x28)
struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector Vector; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// Size: 0x30 (Inherited: 0x28)
struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector2D Vector; // 0x28(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// Size: 0xd0 (Inherited: 0xd0)
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate {
};

