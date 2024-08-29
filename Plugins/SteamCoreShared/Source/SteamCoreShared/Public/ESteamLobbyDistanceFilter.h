#pragma once
#include "CoreMinimal.h"
#include "ESteamLobbyDistanceFilter.generated.h"

UENUM(BlueprintType)
enum class ESteamLobbyDistanceFilter : uint8 {
    k_ELobbyDistanceFilterClose,
    k_ELobbyDistanceFilterDefault,
    k_ELobbyDistanceFilterFar,
    k_ELobbyDistanceFilterWorldwide,
};

