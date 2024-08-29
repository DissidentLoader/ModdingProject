#pragma once
#include "CoreMinimal.h"
#include "ESteamParentalFeature.h"
#include "SteamCoreInterface.h"
#include "SteamProParentalSettings.generated.h"

class USteamProParentalSettings;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamProParentalSettings : public USteamCoreInterface {
    GENERATED_BODY()
public:
    USteamProParentalSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USteamProParentalSettings* GetSteamParentalSettings();
    
    UFUNCTION(BlueprintCallable)
    bool BIsParentalLockLocked();
    
    UFUNCTION(BlueprintCallable)
    bool BIsParentalLockEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool BIsFeatureInBlockList(ESteamParentalFeature Feature);
    
    UFUNCTION(BlueprintCallable)
    bool BIsFeatureBlocked(ESteamParentalFeature Feature);
    
    UFUNCTION(BlueprintCallable)
    bool BIsAppInBlockList(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    bool BIsAppBlocked(int32 AppID);
    
};

