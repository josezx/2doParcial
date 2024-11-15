// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroElectrico.h"
#include "DonkeyKong_L02Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UObject/ConstructorHelpers.h"

AMuroElectrico::AMuroElectrico()
{
    // Implementación del constructor
    static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (Mesh.Succeeded())
    {
        MuroMesh->SetStaticMesh(Mesh.Object);
    }

    TiempoParalisis = 2.0f; // Tiempo de parálisis en segundos
}

void AMuroElectrico::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

    ADonkeyKong_L02Character* Character = Cast<ADonkeyKong_L02Character>(OtherActor);
    if (Character)
    {
        // Desactivar el movimiento del personaje durante el tiempo de parálisis
        Character->GetCharacterMovement()->DisableMovement();
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, [Character]() {
            Character->GetCharacterMovement()->SetMovementMode(MOVE_Walking);
            }, TiempoParalisis, false);

        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Personaje paralizado por muro eléctrico."));
    }
}
