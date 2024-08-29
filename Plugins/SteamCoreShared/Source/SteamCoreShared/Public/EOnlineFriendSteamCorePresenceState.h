#pragma once
#include "CoreMinimal.h"
#include "EOnlineFriendSteamCorePresenceState.generated.h"

UENUM(BlueprintType)
enum class EOnlineFriendSteamCorePresenceState : uint8 {
    Offline,
    Online,
    Away,
    ExtendedAway,
    DoNotDisturb,
    Unknown,
};

