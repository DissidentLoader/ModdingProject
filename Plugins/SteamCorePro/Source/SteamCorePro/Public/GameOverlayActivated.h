#pragma once
#include "CoreMinimal.h"
#include "GameOverlayActivated.generated.h"

USTRUCT(BlueprintType)
struct FGameOverlayActivated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUserInitiated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppID;
    
    STEAMCOREPRO_API FGameOverlayActivated();
};

