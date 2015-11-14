// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Tauri.h"
#include "TauriGameMode.h"
#include "TauriHUD.h"
#include "TauriCharacter.h"

ATauriGameMode::ATauriGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATauriHUD::StaticClass();
}
