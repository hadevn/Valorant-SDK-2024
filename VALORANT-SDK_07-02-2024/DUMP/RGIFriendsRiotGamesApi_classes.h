// Class RGIFriendsRiotGamesApi.RGIFriendsRiotGamesApiDataStore
// Size: 0x280 (Inherited: 0x30)
struct URGIFriendsRiotGamesApiDataStore : UObject {
	char pad_30[0xb8]; // 0x30(0xb8)
	struct FRGIFriendsFriendRequests FriendRequests; // 0xe8(0x50)
	struct FRGIFriendsPlayers FriendList; // 0x138(0x50)
	struct FRGIFriendsPlayers BlockedList; // 0x188(0x50)
	char pad_1D8[0x38]; // 0x1d8(0x38)
	struct FRGIFriendsPlayer LoggedPlayer; // 0x210(0x70)

	void SubscribeToSocialPluginEvents(int32_t Code, struct FString Message); // Function RGIFriendsRiotGamesApi.RGIFriendsRiotGamesApiDataStore.SubscribeToSocialPluginEvents // (Final|Native|Public) // @ game+0x28c6f90
};

