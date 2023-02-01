// Copyright Epic Games, Inc. All Rights Reserved.


#include "Singleton_PatternGameModeBase.h"
#include "Inventario.h"

ASingleton_PatternGameModeBase::ASingleton_PatternGameModeBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASingleton_PatternGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    //Creacion de 4 inventarios
    for (int i = 0; i <= 4; i++)
    {
        AInventario* EngendrarInventario = GetWorld()->SpawnActor<AInventario>(AInventario::StaticClass());

        if (EngendrarInventario)
        {
            //Si el engendramiento tiene éxito, establece el inventario engendrado al local y registra la cadena de éxito
            Inventario = EngendrarInventario;
            GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor :: Yellow, FString::Printf(TEXT("%s se ha creado"), *Inventario->GetName()));
        }
    }
}
// Called every frame
void ASingleton_PatternGameModeBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}