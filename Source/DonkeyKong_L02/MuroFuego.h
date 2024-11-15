// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroFuego.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_L02_API AMuroFuego : public AMuro
{
	GENERATED_BODY()
public:
AMuroFuego();

protected:
    virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
        const FHitResult& SweepResult) override;

    // Daño que el fuego le hace al personaje
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fuego")
    float Dano;  // Cambiado de 'Daño' a 'Dano'
};
