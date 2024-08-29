#include "SteamCoreProSettings.h"

USteamCoreProSettings::USteamCoreProSettings() {
    this->bEnabled = true;
    this->bRelaunchInSteam = true;
    this->bVACEnabled = true;
    this->bAllowP2PPacketRelay = true;
    this->bCopySteamDlls = true;
    this->P2PConnectionTimeout = 90;
    this->SteamAppId = 2780980;
    this->SteamDevAppId = 2780980;
    this->Port = 27015;
    this->GameServerQueryPort = 0;
    this->GameVersion = TEXT("1.0.0.0");
    this->bOverrideMinHandshakeVersion = true;
    this->MinHandshakeVersion = 0;
    this->bOverrideCurrentHandshakeVersion = true;
    this->CurrentHandshakeVersion = 0;
}


