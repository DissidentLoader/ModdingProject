#pragma once
#include "CoreMinimal.h"
#include "GameServerItem.h"
#include "OnPingServerAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProMatchmakingServersAsyncActionPingServer.generated.h"

class UObject;
class USteamCoreProMatchmakingServersAsyncActionPingServer;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProMatchmakingServersAsyncActionPingServer : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPingServerAsyncDelegate OnCallback;
    
    USteamCoreProMatchmakingServersAsyncActionPingServer();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProMatchmakingServersAsyncActionPingServer* PingServerAsync(UObject* WorldContextObject, const FString& IP, int32 Port, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FGameServerItem& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CancelPingQueries(UObject* WorldContextObject);
    
};

