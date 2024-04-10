// Class WebSocketNetworking.WebSocketConnection
// Size: 0x1c10 (Inherited: 0x1c00)
struct UWebSocketConnection : UNetConnection {
	char pad_1C00[0x10]; // 0x1c00(0x10)
};

// Class WebSocketNetworking.WebSocketNetDriver
// Size: 0x808 (Inherited: 0x7f8)
struct UWebSocketNetDriver : UNetDriver {
	int32_t WebSocketPort; // 0x7f8(0x04)
	char pad_7FC[0xc]; // 0x7fc(0x0c)
};

