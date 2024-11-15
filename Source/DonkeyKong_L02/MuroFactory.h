// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Muro.h"  // Asegúrate de incluir la clase base AMuro
#include "MuroFactory.generated.h"

UCLASS()
class DONKEYKONG_L02_API AMuroFactory : public AActor
{
	GENERATED_BODY()
	
public:
    // Constructor
    AMuroFactory();

    // Método virtual puro para crear muros
    virtual AMuro* CrearMuro(const FVector& Ubicacion, int32 TipoMuro) PURE_VIRTUAL(AMuroFactory::CrearMuro, return nullptr;);

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

};
