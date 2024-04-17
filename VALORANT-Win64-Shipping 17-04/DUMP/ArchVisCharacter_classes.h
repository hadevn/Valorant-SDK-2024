// Class ArchVisCharacter.ArchVisCharacter
// Size: 0x6c0 (Inherited: 0x660)
struct AArchVisCharacter : ACharacter {
	struct FString LookUpAxisName; // 0x658(0x10)
	struct FString LookUpAtRateAxisName; // 0x668(0x10)
	struct FString TurnAxisName; // 0x678(0x10)
	struct FString TurnAtRateAxisName; // 0x688(0x10)
	struct FString MoveForwardAxisName; // 0x698(0x10)
	struct FString MoveRightAxisName; // 0x6a8(0x10)
	float MouseSensitivityScale_Pitch; // 0x6b8(0x04)
	float MouseSensitivityScale_Yaw; // 0x6bc(0x04)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0xc30 (Inherited: 0xbe0)
struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	struct FRotator RotationalAcceleration; // 0xbe0(0x0c)
	struct FRotator RotationalDeceleration; // 0xbec(0x0c)
	struct FRotator MaxRotationalVelocity; // 0xbf8(0x0c)
	float MinPitch; // 0xc04(0x04)
	float MaxPitch; // 0xc08(0x04)
	float WalkingFriction; // 0xc0c(0x04)
	float WalkingSpeed; // 0xc10(0x04)
	float WalkingAcceleration; // 0xc14(0x04)
	char pad_C18[0x18]; // 0xc18(0x18)
};

