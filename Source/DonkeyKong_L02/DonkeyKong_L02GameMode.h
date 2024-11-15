// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFacade.h"
#include "DonkeyKong_L02GameMode.generated.h"


class AObstaculoMuro;
class AcomponentePlataforma;
class ADonkeyKong_L02Character;
class AEsfera;
class ACompuertaTeletransportadora;  // Asegúrate de declarar esta clase aquí
class AMuroResorte;  // Declarar la clase AMuroResorte
class AMuroFuego;    // Declarar la clase AMuroFuego
class AMuroElectrico;     // Declarar MuroElectrico
class AMuroCongelado;     // Declarar MuroCongelado
class AMuroPegajoso;      // Declarar MuroPegajoso
class AMuroLadrillos;     // Declarar MuroLadrillos
class AGameFacade;

UCLASS(minimalapi)
class ADonkeyKong_L02GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADonkeyKong_L02GameMode();

	AObstaculoMuro* obstaculo01;
	ADonkeyKong_L02Character* player01;

	TArray<AcomponentePlataforma*> componentesPlataforma;
	TMap<int32, AEsfera*> esferasMap;

	// TMap para almacenar los actores que pasan por las compuertas teletransportadoras
	TMap<AActor*, FVector> ActoresTeletransportados;
	// Referencias a las compuertas teletransportadoras
	ACompuertaTeletransportadora* Compuerta1;  // Declarar la primera compuerta
	ACompuertaTeletransportadora* Compuerta3;  // Declarar la segunda compuerta
	// Nueva variable para almacenar la clase del Blueprint del personaje
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player")
	TSubclassOf<APawn> PlayerPawnClass;

protected:
	virtual void BeginPlay() override;
	
private:
	
	void SpawnMurosEnPisos();
	// Número de pisos
	int32 NumeroDePisos;

	// Rango de posiciones en X y Y para cada piso
	TArray<FVector2D> RangosPisos;

	// Clases de muros para spawnear
	TSubclassOf<class AMuroResorte> ClaseMuroResorte;
	TSubclassOf<class AMuroFuego> ClaseMuroFuego;
	TSubclassOf<class AMuroElectrico> ClaseMuroElectrico;
	TSubclassOf<class AMuroCongelado> ClaseMuroCongelado;
	TSubclassOf<class AMuroPegajoso> ClaseMuroPegajoso;
	TSubclassOf<class AMuroLadrillos> ClaseMuroLadrillos;
public:
	// Instancia de la fachada
	UPROPERTY()
	AGameFacade* GameFacade;
public:
	//---FACADE-----------------------------------------------------------                                  
	// Contador de barriles y número máximo permitido
	int32 ContadorBarriles = 0; // Inicializa el contador en 0           |
	const int32 NumeroMaximoBarriles = 3; // Valor máximo de barriles    |

	// Timer para controlar el spawn de barriles                         |
	FTimerHandle SpawnBarrilTimerHandle;
	TArray<class ABarril*> Barriles; // Almacena los barriles creados 
	//----------------FACADE----------------------------------------------
};



