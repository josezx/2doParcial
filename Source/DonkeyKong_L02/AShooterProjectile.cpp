// Fill out your copyright notice in the Description page of Project Settings.


#include "AShooterProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
// Sets default values
AAShooterProjectile::AAShooterProjectile()
{
    // Static reference to the mesh to use for the projectile
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));

    // Create mesh component for the projectile sphere
    ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
    if (ProjectileMeshAsset.Succeeded()) {
        ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
    }
    ProjectileMesh->SetupAttachment(RootComponent);
    ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
    // Establecer el perfil de colisión para que no colisione con objetos
    ProjectileMesh->SetCollisionProfileName(TEXT("NoCollision"));
    ProjectileMesh->SetVisibility(true);  // El proyectil es visible
    // Use a ProjectileMovementComponent to govern this projectile's movement
    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
    ProjectileMovement->UpdatedComponent = ProjectileMesh;
    ProjectileMovement->InitialSpeed = 3000.f;  // Velocidad inicial del proyectil
    ProjectileMovement->MaxSpeed = 3000.f;      // Velocidad máxima del proyectil
    ProjectileMovement->bRotationFollowsVelocity = true;
    ProjectileMovement->bShouldBounce = false;
    ProjectileMovement->ProjectileGravityScale = 0.f;  // Sin gravedad para el proyectil

    // Tiempo de vida del proyectil
    InitialLifeSpan = 10.0f;  // Aumentar el tiempo de vida si es necesario
    // El proyectil se destruye automáticamente después de 3 segundos
    InitialLifeSpan = 10.0f;
}

void AAShooterProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
      // Solo agregar impulso y destruir el proyectil si choca con un objeto que simula física
        if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
        {
            OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
        }

    // Destruye el proyectil después de chocar
    Destroy();
}

// Called when the game starts or when spawned
void AAShooterProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAShooterProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

