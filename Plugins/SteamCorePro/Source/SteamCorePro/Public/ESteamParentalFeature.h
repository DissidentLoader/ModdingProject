#pragma once
#include "CoreMinimal.h"
#include "ESteamParentalFeature.generated.h"

UENUM(BlueprintType)
enum class ESteamParentalFeature : uint8 {
    k_EFeatureInvalid,
    k_EFeatureStore,
    k_EFeatureCommunity,
    k_EFeatureProfile,
    k_EFeatureFriends,
    k_EFeatureNews,
    k_EFeatureTrading,
    k_EFeatureSettings,
    k_EFeatureConsole,
    k_EFeatureBrowser,
    k_EFeatureParentalSetup,
    k_EFeatureLibrary,
    k_EFeatureTest,
    k_EFeatureSiteLicense,
    k_EFeatureKioskMode_Deprecated,
    k_EFeatureBlockAlways,
    k_EFeatureMax,
};

