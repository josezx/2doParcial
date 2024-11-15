// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroPegajoso.h"
#include "DonkeyKong_L02Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "TimerManager.h"
AMuroPegajoso::AMuroPegajoso()
{

    // Asignar la malla de un muro para esta clase si es necesario
    static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (Mesh.Succeeded())
    {
        MuroMesh->SetStaticMesh(Mesh.Object);
    }

    Dano = 5.0f;  // Daño mínimo
    DuracionEfecto = 10.0f;  // Duración del efecto de ralentización
    FactorRalentizacion = 0.7f;  // Ralentización al 70% de la velocidad
}

void AMuroPegajoso::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

    ADonkeyKong_L02Character* Character = Cast<ADonkeyKong_L02Character>(OtherActor);
    if (Character)
    {
        // Aplicar el daño mínimo
        Character->ReceiveDamage(Dano);

        // Ralentizar al personaje
        Character->GetCharacterMovement()->MaxWalkSpeed *= FactorRalentizacion;

        // Iniciar un temporizador para restaurar la velocidad normal después de DuracionEfecto segundos
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, [Character, this]() {
            // Restaurar la velocidad normal
            Character->GetCharacterMovement()->MaxWalkSpeed /= FactorRalentizacion;
            }, DuracionEfecto, false);
    }
}