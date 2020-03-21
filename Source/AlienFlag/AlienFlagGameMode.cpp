// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AlienFlagGameMode.h"
#include "AlienFlagCharacter.h"

AAlienFlagGameMode::AAlienFlagGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AAlienFlagCharacter::StaticClass();	
}
