#pragma once
#include "CoreMinimal.h"
#include "OnGetOPFSettingsResultDelegate.h"
#include "OnGetVideoURLResultDelegate.h"
#include "SteamCoreInterface.h"
#include "SteamProVideo.generated.h"

class USteamProVideo;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamProVideo : public USteamCoreInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetOPFSettingsResult GetOPFSettingsResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetVideoURLResult GetVideoURLResult;
    
    USteamProVideo();

    UFUNCTION(BlueprintCallable)
    static bool IsBroadcasting(int32& NumViewers);
    
    UFUNCTION(BlueprintCallable)
    static void GetVideoURL(int32 VideoAppID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USteamProVideo* GetSteamVideo();
    
    UFUNCTION(BlueprintCallable)
    static bool GetOPFStringForApp(int32 VideoAppID, FString& OutBuffer);
    
    UFUNCTION(BlueprintCallable)
    static void GetOPFSettings(int32 VideoAppID);
    
};

