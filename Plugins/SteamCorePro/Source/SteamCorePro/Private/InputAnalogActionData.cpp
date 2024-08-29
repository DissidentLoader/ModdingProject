#include "InputAnalogActionData.h"

FInputAnalogActionData::FInputAnalogActionData() {
    this->Mode = ESteamCoreProInputSourceMode::None;
    this->X = 0.00f;
    this->Y = 0.00f;
    this->bActive = false;
}

