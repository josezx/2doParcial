// Fill out your copyright notice in the Description page of Project Settings.


#include "Muro.h"
#include "Components/StaticMeshComponent.h"
#include "DonkeyKong_L02Character.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AMuro::AMuro()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    // Crear el componente de malla estática
    MuroMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MuroMesh"));
    RootComponent = MuroMesh;

    // Cargar la malla estática usando ConstructorHelpers
    static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (Mesh.Succeeded())
    {
        MuroMesh->SetStaticMesh(Mesh.Object);
        // Aquí ajustamos el escalado para que se vea como en la imagen
        MuroMesh->SetWorldScale3D(FVector(2.0f, 0.25f, 2.0f));  // Ajuste del escalado X, Y, Z
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No se pudo cargar la malla estática para el Muro."));
    }
    // Configurar la colisión
    MuroMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    MuroMesh->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
    MuroMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
    MuroMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);

    // Agregar el evento de superposición
    MuroMesh->OnComponentBeginOverlap.AddDynamic(this, &AMuro::OnOverlapBegin);

    // Inicializar variables de movimiento
    VelocidadMovimiento = 100.0f; // Ajusta según sea necesario
    RangoMovimiento = 200.0f;     // Ajusta según sea necesario
    DireccionMovimiento = 1;
}

// Called when the game starts or when spawned
void AMuro::BeginPlay()
{
	Super::BeginPlay();
    PosicionInicialZ = GetActorLocation().Z;
}

// Called every frame
void AMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    FVector NuevaPosicion = GetActorLocation();
    NuevaPosicion.Z += VelocidadMovimiento * DeltaTime * DireccionMovimiento;
    SetActorLocation(NuevaPosicion);

    // Verificar si ha alcanzado el límite de movimiento
    if (FMath::Abs(NuevaPosicion.Z - PosicionInicialZ) >= RangoMovimiento)
    {
        // Invertir la dirección del movimiento
        DireccionMovimiento *= -1;
    }
}

void AMuro::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
    const FHitResult& SweepResult)

{
    if (OtherActor)
    {
        // Implementa el efecto que quieres que ocurra
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Efecto del muro aplicado al actor."));
    }

}
