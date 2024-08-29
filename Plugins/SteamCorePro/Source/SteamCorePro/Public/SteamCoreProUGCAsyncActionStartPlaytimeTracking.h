#pragma once
#include "CoreMinimal.h"
#include "OnStartPlaytimeTrackingAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "StartPlaytimeTrackingResult.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUGCAsyncActionStartPlaytimeTracking.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionStartPlaytimeTracking;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionStartPlaytimeTracking : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartPlaytimeTrackingAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionStartPlaytimeTracking();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionStartPlaytimeTracking* StartPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FStartPlaytimeTrackingResult& Data, bool bWasSuccessful);
    
};

