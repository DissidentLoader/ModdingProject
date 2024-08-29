#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreProInputLEDFlag.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreProInputLEDFlag : uint8 {
    SetColor,
    RestoreUserDefault,
};

