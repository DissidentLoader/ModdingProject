#include "SteamCoreNetDriver.h"

USteamCoreNetDriver::USteamCoreNetDriver() : UIpNetDriver(FObjectInitializer::Get()) {
    this->ChannelDefinitions.AddDefaulted(3);
}


