// Copyright Epic Games, Inc. All Rights Reserved.

#include "BuilderPatternGameMode.h"
#include "BuilderPatternPawn.h"
#include "ConcreteBoss.h"
#include "BossDirector.h"
#include "Kismet/GameplayStatics.h"

ABuilderPatternGameMode::ABuilderPatternGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ABuilderPatternPawn::StaticClass();

}

void ABuilderPatternGameMode::BeginPlay()
{
	// Spawn del Builder
	AConcreteBoss* Builder = GetWorld()->SpawnActor<AConcreteBoss>(AConcreteBoss::StaticClass());

	// Spawn del Director
	ABossDirector* Director = GetWorld()->SpawnActor<ABossDirector>(ABossDirector::StaticClass());
	if (Builder && Director)
	{
		// Asignamos el builder al director
		Director->SetBuilder(Builder);

		// Seleccionamos qué tipo de jefe queremos construir:
		Director->ConstruirBossBalanceado();
		// Director->ConstruirBossAgresivo();
		// Director->ConstruirBossDefensivo();

		// Obtenemos el resultado final (opcional)
		AUltimateBoss* BossFinal = Builder->GetBoss();

		if (BossFinal)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Jefe construido exitosamente con Builder Pattern"));
		}
	}
}

void ABuilderPatternGameMode::Tick(float DeltaTime)
{
}

