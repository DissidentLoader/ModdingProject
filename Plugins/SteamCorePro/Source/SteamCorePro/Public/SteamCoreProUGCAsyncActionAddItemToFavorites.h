#pragma once
#include "CoreMinimal.h"
#include "OnAddItemToFavoritesAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreProAsyncAction.h"
#include "UserFavoriteItemsListChanged.h"
#include "SteamCoreProUGCAsyncActionAddItemToFavorites.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionAddItemToFavorites;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionAddItemToFavorites : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddItemToFavoritesAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionAddItemToFavorites();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionAddItemToFavorites* AddItemToFavoritesAsync(UObject* WorldContextObject, int32 AppID, FPublishedFileID PublishedFileID, float Timeout);
    
};

