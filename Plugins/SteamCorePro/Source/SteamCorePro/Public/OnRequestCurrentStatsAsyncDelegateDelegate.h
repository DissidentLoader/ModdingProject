#pragma once
#include "CoreMinimal.h"
#include "RequestCurrentStatsData.h"
#include "OnRequestCurrentStatsAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRequestCurrentStatsAsyncDelegate, const FRequestCurrentStatsData&, Data, bool, bWasSuccessful);

