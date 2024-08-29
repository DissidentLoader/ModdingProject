#pragma once
#include "CoreMinimal.h"
#include "LeaderboardFindResult.h"
#include "OnFindLeaderboardAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUserStatsAsyncActionFindLeaderboard.generated.h"

class UObject;
class USteamCoreProUserStatsAsyncActionFindLeaderboard;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUserStatsAsyncActionFindLeaderboard : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFindLeaderboardAsyncDelegate OnCallback;
    
    USteamCoreProUserStatsAsyncActionFindLeaderboard();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FLeaderboardFindResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUserStatsAsyncActionFindLeaderboard* FindLeaderboardAsync(UObject* WorldContextObject, const FString& LeaderboardName, float Timeout);
    
};

