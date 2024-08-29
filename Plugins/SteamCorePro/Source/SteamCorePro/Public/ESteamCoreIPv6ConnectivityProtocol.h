#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreIPv6ConnectivityProtocol.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreIPv6ConnectivityProtocol : uint8 {
    k_ESteamIPv6ConnectivityProtocol_Invalid,
    k_ESteamIPv6ConnectivityProtocol_HTTP,
    k_ESteamIPv6ConnectivityProtocol_UDP,
};

