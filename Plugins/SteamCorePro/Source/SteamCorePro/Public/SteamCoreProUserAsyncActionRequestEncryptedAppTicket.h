#pragma once
#include "CoreMinimal.h"
#include "EncryptedAppTicketResponse.h"
#include "RequestEncryptedAppTicketDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProUserAsyncActionRequestEncryptedAppTicket.generated.h"

class UObject;
class USteamCoreProUserAsyncActionRequestEncryptedAppTicket;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProUserAsyncActionRequestEncryptedAppTicket : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestEncryptedAppTicketDelegate OnCallback;
    
    USteamCoreProUserAsyncActionRequestEncryptedAppTicket();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProUserAsyncActionRequestEncryptedAppTicket* RequestEncryptedAppTicketAsync(UObject* WorldContextObject, TArray<uint8> DataToInclude, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FEncryptedAppTicketResponse& Data, bool bWasSuccessful);
    
};

