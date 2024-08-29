#pragma once
#include "CoreMinimal.h"
#include "FriendsIsFollowing.h"
#include "OnIsFollowingAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreProFriendsAsyncActionIsFollowing.generated.h"

class UObject;
class USteamCoreProFriendsAsyncActionIsFollowing;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProFriendsAsyncActionIsFollowing : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsFollowingAsyncDelegate OnCallback;
    
    USteamCoreProFriendsAsyncActionIsFollowing();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProFriendsAsyncActionIsFollowing* IsFollowingAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FFriendsIsFollowing& Data, bool bWasSuccessful);
    
};

