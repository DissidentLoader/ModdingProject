#pragma once
#include "CoreMinimal.h"
#include "JoinClanChatRoomCompletionResult.h"
#include "OnJoinClanChatRoomAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamID.h"
#include "SteamCoreProFriendsAsyncActionJoinClanChatRoom.generated.h"

class UObject;
class USteamCoreProFriendsAsyncActionJoinClanChatRoom;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProFriendsAsyncActionJoinClanChatRoom : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinClanChatRoomAsyncDelegate OnCallback;
    
    USteamCoreProFriendsAsyncActionJoinClanChatRoom();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProFriendsAsyncActionJoinClanChatRoom* JoinClanChatRoomAsync(UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful);
    
};

