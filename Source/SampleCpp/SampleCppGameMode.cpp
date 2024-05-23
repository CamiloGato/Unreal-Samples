// Copyright Epic Games, Inc. All Rights Reserved.

#include "SampleCppGameMode.h"
#include "SampleCppCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASampleCppGameMode::ASampleCppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
