#pragma once
#include "CoreMinimal.h"
#include "WorkshopEULAStatus.h"
#include "OnGetWorkshopEULAStatusDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetWorkshopEULAStatus, const FWorkshopEULAStatus&, Data, bool, bWasSuccessful);

