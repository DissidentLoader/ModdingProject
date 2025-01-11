#pragma once
#include "CoreMinimal.h"
#include "ESteamTimelineGameMode.generated.h"

UENUM(BlueprintType)
enum class ESteamTimelineGameMode : uint8 {
    k_ETimelineGameMode_Invalid,
    k_ETimelineGameMode_Playing,
    k_ETimelineGameMode_Staging,
    k_ETimelineGameMode_Menus,
    k_ETimelineGameMode_LoadingScreen,
};

