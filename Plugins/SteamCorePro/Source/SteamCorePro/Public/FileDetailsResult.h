#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "FileDetailsResult.generated.h"

USTRUCT(BlueprintType)
struct FFileDetailsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FileSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SHA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Flags;
    
    STEAMCOREPRO_API FFileDetailsResult();
};

