// Class UdpMessaging.UdpMessagingSettings
// Size: 0xb0 (Inherited: 0x30)
struct UUdpMessagingSettings : UObject {
	bool EnabledByDefault; // 0x30(0x01)
	bool EnableTransport; // 0x31(0x01)
	bool bAutoRepair; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	float MaxSendRate; // 0x34(0x04)
	uint32_t AutoRepairAttemptLimit; // 0x38(0x04)
	bool bStopServiceWhenAppDeactivates; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString UnicastEndpoint; // 0x40(0x10)
	struct FString MulticastEndpoint; // 0x50(0x10)
	enum class EUdpMessageFormat MessageFormat; // 0x60(0x01)
	char MulticastTimeToLive; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct TArray<struct FString> StaticEndpoints; // 0x68(0x10)
	bool EnableTunnel; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString TunnelUnicastEndpoint; // 0x80(0x10)
	struct FString TunnelMulticastEndpoint; // 0x90(0x10)
	struct TArray<struct FString> RemoteTunnelEndpoints; // 0xa0(0x10)
};

