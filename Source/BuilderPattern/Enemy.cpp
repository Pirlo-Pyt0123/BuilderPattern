// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO'"));
 //Create the mesh component
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	//NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);
	Mesh->SetupAttachment(RootComponent);
	RootComponent = Mesh;

}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

