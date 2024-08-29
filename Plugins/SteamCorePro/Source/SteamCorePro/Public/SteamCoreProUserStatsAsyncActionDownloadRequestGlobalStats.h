#pragma once
#include "CoreMinimal.h"
#include "GlobalStatsReceived.h"
#include "OnRequestGlobalStatsAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUserStatsAsyncActionDownloadRequestGlobalStats.generated.h"

class UObject;
class USteamCoreProUserStatsAsyncActionDownloadRequestGlobalStats;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUserStatsAsyncActionDownloadRequestGlobalStats : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestGlobalStatsAsyncDelegate OnCallback;
    
    USteamCoreProUserStatsAsyncActionDownloadRequestGlobalStats();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUserStatsAsyncActionDownloadRequestGlobalStats* RequestGlobalStatsAsync(UObject* WorldContextObject, int32 HistoryDays, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FGlobalStatsReceived& Data, bool bWasSuccessful);
    
};

