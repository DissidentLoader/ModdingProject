#pragma once
#include "CoreMinimal.h"
#include "ESteamResult.h"
#include "SteamGameID.h"
#include "SteamID.h"
#include "RequestCurrentStatsData.generated.h"

USTRUCT(BlueprintType)
struct FRequestCurrentStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamGameID GameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESteamResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamIDUser;
    
    STEAMCOREPRO_API FRequestCurrentStatsData();
};

