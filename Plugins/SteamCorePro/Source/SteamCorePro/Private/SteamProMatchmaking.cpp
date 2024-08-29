#include "SteamProMatchmaking.h"

USteamProMatchmaking::USteamProMatchmaking() {
}

bool USteamProMatchmaking::SetLobbyType(FSteamID SteamIDLobby, ESteamLobbyType LobbyType) {
    return false;
}

bool USteamProMatchmaking::SetLobbyOwner(FSteamID SteamIDLobby, FSteamID SteamIDNewOwner) {
    return false;
}

bool USteamProMatchmaking::SetLobbyMemberLimit(FSteamID SteamIDLobby, int32 MaxMembers) {
    return false;
}

void USteamProMatchmaking::SetLobbyMemberData(FSteamID SteamIDLobby, const FString& Key, const FString& Value) {
}

bool USteamProMatchmaking::SetLobbyJoinable(FSteamID SteamIDLobby, bool bLobbyJoinable) {
    return false;
}

void USteamProMatchmaking::SetLobbyGameServer(FSteamID SteamIDLobby, const FString& GameServerIP, int32 GameServerPort, FSteamID SteamIDGameServer) {
}

bool USteamProMatchmaking::SetLobbyData(FSteamID SteamIDLobby, const FString& Key, const FString& Value) {
    return false;
}

bool USteamProMatchmaking::SetLinkedLobby(FSteamID SteamIDLobby, FSteamID SteamIDLobbyDependent) {
    return false;
}

bool USteamProMatchmaking::SendLobbyChatMsg(FSteamID SteamIDLobby, const FString& Message) {
    return false;
}

void USteamProMatchmaking::RequestLobbyList(const FOnRequestLobbyList& Callback) {
}

bool USteamProMatchmaking::RequestLobbyData(FSteamID SteamIDLobby) {
    return false;
}

bool USteamProMatchmaking::RemoveFavoriteGame(int32 AppID, const FString& IP, int32 ConnectionPort, int32 QueryPort, TArray<ESteamFavoriteFlags> Flags) {
    return false;
}

void USteamProMatchmaking::LeaveLobby(FSteamID SteamIDLobby) {
}

void USteamProMatchmaking::JoinLobby(const FOnJoinLobby& Callback, FSteamID SteamIDLobby) {
}

bool USteamProMatchmaking::InviteUserToLobby(FSteamID SteamIDLobby, FSteamID SteamIDInvitee) {
    return false;
}

USteamProMatchmaking* USteamProMatchmaking::GetSteamMatchmaking() {
    return NULL;
}

int32 USteamProMatchmaking::GetNumLobbyMembers(FSteamID SteamIDLobby) {
    return 0;
}

FSteamID USteamProMatchmaking::GetLobbyOwner(FSteamID SteamIDLobby) {
    return FSteamID{};
}

int32 USteamProMatchmaking::GetLobbyMemberLimit(FSteamID SteamIDLobby) {
    return 0;
}

FString USteamProMatchmaking::GetLobbyMemberData(FSteamID SteamIDLobby, FSteamID SteamIDUser, const FString& Key) {
    return TEXT("");
}

FSteamID USteamProMatchmaking::GetLobbyMemberByIndex(FSteamID SteamIDLobby, int32 Member) {
    return FSteamID{};
}

bool USteamProMatchmaking::GetLobbyGameServer(FSteamID SteamIDLobby, FString& GameServerIP, int32& GameServerPort, FSteamID& SteamIDGameServer) {
    return false;
}

int32 USteamProMatchmaking::GetLobbyDataCount(FSteamID SteamIDLobby) {
    return 0;
}

bool USteamProMatchmaking::GetLobbyDataByIndex(FSteamID SteamIDLobby, int32 LobbyData, FString& Key, FString& Value) {
    return false;
}

FString USteamProMatchmaking::GetLobbyData(FSteamID SteamIDLobby, const FString& Key) {
    return TEXT("");
}

int32 USteamProMatchmaking::GetLobbyChatEntry(FSteamID SteamIDLobby, int32 MessageID, FSteamID& SteamIDUser, FString& Message, ESteamChatEntryType& ChatEntryType) {
    return 0;
}

FSteamID USteamProMatchmaking::GetLobbyByIndex(int32 Lobby) {
    return FSteamID{};
}

int32 USteamProMatchmaking::GetFavoriteGameCount() {
    return 0;
}

bool USteamProMatchmaking::GetFavoriteGame(int32 Game, int32& AppID, FString& IP, int32& ConnectionPort, int32& QueryPort, TArray<ESteamFavoriteFlags>& Flags, int32& TimeLastPlayedOnServer) {
    return false;
}

bool USteamProMatchmaking::DeleteLobbyData(FSteamID SteamIDLobby, const FString& Key) {
    return false;
}

void USteamProMatchmaking::CreateLobby(const FOnCreateLobby& Callback, ESteamLobbyType LobbyType, int32 MaxMembers) {
}

void USteamProMatchmaking::AddRequestLobbyListStringFilter(const FString& KeyToMatch, const FString& ValueToMatch, ESteamLobbyComparison ComparisonType) {
}

void USteamProMatchmaking::AddRequestLobbyListResultCountFilter(int32 MaxResults) {
}

void USteamProMatchmaking::AddRequestLobbyListNumericalFilter(const FString& KeyToMatch, int32 ValueToMatch, ESteamLobbyComparison ComparisonType) {
}

void USteamProMatchmaking::AddRequestLobbyListNearValueFilter(const FString& KeyToMatch, int32 ValueToBeCloseTo) {
}

void USteamProMatchmaking::AddRequestLobbyListFilterSlotsAvailable(int32 SlotsAvailable) {
}

void USteamProMatchmaking::AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter LobbyDistanceFilter) {
}

void USteamProMatchmaking::AddRequestLobbyListCompatibleMembersFilter(FSteamID SteamIDLobby) {
}

int32 USteamProMatchmaking::AddFavoriteGame(int32 AppID, const FString& IP, int32 ConnectionPort, int32 QueryPort, TArray<ESteamFavoriteFlags> Flags, int32 TimeLastPlayedOnServer) {
    return 0;
}


