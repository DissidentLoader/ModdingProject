#pragma once
#include "CoreMinimal.h"
#include "ESteamTimelineEventClipPriority.generated.h"

UENUM(BlueprintType)
enum class ESteamTimelineEventClipPriority : uint8 {
    k_ETimelineEventClipPriority_Invalid,
    k_ETimelineEventClipPriority_None,
    k_ETimelineEventClipPriority_Standard,
    k_ETimelineEventClipPriority_Featured,
};

