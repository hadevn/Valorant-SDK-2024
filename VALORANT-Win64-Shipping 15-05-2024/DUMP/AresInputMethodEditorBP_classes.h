// WidgetBlueprintGeneratedClass AresInputMethodEditorBP.AresInputMethodEditorBP_C
// Size: 0x471 (Inherited: 0x450)
struct UAresInputMethodEditorBP_C : UAresInputMethodEditor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UImage* Background; // 0x458(0x08)
	struct UVerticalBox* IMEBox; // 0x460(0x08)
	bool Different Length; // 0x468(0x01)
	char pad_469[0x3]; // 0x469(0x03)
	int32_t New Selected Index; // 0x46c(0x04)
	bool Needs To Reposition; // 0x470(0x01)

	void Create IME View(struct TArray<struct FString>& Candidate Strings, int32_t Selected Index); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.Create IME View // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void Make Background Overlay(struct UOverlay*& BackgroundOverlay); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.Make Background Overlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void Format Candidate String(struct FString Candidate String, int32_t Index, struct FString& Formated Candidate String); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.Format Candidate String // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x4317a70
	void Add Candidate String to IME(struct FString Candidate String, bool IsSelectedIndex); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.Add Candidate String to IME // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void HandleInputMethodOnUpdate(struct TArray<struct FString>& NewCandidateStrings, int32_t NewSelectedIndex); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.HandleInputMethodOnUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x4317a70
	void Construct(); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4317a70
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4317a70
	void PreConstruct(bool IsDesignTime); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4317a70
	void ExecuteUbergraph_AresInputMethodEditorBP(int32_t EntryPoint); // Function AresInputMethodEditorBP.AresInputMethodEditorBP_C.ExecuteUbergraph_AresInputMethodEditorBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x4317a70
};

