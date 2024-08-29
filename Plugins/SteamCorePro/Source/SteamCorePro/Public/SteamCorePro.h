#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SteamCorePro.generated.h"

UCLASS(Abstract, Blueprintable)
class STEAMCOREPRO_API USteamCorePro : public UObject {
    GENERATED_BODY()
public:
    USteamCorePro();

};

