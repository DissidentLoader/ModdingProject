#pragma once
#include "CoreMinimal.h"
#include "ScePadTriggerEffectMultiplePositionVibrationParam.generated.h"

USTRUCT(BlueprintType)
struct FScePadTriggerEffectMultiplePositionVibrationParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Amplitude;
    
    STEAMCOREPRO_API FScePadTriggerEffectMultiplePositionVibrationParam();
};

