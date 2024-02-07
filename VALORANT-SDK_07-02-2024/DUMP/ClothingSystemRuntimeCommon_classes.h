// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// Size: 0x30 (Inherited: 0x30)
struct UClothConfigCommon : UClothConfigBase {
};

// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// Size: 0x30 (Inherited: 0x30)
struct UClothSharedConfigCommon : UClothConfigCommon {
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// Size: 0x30 (Inherited: 0x30)
struct UClothingAssetCustomData : UObject {
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// Size: 0xf8 (Inherited: 0x50)
struct UClothingAssetCommon : UClothingAssetBase {
	struct UPhysicsAsset* PhysicsAsset; // 0x50(0x08)
	struct TMap<struct FName, struct UClothConfigBase*> ClothConfigs; // 0x58(0x50)
	struct TArray<struct FClothLODDataCommon> LODData; // 0xa8(0x10)
	struct TArray<int32_t> LodMap; // 0xb8(0x10)
	struct TArray<struct FName> UsedBoneNames; // 0xc8(0x10)
	struct TArray<int32_t> UsedBoneIndices; // 0xd8(0x10)
	int32_t ReferenceBoneIndex; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UClothingAssetCustomData* CustomData; // 0xf0(0x08)
};

// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// Size: 0x190 (Inherited: 0x30)
struct UClothLODDataCommon_Legacy : UObject {
	struct UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x30(0x08)
	struct FClothPhysicalMeshData ClothPhysicalMeshData; // 0x38(0xf8)
	struct FClothCollisionData CollisionData; // 0x130(0x40)
	char pad_170[0x20]; // 0x170(0x20)
};

