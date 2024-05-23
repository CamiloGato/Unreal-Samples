// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleScript.h"

// Sets default values
ASimpleScript::ASimpleScript(): Value(0)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASimpleScript::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASimpleScript::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

