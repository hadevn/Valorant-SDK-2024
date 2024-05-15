// Class Lobby.LobbyBeaconClient
// Size: 0x4d8 (Inherited: 0x450)
struct ALobbyBeaconClient : AOnlineBeaconClient {
	struct ALobbyBeaconState* LobbyState; // 0x450(0x08)
	struct ALobbyBeaconPlayerState* PlayerState; // 0x458(0x08)
	char pad_460[0x1]; // 0x460(0x01)
	enum class ELobbyBeaconJoinState LobbyJoinServerState; // 0x461(0x01)
	char pad_462[0x76]; // 0x462(0x76)

	void ServerSetPartyOwner(struct FUniqueNetIdRepl InUniqueId, struct FUniqueNetIdRepl InPartyOwnerId); // Function Lobby.LobbyBeaconClient.ServerSetPartyOwner // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x22433f0
	void ServerNotifyJoiningServer(); // Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x2243320
	void ServerLoginPlayer(struct FString InSessionId, struct FUniqueNetIdRepl InUniqueId, struct FString UrlString); // Function Lobby.LobbyBeaconClient.ServerLoginPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x22430b0
	void ServerKickPlayer(struct FUniqueNetIdRepl PlayerToKick, struct FText Reason); // Function Lobby.LobbyBeaconClient.ServerKickPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x2242e70
	void ServerDisconnectFromLobby(); // Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x2242da0
	void ServerCheat(struct FString Msg); // Function Lobby.LobbyBeaconClient.ServerCheat // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x2242c50
	void ClientWasKicked(struct FText KickReason); // Function Lobby.LobbyBeaconClient.ClientWasKicked // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x2242ad0
	void ClientSetInviteFlags(struct FJoinabilitySettings Settings); // Function Lobby.LobbyBeaconClient.ClientSetInviteFlags // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x2242a30
	void ClientPlayerLeft(struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerLeft // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x2242920
	void ClientPlayerJoined(struct FText NewPlayerName, struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerJoined // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x2242780
	void ClientLoginComplete(struct FUniqueNetIdRepl InUniqueId, bool bWasSuccessful); // Function Lobby.LobbyBeaconClient.ClientLoginComplete // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x2242630
	void ClientJoinGame(); // Function Lobby.LobbyBeaconClient.ClientJoinGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x2242600
	void ClientAckJoiningServer(); // Function Lobby.LobbyBeaconClient.ClientAckJoiningServer // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x22425d0
};

// Class Lobby.LobbyBeaconHost
// Size: 0x428 (Inherited: 0x3e0)
struct ALobbyBeaconHost : AOnlineBeaconHostObject {
	char pad_3E0[0x10]; // 0x3e0(0x10)
	struct TSoftClassPtr<UObject> LobbyStateClass; // 0x3f0(0x30)
	struct ALobbyBeaconState* LobbyState; // 0x420(0x08)
};

// Class Lobby.LobbyBeaconPlayerState
// Size: 0x478 (Inherited: 0x3b8)
struct ALobbyBeaconPlayerState : AInfo {
	struct FText DisplayName; // 0x3b8(0x18)
	struct FUniqueNetIdRepl UniqueId; // 0x3d0(0x28)
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x3f8(0x28)
	bool bInLobby; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct AOnlineBeaconClient* ClientActor; // 0x428(0x08)
	char pad_430[0x48]; // 0x430(0x48)

	void OnRep_UniqueId(); // Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId // (Final|Native|Protected) // @ game+0x2242c10
	void OnRep_PartyOwner(); // Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner // (Final|Native|Protected) // @ game+0x2242bf0
	void OnRep_InLobby(); // Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby // (Final|Native|Protected) // @ game+0x2242bb0
};

// Class Lobby.LobbyBeaconState
// Size: 0x560 (Inherited: 0x3b8)
struct ALobbyBeaconState : AInfo {
	int32_t MaxPlayers; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x3c0(0x08)
	char pad_3C8[0x8]; // 0x3c8(0x08)
	bool bLobbyStarted; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	float WaitForPlayersTimeRemaining; // 0x3d4(0x04)
	struct FLobbyPlayerStateInfoArray Players; // 0x3d8(0x120)
	char pad_4F8[0x68]; // 0x4f8(0x68)

	void OnRep_WaitForPlayersTimeRemaining(); // Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining // (Final|Native|Protected) // @ game+0x2242c30
	void OnRep_LobbyStarted(); // Function Lobby.LobbyBeaconState.OnRep_LobbyStarted // (Final|Native|Protected) // @ game+0x2242bd0
};

