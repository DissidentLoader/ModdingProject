#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreProDeviceFormFactor.h"
#include "OnSteamRemotePlaySessionConnectedDelegate.h"
#include "OnSteamRemotePlaySessionDisconnectedDelegate.h"
#include "SteamCoreInterface.h"
#include "SteamID.h"
#include "SteamProRemotePlay.generated.h"

class USteamProRemotePlay;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamProRemotePlay : public USteamCoreInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamRemotePlaySessionConnected SteamRemotePlaySessionConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamRemotePlaySessionDisconnected SteamRemotePlaySessionDisconnected;
    
    USteamProRemotePlay();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USteamProRemotePlay* GetSteamRemotePlay();
    
    UFUNCTION(BlueprintCallable)
    FSteamID GetSessionSteamID(int32 SessionID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSessionID(int32 SessionIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSessionCount();
    
    UFUNCTION(BlueprintCallable)
    FString GetSessionClientName(int32 SessionID);
    
    UFUNCTION(BlueprintCallable)
    ESteamCoreProDeviceFormFactor GetSessionClientFormFactor(int32 SessionID);
    
    UFUNCTION(BlueprintCallable)
    bool BStartRemotePlayTogether(bool bShowOverlay);
    
    UFUNCTION(BlueprintCallable)
    bool BSendRemotePlayTogetherInvite(FSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    bool BGetSessionClientResolution(int32 SessionID, int32& ResolutionX, int32& ResolutionY);
    
};

