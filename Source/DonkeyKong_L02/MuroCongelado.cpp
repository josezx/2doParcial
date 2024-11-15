// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroCongelado.h"
#include "DonkeyKong_L02Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UObject/ConstructorHelpers.h"

AMuroCongelado::AMuroCongelado()
{
    // Implementación del constructor
    static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (Mesh.Succeeded())
    {
        MuroMesh->SetStaticMesh(Mesh.Object);
    }

    FactorRalentizacion = 0.5f; // Reduce la velocidad del personaje al 50%
}

void AMuroCongelado::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

    ADonkeyKong_L02Character* Character = Cast<ADonkeyKong_L02Character>(OtherActor);
    if (Character)
    {
        // Reducir la velocidad del personaje
        Character->GetCharacterMovement()->MaxWalkSpeed *= FactorRalentizacion;
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, [Character]() {
            Character->GetCharacterMovement()->MaxWalkSpeed = 600.0f; // Restaurar la velocidad original
            }, 5.0f, false);

        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Personaje ralentizado por muro congelado."));
    }
}
