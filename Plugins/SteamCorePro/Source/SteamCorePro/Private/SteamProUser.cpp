#include "SteamProUser.h"

USteamProUser::USteamProUser() {
}

ESteamUserHasLicenseForAppResult USteamProUser::UserHasLicenseForApp(FSteamID SteamID, int32 AppID) {
    return ESteamUserHasLicenseForAppResult::HasLicense;
}

void USteamProUser::StopVoiceRecording() {
}

void USteamProUser::StartVoiceRecording() {
}

void USteamProUser::RequestStoreAuthURL(const FOnStoreAuthURLResponse& Callback, const FString& RedirectURL) {
}

void USteamProUser::RequestEncryptedAppTicket(const FOnRequestEncryptedAppTicket& Callback, TArray<uint8> DataToInclude) {
}

int32 USteamProUser::GetVoiceOptimalSampleRate() {
    return 0;
}

ESteamVoiceResult USteamProUser::GetVoice(TArray<uint8>& DestBuffer, int32& BytesWritten) {
    return ESteamVoiceResult::OK;
}

USteamProUser* USteamProUser::GetSteamUser() {
    return NULL;
}

FString USteamProUser::GetSteamIDAsString() {
    return TEXT("");
}

FSteamID USteamProUser::GetSteamID_Pure() {
    return FSteamID{};
}

FSteamID USteamProUser::GetSteamID() {
    return FSteamID{};
}

int32 USteamProUser::GetPlayerSteamLevel() {
    return 0;
}

int32 USteamProUser::GetGameBadgeLevel(int32 Series, bool bFoil) {
    return 0;
}

bool USteamProUser::GetEncryptedAppTicket(TArray<uint8>& Ticket) {
    return false;
}

ESteamVoiceResult USteamProUser::GetAvailableVoice(int32& CompressedBytes, int32& UncompressedBytes, int32 UncompressedVoiceDesiredSampleRate) {
    return ESteamVoiceResult::OK;
}

FSteamTicketHandle USteamProUser::GetAuthTicketForWebApi(const FString& Identity) {
    return FSteamTicketHandle{};
}

FSteamTicketHandle USteamProUser::GetAuthSessionTicket(TArray<uint8>& Ticket, FSteamNetworkingIdentity SteamNetworkingIdentity) {
    return FSteamTicketHandle{};
}

void USteamProUser::EndAuthSession(FSteamID SteamID) {
}

ESteamVoiceResult USteamProUser::DecompressVoice(const TArray<uint8>& CompressedBuffer, int32 DesiredSampleRate, TArray<uint8>& DestBuffer) {
    return ESteamVoiceResult::OK;
}

void USteamProUser::CancelAuthTicket(FSteamTicketHandle TicketHandle) {
}

bool USteamProUser::BLoggedOn() {
    return false;
}

bool USteamProUser::BIsTwoFactorEnabled() {
    return false;
}

bool USteamProUser::BIsPhoneVerified() {
    return false;
}

bool USteamProUser::BIsPhoneRequiringVerification() {
    return false;
}

bool USteamProUser::BIsPhoneIdentifying() {
    return false;
}

bool USteamProUser::BIsBehindNAT() {
    return false;
}

ESteamBeginAuthSessionResult USteamProUser::BeginAuthSession(TArray<uint8> Ticket, FSteamID SteamID) {
    return ESteamBeginAuthSessionResult::OK;
}

void USteamProUser::AdvertiseGame(FSteamID SteamIDGameServer, const FString& ServerIP, int32 ServerPort) {
}


