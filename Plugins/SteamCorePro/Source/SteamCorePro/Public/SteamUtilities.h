#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "Misc/DateTime.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "Engine/LatentActionManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamCoreShared -ObjectName=OnlineFriendSteamCoreBlueprint -FallbackName=OnlineFriendSteamCoreBlueprint
#include "OnlineFriendSteamCoreBlueprint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamCoreShared -ObjectName=SteamSessionSetting -FallbackName=SteamSessionSetting
#include "SteamSessionSetting.h"
#include "EFriendListType.h"
#include "ESteamAccountType.h"
#include "ESteamAttributeType.h"
#include "ESteamComparisonOp.h"
#include "ESteamCoreNetworkingIdentityType.h"
#include "ESteamCoreProIdentical.h"
#include "ESteamCoreProValid.h"
#include "OnHTTPResponseDelegate.h"
#include "OnSessionUserInviteAcceptedCallbackDelegate.h"
#include "OnSteamMessageDelegate.h"
#include "PublishedFileID.h"
#include "SteamGameID.h"
#include "SteamID.h"
#include "SteamInventoryUpdateHandle.h"
#include "SteamItemInstanceID.h"
#include "SteamNetworkingIdentity.h"
#include "SteamServerAddr.h"
#include "SteamSessionSearchSetting.h"
#include "SteamTicketHandle.h"
#include "SteamUGCHandle.h"
#include "SteamUtilities.generated.h"

class APlayerController;
class APlayerState;
class UObject;
class UServerFilter;

