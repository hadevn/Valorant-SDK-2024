// WidgetBlueprintGeneratedClass ConfirmationModal.ConfirmationModal_C
// Size: 0x510 (Inherited: 0x478)
struct UConfirmationModal_C : UGenericModalNotification_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct USpacer* CancelButtonSpacer; // 0x480(0x08)
	struct UNamedSlot* CustomBody; // 0x488(0x08)
	struct UWidgetSwitcher* CustomBodyOrMessage; // 0x490(0x08)
	struct UImage* Image_1; // 0x498(0x08)
	struct UImage* Image_2; // 0x4a0(0x08)
	struct UImage* Image_3; // 0x4a8(0x08)
	struct UImage* Image_4; // 0x4b0(0x08)
	struct UImage* Image_5; // 0x4b8(0x08)
	struct USharedButtonMaster_C* LeftButton; // 0x4c0(0x08)
	struct URichTextBlock* Message; // 0x4c8(0x08)
	struct USharedButtonMaster_C* MiddleButton; // 0x4d0(0x08)
	struct USpacer* MiddleButtonSpacer; // 0x4d8(0x08)
	struct USharedButtonMaster_C* RightButton; // 0x4e0(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x4e8(0x08)
	struct USizeBox* SizeBoxCancel_2; // 0x4f0(0x08)
	struct USizeBox* SizeBoxConfirmation; // 0x4f8(0x08)
	struct USizeBox* SizeBoxMiddleButton; // 0x500(0x08)
	struct UTextBlock* Title; // 0x508(0x08)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ConfirmationModal.ConfirmationModal_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ConfirmationModal.ConfirmationModal_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	bool HandleBackRequest(); // Function ConfirmationModal.ConfirmationModal_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void Get Colors from Notification Type(enum class EAresNotificationType NotificationType, struct UModalNotificationColors_C*& Colors); // Function ConfirmationModal.ConfirmationModal_C.Get Colors from Notification Type // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void Construct(); // Function ConfirmationModal.ConfirmationModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4317a70
	void Destruct(); // Function ConfirmationModal.ConfirmationModal_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4317a70
	void PreConstruct(bool IsDesignTime); // Function ConfirmationModal.ConfirmationModal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x4317a70
	void BndEvt__ConfirmationModal_LeftButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function ConfirmationModal.ConfirmationModal_C.BndEvt__ConfirmationModal_LeftButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x4317a70
	void BndEvt__ConfirmationModal_MiddleButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function ConfirmationModal.ConfirmationModal_C.BndEvt__ConfirmationModal_MiddleButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x4317a70
	void BndEvt__ConfirmationModal_RightButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function ConfirmationModal.ConfirmationModal_C.BndEvt__ConfirmationModal_RightButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x4317a70
	void BndEvt__ConfirmationModal_SharedBackButton_K2Node_ComponentBoundEvent_3_OnBackRequested__DelegateSignature(); // Function ConfirmationModal.ConfirmationModal_C.BndEvt__ConfirmationModal_SharedBackButton_K2Node_ComponentBoundEvent_3_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x4317a70
	void UpdateButtonHighlight(); // Function ConfirmationModal.ConfirmationModal_C.UpdateButtonHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void ModalButtonPressed(); // Function ConfirmationModal.ConfirmationModal_C.ModalButtonPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void InitButtonHighlight(); // Function ConfirmationModal.ConfirmationModal_C.InitButtonHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x4317a70
	void ExecuteUbergraph_ConfirmationModal(int32_t EntryPoint); // Function ConfirmationModal.ConfirmationModal_C.ExecuteUbergraph_ConfirmationModal // (Final|UbergraphFunction) // @ game+0x4317a70
};

