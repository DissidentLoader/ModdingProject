#pragma once
#include "CoreMinimal.h"
#include "ScePadTriggerEffectSlopeFeedbackParam.generated.h"

USTRUCT(BlueprintType)
struct FScePadTriggerEffectSlopeFeedbackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndStrength;
    
    STEAMCOREPRO_API FScePadTriggerEffectSlopeFeedbackParam();
};

