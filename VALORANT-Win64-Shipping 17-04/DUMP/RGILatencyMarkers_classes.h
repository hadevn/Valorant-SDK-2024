// Class RGILatencyMarkers.RGILatencyMarkers
// Size: 0x98 (Inherited: 0x30)
struct URGILatencyMarkers : UObject {
	char pad_30[0x50]; // 0x30(0x50)
	uint32_t FrameHistoryLength; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct FRGILatencyInterval> LatencyIntervals; // 0x88(0x10)
};

