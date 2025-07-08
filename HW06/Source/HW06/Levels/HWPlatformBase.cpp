// Fill out your copyright notice in the Description page of Project Settings.


#include "HWPlatformBase.h"

#include "Components/BoxComponent.h"


// Sets default values
AHWPlatformBase::AHWPlatformBase()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// Create the platform mesh component
	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	RootComponent = PlatformMesh;
	
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxComponent->SetCollisionProfileName(TEXT("Platform"));
}

void AHWPlatformBase::BeginPlay()
{
	Super::BeginPlay();

}

void AHWPlatformBase::Action(float DeltaTime)
{
	// Default implementation does nothing
	UE_LOG(LogTemp, Warning, TEXT("Action not implemented in base class!"));
}
