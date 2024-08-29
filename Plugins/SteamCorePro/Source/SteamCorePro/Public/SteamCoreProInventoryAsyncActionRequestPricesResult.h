#pragma once
#include "CoreMinimal.h"
#include "OnSteamInventoryRequestPricesResultAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamInventoryRequestPricesResult.h"
#include "SteamCoreProInventoryAsyncActionRequestPricesResult.generated.h"

class UObject;
class USteamCoreProInventoryAsyncActionRequestPricesResult;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProInventoryAsyncActionRequestPricesResult : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamInventoryRequestPricesResultAsyncDelegate OnCallback;
    
    USteamCoreProInventoryAsyncActionRequestPricesResult();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProInventoryAsyncActionRequestPricesResult* RequestPricesAsync(UObject* WorldContextObject, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful);
    
};

