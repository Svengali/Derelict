// Copyright Epic Games, Inc. All Rights Reserved.

#include "DerelictGameMode.h"
#include "DerelictPawn.h"

ADerelictGameMode::ADerelictGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ADerelictPawn::StaticClass();
}

