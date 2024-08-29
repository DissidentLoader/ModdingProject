#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NetDriver -FallbackName=NetDriver
#include "SteamCoreSocketsNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class STEAMCORESOCKETS_API USteamCoreSocketsNetDriver : public UNetDriver {
    GENERATED_BODY()
public:
    USteamCoreSocketsNetDriver();

};

