#include "HWRotatePlatform.h"


AHWRotatePlatform::AHWRotatePlatform()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AHWRotatePlatform::BeginPlay()
{
	Super::BeginPlay();
	
	// 일정 시간 이후 반대로 회전하도록 설정
	// 일정 시간(예: 2초) 후에 회전 방향을 반대로 바꾸는 타이머 설정
	GetWorldTimerManager().SetTimer(
	    ReverseTimerHandle,
	    this,
	    &AHWRotatePlatform::ReverseRotation,
	    PlatformStats.RotationReverseDelay, // 2초 후 실행
	    false
	);
}

void AHWRotatePlatform::ReverseRotation()
{
	PlatformStats.RotationSpeed *= -1.0f;
	GetWorldTimerManager().SetTimer(
		ReverseTimerHandle,
		this,
		&AHWRotatePlatform::ReverseRotation,
		PlatformStats.RotationReverseDelay, // n초 후 실행
		false
	);
}

void AHWRotatePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Action(DeltaTime);
}

void AHWRotatePlatform::Action(float DeltaTime)
{
	Super::Action(DeltaTime);
	
	if (PlatformMesh)
	{
		// Rotate the platform mesh around the specified axis
		FRotator NewRotation = PlatformMesh->GetComponentRotation();
		NewRotation += FRotator(0.0f, PlatformStats.RotationSpeed * DeltaTime, 0.0f);
		PlatformMesh->SetWorldRotation(NewRotation);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlatformMesh is not set!"));
	}
}

