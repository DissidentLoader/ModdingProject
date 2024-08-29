#pragma once
#include "CoreMinimal.h"
#include "OnRequestCurrentStatsAsyncDelegateDelegate.h"
#include "RequestCurrentStatsData.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUserStatsAsyncActionRequestCurrentStats.generated.h"

class UObject;
class USteamCoreProUserStatsAsyncActionRequestCurrentStats;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUserStatsAsyncActionRequestCurrentStats : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestCurrentStatsAsyncDelegate OnCallback;
    
    USteamCoreProUserStatsAsyncActionRequestCurrentStats();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUserStatsAsyncActionRequestCurrentStats* RequestCurrentStatsAsync(UObject* WorldContextObject, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FRequestCurrentStatsData& Data, bool bWasSuccessful);
    
};

