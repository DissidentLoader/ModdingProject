#pragma once
#include "CoreMinimal.h"
#include "DownloadClanActivityCountsResult.generated.h"

USTRUCT(BlueprintType)
struct FDownloadClanActivityCountsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    STEAMCOREPRO_API FDownloadClanActivityCountsResult();
};

