#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OnSteamCoreAudioInputDevicesObtainedDelegate.h"
#include "SteamCoreAudioInputDeviceInfo.h"
#include "SteamCoreAudioCaptureBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class STEAMCORESHARED_API USteamCoreAudioCaptureBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USteamCoreAudioCaptureBlueprintLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAvailableAudioInputDevices(const UObject* WorldContextObject, const FOnSteamCoreAudioInputDevicesObtained& OnObtainDevicesEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_AudioInputDeviceInfoToString(const FSteamCoreAudioInputDeviceInfo& Info);
    
};

