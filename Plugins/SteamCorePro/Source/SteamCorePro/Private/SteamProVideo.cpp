#include "SteamProVideo.h"

USteamProVideo::USteamProVideo() {
}

bool USteamProVideo::IsBroadcasting(int32& NumViewers) {
    return false;
}

void USteamProVideo::GetVideoURL(int32 VideoAppID) {
}

USteamProVideo* USteamProVideo::GetSteamVideo() {
    return NULL;
}

bool USteamProVideo::GetOPFStringForApp(int32 VideoAppID, FString& OutBuffer) {
    return false;
}

void USteamProVideo::GetOPFSettings(int32 VideoAppID) {
}


