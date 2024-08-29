#include "SteamProGameSearch.h"

USteamProGameSearch::USteamProGameSearch() {
}

ESteamGameSearchErrorCode USteamProGameSearch::SubmitPlayerResult(const FString& UniqueGameID, FSteamID SteamIDPlayer, ESteamPlayerResult PlayerResult) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamProGameSearch::SetGameHostParams(const FString& Key, TArray<FString> Values) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamProGameSearch::SetConnectionDetails(const FString& ConnectionDetails) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamProGameSearch::SearchForGameWithLobby(FSteamID SteamIDLobby, int32 PlayerMin, int32 PlayerMax) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamProGameSearch::SearchForGameSolo(int32 PlayerMin, int32 PlayerMax) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamProGameSearch::RetrieveConnectionDetails(FSteamID SteamIDHost, FString& ConnectionDetails, int32 NumConnectionDetails) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamProGameSearch::RequestPlayersForGame(int32 PlayerMin, int32 PlayerMax, int32 MaxTeamSize) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamProGameSearch::HostConfirmGameStart(const FString& UniqueGameID) {
    return ESteamGameSearchErrorCode::Invalid;
}

USteamProGameSearch* USteamProGameSearch::GetSteamGameSearch() {
    return NULL;
}

ESteamGameSearchErrorCode USteamProGameSearch::EndGameSearch() {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamProGameSearch::EndGame(const FString& UniqueGameID) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamProGameSearch::DeclineGame() {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamProGameSearch::CancelRequestPlayersForGame() {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamProGameSearch::AddGameSearchParams(const FString& KeyToFind, TArray<FString> ValuesToFind) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamProGameSearch::AcceptGame() {
    return ESteamGameSearchErrorCode::Invalid;
}


