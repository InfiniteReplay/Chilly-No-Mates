// Copyright 2018 Infinite Replay. All Rights Reserved.

#include "ChillyNoMatesGameModeBase.h"
#include "UObject/ConstructorHelpers.h"
#include "MainCharacter.h"

AChillyNoMatesGameModeBase::AChillyNoMatesGameModeBase() : Super()
{
	UE_LOG(LogTemp, Warning, TEXT("GameMode now running"));

	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/MainCharacter/Blueprints/MainCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
}