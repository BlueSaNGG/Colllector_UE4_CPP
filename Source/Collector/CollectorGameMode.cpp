// Copyright Epic Games, Inc. All Rights Reserved.

#include "CollectorGameMode.h"
#include "CollectorCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACollectorGameMode::ACollectorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
