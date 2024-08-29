#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreInputConfigurationEnableType.h"
#include "ESteamCoreProControllerPad.h"
#include "ESteamCoreProInputActionOrigin.h"
#include "ESteamCoreProInputLEDFlag.h"
#include "ESteamCoreProInputType.h"
#include "ESteamCoreProXboxOrigin.h"
#include "InputActionSetHandle.h"
#include "InputAnalogActionData.h"
#include "InputAnalogActionHandle.h"
#include "InputDigitalActionData.h"
#include "InputDigitalActionHandle.h"
#include "InputHandle.h"
#include "InputMotionData.h"
#include "ScePadTriggerEffectCommand.h"
#include "SteamCoreInterface.h"
#include "SteamProInput.generated.h"

class USteamProInput;

UCLASS(Blueprintable)
class STEAMCOREPRO_API USteamProInput : public USteamCoreInterface {
    GENERATED_BODY()
public:
    USteamProInput();

    UFUNCTION(BlueprintCallable)
    void TriggerVibration(FInputHandle Handle, uint8 LeftSpeed, uint8 RightSpeed);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESteamCoreProInputActionOrigin> TranslateActionOrigin(ESteamCoreProInputType DestinationInputType, TEnumAsByte<ESteamCoreProInputActionOrigin> SourceOrigin);
    
    UFUNCTION(BlueprintCallable)
    void StopAnalogActionMomentum(FInputHandle Handle, FInputAnalogActionHandle EAction);
    
    UFUNCTION(BlueprintCallable)
    bool Shutdown();
    
    UFUNCTION(BlueprintCallable)
    bool ShowBindingPanel(FInputHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void SetLEDColor(FInputHandle Handle, uint8 ColorR, uint8 ColorG, uint8 ColorB, ESteamCoreProInputLEDFlag Flags);
    
    UFUNCTION(BlueprintCallable)
    static void SetDualSenseTriggerEffect(FInputHandle InputHandle, FScePadTriggerEffectCommand R2, FScePadTriggerEffectCommand L2);
    
    UFUNCTION(BlueprintCallable)
    void Legacy_TriggerRepeatedHapticPulse(FInputHandle Handle, ESteamCoreProControllerPad TargetPad, uint8 DurationMicroSec, uint8 OffMicroSec, uint8 Repeat, uint8 Flags);
    
    UFUNCTION(BlueprintCallable)
    void Legacy_TriggerHapticPulse(FInputHandle Handle, ESteamCoreProControllerPad TargetPad, uint8 DurationMicroSec);
    
    UFUNCTION(BlueprintCallable)
    bool Init();
    
    UFUNCTION(BlueprintCallable)
    FString GetStringForXboxOrigin(ESteamCoreProXboxOrigin Origin);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringForDigitalActionName(FInputDigitalActionHandle ActionHandle);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringForAnalogActionName(FInputAnalogActionHandle ActionHandle);
    
    UFUNCTION(BlueprintCallable)
    FString GetStringForActionOrigin(TEnumAsByte<ESteamCoreProInputActionOrigin> Origin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USteamProInput* GetSteamInput();
    
    UFUNCTION(BlueprintCallable)
    static TArray<ESteamCoreInputConfigurationEnableType> GetSessionInputConfigurationSettings();
    
    UFUNCTION(BlueprintCallable)
    int32 GetRemotePlaySessionID(FInputHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    FInputMotionData GetMotionData(FInputHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    ESteamCoreProInputType GetInputTypeForHandle(FInputHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    FString GetGlyphForXboxOrigin(ESteamCoreProXboxOrigin Origin);
    
    UFUNCTION(BlueprintCallable)
    FString GetGlyphForActionOrigin_Legacy(TEnumAsByte<ESteamCoreProInputActionOrigin> Origin);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGamepadIndexForController(FInputHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDigitalActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputDigitalActionHandle DigitalActionHandle, TArray<TEnumAsByte<ESteamCoreProInputActionOrigin>>& OriginsOut);
    
    UFUNCTION(BlueprintCallable)
    FInputDigitalActionHandle GetDigitalActionHandle(const FString& PszActionName);
    
    UFUNCTION(BlueprintCallable)
    FInputDigitalActionData GetDigitalActionData(FInputHandle Handle, FInputDigitalActionHandle DigitalActionHandle);
    
    UFUNCTION(BlueprintCallable)
    bool GetDeviceBindingRevision(FInputHandle Handle, int32& Major, int32& Minor);
    
    UFUNCTION(BlueprintCallable)
    FInputActionSetHandle GetCurrentActionSet(FInputHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    FInputHandle GetControllerForGamepadIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetConnectedControllers(TArray<FInputHandle>& OutHandles);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnalogActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputAnalogActionHandle AnalogActionHandle, TArray<TEnumAsByte<ESteamCoreProInputActionOrigin>>& OriginsOut);
    
    UFUNCTION(BlueprintCallable)
    FInputAnalogActionHandle GetAnalogActionHandle(const FString& PszActionName);
    
    UFUNCTION(BlueprintCallable)
    FInputAnalogActionData GetAnalogActionData(FInputHandle Handle, FInputAnalogActionHandle AnalogActionHandle);
    
    UFUNCTION(BlueprintCallable)
    int32 GetActiveActionSetLayers(FInputHandle Handle, TArray<FInputActionSetHandle>& Data);
    
    UFUNCTION(BlueprintCallable)
    FInputActionSetHandle GetActionSetHandle(const FString& ActionSetName);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESteamCoreProInputActionOrigin> GetActionOriginFromXboxOrigin(FInputHandle Handle, ESteamCoreProXboxOrigin Origin);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAllActionSetLayers(FInputHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool BWaitForData(bool bWaitForever, int32 Timeout);
    
    UFUNCTION(BlueprintCallable)
    static bool BNewDataAvailable();
    
    UFUNCTION(BlueprintCallable)
    void ActivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle);
    
    UFUNCTION(BlueprintCallable)
    void ActivateActionSet(FInputHandle Handle, FInputActionSetHandle ActionSetHandle);
    
};

