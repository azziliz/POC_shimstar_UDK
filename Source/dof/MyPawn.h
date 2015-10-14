// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyPawn.generated.h"

UCLASS()
class DOF_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ship")
		float vitesse;

	UFUNCTION(BlueprintCallable, Category = "ship")
		void addAcceleration(float pAcceleration);

	UFUNCTION(BlueprintCallable, Category = "ship")
		float getVitesse();

	float maxVitesse;


	
	
};
