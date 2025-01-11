#include "SteamProUGC.h"

USteamProUGC::USteamProUGC() {
}

bool USteamProUGC::UpdateItemPreviewVideo(FUGCUpdateHandle Handle, int32 Index, const FString& PreviewVideo) {
    return false;
}

bool USteamProUGC::UpdateItemPreviewFile(FUGCUpdateHandle Handle, int32 Index, const FString& PreviewFile) {
    return false;
}

void USteamProUGC::UnsubscribeItem(const FOnUnsubscribeItem& Callback, FPublishedFileID PublishedFileID) {
}

void USteamProUGC::SuspendDownloads(bool bSuspend) {
}

void USteamProUGC::SubscribeItem(const FOnSubscribeItem& Callback, FPublishedFileID PublishedFileID) {
}

void USteamProUGC::SubmitItemUpdate(const FOnSubmitItemUpdate& Callback, FUGCUpdateHandle Handle, const FString& ChangeNote) {
}

void USteamProUGC::StopPlaytimeTrackingForAllItems(const FOnStopPlaytimeTrackingForAllItems& Callback) {
}

void USteamProUGC::StopPlaytimeTracking(const FOnStopPlaytimeTracking& Callback, TArray<FPublishedFileID> PublishedFileIDs) {
}

void USteamProUGC::StartPlaytimeTracking(const FOnStartPlaytimeTracking& Callback, TArray<FPublishedFileID> PublishedFileID) {
}

FUGCUpdateHandle USteamProUGC::StartItemUpdate(int32 ConsumerAppID, FPublishedFileID PublishedFileID) {
    return FUGCUpdateHandle{};
}

bool USteamProUGC::ShowWorkshopEULA() {
    return false;
}

void USteamProUGC::SetUserItemVote(const FOnSetUserItemVote& Callback, FPublishedFileID PublishedFileID, bool bVoteUp) {
}

bool USteamProUGC::SetSearchText(FUGCQueryHandle Handle, const FString& SearchText) {
    return false;
}

bool USteamProUGC::SetReturnTotalOnly(FUGCQueryHandle Handle, bool bReturnTotalOnly) {
    return false;
}

bool USteamProUGC::SetReturnPlaytimeStats(FUGCQueryHandle Handle, int32 Days) {
    return false;
}

bool USteamProUGC::SetReturnOnlyIDs(FUGCQueryHandle Handle, bool bReturnOnlyIDs) {
    return false;
}

bool USteamProUGC::SetReturnMetadata(FUGCQueryHandle Handle, bool bReturnMetadata) {
    return false;
}

bool USteamProUGC::SetReturnLongDescription(FUGCQueryHandle Handle, bool bReturnLongDescription) {
    return false;
}

bool USteamProUGC::SetReturnKeyValueTags(FUGCQueryHandle Handle, bool bReturnKeyValueTags) {
    return false;
}

bool USteamProUGC::SetReturnChildren(FUGCQueryHandle Handle, bool bReturnChildren) {
    return false;
}

bool USteamProUGC::SetReturnAdditionalPreviews(FUGCQueryHandle Handle, bool bReturnAdditionalPreviews) {
    return false;
}

bool USteamProUGC::SetRequiredGameVersions(FUGCUpdateHandle Handle, const FString& GameBranchMin, const FString& GameBranchMax) {
    return false;
}

bool USteamProUGC::SetRankedByTrendDays(FUGCQueryHandle Handle, int32 Days) {
    return false;
}

bool USteamProUGC::SetMatchAnyTag(FUGCQueryHandle Handle, bool bMatchAnyTag) {
    return false;
}

bool USteamProUGC::SetLanguage(FUGCQueryHandle Handle, const FString& Language) {
    return false;
}

bool USteamProUGC::SetItemVisibility(FUGCUpdateHandle Handle, ESteamRemoteStoragePublishedFileVisibility Visibility) {
    return false;
}

bool USteamProUGC::SetItemUpdateLanguage(FUGCUpdateHandle Handle, const FString& Language) {
    return false;
}

bool USteamProUGC::SetItemTitle(FUGCUpdateHandle Handle, const FString& Title) {
    return false;
}

bool USteamProUGC::SetItemTags(FUGCUpdateHandle Handle, TArray<FString> Tags) {
    return false;
}

bool USteamProUGC::SetItemPreview(FUGCUpdateHandle Handle, const FString& PreviewFile) {
    return false;
}

bool USteamProUGC::SetItemMetadata(FUGCUpdateHandle Handle, const FString& MetaData) {
    return false;
}

