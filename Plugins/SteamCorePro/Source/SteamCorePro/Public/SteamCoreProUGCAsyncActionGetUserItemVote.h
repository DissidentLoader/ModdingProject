#pragma once
#include "CoreMinimal.h"
#include "GetUserItemVoteResult.h"
#include "OnGetUserItemVoteAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUGCAsyncActionGetUserItemVote.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionGetUserItemVote;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionGetUserItemVote : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetUserItemVoteAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionGetUserItemVote();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FGetUserItemVoteResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionGetUserItemVote* GetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout);
    
};

