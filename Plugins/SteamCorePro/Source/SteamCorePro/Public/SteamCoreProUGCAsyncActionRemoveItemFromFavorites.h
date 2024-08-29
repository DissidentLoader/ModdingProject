#pragma once
#include "CoreMinimal.h"
#include "OnRemoveItemFromFavoritesAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreProAsyncAction.h"
#include "UserFavoriteItemsListChanged.h"
#include "SteamCoreProUGCAsyncActionRemoveItemFromFavorites.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionRemoveItemFromFavorites;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionRemoveItemFromFavorites : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveItemFromFavoritesAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionRemoveItemFromFavorites();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionRemoveItemFromFavorites* RemoveItemFromFavoritesAsync(UObject* WorldContextObject, int32 AppID, FPublishedFileID PublishedFileID, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);
    
};

