#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpNetDriver -FallbackName=IpNetDriver
#include "IpNetDriver.h"
#include "SteamCoreNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class USteamCoreNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    USteamCoreNetDriver();

};

