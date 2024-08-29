#include "SteamProNetworking.h"

USteamProNetworking::USteamProNetworking() {
}

bool USteamProNetworking::SendP2PPacket(FSteamID SteamIDRemote, TArray<uint8> Data, ESteamP2PSend P2PSendType, int32 Channel) {
    return false;
}

bool USteamProNetworking::ReadP2PPacket(TArray<uint8>& Data, FSteamID& OutSteamIdRemote, int32 MessageSize, int32 Channel) {
    return false;
}

bool USteamProNetworking::IsP2PPacketAvailable(int32& MessageSize, int32 Channel) {
    return false;
}

USteamProNetworking* USteamProNetworking::GetSteamNetworking() {
    return NULL;
}

bool USteamProNetworking::GetP2PSessionState(FSteamID SteamIDRemote, FSteamP2PSessionState& ConnectionState) {
    return false;
}

bool USteamProNetworking::CloseP2PSessionWithUser(FSteamID SteamIDRemote) {
    return false;
}

bool USteamProNetworking::CloseP2PChannelWithUser(FSteamID SteamIDRemote, int32 Channel) {
    return false;
}

bool USteamProNetworking::AllowP2PPacketRelay(bool bAllow) {
    return false;
}

bool USteamProNetworking::AcceptP2PSessionWithUser(FSteamID SteamIDRemote) {
    return false;
}


