#include "SteamProUtils.h"

USteamProUtils::USteamProUtils() {
}

void USteamProUtils::StartVRDashboard() {
}

bool USteamProUtils::ShowGamepadTextInput(ESteamGamepadTextInputMode InputMode, ESteamGamepadTextInputLineMode LineInputMode, const FString& Description, int32 CharMax, const FString& ExistingText) {
    return false;
}

bool USteamProUtils::ShowFloatingGamepadTextInput(ESteamFloatingGamepadTextInputMode KeyboardMode, int32 TextFieldXPosition, int32 TextFieldYPosition, int32 TextFieldWidth, int32 TextFieldHeight) {
    return false;
}

void USteamProUtils::SetVRHeadsetStreamingEnabled(bool bEnabled) {
}

void USteamProUtils::SetOverlayNotificationPosition(ESteamNotificationPosition NotificationPosition) {
}

void USteamProUtils::SetOverlayNotificationInset(int32 HorizontalInset, int32 VerticalInset) {
}

void USteamProUtils::SetGameLauncherMode(bool bLauncherMode) {
}

bool USteamProUtils::IsVRHeadsetStreamingEnabled() {
    return false;
}

bool USteamProUtils::IsSteamRunningOnSteamDeck() {
    return false;
}

bool USteamProUtils::IsSteamRunningInVR() {
    return false;
}

bool USteamProUtils::IsSteamInBigPictureMode() {
    return false;
}

bool USteamProUtils::IsSteamChinaLauncher() {
    return false;
}

bool USteamProUtils::IsOverlayEnabled() {
    return false;
}

bool USteamProUtils::InitFilterText() {
    return false;
}

USteamProUtils* USteamProUtils::GetSteamUtils() {
    return NULL;
}

FString USteamProUtils::GetSteamUILanguage() {
    return TEXT("");
}

int32 USteamProUtils::GetServerRealTime() {
    return 0;
}

int32 USteamProUtils::GetSecondsSinceComputerActive() {
    return 0;
}

int32 USteamProUtils::GetSecondsSinceAppActive() {
    return 0;
}

ESteamCoreIPv6ConnectivityState USteamProUtils::GetIPv6ConnectivityState(ESteamCoreIPv6ConnectivityProtocol Protocol) {
    return ESteamCoreIPv6ConnectivityState::k_ESteamIPv6ConnectivityState_Unknown;
}

FString USteamProUtils::GetIPCountry() {
    return TEXT("");
}

int32 USteamProUtils::GetIPCCallCount() {
    return 0;
}

bool USteamProUtils::GetImageSize(int32 iImage, int32& Width, int32& Height) {
    return false;
}

bool USteamProUtils::GetImageRGBA(int32 iImage, TArray<uint8>& OutBuffer) {
    return false;
}

int32 USteamProUtils::GetEnteredGamepadTextLength() {
    return 0;
}

bool USteamProUtils::GetEnteredGamepadTextInput(FString& Text) {
    return false;
}

int32 USteamProUtils::GetCurrentBatteryPower() {
    return 0;
}

ESteamUniverse USteamProUtils::GetConnectedUniverse() {
    return ESteamUniverse::Invalid;
}

int32 USteamProUtils::GetAppID_Pure() {
    return 0;
}

int32 USteamProUtils::GetAppID() {
    return 0;
}

int32 USteamProUtils::FilterText(ESteamTextFilteringContext Context, FSteamID SourceSteamID, const FString& InputMessage, FString& OutFilteredText) {
    return 0;
}

bool USteamProUtils::DismissGamepadTextInput() {
    return false;
}

bool USteamProUtils::DismissFloatingGamepadTextInput() {
    return false;
}

bool USteamProUtils::BOverlayNeedsPresent() {
    return false;
}


