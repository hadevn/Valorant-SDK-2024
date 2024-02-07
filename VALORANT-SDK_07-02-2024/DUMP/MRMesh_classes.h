// Class MRMesh.MeshReconstructorBase
// Size: 0x30 (Inherited: 0x30)
struct UMeshReconstructorBase : UObject {

	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction // (Native|Public|BlueprintCallable) // @ game+0x37bb440
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction // (Native|Public|BlueprintCallable) // @ game+0x2432e40
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction // (Native|Public|BlueprintCallable) // @ game+0x37ba530
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x381f240
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x382d4e0
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh // (Native|Public) // @ game+0x36b8220
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh // (Native|Public) // @ game+0x2627d60
};

// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x300 (Inherited: 0x290)
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x288(0x10)
	bool ScanWorld; // 0x298(0x01)
	bool RequestNormals; // 0x299(0x01)
	bool RequestVertexConfidence; // 0x29a(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x29b(0x01)
	struct TArray<struct FColor> BlockVertexColors; // 0x2a0(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x2b0(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x2c0(0x10)
	float UpdateInterval; // 0x2d0(0x04)
	struct UMRMeshComponent* MRMesh; // 0x2d8(0x08)
	char pad_2E0[0x20]; // 0x2e0(0x20)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x40572e0
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x5008580
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x50084f0
};

// Class MRMesh.MRMeshComponent
// Size: 0x610 (Inherited: 0x550)
struct UMRMeshComponent : UPrimitiveComponent {
	char pad_550[0x10]; // 0x550(0x10)
	struct UMaterialInterface* Material; // 0x560(0x08)
	struct UMaterialInterface* WireframeMaterial; // 0x568(0x08)
	bool bCreateMeshProxySections; // 0x570(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x571(0x01)
	bool bNeverCreateCollisionMesh; // 0x572(0x01)
	char pad_573[0x5]; // 0x573(0x05)
	struct UBodySetup* CachedBodySetup; // 0x578(0x08)
	struct TArray<struct UBodySetup*> BodySetups; // 0x580(0x10)
	char pad_590[0x80]; // 0x590(0x80)

	void SetWireframeMaterial(struct UMaterialInterface* InMaterial); // Function MRMesh.MRMeshComponent.SetWireframeMaterial // (Native|Public|BlueprintCallable) // @ game+0x296c400
	void SetWireframeColor(struct FLinearColor& InColor); // Function MRMesh.MRMeshComponent.SetWireframeColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5008800
	void SetUseWireframe(bool bUseWireframe); // Function MRMesh.MRMeshComponent.SetUseWireframe // (Final|Native|Public|BlueprintCallable) // @ game+0x5008770
	void SetEnableMeshOcclusion(bool bEnable); // Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion // (Final|Native|Public|BlueprintCallable) // @ game+0x50086e0
	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x50086a0
	struct FLinearColor GetWireframeColor(); // Function MRMesh.MRMeshComponent.GetWireframeColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5008670
	bool GetUseWireframe(); // Function MRMesh.MRMeshComponent.GetUseWireframe // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5008650
	bool GetEnableMeshOcclusion(); // Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5008630
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x5008610
	void Clear(); // Function MRMesh.MRMeshComponent.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x50084c0
};

