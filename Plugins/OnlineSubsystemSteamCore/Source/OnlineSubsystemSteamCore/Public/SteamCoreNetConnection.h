#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpConnection -FallbackName=IpConnection
#include "IpConnection.h"
#include "SteamCoreNetConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class USteamCoreNetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsPassthrough;
    
    USteamCoreNetConnection();

};

