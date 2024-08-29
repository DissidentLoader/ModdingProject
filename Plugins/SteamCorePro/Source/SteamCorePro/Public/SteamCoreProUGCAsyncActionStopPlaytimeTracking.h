#pragma once
#include "CoreMinimal.h"
#include "OnStopPlaytimeTrackingAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreProAsyncAction.h"
#include "StopPlaytimeTrackingResult.h"
#include "SteamCoreProUGCAsyncActionStopPlaytimeTracking.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionStopPlaytimeTracking;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionStopPlaytimeTracking : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStopPlaytimeTrackingAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionStopPlaytimeTracking();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionStopPlaytimeTracking* StopPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);
    
};

