#pragma once
#include "CoreMinimal.h"
#include "OnSendQueryUGCRequestAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamUGCQueryCompleted.h"
#include "UGCQueryHandle.h"
#include "SteamCoreProUGCAsyncActionSendQueryUGCRequest.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionSendQueryUGCRequest;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionSendQueryUGCRequest : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSendQueryUGCRequestAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionSendQueryUGCRequest();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionSendQueryUGCRequest* SendQueryUGCRequestAsync(UObject* WorldContextObject, FUGCQueryHandle Handle, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSteamUGCQueryCompleted& Data, bool bWasSuccessful);
    
};

