#pragma once
#include "CoreMinimal.h"
#include "OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamID.h"
#include "SteamInventoryEligiblePromoItemDefIDs.h"
#include "SteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.generated.h"

class UObject;
class USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate OnCallback;
    
    USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDsAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful);
    
};

