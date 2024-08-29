#pragma once
#include "CoreMinimal.h"
#include "ESteamAudioPlaybackStatus.h"
#include "OnPlaybackStatusHasChangedDelegate.h"
#include "OnVolumeHasChangedDelegate.h"
#include "SteamCoreInterface.h"
#include "SteamProMusic.generated.h"

class USteamProMusic;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamProMusic : public USteamCoreInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlaybackStatusHasChanged PlaybackStatusHasChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVolumeHasChanged VolumeHasChanged;
    
    USteamProMusic();

    UFUNCTION(BlueprintCallable)
    void SetVolume(float flVolume);
    
    UFUNCTION(BlueprintCallable)
    void PlayPrevious();
    
    UFUNCTION(BlueprintCallable)
    void PlayNext();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    float GetVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USteamProMusic* GetSteamMusic();
    
    UFUNCTION(BlueprintCallable)
    ESteamAudioPlaybackStatus GetPlaybackStatus();
    
    UFUNCTION(BlueprintCallable)
    bool BIsPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool bIsEnabled();
    
};

