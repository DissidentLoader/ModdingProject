#pragma once
#include "CoreMinimal.h"
#include "OnRequestUserStatsAsyncDelegateDelegate.h"
#include "RequestUserStatsData.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreProUserStatsAsyncActionRequestUserStats.generated.h"

class UObject;
class USteamCoreProUserStatsAsyncActionRequestUserStats;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUserStatsAsyncActionRequestUserStats : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestUserStatsAsyncDelegate OnCallback;
    
    USteamCoreProUserStatsAsyncActionRequestUserStats();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUserStatsAsyncActionRequestUserStats* RequestUserStatsAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FRequestUserStatsData& Data, bool bWasSuccessful);
    
};

