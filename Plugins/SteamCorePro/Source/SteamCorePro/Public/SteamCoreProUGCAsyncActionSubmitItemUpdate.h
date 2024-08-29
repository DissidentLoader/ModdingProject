#pragma once
#include "CoreMinimal.h"
#include "OnSubmitItemUpdateAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SubmitItemUpdateResult.h"
#include "UGCUpdateHandle.h"
#include "SteamCoreProUGCAsyncActionSubmitItemUpdate.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionSubmitItemUpdate;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionSubmitItemUpdate : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubmitItemUpdateAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionSubmitItemUpdate();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionSubmitItemUpdate* SubmitItemUpdateAsync(UObject* WorldContextObject, FUGCUpdateHandle Handle, const FString& ChangeNote, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSubmitItemUpdateResult& Data, bool bWasSuccessful);
    
};

