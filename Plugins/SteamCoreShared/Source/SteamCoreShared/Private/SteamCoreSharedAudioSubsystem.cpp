#include "SteamCoreSharedAudioSubsystem.h"

USteamCoreSharedAudioSubsystem::USteamCoreSharedAudioSubsystem() {
}

TArray<FSteamCoreAudioInputDeviceInfo> USteamCoreSharedAudioSubsystem::K2_GetAudioInputDevices() {
    return TArray<FSteamCoreAudioInputDeviceInfo>();
}

FSteamCoreAudioInputDeviceInfo USteamCoreSharedAudioSubsystem::K2_FindAudioDeviceInfoFromDeviceName(const FString& DeviceName) {
    return FSteamCoreAudioInputDeviceInfo{};
}

FSteamCoreAudioInputDeviceInfo USteamCoreSharedAudioSubsystem::K2_FindAudioDeviceInfoFromDeviceId(const FString& DeviceID) {
    return FSteamCoreAudioInputDeviceInfo{};
}


