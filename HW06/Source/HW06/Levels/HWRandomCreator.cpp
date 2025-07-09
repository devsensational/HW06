#include "HWRandomCreator.h"

#include "HWPlatformBase.h"
#include "Interfaces/IFloorAction.h"

// 기본값 설정
AHWRandomCreator::AHWRandomCreator()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AHWRandomCreator::BeginPlay()
{
	Super::BeginPlay();

	StartPlatformCreate();
}

void AHWRandomCreator::RandomPlatformCreate()
{
	int ListCount = PlatformSpawnList.Num();
	if (ListCount <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlatformSpawnList가 비어 있습니다!"));
		return;
	}

	int RandomIndex = FMath::RandRange(0, ListCount - 1);

	if (TSubclassOf<AActor> SelectedClass = PlatformSpawnList[RandomIndex])
	{
		FActorSpawnParameters SpawnParams;
		if (AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(SelectedClass, GetActorLocation(), GetActorRotation(), SpawnParams))
		{
			if (AHWPlatformBase* PlatformBase = Cast<AHWPlatformBase>(SpawnedActor))
			{
				float RandomPositionY = FMath::RandRange(-RandomPositionRange, RandomPositionRange);
				PlatformStats.StartPosition = GetActorLocation() + FVector(0.0f, RandomPositionY, 0.0f);
				PlatformBase->InitStats(PlatformStats);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("선택된 클래스가 null입니다!"));
	}
	
	StartPlatformCreate();
}

void AHWRandomCreator::StartPlatformCreate()
{
	GetWorldTimerManager().SetTimer(
		TimerHandle,
		this,
		&AHWRandomCreator::RandomPlatformCreate,
		CreateDelay, // n초 후 실행
		false
	);
}
