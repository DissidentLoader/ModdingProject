#pragma once
#include "CoreMinimal.h"
#include "ESteamVRScreenshotType.h"
#include "OnScreenshotReadyDelegate.h"
#include "OnScreenshotRequestedDelegate.h"
#include "PublishedFileID.h"
#include "ScreenshotHandle.h"
#include "SteamCoreInterface.h"
#include "SteamID.h"
#include "SteamProScreenshots.generated.h"

class USteamProScreenshots;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamProScreenshots : public USteamCoreInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScreenshotReady ScreenshotReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScreenshotRequested ScreenshotRequested;
    
    USteamProScreenshots();

    UFUNCTION(BlueprintCallable)
    static FScreenshotHandle WriteScreenshot(TArray<uint8> PubRGB, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    static void TriggerScreenshot();
    
    UFUNCTION(BlueprintCallable)
    static bool TagUser(FScreenshotHandle Handle, FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    static bool TagPublishedFile(FScreenshotHandle Handle, FPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    static bool SetLocation(FScreenshotHandle Handle, const FString& Location);
    
    UFUNCTION(BlueprintCallable)
    static bool IsScreenshotsHooked();
    
    UFUNCTION(BlueprintCallable)
    static void HookScreenshots(bool bHook);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USteamProScreenshots* GetSteamScreenshots();
    
    UFUNCTION(BlueprintCallable)
    static FScreenshotHandle AddVRScreenshotToLibrary(ESteamVRScreenshotType EType, const FString& Filename, const FString& VRFileName);
    
    UFUNCTION(BlueprintCallable)
    static FScreenshotHandle AddScreenshotToLibrary(const FString& Filename, const FString& ThumbnailFilename, int32 Width, int32 Height);
    
};

