// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_USFX_LAB02_BDMCGameMode.h"
#include "PVZ_USFX_LAB02_BDMCPawn.h"
#include "Spawns.h"
#include "Zombie.h"
#include "Plant.h"
#include "Sol.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/Engine.h"
#include "Jugador.h"

APVZ_USFX_LAB02_BDMCGameMode::APVZ_USFX_LAB02_BDMCGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APVZ_USFX_LAB02_BDMCPawn::StaticClass();

	contador = FVector(0, 0, 0);
	localizacion = FVector(400.0, 200.0, 100.0);
	contador2 = 0;

	TiempoTranscurrido = 0.0f;
}





// PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN PARTE DEL EXAMEN
void APVZ_USFX_LAB02_BDMCGameMode::BeginPlay()
{
	// Definición de un objeto de tipo World
	UWorld* const World = GetWorld();

	FVector SpawnLocationPlant = FVector(-800.0f, -600.0f, 160.0f);
	FVector SpawnLocationPlantTemp = SpawnLocationPlant;

	for (int i = 0; i < 5; i++)
	{
		// Define una posición temporal para la planta en X
		SpawnLocationPlantTemp.X += 100;

		for (int j = 0; j < 2; j++)
		{
			// Define una posición temporal para la planta en Y
			SpawnLocationPlantTemp.Y += 80;

			// Genera un nombre para la planta y el zombie
			FString NombrePlanta = FString::Printf(TEXT("Planta%d"), i + 1);
			FString NombreZombie = FString::Printf(TEXT("Zombie%d"), i + 1);

			// Crea una nueva instancia de APlant en el mundo
			APlant* NuevaPlanta = GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocationPlantTemp, FRotator::ZeroRotator);

			// Crea una nueva instancia de AZombie en el mundo
			AZombie* NuevoZombies = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocationPlantTemp + FVector(0, 0, 50), FRotator::ZeroRotator);

			// Agrega la planta y el zombie a sus respectivos contenedores
			PlantasZombies.Add(NombrePlanta, NuevaPlanta);
			PlantasZombies.Add(NombreZombie, NuevoZombies);
		}

		// Restablece la posición temporal en Y para la próxima fila de plantas
		SpawnLocationPlantTemp.Y = SpawnLocationPlant.Y;
	}



	World->GetTimerManager().SetTimer(Temporizador, this, &APVZ_USFX_LAB02_BDMCGameMode::aumentovelocidad, 1, true);


}


void APVZ_USFX_LAB02_BDMCGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APVZ_USFX_LAB02_BDMCGameMode::Spawn()
{
	contador2++;

	contador = contador + FVector(100, 0, 0);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Este es un mensaje")));


	AZombie* Zombie1 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), localizacion, FRotator::ZeroRotator);



	localizacion.X = localizacion.X + contador2 * 100;
	localizacion.Y = localizacion.Y + contador2 * 100;

}

void APVZ_USFX_LAB02_BDMCGameMode::aumentovelocidad()
{
	for (int i = 0; i < Zombies.Num(); i++)
	{
		Zombies[i]->Velocidad = +FMath::FRandRange(0, 0.2);
	}

}