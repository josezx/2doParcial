// Fill out your copyright notice in the Description page of Project Settings.


#include "GameFacade.h"
#include "DonkeyKong_L02GameMode.h"
#include "AShooterProjectile.h"
#include "Barril.h"
#include "ComponenteCono.h"
#include "ComponenteRectanguloFlotante.h"
#include "Muro.h"
#include "Engine/World.h"


// Sets default values
AGameFacade::AGameFacade()
	: ContadorBarriles(0)  // Inicialización del contador en el constructor
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AGameFacade::Initialize(ADonkeyKong_L02GameMode* GameMode)
{
	GameModeRef = GameMode;

	// Si tienes instancias de Cono y RectanguloFlotante en el GameMode, inicialízalas aquí
	ConoActor = GameModeRef->GetWorld()->SpawnActor<AComponenteCono>();
	RectanguloFlotanteActor = GameModeRef->GetWorld()->SpawnActor<AComponenteRectanguloFlotante>();
}

void AGameFacade::DispararCono()
{
	if (ConoActor)
	{
		ConoActor->FireProjectile();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Cono ha disparado un proyectil."));
	}
}

void AGameFacade::CrearBarril()
{
	{
		if (ContadorBarriles < NumeroMaximoBarriles)  // Verificar límite máximo
		{
			FTransform SpawnLocationBarril;
			SpawnLocationBarril.SetLocation(FVector(1180.0f, 982.0f, 1080.0f));  // Coordenadas de spawn
			SpawnLocationBarril.SetRotation(FQuat(FRotator(90.0f, 0.0f, 0.0f)));

			ABarril* NuevoBarril = GetWorld()->SpawnActor<ABarril>(ABarril::StaticClass(), SpawnLocationBarril);
			if (NuevoBarril)
			{
				ContadorBarriles++;
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Barril creado en el juego."));
			}

			// Si alcanzamos el máximo, detiene el temporizador
			if (ContadorBarriles >= NumeroMaximoBarriles)
			{
				GetWorld()->GetTimerManager().ClearTimer(GameModeRef->SpawnBarrilTimerHandle);
			}
		}
	}
}
void AGameFacade::LimpiarTemporizadorBarril()
{
	if (GameModeRef)
	{
		GameModeRef->GetWorld()->GetTimerManager().ClearTimer(GameModeRef->SpawnBarrilTimerHandle);
	}
}

void AGameFacade::MoverRectanguloFlotante(float DeltaTime)
{
	if (RectanguloFlotanteActor)
	{
		RectanguloFlotanteActor->Tick(DeltaTime);

		// Solo muestra el mensaje la primera vez que se mueve
		if (!bMensajeMostrado)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Rectángulo flotante movido."));
			bMensajeMostrado = true; // Marca como mostrado para no volver a mostrar
		}
	}
}

	void AGameFacade::ActivarEfectoMuro(AMuro* Muro, AActor* Actor)
	{
		if (Muro && Actor)
		{
			// Muestra el mensaje en pantalla
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Efecto del muro activado en el actor."));

			// Llama a OnOverlapBegin para activar el efecto en el muro
			Muro->OnOverlapBegin(nullptr, Actor, nullptr, 0, false, FHitResult());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Muro o Actor no están inicializados en GameFacade."));
		}

}

// Called when the game starts or when spawned
void AGameFacade::BeginPlay()
{
	Super::BeginPlay();

	// Crear o encontrar el actor del rectángulo flotante
	RectanguloFlotanteActor = GetWorld()->SpawnActor<AComponenteRectanguloFlotante>();
	// Asegúrate de que el mensaje se muestre solo una vez al inicio del juego
	static bool bMessageShown = false;
	if (!bMessageShown)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Efecto de los muros activados."));
		bMessageShown = true;  // Marca que el mensaje ya ha sido mostrado
	}
}

// Called every frame
void AGameFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoverRectanguloFlotante(DeltaTime);
}

