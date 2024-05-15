// Class RGIJiraSubmitter.RGIJiraSubmitterLibrary
// Size: 0x30 (Inherited: 0x30)
struct URGIJiraSubmitterLibrary : UBlueprintFunctionLibrary {

	void SubmitJiraIssueLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct FString& OutIssueId, struct FString& Summary, struct FString Type, struct FString Description, bool bIncludeScreenshot, bool bIncludeServerLog); // Function RGIJiraSubmitter.RGIJiraSubmitterLibrary.SubmitJiraIssueLatent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2c26d60
	void SubmitJiraIssue(struct UObject* WorldContextObject, struct FString& Summary, struct FString Type, struct FString Description, bool bIncludeScreenshot, bool bIncludeServerLog); // Function RGIJiraSubmitter.RGIJiraSubmitterLibrary.SubmitJiraIssue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2c26a80
};

// Class RGIJiraSubmitter.RGIJiraSubmitterSubsystem
// Size: 0x38 (Inherited: 0x38)
struct URGIJiraSubmitterSubsystem : UGameInstanceSubsystem {
};

