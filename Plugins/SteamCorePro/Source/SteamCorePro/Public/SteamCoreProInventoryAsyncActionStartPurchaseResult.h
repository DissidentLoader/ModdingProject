#pragma once
#include "CoreMinimal.h"
#include "OnSteamInventoryStartPurchaseResultAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamInventoryStartPurchaseResult.h"
#include "SteamItemDef.h"
#include "SteamCoreProInventoryAsyncActionStartPurchaseResult.generated.h"

class UObject;
class USteamCoreProInventoryAsyncActionStartPurchaseResult;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProInventoryAsyncActionStartPurchaseResult : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamInventoryStartPurchaseResultAsyncDelegate OnCallback;
    
    USteamCoreProInventoryAsyncActionStartPurchaseResult();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProInventoryAsyncActionStartPurchaseResult* StartPurchaseAsync(UObject* WorldContextObject, const TArray<FSteamItemDef> ItemDefs, const TArray<int32> Quantity, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful);
    
};

