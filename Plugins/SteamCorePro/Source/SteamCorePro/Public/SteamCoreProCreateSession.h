#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
#include "Net/OnlineBlueprintCallProxyBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamCoreShared -ObjectName=SteamSessionSetting -FallbackName=SteamSessionSetting
#include "SteamSessionSetting.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProCreateSession.generated.h"

class UObject;
class USteamCoreProCreateSession;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProCreateSession : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    USteamCoreProCreateSession();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProCreateSession* CreateSteamCoreProSession(UObject* WorldContextObject, TMap<FString, FSteamSessionSetting> SessionSettings, const FString& SessionName, int32 MaxPlayers, bool bUseLAN, bool bAllowInvites, bool bUsesPresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, float Timeout);
    
};

