// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HWPlatformBase.h"
#include "GameFramework/Actor.h"
#include "Interfaces/IFloorAction.h"
#include "HWMovingPlatform.generated.h"

UCLASS()
class HW06_API AHWMovingPlatform : public AHWPlatformBase
{
	GENERATED_BODY()
	
public:	
	AHWMovingPlatform();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	//
	virtual void Action(float DeltaTime) override;
	
	// Platform movement speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MovementSpeed = 100.0f;

	// Platform Max range
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MaxRange = 500.0f;

	// Platform start position
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform Settings")
	FVector StartPosition;
	
};
