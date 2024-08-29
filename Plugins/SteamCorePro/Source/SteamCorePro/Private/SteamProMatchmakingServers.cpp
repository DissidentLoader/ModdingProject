#include "SteamProMatchmakingServers.h"

USteamProMatchmakingServers::USteamProMatchmakingServers() {
}

void USteamProMatchmakingServers::ServerRules(const FOnServerRules& Callback, const FString& IP, int32 QueryPort) {
}

void USteamProMatchmakingServers::RequestSpectatorServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) {
}

void USteamProMatchmakingServers::RequestLANServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) {
}

void USteamProMatchmakingServers::RequestInternetServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) {
}

void USteamProMatchmakingServers::RequestHistoryServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) {
}

void USteamProMatchmakingServers::RequestFriendsServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) {
}

void USteamProMatchmakingServers::RequestFavoritesServerList(const FOnServerUpdated& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, UServerFilter* ServerFilter) {
}

void USteamProMatchmakingServers::PingServer(const FOnServerPing& Callback, const FString& IP, int32 QueryPort) {
}

USteamProMatchmakingServers* USteamProMatchmakingServers::GetSteamMatchmakingServers() {
    return NULL;
}


