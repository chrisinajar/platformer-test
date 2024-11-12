// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlatformerMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORM_TEST_API UPlatformerMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
public:
	virtual void PhysCustom(float deltaTime, int32 Iterations);
};
