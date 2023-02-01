// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Singleton_PatternGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SINGLETON_PATTERN_API ASingleton_PatternGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ASingleton_PatternGameModeBase();

private:
    //El inventario Actor
    UPROPERTY()
        class AInventario* Inventario;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
};

