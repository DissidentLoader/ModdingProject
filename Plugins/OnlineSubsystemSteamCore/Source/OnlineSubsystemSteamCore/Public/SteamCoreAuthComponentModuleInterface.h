#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PacketHandler -ObjectName=HandlerComponentFactory -FallbackName=HandlerComponentFactory
#include "HandlerComponentFactory.h"
#include "SteamCoreAuthComponentModuleInterface.generated.h"

UCLASS(Blueprintable)
class USteamCoreAuthComponentModuleInterface : public UHandlerComponentFactory {
    GENERATED_BODY()
public:
    USteamCoreAuthComponentModuleInterface();

};

