// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ComponenteCono.generated.h"

UCLASS()
class DONKEYKONG_L02_API AComponenteCono : public AActor
{
	GENERATED_BODY()
	
public:
    // Método estático para obtener la instancia Singleton
    static AComponenteCono* GetInstance(UObject* WorldContextObject);

    // Constructor
    AComponenteCono();

    // Deshabilitar la copia y la asignación
   // AComponenteCono(const AComponenteCono&) = delete;
   // AComponenteCono& operator=(const AComponenteCono&) = delete;

public:
    // Instancia Singleton
    static AComponenteCono* Instance;

    // Componentes y propiedades del cono
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* ConoMesh;

    // Clase del proyectil para disparar
    UPROPERTY(EditDefaultsOnly, Category = "Projectile")
    TSubclassOf<class AAShooterProjectile> ProjectileClass;
    FVector DireccionMovimiento;
    float VelocidadMovimiento;
    float LimiteIzquierda;
    float LimiteDerecha;
    float FireRate;
 
    // Agrega esta declaración para FireRateHandle
    FTimerHandle FireRateHandle;

    // Función para disparar proyectiles
    void FireProjectile();

protected:
    // Se llama cuando el juego comienza o cuando es spawn
    virtual void BeginPlay() override;

public:
    // Se llama cada frame
    virtual void Tick(float DeltaTime) override;
};
