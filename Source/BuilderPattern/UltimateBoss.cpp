// Fill out your copyright notice in the Description page of Project Settings.


#include "UltimateBoss.h"
#include "Components/StaticMeshComponent.h"

AUltimateBoss::AUltimateBoss()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	Mesh->SetStaticMesh(ShipMesh.Object);
}
