#pragma once
#include "CoreMinimal.h"
#include "OnlineUserPresenceSteamCoreBlueprint.h"
#include "OnlineFriendSteamCoreBlueprint.generated.h"

USTRUCT(BlueprintType)
struct STEAMCORESHARED_API FOnlineFriendSteamCoreBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RealName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineUserPresenceSteamCoreBlueprint Presence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamID;
    
    FOnlineFriendSteamCoreBlueprint();
};

