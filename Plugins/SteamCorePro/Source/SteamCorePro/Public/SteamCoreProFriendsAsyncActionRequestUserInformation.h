#pragma once
#include "CoreMinimal.h"
#include "OnRequestUserInformationAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreProFriendsAsyncActionRequestUserInformation.generated.h"

class UObject;
class USteamCoreProFriendsAsyncActionRequestUserInformation;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProFriendsAsyncActionRequestUserInformation : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestUserInformationAsyncDelegate OnCallback;
    
    USteamCoreProFriendsAsyncActionRequestUserInformation();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProFriendsAsyncActionRequestUserInformation* RequestUserInformationAsync(UObject* WorldContextObject, FSteamID SteamIDUser, bool bRequireNameOnly, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback();
    
};

