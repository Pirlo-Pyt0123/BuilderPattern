// Fill out your copyright notice in the Description page of Project Settings.

#include "UltimateBoss.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

AUltimateBoss::AUltimateBoss()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	Mesh->SetStaticMesh(ShipMesh.Object);


	// Puntos de montaje
	PuntoArmaIzquierda = CreateDefaultSubobject<USceneComponent>(TEXT("PuntoArmaIzquierda"));
	PuntoArmaIzquierda->SetupAttachment(RootComponent);
	PuntoArmaIzquierda->SetRelativeLocation(FVector(0, -100, 0)); // Lado izquierdo

	PuntoArmaDerecha = CreateDefaultSubobject<USceneComponent>(TEXT("PuntoArmaDerecha"));
	PuntoArmaDerecha->SetupAttachment(RootComponent);
	PuntoArmaDerecha->SetRelativeLocation(FVector(0, 100, 0)); // Lado derecho

	PuntoEscudoFrontal = CreateDefaultSubobject<USceneComponent>(TEXT("PuntoEscudoFrontal"));
	PuntoEscudoFrontal->SetupAttachment(RootComponent);
	PuntoEscudoFrontal->SetRelativeLocation(FVector(-200, 0, 0)); // Frente

	// Valores por defecto
	VidaBoss = 100.f;
	IA_Comportamiento = "Ninguno";
	TipoMovimiento = "Estático";
}

void AUltimateBoss::SetVida(float NuevaVida)
{
	VidaBoss = NuevaVida;
}

void AUltimateBoss::AsignarArma(AActor* ArmaIzquierda, AActor* ArmaDerecha)
{
	if (ArmaIzquierda && PuntoArmaIzquierda)
	{
		ArmaIzquierda->AttachToComponent(PuntoArmaIzquierda, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	}

	if (ArmaDerecha && PuntoArmaDerecha)
	{
		ArmaDerecha->AttachToComponent(PuntoArmaDerecha, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	}
}



void AUltimateBoss::ActivarEscudo(AActor* NuevoEscudo)
{
	if (NuevoEscudo && PuntoEscudoFrontal)
	{
		NuevoEscudo->AttachToComponent(PuntoEscudoFrontal, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		EscudoActual = NuevoEscudo;
	}
}

void AUltimateBoss::ConfigurarMovimiento(const FString& NombreMovimiento)
{
	TipoMovimiento = NombreMovimiento;
}

void AUltimateBoss::ConfigurarIA(const FString& TipoIA)
{
	IA_Comportamiento = TipoIA;

}

void AUltimateBoss::BeginPlay()
{
	Super::BeginPlay();
}
