#include "SteamProGameServer.h"

USteamProGameServer::USteamProGameServer() {
}

bool USteamProGameServer::WasRestartRequested() {
    return false;
}

ESteamUserHasLicenseForAppResult USteamProGameServer::UserHasLicenseForApp(FSteamID SteamID, int32 AppID) {
    return ESteamUserHasLicenseForAppResult::HasLicense;
}

void USteamProGameServer::SetSpectatorServerName(const FString& SpectatorServerName) {
}

void USteamProGameServer::SetSpectatorPort(int32 SpectatorPort) {
}

void USteamProGameServer::SetServerName(const FString& ServerName) {
}

void USteamProGameServer::SetRegion(const FString& Region) {
}

void USteamProGameServer::SetProduct(const FString& Product) {
}

void USteamProGameServer::SetPasswordProtected(bool bPasswordProtected) {
}

void USteamProGameServer::SetModDir(const FString& ModDir) {
}

void USteamProGameServer::SetMaxPlayerCount(int32 PlayersMax) {
}

void USteamProGameServer::SetMapName(const FString& MapName) {
}

void USteamProGameServer::SetKeyValue(const FString& Key, const FString& Value) {
}

void USteamProGameServer::SetGameTags(const FString& GameTags) {
}

void USteamProGameServer::SetGameDescription(const FString& GameDescription) {
}

void USteamProGameServer::SetGameData(const FString& GameData) {
}

void USteamProGameServer::SetDedicatedServer(bool bDedicated) {
}

void USteamProGameServer::SetBotPlayerCount(int32 BotPlayers) {
}

void USteamProGameServer::SetAdvertiseServerActive(bool bActive) {
}

bool USteamProGameServer::RequestUserGroupStatus(FSteamID SteamIDUser, FSteamID SteamIDGroup) {
    return false;
}

void USteamProGameServer::LogOnAnonymous() {
}

void USteamProGameServer::LogOn(const FString& Token) {
}

void USteamProGameServer::LogOff() {
}

USteamProGameServer* USteamProGameServer::GetSteamGameServer() {
    return NULL;
}

FSteamID USteamProGameServer::GetServerSteamID_PureCompact() {
    return FSteamID{};
}

FSteamID USteamProGameServer::GetServerSteamID_Pure() {
    return FSteamID{};
}

FSteamID USteamProGameServer::GetServerSteamID() {
    return FSteamID{};
}

FString USteamProGameServer::GetServerPublicIP_PureCompact() {
    return TEXT("");
}

FString USteamProGameServer::GetServerPublicIP_Pure() {
    return TEXT("");
}

FString USteamProGameServer::GetServerPublicIP() {
    return TEXT("");
}

FSteamTicketHandle USteamProGameServer::GetAuthSessionTicket(TArray<uint8>& Ticket, FSteamNetworkingIdentity SteamNetworkingIdentity) {
    return FSteamTicketHandle{};
}

void USteamProGameServer::EndAuthSession(FSteamID SteamID) {
}

FSteamID USteamProGameServer::CreateUnauthenticatedUserConnection() {
    return FSteamID{};
}

void USteamProGameServer::ComputeNewPlayerCompatibility(const FOnComputeNewPlayerCompatibility& Callback, FSteamID SteamIDNewPlayer) {
}

void USteamProGameServer::ClearAllKeyValues() {
}

void USteamProGameServer::CancelAuthTicket(FSteamTicketHandle TicketHandle) {
}

bool USteamProGameServer::BUpdateUserData(FSteamID SteamIDUser, const FString& PlayerName, int32 Score) {
    return false;
}

bool USteamProGameServer::BSecure() {
    return false;
}

bool USteamProGameServer::BLoggedOn() {
    return false;
}

ESteamBeginAuthSessionResult USteamProGameServer::BeginAuthSession(TArray<uint8> Ticket, FSteamID SteamID) {
    return ESteamBeginAuthSessionResult::OK;
}

void USteamProGameServer::AssociateWithClan(const FOnAssociateWithClan& Callback, FSteamID SteamIDClan) {
}


