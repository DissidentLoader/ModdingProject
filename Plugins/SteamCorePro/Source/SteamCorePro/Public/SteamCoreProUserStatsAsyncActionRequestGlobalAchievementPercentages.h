#pragma once
#include "CoreMinimal.h"
#include "GlobalAchievementPercentagesReady.h"
#include "OnRequestGlobalAchievementPercentagesAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUserStatsAsyncActionRequestGlobalAchievementPercentages.generated.h"

class UObject;
class USteamCoreProUserStatsAsyncActionRequestGlobalAchievementPercentages;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUserStatsAsyncActionRequestGlobalAchievementPercentages : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestGlobalAchievementPercentagesAsyncDelegate OnCallback;
    
    USteamCoreProUserStatsAsyncActionRequestGlobalAchievementPercentages();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUserStatsAsyncActionRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentagesAsync(UObject* WorldContextObject, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FGlobalAchievementPercentagesReady& Data, bool bWasSuccessful);
    
};

