// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Tauri.h"
#include "TauriGameMode.h"
#include "TauriCharacter.h"
#include "TauriGameState.h"

ATauriGameMode::ATauriGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/TauriCharacterBP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	static ConstructorHelpers::FClassFinder<AGameState> GameStateBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/TauriGameStateBP"));
	if (GameStateBPClass.Class != NULL)
	{
		GameStateClass = GameStateBPClass.Class;
	}


	
}
