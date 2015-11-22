// Fill out your copyright notice in the Description page of Project Settings.

#include "Tauri.h"
#include "TauriGameState.h"
#include "UnrealNetwork.h"

void ATauriGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ATauriGameState, playerPawns);
}


