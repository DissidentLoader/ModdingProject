#pragma once
#include "CoreMinimal.h"
#include "SteamID.h"
#include "EquippedProfileItemsChanged.generated.h"

USTRUCT(BlueprintType)
struct FEquippedProfileItemsChanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamID SteamID;
    
    STEAMCOREPRO_API FEquippedProfileItemsChanged();
};

