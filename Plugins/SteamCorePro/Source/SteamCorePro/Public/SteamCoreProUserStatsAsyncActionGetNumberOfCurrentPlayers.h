#pragma once
#include "CoreMinimal.h"
#include "NumberOfCurrentPlayers.h"
#include "OnGetNumberOfCurrentPlayersAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUserStatsAsyncActionGetNumberOfCurrentPlayers.generated.h"

class UObject;
class USteamCoreProUserStatsAsyncActionGetNumberOfCurrentPlayers;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUserStatsAsyncActionGetNumberOfCurrentPlayers : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetNumberOfCurrentPlayersAsyncDelegate OnCallback;
    
    USteamCoreProUserStatsAsyncActionGetNumberOfCurrentPlayers();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FNumberOfCurrentPlayers& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUserStatsAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(UObject* WorldContextObject, float Timeout);
    
};

