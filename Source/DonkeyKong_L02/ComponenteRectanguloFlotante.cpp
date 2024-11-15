// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteRectanguloFlotante.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
// Sets default values
AComponenteRectanguloFlotante::AComponenteRectanguloFlotante()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    // Crear la malla del rectángulo
        RectanguloMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RectanguloMesh"));

    // Cargar la malla estática (puede ser un cubo del Starter Content)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
    if (MeshAsset.Succeeded())
    {
        RectanguloMesh->SetStaticMesh(MeshAsset.Object);
    }
    RootComponent = RectanguloMesh;

    // Escalar el rectángulo para que sea más largo
    FVector Scale(4.0f, 1.0f, 0.5f);  // Escala ajustada
    SetActorScale3D(Scale);
    // Rotar el rectángulo para que esté de costado
    FRotator Rotation(0.0f, 90.0f, 0.0f);  // Rotar 90 grados en el eje Y
    SetActorRotation(Rotation);
    // Inicializar variables de movimiento
    VelocidadMovimiento = 200.0f;  // Velocidad de movimiento
    LimiteIzquierda = -1700.0f;     // Límite en la izquierda
    LimiteDerecha = 1000.0f;        // Límite en la derecha
    DireccionMovimiento = FVector(0.0f, 1.0f, 0.0f);  // Mover en el eje X
}

// Called when the game starts or when spawned
void AComponenteRectanguloFlotante::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AComponenteRectanguloFlotante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    // Obtener la ubicación actual del rectángulo
    FVector Location = GetActorLocation();

    // Mover el rectángulo de izquierda a derecha
    Location += DireccionMovimiento * VelocidadMovimiento * DeltaTime;

    // Cambiar la dirección cuando alcance los límites
    if (Location.Y <= LimiteIzquierda || Location.Y >= LimiteDerecha)
    {
        DireccionMovimiento *= -1;  // Cambiar la dirección
    }

    // Actualizar la nueva posición
    SetActorLocation(Location);
}

