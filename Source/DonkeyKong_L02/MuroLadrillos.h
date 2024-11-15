// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroLadrillos.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_L02_API AMuroLadrillos : public AMuro
{
	GENERATED_BODY()
public:
    AMuroLadrillos();

protected:
    virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
        const FHitResult& SweepResult) override;
    // Daño mínimo
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ladrillos")
    float Dano;
};
