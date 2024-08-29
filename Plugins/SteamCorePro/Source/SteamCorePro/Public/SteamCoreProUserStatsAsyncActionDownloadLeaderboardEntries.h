#pragma once
#include "CoreMinimal.h"
#include "ESteamLeaderboardDataRequest.h"
#include "LeaderboardScoresDownloaded.h"
#include "OnDownloadLeaderboardEntriesAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamLeaderboard.h"
#include "SteamCoreProUserStatsAsyncActionDownloadLeaderboardEntries.generated.h"

class UObject;
class USteamCoreProUserStatsAsyncActionDownloadLeaderboardEntries;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUserStatsAsyncActionDownloadLeaderboardEntries : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadLeaderboardEntriesAsyncDelegate OnCallback;
    
    USteamCoreProUserStatsAsyncActionDownloadLeaderboardEntries();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUserStatsAsyncActionDownloadLeaderboardEntries* DownloadLeaderboardEntriesAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest Request, int32 RangeStart, int32 RangeEnd, float Timeout);
    
};

