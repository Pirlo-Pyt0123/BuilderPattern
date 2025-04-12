// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Escudo.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AC_Escudo::AC_Escudo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshEscudo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshEscudo"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	MeshEscudo->SetStaticMesh(ShipMesh.Object);
	RootComponent = MeshEscudo;
	MeshEscudo->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));

}

// Called when the game starts or when spawned
void AC_Escudo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_Escudo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

