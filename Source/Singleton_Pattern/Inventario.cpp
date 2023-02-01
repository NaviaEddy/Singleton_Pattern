// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventario.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AInventario::AInventario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    //Buscar instancias existentes de esta clase
    TArray<AActor*> Instancias;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AInventario::StaticClass(), Instancias);

    if (Instancias.Num() > 1)
    {
        //Si existe al menos uno de ellos, establece la instancia con el primero encontrado
        Instancia = Cast<AInventario>(Instancias[0]);
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s ya existe"), *Instancia->GetName()));

        //Entonces Destruye este Actor
        Destroy();
    }


}

// Called when the game starts or when spawned
void AInventario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInventario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

