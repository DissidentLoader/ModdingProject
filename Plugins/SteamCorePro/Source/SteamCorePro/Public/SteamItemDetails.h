#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreProItemFlags.h"
#include "SteamItemDef.h"
#include "SteamItemInstanceID.h"
#include "SteamItemDetails.generated.h"

USTRUCT(BlueprintType)
struct FSteamItemDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamItemInstanceID InstanceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamItemDef Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ESteamCoreProItemFlags>> Flags;
    
    STEAMCOREPRO_API FSteamItemDetails();
};

