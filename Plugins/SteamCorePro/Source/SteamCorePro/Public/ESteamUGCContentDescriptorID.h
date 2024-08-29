#pragma once
#include "CoreMinimal.h"
#include "ESteamUGCContentDescriptorID.generated.h"

UENUM(BlueprintType)
enum class ESteamUGCContentDescriptorID : uint8 {
    k_EUGCContentDescriptor_NudityOrSexualContent,
    k_EUGCContentDescriptor_FrequentViolenceOrGore,
    k_EUGCContentDescriptor_AdultOnlySexualContent,
    k_EUGCContentDescriptor_GratuitousSexualContent,
    k_EUGCContentDescriptor_AnyMatureContent,
};

