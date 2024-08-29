#pragma once
#include "CoreMinimal.h"
#include "ESteamFloatingGamepadTextInputMode.generated.h"

UENUM(BlueprintType)
enum class ESteamFloatingGamepadTextInputMode : uint8 {
    k_EFloatingGamepadTextInputModeModeSingleLine,
    k_EFloatingGamepadTextInputModeModeMultipleLines,
    k_EFloatingGamepadTextInputModeModeEmail,
    k_EFloatingGamepadTextInputModeModeNumeric,
};

