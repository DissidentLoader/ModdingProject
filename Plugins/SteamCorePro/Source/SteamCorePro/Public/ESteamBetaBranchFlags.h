#pragma once
#include "CoreMinimal.h"
#include "ESteamBetaBranchFlags.generated.h"

UENUM(BlueprintType)
enum class ESteamBetaBranchFlags : uint8 {
    k_EBetaBranch_None,
    k_EBetaBranch_Default,
    k_EBetaBranch_Available,
    k_EBetaBranch_Private = 4,
    k_EBetaBranch_Selected = 8,
    k_EBetaBranch_Installed = 16,
};

