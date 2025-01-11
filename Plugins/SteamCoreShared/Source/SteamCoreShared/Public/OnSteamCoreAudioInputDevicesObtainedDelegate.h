#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAudioInputDeviceInfo.h"
#include "OnSteamCoreAudioInputDevicesObtainedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSteamCoreAudioInputDevicesObtained, const TArray<FSteamCoreAudioInputDeviceInfo>&, AvailableDevices);

