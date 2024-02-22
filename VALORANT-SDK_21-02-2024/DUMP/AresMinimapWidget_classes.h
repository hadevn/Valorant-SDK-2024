// WidgetBlueprintGeneratedClass AresMinimapWidget.AresMinimapWidget_C
// Size: 0x3b1 (Inherited: 0x2e0)
struct UAresMinimapWidget_C : UAresMinimapWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* Intro; // 0x2e8(0x08)
	struct UImage* MinimapOffsiteImage; // 0x2f0(0x08)
	enum class EAresMinimapLayer MinimapLayer; // 0x2f8(0x01)
	enum class EAresMinimapPositionSpace Minimap Position Space; // 0x2f9(0x01)
	enum class EAresMinimapRotationSpace Minimap Rotation Space; // 0x2fa(0x01)
	enum class EAresMinimapSizeSpace Minimap Size Space; // 0x2fb(0x01)
	struct FVector Minimap Position; // 0x2fc(0x0c)
	float Minimap Rotation; // 0x308(0x04)
	struct FVector Minimap Size; // 0x30c(0x0c)
	struct FSlateBrush Brush; // 0x318(0x90)
	struct FVector2D Alignment; // 0x3a8(0x08)
	bool Draw Off Map; // 0x3b0(0x01)

	void PreConstruct(bool IsDesignTime); // Function AresMinimapWidget.AresMinimapWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40ca1b0
	void Construct(); // Function AresMinimapWidget.AresMinimapWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x40ca1b0
	void ExecuteUbergraph_AresMinimapWidget(int32_t EntryPoint); // Function AresMinimapWidget.AresMinimapWidget_C.ExecuteUbergraph_AresMinimapWidget // (Final|UbergraphFunction) // @ game+0x40ca1b0
};

