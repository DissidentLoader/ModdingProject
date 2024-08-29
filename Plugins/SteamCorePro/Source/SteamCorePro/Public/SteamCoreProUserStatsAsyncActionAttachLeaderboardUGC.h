#pragma once
#include "CoreMinimal.h"
#include "AttachLeaderboardUGCData.h"
#include "OnAttachLeaderboardUGCAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamLeaderboard.h"
#include "SteamUGCHandle.h"
#include "SteamCoreProUserStatsAsyncActionAttachLeaderboardUGC.generated.h"

class UObject;
class USteamCoreProUserStatsAsyncActionAttachLeaderboardUGC;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUserStatsAsyncActionAttachLeaderboardUGC : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttachLeaderboardUGCAsyncDelegate OnCallback;
    
    USteamCoreProUserStatsAsyncActionAttachLeaderboardUGC();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FAttachLeaderboardUGCData& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUserStatsAsyncActionAttachLeaderboardUGC* AttachLeaderboardUGCAsync(UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle, float Timeout);
    
};

