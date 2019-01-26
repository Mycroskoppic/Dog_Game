// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Dog_GameGameMode.h"
#include "Dog_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADog_GameGameMode::ADog_GameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
