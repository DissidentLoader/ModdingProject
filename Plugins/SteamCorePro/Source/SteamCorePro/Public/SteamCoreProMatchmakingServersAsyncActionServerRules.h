#pragma once
#include "CoreMinimal.h"
#include "GameServerRule.h"
#include "OnServerRuleAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProMatchmakingServersAsyncActionServerRules.generated.h"

class UObject;
class USteamCoreProMatchmakingServersAsyncActionServerRules;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProMatchmakingServersAsyncActionServerRules : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnServerRuleAsyncDelegate OnCallback;
    
    USteamCoreProMatchmakingServersAsyncActionServerRules();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProMatchmakingServersAsyncActionServerRules* ServerRulesAsync(UObject* WorldContextObject, const FString& IP, int32 QueryPort, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const TArray<FGameServerRule>& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CancelServerRulesQueries(UObject* WorldContextObject);
    
};

