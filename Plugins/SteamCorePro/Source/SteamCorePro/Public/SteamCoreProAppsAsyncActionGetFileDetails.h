#pragma once
#include "CoreMinimal.h"
#include "FileDetailsResult.h"
#include "OnFileDetailsResultAsyncDelegateDelegate.h"
#include "SteamCoreProAsyncAction.h"
#include "SteamCoreProAppsAsyncActionGetFileDetails.generated.h"

class UObject;
class USteamCoreProAppsAsyncActionGetFileDetails;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamCoreProAppsAsyncActionGetFileDetails : public USteamCoreProAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFileDetailsResultAsyncDelegate OnCallback;
    
    USteamCoreProAppsAsyncActionGetFileDetails();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FFileDetailsResult& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreProAppsAsyncActionGetFileDetails* GetFileDetailsAsync(UObject* WorldContextObject, const FString& Filename, float Timeout);
    
};

