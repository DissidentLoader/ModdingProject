#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SteamCoreProAsyncAction.generated.h"

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    USteamCoreProAsyncAction();

};

