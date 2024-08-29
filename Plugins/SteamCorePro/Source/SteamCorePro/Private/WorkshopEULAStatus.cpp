#include "WorkshopEULAStatus.h"

FWorkshopEULAStatus::FWorkshopEULAStatus() {
    this->Result = ESteamResult::None;
    this->AppID = 0;
    this->Version = 0;
    this->Action = 0;
    this->bAccepted = false;
    this->bNeedsAction = false;
}

