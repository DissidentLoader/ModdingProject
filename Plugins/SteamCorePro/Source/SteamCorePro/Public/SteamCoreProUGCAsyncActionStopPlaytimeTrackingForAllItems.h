#pragma once
#include "CoreMinimal.h"
#include "OnStopPlaytimeTrackingForAllItemsAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "StopPlaytimeTrackingResult.h"
#include "SteamCoreProUGCAsyncActionStopPlaytimeTrackingForAllItems.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionStopPlaytimeTrackingForAllItems;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionStopPlaytimeTrackingForAllItems : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStopPlaytimeTrackingForAllItemsAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionStopPlaytimeTrackingForAllItems();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItemsAsync(UObject* WorldContextObject, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);
    
};

