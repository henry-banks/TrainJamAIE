// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TrainJamAIEGameMode.h"
#include "TrainJamAIEPawn.h"

ATrainJamAIEGameMode::ATrainJamAIEGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ATrainJamAIEPawn::StaticClass();
}

