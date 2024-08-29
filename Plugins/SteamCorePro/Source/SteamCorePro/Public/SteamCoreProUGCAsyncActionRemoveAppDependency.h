#pragma once
#include "CoreMinimal.h"
#include "OnRemoveAppDependencyResultAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "RemoveAppDependencyResult.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUGCAsyncActionRemoveAppDependency.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionRemoveAppDependency;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionRemoveAppDependency : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveAppDependencyResultAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionRemoveAppDependency();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionRemoveAppDependency* RemoveAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, int32 AppID, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FRemoveAppDependencyResult& Data, bool bWasSuccessful);
    
};

