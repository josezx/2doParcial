// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroFuego.h"
#include "DonkeyKong_L02Character.h"
#include "UObject/ConstructorHelpers.h"

AMuroFuego::AMuroFuego()
{
    // Cargar una malla específica para el MuroFuego
    static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (Mesh.Succeeded())
    {
        MuroMesh->SetStaticMesh(Mesh.Object);
    }

    // Configurar la colisión para que bloquee al Character
    MuroMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    MuroMesh->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
    MuroMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
    MuroMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);  // Permitir superposición con el Character

    Dano = 25.0f; // Ajusta este valor según sea necesario
}

void AMuroFuego::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
    const FHitResult& SweepResult)
{
    Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

    ADonkeyKong_L02Character* Character = Cast<ADonkeyKong_L02Character>(OtherActor);
    if (Character)
    {
        // Aplica daño al personaje
        Character->ReceiveDamage(Dano);

        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("¡Colisión con el Muro de Fuego! Daño aplicado."));
    }
}
