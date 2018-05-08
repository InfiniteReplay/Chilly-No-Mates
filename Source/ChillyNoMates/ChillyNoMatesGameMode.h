// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "ChillyNoMatesGameMode.generated.h"

/**
 * 
 */
UCLASS()
class CHILLYNOMATES_API AChillyNoMatesGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
	
	virtual void StartPlay() override;
};
