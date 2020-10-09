// Copyright Epic Games, Inc. All Rights Reserved.

#include "CabinProjectGameMode.h"
#include "CabinProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACabinProjectGameMode::ACabinProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
