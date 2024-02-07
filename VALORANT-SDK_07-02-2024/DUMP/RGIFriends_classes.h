// Class RGIFriends.RGIFriendsDataStore
// Size: 0x30 (Inherited: 0x30)
struct URGIFriendsDataStore : UInterface {
};

// Class RGIFriends.RGIFriendsMockedData
// Size: 0xe8 (Inherited: 0x38)
struct URGIFriendsMockedData : UPrimaryDataAsset {
	struct FRGIFriendsPlayer LoggedPlayer; // 0x38(0x70)
	struct TArray<struct FRGIFriendsPlayer> Friends; // 0xa8(0x10)
	struct TArray<struct FRGIFriendsPlayer> BlockedPlayers; // 0xb8(0x10)
	struct TArray<struct FRGIFriendsFriendRequest> FriendsRequests; // 0xc8(0x10)
	struct TArray<struct FRGIFriendsPlayer> PartyPlayers; // 0xd8(0x10)
};

// Class RGIFriends.FriendsMockedDataStore
// Size: 0x298 (Inherited: 0x30)
struct UFriendsMockedDataStore : UObject {
	char pad_30[0xb0]; // 0x30(0xb0)
	struct FRGIFriendsPlayer LoggedPlayer; // 0xe0(0x70)
	struct FRGIFriendsPlayers Friends; // 0x150(0x50)
	struct FRGIFriendsPlayers BlockedPlayers; // 0x1a0(0x50)
	struct FRGIFriendsFriendRequests FriendRequests; // 0x1f0(0x50)
	struct TMap<struct FString, struct FRGIFriendsPlayer> PartyMembers; // 0x240(0x50)
	char pad_290[0x8]; // 0x290(0x08)
};

// Class RGIFriends.RGIFriendsNoOpDataStore
// Size: 0x238 (Inherited: 0x30)
struct URGIFriendsNoOpDataStore : UObject {
	char pad_30[0xa8]; // 0x30(0xa8)
	struct FRGIFriendsPlayer LoggedPlayer; // 0xd8(0x70)
	struct FRGIFriendsPlayers Friends; // 0x148(0x50)
	struct FRGIFriendsFriendRequests FriendRequests; // 0x198(0x50)
	struct FRGIFriendsPlayers BlockedPlayers; // 0x1e8(0x50)
};

// Class RGIFriends.RGIFriendsSubsystem
// Size: 0x150 (Inherited: 0x38)
struct URGIFriendsSubsystem : UGameInstanceSubsystem {
	char pad_38[0xa8]; // 0x38(0xa8)
	struct TScriptInterface<IRGIFriendsDataStore> DataStore; // 0xe0(0x10)
	char pad_F0[0x60]; // 0xf0(0x60)
};

