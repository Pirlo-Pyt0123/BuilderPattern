// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BuildBoss.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBuildBoss : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BUILDERPATTERN_API IBuildBoss
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	// Métodos para construir paso a paso el boss
	virtual void BuildArmaEspecial() = 0;
	virtual void BuildEscudo() = 0;
	virtual void BuildVidaExtra() = 0;
	virtual void BuildMovimientoDeJefe() = 0;
	virtual void BuildIAAvanzada() = 0;

	// Método final para obtener el resultado (el boss armado)
	virtual class AUltimateBoss* GetBoss() = 0;

	// Reinicia el builder para una nueva construcción
	virtual void Reset() = 0;
};
