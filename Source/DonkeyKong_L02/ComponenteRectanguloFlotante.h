// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ComponenteRectanguloFlotante.generated.h"

UCLASS()
class DONKEYKONG_L02_API AComponenteRectanguloFlotante : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AComponenteRectanguloFlotante();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* RectanguloMesh;

	FVector DireccionMovimiento;
	float VelocidadMovimiento;
	float LimiteIzquierda;
	float LimiteDerecha;
};
