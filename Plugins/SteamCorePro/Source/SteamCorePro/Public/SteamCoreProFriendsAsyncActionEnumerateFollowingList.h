#pragma once
#include "CoreMinimal.h"
#include "FriendsEnumerateFollowingList.h"
#include "OnEnumerateFollowingListAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProFriendsAsyncActionEnumerateFollowingList.generated.h"

class UObject;
class USteamCoreProFriendsAsyncActionEnumerateFollowingList;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProFriendsAsyncActionEnumerateFollowingList : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnumerateFollowingListAsyncDelegate OnCallback;
    
    USteamCoreProFriendsAsyncActionEnumerateFollowingList();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FFriendsEnumerateFollowingList& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProFriendsAsyncActionEnumerateFollowingList* EnumerateFollowingListAsync(UObject* WorldContextObject, int32 StartIndex, float Timeout);
    
};

