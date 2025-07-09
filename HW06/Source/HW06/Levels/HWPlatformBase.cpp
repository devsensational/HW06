#include "HWPlatformBase.h"

#include "Components/BoxComponent.h"


// 기본값 설정
AHWPlatformBase::AHWPlatformBase()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// 플랫폼 메시 컴포넌트 생성
	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	PlatformMesh->SetCollisionProfileName(TEXT("Platform"));
	RootComponent = PlatformMesh;
}

void AHWPlatformBase::BeginPlay()
{
	Super::BeginPlay();

}

void AHWPlatformBase::Action(float DeltaTime)
{
	// 기본 구현은 아무 동작도 하지 않음
	UE_LOG(LogTemp, Warning, TEXT("Action이 기본 클래스에서 구현되지 않았습니다!"));
}

void AHWPlatformBase::InitStats(const FHWPlatformStats &InPlatformStats)
{
	PlatformStats = InPlatformStats;
	SetActorLocation(PlatformStats.StartPosition);
	PlatformStats.StartPosition = GetActorLocation();
}
