// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Muro.generated.h"

UCLASS()
class DONKEYKONG_L02_API AMuro : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMuro();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    // Componente de malla estática para representar el muro
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MuroMesh;

    // Función para manejar la superposición con el personaje
    UFUNCTION()
    virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
        class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
        const FHitResult& SweepResult);

protected:
    // Variables para movimiento
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movimiento")
    float VelocidadMovimiento;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movimiento")
    float RangoMovimiento;

    float PosicionInicialZ;
    int32 DireccionMovimiento;
};
