#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreProInputSource.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreProInputSource : uint8 {
    None,
    LeftTrackpad,
    RightTrackpad,
    Joystick,
    ABXY,
    Switch,
    LeftTrigger,
    RightTrigger,
    LeftBumper,
    RightBumper,
    Gyro,
    CenterTrackpad,
    RightJoystick,
    DPad,
    Key,
    Mouse,
    LeftGyro,
    Count,
};

