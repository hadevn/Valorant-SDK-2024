// WidgetBlueprintGeneratedClass AresMinimapWidget.AresMinimapWidget_C
// Size: 0x3c1 (Inherited: 0x2e8)
struct UAresMinimapWidget_C : UAresMinimapWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* Outro; // 0x2f0(0x08)
	struct UWidgetAnimation* Intro; // 0x2f8(0x08)
	struct UImage* MinimapOffsiteImage; // 0x300(0x08)
	enum class EAresMinimapLayer MinimapLayer; // 0x308(0x01)
	enum class EAresMinimapPositionSpace Minimap Position Space; // 0x309(0x01)
	enum class EAresMinimapRotationSpace Minimap Rotation Space; // 0x30a(0x01)
	enum class EAresMinimapSizeSpace Minimap Size Space; // 0x30b(0x01)
	struct FVector Minimap Position; // 0x30c(0x0c)
	float Minimap Rotation; // 0x318(0x04)
	struct FVector Minimap Size; // 0x31c(0x0c)
	struct FSlateBrush Brush; // 0x328(0x90)
	struct FVector2D Alignment; // 0x3b8(0x08)
	bool Draw Off Map; // 0x3c0(0x01)

	void PreConstruct(bool IsDesignTime); // Function AresMinimapWidget.AresMinimapWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4282c30
	void Construct(); // Function AresMinimapWidget.AresMinimapWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4282c30
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AresMinimapWidget.AresMinimapWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4282c30
	void ExecuteUbergraph_AresMinimapWidget(int32_t EntryPoint); // Function AresMinimapWidget.AresMinimapWidget_C.ExecuteUbergraph_AresMinimapWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x4282c30
};

