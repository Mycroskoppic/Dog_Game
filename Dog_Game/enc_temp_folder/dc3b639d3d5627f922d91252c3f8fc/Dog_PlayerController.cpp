// Fill out your copyright notice in the Description page of Project Settings.

#include "Dog_PlayerController.h"
#include "Dog_GameCharacter.h"


void ADog_PlayerController::LossofControl() 
{

	ControlLossTime = 5;


}

void ADog_PlayerController::Tick(float deltatime) 

{
	Super::Tick(deltatime);

	if (ControlLossTime > 0)
	{
		Cast<ADog_GameCharacter>(GetPawn())->MoveForward(1);
		ControlLossTime -= deltatime;
	}


}
