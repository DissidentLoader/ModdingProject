#include "SteamProScreenshots.h"

USteamProScreenshots::USteamProScreenshots() {
}

FScreenshotHandle USteamProScreenshots::WriteScreenshot(TArray<uint8> PubRGB, int32 Width, int32 Height) {
    return FScreenshotHandle{};
}

void USteamProScreenshots::TriggerScreenshot() {
}

bool USteamProScreenshots::TagUser(FScreenshotHandle Handle, FSteamID SteamID) {
    return false;
}

bool USteamProScreenshots::TagPublishedFile(FScreenshotHandle Handle, FPublishedFileID PublishedFileID) {
    return false;
}

bool USteamProScreenshots::SetLocation(FScreenshotHandle Handle, const FString& Location) {
    return false;
}

bool USteamProScreenshots::IsScreenshotsHooked() {
    return false;
}

void USteamProScreenshots::HookScreenshots(bool bHook) {
}

USteamProScreenshots* USteamProScreenshots::GetSteamScreenshots() {
    return NULL;
}

FScreenshotHandle USteamProScreenshots::AddVRScreenshotToLibrary(ESteamVRScreenshotType EType, const FString& Filename, const FString& VRFileName) {
    return FScreenshotHandle{};
}

FScreenshotHandle USteamProScreenshots::AddScreenshotToLibrary(const FString& Filename, const FString& ThumbnailFilename, int32 Width, int32 Height) {
    return FScreenshotHandle{};
}


