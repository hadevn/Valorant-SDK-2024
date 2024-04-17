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
// Size: 0x2a0 (Inherited: 0x30)
struct UFriendsMockedDataStore : UObject {
	char pad_30[0x88]; // 0x30(0x88)
	struct FRGIFriendsPlayer LoggedPlayer; // 0xb8(0xa0)
	struct FRGIFriendsPlayers Friends; // 0x158(0x50)
	struct FRGIFriendsPlayers BlockedPlayers; // 0x1a8(0x50)
	struct FRGIFriendsFriendRequests FriendRequests; // 0x1f8(0x50)
	struct TMap<struct FString, struct FRGIFriendsPlayer> PartyMembers; // 0x248(0x50)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class RGIFriends.RGIFriendsNoOpDataStore
// Size: 0x290 (Inherited: 0x30)
struct URGIFriendsNoOpDataStore : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct FRGIFriendsPlayer LoggedPlayer; // 0xb0(0xa0)
	struct FRGIFriendsPlayers Friends; // 0x150(0x50)
	struct FRGIFriendsFriendRequests FriendRequests; // 0x1a0(0x50)
	struct FRGIFriendsPlayers BlockedPlayers; // 0x1f0(0x50)
	struct TMap<struct FString, struct FRGIFriendsUserCommunicationPermissions> UsersPermissions; // 0x240(0x50)
};

// Class RGIFriends.RGIFriendsSubsystem
// Size: 0x1a0 (Inherited: 0x38)
struct URGIFriendsSubsystem : UGameInstanceSubsystem {
	char pad_38[0x80]; // 0x38(0x80)
	struct TScriptInterface<IRGIFriendsDataStore> DataStore; // 0xb8(0x10)
	char pad_C8[0x28]; // 0xc8(0x28)
	struct FMulticastInlineDelegate OnFriendsUpdatedDynamic; // 0xf0(0x10)
	char pad_100[0x18]; // 0x100(0x18)
	struct FMulticastInlineDelegate OnLoggedPlayerUpdatedDynamic; // 0x118(0x10)
	char pad_128[0x18]; // 0x128(0x18)
	struct FMulticastInlineDelegate OnBlockedPlayersUpdatedDynamic; // 0x140(0x10)
	char pad_150[0x18]; // 0x150(0x18)
	struct FMulticastInlineDelegate OnFriendsRequestListUpdatedDynamic; // 0x168(0x10)
	char pad_178[0x18]; // 0x178(0x18)
	struct FMulticastInlineDelegate OnProfileViewStateChangedDynamic; // 0x190(0x10)

	void ViewFirstPartyProfile(struct FString ID, struct FDelegate OnSuccess, struct FDelegate OnError, bool bIsFirstPartyId); // Function RGIFriends.RGIFriendsSubsystem.ViewFirstPartyProfile // (Final|Native|Public|BlueprintCallable) // @ game+0x29da130
	void UnblockPlayer(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.UnblockPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x29d9fc0
	void SetBuddyNote(struct FString Puuid, struct FString NoteString, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.SetBuddyNote // (Final|Native|Public|BlueprintCallable) // @ game+0x29d9df0
	void SendFriendRequest(struct FString GameNameAndTagLine, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.SendFriendRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x29d9c80
	void RemoveFriend(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.RemoveFriend // (Final|Native|Public|BlueprintCallable) // @ game+0x29d9b10
	void GetUsersCommunicationPermissions(struct TMap<struct FString, enum class ERGIFriendsPlatform>& Players, struct FDelegate& OnSuccess, struct FDelegate& OnError); // Function RGIFriends.RGIFriendsSubsystem.GetUsersCommunicationPermissions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x29d9910
	void GetPlayerNamesFromPuuids(struct TArray<struct FString>& Puuids, struct FDelegate OnSuccess); // Function RGIFriends.RGIFriendsSubsystem.GetPlayerNamesFromPuuids // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x29d97c0
	struct FRGIFriendsPlayer GetLoggedPlayer(); // Function RGIFriends.RGIFriendsSubsystem.GetLoggedPlayer // (Native|Public|BlueprintCallable) // @ game+0x29d9780
	bool GetIsReady(); // Function RGIFriends.RGIFriendsSubsystem.GetIsReady // (Native|Public|BlueprintCallable) // @ game+0x29d9750
	struct FRGIFriendsPlayers GetFriends(); // Function RGIFriends.RGIFriendsSubsystem.GetFriends // (Native|Public|BlueprintCallable) // @ game+0x29d9710
	struct FRGIFriendsFriendRequests GetFriendRequests(); // Function RGIFriends.RGIFriendsSubsystem.GetFriendRequests // (Native|Public|BlueprintCallable) // @ game+0x29d96d0
	struct FRGIFriendsPlayers GetBlockedPlayers(); // Function RGIFriends.RGIFriendsSubsystem.GetBlockedPlayers // (Native|Public|BlueprintCallable) // @ game+0x29d9690
	void DeclineFriendRequest(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.DeclineFriendRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x29d9520
	void BlockPlayer(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.BlockPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x29d93b0
	void AcceptFriendRequest(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.AcceptFriendRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x29d9240
};

