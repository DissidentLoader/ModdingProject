#include "SteamCoreSocketsNetDriver.h"

USteamCoreSocketsNetDriver::USteamCoreSocketsNetDriver() {
    this->NetConnectionClassName = TEXT("/Script/SteamCoreSockets.SteamCoreSocketsNetConnection");
    this->ChannelDefinitions.AddDefaulted(3);
}


