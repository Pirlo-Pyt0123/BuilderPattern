// Fill out your copyright notice in the Description page of Project Settings.
#include "ConcreteBoss.h"
#include "Kismet/GameplayStatics.h"
#include "C_Armas.h"
#include "C_Escudo.h"
#include "Engine/World.h"

// Sets default values
AConcreteBoss::AConcreteBoss()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AConcreteBoss::Reset()
{
	if (BossActual)
	{
		BossActual->Destroy();  // Limpia el anterior si existe
		BossActual = nullptr;
	}

	if (GetWorld())
	{
		FVector Pos = GetActorLocation() + FVector(0, 0, 200);  // Por encima del builder
		FRotator Rot = FRotator::ZeroRotator;

		BossActual = GetWorld()->SpawnActor<AUltimateBoss>(AUltimateBoss::StaticClass(), Pos, Rot);
	}
}

void AConcreteBoss::BuildArmaEspecial()
{
	if (BossActual && GetWorld())
	{
		AActor* ArmaIzquierda = GetWorld()->SpawnActor<AC_Armas>(AC_Armas::StaticClass());
		AActor* ArmaDerecha = GetWorld()->SpawnActor<AC_Armas>(AC_Armas::StaticClass());

		if (ArmaIzquierda && ArmaDerecha)
		{
			BossActual->AsignarArma(ArmaIzquierda, ArmaDerecha);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Armas asignadas"));
		}
	}
}

void AConcreteBoss::BuildEscudo()
{
	if (BossActual && GetWorld())
	{
		AActor* Escudo = GetWorld()->SpawnActor<AC_Escudo>(AC_Escudo::StaticClass());
		if (Escudo)
		{
			BossActual->ActivarEscudo(Escudo);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Escudo asignado"));
		}
	}
}

void AConcreteBoss::BuildVidaExtra()
{
	if (BossActual)
	{
		BossActual->SetVida(1500.f);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Vida extra asignada"));

	}
}

void AConcreteBoss::BuildMovimientoDeJefe()
{
	if (BossActual)
	{
		BossActual->ConfigurarMovimiento("Curva Zigzag");
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Movimiento de jefe configurado"));
	}
}

void AConcreteBoss::BuildIAAvanzada()
{
	if (BossActual)
	{
		BossActual->ConfigurarIA("IA_JefeNivel3");
	}
}

AUltimateBoss* AConcreteBoss::GetBoss()
{
	return BossActual;
}

// Called when the game starts or when spawned
void AConcreteBoss::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConcreteBoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

