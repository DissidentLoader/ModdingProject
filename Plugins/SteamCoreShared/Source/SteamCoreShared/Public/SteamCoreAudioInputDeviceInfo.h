#pragma once
#include "CoreMinimal.h"
#include "SteamCoreAudioInputDeviceInfo.generated.h"

USTRUCT(BlueprintType)
struct STEAMCORESHARED_API FSteamCoreAudioInputDeviceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreferredSampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportsHardwareAEC: 1;
    
    FSteamCoreAudioInputDeviceInfo();
};

