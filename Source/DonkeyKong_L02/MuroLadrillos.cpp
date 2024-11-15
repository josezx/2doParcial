// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroLadrillos.h"
#include "DonkeyKong_L02Character.h"
#include "UObject/ConstructorHelpers.h"
AMuroLadrillos::AMuroLadrillos()
{
    // Asignar la malla del muro de ladrillos
    static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (Mesh.Succeeded())
    {
        MuroMesh->SetStaticMesh(Mesh.Object);
    }

    Dano = 2.0f;  // Daño mínimo

    // Configurar la colisión para bloquear al personaje
    MuroMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    MuroMesh->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
    MuroMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
    MuroMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Block);
}
void AMuroLadrillos::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

    ADonkeyKong_L02Character* Character = Cast<ADonkeyKong_L02Character>(OtherActor);
    if (Character)
    {
        // Aplicar daño mínimo al personaje
        Character->ReceiveDamage(Dano);
    }
}
