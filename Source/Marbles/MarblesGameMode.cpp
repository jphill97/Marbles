// Copyright Epic Games, Inc. All Rights Reserved.

#include "MarblesGameMode.h"
#include "MarblesBall.h"

AMarblesGameMode::AMarblesGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = AMarblesBall::StaticClass();
}
