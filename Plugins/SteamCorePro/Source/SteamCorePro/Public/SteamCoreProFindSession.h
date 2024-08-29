#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamCoreShared -ObjectName=ESteamLobbyDistanceFilter -FallbackName=ESteamLobbyDistanceFilter
#include "ESteamSessionFindType.h"
#include "FindSteamSessionsResultDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamSessionSearchSetting.h"
#include "SteamCoreProFindSession.generated.h"

class UObject;
class USteamCoreProFindSession;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProFindSession : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindSteamSessionsResultDelegate OnCallback;
    
    USteamCoreProFindSession();

    UFUNCTION(BlueprintCallable)
    void OnCompleted(bool bSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProFindSession* FindSteamCoreProSessions(UObject* WorldContextObject, TMap<FString, FSteamSessionSearchSetting> SearchSettings, int32 MaxResults, bool bUseLAN, ESteamSessionFindType ServerType, ESteamLobbyDistanceFilter DistanceFilter, bool bEmptyServersOnly, bool bSecureServersOnly, float Timeout);
    
};

