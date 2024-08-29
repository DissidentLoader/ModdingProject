#pragma once
#include "CoreMinimal.h"
#include "FriendsGetFollowerCount.h"
#include "OnGetFollowerCountAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreProFriendsAsyncActionGetFollowerCount.generated.h"

class UObject;
class USteamCoreProFriendsAsyncActionGetFollowerCount;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProFriendsAsyncActionGetFollowerCount : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetFollowerCountAsyncDelegate OnCallback;
    
    USteamCoreProFriendsAsyncActionGetFollowerCount();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FFriendsGetFollowerCount& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProFriendsAsyncActionGetFollowerCount* GetFollowerCountAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout);
    
};

