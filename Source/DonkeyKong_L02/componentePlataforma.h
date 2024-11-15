// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "componentePlataforma.generated.h"

class UStaticMeshComponent;

UCLASS()
class DONKEYKONG_L02_API AcomponentePlataforma : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AcomponentePlataforma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UStaticMeshComponent* meshPlataforma;
	FVector PosicionInicial;  // Almacena la posición inicial para mover la plataforma
	bool bDebeMoverse;  // Indica si la plataforma debe moverse

	float VelocidadMovimiento;  // Velocidad del movimiento
	float DistanciaMovimiento;  // Distancia que se mueve hacia adelante y hacia atrás
	bool bMovimientoAdelante;  // Controla la dirección del movimiento (hacia adelante o atrás)
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	/// Función para inicializar el comportamiento de movimiento de la plataforma
	void InicializarPlataforma(bool bMoverse, float Velocidad, float Distancia);
};
