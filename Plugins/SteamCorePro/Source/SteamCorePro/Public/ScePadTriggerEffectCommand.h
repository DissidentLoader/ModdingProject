#pragma once
#include "CoreMinimal.h"
#include "EScePadTriggerEffectMode.h"
#include "ScePadTriggerEffectCommandData.h"
#include "ScePadTriggerEffectCommand.generated.h"

USTRUCT(BlueprintType)
struct FScePadTriggerEffectCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScePadTriggerEffectMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScePadTriggerEffectCommandData CommandData;
    
    STEAMCOREPRO_API FScePadTriggerEffectCommand();
};

