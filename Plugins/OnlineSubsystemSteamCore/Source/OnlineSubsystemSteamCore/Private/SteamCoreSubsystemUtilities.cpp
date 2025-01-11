#include "SteamCoreSubsystemUtilities.h"

USteamCoreSubsystemUtilities::USteamCoreSubsystemUtilities() {
}

bool USteamCoreSubsystemUtilities::SendSessionInviteToFriend(int32 LocalUserNum, const FString& FriendSteamId) {
    return false;
}

void USteamCoreSubsystemUtilities::GetSessionSettings(UObject* WorldContextObject, TArray<FSteamSessionSetting>& SessionSettings, FString& SessionName, int32& MaxPlayers, bool& bAllowInvites, bool& bUsesPresence, bool& bAllowJoinInProgress, bool& bAllowJoinViaPresence, bool& bAllowJoinViaPresenceFriendsOnly, bool& bAntiCheatProtected, bool& bUsesStats, bool& bShouldAdvertise, bool& bUseLobbiesIfAvailable, bool& bUseLobbiesVoiceChatIfAvailable) {
}

void USteamCoreSubsystemUtilities::GetExtraSessionSettings(TArray<FSteamSessionSetting>& SessionSettings) {
}

void USteamCoreSubsystemUtilities::FindFriendSessions() {
}


