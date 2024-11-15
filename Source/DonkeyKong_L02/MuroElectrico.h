// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroElectrico.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_L02_API AMuroElectrico : public AMuro
{
	GENERATED_BODY()
public:
    AMuroElectrico();

protected:
    virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
        const FHitResult& SweepResult) override;

    // Tiempo que el personaje estar� paralizado
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Electrico")
    float TiempoParalisis;
};
