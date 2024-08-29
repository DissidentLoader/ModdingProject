#pragma once
#include "CoreMinimal.h"
#include "OnSetUserItemVoteAsyncDelegateDelegate.h"
#include "PublishedFileID.h"
#include "SetUserItemVoteResult.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUGCAsyncActionSetUserItemVote.generated.h"

class UObject;
class USteamCoreProUGCAsyncActionSetUserItemVote;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUGCAsyncActionSetUserItemVote : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetUserItemVoteAsyncDelegate OnCallback;
    
    USteamCoreProUGCAsyncActionSetUserItemVote();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUGCAsyncActionSetUserItemVote* SetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bVoteUp, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSetUserItemVoteResult& Data, bool bWasSuccessful);
    
};

