 // Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_L02GameMode.h"
#include "DonkeyKong_L02Character.h"
#include "UObject/ConstructorHelpers.h"
#include "ObstaculoMuro.h"
#include "Capsula.h"
#include "componentePlataforma.h"
#include "Esfera.h"
#include "MuroResorte.h"
#include "Muro.h"
#include "MuroElectrico.h"
#include "MuroCongelado.h"
#include "MuroPegajoso.h"
#include "MuroLadrillos.h"
#include "MuroFuego.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Character.h"
#include "MuroFactoryConcreto.h"
#include "componenteRectangulo.h"  // Incluir la clase del rectángulo
#include "ComponenteRectanguloFlotante.h"
#include "CompuertaTeletransportadora.h"  // Incluir la clase ACompuertaTeletransportadora
#include "ComponenteCono.h"
#include "GameFacade.h"


ADonkeyKong_L02GameMode::ADonkeyKong_L02GameMode()
{
	// Asignar directamente las clases C++ si no estás usando Blueprints
	// Inicializar las clases de muros
	ClaseMuroResorte = AMuroResorte::StaticClass();
	ClaseMuroFuego = AMuroFuego::StaticClass();
	ClaseMuroElectrico = AMuroElectrico::StaticClass();
	ClaseMuroCongelado = AMuroCongelado::StaticClass();
	ClaseMuroPegajoso = AMuroPegajoso::StaticClass();
	ClaseMuroLadrillos = AMuroLadrillos::StaticClass();
	// Cargar el Blueprint del personaje
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter")); // Asegúrate de que esta ruta es correcta

	if (PlayerPawnBPClass.Class != nullptr)
	{
		PlayerPawnClass = PlayerPawnBPClass.Class;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se encontró el blueprint del personaje."));
	}

	// No establecer DefaultPawnClass para evitar spawneo automático
	DefaultPawnClass = nullptr;
}

