#include "SteamProInventory.h"

USteamProInventory::USteamProInventory() {
}

bool USteamProInventory::TriggerItemDrop(FSteamInventoryResult& Result, FSteamItemDef ListDefinition) {
    return false;
}

bool USteamProInventory::TransferItemQuantity(FSteamInventoryResult& Result, FSteamItemInstanceID ItemIDSource, int32 Quantity, FSteamItemInstanceID ItemIDDest) {
    return false;
}

bool USteamProInventory::SubmitUpdateProperties(FSteamInventoryUpdateHandle Handle, FSteamInventoryResult& ResultHandle) {
    return false;
}

FSteamInventoryUpdateHandle USteamProInventory::StartUpdateProperties() {
    return FSteamInventoryUpdateHandle{};
}

void USteamProInventory::StartPurchase(const FOnSteamInventoryStartPurchaseResult& Callback, const TArray<FSteamItemDef> ItemDefs, const TArray<int32> Quantity) {
}

bool USteamProInventory::SetPropertyString(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, const FString& PropertyName, const FString& Value) {
    return false;
}

bool USteamProInventory::SetPropertyInt(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, const FString& PropertyName, int32 Value) {
    return false;
}

bool USteamProInventory::SetPropertyFloat(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, const FString& PropertyName, float Value) {
    return false;
}

bool USteamProInventory::SetPropertyBool(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, const FString& PropertyName, bool bValue) {
    return false;
}

bool USteamProInventory::SerializeResult(FSteamInventoryResult Handle, TArray<uint8>& Buffer) {
    return false;
}

void USteamProInventory::RequestPrices(const FOnSteamInventoryRequestPricesResult& Callback) {
}

void USteamProInventory::RequestEligiblePromoItemDefinitionsIDs(const FOnRequestEligiblePromoItemDefinitionsIDs& Callback, FSteamID SteamID) {
}

bool USteamProInventory::RemoveProperty(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, const FString& PropertyName) {
    return false;
}

bool USteamProInventory::LoadItemDefinitions() {
    return false;
}

bool USteamProInventory::GrantPromoItems(FSteamInventoryResult& Result) {
    return false;
}

USteamProInventory* USteamProInventory::GetSteamInventory() {
    return NULL;
}

int32 USteamProInventory::GetResultTimestamp(FSteamInventoryResult Handle) {
    return 0;
}

ESteamResult USteamProInventory::GetResultStatus(FSteamInventoryResult Handle) {
    return ESteamResult::None;
}

bool USteamProInventory::GetResultItems(FSteamInventoryResult Handle, TArray<FSteamItemDetails>& Items) {
    return false;
}

bool USteamProInventory::GetResultItemProperty(FSteamInventoryResult Handle, int32 ItemIndex, const FString& PropertyName, FString& Value) {
    return false;
}

int32 USteamProInventory::GetNumItemsWithPrices() {
    return 0;
}

bool USteamProInventory::GetItemsWithPrices(TArray<FSteamItemDef>& ItemDefs, TArray<int32>& Prices, TArray<int32>& BasePrices) {
    return false;
}

bool USteamProInventory::GetItemsByID(FSteamInventoryResult& InventoryResult, TArray<FSteamItemInstanceID> InstanceIDs) {
    return false;
}

bool USteamProInventory::GetItemPrice(FSteamItemDef ItemDef, int32& Price, int32& BasePrice) {
    return false;
}

bool USteamProInventory::GetItemDefinitionProperty(FSteamItemDef ItemDef, const FString& PropertyName, FString& Value) {
    return false;
}

bool USteamProInventory::GetItemDefinitionIDs(TArray<FSteamItemDef>& ItemDefs) {
    return false;
}

bool USteamProInventory::GetEligiblePromoItemDefinitionIDs(FSteamID SteamID, TArray<FSteamItemDef>& ItemDefs) {
    return false;
}

bool USteamProInventory::GetAllItems(FSteamInventoryResult& Handle) {
    return false;
}

bool USteamProInventory::GenerateItems(FSteamInventoryResult& Result, TArray<FSteamItemDef> ItemDefs, TArray<int32> Quantity) {
    return false;
}

bool USteamProInventory::ExchangeItems(FSteamInventoryResult& Result, TArray<FSteamItemDef> ArrayGenerate, TArray<int32> ArrayGenerateQuantity, TArray<FSteamItemInstanceID> ArrayDestroy, TArray<int32> ArrayDestroyQuantity) {
    return false;
}

void USteamProInventory::DestroyResult(FSteamInventoryResult Handle) {
}

bool USteamProInventory::DeserializeResult(FSteamInventoryResult& Result, TArray<uint8> Buffer, bool bReservedMustBeFalse) {
    return false;
}

bool USteamProInventory::ConsumeItem(FSteamInventoryResult& Result, FSteamItemInstanceID ItemConsume, int32 Quantity) {
    return false;
}

bool USteamProInventory::CheckResultSteamID(FSteamInventoryResult Handle, FSteamID SteamIDExpected) {
    return false;
}

bool USteamProInventory::AddPromoItems(FSteamInventoryResult& OutResult, TArray<FSteamItemDef> ItemDefs) {
    return false;
}

bool USteamProInventory::AddPromoItem(FSteamInventoryResult& Result, FSteamItemDef ItemDef) {
    return false;
}


