// Enum RGILatencyMarkers.ERGILatencyIntervalType
enum class ERGILatencyIntervalType : uint8 {
	Work = 0,
	Slack = 1,
	Slop = 2,
	Count = 3,
	ERGILatencyIntervalType_MAX = 4
};

// Enum RGILatencyMarkers.ERGILatencyMarkerType
enum class ERGILatencyMarkerType : uint8 {
	SimulationStart = 0,
	SimulationEnd = 1,
	RenderSubmitStart = 2,
	RenderSubmitEnd = 3,
	PresentStart = 4,
	PresentEnd = 5,
	InputSample = 6,
	TriggerFlash = 7,
	DrawSceneCommandEnqueued = 8,
	DrawSceneCommandStart = 9,
	DrawSceneCommandEnd = 10,
	SlateDrawWindowCommandStart = 11,
	EndDrawingViewportRHICommandEnqueued = 12,
	VALRenderSyncStart = 13,
	VALRenderSyncEnd = 14,
	Count = 15,
	ERGILatencyMarkerType_MAX = 16
};

// ScriptStruct RGILatencyMarkers.RGILatencyInterval
// Size: 0x03 (Inherited: 0x00)
struct FRGILatencyInterval {
	enum class ERGILatencyIntervalType IntervalType; // 0x00(0x01)
	enum class ERGILatencyMarkerType BeginMarker; // 0x01(0x01)
	enum class ERGILatencyMarkerType EndMarker; // 0x02(0x01)
};

