#pragma once
#include "CoreMinimal.h"
#include "IpNetDriver.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpNetDriver -FallbackName=IpNetDriver
#include "SteamCoreNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class USteamCoreNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    USteamCoreNetDriver();

};

