#pragma once
#include "CoreMinimal.h"
#include "OnUnsubscribeItemAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "RemoteStorageSubscribePublishedFileResult.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUGCAsyncActionUnsubscribeItem.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionUnsubscribeItem;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionUnsubscribeItem : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnsubscribeItemAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionUnsubscribeItem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionUnsubscribeItem* UnsubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
    
};

