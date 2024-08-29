#include "SteamProInput.h"

USteamProInput::USteamProInput() {
}

void USteamProInput::TriggerVibration(FInputHandle Handle, uint8 LeftSpeed, uint8 RightSpeed) {
}

TEnumAsByte<ESteamCoreProInputActionOrigin> USteamProInput::TranslateActionOrigin(ESteamCoreProInputType DestinationInputType, TEnumAsByte<ESteamCoreProInputActionOrigin> SourceOrigin) {
    return EInputActionOrigin_None;
}

void USteamProInput::StopAnalogActionMomentum(FInputHandle Handle, FInputAnalogActionHandle EAction) {
}

bool USteamProInput::Shutdown() {
    return false;
}

bool USteamProInput::ShowBindingPanel(FInputHandle Handle) {
    return false;
}

void USteamProInput::SetLEDColor(FInputHandle Handle, uint8 ColorR, uint8 ColorG, uint8 ColorB, ESteamCoreProInputLEDFlag Flags) {
}

void USteamProInput::SetDualSenseTriggerEffect(FInputHandle InputHandle, FScePadTriggerEffectCommand R2, FScePadTriggerEffectCommand L2) {
}

void USteamProInput::Legacy_TriggerRepeatedHapticPulse(FInputHandle Handle, ESteamCoreProControllerPad TargetPad, uint8 DurationMicroSec, uint8 OffMicroSec, uint8 Repeat, uint8 Flags) {
}

void USteamProInput::Legacy_TriggerHapticPulse(FInputHandle Handle, ESteamCoreProControllerPad TargetPad, uint8 DurationMicroSec) {
}

bool USteamProInput::Init() {
    return false;
}

FString USteamProInput::GetStringForXboxOrigin(ESteamCoreProXboxOrigin Origin) {
    return TEXT("");
}

FString USteamProInput::GetStringForDigitalActionName(FInputDigitalActionHandle ActionHandle) {
    return TEXT("");
}

FString USteamProInput::GetStringForAnalogActionName(FInputAnalogActionHandle ActionHandle) {
    return TEXT("");
}

FString USteamProInput::GetStringForActionOrigin(TEnumAsByte<ESteamCoreProInputActionOrigin> Origin) {
    return TEXT("");
}

USteamProInput* USteamProInput::GetSteamInput() {
    return NULL;
}

TArray<ESteamCoreInputConfigurationEnableType> USteamProInput::GetSessionInputConfigurationSettings() {
    return TArray<ESteamCoreInputConfigurationEnableType>();
}

int32 USteamProInput::GetRemotePlaySessionID(FInputHandle Handle) {
    return 0;
}

FInputMotionData USteamProInput::GetMotionData(FInputHandle Handle) {
    return FInputMotionData{};
}

ESteamCoreProInputType USteamProInput::GetInputTypeForHandle(FInputHandle Handle) {
    return ESteamCoreProInputType::Unknown;
}

FString USteamProInput::GetGlyphForXboxOrigin(ESteamCoreProXboxOrigin Origin) {
    return TEXT("");
}

FString USteamProInput::GetGlyphForActionOrigin_Legacy(TEnumAsByte<ESteamCoreProInputActionOrigin> Origin) {
    return TEXT("");
}

int32 USteamProInput::GetGamepadIndexForController(FInputHandle Handle) {
    return 0;
}

int32 USteamProInput::GetDigitalActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputDigitalActionHandle DigitalActionHandle, TArray<TEnumAsByte<ESteamCoreProInputActionOrigin>>& OriginsOut) {
    return 0;
}

FInputDigitalActionHandle USteamProInput::GetDigitalActionHandle(const FString& PszActionName) {
    return FInputDigitalActionHandle{};
}

FInputDigitalActionData USteamProInput::GetDigitalActionData(FInputHandle Handle, FInputDigitalActionHandle DigitalActionHandle) {
    return FInputDigitalActionData{};
}

bool USteamProInput::GetDeviceBindingRevision(FInputHandle Handle, int32& Major, int32& Minor) {
    return false;
}

FInputActionSetHandle USteamProInput::GetCurrentActionSet(FInputHandle Handle) {
    return FInputActionSetHandle{};
}

FInputHandle USteamProInput::GetControllerForGamepadIndex(int32 Index) {
    return FInputHandle{};
}

int32 USteamProInput::GetConnectedControllers(TArray<FInputHandle>& OutHandles) {
    return 0;
}

int32 USteamProInput::GetAnalogActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputAnalogActionHandle AnalogActionHandle, TArray<TEnumAsByte<ESteamCoreProInputActionOrigin>>& OriginsOut) {
    return 0;
}

FInputAnalogActionHandle USteamProInput::GetAnalogActionHandle(const FString& PszActionName) {
    return FInputAnalogActionHandle{};
}

FInputAnalogActionData USteamProInput::GetAnalogActionData(FInputHandle Handle, FInputAnalogActionHandle AnalogActionHandle) {
    return FInputAnalogActionData{};
}

int32 USteamProInput::GetActiveActionSetLayers(FInputHandle Handle, TArray<FInputActionSetHandle>& Data) {
    return 0;
}

FInputActionSetHandle USteamProInput::GetActionSetHandle(const FString& ActionSetName) {
    return FInputActionSetHandle{};
}

TEnumAsByte<ESteamCoreProInputActionOrigin> USteamProInput::GetActionOriginFromXboxOrigin(FInputHandle Handle, ESteamCoreProXboxOrigin Origin) {
    return EInputActionOrigin_None;
}

void USteamProInput::DeactivateAllActionSetLayers(FInputHandle Handle) {
}

void USteamProInput::DeactivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle) {
}

bool USteamProInput::BWaitForData(bool bWaitForever, int32 Timeout) {
    return false;
}

bool USteamProInput::BNewDataAvailable() {
    return false;
}

void USteamProInput::ActivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle) {
}

void USteamProInput::ActivateActionSet(FInputHandle Handle, FInputActionSetHandle ActionSetHandle) {
}


