#pragma once
#include "CoreMinimal.h"
#include "ScePadTriggerEffectFeedbackParam.generated.h"

USTRUCT(BlueprintType)
struct FScePadTriggerEffectFeedbackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Strength;
    
    STEAMCOREPRO_API FScePadTriggerEffectFeedbackParam();
};

