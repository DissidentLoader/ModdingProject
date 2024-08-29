#pragma once
#include "CoreMinimal.h"
#include "EquippedProfileItemsChanged.h"
#include "OnEquippedProfileItemsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquippedProfileItemsChanged, const FEquippedProfileItemsChanged&, Data);

