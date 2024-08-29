#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundWaveProcedural.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundWaveProcedural -FallbackName=SoundWaveProcedural
#include "SteamCoreProVoice.generated.h"

class USteamCoreProVoice;

UCLASS(Blueprintable, EditInlineNew)
class STEAMCOREPRO_API USteamCoreProVoice : public USoundWaveProcedural {
    GENERATED_BODY()
public:
    USteamCoreProVoice();

    UFUNCTION(BlueprintCallable)
    static void DestroySteamCoreProVoice(USteamCoreProVoice* Obj);
    
    UFUNCTION(BlueprintCallable)
    static USteamCoreProVoice* ConstructSteamCoreProVoice(int32 AudioSampleRate);
    
    UFUNCTION(BlueprintCallable)
    void AddAudioBuffer(const TArray<uint8>& Buffer);
    
};

