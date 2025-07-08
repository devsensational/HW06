#include "HWRotateActor.h"


AHWRotateActor::AHWRotateActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AHWRotateActor::BeginPlay()
{
	Super::BeginPlay();
	
	// 일정 시간 이후 반대로 회전하도록 설정
	// 일정 시간(예: 2초) 후에 회전 방향을 반대로 바꾸는 타이머 설정
	GetWorldTimerManager().SetTimer(
	    ReverseTimerHandle,
	    this,
	    &AHWRotateActor::ReverseRotation,
	    ReverseDelay, // 2초 후 실행
	    false
	);
}

void AHWRotateActor::ReverseRotation()
{
	RotationSpeed *= -1.0f;
	GetWorldTimerManager().SetTimer(
		ReverseTimerHandle,
		this,
		&AHWRotateActor::ReverseRotation,
		ReverseDelay, // n초 후 실행
		false
	);
}

void AHWRotateActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Action(DeltaTime);
}

void AHWRotateActor::Action(float DeltaTime)
{
	if (PlatformMesh)
	{
		// Rotate the platform mesh around the specified axis
		FRotator NewRotation = PlatformMesh->GetComponentRotation();
		NewRotation += FRotator(0.0f, RotationSpeed * GetWorld()->GetDeltaSeconds(), 0.0f);
		PlatformMesh->SetWorldRotation(NewRotation);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlatformMesh is not set!"));
	}
}

