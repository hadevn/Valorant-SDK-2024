// Enum RGIFriends.ERGIFriendsRequestResponseErrors
enum class ERGIFriendsRequestResponseErrors : uint8 {
	NoGameNameAndTagLineProvided = 0,
	NoTagLineProvided = 1,
	RequestSentToBlockedPlayer = 2,
	RequestSentToSelf = 3,
	InternalError = 4,
	ERGIFriendsRequestResponseErrors_MAX = 5
};

// Enum RGIFriends.ERGIFriendRequestType
enum class ERGIFriendRequestType : uint8 {
	Inbound = 0,
	Outbound = 1,
	ERGIFriendRequestType_MAX = 2
};

// Enum RGIFriends.ERGIFriendsFriendStatus
enum class ERGIFriendsFriendStatus : uint8 {
	Chat = 0,
	Away = 1,
	Dnd = 2,
	Offline = 3,
	ERGIFriendsFriendStatus_MAX = 4
};

// Enum RGIFriends.ERGIBlockPlayerResponseErrors
enum class ERGIBlockPlayerResponseErrors : uint8 {
	NoPuuidProvided = 0,
	MissingPuuidOrName = 1,
	AlreadyBlocked = 2,
	TargetingSelf = 3,
	InternalError = 4,
	ERGIBlockPlayerResponseErrors_MAX = 5
};

// Enum RGIFriends.ERGIUnblockPlayerResponseErrors
enum class ERGIUnblockPlayerResponseErrors : uint8 {
	NoPuuidProvided = 0,
	NotBlocked = 1,
	TargetingSelf = 2,
	InternalError = 3,
	ERGIUnblockPlayerResponseErrors_MAX = 4
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
// Size: 0x70 (Inherited: 0x00)
struct FRGIFriendsPlayer {
	struct FString Name; // 0x00(0x10)
	struct FString GameTag; // 0x10(0x10)
	struct FString ProductPresenceName; // 0x20(0x10)
	struct FString Product; // 0x30(0x10)
	enum class ERGIFriendsFriendStatus Status; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString Puuid; // 0x48(0x10)
	struct FString Note; // 0x58(0x10)
	bool bIsFriend; // 0x68(0x01)
	bool bIsInParty; // 0x69(0x01)
	bool bIsPartyLeader; // 0x6a(0x01)
	bool bIsBlocked; // 0x6b(0x01)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct RGIFriends.RGIFriendsPlayers
// Size: 0x50 (Inherited: 0x00)
struct FRGIFriendsPlayers {
	struct TMap<struct FString, struct FRGIFriendsPlayer> MapOfPlayers; // 0x00(0x50)
};

