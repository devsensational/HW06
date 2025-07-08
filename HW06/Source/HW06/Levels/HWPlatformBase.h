// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/IFloorAction.h"
#include "HWPlatformBase.generated.h"

class UBoxComponent;

UCLASS()
class HW06_API AHWPlatformBase : public AActor, public IIFloorAction
{
	GENERATED_BODY()

public:
	AHWPlatformBase();

protected:
	virtual void BeginPlay() override;

public:
	// Platform mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform Settings")
	TObjectPtr<UStaticMeshComponent> PlatformMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform Settings")
	TObjectPtr<UBoxComponent> BoxComponent;
	
	virtual void Action(float DeltaTime) override;
	
};
