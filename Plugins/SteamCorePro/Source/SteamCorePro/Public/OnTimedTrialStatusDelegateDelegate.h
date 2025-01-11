#pragma once
#include "CoreMinimal.h"
#include "TimedTrialStatus.h"
#include "OnTimedTrialStatusDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimedTrialStatusDelegate, const FTimedTrialStatus&, Data);

