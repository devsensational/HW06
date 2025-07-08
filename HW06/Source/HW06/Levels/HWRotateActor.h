// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HWPlatformBase.h"
#include "GameFramework/Actor.h"
#include "Interfaces/IFloorAction.h"
#include "HWRotateActor.generated.h"

UCLASS()
class HW06_API AHWRotateActor : public AHWPlatformBase
{
	GENERATED_BODY()

public:
	AHWRotateActor();

protected:
	virtual void BeginPlay() override;

	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Action(float DeltaTime) override;

	// Rotation speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float RotationSpeed = 50.0f;

	// Rotation axis
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	FVector RotationAxis = FVector(0.0f, 0.0f, 1.0f); // Default to Z-axis rotation

	// 몇초 후에 반대로 회전할지 설정
public:
	float ReverseDelay = 10.0f; // Time in seconds before reversing rotation
	
private:
	FTimerHandle ReverseTimerHandle;
	
	void ReverseRotation();
};
