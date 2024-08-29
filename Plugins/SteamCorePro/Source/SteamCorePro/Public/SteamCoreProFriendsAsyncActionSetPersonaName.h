#pragma once
#include "CoreMinimal.h"
#include "OnSetPersonaNameAsyncDelegateDelegate.h"
#include "SetPersonaNameResponse.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProFriendsAsyncActionSetPersonaName.generated.h"

class UObject;
class USteamCoreProFriendsAsyncActionSetPersonaName;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProFriendsAsyncActionSetPersonaName : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetPersonaNameAsyncDelegate OnCallback;
    
    USteamCoreProFriendsAsyncActionSetPersonaName();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProFriendsAsyncActionSetPersonaName* SetPersonaNameAsync(UObject* WorldContextObject, const FString& Name, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSetPersonaNameResponse& Data, bool bWasSuccessful);
    
};

