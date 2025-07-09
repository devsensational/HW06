// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HWMovingPlatform.h"
#include "HWPlatformBase.h"
#include "GameFramework/Actor.h"
#include "Interfaces/IFloorAction.h"
#include "HWRotatePlatform.generated.h"

UCLASS()
class HW06_API AHWRotatePlatform : public AHWMovingPlatform
{
	GENERATED_BODY()

public:
	AHWRotatePlatform();

protected:
	virtual void BeginPlay() override;

	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Action(float DeltaTime) override;
	
private:
	FTimerHandle ReverseTimerHandle;
	
	void ReverseRotation();
};
