// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFacade.generated.h"
class AAShooterProjectile;
class ABarril;
class AComponenteCono;
class AComponenteRectanguloFlotante;
class AMuro;
class ADonkeyKong_L02GameMode;

UCLASS()
class DONKEYKONG_L02_API AGameFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameFacade();
	// Inicializar el modo de juego y cualquier dependencia que necesite la fachada
	void Initialize(ADonkeyKong_L02GameMode* GameMode);

	// Métodos de fachada para realizar acciones comunes en los actores del juego
	void DispararCono();
	void CrearBarril();
	void MoverRectanguloFlotante(float DeltaTime);
	void ActivarEfectoMuro(AMuro* Muro, AActor* Actor);
	void LimpiarTemporizadorBarril();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	// Referencia al modo de juego para facilitar el acceso a actores y otras dependencias
	ADonkeyKong_L02GameMode* GameModeRef;

	// Referencias opcionales a actores específicos, según la funcionalidad
	AComponenteCono* ConoActor;

	// Variables para el control de los barriles
	TArray<ABarril*> Barriles;
	int32 ContadorBarriles;  // Asegúrate de que esté aquí
	const int32 NumeroMaximoBarriles = 3;
public:
	// Referencia al actor del rectángulo flotante
	AComponenteRectanguloFlotante* RectanguloFlotanteActor;
private:
	bool bMensajeMostrado = false; // Variable para rastrear si el mensaje ya fue mostrado
};
