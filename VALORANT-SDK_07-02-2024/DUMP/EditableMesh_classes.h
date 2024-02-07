// Class EditableMesh.EditableMeshAdapter
// Size: 0x30 (Inherited: 0x30)
struct UEditableMeshAdapter : UObject {
};

// Class EditableMesh.EditableGeometryCollectionAdapter
// Size: 0xe0 (Inherited: 0x30)
struct UEditableGeometryCollectionAdapter : UEditableMeshAdapter {
	struct UGeometryCollection* GeometryCollection; // 0x30(0x08)
	struct UGeometryCollection* OriginalGeometryCollection; // 0x38(0x08)
	int32_t GeometryCollectionLODIndex; // 0x40(0x04)
	char pad_44[0x9c]; // 0x44(0x9c)
};

// Class EditableMesh.EditableMesh
// Size: 0x710 (Inherited: 0x30)
struct UEditableMesh : UObject {
	char pad_30[0x390]; // 0x30(0x390)
	struct TArray<struct UEditableMeshAdapter*> Adapters; // 0x3c0(0x10)
	char pad_3D0[0x8]; // 0x3d0(0x08)
	int32_t TextureCoordinateCount; // 0x3d8(0x04)
	char pad_3DC[0x148]; // 0x3dc(0x148)
	int32_t PendingCompactCounter; // 0x524(0x04)
	int32_t SubdivisionCount; // 0x528(0x04)
	char pad_52C[0x1e4]; // 0x52c(0x1e4)

