// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroPegajoso.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_L02_API AMuroPegajoso : public AMuro
{
	GENERATED_BODY()
public:
    AMuroPegajoso();

protected:
    virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
        const FHitResult& SweepResult) override;

    // Duraci�n del efecto de ralentizaci�n
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pegajoso")
    float DuracionEfecto;

    // Factor de ralentizaci�n (0.7 = 70% de la velocidad normal)
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pegajoso")
    float FactorRalentizacion;

    // Da�o m�nimo
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pegajoso")
    float Dano;

};
