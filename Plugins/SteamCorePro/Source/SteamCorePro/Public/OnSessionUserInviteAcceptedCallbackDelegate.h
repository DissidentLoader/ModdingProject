#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
#include "OnSessionUserInviteAcceptedCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FOnSessionUserInviteAcceptedCallback, bool, bWasSuccessful, int32, LocalPlayerNum, const FString&, InvitedBy, const FBlueprintSessionResult&, Session);