bool USteamProUGC::SetItemDescription(FUGCUpdateHandle Handle, const FString& Description) {
    return false;
}

bool USteamProUGC::SetItemContent(FUGCUpdateHandle Handle, const FString& ContentFolder) {
    return false;
}

bool USteamProUGC::SetCloudFileNameFilter(FUGCQueryHandle Handle, const FString& MatchCloudFileName) {
    return false;
}

bool USteamProUGC::SetAllowLegacyUpload(FUGCUpdateHandle Handle, bool bAllowLegacyUpload) {
    return false;
}

bool USteamProUGC::SetAllowCachedResponse(FUGCQueryHandle Handle, int32 MaxAgeSeconds) {
    return false;
}

bool USteamProUGC::SetAdminQuery(FUGCUpdateHandle Handle, bool bAdminQuery) {
    return false;
}

void USteamProUGC::SendQueryUGCRequest(const FOnSendQueryUGCRequest& Callback, FUGCQueryHandle Handle) {
}

bool USteamProUGC::RemoveItemPreview(FUGCUpdateHandle Handle, int32 Index) {
    return false;
}

bool USteamProUGC::RemoveItemKeyValueTags(FUGCUpdateHandle Handle, const FString& Key) {
    return false;
}

void USteamProUGC::RemoveItemFromFavorites(const FOnRemoveItemFromFavorites& Callback, int32 AppID, FPublishedFileID PublishedFileID) {
}

void USteamProUGC::RemoveDependency(const FOnRemoveUGCDependencyResult& Callback, FPublishedFileID ParentPublishedFileID, FPublishedFileID ChildPublishedFileId) {
}

bool USteamProUGC::RemoveContentDescriptor(FUGCUpdateHandle Handle, ESteamUGCContentDescriptorID DescId) {
    return false;
}

void USteamProUGC::RemoveAppDependency(const FOnRemoveAppDependencyResult& Callback, FPublishedFileID PublishedFileID, int32 AppID) {
}

bool USteamProUGC::ReleaseQueryUGCRequest(FUGCQueryHandle Handle) {
    return false;
}

void USteamProUGC::GetWorkshopEULAStatus(const FOnGetWorkshopEULAStatus& Callback) {
}

void USteamProUGC::GetUserItemVote(const FOnGetUserItemVote& Callback, FPublishedFileID PublishedFileID) {
}

int32 USteamProUGC::GetUserContentDescriptorPreferences(TArray<ESteamUGCContentDescriptorID> Descriptors, int32 MaxEntries) {
    return 0;
}

bool USteamProUGC::GetSupportedGameVersionData(FUGCQueryHandle Handle, int32 Index, int32 VersionIndex, FString& GameBranchMin, FString& GameBranchMax, int32 GameBranchSize) {
    return false;
}

int32 USteamProUGC::GetSubscribedItems(TArray<FPublishedFileID>& PublishedFileIDs, int32 MaxEntries) {
    return 0;
}

USteamProUGC* USteamProUGC::GetSteamUGC() {
    return NULL;
}

bool USteamProUGC::GetQueryUGCTagDisplayName(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value) {
    return false;
}

bool USteamProUGC::GetQueryUGCTag(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value) {
    return false;
}

bool USteamProUGC::GetQueryUGCStatistic(FUGCQueryHandle Handle, int32 Index, ESteamItemStatistic StatType, FString& StatValue) {
    return false;
}

bool USteamProUGC::GetQueryUGCResult(FUGCQueryHandle Handle, int32 Index, FSteamUGCDetails& Details) {
    return false;
}

bool USteamProUGC::GetQueryUGCPreviewURL(FUGCQueryHandle Handle, int32 Index, FString& URL) {
    return false;
}

int32 USteamProUGC::GetQueryUGCNumTags(FUGCQueryHandle Handle, int32 Index) {
    return 0;
}

int32 USteamProUGC::GetQueryUGCNumKeyValueTags(FUGCQueryHandle Handle, int32 Index) {
    return 0;
}

int32 USteamProUGC::GetQueryUGCNumAdditionalPreviews(FUGCQueryHandle Handle, int32 Index) {
    return 0;
}

bool USteamProUGC::GetQueryUGCMetadata(FUGCQueryHandle Handle, int32 Index, FString& MetaData, int32 MetadataSize) {
    return false;
}

bool USteamProUGC::GetQueryUGCKeyValueTag(FUGCQueryHandle Handle, int32 Index, int32 KeyValueTagIndex, FString& Key, FString& Value) {
    return false;
}

