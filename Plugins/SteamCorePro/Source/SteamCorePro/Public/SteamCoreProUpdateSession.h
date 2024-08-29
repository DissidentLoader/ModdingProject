#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
#include "SteamCoreProAsyncAction.h"
#include "SteamSessionSearchSetting.h"
#include "SteamCoreProUpdateSession.generated.h"

class UObject;
class USteamCoreProUpdateSession;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUpdateSession : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnCallback;
    
    USteamCoreProUpdateSession();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUpdateSession* UpdateSteamCoreProSession(UObject* WorldContextObject, TMap<FString, FSteamSessionSearchSetting> Settings, const FString& SessionName, int32 MaxPlayers);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleted(FName SessionName, bool bWasSuccessful);
    
};

