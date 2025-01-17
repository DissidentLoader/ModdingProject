#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "PublishedFileID.h"
#include "AddAppDependencyResult.generated.h"

USTRUCT(BlueprintType)
struct FAddAppDependencyResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPublishedFileID PublishedFileID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppID;
    
    STEAMCOREPRO_API FAddAppDependencyResult();
};

