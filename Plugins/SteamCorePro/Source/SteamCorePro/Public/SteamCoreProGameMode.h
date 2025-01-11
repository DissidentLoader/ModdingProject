#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "GameFramework/GameMode.h"
#include "SteamCoreProGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class STEAMCOREPRO_API ASteamCoreProGameMode : public AGameMode {
    GENERATED_BODY()
public:
    ASteamCoreProGameMode(const FObjectInitializer& ObjectInitializer);

};

