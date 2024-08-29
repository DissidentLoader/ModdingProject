#pragma once
#include "CoreMinimal.h"
#include "ESteamLeaderboardUploadScoreMethod.h"
#include "LeaderboardScoreUploaded.h"
#include "OnUploadLeaderboardScoreAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamLeaderboard.h"
#include "SteamCoreProUserStatsAsyncActionUploadLeaderboardScore.generated.h"

class UObject;
class USteamCoreProUserStatsAsyncActionUploadLeaderboardScore;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUserStatsAsyncActionUploadLeaderboardScore : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUploadLeaderboardScoreAsyncDelegate OnCallback;
    
    USteamCoreProUserStatsAsyncActionUploadLeaderboardScore();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUserStatsAsyncActionUploadLeaderboardScore* UploadLeaderboardScoreAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, TArray<int32> ScoreDetails, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FLeaderboardScoreUploaded& Data, bool bWasSuccessful);
    
};

