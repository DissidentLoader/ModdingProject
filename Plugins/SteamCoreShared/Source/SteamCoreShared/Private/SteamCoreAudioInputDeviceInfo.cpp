#include "SteamCoreAudioInputDeviceInfo.h"

FSteamCoreAudioInputDeviceInfo::FSteamCoreAudioInputDeviceInfo() {
    this->InputChannels = 0;
    this->PreferredSampleRate = 0;
    this->bSupportsHardwareAEC = false;
}

