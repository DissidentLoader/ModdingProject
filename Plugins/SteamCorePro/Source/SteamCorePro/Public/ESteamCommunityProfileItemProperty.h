#pragma once
#include "CoreMinimal.h"
#include "ESteamCommunityProfileItemProperty.generated.h"

UENUM(BlueprintType)
enum class ESteamCommunityProfileItemProperty : uint8 {
    k_ECommunityProfileItemProperty_ImageSmall,
    k_ECommunityProfileItemProperty_ImageLarge,
    k_ECommunityProfileItemProperty_InternalName,
    k_ECommunityProfileItemProperty_Title,
    k_ECommunityProfileItemProperty_Description,
    k_ECommunityProfileItemProperty_AppID,
    k_ECommunityProfileItemProperty_TypeID,
    k_ECommunityProfileItemProperty_Class,
    k_ECommunityProfileItemProperty_MovieWebM,
    k_ECommunityProfileItemProperty_MovieMP4,
    k_ECommunityProfileItemProperty_MovieWebMSmall,
    k_ECommunityProfileItemProperty_MovieMP4Small,
};

