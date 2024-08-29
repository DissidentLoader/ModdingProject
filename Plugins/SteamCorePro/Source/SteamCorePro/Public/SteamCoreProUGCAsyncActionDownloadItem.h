#pragma once
#include "CoreMinimal.h"
#include "DownloadItemResult.h"
#include "OnDownloadItemResultDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUGCAsyncActionDownloadItem.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionDownloadItem;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionDownloadItem : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadItemResultDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionDownloadItem();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FDownloadItemResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionDownloadItem* DownloadItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bHighPriority, float Timeout);
    
};

