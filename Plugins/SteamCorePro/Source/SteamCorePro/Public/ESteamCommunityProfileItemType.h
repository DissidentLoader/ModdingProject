#pragma once
#include "CoreMinimal.h"
#include "ESteamCommunityProfileItemType.generated.h"

UENUM(BlueprintType)
enum class ESteamCommunityProfileItemType : uint8 {
    k_ECommunityProfileItemType_AnimatedAvatar,
    k_ECommunityProfileItemType_AvatarFrame,
    k_ECommunityProfileItemType_ProfileModifier,
    k_ECommunityProfileItemType_ProfileBackground,
    k_ECommunityProfileItemType_MiniProfileBackground,
};

