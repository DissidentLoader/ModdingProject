#pragma once
#include "CoreMinimal.h"
#include "OnDeleteItemResultAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreProAsyncAction.h"
#include "UGCDeleteItemResult.h"
#include "SteamCoreProUGCAsyncActionDeleteItem.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionDeleteItem;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionDeleteItem : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeleteItemResultAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionDeleteItem();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FUGCDeleteItemResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionDeleteItem* DeleteItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout);
    
};

