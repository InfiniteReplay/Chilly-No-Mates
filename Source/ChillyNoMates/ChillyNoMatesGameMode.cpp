// Fill out your copyright notice in the Description page of Project Settings.

#include "ChillyNoMates.h"
#include "ChillyNoMatesGameMode.h"

#include "Runtime/Engine/Classes/Engine/Engine.h"

void AChillyNoMatesGameMode::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		// Display a debug message for five seconds. 
		// The -1 "Key" value (first argument) indicates that we will never need to update or refresh this message.
		GEngine->AddOnScreenDebugMessage(-1, 50.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));
	}
}