#pragma once
#include "CoreMinimal.h"
#include "CreateLobbyData.h"
#include "ESteamLobbyType.h"
#include "OnCreateLobbyAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProMatchmakingAsyncActionCreateLobby.generated.h"

class UObject;
class USteamCoreProMatchmakingAsyncActionCreateLobby;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProMatchmakingAsyncActionCreateLobby : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreateLobbyAsyncDelegate OnCallback;
    
    USteamCoreProMatchmakingAsyncActionCreateLobby();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FCreateLobbyData& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProMatchmakingAsyncActionCreateLobby* CreateLobbyAsync(UObject* WorldContextObject, ESteamLobbyType LobbyType, int32 MaxMembers, float Timeout);
    
};

