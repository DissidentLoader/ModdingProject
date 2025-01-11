#pragma once
#include "CoreMinimal.h"
#include "ESteamTimelineEventClipPriority.h"
#include "ESteamTimelineGameMode.h"
#include "SteamCoreInterface.h"
#include "SteamProTimeline.generated.h"

class USteamProTimeline;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamProTimeline : public USteamCoreInterface {
    GENERATED_BODY()
public:
    USteamProTimeline();

    UFUNCTION(BlueprintCallable)
    static void SetTimelineStateDescription(const FString& Description, float Delta);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimelineGameMode(ESteamTimelineGameMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USteamProTimeline* GetSteamTimeline();
    
    UFUNCTION(BlueprintCallable)
    static void ClearTimelineStateDescription(float Delta);
    
    UFUNCTION(BlueprintCallable)
    static void AddTimelineEvent(const FString& Icon, const FString& Title, const FString& Description, int32 Priority, float StartOffsetSeconds, float DurationSeconds, ESteamTimelineEventClipPriority PossibleClip);
    
};

