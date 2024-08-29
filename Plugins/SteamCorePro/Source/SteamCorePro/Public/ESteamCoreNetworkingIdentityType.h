#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreNetworkingIdentityType.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreNetworkingIdentityType : uint8 {
    k_ESteamNetworkingIdentityType_Invalid,
    k_ESteamNetworkingIdentityType_SteamID = 16,
    k_ESteamNetworkingIdentityType_XboxPairwiseID,
    k_ESteamNetworkingIdentityType_SonyPSN,
    k_ESteamNetworkingIdentityType_GoogleStadia,
    k_ESteamNetworkingIdentityType_IPAddress = 1,
    k_ESteamNetworkingIdentityType_GenericString,
    k_ESteamNetworkingIdentityType_GenericBytes,
    k_ESteamNetworkingIdentityType_UnknownType,
    k_ESteamNetworkingIdentityType__Force32bit = 255,
};

