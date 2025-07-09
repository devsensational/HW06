#pragma once

#include "CoreMinimal.h"
#include "FHWPlatformStats.generated.h"

USTRUCT(BlueprintType)
struct FHWPlatformStats
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Platform Settings")
    FVector StartPosition = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
    float MovementSpeed = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
    float MaxRange = 500.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
    float RotationReverseDelay = 10.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
    FVector RotationAxis = FVector(0.0f, 0.0f, 1.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
    float RotationSpeed = 30.0f;
};
