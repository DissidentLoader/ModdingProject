#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SteamCoreSubsystemUtilities.generated.h"

UCLASS(Abstract, Blueprintable)
class ONLINESUBSYSTEMSTEAMCORE_API USteamCoreSubsystemUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USteamCoreSubsystemUtilities();

    UFUNCTION(BlueprintCallable)
    static bool SendSessionInviteToFriend(int32 LocalUserNum, const FString& FriendSteamId);
    
};

