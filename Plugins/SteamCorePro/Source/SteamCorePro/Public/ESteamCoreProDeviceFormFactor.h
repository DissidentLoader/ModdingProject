#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreProDeviceFormFactor.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreProDeviceFormFactor : uint8 {
    Unknown,
    Phone,
    Tablet,
    Computer,
    TV,
};

