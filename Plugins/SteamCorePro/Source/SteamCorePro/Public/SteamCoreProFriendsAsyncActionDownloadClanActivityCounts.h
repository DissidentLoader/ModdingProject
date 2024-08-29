#pragma once
#include "CoreMinimal.h"
#include "DownloadClanActivityCountsResult.h"
#include "OnDownloadClanActivityCountsAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreProFriendsAsyncActionDownloadClanActivityCounts.generated.h"

class UObject;
class USteamCoreProFriendsAsyncActionDownloadClanActivityCounts;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProFriendsAsyncActionDownloadClanActivityCounts : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadClanActivityCountsAsyncDelegate OnCallback;
    
    USteamCoreProFriendsAsyncActionDownloadClanActivityCounts();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FDownloadClanActivityCountsResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProFriendsAsyncActionDownloadClanActivityCounts* DownloadClanActivityCountsAsync(UObject* WorldContextObject, TArray<FSteamID> SteamIDClans, float Timeout);
    
};

