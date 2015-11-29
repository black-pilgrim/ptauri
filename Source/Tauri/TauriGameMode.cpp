// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Tauri.h"
#include "TauriGameMode.h"
#include "TauriCharacter.h"
#include "TauriHUD.h"
#include "TauriPlayerState.h"
#include "TauriGameState.h"

ATauriGameMode::ATauriGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Level/GameMode/TauriCharacterBP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	static ConstructorHelpers::FClassFinder<AHUD> HudBPClass(TEXT("/Game/Blueprints/Level/GameMode/TauriHudBP"));
	if (HudBPClass.Class != NULL)
	{
		HUDClass = HudBPClass.Class;
	}	
	static ConstructorHelpers::FClassFinder<APlayerState> PlayerStateBPClass(TEXT("/Game/Blueprints/Level/GameMode/TauriPlayerStateBP"));
	if (PlayerStateBPClass.Class != NULL)
	{
		PlayerStateClass = PlayerStateBPClass.Class;
	}
}
