#include "SteamProFriends.h"

USteamProFriends::USteamProFriends() {
}

bool USteamProFriends::SetRichPresence(const FString& Key, const FString& Value) {
    return false;
}

void USteamProFriends::SetPlayedWith(FSteamID SteamIDUserPlayedWith) {
}

void USteamProFriends::SetPersonaName(const FOnSetPersonaName& Callback, const FString& Name) {
}

bool USteamProFriends::SetListenForFriendsMessages(bool bInterceptEnabled) {
    return false;
}

void USteamProFriends::SetInGameVoiceSpeaking(FSteamID SteamIDUser, bool bSpeaking) {
}

bool USteamProFriends::SendClanChatMessage(FSteamID SteamIDClanChat, const FString& Text) {
    return false;
}

bool USteamProFriends::RequestUserInformation(FSteamID SteamIDUser, bool bRequireNameOnly) {
    return false;
}

void USteamProFriends::RequestFriendRichPresence(FSteamID SteamIDFriend) {
}

void USteamProFriends::RequestEquippedProfileItems(const FOnRequestEquippedProfileItems& Callback, FSteamID SteamID) {
}

void USteamProFriends::RequestClanOfficerList(const FOnRequestClanOfficerList& Callback, FSteamID SteamIDClan) {
}

bool USteamProFriends::ReplyToFriendMessage(FSteamID SteamIDFriend, const FString& MsgToSend) {
    return false;
}

bool USteamProFriends::RegisterProtocolInOverlayBrowser(const FString& Protocol) {
    return false;
}

bool USteamProFriends::OpenClanChatWindowInSteam(FSteamID SteamIDClanChat) {
    return false;
}

bool USteamProFriends::LeaveClanChatRoom(FSteamID SteamIDClan) {
    return false;
}

void USteamProFriends::JoinClanChatRoom(const FOnJoinClanChatRoom& Callback, FSteamID SteamIDClan) {
}

bool USteamProFriends::IsUserInSource(FSteamID SteamIDUser, FSteamID SteamIDSource) {
    return false;
}

void USteamProFriends::IsFollowing(const FOnIsFollowing& Callback, FSteamID SteamID) {
}

bool USteamProFriends::IsClanPublic(FSteamID SteamIDClan) {
    return false;
}

bool USteamProFriends::IsClanOfficialGameGroup(FSteamID SteamIDClan) {
    return false;
}

bool USteamProFriends::IsClanChatWindowOpenInSteam(FSteamID SteamIDClanChat) {
    return false;
}

bool USteamProFriends::IsClanChatAdmin(FSteamID SteamIDClanChat, FSteamID SteamIDUser) {
    return false;
}

bool USteamProFriends::InviteUserToGame(FSteamID SteamIDFriend, const FString& ConnectString) {
    return false;
}

bool USteamProFriends::HasFriend(FSteamID SteamIDFriend, TArray<ESteamFriendFlags> Flags) {
    return false;
}

TArray<ESteamUserRestriction> USteamProFriends::GetUserRestrictions() {
    return TArray<ESteamUserRestriction>();
}

USteamProFriends* USteamProFriends::GetSteamFriends() {
    return NULL;
}

UTexture2D* USteamProFriends::GetSmallFriendAvatar(FSteamID SteamIDFriend) {
    return NULL;
}

int32 USteamProFriends::GetProfileItemPropertyUint(FSteamID SteamID, ESteamCommunityProfileItemType ItemType, ESteamCommunityProfileItemProperty Prop) {
    return 0;
}

FString USteamProFriends::GetProfileItemPropertyString(FSteamID SteamID, ESteamCommunityProfileItemType ItemType, ESteamCommunityProfileItemProperty Prop) {
    return TEXT("");
}

FString USteamProFriends::GetPlayerNickname_Pure(FSteamID SteamIDPlayer) {
    return TEXT("");
}

FString USteamProFriends::GetPlayerNickname(FSteamID SteamIDPlayer) {
    return TEXT("");
}

ESteamPersonaState USteamProFriends::GetPersonaState_Pure() {
    return ESteamPersonaState::Offline;
}

ESteamPersonaState USteamProFriends::GetPersonaState() {
    return ESteamPersonaState::Offline;
}

FString USteamProFriends::GetPersonaName_Pure() {
    return TEXT("");
}

FString USteamProFriends::GetPersonaName() {
    return TEXT("");
}

UTexture2D* USteamProFriends::GetMediumFriendAvatar(FSteamID SteamIDFriend) {
    return NULL;
}

UTexture2D* USteamProFriends::GetLargeFriendAvatar(FSteamID SteamIDFriend) {
    return NULL;
}

int32 USteamProFriends::GetFriendSteamLevel(FSteamID SteamIDFriend) {
    return 0;
}

FString USteamProFriends::GetFriendsGroupName(FSteamFriendsGroupID FriendsGroupID) {
    return TEXT("");
}

void USteamProFriends::GetFriendsGroupMembersList(FSteamFriendsGroupID FriendsGroupID, TArray<FSteamID>& SteamIDMembers, int32 MembersCount) {
}

int32 USteamProFriends::GetFriendsGroupMembersCount(FSteamFriendsGroupID FriendsGroupID) {
    return 0;
}

FSteamFriendsGroupID USteamProFriends::GetFriendsGroupIDByIndex(int32 FriendGroup) {
    return FSteamFriendsGroupID{};
}

