#pragma once
#include "CoreMinimal.h"
#include "OnGSStatsUnloadedDelegate.h"
#include "OnServerRequestUserStatsDelegate.h"
#include "OnServerStoreUserStatsDelegate.h"
#include "SteamCoreInterface.h"
#include "SteamID.h"
#include "SteamProGameServerStats.generated.h"

class USteamProGameServerStats;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamProGameServerStats : public USteamCoreInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGSStatsUnloaded GSStatsUnloaded;
    
    USteamProGameServerStats();

    UFUNCTION(BlueprintCallable)
    bool UpdateUserAvgRateStat(FSteamID SteamIDUser, const FString& Name, float CountThisSession, float SessionLength);
    
    UFUNCTION(BlueprintCallable)
    bool SetUserStatInt(FSteamID SteamIDUser, const FString& Name, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    bool SetUserStatFloat(FSteamID SteamIDUser, const FString& Name, float Data);
    
    UFUNCTION(BlueprintCallable)
    bool SetUserAchievement(FSteamID SteamIDUser, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void ServerStoreUserStats(const FOnServerStoreUserStats& Callback, FSteamID SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    void ServerRequestUserStats(const FOnServerRequestUserStats& Callback, FSteamID SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    bool GetUserStatInt(FSteamID SteamIDUser, const FString& Name, int32& Data);
    
    UFUNCTION(BlueprintCallable)
    bool GetUserStatFloat(FSteamID SteamIDUser, const FString& Name, float& Data);
    
    UFUNCTION(BlueprintCallable)
    bool GetUserAchievement(FSteamID SteamIDUser, const FString& Name, bool& bAchieved);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USteamProGameServerStats* GetSteamGameServerStats();
    
    UFUNCTION(BlueprintCallable)
    bool ClearUserAchievement(FSteamID SteamIDUser, const FString& Name);
    
};

