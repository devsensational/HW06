// 프로젝트 설정의 Description 페이지에 저작권 정보를 입력하세요.

#pragma once

#include "CoreMinimal.h"
#include "FHWPlatformStats.h"
#include "GameFramework/Actor.h"
#include "DataTypes/FHWPlatformStats.h"
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
	// 플랫폼 메시
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform Settings")
	TObjectPtr<UStaticMeshComponent> PlatformMesh;

	// 박스 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform Settings")
	TObjectPtr<UBoxComponent> BoxComponent;

	// 플랫폼 스탯
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	FHWPlatformStats PlatformStats;

	virtual void Action(float DeltaTime) override;
	
	// 플랫폼 초기화 함수
	virtual void InitStats(const FHWPlatformStats &InPlatformStats);
};
