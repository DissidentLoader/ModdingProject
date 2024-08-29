#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamTicketHandle.h"
#include "GetTicketForWebApiResponse.generated.h"

USTRUCT(BlueprintType)
struct FGetTicketForWebApiResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamTicketHandle AuthTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Ticket;
    
    STEAMCOREPRO_API FGetTicketForWebApiResponse();
};

