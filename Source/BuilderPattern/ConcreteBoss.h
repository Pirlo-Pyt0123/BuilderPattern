// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuildBoss.h"
#include "UltimateBoss.h"
#include "ConcreteBoss.generated.h"

UCLASS()
class BUILDERPATTERN_API AConcreteBoss : public AActor, public IBuildBoss
{
	GENERATED_BODY()
	
private:
	UPROPERTY()
	AUltimateBoss* BossActual = nullptr;

public:	
	// Sets default values for this actor's properties
	AConcreteBoss();

	// Builder methods
	virtual void Reset() override;
	virtual void BuildArmaEspecial() override;
	virtual void BuildEscudo() override;
	virtual void BuildVidaExtra() override;
	virtual void BuildMovimientoDeJefe() override;
	virtual void BuildIAAvanzada() override;

	virtual AUltimateBoss* GetBoss() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
