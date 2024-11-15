	// Fill out your copyright notice in the Description page of Project Settings.

#include "ComponenteCono.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "AShooterProjectile.h"  // Incluir la clase del proyectil

// Inicializamos el puntero estático a nullptr
AComponenteCono* AComponenteCono::Instance = nullptr;

AComponenteCono::AComponenteCono()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear la malla del cono
    ConoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ConoMesh"));
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone"));
    if (MeshAsset.Succeeded())
    {
        ConoMesh->SetStaticMesh(MeshAsset.Object);
    }
    RootComponent = ConoMesh;

    // Inicialización de variables
    VelocidadMovimiento = 150.0f;
    LimiteIzquierda = -900.0f;
    LimiteDerecha = 1400.0f;
    DireccionMovimiento = FVector(0.0f, 1.0f, 0.0f);
    FireRate = 3.0f;

    // Asegúrate de que el ProjectileClass apunte a la clase correcta
    ProjectileClass = AAShooterProjectile::StaticClass();  // Asigna la clase del proyectil directamente
}

AComponenteCono* AComponenteCono::GetInstance(UObject* WorldContextObject)
{
    if (!Instance)
    {
        UWorld* World = WorldContextObject->GetWorld();
        if (World)
        {
            Instance = World->SpawnActor<AComponenteCono>();
        }
        if (!Instance)
        {
            UE_LOG(LogTemp, Warning, TEXT("No se pudo crear la instancia de AComponenteCono"));
        }
    }
    return Instance;
}

void AComponenteCono::BeginPlay()
{
    Super::BeginPlay();
    // Iniciar temporizador para disparo de proyectiles
    GetWorld()->GetTimerManager().SetTimer(FireRateHandle, this, &AComponenteCono::FireProjectile, FireRate, true);
}

void AComponenteCono::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector Location = GetActorLocation();
    Location += DireccionMovimiento * VelocidadMovimiento * DeltaTime;

    // Invertir la dirección del movimiento si alcanza los límites
    if (Location.Y <= LimiteIzquierda && DireccionMovimiento.Y < 0)
    {
        DireccionMovimiento *= -1;
    }
    else if (Location.Y >= LimiteDerecha && DireccionMovimiento.Y > 0)
    {
        DireccionMovimiento *= -1;
    }

    SetActorLocation(Location);
}

void AComponenteCono::FireProjectile()
{
    if (ProjectileClass)
    {
        FVector MuzzleLocation = GetActorLocation() + FVector(0.0f, 0.0f, -50.0f);
        FRotator MuzzleRotation = FRotator(-90.0f, 0.0f, 0.0f);

        UWorld* const World = GetWorld();
        if (World != nullptr)
        {
            // Spawnear el proyectil
            World->SpawnActor<AAShooterProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation);
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("ProjectileClass es nullptr."));
    }
}