void ADonkeyKong_L02GameMode::BeginPlay()
{
    Super::BeginPlay();
	//----------------------FACADE-------------------------------
	  // Crear e inicializar la instancia del GameFacade
	if (!GameFacade)
	{
		GameFacade = GetWorld()->SpawnActor<AGameFacade>();
		if (GameFacade)
		{
			GameFacade->Initialize(this);
		}
	}
	// Crear e inicializar la instancia de GameFacade
	GameFacade = GetWorld()->SpawnActor<AGameFacade>();
	if (GameFacade)
	{
		GameFacade->Initialize(this);  // Pasa el GameMode a la fachada
		GameFacade->DispararCono();
	}

	// Configura el temporizador para que invoque CrearBarril en GameFacade
	GetWorld()->GetTimerManager().SetTimer(SpawnBarrilTimerHandle, [this]()
		{
			if (GameFacade)
			{
				GameFacade->CrearBarril();
			}
		}, 3.0f, true);  // Intervalo de 3 segundos para el spawn de barriles
	//-----------------------FACADE---------------------
	// Verificar que la clase del Blueprint está cargada
	if (PlayerPawnClass != nullptr)
	{
		FVector CharacterSpawnLocation = FVector(1150.0f, 500.0f, 500.0f); // Coordenadas obtenidas del editor
		FRotator CharacterSpawnRotation = FRotator(0.0f, 90.0f, 0.0f); // Rotación deseada

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		APawn* Character = GetWorld()->SpawnActor<APawn>(PlayerPawnClass, CharacterSpawnLocation, CharacterSpawnRotation, SpawnParams);

		if (Character)
		{
			APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
			if (PlayerController)
			{
				PlayerController->Possess(Character);
				GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, TEXT("Personaje spawneado y poseído exitosamente."));
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("No se pudo obtener el PlayerController."));
			}
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Error al spawnear el personaje."));
		}
	}
	else
	{	
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("PlayerPawnClass es nullptr."));
	}

	// Mostrar mensaje en pantalla para verificar que el juego ha comenzado
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("Iniciando spawneo del cono en la 6ta plataforma"));

	// Establecer la ubicación y la rotación para el cono
	FTransform ConoSpawnLocation;  // Usamos un nombre distinto para la variable de ubicación del cono
	ConoSpawnLocation.SetLocation(FVector(1200.0f, 1000.0f, 5050.0f));  // Coordenadas de la 6ta plataforma
	ConoSpawnLocation.SetRotation(FQuat(FRotator(0.0f, 0.0f, 0.0f)));  // Sin rotación inicial

	// Spawnear el Cono en la 6ta plataforma
	AComponenteCono* ConoActor = GetWorld()->SpawnActor<AComponenteCono>(AComponenteCono::StaticClass(), ConoSpawnLocation);

	if (ConoActor)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, TEXT("Cono spawneado en la 6ta plataforma"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Error al spawnear el cono en la 6ta plataforma"));
	}
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("Creando plataforma"));
	// Crear las compuertas teletransportadoras con mallas visibles
	FTransform TransformCompuerta1, TransformCompuerta3;
	TransformCompuerta1.SetLocation(FVector(1180.0f, -1000.0f, 690.0f));  // Ubicación en la plataforma 1
	TransformCompuerta3.SetLocation(FVector(1200.0f, 1050.0f,2750.0f));  // Ubicación en la plataforma 3

	Compuerta1 = GetWorld()->SpawnActor<ACompuertaTeletransportadora>(ACompuertaTeletransportadora::StaticClass(), TransformCompuerta1);
	Compuerta3 = GetWorld()->SpawnActor<ACompuertaTeletransportadora>(ACompuertaTeletransportadora::StaticClass(), TransformCompuerta3);

	// Establecer las compuertas de destino
	Compuerta1->CompuertaDestino = Compuerta3;
	Compuerta3->CompuertaDestino = Compuerta1;

	// Pasar la referencia del GameMode a las compuertas
	Compuerta1->SetGameMode(this);
	Compuerta3->SetGameMode(this);

	// Agregar mensajes en pantalla para verificar
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("Compuertas teletransportadoras con mallas creadas entre las plataformas 1 y 3"));
	// Crear el primer rectángulo
	FTransform TransformRectangulo1;
	TransformRectangulo1.SetLocation(FVector(1200.0f, 1500.0f, 150.0f));  // Ajustar las coordenadas según sea necesario
	GetWorld()->SpawnActor<AcomponenteRectangulo>(AcomponenteRectangulo::StaticClass(), TransformRectangulo1);
	Super::BeginPlay();

	// Crear el rectángulo flotante delante del escenario y más alto para que flote
	FTransform TransformRectanguloFlotante;
	TransformRectanguloFlotante.SetLocation(FVector(1200.0f, 1000.0f, 200.0f));  // Frente al escenario y flotando en el aire
	GetWorld()->SpawnActor<AComponenteRectanguloFlotante>(AComponenteRectanguloFlotante::StaticClass(), TransformRectanguloFlotante);
	// Spawn an instance of the AMyFirstActor class at the
	//default location.
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(FVector(400.0f, -210.0f, 140.0f));
	SpawnLocation.SetRotation(FQuat(FRotator(0.0f, 0.0f, 0.0f)));
	obstaculo01 = GetWorld()->SpawnActor<AObstaculoMuro>(AObstaculoMuro::StaticClass(), SpawnLocation);
	/*if (player01 != nullptr)
	{
		player01->SetObstaculo(obstaculo01);
	}*/
	// Variables ajustadas para acomodar 15 plataformas por piso
	FVector posicionInicial = FVector(1160.0f, -1100.0f, 600.f);
	FRotator rotacionInicial = FRotator(0.0f, 0.0f, 10.0f);  // Inclinación inicial
	FTransform SpawnLocationCP;  // Usado para almacenar la transformación de la plataforma
	float anchoComponentePlataforma = 171.4286f;  // Distancia entre plataformas en el eje Y (ajustada)
	float incrementoAltoComponentePlataforma = -30.0f;  // Cambio de altura entre plataformas en un piso (ajustado)
	float incrementoAltoEntrePisos = 850.0f;  // Cambio de altura entre pisos
	float incrementoInicioPiso = 100.0f;  // Desplazamiento en Y entre pisos (zigzag entre pisos)

	for (int npp = 0; npp < 6; npp++) {  // Ahora incluye 6 filas (0-5)

		// Alternar el ángulo de inclinación entre positivo y negativo en cada piso
		rotacionInicial.Roll = rotacionInicial.Roll * -1;

		// Alternar la dirección del desplazamiento en el eje Y entre los pisos
		incrementoInicioPiso = incrementoInicioPiso * -1;

		// Alternar el cambio en altura entre plataformas (hacia arriba o hacia abajo)
		incrementoAltoComponentePlataforma = incrementoAltoComponentePlataforma * -1;

		// Configurar la rotación para la plataforma actual
		SpawnLocationCP.SetRotation(FQuat(rotacionInicial));

		// Para la sexta fila (npp == 5), crear plataformas en línea recta
		if (npp == 5) {
			// Eliminar el efecto de zigzag y dejar una fila recta
			for (int ncp = 0; ncp < 15; ncp++) {
				SpawnLocationCP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y + anchoComponentePlataforma * ncp, posicionInicial.Z));

				// Crear y agregar la plataforma
				componentesPlataforma.Add(GetWorld()->SpawnActor<AcomponentePlataforma>(AcomponentePlataforma::StaticClass(), SpawnLocationCP));

				// Para asegurar que todas las plataformas estén al mismo nivel en el eje Z (para filas alineadas)
				posicionInicial.Z = 5000.0f;  // Valor constante para la fila en línea recta

				// En caso de que quieras una fila perfectamente alineada y sin rotación:
				rotacionInicial.Roll = 0.0f;
				SpawnLocationCP.SetRotation(FQuat(rotacionInicial));
			}
		}
		else {
			// Creación de plataformas con zigzag e inclinación para las filas 1 a 5
			for (int ncp = 0; ncp < 15; ncp++) {
				// Posicionar la plataforma en el eje Y, dejando un espacio entre plataformas
				SpawnLocationCP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y + anchoComponentePlataforma * ncp, posicionInicial.Z));
				// Crear la plataforma
				AcomponentePlataforma* NuevaPlataforma = GetWorld()->SpawnActor<AcomponentePlataforma>(AcomponentePlataforma::StaticClass(), SpawnLocationCP);
				componentesPlataforma.Add(NuevaPlataforma);

				// Inicializar el movimiento para las plataformas 2 y 4
				if (npp == 1 || npp == 3) { // Identifica el 2do y 4to piso
					NuevaPlataforma->InicializarPlataforma(true, 200.0f, 300.0f); // Ajusta la velocidad y distancia según sea necesario
				}

				// Ajusta la altura de la siguiente plataforma en el mismo piso
				if (ncp < 14) {  // Cambiado de 9 a 14
					posicionInicial.Z = posicionInicial.Z + incrementoAltoComponentePlataforma;
				}
			}

			// Aumentar la altura para el próximo piso
			posicionInicial.Z = posicionInicial.Z + incrementoAltoEntrePisos;

			// Desplazar ligeramente en el eje Y el inicio del próximo piso para dar un efecto de zigzag
			posicionInicial.Y = posicionInicial.Y + incrementoInicioPiso;
		}
	}
	// Llama a SpawnMurosEnPisos() con un pequeño retraso para asegurarte de que todo está inicializado
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ADonkeyKong_L02GameMode::SpawnMurosEnPisos, 1.0f, false);
	//Crear una esfera en la parte superior del primer piso que baje rebotando hasta llegar al suelo
	
	for (int nes = 0; nes < 5; nes++) {
		FTransform SpawnLocationEsfera;
		SpawnLocationEsfera.SetLocation(FVector(1300.0f, -200.0f, 1060.0f));
		SpawnLocationEsfera.SetRotation(FQuat(FRotator(0.0f, 0.0f, 0.0f)));
		esferasMap.Add(nes, GetWorld()->SpawnActor<AEsfera>(AEsfera::StaticClass(), SpawnLocationEsfera));
	}
}

