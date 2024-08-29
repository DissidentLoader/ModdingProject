#include "SteamProParties.h"

USteamProParties::USteamProParties() {
}

void USteamProParties::OnReservationCompleted(FPartyBeaconID BeaconID, FSteamID SteamIDUser) {
}

void USteamProParties::JoinParty(const FOnJoinParty& Callback, FPartyBeaconID BeaconID) {
}

USteamProParties* USteamProParties::GetSteamParties() {
    return NULL;
}

bool USteamProParties::GetNumAvailableBeaconLocations(int32& NumLocations) {
    return false;
}

int32 USteamProParties::GetNumActiveBeacons() {
    return 0;
}

bool USteamProParties::GetBeaconLocationData(FSteamPartyBeaconLocation BeaconLocation, ESteamPartiesBeaconLocationData EData, FString& PCHDataStringOut) {
    return false;
}

bool USteamProParties::GetBeaconDetails(FPartyBeaconID BeaconID, FSteamID& SteamIDBeaconOwner, FSteamPartyBeaconLocation& Location, FString& OutMetadata) {
    return false;
}

FPartyBeaconID USteamProParties::GetBeaconByIndex(int32 Index) {
    return FPartyBeaconID{};
}

bool USteamProParties::GetAvailableBeaconLocations(TArray<FSteamPartyBeaconLocation>& LocationList, int32 MaxNumLocations) {
    return false;
}

bool USteamProParties::DestroyBeacon(FPartyBeaconID BeaconID) {
    return false;
}

void USteamProParties::CreateBeacon(const FOnCreateBeacon& Callback, int32 OpenSlots, FSteamPartyBeaconLocation BeaconLocation, const FString& ConnectString, const FString& MetaData) {
}

void USteamProParties::ChangeNumOpenSlots(const FOnChangeNumOpenSlots& Callback, FPartyBeaconID BeaconID, int32 OpenSlots) {
}

void USteamProParties::CancelReservation(FPartyBeaconID BeaconID, FSteamID SteamIDUser) {
}


