#pragma once
#include "CoreMinimal.h"
#include "SteamCoreInterface.h"
#include "SteamNetworkPingLocation.h"
#include "SteamProNetworkingUtils.generated.h"

class USteamProNetworkingUtils;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamProNetworkingUtils : public USteamCoreInterface {
    GENERATED_BODY()
public:
    USteamProNetworkingUtils();

    UFUNCTION(BlueprintCallable)
    static bool ParsePingLocationString(const FString& String, FSteamNetworkPingLocation& Result);
    
    UFUNCTION(BlueprintCallable)
    void InitRelayNetworkAccess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USteamProNetworkingUtils* GetSteamNetworkingUtils();
    
    UFUNCTION(BlueprintCallable)
    float GetLocalPingLocation(FSteamNetworkPingLocation& Result);
    
    UFUNCTION(BlueprintCallable)
    int32 EstimatePingTimeFromLocalHost(const FSteamNetworkPingLocation& RemoteLocation);
    
    UFUNCTION(BlueprintCallable)
    int32 EstimatePingTimeBetweenTwoLocations(const FSteamNetworkPingLocation& Location1, const FSteamNetworkPingLocation& Location2);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertPingLocationToString(const FSteamNetworkPingLocation& Location, FString& String);
    
    UFUNCTION(BlueprintCallable)
    bool CheckPingDataUpToDate(float MaxAgeSeconds);
    
};

