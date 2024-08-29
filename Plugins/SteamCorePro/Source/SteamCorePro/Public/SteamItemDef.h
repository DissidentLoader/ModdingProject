#pragma once
#include "CoreMinimal.h"
#include "SteamItemDef.generated.h"

USTRUCT(BlueprintType)
struct FSteamItemDef {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    STEAMCOREPRO_API FSteamItemDef();
};

