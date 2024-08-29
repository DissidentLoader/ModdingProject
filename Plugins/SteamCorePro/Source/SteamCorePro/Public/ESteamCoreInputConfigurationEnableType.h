#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreInputConfigurationEnableType.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreInputConfigurationEnableType : uint8 {
    k_ESteamInputConfigurationEnableType_None,
    k_ESteamInputConfigurationEnableType_Playstation,
    k_ESteamInputConfigurationEnableType_Xbox,
    k_ESteamInputConfigurationEnableType_Generic = 4,
    k_ESteamInputConfigurationEnableType_Switch = 8,
};

