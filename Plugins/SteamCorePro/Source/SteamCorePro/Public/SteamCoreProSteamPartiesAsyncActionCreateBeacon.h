#pragma once
#include "CoreMinimal.h"
#include "CreateBeaconData.h"
#include "OnCreateBeaconCallbackDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamPartyBeaconLocation.h"
#include "SteamCoreProSteamPartiesAsyncActionCreateBeacon.generated.h"

class UObject;
class USteamCoreProSteamPartiesAsyncActionCreateBeacon;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProSteamPartiesAsyncActionCreateBeacon : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreateBeaconCallback OnCallback;
    
    USteamCoreProSteamPartiesAsyncActionCreateBeacon();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FCreateBeaconData& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProSteamPartiesAsyncActionCreateBeacon* CreateBeaconAsync(UObject* WorldContextObject, int32 OpenSlots, FSteamPartyBeaconLocation BeaconLocation, const FString& ConnectString, const FString& MetaData, float Timeout);
    
};

