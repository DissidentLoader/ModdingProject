#pragma once
#include "CoreMinimal.h"
#include "ScePadTriggerEffectMultiplePositionFeedbackParam.generated.h"

USTRUCT(BlueprintType)
struct FScePadTriggerEffectMultiplePositionFeedbackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Strength;
    
    STEAMCOREPRO_API FScePadTriggerEffectMultiplePositionFeedbackParam();
};

