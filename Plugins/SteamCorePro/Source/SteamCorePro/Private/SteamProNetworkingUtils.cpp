#include "SteamProNetworkingUtils.h"

USteamProNetworkingUtils::USteamProNetworkingUtils() {
}

bool USteamProNetworkingUtils::ParsePingLocationString(const FString& String, FSteamNetworkPingLocation& Result) {
    return false;
}

void USteamProNetworkingUtils::InitRelayNetworkAccess() {
}

USteamProNetworkingUtils* USteamProNetworkingUtils::GetSteamNetworkingUtils() {
    return NULL;
}

float USteamProNetworkingUtils::GetLocalPingLocation(FSteamNetworkPingLocation& Result) {
    return 0.0f;
}

int32 USteamProNetworkingUtils::EstimatePingTimeFromLocalHost(const FSteamNetworkPingLocation& RemoteLocation) {
    return 0;
}

int32 USteamProNetworkingUtils::EstimatePingTimeBetweenTwoLocations(const FSteamNetworkPingLocation& Location1, const FSteamNetworkPingLocation& Location2) {
    return 0;
}

void USteamProNetworkingUtils::ConvertPingLocationToString(const FSteamNetworkPingLocation& Location, FString& String) {
}

bool USteamProNetworkingUtils::CheckPingDataUpToDate(float MaxAgeSeconds) {
    return false;
}


