// 프로젝트 설정의 Description 페이지에 저작권 정보를 입력하세요.

#pragma once

#include "CoreMinimal.h"
#include "HWPlatformBase.h"
#include "GameFramework/Actor.h"
#include "Interfaces/IFloorAction.h"
#include "HWMovingPlatform.generated.h"

struct FHWPlatformStats;

UCLASS()
class HW06_API AHWMovingPlatform : public AHWPlatformBase
{
	GENERATED_BODY()
	
public:	
	AHWMovingPlatform();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	// 플랫폼 액션: 해당 클래스는 앞으로 이동
	virtual void Action(float DeltaTime) override;
};
