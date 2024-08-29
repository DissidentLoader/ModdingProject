#include "SteamProGameServerStats.h"

USteamProGameServerStats::USteamProGameServerStats() {
}

bool USteamProGameServerStats::UpdateUserAvgRateStat(FSteamID SteamIDUser, const FString& Name, float CountThisSession, float SessionLength) {
    return false;
}

bool USteamProGameServerStats::SetUserStatInt(FSteamID SteamIDUser, const FString& Name, int32 Data) {
    return false;
}

bool USteamProGameServerStats::SetUserStatFloat(FSteamID SteamIDUser, const FString& Name, float Data) {
    return false;
}

bool USteamProGameServerStats::SetUserAchievement(FSteamID SteamIDUser, const FString& Name) {
    return false;
}

void USteamProGameServerStats::ServerStoreUserStats(const FOnServerStoreUserStats& Callback, FSteamID SteamIDUser) {
}

void USteamProGameServerStats::ServerRequestUserStats(const FOnServerRequestUserStats& Callback, FSteamID SteamIDUser) {
}

bool USteamProGameServerStats::GetUserStatInt(FSteamID SteamIDUser, const FString& Name, int32& Data) {
    return false;
}

bool USteamProGameServerStats::GetUserStatFloat(FSteamID SteamIDUser, const FString& Name, float& Data) {
    return false;
}

bool USteamProGameServerStats::GetUserAchievement(FSteamID SteamIDUser, const FString& Name, bool& bAchieved) {
    return false;
}

USteamProGameServerStats* USteamProGameServerStats::GetSteamGameServerStats() {
    return NULL;
}

bool USteamProGameServerStats::ClearUserAchievement(FSteamID SteamIDUser, const FString& Name) {
    return false;
}


