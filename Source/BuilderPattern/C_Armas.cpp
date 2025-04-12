// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Armas.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AC_Armas::AC_Armas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshArma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshArma"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	MeshArma->SetStaticMesh(ShipMesh.Object);
	RootComponent = MeshArma;
	MeshArma->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));

}

// Called when the game starts or when spawned
void AC_Armas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_Armas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

