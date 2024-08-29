#pragma once
#include "CoreMinimal.h"
#include "EFriendListType.generated.h"

UENUM(BlueprintType)
enum EFriendListType {
    Default,
    OnlinePlayers,
    InGamePlayers,
    InGameAndSessionPlayers,
};

