#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponDecorator.h"
#include "SwordDecorator.generated.h"

UCLASS()
class DONKEYKONG_L02_API ASwordDecorator : public AActor, public IWeaponDecorator
{
	GENERATED_BODY()

private:
	FString WeaponName; // Nombre del arma

public:
	ASwordDecorator();

	// Métodos de la interfaz
	virtual void EquipWeapon(class ADonkeyKong_L02Character* Character) override;
	virtual void UnequipWeapon(class ADonkeyKong_L02Character* Character) override;
};
