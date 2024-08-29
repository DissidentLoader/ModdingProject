#pragma once
#include "CoreMinimal.h"
#include "GetAppDependenciesResult.h"
#include "OnGetAppDependenciesResultAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUGCAsyncActionGetAppDependencies.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionGetAppDependencies;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionGetAppDependencies : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetAppDependenciesResultAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionGetAppDependencies();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FGetAppDependenciesResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionGetAppDependencies* GetAppDependenciesAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout);
    
};

