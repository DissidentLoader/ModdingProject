#pragma once
#include "CoreMinimal.h"
#include "EPlayerResult.generated.h"

UENUM(BlueprintType)
enum class EPlayerResult : uint8 {
    UNKNOWN,
    k_EPlayerResultFailedToConnect,
    k_EPlayerResultAbandoned,
    k_EPlayerResultKicked,
    k_EPlayerResultIncomplete,
    k_EPlayerResultCompleted,
};

