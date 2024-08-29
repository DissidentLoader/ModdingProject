#include "SteamProParentalSettings.h"

USteamProParentalSettings::USteamProParentalSettings() {
}

USteamProParentalSettings* USteamProParentalSettings::GetSteamParentalSettings() {
    return NULL;
}

bool USteamProParentalSettings::BIsParentalLockLocked() {
    return false;
}

bool USteamProParentalSettings::BIsParentalLockEnabled() {
    return false;
}

bool USteamProParentalSettings::BIsFeatureInBlockList(ESteamParentalFeature Feature) {
    return false;
}

bool USteamProParentalSettings::BIsFeatureBlocked(ESteamParentalFeature Feature) {
    return false;
}

bool USteamProParentalSettings::BIsAppInBlockList(int32 AppID) {
    return false;
}

bool USteamProParentalSettings::BIsAppBlocked(int32 AppID) {
    return false;
}


