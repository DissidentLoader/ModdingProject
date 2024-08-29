#include "SteamProRemotePlay.h"

USteamProRemotePlay::USteamProRemotePlay() {
}

USteamProRemotePlay* USteamProRemotePlay::GetSteamRemotePlay() {
    return NULL;
}

FSteamID USteamProRemotePlay::GetSessionSteamID(int32 SessionID) {
    return FSteamID{};
}

int32 USteamProRemotePlay::GetSessionID(int32 SessionIndex) {
    return 0;
}

int32 USteamProRemotePlay::GetSessionCount() {
    return 0;
}

FString USteamProRemotePlay::GetSessionClientName(int32 SessionID) {
    return TEXT("");
}

ESteamCoreProDeviceFormFactor USteamProRemotePlay::GetSessionClientFormFactor(int32 SessionID) {
    return ESteamCoreProDeviceFormFactor::Unknown;
}

bool USteamProRemotePlay::BStartRemotePlayTogether(bool bShowOverlay) {
    return false;
}

bool USteamProRemotePlay::BSendRemotePlayTogetherInvite(FSteamID SteamIDFriend) {
    return false;
}

bool USteamProRemotePlay::BGetSessionClientResolution(int32 SessionID, int32& ResolutionX, int32& ResolutionY) {
    return false;
}


