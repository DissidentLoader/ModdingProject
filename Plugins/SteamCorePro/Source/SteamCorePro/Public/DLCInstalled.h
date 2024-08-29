#pragma once
#include "CoreMinimal.h"
#include "DLCInstalled.generated.h"

USTRUCT(BlueprintType)
struct FDLCInstalled {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppID;
    
    STEAMCOREPRO_API FDLCInstalled();
};

