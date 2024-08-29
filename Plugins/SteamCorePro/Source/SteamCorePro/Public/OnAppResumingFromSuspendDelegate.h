#pragma once
#include "CoreMinimal.h"
#include "AppResumingFromSuspend.h"
#include "OnAppResumingFromSuspendDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAppResumingFromSuspend, const FAppResumingFromSuspend&, Data);

