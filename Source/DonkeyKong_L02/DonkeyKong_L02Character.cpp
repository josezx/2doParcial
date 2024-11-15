// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_L02Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AShooterProjectile.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "Obstaculo.h"
#include "DonkeyKong_L02GameMode.h"


ADonkeyKong_L02Character::ADonkeyKong_L02Character()
{
	bHasWeapon = false; // Por defecto, el personaje no tiene un arma
	Health = 100.0f;  // Salud inicial del personaje
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Pawn"));
	GetCapsuleComponent()->SetGenerateOverlapEvents(true); // Habilitar eventos de superposición
	// Inicializa las variables para el disparo
	bCanFire = true;
	FireRate = 0.3f;  // Intervalo de disparo
	GunOffset = FVector(150.f, 0.f, 50.f);  // Ajusta el offset según el origen del disparo
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Pawn")); // Configurar el perfil de colisión
	GetCapsuleComponent()->SetGenerateOverlapEvents(true); // Habilitar eventos de superposición
	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 1500.f;
	CameraBoom->SocketOffset = FVector(0.f,0.f,75.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f,180.f,0.f));

	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1500.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

void ADonkeyKong_L02Character::ReceiveDamage(float Amount)
{
	Health -= Amount;

	// Verifica si la salud llega a 0
	if (Health <= 0.0f)
	{
		Health = 0.0f;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("¡El personaje ha muerto!"));
		// Aquí puedes agregar lógica para "matar" al personaje, como reiniciar el nivel o detener el juego
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Salud restante: %f"), Health));
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void ADonkeyKong_L02Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &ADonkeyKong_L02Character::MoveRight);
	// Configurar el disparo
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ADonkeyKong_L02Character::FireShot);
	//PlayerInputComponent->BindAction("Parar", IE_Pressed, this, &ADonkeyKong_L01Character::Parar);
	//PlayerInputComponent->BindAction("Parar", IE_Released, this, &ADonkeyKong_L01Character::Parar);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &ADonkeyKong_L02Character::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ADonkeyKong_L02Character::TouchStopped);
}

void ADonkeyKong_L02Character::MoveRight(float Value)
{
	// add movement in that direction
	AddMovementInput(FVector(0.f,-1.f,0.f), Value);
}

void ADonkeyKong_L02Character::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	Jump();
}

void ADonkeyKong_L02Character::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

void ADonkeyKong_L02Character::Parar()
{
	//obstaculo01->setIncrementoZ(0.0f);
	detener = !detener;
	obstaculo01->setDetener(detener);
}

void ADonkeyKong_L02Character::FireShot()
{
	if(bCanFire)
	{
		// Posición desde la que se dispara (ajusta según el diseño de tu personaje)
		FVector MuzzleLocation = GetActorLocation() + GunOffset;

		// Rotación basada en la dirección actual del personaje
		FRotator MuzzleRotation = GetActorRotation();

		// Aplica una dirección de lanzamiento adecuada
		FVector LaunchDirection = MuzzleRotation.Vector();  // Esto obtiene la dirección en la que el personaje está mirando

		// Crear el proyectil en el mundo
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			AAShooterProjectile* Projectile = World->SpawnActor<AAShooterProjectile>(MuzzleLocation, MuzzleRotation);
			if (Projectile)
			{
				// Aplicar la velocidad al proyectil en la dirección de lanzamiento
				Projectile->ProjectileMovement->Velocity = LaunchDirection * Projectile->ProjectileMovement->InitialSpeed;
			}

			// Control para evitar disparar continuamente
			bCanFire = false;
			World->GetTimerManager().SetTimer(FireRateHandle, this, &ADonkeyKong_L02Character::ResetFire, FireRate);
		}
	}
}

void ADonkeyKong_L02Character::ResetFire()
{
	bCanFire = true;
}


void ADonkeyKong_L02Character::DisplayProperties()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Propiedades del personaje base."));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Tiene arma: %s"), bHasWeapon ? TEXT("Sí") : TEXT("No")));
}