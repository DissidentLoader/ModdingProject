#pragma once
#include "CoreMinimal.h"
#include "ESteamLeaderboardDisplayType.h"
#include "ESteamLeaderboardSortMethod.h"
#include "FindOrCreateLeaderboardData.h"
#include "OnFindOrCreateLeaderboardAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUserStatsAsyncActionFindOrCreateLeaderboard.generated.h"

class UObject;
class USteamCoreProUserStatsAsyncActionFindOrCreateLeaderboard;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUserStatsAsyncActionFindOrCreateLeaderboard : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFindOrCreateLeaderboardAsyncDelegate OnCallback;
    
    USteamCoreProUserStatsAsyncActionFindOrCreateLeaderboard();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FFindOrCreateLeaderboardData& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUserStatsAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(UObject* WorldContextObject, const FString& LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType, float Timeout);
    
};