UCLASS(Abstract, Blueprintable)
class STEAMCOREPRO_API USteamUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USteamUtilities();

    UFUNCTION(BlueprintCallable)
    static bool WriteBytesToFile(bool bOverwriteIfExists, const FString& AbsoluteFilePath, const TArray<uint8>& DataBuffer);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateVoiceInputDevice(const FString& DeviceID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UnmuteRemoteTalker(UObject* WorldContextObject, int32 LocalUserNum, APlayerState* PlayerState, bool bIsSystemWide);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool TryJoinServer(FString& OutErrorMessage, const UObject* WorldContextObject, const FSteamServerAddr& ServerAddr, APlayerController* SpecificPlayer, bool bUsingSockets);
    
    UFUNCTION(BlueprintCallable)
    static void StopListeningForSessionInviteAccepted();
    
    UFUNCTION(BlueprintCallable)
    static void SteamItemInstanceID_Equals_Exec(FSteamItemInstanceID A, FSteamItemInstanceID B, ESteamCoreProIdentical& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SteamItemInstanceID_Equals(FSteamItemInstanceID A, FSteamItemInstanceID B);
    
    UFUNCTION(BlueprintCallable)
    static void SetXboxPairwiseId(UPARAM(Ref) FSteamNetworkingIdentity& SteamNetworkingIdentity, const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static void SetType(UPARAM(Ref) FSteamNetworkingIdentity& SteamNetworkingIdentity, ESteamCoreNetworkingIdentityType Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetSteamId64(UPARAM(Ref) FSteamNetworkingIdentity& SteamNetworkingIdentity, FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    static void SetStadiaId(UPARAM(Ref) FSteamNetworkingIdentity& SteamNetworkingIdentity, int64 ID);
    
    UFUNCTION(BlueprintCallable)
    static void SetPSNId(UPARAM(Ref) FSteamNetworkingIdentity& SteamNetworkingIdentity, int64 ID);
    
    UFUNCTION(BlueprintCallable)
    static void SetLocalHost(UPARAM(Ref) FSteamNetworkingIdentity& SteamNetworkingIdentity);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ReadFriendList(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TEnumAsByte<EFriendListType> FriendListType);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> ReadFileToBytes(const FString& AbsoluteFilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PublishedFileID_NotEquals(FPublishedFileID A, FPublishedFileID B);
    
    UFUNCTION(BlueprintCallable)
    static void PublishedFileID_Equals_Exec(FPublishedFileID A, FPublishedFileID B, ESteamCoreProIdentical& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PublishedFileID_Equals(FPublishedFileID A, FPublishedFileID B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual(FSteamID A, FSteamID B);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool MuteRemoteTalker(UObject* WorldContextObject, int32 LocalUserNum, APlayerState* PlayerState, bool bIsSystemWide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamUGCHandle MakeUGCHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamTicketHandle MakeTicketHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamSessionSetting MakeString(const FString& Value);
    
    UFUNCTION(BlueprintPure)
    static FSteamItemInstanceID MakeSteamItemInstanceID(int64 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamID MakeSteamID(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamGameID MakeSteamGameID(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamSessionSearchSetting MakeSearchString(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamSessionSearchSetting MakeSearchInteger(const ESteamComparisonOp ComparisonOperator, const int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPublishedFileID MakePublishedFileID(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamInventoryUpdateHandle MakeInventoryUpdateHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamSessionSetting MakeInteger(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void ListenForSteamMessages(const FOnSteamMessage& Callback);
    
    UFUNCTION(BlueprintCallable)
    static void ListenForSessionInviteAccepted(const FOnSessionUserInviteAcceptedCallback& Callback);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool KickPlayer(UObject* WorldContextObject, APlayerController* KickedPlayer, const FText& KickReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_IsPlayerInSession(int32 LocalUserNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString K2_HexToString(TArray<uint8> Array);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> K2_HexToBytes(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsingP2PRelays();
    
    UFUNCTION(BlueprintCallable)
    static void IsUGCHandleValid_Exec(const FSteamUGCHandle Handle, ESteamCoreProValid& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUGCHandleValid(const FSteamUGCHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void IsSteamTicketHandleValid_Exec(const FSteamTicketHandle Handle, ESteamCoreProValid& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSteamTicketHandleValid(const FSteamTicketHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSteamServerInitialized();
    
    UFUNCTION(BlueprintCallable)
    static void IsSteamInventoryUpdateHandleValid_Exec(const FSteamInventoryUpdateHandle Handle, ESteamCoreProValid& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSteamInventoryUpdateHandleValid(const FSteamInventoryUpdateHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void IsSteamIDValid_Exec(const FSteamID SteamID, ESteamCoreProValid& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSteamAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsRemotePlayerTalking(UObject* WorldContextObject, APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRecalculatingPing();
    
    UFUNCTION(BlueprintCallable)
    static void IsPublishedFileIDValid_Exec(const FPublishedFileID Handle, ESteamCoreProValid& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPublishedFileIDValid(FPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerMuted(UObject* WorldContextObject, APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocalPlayerTalking(UObject* WorldContextObject, int32 LocalUserNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLobby(FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    static void IsGameIDValid_Exec(const FSteamGameID GameID, ESteamCoreProValid& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameIDValid(const FSteamGameID GameID);
    
    UFUNCTION(BlueprintCallable)
    static FString GetVoiceInputDevice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESteamAttributeType GetType(FSteamSessionSetting Settings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetString(FSteamSessionSetting Settings, FString& Key, FString& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static FSteamID GetSteamIdFromPlayerState(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static void GetPublicIp(const FOnHTTPResponse& Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPingFromHostData(const FString& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetInteger(FSteamSessionSetting Settings, FString& Key, int32& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static FString GetHostPingData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGameEngineInitialized();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FOnlineFriendSteamCoreBlueprint> GetFriendsList(TEnumAsByte<EFriendListType> FriendListType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESteamAccountType GetAccountType(FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime FromUnixTimestamp(const FString& Timestamp);
    
    UFUNCTION(BlueprintCallable)
    static void Equal_Exec(FSteamID A, const FSteamID B, ESteamCoreProIdentical& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal(FSteamID A, FSteamID B);
    
    UFUNCTION(BlueprintCallable)
    static FString EncryptString(const FString& String);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UServerFilter* ConstructServerFilter(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BreakUGCHandle(FSteamUGCHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BreakTicketHandle(FSteamTicketHandle Handle);
    
    UFUNCTION(BlueprintPure)
    static int64 BreakSteamItemInstanceID(FSteamItemInstanceID SteamItemInstanceID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BreakSteamID(FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BreakSteamGameID(FSteamGameID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BreakPublishedFileID(FPublishedFileID FileID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BreakInventoryUpdateHandle(FSteamInventoryUpdateHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> BP_StringToBytes(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BP_BytesToString(TArray<uint8> Array);
    
};

