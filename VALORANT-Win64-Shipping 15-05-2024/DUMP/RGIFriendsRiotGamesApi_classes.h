// Class RGIFriendsRiotGamesApi.RGIFriendsRiotGamesApiDataStore
// Size: 0x288 (Inherited: 0x30)
struct URGIFriendsRiotGamesApiDataStore : UObject {
	char pad_30[0x90]; // 0x30(0x90)
	struct FRGIFriendsFriendRequests FriendRequests; // 0xc0(0x50)
	struct FRGIFriendsPlayers FriendList; // 0x110(0x50)
	struct FRGIFriendsPlayers BlockedList; // 0x160(0x50)
	char pad_1B0[0x38]; // 0x1b0(0x38)
	struct FRGIFriendsPlayer LoggedPlayer; // 0x1e8(0xa0)

	void SubscribeToSocialPluginEvents(int32_t Code, struct FString Message); // Function RGIFriendsRiotGamesApi.RGIFriendsRiotGamesApiDataStore.SubscribeToSocialPluginEvents // (Final|Native|Public) // @ game+0x2a32130
};

