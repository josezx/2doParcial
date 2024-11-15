#include "SwordDecorator.h"
#include "DonkeyKong_L02Character.h"
#include "Engine/Engine.h"

ASwordDecorator::ASwordDecorator()
{
	WeaponName = "Espada"; // Nombre del arma
}

void ASwordDecorator::EquipWeapon(ADonkeyKong_L02Character* Character)
{
	if (Character)
	{
		Character->bHasWeapon = true; // Indica que el personaje tiene un arma
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Arma equipada: %s"), *WeaponName));
	}
}

void ASwordDecorator::UnequipWeapon(ADonkeyKong_L02Character* Character)
{
	if (Character)
	{
		Character->bHasWeapon = false; // Indica que el personaje ya no tiene un arma
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Arma removida: %s"), *WeaponName));
	}
}

