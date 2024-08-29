#pragma once
#include "CoreMinimal.h"
#include "CreateItemResult.h"
#include "ESteamWorkshopFileType.h"
#include "OnCreateItemAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUGCAsyncActionCreateItem.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionCreateItem;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionCreateItem : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreateItemAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionCreateItem();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FCreateItemResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionCreateItem* CreateItemAsync(UObject* WorldContextObject, int32 ConsumerAppID, ESteamWorkshopFileType FileType, float Timeout);
    
};

