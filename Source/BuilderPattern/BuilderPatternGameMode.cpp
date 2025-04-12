// Copyright Epic Games, Inc. All Rights Reserved.

#include "BuilderPatternGameMode.h"
#include "BuilderPatternPawn.h"

ABuilderPatternGameMode::ABuilderPatternGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ABuilderPatternPawn::StaticClass();
}

