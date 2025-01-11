#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
#include "FindSessionsCallbackProxy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamCoreShared -ObjectName=SteamSessionSetting -FallbackName=SteamSessionSetting
#include "SteamSessionSetting.h"
#include "SteamSessionResult.generated.h"

USTRUCT(BlueprintType)
struct FSteamSessionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintSessionResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSteamSessionSetting> SessionSettings;
    
    STEAMCOREPRO_API FSteamSessionResult();
};

