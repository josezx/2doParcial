// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MuroFactory.h"
#include "MuroFactoryConcreto.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_L02_API AMuroFactoryConcreto : public AMuroFactory
{
	GENERATED_BODY()
public:
    // Constructor
    AMuroFactoryConcreto();

    // Implementación del método CrearMuro
    virtual AMuro* CrearMuro(const FVector& Ubicacion, int32 TipoMuro) override;
};
