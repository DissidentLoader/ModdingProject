#pragma once
#include "CoreMinimal.h"
#include "RequestStoreAuthURLDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "StoreAuthURLResponse.h"
#include "SteamCoreProUserAsyncActionRequestStoreAuthURL.generated.h"

class UObject;
class USteamCoreProUserAsyncActionRequestStoreAuthURL;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUserAsyncActionRequestStoreAuthURL : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestStoreAuthURLDelegate OnCallback;
    
    USteamCoreProUserAsyncActionRequestStoreAuthURL();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUserAsyncActionRequestStoreAuthURL* RequestStoreAuthURLAsync(UObject* WorldContextObject, const FString& RedirectURL, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FStoreAuthURLResponse& Data, bool bWasSuccessful);
    
};

