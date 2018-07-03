// Copyrigth Dominik Pavlíèek.

#include "Tank.h"

// Sets default values
ATank::ATank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

void ATank::BeginPlay()
{
	Super::BeginPlay(); // <---------------|| needed for BP BeginPlay!
	TankHealth = TankBaseHealth;
}

float ATank::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	TankHealth -= FMath::RoundToInt(DamageAmount);
	UE_LOG(LogTemp, Warning, TEXT("DamageAmount = %f || Current HP = %i"), DamageAmount, TankHealth)
	if (TankHealth <= 0)
	{
		OnDeath.Broadcast();
	}
	return DamageAmount;
}

float ATank::GetHealthPercentage()
{
	return (float)TankHealth / (float)TankBaseHealth;	
}