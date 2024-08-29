#pragma once
#include "CoreMinimal.h"
#include "LobbyMatchList.h"
#include "OnRequestLobbyListAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProMatchmakingAsyncActionRequestLobbyList.generated.h"

class UObject;
class USteamCoreProMatchmakingAsyncActionRequestLobbyList;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProMatchmakingAsyncActionRequestLobbyList : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestLobbyListAsyncDelegate OnCallback;
    
    USteamCoreProMatchmakingAsyncActionRequestLobbyList();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProMatchmakingAsyncActionRequestLobbyList* RequestLobbyListAsync(UObject* WorldContextObject, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FLobbyMatchList& Data, bool bWasSuccessful);
    
};

