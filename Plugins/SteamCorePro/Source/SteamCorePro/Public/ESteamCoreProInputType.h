#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreProInputType.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreProInputType : uint8 {
    Unknown,
    SteamController,
    XBox360Controller,
    XBoxOneController,
    GenericGamepad,
    PS4Controller,
    AppleMFiController,
    AndroidController,
    SwitchJoyConPair,
    SwitchJoyConSingle,
    SwitchProController,
    MobileTouch,
    PS3Controller,
    PS5Controller,
    SteamDeckController,
    Count,
    MaximumPossibleValue = 255,
};

