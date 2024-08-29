#pragma once
#include "CoreMinimal.h"
#include "ScePadTriggerEffectFeedbackParam.h"
#include "ScePadTriggerEffectMultiplePositionFeedbackParam.h"
#include "ScePadTriggerEffectMultiplePositionVibrationParam.h"
#include "ScePadTriggerEffectOffParam.h"
#include "ScePadTriggerEffectSlopeFeedbackParam.h"
#include "ScePadTriggerEffectVibrationParam.h"
#include "ScePadTriggerEffectWeaponParam.h"
#include "ScePadTriggerEffectCommandData.generated.h"

USTRUCT(BlueprintType)
struct FScePadTriggerEffectCommandData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScePadTriggerEffectOffParam OffParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScePadTriggerEffectFeedbackParam FeedbackParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScePadTriggerEffectWeaponParam WeaponParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScePadTriggerEffectVibrationParam VibrationParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScePadTriggerEffectMultiplePositionFeedbackParam MultiplePositionFeedbackParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScePadTriggerEffectSlopeFeedbackParam SlopeFeedbackParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScePadTriggerEffectMultiplePositionVibrationParam MultiplePositionVibrationParam;
    
    STEAMCOREPRO_API FScePadTriggerEffectCommandData();
};

