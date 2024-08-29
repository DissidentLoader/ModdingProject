#include "SteamCoreProVoice.h"

USteamCoreProVoice::USteamCoreProVoice() : USoundWaveProcedural(FObjectInitializer::Get()) {
    this->FrequenciesToAnalyze.AddDefaulted(4);
}

void USteamCoreProVoice::DestroySteamCoreProVoice(USteamCoreProVoice* Obj) {
}

USteamCoreProVoice* USteamCoreProVoice::ConstructSteamCoreProVoice(int32 AudioSampleRate) {
    return NULL;
}

void USteamCoreProVoice::AddAudioBuffer(const TArray<uint8>& Buffer) {
}


