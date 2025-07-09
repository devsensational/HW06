// 프로젝트 설정의 Description 페이지에 저작권 정보를 입력하세요.

#include "HWMovingPlatform.h"

#include "FHWPlatformStats.h"

AHWMovingPlatform::AHWMovingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;

	// 기본값
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
	FVector NewLocation = GetActorLocation();
	NewLocation += GetActorForwardVector() * PlatformStats.MovementSpeed * DeltaTime;
	SetActorLocation(NewLocation);

	// Max Range 체크 후 제거
	if (FVector::Dist(NewLocation, PlatformStats.StartPosition) >= PlatformStats.MaxRange)
	{
		// 플랫폼을 제거하거나 다른 동작을 수행
		Destroy();
		// 또는 다른 로직을 추가
	}
}

