#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
#include "Net/OnlineBlueprintCallProxyBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamCoreShared -ObjectName=SteamSessionSetting -FallbackName=SteamSessionSetting
#include "SteamSessionSetting.h"
#include "SteamCoreProAsyncAction.h"
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
    static USteamCoreProUpdateSession* UpdateSteamCoreProSession(UObject* WorldContextObject, TMap<FString, FSteamSessionSetting> Settings, const FString& SessionName, int32 MaxPlayers, bool bAllowJoinInProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleted(FName SessionName, bool bWasSuccessful);
    
};

