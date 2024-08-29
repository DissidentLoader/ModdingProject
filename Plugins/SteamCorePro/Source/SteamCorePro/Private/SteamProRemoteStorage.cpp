#include "SteamProRemoteStorage.h"

USteamProRemoteStorage::USteamProRemoteStorage() {
}

int32 USteamProRemoteStorage::UGCRead(FSteamUGCHandle Content, TArray<uint8>& OutData, int32 DataToRead, int32 Offset, ESteamUGCReadAction Action) {
    return 0;
}

void USteamProRemoteStorage::UGCDownloadToLocation(const FOnUGCDownloadToLocationAsync& Callback, FSteamUGCHandle Content, const FString& Location, int32 Priority) {
}

void USteamProRemoteStorage::UGCDownload(const FOnUGCDownloadAsync& Callback, FSteamUGCHandle Content, int32 Priority) {
}

bool USteamProRemoteStorage::SetSyncPlatforms(const FString& File, ESteamRemoteStoragePlatform RemoteStoragePlatform) {
    return false;
}

void USteamProRemoteStorage::SetCloudEnabledForApp(bool bEnabled) {
}

bool USteamProRemoteStorage::IsCloudEnabledForApp() {
    return false;
}

bool USteamProRemoteStorage::IsCloudEnabledForAccount() {
    return false;
}

bool USteamProRemoteStorage::GetUGCDownloadProgress(FSteamUGCHandle Handle, int32& BytesDownloaded, int32& BytesExpected) {
    return false;
}

bool USteamProRemoteStorage::GetUGCDetails(FSteamUGCHandle Handle, int32& AppID, FString& Name, int32& FileSizeInBytes, FSteamID& SteamIDOwner) {
    return false;
}

ESteamRemoteStoragePlatform USteamProRemoteStorage::GetSyncPlatforms(const FString& File) {
    return ESteamRemoteStoragePlatform::None;
}

USteamProRemoteStorage* USteamProRemoteStorage::GetSteamRemoteStorage() {
    return NULL;
}

bool USteamProRemoteStorage::GetQuota(int32& TotalBytes, int32& AvailableBytes) {
    return false;
}

int32 USteamProRemoteStorage::GetLocalFileChangeCount() {
    return 0;
}

int32 USteamProRemoteStorage::GetFileTimestamp(const FString& File) {
    return 0;
}

int32 USteamProRemoteStorage::GetFileSize(const FString& File) {
    return 0;
}

FString USteamProRemoteStorage::GetFileNameAndSize(int32 File, int32& FileSizeInBytes) {
    return TEXT("");
}

int32 USteamProRemoteStorage::GetFileCount() {
    return 0;
}

FSteamUGCHandle USteamProRemoteStorage::GetCachedUGCHandle(int32 ICachedContent) {
    return FSteamUGCHandle{};
}

int32 USteamProRemoteStorage::GetCachedUGCCount() {
    return 0;
}

bool USteamProRemoteStorage::FileWriteStreamWriteChunk(FUGCFileWriteStreamHandle Handle, TArray<uint8> Data) {
    return false;
}

FUGCFileWriteStreamHandle USteamProRemoteStorage::FileWriteStreamOpen(const FString& File) {
    return FUGCFileWriteStreamHandle{};
}

bool USteamProRemoteStorage::FileWriteStreamClose(FUGCFileWriteStreamHandle Handle) {
    return false;
}

bool USteamProRemoteStorage::FileWriteStreamCancel(FUGCFileWriteStreamHandle Handle) {
    return false;
}

void USteamProRemoteStorage::FileWriteAsync(const FOnFileWriteAsync& Callback, const FString& File, TArray<uint8> Data) {
}

bool USteamProRemoteStorage::FileWrite(const FString& File, TArray<uint8> Data) {
    return false;
}

void USteamProRemoteStorage::FileShare(const FOnFileShareAsync& Callback, const FString& File) {
}

bool USteamProRemoteStorage::FileReadAsyncComplete(FRemoteStorageFileReadAsyncComplete ReadCall, TArray<uint8>& Buffer, int32 BytesToRead) {
    return false;
}

void USteamProRemoteStorage::FileReadAsync(const FOnFileReadAsync& Callback, const FString& File, int32 Offset, int32 BytesToRead) {
}

int32 USteamProRemoteStorage::FileRead(const FString& File, TArray<uint8>& Buffer, int32 DataToRead) {
    return 0;
}

bool USteamProRemoteStorage::FilePersisted(const FString& File) {
    return false;
}

bool USteamProRemoteStorage::FileForget(const FString& File) {
    return false;
}

bool USteamProRemoteStorage::FileExists(const FString& File) {
    return false;
}

bool USteamProRemoteStorage::FileDelete(const FString& File) {
    return false;
}

bool USteamProRemoteStorage::EndFileWriteBatch() {
    return false;
}

bool USteamProRemoteStorage::BeginFileWriteBatch() {
    return false;
}


