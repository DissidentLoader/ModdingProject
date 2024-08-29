#pragma once
#include "CoreMinimal.h"
#include "ChangeNumOpenSlotsData.h"
#include "OnChangeNumOpenSlotsCallbackDelegate.h"
#include "PartyBeaconID.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots.generated.h"

class UObject;
class USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeNumOpenSlotsCallback OnCallback;
    
    USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FChangeNumOpenSlotsData& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots* ChangeNumOpenSlotsAsync(UObject* WorldContextObject, FPartyBeaconID BeaconID, int32 OpenSlots, float Timeout);
    
};

