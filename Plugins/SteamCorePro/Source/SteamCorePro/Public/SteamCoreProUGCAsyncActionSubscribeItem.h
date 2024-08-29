#pragma once
#include "CoreMinimal.h"
#include "OnSubscribeItemAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "RemoteStorageSubscribePublishedFileResult.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUGCAsyncActionSubscribeItem.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionSubscribeItem;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionSubscribeItem : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubscribeItemAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionSubscribeItem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionSubscribeItem* SubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
    
};

