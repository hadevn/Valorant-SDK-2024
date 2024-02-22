// Enum RGIFriends.ERGIFriendRequestType
enum class ERGIFriendRequestType : uint8 {
	Inbound = 0,
	Outbound = 1,
	ERGIFriendRequestType_MAX = 2
};

// Enum RGIFriends.ERGIFriendsPlatform
enum class ERGIFriendsPlatform : uint8 {
	NotConsole = 0,
	Xbox = 1,
	Playstation = 2,
	Unknown = 3,
	ERGIFriendsPlatform_MAX = 4
};

// Enum RGIFriends.ERGIFriendsFriendStatus
enum class ERGIFriendsFriendStatus : uint8 {
	Chat = 0,
	Away = 1,
	Dnd = 2,
	Offline = 3,
	ERGIFriendsFriendStatus_MAX = 4
};

// Enum RGIFriends.ERGIFriendsBlockPlayerResponseErrors
enum class ERGIFriendsBlockPlayerResponseErrors : uint8 {
	NoPuuidProvided = 0,
	MissingPuuidOrName = 1,
	AlreadyBlocked = 2,
	TargetingSelf = 3,
	InternalError = 4,
	ERGIFriendsBlockPlayerResponseErrors_MAX = 5
};

// Enum RGIFriends.ERGIFriendsUnblockPlayerResponseErrors
enum class ERGIFriendsUnblockPlayerResponseErrors : uint8 {
	NoPuuidProvided = 0,
	NotBlocked = 1,
	TargetingSelf = 2,
	InternalError = 3,
	ERGIFriendsUnblockPlayerResponseErrors_MAX = 4
};

// Enum RGIFriends.ERGIFriendsDisplayConsoleProfileResponseErrors
enum class ERGIFriendsDisplayConsoleProfileResponseErrors : uint8 {
	ConsoleAPINotReady = 0,
	UserNotLoggedIn = 1,
	ConsoleProfileNotFound = 2,
	InvalidIdFormat = 3,
	InternalError = 4,
	ERGIFriendsDisplayConsoleProfileResponseErrors_MAX = 5
};

// Enum RGIFriends.ERGIFriendsUpdateFriendsResponseErrors
enum class ERGIFriendsUpdateFriendsResponseErrors : uint8 {
	FriendGroupEmpty = 0,
	MetaGroupName = 1,
	FriendNotFound = 2,
	StatusAlreadyTrue = 3,
	InternalError = 4,
	ERGIFriendsUpdateFriendsResponseErrors_MAX = 5
};

// Enum RGIFriends.ERGIFriendsRemoveFriendErrors
enum class ERGIFriendsRemoveFriendErrors : uint8 {
	FriendNotFound = 0,
	InternalError = 1,
	ERGIFriendsRemoveFriendErrors_MAX = 2
};

// Enum RGIFriends.ERGIFriendsDeclineRequestErrors
enum class ERGIFriendsDeclineRequestErrors : uint8 {
	RequestNotFound = 0,
	InternalError = 1,
	ERGIFriendsDeclineRequestErrors_MAX = 2
};

// Enum RGIFriends.ERGIFriendsRequestResponseErrors
enum class ERGIFriendsRequestResponseErrors : uint8 {
	NoGameNameAndTagLineProvided = 0,
	NoTagLineProvided = 1,
	RequestSentToFriend = 2,
	RequestSentToBlockedPlayer = 3,
	RequestSentToBlockingPlayer = 4,
	RequestSentToSelf = 5,
	RequestedPlayerNotFound = 6,
	FriendListFull = 7,
	MaxOutgoingInvites = 8,
	MaxIncomingInvites = 9,
	InternalError = 10,
	ERGIFriendsRequestResponseErrors_MAX = 11
};

// ScriptStruct RGIFriends.RGIFriendsFriendRequests
// Size: 0x50 (Inherited: 0x00)
struct FRGIFriendsFriendRequests {
	struct TMap<struct FString, struct FRGIFriendsFriendRequest> MapOfRequests; // 0x00(0x50)
};

// ScriptStruct RGIFriends.RGIFriendsFriendRequest
// Size: 0x38 (Inherited: 0x00)
struct FRGIFriendsFriendRequest {
	struct FString PlayerName; // 0x00(0x10)
	struct FString PlayerTag; // 0x10(0x10)
	struct FString Puuid; // 0x20(0x10)
	enum class ERGIFriendRequestType RequestType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct RGIFriends.RGIFriendsPlayer
// Size: 0xa0 (Inherited: 0x00)
struct FRGIFriendsPlayer {
	struct FString Name; // 0x00(0x10)
	struct FString PreferredDisplayName; // 0x10(0x10)
	struct FString GameTag; // 0x20(0x10)
	struct FString ProductPresenceName; // 0x30(0x10)
	struct FString Product; // 0x40(0x10)
	enum class ERGIFriendsFriendStatus Status; // 0x50(0x01)
	enum class ERGIFriendsPlatform Platform; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct FString Puuid; // 0x58(0x10)
	struct FString Note; // 0x68(0x10)
	bool bIsInParty; // 0x78(0x01)
	bool bIsPartyLeader; // 0x79(0x01)
	bool bIsRiotFriend; // 0x7a(0x01)
	bool bIsActivePlatformFriend; // 0x7b(0x01)
	bool bIsRiotBlocked; // 0x7c(0x01)
	bool bIsActivePlatformBlocked; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	struct FString PlayStationAlias; // 0x80(0x10)
	struct FString XboxAlias; // 0x90(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsPlayers
// Size: 0x50 (Inherited: 0x00)
struct FRGIFriendsPlayers {
	struct TMap<struct FString, struct FRGIFriendsPlayer> MapOfPlayers; // 0x00(0x50)
};

