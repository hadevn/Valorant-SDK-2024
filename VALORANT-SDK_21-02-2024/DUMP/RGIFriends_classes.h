// Class RGIFriends.RGIFriendsDataStore
// Size: 0x30 (Inherited: 0x30)
struct URGIFriendsDataStore : UInterface {
};

// Class RGIFriends.RGIFriendsMockedData
// Size: 0x118 (Inherited: 0x38)
struct URGIFriendsMockedData : UPrimaryDataAsset {
	struct FRGIFriendsPlayer LoggedPlayer; // 0x38(0xa0)
	struct TArray<struct FRGIFriendsPlayer> Friends; // 0xd8(0x10)
	struct TArray<struct FRGIFriendsPlayer> BlockedPlayers; // 0xe8(0x10)
	struct TArray<struct FRGIFriendsFriendRequest> FriendsRequests; // 0xf8(0x10)
	struct TArray<struct FRGIFriendsPlayer> PartyPlayers; // 0x108(0x10)
};

// Class RGIFriends.FriendsMockedDataStore
// Size: 0x298 (Inherited: 0x30)
struct UFriendsMockedDataStore : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct FRGIFriendsPlayer LoggedPlayer; // 0xb0(0xa0)
	struct FRGIFriendsPlayers Friends; // 0x150(0x50)
	struct FRGIFriendsPlayers BlockedPlayers; // 0x1a0(0x50)
	struct FRGIFriendsFriendRequests FriendRequests; // 0x1f0(0x50)
	struct TMap<struct FString, struct FRGIFriendsPlayer> PartyMembers; // 0x240(0x50)
	char pad_290[0x8]; // 0x290(0x08)
};

// Class RGIFriends.RGIFriendsNoOpDataStore
// Size: 0x238 (Inherited: 0x30)
struct URGIFriendsNoOpDataStore : UObject {
	char pad_30[0x78]; // 0x30(0x78)
	struct FRGIFriendsPlayer LoggedPlayer; // 0xa8(0xa0)
	struct FRGIFriendsPlayers Friends; // 0x148(0x50)
	struct FRGIFriendsFriendRequests FriendRequests; // 0x198(0x50)
	struct FRGIFriendsPlayers BlockedPlayers; // 0x1e8(0x50)
};

// Class RGIFriends.RGIFriendsSubsystem
// Size: 0x190 (Inherited: 0x38)
struct URGIFriendsSubsystem : UGameInstanceSubsystem {
	char pad_38[0x78]; // 0x38(0x78)
	struct TScriptInterface<IRGIFriendsDataStore> DataStore; // 0xb0(0x10)
	char pad_C0[0x28]; // 0xc0(0x28)
	struct FMulticastInlineDelegate OnFriendsUpdatedDynamic; // 0xe8(0x10)
	char pad_F8[0x18]; // 0xf8(0x18)
	struct FMulticastInlineDelegate OnLoggedPlayerUpdatedDynamic; // 0x110(0x10)
	char pad_120[0x18]; // 0x120(0x18)
	struct FMulticastInlineDelegate OnBlockedPlayersUpdatedDynamic; // 0x138(0x10)
	char pad_148[0x10]; // 0x148(0x10)
	struct FMulticastInlineDelegate OnFriendsRequestListUpdatedDynamic; // 0x158(0x10)
	char pad_168[0x18]; // 0x168(0x18)
	struct FMulticastInlineDelegate OnProfileViewStateChangedDynamic; // 0x180(0x10)

	void ViewConsoleProfile(struct FString ID, struct FDelegate OnSuccess, struct FDelegate OnError, bool bIsConsoleId); // Function RGIFriends.RGIFriendsSubsystem.ViewConsoleProfile // (Final|Native|Public|BlueprintCallable) // @ game+0x2907190
	void UnblockPlayer(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.UnblockPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x2907020
	void SetBuddyNote(struct FString Puuid, struct FString NoteString, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.SetBuddyNote // (Final|Native|Public|BlueprintCallable) // @ game+0x2906e50
	void SendFriendRequest(struct FString GameNameAndTagLine, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.SendFriendRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x2906ce0
	void RemoveFriend(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.RemoveFriend // (Final|Native|Public|BlueprintCallable) // @ game+0x2906b70
	void HandleFriendsRequestListUpdated(struct FRGIFriendsFriendRequests& FriendRequests); // Function RGIFriends.RGIFriendsSubsystem.HandleFriendsRequestListUpdated // (Final|Native|Public|HasOutParms) // @ game+0x2906a50
	struct FRGIFriendsPlayer GetLoggedPlayer(); // Function RGIFriends.RGIFriendsSubsystem.GetLoggedPlayer // (Native|Public|BlueprintCallable) // @ game+0x2906a10
	bool GetIsReady(); // Function RGIFriends.RGIFriendsSubsystem.GetIsReady // (Native|Public|BlueprintCallable) // @ game+0x29069e0
	struct FRGIFriendsPlayers GetFriends(); // Function RGIFriends.RGIFriendsSubsystem.GetFriends // (Native|Public|BlueprintCallable) // @ game+0x29069a0
	struct FRGIFriendsFriendRequests GetFriendRequests(); // Function RGIFriends.RGIFriendsSubsystem.GetFriendRequests // (Native|Public|BlueprintCallable) // @ game+0x2906960
	struct FRGIFriendsPlayers GetBlockedPlayers(); // Function RGIFriends.RGIFriendsSubsystem.GetBlockedPlayers // (Native|Public|BlueprintCallable) // @ game+0x2906920
	void DeclineFriendRequest(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.DeclineFriendRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x29067b0
	void BlockPlayer(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.BlockPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x2906640
	void AcceptFriendRequest(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.AcceptFriendRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x29064d0
};

