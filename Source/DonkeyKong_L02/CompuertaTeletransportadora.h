// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DonkeyKong_L02GameMode.h"
#include "CompuertaTeletransportadora.generated.h"
class ADonkeyKong_L02GameMode;
UCLASS()
class DONKEYKONG_L02_API ACompuertaTeletransportadora : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACompuertaTeletransportadora();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	// Malla estática para representar la compuerta teletransportadora
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComp;

	// Compuerta de destino a la que se teletransportarán los actores
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Teletransport")
	ACompuertaTeletransportadora* CompuertaDestino;

	// Referencia al GameMode para almacenar los actores teletransportados
	ADonkeyKong_L02GameMode* GameModeRef;

	// Función de colisión cuando un actor ingresa en la compuerta
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Función para asignar el GameMode
	void SetGameMode(ADonkeyKong_L02GameMode* GameMode);
	// Variables para controlar el teletransporte
	bool bPuedeTeletransportar; // Controla si el teletransporte está disponible
	float TiempoEsperaTeletransporte; // Tiempo de espera entre teletransportaciones

	// Función llamada cada fotograma (Tick)
	virtual void Tick(float DeltaTime) override;  // Declara la función Tick aquí

	// Habilitar el tick para este actor
	virtual bool ShouldTickIfViewportsOnly() const override { return true; }
};
