// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FHWPlatformStats.h"
#include "HWRandomCreator.generated.h"

UCLASS()
class HW06_API AHWRandomCreator : public AActor
{
	GENERATED_BODY()

public:
	AHWRandomCreator();

protected:
	virtual void BeginPlay() override;

public:
	// 블루프린트를 통해 생성할 액터의 클래스
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	TArray<TSubclassOf<AActor>> PlatformSpawnList;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	FHWPlatformStats PlatformStats;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float CreateDelay = 5.0f; // 몇 초 후에 생성할지 설정

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float RandomPositionRange = 15.0f; // 생성 위치의 랜덤 범위 (선택 범위의 ±값)

	virtual void RandomPlatformCreate();

private:
	FTimerHandle TimerHandle;

	void StartPlatformCreate();
};
