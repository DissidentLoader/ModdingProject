#pragma once
#include "CoreMinimal.h"
#include "ESteamCoreProInputActionOrigin.generated.h"

UENUM(BlueprintType)
enum ESteamCoreProInputActionOrigin {
    EInputActionOrigin_None,
    EInputActionOrigin_SteamController_A,
    EInputActionOrigin_SteamController_B,
    EInputActionOrigin_SteamController_X,
    EInputActionOrigin_SteamController_Y,
    EInputActionOrigin_SteamController_LeftBumper,
    EInputActionOrigin_SteamController_RightBumper,
    EInputActionOrigin_SteamController_LeftGrip,
    EInputActionOrigin_SteamController_RightGrip,
    EInputActionOrigin_SteamController_Start,
    EInputActionOrigin_SteamController_Back,
    EInputActionOrigin_SteamController_LeftPad_Touch,
    EInputActionOrigin_SteamController_LeftPad_Swipe,
    EInputActionOrigin_SteamController_LeftPad_Click,
    EInputActionOrigin_SteamController_LeftPad_DPadNorth,
    EInputActionOrigin_SteamController_LeftPad_DPadSouth,
    EInputActionOrigin_SteamController_LeftPad_DPadWest,
    EInputActionOrigin_SteamController_LeftPad_DPadEast,
    EInputActionOrigin_SteamController_RightPad_Touch,
    EInputActionOrigin_SteamController_RightPad_Swipe,
    EInputActionOrigin_SteamController_RightPad_Click,
    EInputActionOrigin_SteamController_RightPad_DPadNorth,
    EInputActionOrigin_SteamController_RightPad_DPadSouth,
    EInputActionOrigin_SteamController_RightPad_DPadWest,
    EInputActionOrigin_SteamController_RightPad_DPadEast,
    EInputActionOrigin_SteamController_LeftTrigger_Pull,
    EInputActionOrigin_SteamController_LeftTrigger_Click,
    EInputActionOrigin_SteamController_RightTrigger_Pull,
    EInputActionOrigin_SteamController_RightTrigger_Click,
    EInputActionOrigin_SteamController_LeftStick_Move,
    EInputActionOrigin_SteamController_LeftStick_Click,
    EInputActionOrigin_SteamController_LeftStick_DPadNorth,
    EInputActionOrigin_SteamController_LeftStick_DPadSouth,
    EInputActionOrigin_SteamController_LeftStick_DPadWest,
    EInputActionOrigin_SteamController_LeftStick_DPadEast,
    EInputActionOrigin_SteamController_Gyro_Move,
    EInputActionOrigin_SteamController_Gyro_Pitch,
    EInputActionOrigin_SteamController_Gyro_Yaw,
    EInputActionOrigin_SteamController_Gyro_Roll,
    EInputActionOrigin_SteamController_Reserved0,
    EInputActionOrigin_SteamController_Reserved1,
    EInputActionOrigin_SteamController_Reserved2,
    EInputActionOrigin_SteamController_Reserved3,
    EInputActionOrigin_SteamController_Reserved4,
    EInputActionOrigin_SteamController_Reserved5,
    EInputActionOrigin_SteamController_Reserved6,
    EInputActionOrigin_SteamController_Reserved7,
    EInputActionOrigin_SteamController_Reserved8,
    EInputActionOrigin_SteamController_Reserved9,
    EInputActionOrigin_SteamController_Reserved10,
    EInputActionOrigin_PS4_X,
    EInputActionOrigin_PS4_Circle,
    EInputActionOrigin_PS4_Triangle,
    EInputActionOrigin_PS4_Square,
    EInputActionOrigin_PS4_LeftBumper,
    EInputActionOrigin_PS4_RightBumper,
    EInputActionOrigin_PS4_Options,
    EInputActionOrigin_PS4_Share,
    EInputActionOrigin_PS4_LeftPad_Touch,
    EInputActionOrigin_PS4_LeftPad_Swipe,
    EInputActionOrigin_PS4_LeftPad_Click,
    EInputActionOrigin_PS4_LeftPad_DPadNorth,
    EInputActionOrigin_PS4_LeftPad_DPadSouth,
    EInputActionOrigin_PS4_LeftPad_DPadWest,
    EInputActionOrigin_PS4_LeftPad_DPadEast,
    EInputActionOrigin_PS4_RightPad_Touch,
    EInputActionOrigin_PS4_RightPad_Swipe,
    EInputActionOrigin_PS4_RightPad_Click,
    EInputActionOrigin_PS4_RightPad_DPadNorth,
    EInputActionOrigin_PS4_RightPad_DPadSouth,
    EInputActionOrigin_PS4_RightPad_DPadWest,
    EInputActionOrigin_PS4_RightPad_DPadEast,
    EInputActionOrigin_PS4_CenterPad_Touch,
    EInputActionOrigin_PS4_CenterPad_Swipe,
    EInputActionOrigin_PS4_CenterPad_Click,
    EInputActionOrigin_PS4_CenterPad_DPadNorth,
    EInputActionOrigin_PS4_CenterPad_DPadSouth,
    EInputActionOrigin_PS4_CenterPad_DPadWest,
    EInputActionOrigin_PS4_CenterPad_DPadEast,
    EInputActionOrigin_PS4_LeftTrigger_Pull,
    EInputActionOrigin_PS4_LeftTrigger_Click,
    EInputActionOrigin_PS4_RightTrigger_Pull,
    EInputActionOrigin_PS4_RightTrigger_Click,
    EInputActionOrigin_PS4_LeftStick_Move,
    EInputActionOrigin_PS4_LeftStick_Click,
    EInputActionOrigin_PS4_LeftStick_DPadNorth,
    EInputActionOrigin_PS4_LeftStick_DPadSouth,
    EInputActionOrigin_PS4_LeftStick_DPadWest,
    EInputActionOrigin_PS4_LeftStick_DPadEast,
    EInputActionOrigin_PS4_RightStick_Move,
    EInputActionOrigin_PS4_RightStick_Click,
    EInputActionOrigin_PS4_RightStick_DPadNorth,
    EInputActionOrigin_PS4_RightStick_DPadSouth,
    EInputActionOrigin_PS4_RightStick_DPadWest,
    EInputActionOrigin_PS4_RightStick_DPadEast,
    EInputActionOrigin_PS4_DPad_North,
    EInputActionOrigin_PS4_DPad_South,
    EInputActionOrigin_PS4_DPad_West,
    EInputActionOrigin_PS4_DPad_East,
    EInputActionOrigin_PS4_Gyro_Move,
    EInputActionOrigin_PS4_Gyro_Pitch,
    EInputActionOrigin_PS4_Gyro_Yaw,
    EInputActionOrigin_PS4_Gyro_Roll,
    EInputActionOrigin_PS4_DPad_Move,
    EInputActionOrigin_PS4_Reserved1,
    EInputActionOrigin_PS4_Reserved2,
    EInputActionOrigin_PS4_Reserved3,
    EInputActionOrigin_PS4_Reserved4,
    EInputActionOrigin_PS4_Reserved5,
    EInputActionOrigin_PS4_Reserved6,
    EInputActionOrigin_PS4_Reserved7,
    EInputActionOrigin_PS4_Reserved8,
    EInputActionOrigin_PS4_Reserved9,
    EInputActionOrigin_PS4_Reserved10,
    EInputActionOrigin_XBoxOne_A,
    EInputActionOrigin_XBoxOne_B,
    EInputActionOrigin_XBoxOne_X,
    EInputActionOrigin_XBoxOne_Y,
    EInputActionOrigin_XBoxOne_LeftBumper,
    EInputActionOrigin_XBoxOne_RightBumper,
    EInputActionOrigin_XBoxOne_Menu,
    EInputActionOrigin_XBoxOne_View,
    EInputActionOrigin_XBoxOne_LeftTrigger_Pull,
    EInputActionOrigin_XBoxOne_LeftTrigger_Click,
    EInputActionOrigin_XBoxOne_RightTrigger_Pull,
    EInputActionOrigin_XBoxOne_RightTrigger_Click,
    EInputActionOrigin_XBoxOne_LeftStick_Move,
    EInputActionOrigin_XBoxOne_LeftStick_Click,
    EInputActionOrigin_XBoxOne_LeftStick_DPadNorth,
    EInputActionOrigin_XBoxOne_LeftStick_DPadSouth,
    EInputActionOrigin_XBoxOne_LeftStick_DPadWest,
    EInputActionOrigin_XBoxOne_LeftStick_DPadEast,
    EInputActionOrigin_XBoxOne_RightStick_Move,
    EInputActionOrigin_XBoxOne_RightStick_Click,
    EInputActionOrigin_XBoxOne_RightStick_DPadNorth,
    EInputActionOrigin_XBoxOne_RightStick_DPadSouth,
    EInputActionOrigin_XBoxOne_RightStick_DPadWest,
    EInputActionOrigin_XBoxOne_RightStick_DPadEast,
    EInputActionOrigin_XBoxOne_DPad_North,
    EInputActionOrigin_XBoxOne_DPad_South,
    EInputActionOrigin_XBoxOne_DPad_West,
    EInputActionOrigin_XBoxOne_DPad_East,
    EInputActionOrigin_XBoxOne_DPad_Move,
    EInputActionOrigin_XBoxOne_LeftGrip_Lower,
    EInputActionOrigin_XBoxOne_LeftGrip_Upper,
    EInputActionOrigin_XBoxOne_RightGrip_Lower,
    EInputActionOrigin_XBoxOne_RightGrip_Upper,
    EInputActionOrigin_XBoxOne_Share,
    EInputActionOrigin_XBoxOne_Reserved6,
    EInputActionOrigin_XBoxOne_Reserved7,
    EInputActionOrigin_XBoxOne_Reserved8,
    EInputActionOrigin_XBoxOne_Reserved9,
    EInputActionOrigin_XBoxOne_Reserved10,
    EInputActionOrigin_XBox360_A,
    EInputActionOrigin_XBox360_B,
    EInputActionOrigin_XBox360_X,
    EInputActionOrigin_XBox360_Y,
    EInputActionOrigin_XBox360_LeftBumper,
    EInputActionOrigin_XBox360_RightBumper,
    EInputActionOrigin_XBox360_Start,
    EInputActionOrigin_XBox360_Back,
    EInputActionOrigin_XBox360_LeftTrigger_Pull,
    EInputActionOrigin_XBox360_LeftTrigger_Click,
    EInputActionOrigin_XBox360_RightTrigger_Pull,
    EInputActionOrigin_XBox360_RightTrigger_Click,
    EInputActionOrigin_XBox360_LeftStick_Move,
    EInputActionOrigin_XBox360_LeftStick_Click,
    EInputActionOrigin_XBox360_LeftStick_DPadNorth,
    EInputActionOrigin_XBox360_LeftStick_DPadSouth,
    EInputActionOrigin_XBox360_LeftStick_DPadWest,
    EInputActionOrigin_XBox360_LeftStick_DPadEast,
    EInputActionOrigin_XBox360_RightStick_Move,
    EInputActionOrigin_XBox360_RightStick_Click,
    EInputActionOrigin_XBox360_RightStick_DPadNorth,
    EInputActionOrigin_XBox360_RightStick_DPadSouth,
    EInputActionOrigin_XBox360_RightStick_DPadWest,
    EInputActionOrigin_XBox360_RightStick_DPadEast,
    EInputActionOrigin_XBox360_DPad_North,
    EInputActionOrigin_XBox360_DPad_South,
    EInputActionOrigin_XBox360_DPad_West,
    EInputActionOrigin_XBox360_DPad_East,
    EInputActionOrigin_XBox360_DPad_Move,
    EInputActionOrigin_XBox360_Reserved1,
    EInputActionOrigin_XBox360_Reserved2,
    EInputActionOrigin_XBox360_Reserved3,
    EInputActionOrigin_XBox360_Reserved4,
    EInputActionOrigin_XBox360_Reserved5,
    EInputActionOrigin_XBox360_Reserved6,
    EInputActionOrigin_XBox360_Reserved7,
    EInputActionOrigin_XBox360_Reserved8,
    EInputActionOrigin_XBox360_Reserved9,
    EInputActionOrigin_XBox360_Reserved10,
    EInputActionOrigin_Switch_A,
    EInputActionOrigin_Switch_B,
    EInputActionOrigin_Switch_X,
    EInputActionOrigin_Switch_Y,
    EInputActionOrigin_Switch_LeftBumper,
    EInputActionOrigin_Switch_RightBumper,
    EInputActionOrigin_Switch_Plus,
    EInputActionOrigin_Switch_Minus,
    EInputActionOrigin_Switch_Capture,
    EInputActionOrigin_Switch_LeftTrigger_Pull,
    EInputActionOrigin_Switch_LeftTrigger_Click,
    EInputActionOrigin_Switch_RightTrigger_Pull,
    EInputActionOrigin_Switch_RightTrigger_Click,
    EInputActionOrigin_Switch_LeftStick_Move,
    EInputActionOrigin_Switch_LeftStick_Click,
    EInputActionOrigin_Switch_LeftStick_DPadNorth,
    EInputActionOrigin_Switch_LeftStick_DPadSouth,
    EInputActionOrigin_Switch_LeftStick_DPadWest,
    EInputActionOrigin_Switch_LeftStick_DPadEast,
    EInputActionOrigin_Switch_RightStick_Move,
    EInputActionOrigin_Switch_RightStick_Click,
    EInputActionOrigin_Switch_RightStick_DPadNorth,
    EInputActionOrigin_Switch_RightStick_DPadSouth,
    EInputActionOrigin_Switch_RightStick_DPadWest,
    EInputActionOrigin_Switch_RightStick_DPadEast,
    EInputActionOrigin_Switch_DPad_North,
    EInputActionOrigin_Switch_DPad_South,
    EInputActionOrigin_Switch_DPad_West,
    EInputActionOrigin_Switch_DPad_East,
    EInputActionOrigin_Switch_ProGyro_Move,
    EInputActionOrigin_Switch_ProGyro_Pitch,
    EInputActionOrigin_Switch_ProGyro_Yaw,
    EInputActionOrigin_Switch_ProGyro_Roll,
    EInputActionOrigin_Switch_DPad_Move,
    EInputActionOrigin_Switch_Reserved1,
    EInputActionOrigin_Switch_Reserved2,
    EInputActionOrigin_Switch_Reserved3,
    EInputActionOrigin_Switch_Reserved4,
    EInputActionOrigin_Switch_Reserved5,
    EInputActionOrigin_Switch_Reserved6,
    EInputActionOrigin_Switch_Reserved7,
    EInputActionOrigin_Switch_Reserved8,
    EInputActionOrigin_Switch_Reserved9,
    EInputActionOrigin_Switch_Reserved10,
    EInputActionOrigin_Switch_RightGyro_Move,
    EInputActionOrigin_Switch_RightGyro_Pitch,
    EInputActionOrigin_Switch_RightGyro_Yaw,
    EInputActionOrigin_Switch_RightGyro_Roll,
    EInputActionOrigin_Switch_LeftGyro_Move,
    EInputActionOrigin_Switch_LeftGyro_Pitch,
    EInputActionOrigin_Switch_LeftGyro_Yaw,
    EInputActionOrigin_Switch_LeftGyro_Roll,
    EInputActionOrigin_Switch_LeftGrip_Lower,
    EInputActionOrigin_Switch_LeftGrip_Upper,
    EInputActionOrigin_Switch_RightGrip_Lower,
    EInputActionOrigin_Switch_RightGrip_Upper,
    EInputActionOrigin_Switch_JoyConButton_N,
    EInputActionOrigin_Switch_JoyConButton_E,
    EInputActionOrigin_Switch_JoyConButton_S,
    EInputActionOrigin_Switch_JoyConButton_W,
    EInputActionOrigin_Switch_Reserved15,
    EInputActionOrigin_Switch_Reserved16,
    EInputActionOrigin_Switch_Reserved17,
    EInputActionOrigin_Switch_Reserved18,
    EInputActionOrigin_Switch_Reserved19,
    EInputActionOrigin_Switch_Reserved20,
    EInputActionOrigin_PS5_X,
    EInputActionOrigin_PS5_Circle,
    EInputActionOrigin_PS5_Triangle,
    EInputActionOrigin_PS5_Square,
    EInputActionOrigin_PS5_LeftBumper,
    EInputActionOrigin_PS5_RightBumper,
    EInputActionOrigin_PS5_Option,
    EInputActionOrigin_PS5_Create,
    EInputActionOrigin_PS5_Mute,
    EInputActionOrigin_PS5_LeftPad_Touch,
    EInputActionOrigin_PS5_LeftPad_Swipe,
    EInputActionOrigin_PS5_LeftPad_Click,
    EInputActionOrigin_PS5_LeftPad_DPadNorth,
    EInputActionOrigin_PS5_LeftPad_DPadSouth,
    EInputActionOrigin_PS5_LeftPad_DPadWest,
    EInputActionOrigin_PS5_LeftPad_DPadEast,
    EInputActionOrigin_PS5_RightPad_Touch,
    EInputActionOrigin_PS5_RightPad_Swipe,
    EInputActionOrigin_PS5_RightPad_Click,
    EInputActionOrigin_PS5_RightPad_DPadNorth,
    EInputActionOrigin_PS5_RightPad_DPadSouth,
    EInputActionOrigin_PS5_RightPad_DPadWest,
    EInputActionOrigin_PS5_RightPad_DPadEast,
    EInputActionOrigin_PS5_CenterPad_Touch,
    EInputActionOrigin_PS5_CenterPad_Swipe,
    EInputActionOrigin_PS5_CenterPad_Click,
    EInputActionOrigin_PS5_CenterPad_DPadNorth,
    EInputActionOrigin_PS5_CenterPad_DPadSouth,
    EInputActionOrigin_PS5_CenterPad_DPadWest,
    EInputActionOrigin_PS5_CenterPad_DPadEast,
    EInputActionOrigin_PS5_LeftTrigger_Pull,
    EInputActionOrigin_PS5_LeftTrigger_Click,
    EInputActionOrigin_PS5_RightTrigger_Pull,
    EInputActionOrigin_PS5_RightTrigger_Click,
    EInputActionOrigin_PS5_LeftStick_Move,
    EInputActionOrigin_PS5_LeftStick_Click,
    EInputActionOrigin_PS5_LeftStick_DPadNorth,
    EInputActionOrigin_PS5_LeftStick_DPadSouth,
    EInputActionOrigin_PS5_LeftStick_DPadWest,
    EInputActionOrigin_PS5_LeftStick_DPadEast,
    EInputActionOrigin_PS5_RightStick_Move,
    EInputActionOrigin_PS5_RightStick_Click,
    EInputActionOrigin_PS5_RightStick_DPadNorth,
    EInputActionOrigin_PS5_RightStick_DPadSouth,
    EInputActionOrigin_PS5_RightStick_DPadWest,
    EInputActionOrigin_PS5_RightStick_DPadEast,
    EInputActionOrigin_PS5_DPad_North,
    EInputActionOrigin_PS5_DPad_South,
    EInputActionOrigin_PS5_DPad_West,
    EInputActionOrigin_PS5_DPad_East,
    EInputActionOrigin_PS5_Gyro_Move,
    EInputActionOrigin_PS5_Gyro_Pitch,
    EInputActionOrigin_PS5_Gyro_Yaw,
    EInputActionOrigin_PS5_Gyro_Roll,
    EInputActionOrigin_PS5_DPad_Move,
    EInputActionOrigin_PS5_LeftGrip,
    EInputActionOrigin_PS5_RightGrip,
    EInputActionOrigin_PS5_LeftFn,
    EInputActionOrigin_PS5_RightFn,
    EInputActionOrigin_PS5_Reserved5,
    EInputActionOrigin_PS5_Reserved6,
    EInputActionOrigin_PS5_Reserved7,
    EInputActionOrigin_PS5_Reserved8,
    EInputActionOrigin_PS5_Reserved9,
    EInputActionOrigin_PS5_Reserved10,
    EInputActionOrigin_PS5_Reserved11,
    EInputActionOrigin_PS5_Reserved12,
    EInputActionOrigin_PS5_Reserved13,
    EInputActionOrigin_PS5_Reserved14,
    EInputActionOrigin_PS5_Reserved15,
    EInputActionOrigin_PS5_Reserved16,
    EInputActionOrigin_PS5_Reserved17,
    EInputActionOrigin_PS5_Reserved18,
    EInputActionOrigin_PS5_Reserved19,
    EInputActionOrigin_PS5_Reserved20,
    EInputActionOrigin_SteamDeck_A,
    EInputActionOrigin_SteamDeck_B,
    EInputActionOrigin_SteamDeck_X,
    EInputActionOrigin_SteamDeck_Y,
    EInputActionOrigin_SteamDeck_L1,
    EInputActionOrigin_SteamDeck_R1,
    EInputActionOrigin_SteamDeck_Menu,
    EInputActionOrigin_SteamDeck_View,
    EInputActionOrigin_SteamDeck_LeftPad_Touch,
    EInputActionOrigin_SteamDeck_LeftPad_Swipe,
    EInputActionOrigin_SteamDeck_LeftPad_Click,
    EInputActionOrigin_SteamDeck_LeftPad_DPadNorth,
    EInputActionOrigin_SteamDeck_LeftPad_DPadSouth,
    EInputActionOrigin_SteamDeck_LeftPad_DPadWest,
    EInputActionOrigin_SteamDeck_LeftPad_DPadEast,
    EInputActionOrigin_SteamDeck_RightPad_Touch,
    EInputActionOrigin_SteamDeck_RightPad_Swipe,
    EInputActionOrigin_SteamDeck_RightPad_Click,
    EInputActionOrigin_SteamDeck_RightPad_DPadNorth,
    EInputActionOrigin_SteamDeck_RightPad_DPadSouth,
    EInputActionOrigin_SteamDeck_RightPad_DPadWest,
    EInputActionOrigin_SteamDeck_RightPad_DPadEast,
    EInputActionOrigin_SteamDeck_L2_SoftPull,
    EInputActionOrigin_SteamDeck_L2,
    EInputActionOrigin_SteamDeck_R2_SoftPull,
    EInputActionOrigin_SteamDeck_R2,
    EInputActionOrigin_SteamDeck_LeftStick_Move,
    EInputActionOrigin_SteamDeck_L3,
    EInputActionOrigin_SteamDeck_LeftStick_DPadNorth,
    EInputActionOrigin_SteamDeck_LeftStick_DPadSouth,
    EInputActionOrigin_SteamDeck_LeftStick_DPadWest,
    EInputActionOrigin_SteamDeck_LeftStick_DPadEast,
    EInputActionOrigin_SteamDeck_LeftStick_Touch,
    EInputActionOrigin_SteamDeck_RightStick_Move,
    EInputActionOrigin_SteamDeck_R3,
    EInputActionOrigin_SteamDeck_RightStick_DPadNorth,
    EInputActionOrigin_SteamDeck_RightStick_DPadSouth,
    EInputActionOrigin_SteamDeck_RightStick_DPadWest,
    EInputActionOrigin_SteamDeck_RightStick_DPadEast,
    EInputActionOrigin_SteamDeck_RightStick_Touch,
    EInputActionOrigin_SteamDeck_L4,
    EInputActionOrigin_SteamDeck_R4,
    EInputActionOrigin_SteamDeck_L5,
    EInputActionOrigin_SteamDeck_R5,
    EInputActionOrigin_SteamDeck_DPad_Move,
    EInputActionOrigin_SteamDeck_DPad_North,
    EInputActionOrigin_SteamDeck_DPad_South,
    EInputActionOrigin_SteamDeck_DPad_West,
    EInputActionOrigin_SteamDeck_DPad_East,
    EInputActionOrigin_SteamDeck_Gyro_Move,
    EInputActionOrigin_SteamDeck_Gyro_Pitch,
    EInputActionOrigin_SteamDeck_Gyro_Yaw,
    EInputActionOrigin_SteamDeck_Gyro_Roll,
    EInputActionOrigin_SteamDeck_Reserved1,
    EInputActionOrigin_SteamDeck_Reserved2,
    EInputActionOrigin_SteamDeck_Reserved3,
    EInputActionOrigin_SteamDeck_Reserved4,
    EInputActionOrigin_SteamDeck_Reserved5,
    EInputActionOrigin_SteamDeck_Reserved6,
    EInputActionOrigin_SteamDeck_Reserved7,
    EInputActionOrigin_SteamDeck_Reserved8,
    EInputActionOrigin_SteamDeck_Reserved9,
    EInputActionOrigin_SteamDeck_Reserved10,
    EInputActionOrigin_SteamDeck_Reserved11,
    EInputActionOrigin_SteamDeck_Reserved12,
    EInputActionOrigin_SteamDeck_Reserved13,
    EInputActionOrigin_SteamDeck_Reserved14,
    EInputActionOrigin_SteamDeck_Reserved15,
    EInputActionOrigin_SteamDeck_Reserved16,
    EInputActionOrigin_SteamDeck_Reserved17,
    EInputActionOrigin_SteamDeck_Reserved18,
    EInputActionOrigin_SteamDeck_Reserved19,
    EInputActionOrigin_SteamDeck_Reserved20,
    EInputActionOrigin_Count,
    EInputActionOrigin_MaximumPossibleValue = 32767,
};

