// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// Size: 0x128 (Inherited: 0xf0)
struct UMovieSceneGeometryCollectionSection : UMovieSceneSection {
	struct FMovieSceneGeometryCollectionParams Params; // 0xf0(0x38)
};

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// Size: 0xb0 (Inherited: 0x98)
struct UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack {
	char pad_98[0x8]; // 0x98(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0xa0(0x10)
};

