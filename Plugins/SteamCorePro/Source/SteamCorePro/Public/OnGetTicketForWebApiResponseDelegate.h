#pragma once
#include "CoreMinimal.h"
#include "GetTicketForWebApiResponse.h"
#include "OnGetTicketForWebApiResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetTicketForWebApiResponse, const FGetTicketForWebApiResponse&, Data);

