#pragma once
#include "CoreMinimal.h"
#include "LeaderboardScoresDownloadedForUsers.h"
#include "OnDownloadLeaderboardEntriesForUsersAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamID.h"
#include "SteamLeaderboard.h"
#include "SteamCoreProUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.generated.h"

class UObject;
class USteamCoreProUserStatsAsyncActionDownloadLeaderboardEntriesForUsers;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUserStatsAsyncActionDownloadLeaderboardEntriesForUsers : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadLeaderboardEntriesForUsersAsyncDelegate OnCallback;
    
    USteamCoreProUserStatsAsyncActionDownloadLeaderboardEntriesForUsers();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsersAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users, float Timeout);
    
};

