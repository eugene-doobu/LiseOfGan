// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/LGGameMode.h"
#include "Player/LGPlayerController.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LGGameMode)

ALGGameMode::ALGGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> ThirdPersonClassRef(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C"));
	if (ThirdPersonClassRef.Class)
	{
		DefaultPawnClass = ThirdPersonClassRef.Class;
	}
	
	PlayerControllerClass = ALGPlayerController::StaticClass();
}
