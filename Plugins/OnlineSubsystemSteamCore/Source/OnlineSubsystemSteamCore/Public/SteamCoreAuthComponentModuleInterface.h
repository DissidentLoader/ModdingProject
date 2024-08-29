#pragma once
#include "CoreMinimal.h"
#include "HandlerComponentFactory.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PacketHandler -ObjectName=HandlerComponentFactory -FallbackName=HandlerComponentFactory
#include "SteamCoreAuthComponentModuleInterface.generated.h"

UCLASS(Blueprintable)
class USteamCoreAuthComponentModuleInterface : public UHandlerComponentFactory {
    GENERATED_BODY()
public:
    USteamCoreAuthComponentModuleInterface();

};