	void WeldVertices(struct TArray<struct FVertexID>& VertexIDs, struct FVertexID& OutNewVertexID); // Function EditableMesh.EditableMesh.WeldVertices // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b7a790
	void TryToRemoveVertex(struct FVertexID VertexID, bool& bOutWasVertexRemoved, struct FEdgeID& OutNewEdgeID); // Function EditableMesh.EditableMesh.TryToRemoveVertex // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b7a660
	void TryToRemovePolygonEdge(struct FEdgeID EdgeID, bool& bOutWasEdgeRemoved, struct FPolygonID& OutNewPolygonID); // Function EditableMesh.EditableMesh.TryToRemovePolygonEdge // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b7a530
	void TriangulatePolygons(struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FPolygonID>& OutNewTrianglePolygons); // Function EditableMesh.EditableMesh.TriangulatePolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b7a410
	void TessellatePolygons(struct TArray<struct FPolygonID>& PolygonIDs, enum class ETriangleTessellationMode TriangleTessellationMode, struct TArray<struct FPolygonID>& OutNewPolygonIDs); // Function EditableMesh.EditableMesh.TessellatePolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b7a2b0
	void StartModification(enum class EMeshModificationType MeshModificationType, enum class EMeshTopologyChange MeshTopologyChange); // Function EditableMesh.EditableMesh.StartModification // (Final|Native|Public|BlueprintCallable) // @ game+0x2b7a1e0
	void SplitPolygons(struct TArray<struct FPolygonToSplit>& PolygonsToSplit, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.SplitPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b7a0a0
	void SplitPolygonalMesh(struct FPlane& InPlane, struct TArray<struct FPolygonID>& PolygonIDs1, struct TArray<struct FPolygonID>& PolygonIDs2, struct TArray<struct FEdgeID>& BoundaryIDs); // Function EditableMesh.EditableMesh.SplitPolygonalMesh // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2b79ed0
	void SplitEdge(struct FEdgeID EdgeID, struct TArray<float>& Splits, struct TArray<struct FVertexID>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.SplitEdge // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b79d70
	void SetVerticesCornerSharpness(struct TArray<struct FVertexID>& VertexIDs, struct TArray<float>& VerticesNewCornerSharpness); // Function EditableMesh.EditableMesh.SetVerticesCornerSharpness // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b79c50
	void SetVerticesAttributes(struct TArray<struct FAttributesForVertex>& AttributesForVertices); // Function EditableMesh.EditableMesh.SetVerticesAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b79b80
	void SetVertexInstancesAttributes(struct TArray<struct FAttributesForVertexInstance>& AttributesForVertexInstances); // Function EditableMesh.EditableMesh.SetVertexInstancesAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b79ab0
	void SetTextureCoordinateCount(int32_t NumTexCoords); // Function EditableMesh.EditableMesh.SetTextureCoordinateCount // (Final|Native|Public|BlueprintCallable) // @ game+0x2b79a20
	void SetSubdivisionCount(int32_t NewSubdivisionCount); // Function EditableMesh.EditableMesh.SetSubdivisionCount // (Final|Native|Public|BlueprintCallable) // @ game+0x2b79990
	void SetPolygonsVertexAttributes(struct TArray<struct FVertexAttributesForPolygon>& VertexAttributesForPolygons); // Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b79820
	void SetEdgesHardnessAutomatically(struct TArray<struct FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge); // Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b79720
	void SetEdgesHardness(struct TArray<struct FEdgeID>& EdgeIDs, struct TArray<bool>& EdgesNewIsHard); // Function EditableMesh.EditableMesh.SetEdgesHardness // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b79600
	void SetEdgesCreaseSharpness(struct TArray<struct FEdgeID>& EdgeIDs, struct TArray<float>& EdgesNewCreaseSharpness); // Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b794e0
	void SetEdgesAttributes(struct TArray<struct FAttributesForEdge>& AttributesForEdges); // Function EditableMesh.EditableMesh.SetEdgesAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b79410
	void SetAllowUndo(bool bInAllowUndo); // Function EditableMesh.EditableMesh.SetAllowUndo // (Final|Native|Public|BlueprintCallable) // @ game+0x2b79380
	void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase); // Function EditableMesh.EditableMesh.SetAllowSpatialDatabase // (Final|Native|Public|BlueprintCallable) // @ game+0x2b792f0
	void SetAllowCompact(bool bInAllowCompact); // Function EditableMesh.EditableMesh.SetAllowCompact // (Final|Native|Public|BlueprintCallable) // @ game+0x2b79260
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(struct FPlane& InPlane, struct TArray<struct FPolygonID>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b79160
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(struct FVector LineSegmentStart, struct FVector LineSegmentEnd, struct TArray<struct FPolygonID>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b79010
	void SearchSpatialDatabaseForPolygonsInVolume(struct TArray<struct FPlane>& Planes, struct TArray<struct FPolygonID>& OutPolygons); // Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b78ef0
	struct UEditableMesh* RevertInstance(); // Function EditableMesh.EditableMesh.RevertInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x288a7f0
	void Revert(); // Function EditableMesh.EditableMesh.Revert // (Final|Native|Public|BlueprintCallable) // @ game+0x2024060
	void RebuildRenderMesh(); // Function EditableMesh.EditableMesh.RebuildRenderMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x2b78ed0
	void QuadrangulateMesh(struct TArray<struct FPolygonID>& OutNewPolygonIDs); // Function EditableMesh.EditableMesh.QuadrangulateMesh // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b78e20
	void PropagateInstanceChanges(); // Function EditableMesh.EditableMesh.PropagateInstanceChanges // (Final|Native|Public|BlueprintCallable) // @ game+0x2024060
	void MoveVertices(struct TArray<struct FVertexToMove>& VerticesToMove); // Function EditableMesh.EditableMesh.MoveVertices // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b78d70
	struct FVertexID MakeVertexID(int32_t VertexIndex); // Function EditableMesh.EditableMesh.MakeVertexID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2b78cf0
	struct FPolygonID MakePolygonID(int32_t PolygonIndex); // Function EditableMesh.EditableMesh.MakePolygonID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2b78cf0
	struct FPolygonGroupID MakePolygonGroupID(int32_t PolygonGroupIndex); // Function EditableMesh.EditableMesh.MakePolygonGroupID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2b78cf0
	struct FEdgeID MakeEdgeID(int32_t EdgeIndex); // Function EditableMesh.EditableMesh.MakeEdgeID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2b78cf0
	bool IsValidVertex(struct FVertexID VertexID); // Function EditableMesh.EditableMesh.IsValidVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b78c60
	bool IsValidPolygonGroup(struct FPolygonGroupID PolygonGroupID); // Function EditableMesh.EditableMesh.IsValidPolygonGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b78bd0
	bool IsValidPolygon(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.IsValidPolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b78b40
	bool IsValidEdge(struct FEdgeID EdgeID); // Function EditableMesh.EditableMesh.IsValidEdge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b78ab0
	bool IsUndoAllowed(); // Function EditableMesh.EditableMesh.IsUndoAllowed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b78a90
	bool IsSpatialDatabaseAllowed(); // Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b78a70
	bool IsPreviewingSubdivisions(); // Function EditableMesh.EditableMesh.IsPreviewingSubdivisions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b78a40
	bool IsOrphanedVertex(struct FVertexID VertexID); // Function EditableMesh.EditableMesh.IsOrphanedVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b789b0
	bool IsCompactAllowed(); // Function EditableMesh.EditableMesh.IsCompactAllowed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b78990
	bool IsCommittedAsInstance(); // Function EditableMesh.EditableMesh.IsCommittedAsInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b78960
	bool IsCommitted(); // Function EditableMesh.EditableMesh.IsCommitted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b78930
	bool IsBeingModified(); // Function EditableMesh.EditableMesh.IsBeingModified // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x220e430
	struct FVertexID InvalidVertexID(); // Function EditableMesh.EditableMesh.InvalidVertexID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2b78910
	struct FPolygonID InvalidPolygonID(); // Function EditableMesh.EditableMesh.InvalidPolygonID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2b788f0
	struct FPolygonGroupID InvalidPolygonGroupID(); // Function EditableMesh.EditableMesh.InvalidPolygonGroupID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2b788d0
	struct FEdgeID InvalidEdgeID(); // Function EditableMesh.EditableMesh.InvalidEdgeID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2b788b0
	void InsetPolygons(struct TArray<struct FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, enum class EInsetPolygonsMode Mode, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs); // Function EditableMesh.EditableMesh.InsetPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b78660
	void InsertEdgeLoop(struct FEdgeID EdgeID, struct TArray<float>& Splits, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.InsertEdgeLoop // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b78500
	void InitializeAdapters(); // Function EditableMesh.EditableMesh.InitializeAdapters // (Final|Native|Public|BlueprintCallable) // @ game+0x2b784e0
	struct FEdgeID GetVertexPairEdge(struct FVertexID VertexID, struct FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed); // Function EditableMesh.EditableMesh.GetVertexPairEdge // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b783b0
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID); // Function EditableMesh.EditableMesh.GetVertexInstanceVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b78310
	int32_t GetVertexInstanceCount(); // Function EditableMesh.EditableMesh.GetVertexInstanceCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b782e0
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b781f0
	int32_t GetVertexInstanceConnectedPolygonCount(struct FVertexInstanceID VertexInstanceID); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b78160
	struct FPolygonID GetVertexInstanceConnectedPolygon(struct FVertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber); // Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b78080
	int32_t GetVertexCount(); // Function EditableMesh.EditableMesh.GetVertexCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b78050
	void GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetVertexConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77f60
	void GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutConnectedEdgeIDs); // Function EditableMesh.EditableMesh.GetVertexConnectedEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77e70
	int32_t GetVertexConnectedEdgeCount(struct FVertexID VertexID); // Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77de0
	struct FEdgeID GetVertexConnectedEdge(struct FVertexID VertexID, int32_t ConnectedEdgeNumber); // Function EditableMesh.EditableMesh.GetVertexConnectedEdge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77d00
	void GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs); // Function EditableMesh.EditableMesh.GetVertexAdjacentVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77c10
	int32_t GetTextureCoordinateCount(); // Function EditableMesh.EditableMesh.GetTextureCoordinateCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77be0
	struct FSubdivisionLimitData GetSubdivisionLimitData(); // Function EditableMesh.EditableMesh.GetSubdivisionLimitData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77ba0
	int32_t GetSubdivisionCount(); // Function EditableMesh.EditableMesh.GetSubdivisionCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77b70
	int32_t GetPolygonTriangulatedTriangleCount(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77ae0
	struct FTriangleID GetPolygonTriangulatedTriangle(struct FPolygonID PolygonID, int32_t PolygonTriangleNumber); // Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77a00
	void GetPolygonPerimeterVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutPolygonPerimeterVertexIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77910
	void GetPolygonPerimeterVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77820
	struct FVertexInstanceID GetPolygonPerimeterVertexInstance(struct FPolygonID PolygonID, int32_t PolygonVertexNumber); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77740
	int32_t GetPolygonPerimeterVertexCount(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b774e0
	struct FVertexID GetPolygonPerimeterVertex(struct FPolygonID PolygonID, int32_t PolygonVertexNumber); // Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77660
	void GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutPolygonPerimeterEdgeIDs); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77570
	int32_t GetPolygonPerimeterEdgeCount(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b774e0
	struct FEdgeID GetPolygonPerimeterEdge(struct FPolygonID PolygonID, int32_t PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon); // Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b773b0
	struct FPolygonID GetPolygonInGroup(struct FPolygonGroupID PolygonGroupID, int32_t PolygonNumber); // Function EditableMesh.EditableMesh.GetPolygonInGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b772d0
	int32_t GetPolygonGroupCount(); // Function EditableMesh.EditableMesh.GetPolygonGroupCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b772a0
	int32_t GetPolygonCountInGroup(struct FPolygonGroupID PolygonGroupID); // Function EditableMesh.EditableMesh.GetPolygonCountInGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77210
	int32_t GetPolygonCount(); // Function EditableMesh.EditableMesh.GetPolygonCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b771e0
	void GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutAdjacentPolygons); // Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b770f0
	struct FPolygonGroupID GetGroupForPolygon(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.GetGroupForPolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77050
	struct FPolygonGroupID GetFirstValidPolygonGroup(); // Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b77010
	void GetEdgeVertices(struct FEdgeID EdgeID, struct FVertexID& OutEdgeVertexID0, struct FVertexID& OutEdgeVertexID1); // Function EditableMesh.EditableMesh.GetEdgeVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b76ee0
	struct FVertexID GetEdgeVertex(struct FEdgeID EdgeID, int32_t EdgeVertexNumber); // Function EditableMesh.EditableMesh.GetEdgeVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b76e00
	struct FEdgeID GetEdgeThatConnectsVertices(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b76d20
	void GetEdgeLoopElements(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& EdgeLoopIDs); // Function EditableMesh.EditableMesh.GetEdgeLoopElements // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b76c30
	int32_t GetEdgeCount(); // Function EditableMesh.EditableMesh.GetEdgeCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b76c00
	void GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b76b10
	int32_t GetEdgeConnectedPolygonCount(struct FEdgeID EdgeID); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b76a80
	struct FPolygonID GetEdgeConnectedPolygon(struct FEdgeID EdgeID, int32_t ConnectedPolygonNumber); // Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b769a0
	void GeneratePolygonTangentsAndNormals(struct TArray<struct FPolygonID>& PolygonIDs); // Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b768f0
	void FlipPolygons(struct TArray<struct FPolygonID>& PolygonIDs); // Function EditableMesh.EditableMesh.FlipPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b76840
	int32_t FindPolygonPerimeterVertexNumberForVertex(struct FPolygonID PolygonID, struct FVertexID VertexID); // Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b76760
	int32_t FindPolygonPerimeterEdgeNumberForVertices(struct FPolygonID PolygonID, struct FVertexID EdgeVertexID0, struct FVertexID EdgeVertexID1); // Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b76640
	void FindPolygonLoop(struct FEdgeID EdgeID, struct TArray<struct FEdgeID>& OutEdgeLoopEdgeIDs, struct TArray<struct FEdgeID>& OutFlippedEdgeIDs, struct TArray<struct FEdgeID>& OutReversedEdgeIDPathToTake, struct TArray<struct FPolygonID>& OutPolygonIDsToSplit); // Function EditableMesh.EditableMesh.FindPolygonLoop // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b76410
	void ExtrudePolygons(struct TArray<struct FPolygonID>& Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, struct TArray<struct FPolygonID>& OutNewExtrudedFrontPolygons); // Function EditableMesh.EditableMesh.ExtrudePolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b76250
	void ExtendVertices(struct TArray<struct FVertexID>& VertexIDs, bool bOnlyExtendClosestEdge, struct FVector ReferencePosition, struct TArray<struct FVertexID>& OutNewExtendedVertexIDs); // Function EditableMesh.EditableMesh.ExtendVertices // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2b760a0
	void ExtendEdges(struct TArray<struct FEdgeID>& EdgeIDs, bool bWeldNeighbors, struct TArray<struct FEdgeID>& OutNewExtendedEdgeIDs); // Function EditableMesh.EditableMesh.ExtendEdges // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b75f40
	void EndModification(bool bFromUndo); // Function EditableMesh.EditableMesh.EndModification // (Final|Native|Public|BlueprintCallable) // @ game+0x2b75eb0
	void DeleteVertexInstances(struct TArray<struct FVertexInstanceID>& VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices); // Function EditableMesh.EditableMesh.DeleteVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b75db0
	void DeleteVertexAndConnectedEdgesAndPolygons(struct FVertexID VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons // (Final|Native|Public|BlueprintCallable) // @ game+0x2b75be0
	void DeletePolygons(struct TArray<struct FPolygonID>& PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeletePolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b759e0
	void DeletePolygonGroups(struct TArray<struct FPolygonGroupID>& PolygonGroupIDs); // Function EditableMesh.EditableMesh.DeletePolygonGroups // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b75930
	void DeleteOrphanVertices(struct TArray<struct FVertexID>& VertexIDsToDelete); // Function EditableMesh.EditableMesh.DeleteOrphanVertices // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b75880
	void DeleteEdges(struct TArray<struct FEdgeID>& EdgeIDsToDelete, bool bDeleteOrphanedVertices); // Function EditableMesh.EditableMesh.DeleteEdges // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b75780
	void DeleteEdgeAndConnectedPolygons(struct FEdgeID EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons // (Final|Native|Public|BlueprintCallable) // @ game+0x2b755b0
	void CreateVertices(struct TArray<struct FVertexToCreate>& VerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.CreateVertices // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b75470
	void CreateVertexInstances(struct TArray<struct FVertexInstanceToCreate>& VertexInstancesToCreate, struct TArray<struct FVertexInstanceID>& OutNewVertexInstanceIDs); // Function EditableMesh.EditableMesh.CreateVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b75330
	void CreatePolygons(struct TArray<struct FPolygonToCreate>& PolygonsToCreate, struct TArray<struct FPolygonID>& OutNewPolygonIDs, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreatePolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b75150
	void CreatePolygonGroups(struct TArray<struct FPolygonGroupToCreate>& PolygonGroupsToCreate, struct TArray<struct FPolygonGroupID>& OutNewPolygonGroupIDs); // Function EditableMesh.EditableMesh.CreatePolygonGroups // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b75010
	void CreateMissingPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b74f20
	void CreateEmptyVertexRange(int32_t NumVerticesToCreate, struct TArray<struct FVertexID>& OutNewVertexIDs); // Function EditableMesh.EditableMesh.CreateEmptyVertexRange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b74e30
	void CreateEdges(struct TArray<struct FEdgeToCreate>& EdgesToCreate, struct TArray<struct FEdgeID>& OutNewEdgeIDs); // Function EditableMesh.EditableMesh.CreateEdges // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b74cf0
	void ComputePolygonsSharedEdges(struct TArray<struct FPolygonID>& PolygonIDs, struct TArray<struct FEdgeID>& OutSharedEdgeIDs); // Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b74bd0
	struct FPlane ComputePolygonPlane(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonPlane // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b74b30
	struct FVector ComputePolygonNormal(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonNormal // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b74a90
	struct FVector ComputePolygonCenter(struct FPolygonID PolygonID); // Function EditableMesh.EditableMesh.ComputePolygonCenter // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b749f0
	struct FBoxSphereBounds ComputeBoundingBoxAndSphere(); // Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b749a0
	struct FBox ComputeBoundingBox(); // Function EditableMesh.EditableMesh.ComputeBoundingBox // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b74950
	struct UEditableMesh* CommitInstance(struct UPrimitiveComponent* ComponentToInstanceTo); // Function EditableMesh.EditableMesh.CommitInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x2b748b0
	void Commit(); // Function EditableMesh.EditableMesh.Commit // (Final|Native|Public|BlueprintCallable) // @ game+0x2b74890
	void ChangePolygonsVertexInstances(struct TArray<struct FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons); // Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b74770
	void BevelPolygons(struct TArray<struct FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, struct TArray<struct FPolygonID>& OutNewCenterPolygonIDs, struct TArray<struct FPolygonID>& OutNewSidePolygonIDs); // Function EditableMesh.EditableMesh.BevelPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b74570
	void AssignPolygonsToPolygonGroups(struct TArray<struct FPolygonGroupForPolygon>& PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups); // Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2b74470
	bool AnyChangesToUndo(); // Function EditableMesh.EditableMesh.AnyChangesToUndo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2b74440
};

// Class EditableMesh.EditableMeshFactory
// Size: 0x30 (Inherited: 0x30)
struct UEditableMeshFactory : UObject {

	struct UEditableMesh* MakeEditableMesh(struct UPrimitiveComponent* PrimitiveComponent, int32_t LODIndex); // Function EditableMesh.EditableMeshFactory.MakeEditableMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2b80280
};

// Class EditableMesh.EditableStaticMeshAdapter
// Size: 0xe8 (Inherited: 0x30)
struct UEditableStaticMeshAdapter : UEditableMeshAdapter {
	struct UStaticMesh* StaticMesh; // 0x30(0x08)
	struct UStaticMesh* OriginalStaticMesh; // 0x38(0x08)
	int32_t StaticMeshLODIndex; // 0x40(0x04)
	char pad_44[0xa4]; // 0x44(0xa4)
};

