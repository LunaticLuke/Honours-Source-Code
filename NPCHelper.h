// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NPCHelper.generated.h"

UCLASS()
class HONOURSPROJECT_API ANPCHelper : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPCHelper();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to inpute
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveToLocation(AActor* LocationToTravelTo);

};
