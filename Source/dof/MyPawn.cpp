// Fill out your copyright notice in the Description page of Project Settings.

#include "dof.h"
#include "MyPawn.h"


// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->vitesse = 0.0f;
	this->maxVitesse = 500.0f;
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

void AMyPawn::addAcceleration(float pAcceleration){
	if (((this->vitesse + pAcceleration) < this->maxVitesse) && ((this->vitesse + pAcceleration) >= 0)){
		this->vitesse += pAcceleration;
	}
	else{
		if ((this->vitesse + pAcceleration) <= 0){
			this->vitesse = 0;
		}
		else{
			this->vitesse = this->maxVitesse;
		}
	}
	this->vitesse += pAcceleration;
}

float AMyPawn::getVitesse()
{
	return this->vitesse;
}
