#include "OnlineUserPresenceSteamCoreBlueprint.h"

FOnlineUserPresenceSteamCoreBlueprint::FOnlineUserPresenceSteamCoreBlueprint() {
    this->bIsOnline = false;
    this->BIsPlaying = false;
    this->bIsPlayingThisGame = false;
    this->bIsJoinable = false;
    this->bHasVoiceSupport = false;
    this->PresenceState = EOnlineFriendSteamCorePresenceState::Offline;
}

