#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProDestroySession.generated.h"

class UObject;
class USteamCoreProDestroySession;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProDestroySession : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    USteamCoreProDestroySession();

    UFUNCTION(BlueprintCallable)
    void OnCompleted(FName SessionName, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProDestroySession* DestroySteamCoreProSession(UObject* WorldContextObject, float Timeout);
    
};

