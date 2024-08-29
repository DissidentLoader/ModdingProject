#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreIPv6ConnectivityState.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreIPv6ConnectivityState : uint8 {
    k_ESteamIPv6ConnectivityState_Unknown,
    k_ESteamIPv6ConnectivityState_Good,
    k_ESteamIPv6ConnectivityState_Bad,
};

