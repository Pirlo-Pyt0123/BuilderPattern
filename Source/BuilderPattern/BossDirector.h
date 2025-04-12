// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuildBoss.h"
#include "BossDirector.generated.h"
UCLASS()
class BUILDERPATTERN_API ABossDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABossDirector();

	// Asignar el builder externo
	void SetBuilder(TScriptInterface<IBuildBoss> NuevoBuilder);

	// Métodos para construir diferentes jefes
	void ConstruirBossAgresivo();
	void ConstruirBossDefensivo();
	void ConstruirBossBalanceado();

private:
	// Referencia al builder actual
	TScriptInterface<IBuildBoss> Builder;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
