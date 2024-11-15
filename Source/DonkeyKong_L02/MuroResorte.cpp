// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroResorte.h"
#include "DonkeyKong_L02Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
AMuroResorte::AMuroResorte()
{
    // Implementación del constructor
    static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (Mesh.Succeeded())
    {
        MuroMesh->SetStaticMesh(Mesh.Object);
    }

    FuerzaImpulso = 1505.0f; // Ajusta este valor según sea necesarioszxx
}

void AMuroResorte::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
    const FHitResult& SweepResult)
{
    Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

    ADonkeyKong_L02Character* Character = Cast<ADonkeyKong_L02Character>(OtherActor);
    if (Character)
    {
        // Aplicar una fuerza hacia arriba al personaje
        FVector Impulso = FVector(0.0f, 0.0f, FuerzaImpulso);
        Character->LaunchCharacter(Impulso, true, true);
    }
}