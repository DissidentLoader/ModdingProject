#pragma once
#include "CoreMinimal.h"
#include "JoinPartyData.h"
#include "OnJoinPartyCallbackDelegate.h"
#include "PartyBeaconID.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProSteamPartiesAsyncActionJoinParty.generated.h"

class UObject;
class USteamCoreProSteamPartiesAsyncActionJoinParty;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProSteamPartiesAsyncActionJoinParty : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinPartyCallback OnCallback;
    
    USteamCoreProSteamPartiesAsyncActionJoinParty();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProSteamPartiesAsyncActionJoinParty* JoinPartyAsync(UObject* WorldContextObject, FPartyBeaconID BeaconID, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FJoinPartyData& Data, bool bWasSuccessful);
    
};

