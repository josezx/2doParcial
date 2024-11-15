// Fill out your copyright notice in the Description page of Project Settings.


// MuroFactoryConcreto.cpp

#include "MuroFactoryConcreto.h"
#include "MuroResorte.h"
#include "MuroFuego.h"
#include "MuroElectrico.h"
#include "MuroCongelado.h"
#include "MuroPegajoso.h"
#include "MuroLadrillos.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

AMuroFactoryConcreto::AMuroFactoryConcreto()
{
    // Desactiva el tick si no es necesario
    PrimaryActorTick.bCanEverTick = false;
}

AMuro* AMuroFactoryConcreto::CrearMuro(const FVector& Ubicacion, int32 TipoMuro)
{
    UWorld* Mundo = GetWorld();
    if (!Mundo)
    {
        UE_LOG(LogTemp, Error, TEXT("No se pudo obtener el mundo en AMuroFactoryConcreto::CrearMuro."));
        return nullptr;
    }

    FRotator SpawnRotation = FRotator::ZeroRotator;
    AMuro* NuevoMuro = nullptr;

    switch (TipoMuro)
    {
    case 1:
        NuevoMuro = Mundo->SpawnActor<AMuroResorte>(Ubicacion, SpawnRotation);
        break;
    case 2:
        NuevoMuro = Mundo->SpawnActor<AMuroFuego>(Ubicacion, SpawnRotation);
        break;
    case 3:
        NuevoMuro = Mundo->SpawnActor<AMuroElectrico>(Ubicacion, SpawnRotation);
        break;
    case 4:
        NuevoMuro = Mundo->SpawnActor<AMuroCongelado>(Ubicacion, SpawnRotation);
        break;
    case 5:
        NuevoMuro = Mundo->SpawnActor<AMuroPegajoso>(Ubicacion, SpawnRotation);
        break;
    case 6:
        NuevoMuro = Mundo->SpawnActor<AMuroLadrillos>(Ubicacion, SpawnRotation);
        break;
    default:
        UE_LOG(LogTemp, Warning, TEXT("Tipo de muro desconocido: %d"), TipoMuro);
        break;
    }

    if (NuevoMuro)
    {
        UE_LOG(LogTemp, Log, TEXT("Muro creado correctamente en %s"), *Ubicacion.ToString());
    }

    return NuevoMuro;
}
