// Class RGIFriendsRiotGamesApi.RGIFriendsRiotGamesApiDataStore
// Size: 0x280 (Inherited: 0x30)
struct URGIFriendsRiotGamesApiDataStore : UObject {
	char pad_30[0x88]; // 0x30(0x88)
	struct FRGIFriendsFriendRequests FriendRequests; // 0xb8(0x50)
	struct FRGIFriendsPlayers FriendList; // 0x108(0x50)
	struct FRGIFriendsPlayers BlockedList; // 0x158(0x50)
	char pad_1A8[0x38]; // 0x1a8(0x38)
	struct FRGIFriendsPlayer LoggedPlayer; // 0x1e0(0xa0)

	void SubscribeToSocialPluginEvents(int32_t Code, struct FString Message); // Function RGIFriendsRiotGamesApi.RGIFriendsRiotGamesApiDataStore.SubscribeToSocialPluginEvents // (Final|Native|Public) // @ game+0x29121c0
};

