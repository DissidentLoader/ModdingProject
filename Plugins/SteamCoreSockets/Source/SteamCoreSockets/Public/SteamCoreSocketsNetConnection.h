#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NetConnection -FallbackName=NetConnection
#include "Engine/NetConnection.h"
#include "SteamCoreSocketsNetConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class STEAMCORESOCKETS_API USteamCoreSocketsNetConnection : public UNetConnection {
    GENERATED_BODY()
public:
    USteamCoreSocketsNetConnection();

};

