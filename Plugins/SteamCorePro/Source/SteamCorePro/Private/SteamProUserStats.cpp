#include "SteamProUserStats.h"

USteamProUserStats::USteamProUserStats() {
}

void USteamProUserStats::UploadLeaderboardScore(const FOnUploadLeaderboardScore& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, TArray<int32> ScoreDetails) {
}

bool USteamProUserStats::UpdateAvgRateStat(const FString& Name, float CountThisSession, float SessionLength) {
    return false;
}

bool USteamProUserStats::StoreStats() {
    return false;
}

bool USteamProUserStats::SetStatInt(const FString& Name, int32 Data) {
    return false;
}

bool USteamProUserStats::SetStatFloat(const FString& Name, float Data) {
    return false;
}

bool USteamProUserStats::SetAchievement(const FString& Name) {
    return false;
}

bool USteamProUserStats::ResetAllStats(bool bAchievementsToo) {
    return false;
}

void USteamProUserStats::RequestUserStats(const FOnRequestUserStats& Callback, FSteamID SteamID) {
}

void USteamProUserStats::RequestGlobalStats(const FOnRequestGlobalStats& Callback, int32 HistoryDays) {
}

void USteamProUserStats::RequestGlobalAchievementPercentages(const FOnRequestGlobalAchievementPercentages& Callback) {
}

bool USteamProUserStats::RequestCurrentStats() {
    return false;
}

bool USteamProUserStats::IndicateAchievementProgress(const FString& Name, int32 CurrentProgress, int32 MaxProgress) {
    return false;
}

bool USteamProUserStats::GetUserStatInteger(FSteamID SteamIDUser, const FString& Name, int32& Data) {
    return false;
}

bool USteamProUserStats::GetUserStatFloat(FSteamID SteamIDUser, const FString& Name, float& Data) {
    return false;
}

bool USteamProUserStats::GetUserAchievementAndUnlockTime(FSteamID SteamIDUser, const FString& Name, bool& bAchieved, int32& UnlockTime) {
    return false;
}

bool USteamProUserStats::GetUserAchievement(FSteamID SteamIDUser, const FString& Name, bool& bAchieved) {
    return false;
}

USteamProUserStats* USteamProUserStats::GetSteamUserStats() {
    return NULL;
}

bool USteamProUserStats::GetStatInt(const FString& Name, int32& Data) {
    return false;
}

bool USteamProUserStats::GetStatFloat(const FString& Name, float& Data) {
    return false;
}

void USteamProUserStats::GetNumberOfCurrentPlayers(const FOnGetNumberOfCurrentPlayers& Callback) {
}

int32 USteamProUserStats::GetNumAchievements() {
    return 0;
}

int32 USteamProUserStats::GetNextMostAchievedAchievementInfo(int32 IteratorPrevious, FString& Name, float& Percent, bool& bAchieved) {
    return 0;
}

int32 USteamProUserStats::GetMostAchievedAchievementInfo(FString& Name, float& Percent, bool& bAchieved) {
    return 0;
}

ESteamLeaderboardSortMethod USteamProUserStats::GetLeaderboardSortMethod(FSteamLeaderboard SteamLeaderboard) {
    return ESteamLeaderboardSortMethod::None;
}

FString USteamProUserStats::GetLeaderboardName(FSteamLeaderboard SteamLeaderboard) {
    return TEXT("");
}

int32 USteamProUserStats::GetLeaderboardEntryCount(FSteamLeaderboard SteamLeaderboard) {
    return 0;
}

ESteamLeaderboardDisplayType USteamProUserStats::GetLeaderboardDisplayType(FSteamLeaderboard SteamLeaderboard) {
    return ESteamLeaderboardDisplayType::None;
}

bool USteamProUserStats::GetGlobalStatInt(const FString& StatName, int32& Data) {
    return false;
}

int32 USteamProUserStats::GetGlobalStatHistoryInt(const FString& StatName, int32 HistoryDays, TArray<int32>& Data) {
    return 0;
}

int32 USteamProUserStats::GetGlobalStatHistoryFloat(const FString& StatName, int32 HistoryDays, TArray<float>& Data) {
    return 0;
}

bool USteamProUserStats::GetGlobalStatFloat(const FString& StatName, float& Data) {
    return false;
}

bool USteamProUserStats::GetDownloadedLeaderboardEntry(FSteamLeaderboardEntries LeaderboardEntries, int32 Index, FSteamLeaderboardEntry& LeaderboardEntry, TArray<int32> Details, TArray<int32>& outDetails) {
    return false;
}

bool USteamProUserStats::GetAchievementProgressLimitsFloat(const FString& Name, float& MinProgress, float& MaxProgress) {
    return false;
}

bool USteamProUserStats::GetAchievementProgressLimits(const FString& Name, int32& MinProgress, int32& MaxProgress) {
    return false;
}

FString USteamProUserStats::GetAchievementName(int32 Achievement) {
    return TEXT("");
}

UTexture2D* USteamProUserStats::GetAchievementIcon(const FString& Name) {
    return NULL;
}

FString USteamProUserStats::GetAchievementDisplayAttribute(const FString& Name, const FString& Key) {
    return TEXT("");
}

bool USteamProUserStats::GetAchievementAndUnlockTime(const FString& Name, bool& bAchieved, int32& UnlockTime) {
    return false;
}

bool USteamProUserStats::GetAchievementAchievedPercent(const FString& Name, float& Percent) {
    return false;
}

bool USteamProUserStats::GetAchievement(const FString& Name, bool& bAchieved) {
    return false;
}

void USteamProUserStats::FindOrCreateLeaderboard(const FOnFindOrCreateLeaderboard& Callback, const FString& LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType) {
}

void USteamProUserStats::FindLeaderboard(const FOnFindLeaderboard& Callback, const FString& LeaderboardName) {
}

void USteamProUserStats::DownloadLeaderboardEntriesForUsers(const FOnDownloadLeaderboardEntriesForUsers& Callback, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users) {
}

void USteamProUserStats::DownloadLeaderboardEntries(const FOnDownloadLeaderboardEntries& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest DataRequest, int32 RangeStart, int32 RangeEnd) {
}

bool USteamProUserStats::ClearAchievement(const FString& Name) {
    return false;
}

void USteamProUserStats::AttachLeaderboardUGC(const FOnAttachLeaderboardUGC& Callback, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle) {
}


