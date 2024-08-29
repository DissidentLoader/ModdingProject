#pragma once
#include "CoreMinimal.h"
#include "AddUGCDependencyResult.h"
#include "OnAddUGCDependencyResultAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUGCAsyncActionAddUGCDependency.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionAddUGCDependency;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionAddUGCDependency : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddUGCDependencyResultAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionAddUGCDependency();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FAddUGCDependencyResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionAddUGCDependency* AddDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId, float Timeout);
    
};

