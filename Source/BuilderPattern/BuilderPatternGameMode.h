// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BuilderPatternGameMode.generated.h"

UCLASS(MinimalAPI)
class ABuilderPatternGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABuilderPatternGameMode();
	// Called when the game starts
	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};



