#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreProInputSourceMode.generated.h"

UENUM(BlueprintType)
enum class ESteamCoreProInputSourceMode : uint8 {
    None,
    Dpad,
    Buttons,
    FourButtons,
    AbsoluteMouse,
    RelativeMouse,
    JoystickMove,
    JoystickMouse,
    JoystickCamera,
    ScrollWheel,
    Trigger,
    TouchMenu,
    MouseJoystick,
    MouseRegion,
    RadialMenu,
    SingleButton,
    Switches,
};

