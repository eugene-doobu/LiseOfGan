// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LGPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class LISEOFGAN_API ALGPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

private:
	void SetMousePositionInViewPort();
};
