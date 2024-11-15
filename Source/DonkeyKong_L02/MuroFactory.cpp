// Fill out your copyright notice in the Description page of Project Settings.


// MuroFactory.cpp

#include "MuroFactory.h"

// Sets default values
AMuroFactory::AMuroFactory()
{
    // Disable ticking if not needed
    PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void AMuroFactory::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AMuroFactory::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}


