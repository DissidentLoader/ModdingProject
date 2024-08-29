#pragma once
#include "CoreMinimal.h"
#include "JoinLobbyData.h"
#include "OnJoinLobbyAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreProMatchmakingAsyncActionJoinLobby.generated.h"

class UObject;
class USteamCoreProMatchmakingAsyncActionJoinLobby;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProMatchmakingAsyncActionJoinLobby : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinLobbyAsyncDelegate OnCallback;
    
    USteamCoreProMatchmakingAsyncActionJoinLobby();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProMatchmakingAsyncActionJoinLobby* JoinLobbyAsync(UObject* WorldContextObject, FSteamID SteamIDLobby, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FJoinLobbyData& Data, bool bWasSuccessful);
    
};

