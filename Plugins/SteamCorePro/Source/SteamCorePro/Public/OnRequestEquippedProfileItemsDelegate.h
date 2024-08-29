#pragma once
#include "CoreMinimal.h"
#include "EquippedProfileItems.h"
#include "OnRequestEquippedProfileItemsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestEquippedProfileItems, const FEquippedProfileItems&, Data, bool, bWasSuccessful);

