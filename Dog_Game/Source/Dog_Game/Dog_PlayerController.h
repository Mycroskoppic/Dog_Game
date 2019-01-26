// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Dog_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DOG_GAME_API ADog_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = Squirrel)
	void LossofControl();

	virtual void Tick(float deltatime) override;

	float ControlLossTime = 0;
	
	
};
