#pragma once
#include "CoreMinimal.h"
#include "OnRemoveUGCDependencyResultAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "RemoveUGCDependencyResult.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUGCAsyncActionRemoveUGCDependency.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionRemoveUGCDependency;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionRemoveUGCDependency : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveUGCDependencyResultAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionRemoveUGCDependency();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionRemoveUGCDependency* RemoveDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FRemoveUGCDependencyResult& Data, bool bWasSuccessful);
    
};