int32 USteamProFriends::GetFriendsGroupCount() {
    return 0;
}

int32 USteamProFriends::GetFriendRichPresenceKeyCount(FSteamID SteamIDFriend) {
    return 0;
}

FString USteamProFriends::GetFriendRichPresenceKeyByIndex(FSteamID SteamIDFriend, int32 Key) {
    return TEXT("");
}

FString USteamProFriends::GetFriendRichPresence(FSteamID SteamIDFriend, const FString& Key) {
    return TEXT("");
}

ESteamFriendRelationship USteamProFriends::GetFriendRelationship(FSteamID SteamIDFriend) {
    return ESteamFriendRelationship::None;
}

ESteamPersonaState USteamProFriends::GetFriendPersonaState(FSteamID SteamIDFriend) {
    return ESteamPersonaState::Offline;
}

FString USteamProFriends::GetFriendPersonaNameHistory(FSteamID SteamIDFriend, int32 PersonaName) {
    return TEXT("");
}

FString USteamProFriends::GetFriendPersonaName(FSteamID SteamIDFriend) {
    return TEXT("");
}

int32 USteamProFriends::GetFriendMessage(FSteamID SteamIDFriend, int32 MessageID, FString& Text, ESteamChatEntryType& ChatEntryType) {
    return 0;
}

bool USteamProFriends::GetFriendGamePlayed(FSteamID SteamIDFriend, FSteamGameID& GameID, FString& GameIP, int32& ConnectionPort, int32& QueryPort, FSteamID& SteamIDLobby) {
    return false;
}

FSteamID USteamProFriends::GetFriendFromSourceByIndex(FSteamID SteamIDSource, int32 Ifriend) {
    return FSteamID{};
}

int32 USteamProFriends::GetFriendCountFromSource(FSteamID SteamIDSource) {
    return 0;
}

int32 USteamProFriends::GetFriendCount(TArray<ESteamFriendFlags> Flags) {
    return 0;
}

int32 USteamProFriends::GetFriendCoplayTime(FSteamID SteamIDFriend) {
    return 0;
}

int32 USteamProFriends::GetFriendCoplayGame(FSteamID SteamIDFriend) {
    return 0;
}

FSteamID USteamProFriends::GetFriendByIndex(int32 Ifriend, TArray<ESteamFriendFlags> Flags) {
    return FSteamID{};
}

void USteamProFriends::GetFollowerCount(const FOnGetFollowerCount& Callback, FSteamID SteamID) {
}

int32 USteamProFriends::GetCoplayFriendCount() {
    return 0;
}

FSteamID USteamProFriends::GetCoplayFriend(int32 CoplayFriend) {
    return FSteamID{};
}

FString USteamProFriends::GetClanTag(FSteamID SteamIDClan) {
    return TEXT("");
}

FSteamID USteamProFriends::GetClanOwner(FSteamID SteamIDClan) {
    return FSteamID{};
}

int32 USteamProFriends::GetClanOfficerCount(FSteamID SteamIDClan) {
    return 0;
}

FSteamID USteamProFriends::GetClanOfficerByIndex(FSteamID SteamIDClan, int32 Officer) {
    return FSteamID{};
}

FString USteamProFriends::GetClanName(FSteamID SteamIDClan) {
    return TEXT("");
}

int32 USteamProFriends::GetClanCount() {
    return 0;
}

int32 USteamProFriends::GetClanChatMessage(FSteamID SteamIDClanChat, int32 MessageID, FString& Text, ESteamChatEntryType& ChatEntryType, FSteamID& SteamIDChatter) {
    return 0;
}

int32 USteamProFriends::GetClanChatMemberCount(FSteamID SteamIDClan) {
    return 0;
}

FSteamID USteamProFriends::GetClanByIndex(int32 Clan) {
    return FSteamID{};
}

bool USteamProFriends::GetClanActivityCounts(FSteamID SteamIDClan, int32& Online, int32& InGame, int32& Chatting) {
    return false;
}

FSteamID USteamProFriends::GetChatMemberByIndex(FSteamID SteamIDClan, int32 User) {
    return FSteamID{};
}

void USteamProFriends::EnumerateFollowingList(const FOnEnumerateFollowingList& Callback, int32 StartIndex) {
}

void USteamProFriends::DownloadClanActivityCounts(const FOnDownloadClanActivityCounts& Callback, TArray<FSteamID> SteamIDClans) {
}

bool USteamProFriends::CloseClanChatWindowInSteam(FSteamID SteamIDClanChat) {
    return false;
}

void USteamProFriends::ClearRichPresence() {
}

bool USteamProFriends::BHasEquippedProfileItem(FSteamID SteamID, ESteamCommunityProfileItemType ItemType) {
    return false;
}

void USteamProFriends::ActivateGameOverlayToWebPage(const FString& URL, ESteamActivateGameOverlayToWebPageMode Mode) {
}

void USteamProFriends::ActivateGameOverlayToUser(const FString& Dialog, FSteamID SteamID) {
}

void USteamProFriends::ActivateGameOverlayToStore(int32 AppID, ESteamOverlayToStoreFlag Flag) {
}

void USteamProFriends::ActivateGameOverlayInviteDialogConnectString(const FString& ConnectString) {
}

void USteamProFriends::ActivateGameOverlayInvitedialog(FSteamID SteamIDLobby) {
}

void USteamProFriends::ActivateGameOverlay(const FString& Dialog) {
}


