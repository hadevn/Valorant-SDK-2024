// WidgetBlueprintGeneratedClass SettingsUniversalHoverBG.SettingsUniversalHoverBG_C
// Size: 0x2e0 (Inherited: 0x2c8)
struct USettingsUniversalHoverBG_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* hover; // 0x2d0(0x08)
	struct UImage* HoverImage; // 0x2d8(0x08)

	void Construct(); // Function SettingsUniversalHoverBG.SettingsUniversalHoverBG_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4317a70
	void OnHoverState(); // Function SettingsUniversalHoverBG.SettingsUniversalHoverBG_C.OnHoverState // (BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void OnUnHoverState(); // Function SettingsUniversalHoverBG.SettingsUniversalHoverBG_C.OnUnHoverState // (BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void ExecuteUbergraph_SettingsUniversalHoverBG(int32_t EntryPoint); // Function SettingsUniversalHoverBG.SettingsUniversalHoverBG_C.ExecuteUbergraph_SettingsUniversalHoverBG // (Final|UbergraphFunction) // @ game+0x4317a70
};

