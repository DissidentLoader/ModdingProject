#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreProInputSourceMode.h"
#include "InputAnalogActionData.generated.h"

USTRUCT(BlueprintType)
struct FInputAnalogActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamCoreProInputSourceMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    STEAMCOREPRO_API FInputAnalogActionData();
};

