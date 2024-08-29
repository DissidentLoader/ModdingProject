#pragma once
#include "CoreMinimal.h"
#include "WorkshopEULAStatus.h"
#include "OnWorkshopEULAStatusDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWorkshopEULAStatus, const FWorkshopEULAStatus&, Data);

