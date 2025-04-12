// Fill out your copyright notice in the Description page of Project Settings.


#include "ConcreteBoss.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AConcreteBoss::AConcreteBoss()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AConcreteBoss::Reset()
{
	////// Instancia el boss en la posición del builder
	////if (!BossActual)
	////{
	////	FVector Pos = GetActorLocation() + FVector(0, 0, 200);
	////	FRotator Rot = FRotator::ZeroRotator;

	////	UWorld* Mundo = GetWorld();
	////	if (Mundo)
	////	{
	////		BossActual = Mundo->SpawnActor<AUltimateBoss>(AUltimateBoss::StaticClass(), Pos, Rot);
	////	}
	////}
}

void AConcreteBoss::BuildArmaEspecial()
{
	/////*if (BossActual)
	////{
	////	BossActual->AsignarArmaEspecial("Cañón Láser Doble");
	////}*/
}

void AConcreteBoss::BuildEscudo()
{
	///*if (BossActual)
	//{
	//	BossActual->ActivarEscudo(true);
	//}*/
}

void AConcreteBoss::BuildVidaExtra()
{
	///*if (BossActual)
	//{
	//	BossActual->SetVida(1500.0f);
	//}*/
}

void AConcreteBoss::BuildMovimientoDeJefe()
{
	///*if (BossActual)
	//{
	//	BossActual->ConfigurarMovimiento("Patrón Espiral");
	//}*/
}

void AConcreteBoss::BuildIAAvanzada()
{
	///*if (BossActual)
	//{
	//	BossActual->ConfigurarIA("BossLogic_Nivel3");
	//}*/
}

AUltimateBoss* AConcreteBoss::GetBoss()
{
	return BossActual;
}

// Called when the game starts or when spawned
void AConcreteBoss::BeginPlay()
{
	//Super::BeginPlay();
	
}

// Called every frame
void AConcreteBoss::Tick(float DeltaTime)
{
	//Super::Tick(DeltaTime);

}

