// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroResorte.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_L02_API AMuroResorte : public AMuro
{
	GENERATED_BODY()
public:
    // Solo la declaración del constructor
    AMuroResorte();

protected:
    virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
        const FHitResult& SweepResult) override;

    // Fuerza con la que el resorte empuja al personaje
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Resorte")
    float FuerzaImpulso;
};
