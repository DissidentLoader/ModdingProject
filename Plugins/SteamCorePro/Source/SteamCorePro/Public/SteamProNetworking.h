#pragma once
#include "CoreMinimal.h"
#include "ESteamP2PSend.h"
#include "OnP2PSessionConnectFailDelegate.h"
#include "OnP2PSessionRequestDelegate.h"
#include "SteamCoreInterface.h"
#include "SteamID.h"
#include "SteamP2PSessionState.h"
#include "SteamProNetworking.generated.h"

class USteamProNetworking;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamProNetworking : public USteamCoreInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnP2PSessionRequest OnP2PSessionRequestDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnP2PSessionConnectFail OnP2PSessionConnectFailDelegate;
    
    USteamProNetworking();

    UFUNCTION(BlueprintCallable)
    bool SendP2PPacket(FSteamID SteamIDRemote, TArray<uint8> Data, ESteamP2PSend P2PSendType, int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    bool ReadP2PPacket(TArray<uint8>& Data, FSteamID& OutSteamIdRemote, int32 MessageSize, int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    bool IsP2PPacketAvailable(int32& MessageSize, int32 Channel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USteamProNetworking* GetSteamNetworking();
    
    UFUNCTION(BlueprintCallable)
    bool GetP2PSessionState(FSteamID SteamIDRemote, FSteamP2PSessionState& ConnectionState);
    
    UFUNCTION(BlueprintCallable)
    bool CloseP2PSessionWithUser(FSteamID SteamIDRemote);
    
    UFUNCTION(BlueprintCallable)
    bool CloseP2PChannelWithUser(FSteamID SteamIDRemote, int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    bool AllowP2PPacketRelay(bool bAllow);
    
    UFUNCTION(BlueprintCallable)
    bool AcceptP2PSessionWithUser(FSteamID SteamIDRemote);
    
};

