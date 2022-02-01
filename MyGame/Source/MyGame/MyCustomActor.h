// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCustomActor.generated.h"

UCLASS()
class MYGAME_API ACustomActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Options")
		bool bOption1 = false;

	UPROPERTY(EditAnywhere, Category = "Test")
		int testInt = 0;
};