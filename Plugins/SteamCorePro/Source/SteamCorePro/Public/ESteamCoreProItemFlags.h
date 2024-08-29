#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreProItemFlags.generated.h"

UENUM(BlueprintType)
enum ESteamCoreProItemFlags {
    ENoTrade,
    ERemoved = 8,
    EConsumed,
};

