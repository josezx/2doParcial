// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroCongelado.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_L02_API AMuroCongelado : public AMuro
{
	GENERATED_BODY()
public:
    AMuroCongelado();

protected:
    virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
        const FHitResult& SweepResult) override;

    // Factor de reducción de la velocidad
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Congelado")
    float FactorRalentizacion;
};
