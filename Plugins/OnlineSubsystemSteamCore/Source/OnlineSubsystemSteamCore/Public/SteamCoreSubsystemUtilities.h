#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamCoreShared -ObjectName=SteamSessionSetting -FallbackName=SteamSessionSetting
#include "SteamSessionSetting.h"
#include "SteamCoreSubsystemUtilities.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable)
class ONLINESUBSYSTEMSTEAMCORE_API USteamCoreSubsystemUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USteamCoreSubsystemUtilities();

    UFUNCTION(BlueprintCallable)
    static bool SendSessionInviteToFriend(int32 LocalUserNum, const FString& FriendSteamId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSessionSettings(UObject* WorldContextObject, TArray<FSteamSessionSetting>& SessionSettings, FString& SessionName, int32& MaxPlayers, bool& bAllowInvites, bool& bUsesPresence, bool& bAllowJoinInProgress, bool& bAllowJoinViaPresence, bool& bAllowJoinViaPresenceFriendsOnly, bool& bAntiCheatProtected, bool& bUsesStats, bool& bShouldAdvertise, bool& bUseLobbiesIfAvailable, bool& bUseLobbiesVoiceChatIfAvailable);
    
    UFUNCTION(BlueprintCallable)
    static void GetExtraSessionSettings(TArray<FSteamSessionSetting>& SessionSettings);
    
    UFUNCTION(BlueprintCallable)
    static void FindFriendSessions();
    
};

