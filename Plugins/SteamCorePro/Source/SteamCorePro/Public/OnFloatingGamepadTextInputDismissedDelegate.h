#pragma once
#include "CoreMinimal.h"
#include "FloatingGamepadTextInputDismissed.h"
#include "OnFloatingGamepadTextInputDismissedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFloatingGamepadTextInputDismissed, const FFloatingGamepadTextInputDismissed&, Data);