void ADonkeyKong_L02GameMode::SpawnMurosEnPisos()
{
	UWorld* Mundo = GetWorld();
	if (!Mundo)
	{
		UE_LOG(LogTemp, Error, TEXT("No se pudo obtener el mundo en ADonkeyKong_L02GameMode::SpawnMurosEnPisos."));
		return;
	}

	// Crear una instancia de la fábrica
	AMuroFactoryConcreto* FabricaDeMuros = Mundo->SpawnActor<AMuroFactoryConcreto>();
	if (!FabricaDeMuros)
	{
		UE_LOG(LogTemp, Error, TEXT("No se pudo crear la fábrica de muros."));
		return;
	}

	// Coordenadas y tipos para spawnear los muros
	TArray<FVector> UbicacionesMuros = {
		FVector(1150.0f, -500.0f, 1000.0f),   // Muro en piso 1
		FVector(1150.0f, 500.0f, 1800.0f),    // Muro en piso 2
		FVector(1150.0f, 0.0f, 2730.0f),      // Muro en piso 3
		FVector(1200.0f, 500.0f, 3600.0f),    // Muro en piso 4
		FVector(1200.0f, 600.0f, 4600.0f),    // Muro en piso 5
		FVector(1100.0f, -1400.0f, 500.0f)    // Muro de ladrillos
	};

	TArray<int32> TiposDeMuros = {
		1, // MuroResorte
		2, // MuroFuego
		3, // MuroElectrico
		4, // MuroCongelado
		5, // MuroPegajoso
		6  // MuroLadrillos
	};

	// Spawnear los muros utilizando la fábrica
	for (int32 i = 0; i < UbicacionesMuros.Num(); ++i)
	{
		FVector SpawnLocation = UbicacionesMuros[i];
		int32 TipoMuro = TiposDeMuros[i];
		AMuro* NuevoMuro = FabricaDeMuros->CrearMuro(SpawnLocation, TipoMuro);

		if (NuevoMuro)
		{
			UE_LOG(LogTemp, Log, TEXT("Muro spawneado en %s"), *SpawnLocation.ToString());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No se pudo spawnear el muro en %s"), *SpawnLocation.ToString());
		}
	}

	// Opcional: Si no necesitas más la fábrica, puedes destruirla
	FabricaDeMuros->Destroy();
}