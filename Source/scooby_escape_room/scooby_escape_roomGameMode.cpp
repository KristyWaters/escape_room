// Copyright Epic Games, Inc. All Rights Reserved.

#include "scooby_escape_roomGameMode.h"
#include "scooby_escape_roomCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ascooby_escape_roomGameMode::Ascooby_escape_roomGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
