#pragma once
#include "CoreMinimal.h"
#include "ScePadTriggerEffectVibrationParam.generated.h"

USTRUCT(BlueprintType)
struct FScePadTriggerEffectVibrationParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Frequency;
    
    STEAMCOREPRO_API FScePadTriggerEffectVibrationParam();
};

