#pragma once
#include "CoreMinimal.h"
#include "OnControllerChangedCallbackDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProAsyncActionListenForControllerChange.generated.h"

class UObject;
class USteamCoreProAsyncActionListenForControllerChange;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProAsyncActionListenForControllerChange : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControllerChangedCallback OnControllerChanged;
    
    USteamCoreProAsyncActionListenForControllerChange();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProAsyncActionListenForControllerChange* ListenForControllerChange(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(bool bIsConnected, int32 PlatformUserId, int32 UserId);
    
};

