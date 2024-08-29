#pragma once
#include "CoreMinimal.h"
#include "OnServerPingDelegate.h"
#include "OnServerRulesDelegate.h"
#include "OnServerUpdatedDelegate.h"
#include "SteamCoreInterface.h"
#include "SteamProMatchmakingServers.generated.h"

class UServerFilter;
class USteamProMatchmakingServers;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamProMatchmakingServers : public USteamCoreInterface {
    GENERATED_BODY()
public:
    USteamProMatchmakingServers();

    UFUNCTION(BlueprintCallable)
    void ServerRules(const FOnServerRules& Callback, const FString& IP, int32 QueryPort);
    
    UFUNCTION(BlueprintCallable)
    void RequestSpectatorServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    void RequestLANServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    void RequestInternetServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    void RequestHistoryServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    void RequestFriendsServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    void RequestFavoritesServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter);
    
    UFUNCTION(BlueprintCallable)
    void PingServer(const FOnServerPing& Callback, const FString& IP, int32 QueryPort);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USteamProMatchmakingServers* GetSteamMatchmakingServers();
    
};

