// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "UltimateBoss.generated.h"

/**
 * 
 */
UCLASS()
class BUILDERPATTERN_API AUltimateBoss : public AEnemy
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AUltimateBoss();
	// Métodos utilizados por el builder
	void SetVida(float NuevaVida);
	void AsignarArma(AActor* ArmaIzquierda, AActor* ArmaDerecha);
	void ActivarEscudo(AActor* NuevoEscudo);
	void ConfigurarMovimiento(const FString& NombreMovimiento);
	void ConfigurarIA(const FString& TipoIA);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Atributos configurables por el builder
	UPROPERTY(VisibleAnywhere, Category = "Composición")
	AActor* ArmaActual;

	UPROPERTY(VisibleAnywhere, Category = "Composición")
	AActor* EscudoActual;

	UPROPERTY(EditAnywhere, Category = "Stats")
	float VidaBoss;

	UPROPERTY(VisibleAnywhere, Category = "IA")
	FString IA_Comportamiento;

	UPROPERTY(VisibleAnywhere, Category = "Movimiento")
	FString TipoMovimiento;

	

	// Puntos de montaje
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	USceneComponent* PuntoArmaIzquierda;

	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	USceneComponent* PuntoArmaDerecha;

	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	USceneComponent* PuntoEscudoFrontal;
	
};
