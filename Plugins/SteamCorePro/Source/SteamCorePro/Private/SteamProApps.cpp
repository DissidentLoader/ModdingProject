#include "SteamProApps.h"

USteamProApps::USteamProApps() {
}

void USteamProApps::UninstallDLC(int32 AppID) {
}

bool USteamProApps::MarkContentCorrupt(bool bMissingFilesOnly) {
    return false;
}

void USteamProApps::InstallDLC(int32 AppID) {
}

USteamProApps* USteamProApps::GetSteamApps() {
    return NULL;
}

FString USteamProApps::GetLaunchQueryParam(const FString& Key) {
    return TEXT("");
}

int32 USteamProApps::GetLaunchCommandLine(FString& CommandLine) {
    return 0;
}

int32 USteamProApps::GetInstalledDepots(int32 AppID, int32 MaxDepots, TArray<int32>& Depots) {
    return 0;
}

void USteamProApps::GetFileDetails(const FOnFileDetailsResult& Callback, const FString& Filename) {
}

int32 USteamProApps::GetEarliestPurchaseUnixTime(int32 AppID) {
    return 0;
}

bool USteamProApps::GetDlcDownloadProgress(int32 AppID, int32& BytesDownloaded, int32& BytesTotal) {
    return false;
}

int32 USteamProApps::GetDLCCount() {
    return 0;
}

FString USteamProApps::GetCurrentGameLanguage() {
    return TEXT("");
}

bool USteamProApps::GetCurrentBetaName(FString& Name) {
    return false;
}

FString USteamProApps::GetAvailableGameLanguages() {
    return TEXT("");
}

FSteamID USteamProApps::GetAppOwner() {
    return FSteamID{};
}

int32 USteamProApps::GetAppInstallDir(int32 AppID, FString& Folder) {
    return 0;
}

int32 USteamProApps::GetAppBuildId() {
    return 0;
}

bool USteamProApps::BIsVACBanned() {
    return false;
}

bool USteamProApps::BIsTimedTrial(int32& SecondsAllowed, int32& SecondsPlayed) {
    return false;
}

bool USteamProApps::BIsSubscribedFromFreeWeekend() {
    return false;
}

bool USteamProApps::BIsSubscribedFromFamilySharing() {
    return false;
}

bool USteamProApps::BIsSubscribedApp(int32 AppID) {
    return false;
}

bool USteamProApps::BIsSubscribed() {
    return false;
}

bool USteamProApps::BIsLowViolence() {
    return false;
}

bool USteamProApps::BIsDlcInstalled(int32 AppID) {
    return false;
}

bool USteamProApps::BIsCybercafe() {
    return false;
}

bool USteamProApps::BIsAppInstalled(int32 AppID) {
    return false;
}

bool USteamProApps::BGetDLCDataByIndex(int32 DLC, int32& AppID, bool& bAvailable, FString& Name) {
    return false;
}


