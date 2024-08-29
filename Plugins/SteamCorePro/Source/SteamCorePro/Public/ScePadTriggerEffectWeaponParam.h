#pragma once
#include "CoreMinimal.h"
#include "ScePadTriggerEffectWeaponParam.generated.h"

USTRUCT(BlueprintType)
struct FScePadTriggerEffectWeaponParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Strength;
    
    STEAMCOREPRO_API FScePadTriggerEffectWeaponParam();
};

