// Fill out your copyright notice in the Description page of Project Settings.


#include "componentePlataforma.h"

// Sets default values
AcomponentePlataforma::AcomponentePlataforma()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("	StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));

	meshPlataforma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	meshPlataforma->SetStaticMesh(MeshAsset.Object);
	RootComponent = meshPlataforma;

	FVector NewScale(2.0f, 1.7143f, 0.5f);  // Escala ajustada para 15 plataformas por piso
	SetActorScale3D(NewScale);
	// Valores por defecto para el movimiento
	bDebeMoverse = false;  // Por defecto, la plataforma no se mueve
	VelocidadMovimiento = 200.0f;  // Velocidad por defecto del movimiento
	DistanciaMovimiento = 300.0f;  // Distancia por defecto de ida y vuelta
	bMovimientoAdelante = true;  // Comienza moviéndose hacia adelante
}

// Called when the game starts or when spawned
void AcomponentePlataforma::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation(); // Guarda la posición inicial de la plataforma
}
// Called every frame
void AcomponentePlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Si la plataforma debe moverse
	if (bDebeMoverse)
	{
		FVector PosicionActual = GetActorLocation();
		float Direccion = bMovimientoAdelante ? 1 : -1;  // Controla la dirección del movimiento

		// Mueve la plataforma en el eje Y
		PosicionActual.Y += VelocidadMovimiento * Direccion * DeltaTime;
		SetActorLocation(PosicionActual);

		// Si la plataforma ha alcanzado la distancia máxima, invierte la dirección
		if (FMath::Abs(PosicionActual.Y - PosicionInicial.Y) >= DistanciaMovimiento)
		{
			bMovimientoAdelante = !bMovimientoAdelante; // Cambia la dirección
		}
	}
}
// Función para inicializar el movimiento de la plataforma
void AcomponentePlataforma::InicializarPlataforma(bool bMoverse, float Velocidad, float Distancia)
{
	bDebeMoverse = bMoverse;
	VelocidadMovimiento = Velocidad;
	DistanciaMovimiento = Distancia;
}
