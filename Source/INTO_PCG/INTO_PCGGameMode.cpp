// Copyright Epic Games, Inc. All Rights Reserved.

#include "INTO_PCGGameMode.h"
#include "INTO_PCGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AINTO_PCGGameMode::AINTO_PCGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