bool USteamProUGC::GetQueryUGCChildren(FUGCQueryHandle Handle, int32 Index, TArray<FPublishedFileID>& PublishedFileIDs, int32 MaxEntries) {
    return false;
}

bool USteamProUGC::GetQueryUGCAdditionalPreview(FUGCQueryHandle Handle, int32 Index, int32 PreviewIndex, FString& URLOrVideoID, FString& OriginalFileName, ESteamItemPreviewType& PreviewType) {
    return false;
}

int32 USteamProUGC::GetNumSupportedGameVersions(FUGCQueryHandle Handle, int32 Index) {
    return 0;
}

int32 USteamProUGC::GetNumSubscribedItems() {
    return 0;
}

ESteamItemUpdateStatus USteamProUGC::GetItemUpdateProgress(FUGCUpdateHandle Handle, int32& BytesProcessed, int32& BytesTotal) {
    return ESteamItemUpdateStatus::Invalid;
}

int32 USteamProUGC::GetItemState(FPublishedFileID PublishedFileID, TArray<ESteamItemState>& States) {
    return 0;
}

bool USteamProUGC::GetItemInstallInfo(FPublishedFileID PublishedFileID, int32& SizeOnDisk, FString& Folder, int32& Timestamp) {
    return false;
}

bool USteamProUGC::GetItemDownloadInfo(FPublishedFileID PublishedFileID, int32& BytesDownloaded, int32& BytesTotal) {
    return false;
}

void USteamProUGC::GetAppDependencies(const FOnGetAppDependenciesResult& Callback, FPublishedFileID PublishedFileID) {
}

bool USteamProUGC::DownloadItem(FPublishedFileID PublishedFileID, bool bHighPriority) {
    return false;
}

void USteamProUGC::DeleteItem(const FOnDeleteItemResult& Callback, FPublishedFileID PublishedFileID) {
}

FUGCQueryHandle USteamProUGC::CreateQueryUserUGCRequest(FSteamID SteamID, ESteamUserUGCList ListType, ESteamUGCMatchingUGCType MatchingUGCType, ESteamUserUGCListSortOrder SortOrder, int32 CreatorAppID, int32 ConsumerAppID, int32 Page) {
    return FUGCQueryHandle{};
}

FUGCQueryHandle USteamProUGC::CreateQueryUGCDetailsRequest(TArray<FPublishedFileID> PublishedFileIDs) {
    return FUGCQueryHandle{};
}

FUGCQueryHandle USteamProUGC::CreateQueryAllUGCRequest(ESteamUGCQuery QueryType, ESteamUGCMatchingUGCType FileType, int32 CreatorAppID, int32 ConsumerAppID, int32 Page) {
    return FUGCQueryHandle{};
}

void USteamProUGC::CreateItem(const FOnCreateItem& Callback, int32 ConsumerAppID, ESteamWorkshopFileType FileType) {
}

bool USteamProUGC::BInitWorkshopForGameServer(int32 WorkshopDepotID, const FString& Folder) {
    return false;
}

bool USteamProUGC::AddRequiredTagGroup(FUGCQueryHandle Handle, TArray<FString> TagGroups) {
    return false;
}

bool USteamProUGC::AddRequiredTag(FUGCQueryHandle Handle, const FString& TagName) {
    return false;
}

bool USteamProUGC::AddRequiredKeyValueTag(FUGCQueryHandle Handle, const FString& Key, const FString& Value) {
    return false;
}

void USteamProUGC::AddItemToFavorites(const FOnAddItemToFavorites& Callback, int32 AppID, FPublishedFileID PublishedFileID) {
}

bool USteamProUGC::AddItemPreviewVideo(FUGCUpdateHandle Handle, const FString& VideoID) {
    return false;
}

bool USteamProUGC::AddItemPreviewFile(FUGCUpdateHandle Handle, const FString& PreviewFile, ESteamItemPreviewType Type) {
    return false;
}

bool USteamProUGC::AddItemKeyValueTag(FUGCUpdateHandle Handle, const FString& Key, const FString& Value) {
    return false;
}

bool USteamProUGC::AddExcludedTag(FUGCQueryHandle Handle, const FString& TagName) {
    return false;
}

void USteamProUGC::AddDependency(const FOnAddUGCDependencyResult& Callback, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId) {
}

bool USteamProUGC::AddContentDescriptor(FUGCUpdateHandle Handle, ESteamUGCContentDescriptorID DescId) {
    return false;
}

void USteamProUGC::AddAppDependency(const FOnAddAppDependencyResult& Callback, FPublishedFileID PublishedFileID, int32 AppID) {
}


