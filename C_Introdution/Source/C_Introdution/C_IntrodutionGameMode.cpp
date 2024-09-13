// Copyright Epic Games, Inc. All Rights Reserved.

#include "C_IntrodutionGameMode.h"
#include "C_IntrodutionCharacter.h"
#include "UObject/ConstructorHelpers.h"

AC_IntrodutionGameMode::AC_IntrodutionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
