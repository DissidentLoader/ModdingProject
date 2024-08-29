#include "SteamProMusic.h"

USteamProMusic::USteamProMusic() {
}

void USteamProMusic::SetVolume(float flVolume) {
}

void USteamProMusic::PlayPrevious() {
}

void USteamProMusic::PlayNext() {
}

void USteamProMusic::Play() {
}

void USteamProMusic::Pause() {
}

float USteamProMusic::GetVolume() {
    return 0.0f;
}

USteamProMusic* USteamProMusic::GetSteamMusic() {
    return NULL;
}

ESteamAudioPlaybackStatus USteamProMusic::GetPlaybackStatus() {
    return ESteamAudioPlaybackStatus::Undefined;
}

bool USteamProMusic::BIsPlaying() {
    return false;
}

bool USteamProMusic::bIsEnabled() {
    return false;
}


