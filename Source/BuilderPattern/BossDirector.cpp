// Fill out your copyright notice in the Description page of Project Settings.


#include "BossDirector.h"

// Sets default values
ABossDirector::ABossDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ABossDirector::SetBuilder(TScriptInterface<IBuildBoss> NuevoBuilder)
{
	Builder = NuevoBuilder;
}

void ABossDirector::ConstruirBossAgresivo()
{
	if (!Builder) return;

	Builder->Reset();
	Builder->BuildArmaEspecial();
	Builder->BuildMovimientoDeJefe();
	Builder->BuildIAAvanzada();
}

void ABossDirector::ConstruirBossDefensivo()
{
	if (!Builder) return;

	Builder->Reset();
	Builder->BuildEscudo();
	Builder->BuildVidaExtra();
	Builder->BuildIAAvanzada();
}

void ABossDirector::ConstruirBossBalanceado()
{
	if (!Builder) return;

	Builder->Reset();
	Builder->BuildArmaEspecial();
	Builder->BuildEscudo();
	Builder->BuildVidaExtra();
	Builder->BuildMovimientoDeJefe();
	Builder->BuildIAAvanzada();
}

// Called when the game starts or when spawned
void ABossDirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABossDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

