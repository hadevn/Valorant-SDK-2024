// Class Lobby.LobbyBeaconClient
// Size: 0x4f8 (Inherited: 0x470)
struct ALobbyBeaconClient : AOnlineBeaconClient {
	struct ALobbyBeaconState* LobbyState; // 0x470(0x08)
	struct ALobbyBeaconPlayerState* PlayerState; // 0x478(0x08)
	char pad_480[0x1]; // 0x480(0x01)
	enum class ELobbyBeaconJoinState LobbyJoinServerState; // 0x481(0x01)
	char pad_482[0x76]; // 0x482(0x76)

	void ServerSetPartyOwner(struct FUniqueNetIdRepl InUniqueId, struct FUniqueNetIdRepl InPartyOwnerId); // Function Lobby.LobbyBeaconClient.ServerSetPartyOwner // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x218e5a0
	void ServerNotifyJoiningServer(); // Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x218e4d0
	void ServerLoginPlayer(struct FString InSessionId, struct FUniqueNetIdRepl InUniqueId, struct FString UrlString); // Function Lobby.LobbyBeaconClient.ServerLoginPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x218e260
	void ServerKickPlayer(struct FUniqueNetIdRepl PlayerToKick, struct FText Reason); // Function Lobby.LobbyBeaconClient.ServerKickPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x218e020
	void ServerDisconnectFromLobby(); // Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x218df50
	void ServerCheat(struct FString Msg); // Function Lobby.LobbyBeaconClient.ServerCheat // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x218de00
	void ClientWasKicked(struct FText KickReason); // Function Lobby.LobbyBeaconClient.ClientWasKicked // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x218dc80
	void ClientSetInviteFlags(struct FJoinabilitySettings Settings); // Function Lobby.LobbyBeaconClient.ClientSetInviteFlags // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x218dbe0
	void ClientPlayerLeft(struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerLeft // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x218dad0
	void ClientPlayerJoined(struct FText NewPlayerName, struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerJoined // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x218d930
	void ClientLoginComplete(struct FUniqueNetIdRepl InUniqueId, bool bWasSuccessful); // Function Lobby.LobbyBeaconClient.ClientLoginComplete // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x218d7e0
	void ClientJoinGame(); // Function Lobby.LobbyBeaconClient.ClientJoinGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x218d7b0
	void ClientAckJoiningServer(); // Function Lobby.LobbyBeaconClient.ClientAckJoiningServer // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x218d780
};

// Class Lobby.LobbyBeaconHost
// Size: 0x448 (Inherited: 0x400)
struct ALobbyBeaconHost : AOnlineBeaconHostObject {
	char pad_400[0x10]; // 0x400(0x10)
	struct TSoftClassPtr<UObject> LobbyStateClass; // 0x410(0x30)
	struct ALobbyBeaconState* LobbyState; // 0x440(0x08)
};

// Class Lobby.LobbyBeaconPlayerState
// Size: 0x498 (Inherited: 0x3d8)
struct ALobbyBeaconPlayerState : AInfo {
	struct FText DisplayName; // 0x3d8(0x18)
	struct FUniqueNetIdRepl UniqueId; // 0x3f0(0x28)
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x418(0x28)
	bool bInLobby; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct AOnlineBeaconClient* ClientActor; // 0x448(0x08)
	char pad_450[0x48]; // 0x450(0x48)

	void OnRep_UniqueId(); // Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId // (Final|Native|Protected) // @ game+0x218ddc0
	void OnRep_PartyOwner(); // Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner // (Final|Native|Protected) // @ game+0x218dda0
	void OnRep_InLobby(); // Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby // (Final|Native|Protected) // @ game+0x218dd60
};

// Class Lobby.LobbyBeaconState
// Size: 0x580 (Inherited: 0x3d8)
struct ALobbyBeaconState : AInfo {
	int32_t MaxPlayers; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x3e0(0x08)
	char pad_3E8[0x8]; // 0x3e8(0x08)
	bool bLobbyStarted; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	float WaitForPlayersTimeRemaining; // 0x3f4(0x04)
	struct FLobbyPlayerStateInfoArray Players; // 0x3f8(0x120)
	char pad_518[0x68]; // 0x518(0x68)

	void OnRep_WaitForPlayersTimeRemaining(); // Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining // (Final|Native|Protected) // @ game+0x218dde0
	void OnRep_LobbyStarted(); // Function Lobby.LobbyBeaconState.OnRep_LobbyStarted // (Final|Native|Protected) // @ game+0x218dd80
};

