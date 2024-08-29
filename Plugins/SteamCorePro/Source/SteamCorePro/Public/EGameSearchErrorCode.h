#pragma once
#include "CoreMinimal.h"
#include "EGameSearchErrorCode.generated.h"

UENUM(BlueprintType)
enum class EGameSearchErrorCode : uint8 {
    UNKNOWN,
    k_EGameSearchErrorCode_OK,
    k_EGameSearchErrorCode_Failed_Search_Already_In_Progress,
    k_EGameSearchErrorCode_Failed_No_Search_In_Progress,
    k_EGameSearchErrorCode_Failed_Not_Lobby_Leader,
    k_EGameSearchErrorCode_Failed_No_Host_Available,
    k_EGameSearchErrorCode_Failed_Search_Params_Invalid,
    k_EGameSearchErrorCode_Failed_Offline,
    k_EGameSearchErrorCode_Failed_NotAuthorized,
    k_EGameSearchErrorCode_Failed_Unknown_Error,
};

