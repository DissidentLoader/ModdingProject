#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "SteamCoreAudioInputDeviceInfo.h"
#include "SteamCoreSharedAudioSubsystem.generated.h"

UCLASS(Blueprintable)
class STEAMCORESHARED_API USteamCoreSharedAudioSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    USteamCoreSharedAudioSubsystem();

    UFUNCTION(BlueprintCallable)
    static TArray<FSteamCoreAudioInputDeviceInfo> K2_GetAudioInputDevices();
    
    UFUNCTION(BlueprintCallable)
    static FSteamCoreAudioInputDeviceInfo K2_FindAudioDeviceInfoFromDeviceName(const FString& DeviceName);
    
    UFUNCTION(BlueprintCallable)
    static FSteamCoreAudioInputDeviceInfo K2_FindAudioDeviceInfoFromDeviceId(const FString& DeviceID);
    
};

