#pragma once
#include "CoreMinimal.h"
#include "AddAppDependencyResult.h"
#include "OnAddAppDependencyResultAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUGCAsyncActionAddAppDependency.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionAddAppDependency;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionAddAppDependency : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddAppDependencyResultAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionAddAppDependency();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FAddAppDependencyResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionAddAppDependency* AddAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, int32 AppID, float Timeout);
    
};

