#pragma once
#include "CoreMinimal.h"
#include "ClanOfficerListResponse.h"
#include "OnRequestClanOfficerListAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreProFriendsAsyncActionRequestClanOfficerList.generated.h"

class UObject;
class USteamCoreProFriendsAsyncActionRequestClanOfficerList;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProFriendsAsyncActionRequestClanOfficerList : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestClanOfficerListAsyncDelegate OnCallback;
    
    USteamCoreProFriendsAsyncActionRequestClanOfficerList();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProFriendsAsyncActionRequestClanOfficerList* RequestClanOfficerListAsync(UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FClanOfficerListResponse& Data, bool bWasSuccessful);
    
};

