// Fill out your copyright notice in the Description page of Project Settings.


#include "HWMovingPlatform.h"

AHWMovingPlatform::AHWMovingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AHWMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHWMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Action(DeltaTime);
}

void AHWMovingPlatform::Action(float DeltaTime)
{
	if (PlatformMesh)
	{
		// Calculate the new position based on the movement speed and delta time
		FVector NewPosition = PlatformMesh->GetComponentLocation() + (FVector::ForwardVector * MovementSpeed * GetWorld()->GetDeltaSeconds());
		
		// Check if the new position is within the max range
		if (FVector::Dist(StartPosition, NewPosition) <= MaxRange)
		{
			PlatformMesh->SetWorldLocation(NewPosition);
		}
		else
		{
			// Reset to start position if max range exceeded
			PlatformMesh->SetWorldLocation(StartPosition);
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlatformMesh is not set!"));
	}
}

